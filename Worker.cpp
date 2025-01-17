#include "Worker.h"
#include "AntennaLoss/AntennaLossFileProvider.h"
#include "MapProvider/MapDataProvider.h"
#include "RSRP/RsrpCalculation.h"
#include "RSRP/RsrpInitialization.h"
#include "Workers/PixelWorkerForInterference.h"
#include "Workers/PixelWorkerForModulation.h"
#include "Workers/PixelWorkerForRsrq.h"
#include "Workers/PixelWorkerForSNIR.h"
#include <QDebug>
#include <cmath>
#include <QtConcurrent/QtConcurrent>
#include "Throughput/ThroughputCalculator.h"

#include "Common/Units.h"

std::mutex Worker::mut;

Worker::Worker(std::shared_ptr<ThreadPool> p_pool,
               DataProvider& p_data,
               std::shared_ptr<IMapDataProvider> p_mapDataProvider)
    : pool(std::move(p_pool)), data(p_data), mapDataProvider(std::move(p_mapDataProvider)), sectors(p_data.sectorControler)
{
}

void Worker::doCalculation()
{
    if (data.areaPixels.empty()) // core dump when user click run without selected sector
    {
        return;
    }
    initializeThrouputData();

    // future = QtConcurrent::run(this, &Worker::makeQueueOfCalculationTaskAndRun);
    future = QtConcurrent::run([this]() {
        this->makeQueueOfCalculationTaskAndRun();
    });

}

void Worker::makeQueueOfCalculationTaskAndRun()
{
    calculateRsrpForSectors();
    areaCalculation = std::make_unique<AreaCalculation>(data.areaPixels);
    for (auto j = areaCalculation->beginY(); j < areaCalculation->endY(); j++) // y
    {
        for (auto i = areaCalculation->beginX(); i < areaCalculation->endX(); i++) // x
        {
            PixelXY pixel(i, j);
            if (!isBaseStation(pixel))
            {
                pool->add(std::bind(&Worker::executeCalculationForPixel, this, pixel), pixel);
            }
        }
    }

    pool->start();
    emit poolStarted();
    pool->stop();

    saveInFile(RSRP.vector, "rsrp.txt");
    saveInFile(data.interferenceLvl, "rssi.txt");
    saveInFile(data.rsrq, "rsrq.txt");
    saveInFile(data.snir, "snir.txt");

    calculateAverageThroughtputForSectors();
    data.getRsrp(std::move(RSRP.vector));
    if (!data.rsrp.vector.empty())
    {
        emit done();
    }
}

void Worker::listInCoutRSPR()
{
    for (auto rsrp : RSRP.vector)
    {
        std::cout << rsrp.second << " " << rsrp.first.getX() << " " << rsrp.first.getY() << std::endl;
    }
}

void Worker::calculateRsrpForSectors()
{
    if (sectors)
    {
        RsrpInitialization rsrpInit;
        std::unique_ptr<IRsrpCalculation> rsrpCalculator(std::make_unique<RsrpCalculation>(rsrpInit));
        for (auto sec : sectors->getVectorOfSectors())
        {
            rsrpForSectors.push_back(rsrpCalculator->calculateRsrp(sec));
        }
    }
}

void Worker::executeCalculationForPixel(PixelXY pixel)
{
    Receiver receiver = setupReciver(pixel);
    PixelWorker pixelWorkerSignal(RSRP, rsrpForSectors, mapDataProvider, *sectors, receiver, data.minValueOfRSRP);
    pixelWorkerSignal.executeCalculation();
    double interference = calculateInterference(pixel, pixelWorkerSignal); //[W]

    if(interference != 0)
    {
        PixelWorkerForRsrq workerForRSRQ;
        double rsrq = workerForRSRQ.calculate(interference,
                                              pixelWorkerSignal.getCurrentSignalPower().second, //[W]
                                              pixelWorkerSignal.getCurrentSignalPower().first,
                                              pixel,
                                              data.rsrq);
        double snir = calculateSnir(pixel, rsrq); //[dB]

        PixelWorkerForModulation pixelWorkerForModulation;
        pixelWorkerForModulation.calculate(pixel, snir, data.modulation);

        std::unique_lock<std::mutex> lock(mut);
        data.throughput[pixelWorkerSignal.getMaxRsrpSectorIndex()].addSnir(snir);
    }
}

bool Worker::isBaseStation(PixelXY pixel)
{
    bool isBase = false;
    for (auto station : data.baseStations)
    {
        if (pixel.getX() == station->getPossition().first and pixel.getY() == station->getPossition().second)
        {
            isBase = true;
        }
    }
    return isBase;
}

void Worker::deleteNanValue()
{
    RSRP.vector.erase(
        std::remove_if(RSRP.vector.begin(), RSRP.vector.end(), [](const std::pair<PixelXY, double>& dataObj) {
            return dataObj.second == std::nanf("");
        }));
}

void Worker::saveInFile(const std::vector<std::pair<PixelXY, double>>& vector, std::string name)
{
    std::fstream plik;
    plik.open(name.c_str(), std::ios::out);
    if (plik.good() == true)
    {
        for (auto r : vector)
        {
            plik << r.first.getX() << " " << r.first.getY() << " " << r.second;
            plik << "\n";
        }
    }
    plik.close();
}

void Worker::saveThroughtputInFile(std::string name)
{
    std::fstream plik;
    plik.open(name.c_str(), std::ios::out);
    if (plik.good() == true)
    {
        for (const auto& thrData : data.throughput)
        {
            plik << "ecgi: " << thrData.getSectorEcgi() << " | " << thrData.getThroughput();
            plik << "\n";
        }
    }
    plik.close();
}

void Worker::calculateAverageThroughtputForSectors()
{
    ThroughputCalculator thrCalc(data.throughput);
    thrCalc.calculate();
    saveThroughtputInFile("throughput.txt");
}

Receiver Worker::setupReciver(const PixelXY& pixel)
{
    Receiver receiver{};
    receiver.setPossition(pixel.getXy());
    receiver.setGain(data.receiver.getGain());
    receiver.setOtherLosses(data.receiver.getOtherLosses());
    receiver.setHeight(data.receiver.getHeight());

    return receiver;
}

double Worker::calculateInterference(const PixelXY& pixel, const PixelWorker& pixelWorker)
{
    PixelWorkerForInterference pixelWorkerInt(pixelWorker.getResultFromAllSectors(),
                                              pixelWorker.getCurrentSignalPower(),
                                              pixelWorker.getCurrentBand());
    return pixelWorkerInt.calculate(data.interferenceLvl, pixel);
}

double Worker::calculateSnir(const PixelXY& pixel, double signalLvl)
{
    PixelWorkerForSNIR pixelWorkerForSnir;
    return pixelWorkerForSnir.calculate(signalLvl, pixel, data.snir);
}

void Worker::initializeThrouputData()
{
    for(const auto& sector: sectors->getVectorOfSectors())
    {
        data.throughput.push_back(ThroughputData(sector));
    }
}
