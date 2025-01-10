/********************************************************************************
** Form generated from reading UI file 'SelectBaseStationForm.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTBASESTATIONFORM_H
#define UI_SELECTBASESTATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_SelectBaseStationForm
{
public:
    QDialogButtonBox *buttonBox;
    QListView *baseListView;
    QComboBox *comboBox;

    void setupUi(QDialog *SelectBaseStationForm)
    {
        if (SelectBaseStationForm->objectName().isEmpty())
            SelectBaseStationForm->setObjectName("SelectBaseStationForm");
        SelectBaseStationForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(SelectBaseStationForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        baseListView = new QListView(SelectBaseStationForm);
        baseListView->setObjectName("baseListView");
        baseListView->setGeometry(QRect(60, 20, 256, 151));
        comboBox = new QComboBox(SelectBaseStationForm);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 190, 261, 24));

        retranslateUi(SelectBaseStationForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SelectBaseStationForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SelectBaseStationForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SelectBaseStationForm);
    } // setupUi

    void retranslateUi(QDialog *SelectBaseStationForm)
    {
        SelectBaseStationForm->setWindowTitle(QCoreApplication::translate("SelectBaseStationForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectBaseStationForm: public Ui_SelectBaseStationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTBASESTATIONFORM_H
