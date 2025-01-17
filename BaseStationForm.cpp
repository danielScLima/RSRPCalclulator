#include "BaseStationForm.h"
#include "ui_BaseStationForm.h"
#include "Core/PixelXY.h"
#include "Core/BaseStation.h"
#include "DataProvider.h"
#include "MapProvider/GeographicalCoordinatesConverter.h"

BaseStationForm::BaseStationForm(GeographicalCoordinatesConverter const& p_geoConverter, DataProvider &p_data, QWidget *parent) :
    QDialog(parent),
    geoConverter(p_geoConverter),
    data(p_data),
    ui(new Ui::BaseStationForm)
{
    ui->setupUi(this);
    ui->xSpinBox->setMaximum(3802);
    ui->ySpinBox->setMaximum(3942);
    ui->heightBox->setMaximum(1000);

    QWidget::setWindowTitle("New base station");
}

BaseStationForm::~BaseStationForm()
{
    delete ui;
}

std::shared_ptr<BaseStation> BaseStationForm::getBaseStation()
{
    return baseStation;
}

void BaseStationForm::accept()
{
    commit();
    emit baseStationCreated();
    QDialog::accept();
}

void BaseStationForm::update()
{

}

void BaseStationForm::commit()
{
    double x = ui->xSpinBox->value();
    double y = ui->ySpinBox->value();
    std::pair<int,int> pixel = geoConverter.geographicalCoordinatesToPixel(std::pair<double,double>(x,y));
    PixelXY possition(pixel);
    baseStation = std::make_shared<BaseStation>(possition.getXy(),
                                                ui->heightBox->value(),
                                                ui->nameLineEdit->text().toStdString());
    data.addBaseStation(baseStation);
}
