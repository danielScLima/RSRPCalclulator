#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BaseStationForm.h"
#include "SectorForm.h"
#include "SelectBaseStationForm.h"
#include <QMessageBox>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <algorithm>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include "ImagePainter.h"
#include <QMouseEvent>
#include "ReceiverForm.h"
#include "Rectangle.h"
#include "Display/NetworkObjectWizualizator.h"
#include <QDebug>
#include "hoverablepixmapitem.h"

MainWindow::MainWindow(DataProvider& p_data, std::shared_ptr<IMapDataProvider> p_mapData, QWidget * parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    data(p_data),
    scene(nullptr),
    mapDataProvider(std::move(p_mapData)),
    currenItemInScene(nullptr),
    progressBar(this)
{
    ui->setupUi(this);
    QPixmap img;
    img.load(":/mapy/mapa");
    displayImage(img, data.rsrp.vector);
    networkWizualizator = std::make_unique<NetworkObjectWizualizator>(this, ui->treeWidget, p_data);

    QWidget::setWindowTitle("Calculator @created by Ewelina Berlicka");

    ui->label2->hide();
    ui->label3->hide();;
    ui->label4->hide();
    ui->maxLabel->setText(" ");
    ui->minLabel->setText(" ");
    ui->scalaGraphicsView->hide();
    ui->valueLabel->setText(" ");
    ui->minimumRSRSPdoubleSpinBox->setRange(-200,0);
    ui->minimumRSRSPdoubleSpinBox->setValue(-120);

    auto statusLabel = new QLabel(this);
    statusLabel->setText("Progress:");
    ui->statusBar->addPermanentWidget(statusLabel, 0);
    ui->statusBar->addPermanentWidget(&progressBar, 1);

    setUpImagesRadioBoxes();
    addMenu();

    connect(ui->calculatePushButton, SIGNAL(pressed()), this, SIGNAL(calculationButtonPressed()));

    connect(ui->baseToolButton, SIGNAL(pressed()), this, SLOT(baseStationUi_clicked()));
    connect(ui->sectorToolButton, SIGNAL(pressed()), this, SLOT(selectBase()));
    connect(ui->receiverButton, SIGNAL(pressed()), this, SLOT(receiverClicked()));
    connect(ui->minimumRSRSPdoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(changeMinRSRPValueInData(double)));
    connect(ui->rectangleToolButton, SIGNAL(pressed()), this, SLOT(actionRectangleTriggered()));
    connect(ui->zoomInButton, SIGNAL(pressed()), this, SLOT(zoomIn()));
    connect(ui->zoomOutButton, SIGNAL(pressed()), this, SLOT(zoomOut()));
    connect(ui->terrainCheckBox, SIGNAL(clicked(bool)), this, SLOT(terrainProfileTriggered(bool)));
    connect(ui->interferenceCheckBox, SIGNAL(clicked(bool)), this, SLOT(drawInterferenceImage(bool)));
    connect(ui->snirCheckBox, SIGNAL(clicked(bool)),this, SLOT(drawSnirImage(bool)));
    connect(ui->signalRadioButton, SIGNAL(clicked(bool)),this, SLOT(drawSignalImg(bool)));
    connect(ui->modulationRadioButton, SIGNAL(clicked(bool)),this, SLOT(drawModulationImg(bool)));
    connect(ui->rsrqRadioButton, SIGNAL(clicked(bool)),this, SLOT(drawRsrqImg(bool)));

    terProfile = std::make_shared<TerrainProfile>(data, mapDataProvider, this);
    connect(terProfile.get(), SIGNAL(drawLine()), this, SLOT(drawTerrainLine()));
    connect(ui->terrainPushButton, SIGNAL(pressed()), this, SLOT(saveLineData()));

    networkWizualizatorStart();
}

void MainWindow::closeEvent(QCloseEvent * /*event*/)
{
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayImage(const QPixmap & img, std::vector<std::pair<PixelXY, double> > & pixelData)
{
    if(scene != nullptr)
    {
        scene->clear();
    }
    scene = new QGraphicsScene(this);
    mapArea = new ScribbleArea(ui->checkBox, ui->terrainCheckBox, pixelData, ui->valueLabel,img);
    mapArea->setFlags(QGraphicsItem::ItemIsMovable);
    scene->addItem(mapArea);
    ui->mapGraphicsView->setScene(scene);
    ui->mapGraphicsView->show();
}

void MainWindow::addMenu()
{
    QMenu * mainMenu = new QMenu(tr("&Menu"), this);
    //QMenu * tools = new QMenu(tr("&Tools"), this);

    QMainWindow::menuBar()->addMenu(mainMenu);
    mainMenu->addAction(tr("&Quit"), this, SLOT(close()));

    //QMainWindow::menuBar()->addMenu(tools);
    //tools->addAction(tr("&Add Base Station"), this, SLOT(baseStationUi_clicked()), tr("Ctrl+B"));
}

void MainWindow::drawImage(std::vector<std::pair<PixelXY,double>>& p_pixelData)
{
    ImagePainter paint(p_pixelData, this);
    QPixmap px;
    px.load(":/mapy/mapa");
    QPainter painter(&px);
    maxFromData = paint.findMax();
    minFromData = paint.findMin();
    double roznica = maxFromData - minFromData;
    double wspolczynnik = 100/roznica;
    for(auto dat : p_pixelData)
    {
        double color = (dat.second - minFromData)*wspolczynnik;
        painter.setPen(paint.getColor(color));
        painter.drawPoint(dat.first.getX(), dat.first.getY());
    }
    painter.end();
    displayImage(px, p_pixelData);
    showScale(paint, maxFromData, minFromData);
}

void MainWindow::showScale(ImagePainter & paint, double max, double min)
{
    QPixmap px;
    px.load(":/obrazki/Pictures/scala.ppm");
    QPainter painter(&px);

    for(int i = 1; i <= 200; i++)
    {
        painter.setPen(paint.getColor(i*0.5));
        painter.drawLine(10,i,50,i);
    }
    painter.end();

    scaleScene = new QGraphicsScene(this);
    scaleItem = new QGraphicsPixmapItem(px);
    scaleScene->addItem(scaleItem);

    ui->scalaGraphicsView->setScene(scaleScene);
    std::string Str = std::to_string(min) + "[dBm] ";
    ui->minLabel->setText(Str.c_str());
    ui->label2->setText(" ");
    ui->label2->show();
    ui->label3->setText(" ");
    ui->label3->show();
    ui->label4->setText(" ");
    ui->label4->show();
    Str = std::to_string(max) + "[dBm] ";
    ui->maxLabel->setText(Str.c_str());
    ui->scalaGraphicsView->show();
    currenItemInScene = nullptr; //bo nowa scene po policzeniu
}

void MainWindow::setPixelsArea(const QRectF rect)
{
    data.areaPixels.clear();
    qreal x, y;
    qreal qwidth, qheight;
    rect.getRect(&x, &y, &qwidth, &qheight);

    auto coordX = static_cast<int>(x);
    auto coordY = static_cast<int>(y);
    auto width = static_cast<int>(qwidth);
    auto height = static_cast<int>(qheight);

    std::pair<int,int> coord(coordX, coordY);;
    std::pair<int,int> coord2(coordX + width, coordY);
    std::pair<int,int> coord3(coordX, coordY + height);
    std::pair<int,int> coord4(coordX + width, coordY + height);

    data.areaPixels.push_back(coord);
    data.areaPixels.push_back(coord2);
    data.areaPixels.push_back(coord3);
    data.areaPixels.push_back(coord4);
}

void MainWindow::networkWizualizatorStart()
{
    networkWizualizator->show();
}

void MainWindow::receiverClicked()
{
    if(!receiver)
    {
        receiver = std::make_unique<ReceiverForm>(data,this);
    }
    receiver->show();
}

void MainWindow::changeMinRSRPValueInData(double minRsrpValue)
{
    data.minValueOfRSRP = minRsrpValue;
}

void MainWindow::actionRectangleTriggered()
{
    //uncheckAllToolbar();calculationButtonPressed
    auto r = new Rectangle();

    data.clearCalculationData();

    if(!areaCalculationPixmap)
    {
        areaCalculationPixmap = std::make_shared<QPixmap>();
    }
    areaCalculationPixmap->load(":/mapy/mapa");
    if(!rectanglePainter)
    {
        rectanglePainter = std::make_unique<QPainter>(areaCalculationPixmap.get());
    }
    canvas = new Canvas(*areaCalculationPixmap);
    if(!drawRectangle)
    {
        drawRectangle = std::make_unique<DrawRectangle>();
        connect(drawRectangle.get(), SIGNAL(drawingDone()), this, SLOT(showRectangle()));
    }
    drawRectangle->setRectangle(r);
    drawRectangle->setPainter(rectanglePainter.get());
    canvas->setTool(drawRectangle.get());

    canvas->setFlags(QGraphicsItem::ItemIsMovable);

    scene->addItem(canvas);
    ui->mapGraphicsView->setScene(scene);
    ui->mapGraphicsView->show();
    drawBaseStationPossition();
}

void MainWindow::showRectangle()
{
    rectanglePainter->end();
    if(currenItemInScene != nullptr)
    {
        scene->removeItem(currenItemInScene);
        delete currenItemInScene;
    }
    QRectF rect(drawRectangle->getRect()->getPosition().x(),
                           drawRectangle->getRect()->getPosition().y(),
                           drawRectangle->getRect()->getWidth(),
                           drawRectangle->getRect()->getHeight());
    currenItemInScene = scene->addRect(rect);
    ui->mapGraphicsView->setScene(scene);
    ui->mapGraphicsView->show();
    setPixelsArea(rect);
}

void MainWindow::drawTerrainLine()
{
    if(currenItemInScene != nullptr)
    {
        scene->removeItem(currenItemInScene);
    }
    QLineF line(terProfile->getFirstPixel(), terProfile->getCurrentPixel());
    std::pair<int,int> px1(terProfile->getFirstPixel().x(), terProfile->getFirstPixel().y());
    std::pair<int,int> px2(terProfile->getCurrentPixel().x(), terProfile->getCurrentPixel().y());
    ui->terrainLabel->setText(std::to_string(mapDataProvider->coutDistance(px1,px2)).c_str());
    currenItemInScene = scene->addLine(line);
    ui->mapGraphicsView->setScene(scene);
    ui->mapGraphicsView->show();
}

void MainWindow::drawBaseStationPossition()
{
    /*QPixmap img;
    img.load(":/obrazki/baseStation");
    for(const auto& base : data.baseStations)
    {
        QGraphicsItem* item = scene->addPixmap(img);
        item->setPos(base->getPossition().first, base->getPossition().second);
    }
    ui->mapGraphicsView->setScene(scene);
    ui->mapGraphicsView->show();
    networkWizualizator->update();*/

    QPixmap img;
    img.load(":/obrazki/baseStation");
    int index = 0;
    for (const auto& base : data.baseStations)
    {
        // Cria um item "hoverable"
        QString tooltipText = QString("Base Station ID: %1").arg(index++);
        HoverablePixmapItem* item = new HoverablePixmapItem(img, tooltipText, scene);
        item->setPos(base->getPossition().first, base->getPossition().second);
        scene->addItem(item);
    }
    ui->mapGraphicsView->setScene(scene);
    ui->mapGraphicsView->show();
    networkWizualizator->update();
}

void MainWindow::zoomIn()
{
    ui->mapGraphicsView->scale(2,2);
}

void MainWindow::zoomOut()
{
    ui->mapGraphicsView->scale(0.5,0.5);
}

void MainWindow::terrainProfileTriggered(bool checked)
{
    if(checked)
    {
        mapArea->setTerriainProfile(terProfile);
    }
    else if(!checked)
    {
        scene->removeItem(currenItemInScene);
        delete currenItemInScene;
    }
}

void MainWindow::saveLineData()
{
    terProfile->drawTerrainProfile(chooseTurnOnButton());
}

void MainWindow::selectBase()
{
    if(!selectBaseStation)
    {
        selectBaseStation = std::make_unique<SelectBaseStationForm>(data, this);
        connect(selectBaseStation.get(), SIGNAL(baseStationSelected()), this, SLOT(sectorUI_clliced()));
    }
    else
    {
        selectBaseStation->update();
    }
    selectBaseStation->show();
}

void MainWindow::drawDataMap()
{
    drawImage(data.rsrp.vector);
    radioBoxesCheckable();
}

void MainWindow::setProgressBarRange(unsigned max)
{
    progressBar.setRange(0, max);
    initBarSize = max;
    qDebug() << "Size: " << max;
}

void MainWindow::updateProgressBar(unsigned progress)
{
    auto currentProgress = initBarSize - progress;
//    qDebug() << "Progress: " << currentProgress;
    progressBar.setValue(currentProgress);
}

void MainWindow::drawInterferenceImage(bool enabled)
{
    if(enabled)
    {
        drawImage(data.interferenceLvl);
    }
}

void MainWindow::drawSnirImage(bool enabled)
{
    if(enabled)
    {
        drawImage(data.snir);
    }
}

void MainWindow::drawSignalImg(bool enabled)
{
    if(enabled)
    {
        drawImage(data.rsrp.vector);
    }
}

void MainWindow::drawModulationImg(bool enabled)
{
    if(enabled)
    {
        drawImage(data.modulation);
    }
}

void MainWindow::drawRsrqImg(bool enabled)
{
    if(enabled)
    {
        drawImage(data.rsrq);
    }
}

BaseStations::iterator MainWindow::getIndexOfBaseStation()
{
    BaseStations::iterator it;
    std::string key = selectBaseStation->getSelectedBaseStation();

    it = std::find_if(data.baseStations.begin(), data.baseStations.end(),
                      [key](std::shared_ptr<BaseStation> base) -> bool {
                            return base->getName() == key;
    });
    return it;
}

void MainWindow::baseStationUi_clicked()
{
    baseStationForm = std::make_unique<BaseStationForm>(geoConverter, data, this);
    connect(baseStationForm.get(), SIGNAL(baseStationCreated()), this, SLOT(drawBaseStationPossition()));
    connect(baseStationForm.get(), SIGNAL(baseStationCreated()), networkWizualizator.get(), SLOT(update()));
    baseStationForm->show();
}

void MainWindow::sectorUI_clliced()
{
    if (baseStationForm)
    {
        sectorForm = std::make_unique<SectorForm>(data.sectorControler, *getIndexOfBaseStation(), this);
        connect(sectorForm.get(), SIGNAL(sectorCreated()), networkWizualizator.get(), SLOT(update()));
        sectorForm->show();
    }
    else
    {
        QMessageBox messageBox;
        messageBox.critical(nullptr, "Error","You must add base station!");
        messageBox.setFixedSize(500,200);
    }
}

void MainWindow::radioBoxesCheckable()
{
    ui->interferenceCheckBox->setCheckable(true);
    ui->snirCheckBox->setCheckable(true);
    ui->signalRadioButton->setCheckable(true);
    ui->signalRadioButton->setChecked(true);
}

void MainWindow::setUpImagesRadioBoxes()
{
    ui->interferenceCheckBox->setCheckable(false);
    ui->snirCheckBox->setCheckable(false);
    ui->signalRadioButton->setCheckable(false);
}

RadioButtonType MainWindow::chooseTurnOnButton()
{
    if(ui->rsrqRadioButton->isChecked())
        return RadioButtonType::RSRQ;
    else if(ui->signalRadioButton->isChecked())
        return RadioButtonType::RSRP;
    else if(ui->snirCheckBox->isChecked())
        return RadioButtonType::SNIR;
    else if(ui->interferenceCheckBox->isChecked())
        return RadioButtonType::RSSI;
    else if(ui->modulationRadioButton->isChecked())
        return RadioButtonType::CQI;

    return RadioButtonType::null;
}
