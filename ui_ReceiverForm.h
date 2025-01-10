/********************************************************************************
** Form generated from reading UI file 'ReceiverForm.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVERFORM_H
#define UI_RECEIVERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ReceiverForm
{
public:
    QDialogButtonBox *buttonBox;
    QDoubleSpinBox *receiverSpinBox;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *gainDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *lossesDoubleSpinBox;

    void setupUi(QDialog *ReceiverForm)
    {
        if (ReceiverForm->objectName().isEmpty())
            ReceiverForm->setObjectName("ReceiverForm");
        ReceiverForm->resize(390, 240);
        buttonBox = new QDialogButtonBox(ReceiverForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(40, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        receiverSpinBox = new QDoubleSpinBox(ReceiverForm);
        receiverSpinBox->setObjectName("receiverSpinBox");
        receiverSpinBox->setGeometry(QRect(180, 40, 101, 22));
        receiverSpinBox->setMinimum(1.000000000000000);
        receiverSpinBox->setMaximum(10.000000000000000);
        label = new QLabel(ReceiverForm);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 121, 16));
        label_2 = new QLabel(ReceiverForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 80, 111, 16));
        gainDoubleSpinBox = new QDoubleSpinBox(ReceiverForm);
        gainDoubleSpinBox->setObjectName("gainDoubleSpinBox");
        gainDoubleSpinBox->setGeometry(QRect(180, 80, 101, 25));
        gainDoubleSpinBox->setMinimum(-5.000000000000000);
        gainDoubleSpinBox->setMaximum(20.000000000000000);
        label_3 = new QLabel(ReceiverForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 120, 101, 16));
        lossesDoubleSpinBox = new QDoubleSpinBox(ReceiverForm);
        lossesDoubleSpinBox->setObjectName("lossesDoubleSpinBox");
        lossesDoubleSpinBox->setGeometry(QRect(180, 120, 101, 25));

        retranslateUi(ReceiverForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReceiverForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReceiverForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReceiverForm);
    } // setupUi

    void retranslateUi(QDialog *ReceiverForm)
    {
        ReceiverForm->setWindowTitle(QCoreApplication::translate("ReceiverForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReceiverForm", "Effective height [m]", nullptr));
        label_2->setText(QCoreApplication::translate("ReceiverForm", "Antenna gain [dBi]", nullptr));
        label_3->setText(QCoreApplication::translate("ReceiverForm", "Other loss [dB]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiverForm: public Ui_ReceiverForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVERFORM_H
