#include "ReceiverForm.h"
#include "ui_ReceiverForm.h"
#include "DataProvider.h"

ReceiverForm::ReceiverForm(DataProvider & p_data, QWidget *parent) :
    QDialog(parent),
    data(p_data),
    ui(new Ui::ReceiverForm)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("Receiver");
}

ReceiverForm::~ReceiverForm()
{
    delete ui;
}

void ReceiverForm::accept()
{
    commit();
    //emit receiverHeightChanged();
    QDialog::accept();
}

void ReceiverForm::update()
{
}

void ReceiverForm::commit()
{
    data.receiver.setHeight(ui->receiverSpinBox->value());
    data.receiver.setGain(ui->gainDoubleSpinBox->value());
    data.receiver.setOtherLosses(ui->lossesDoubleSpinBox->value());
}
