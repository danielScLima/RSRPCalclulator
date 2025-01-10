/********************************************************************************
** Form generated from reading UI file 'BaseStationForm.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASESTATIONFORM_H
#define UI_BASESTATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_BaseStationForm
{
public:
    QDialogButtonBox *okCancelButtonBox;
    QLabel *possitionLabel;
    QLabel *heightLabel;
    QLabel *xLabel;
    QLabel *yLabel;
    QDoubleSpinBox *heightBox;
    QDoubleSpinBox *xSpinBox;
    QDoubleSpinBox *ySpinBox;
    QLabel *label;
    QLineEdit *nameLineEdit;

    void setupUi(QDialog *BaseStationForm)
    {
        if (BaseStationForm->objectName().isEmpty())
            BaseStationForm->setObjectName("BaseStationForm");
        BaseStationForm->resize(504, 205);
        okCancelButtonBox = new QDialogButtonBox(BaseStationForm);
        okCancelButtonBox->setObjectName("okCancelButtonBox");
        okCancelButtonBox->setGeometry(QRect(100, 140, 341, 32));
        okCancelButtonBox->setOrientation(Qt::Horizontal);
        okCancelButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        possitionLabel = new QLabel(BaseStationForm);
        possitionLabel->setObjectName("possitionLabel");
        possitionLabel->setGeometry(QRect(70, 30, 55, 16));
        heightLabel = new QLabel(BaseStationForm);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(70, 70, 101, 16));
        xLabel = new QLabel(BaseStationForm);
        xLabel->setObjectName("xLabel");
        xLabel->setGeometry(QRect(140, 30, 55, 16));
        yLabel = new QLabel(BaseStationForm);
        yLabel->setObjectName("yLabel");
        yLabel->setGeometry(QRect(310, 30, 55, 16));
        heightBox = new QDoubleSpinBox(BaseStationForm);
        heightBox->setObjectName("heightBox");
        heightBox->setGeometry(QRect(180, 70, 71, 25));
        xSpinBox = new QDoubleSpinBox(BaseStationForm);
        xSpinBox->setObjectName("xSpinBox");
        xSpinBox->setGeometry(QRect(180, 30, 101, 25));
        xSpinBox->setDecimals(4);
        xSpinBox->setMinimum(0.000000000000000);
        xSpinBox->setMaximum(99.000000000000000);
        xSpinBox->setSingleStep(0.000100000000000);
        xSpinBox->setValue(51.177199999999999);
        ySpinBox = new QDoubleSpinBox(BaseStationForm);
        ySpinBox->setObjectName("ySpinBox");
        ySpinBox->setGeometry(QRect(340, 30, 101, 25));
        ySpinBox->setDecimals(4);
        ySpinBox->setMinimum(15.974200000000000);
        ySpinBox->setMaximum(17.412600000000001);
        ySpinBox->setSingleStep(0.000100000000000);
        label = new QLabel(BaseStationForm);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 110, 55, 16));
        nameLineEdit = new QLineEdit(BaseStationForm);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(180, 110, 113, 24));
        nameLineEdit->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(BaseStationForm);
        QObject::connect(okCancelButtonBox, &QDialogButtonBox::accepted, BaseStationForm, qOverload<>(&QDialog::accept));
        QObject::connect(okCancelButtonBox, &QDialogButtonBox::rejected, BaseStationForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BaseStationForm);
    } // setupUi

    void retranslateUi(QDialog *BaseStationForm)
    {
        BaseStationForm->setWindowTitle(QCoreApplication::translate("BaseStationForm", "Dialog", nullptr));
        possitionLabel->setText(QCoreApplication::translate("BaseStationForm", "Possition", nullptr));
        heightLabel->setText(QCoreApplication::translate("BaseStationForm", "Height [m n.p.t.]", nullptr));
        xLabel->setText(QCoreApplication::translate("BaseStationForm", "Lon:", nullptr));
        yLabel->setText(QCoreApplication::translate("BaseStationForm", "Lat:", nullptr));
        label->setText(QCoreApplication::translate("BaseStationForm", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BaseStationForm: public Ui_BaseStationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASESTATIONFORM_H
