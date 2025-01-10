/********************************************************************************
** Form generated from reading UI file 'SectorForm.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTORFORM_H
#define UI_SECTORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SectorForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *bandwidhtLabel;
    QLabel *verticalLabel;
    QLabel *azimuthLabel;
    QLabel *bandLabel;
    QSpinBox *azimuthSpinBox;
    QLabel *horizonstaLabel;
    QDoubleSpinBox *powerDoubleSpinBox;
    QLabel *antennaLabel;
    QComboBox *mimoBox;
    QLabel *mimoLabel;
    QToolButton *HorizontalToolButton;
    QComboBox *bandwidthBox;
    QLabel *characteristicLabel;
    QToolButton *VerticalToolButton;
    QLabel *powerLabel;
    QSpinBox *tiltSpinBox;
    QLabel *tiltLabel;
    QSpinBox *bandSpinBox;
    QLabel *label;
    QComboBox *environmentComboBox;
    QLabel *label_2;
    QRadioButton *okumyraRadioButton;
    QRadioButton *costRadioButton;
    QLabel *label_3;
    QDoubleSpinBox *gainDoubleSpinBox;
    QLabel *label_4;
    QSpinBox *ecgiSpinBox;

    void setupUi(QDialog *SectorForm)
    {
        if (SectorForm->objectName().isEmpty())
            SectorForm->setObjectName("SectorForm");
        SectorForm->resize(456, 585);
        buttonBox = new QDialogButtonBox(SectorForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(80, 540, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        bandwidhtLabel = new QLabel(SectorForm);
        bandwidhtLabel->setObjectName("bandwidhtLabel");
        bandwidhtLabel->setGeometry(QRect(50, 100, 111, 16));
        verticalLabel = new QLabel(SectorForm);
        verticalLabel->setObjectName("verticalLabel");
        verticalLabel->setGeometry(QRect(100, 480, 55, 16));
        azimuthLabel = new QLabel(SectorForm);
        azimuthLabel->setObjectName("azimuthLabel");
        azimuthLabel->setGeometry(QRect(50, 130, 121, 16));
        bandLabel = new QLabel(SectorForm);
        bandLabel->setObjectName("bandLabel");
        bandLabel->setGeometry(QRect(70, 320, 81, 16));
        azimuthSpinBox = new QSpinBox(SectorForm);
        azimuthSpinBox->setObjectName("azimuthSpinBox");
        azimuthSpinBox->setGeometry(QRect(170, 130, 71, 25));
        azimuthSpinBox->setMaximum(359);
        horizonstaLabel = new QLabel(SectorForm);
        horizonstaLabel->setObjectName("horizonstaLabel");
        horizonstaLabel->setGeometry(QRect(100, 450, 71, 16));
        powerDoubleSpinBox = new QDoubleSpinBox(SectorForm);
        powerDoubleSpinBox->setObjectName("powerDoubleSpinBox");
        powerDoubleSpinBox->setGeometry(QRect(170, 70, 91, 25));
        powerDoubleSpinBox->setMaximum(50.000000000000000);
        powerDoubleSpinBox->setValue(41.000000000000000);
        antennaLabel = new QLabel(SectorForm);
        antennaLabel->setObjectName("antennaLabel");
        antennaLabel->setGeometry(QRect(50, 230, 55, 16));
        mimoBox = new QComboBox(SectorForm);
        mimoBox->setObjectName("mimoBox");
        mimoBox->setGeometry(QRect(170, 160, 75, 24));
        mimoLabel = new QLabel(SectorForm);
        mimoLabel->setObjectName("mimoLabel");
        mimoLabel->setGeometry(QRect(50, 160, 55, 16));
        HorizontalToolButton = new QToolButton(SectorForm);
        HorizontalToolButton->setObjectName("HorizontalToolButton");
        HorizontalToolButton->setGeometry(QRect(200, 450, 81, 23));
        bandwidthBox = new QComboBox(SectorForm);
        bandwidthBox->setObjectName("bandwidthBox");
        bandwidthBox->setGeometry(QRect(170, 100, 81, 24));
        characteristicLabel = new QLabel(SectorForm);
        characteristicLabel->setObjectName("characteristicLabel");
        characteristicLabel->setGeometry(QRect(70, 420, 151, 21));
        VerticalToolButton = new QToolButton(SectorForm);
        VerticalToolButton->setObjectName("VerticalToolButton");
        VerticalToolButton->setGeometry(QRect(200, 480, 81, 23));
        powerLabel = new QLabel(SectorForm);
        powerLabel->setObjectName("powerLabel");
        powerLabel->setGeometry(QRect(50, 70, 91, 16));
        tiltSpinBox = new QSpinBox(SectorForm);
        tiltSpinBox->setObjectName("tiltSpinBox");
        tiltSpinBox->setGeometry(QRect(170, 290, 46, 25));
        tiltSpinBox->setMaximum(180);
        tiltLabel = new QLabel(SectorForm);
        tiltLabel->setObjectName("tiltLabel");
        tiltLabel->setGeometry(QRect(70, 290, 91, 16));
        bandSpinBox = new QSpinBox(SectorForm);
        bandSpinBox->setObjectName("bandSpinBox");
        bandSpinBox->setGeometry(QRect(170, 320, 91, 25));
        bandSpinBox->setMinimum(150);
        bandSpinBox->setMaximum(2000);
        bandSpinBox->setDisplayIntegerBase(10);
        label = new QLabel(SectorForm);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 190, 71, 16));
        environmentComboBox = new QComboBox(SectorForm);
        environmentComboBox->setObjectName("environmentComboBox");
        environmentComboBox->setGeometry(QRect(170, 190, 141, 22));
        label_2 = new QLabel(SectorForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 350, 131, 16));
        okumyraRadioButton = new QRadioButton(SectorForm);
        okumyraRadioButton->setObjectName("okumyraRadioButton");
        okumyraRadioButton->setGeometry(QRect(170, 370, 131, 18));
        costRadioButton = new QRadioButton(SectorForm);
        costRadioButton->setObjectName("costRadioButton");
        costRadioButton->setGeometry(QRect(170, 400, 151, 18));
        label_3 = new QLabel(SectorForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 260, 55, 16));
        gainDoubleSpinBox = new QDoubleSpinBox(SectorForm);
        gainDoubleSpinBox->setObjectName("gainDoubleSpinBox");
        gainDoubleSpinBox->setGeometry(QRect(170, 260, 91, 25));
        gainDoubleSpinBox->setMinimum(10.000000000000000);
        gainDoubleSpinBox->setMaximum(30.000000000000000);
        gainDoubleSpinBox->setValue(15.000000000000000);
        label_4 = new QLabel(SectorForm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 40, 55, 16));
        ecgiSpinBox = new QSpinBox(SectorForm);
        ecgiSpinBox->setObjectName("ecgiSpinBox");
        ecgiSpinBox->setGeometry(QRect(170, 30, 91, 25));

        retranslateUi(SectorForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SectorForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SectorForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SectorForm);
    } // setupUi

    void retranslateUi(QDialog *SectorForm)
    {
        SectorForm->setWindowTitle(QCoreApplication::translate("SectorForm", "Dialog", nullptr));
        bandwidhtLabel->setText(QCoreApplication::translate("SectorForm", "Bandwidth [MHz]:", nullptr));
        verticalLabel->setText(QCoreApplication::translate("SectorForm", "Vertical:", nullptr));
        azimuthLabel->setText(QCoreApplication::translate("SectorForm", "Azimuth [deegres]:", nullptr));
        bandLabel->setText(QCoreApplication::translate("SectorForm", "Band [MHz]:", nullptr));
        horizonstaLabel->setText(QCoreApplication::translate("SectorForm", "Horizontal:", nullptr));
        antennaLabel->setText(QCoreApplication::translate("SectorForm", "Antenna:", nullptr));
        mimoLabel->setText(QCoreApplication::translate("SectorForm", "MIMO:", nullptr));
        HorizontalToolButton->setText(QCoreApplication::translate("SectorForm", "Browse", nullptr));
        characteristicLabel->setText(QCoreApplication::translate("SectorForm", "Characteristic [file.csv]:", nullptr));
        VerticalToolButton->setText(QCoreApplication::translate("SectorForm", "Browse", nullptr));
        powerLabel->setText(QCoreApplication::translate("SectorForm", "Power [dBm]:", nullptr));
        tiltLabel->setText(QCoreApplication::translate("SectorForm", "Tilt [deegres]:", nullptr));
        label->setText(QCoreApplication::translate("SectorForm", "Environment:", nullptr));
        label_2->setText(QCoreApplication::translate("SectorForm", "Propagation model:", nullptr));
        okumyraRadioButton->setText(QCoreApplication::translate("SectorForm", "Okumura Hata", nullptr));
        costRadioButton->setText(QCoreApplication::translate("SectorForm", "Cost 231 - Hata", nullptr));
        label_3->setText(QCoreApplication::translate("SectorForm", "Gain [dBi]", nullptr));
        label_4->setText(QCoreApplication::translate("SectorForm", "ECGI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SectorForm: public Ui_SectorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTORFORM_H
