/********************************************************************************
** Form generated from reading UI file 'TerrainProfile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERRAINPROFILE_H
#define UI_TERRAINPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TerrainProfile
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_12;
    QLabel *label_9;

    void setupUi(QDialog *TerrainProfile)
    {
        if (TerrainProfile->objectName().isEmpty())
            TerrainProfile->setObjectName("TerrainProfile");
        TerrainProfile->resize(1124, 429);
        graphicsView = new QGraphicsView(TerrainProfile);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(70, 40, 1011, 311));
        label = new QLabel(TerrainProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(1070, 360, 55, 16));
        label_2 = new QLabel(TerrainProfile);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 0, 55, 16));
        verticalLayoutWidget = new QWidget(TerrainProfile);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 40, 61, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7, 0, Qt::AlignHCenter);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8, 0, Qt::AlignHCenter);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10, 0, Qt::AlignHCenter);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName("label_11");

        verticalLayout->addWidget(label_11, 0, Qt::AlignHCenter);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6, 0, Qt::AlignHCenter);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName("label_12");

        verticalLayout->addWidget(label_12, 0, Qt::AlignHCenter);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9, 0, Qt::AlignHCenter);


        retranslateUi(TerrainProfile);

        QMetaObject::connectSlotsByName(TerrainProfile);
    } // setupUi

    void retranslateUi(QDialog *TerrainProfile)
    {
        TerrainProfile->setWindowTitle(QCoreApplication::translate("TerrainProfile", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TerrainProfile", "[m]", nullptr));
        label_2->setText(QCoreApplication::translate("TerrainProfile", "[dBm]", nullptr));
        label_5->setText(QCoreApplication::translate("TerrainProfile", "0", nullptr));
        label_4->setText(QCoreApplication::translate("TerrainProfile", "-30", nullptr));
        label_7->setText(QCoreApplication::translate("TerrainProfile", "-90", nullptr));
        label_8->setText(QCoreApplication::translate("TerrainProfile", "-120", nullptr));
        label_10->setText(QCoreApplication::translate("TerrainProfile", "-150", nullptr));
        label_11->setText(QCoreApplication::translate("TerrainProfile", "-180", nullptr));
        label_6->setText(QCoreApplication::translate("TerrainProfile", "-210", nullptr));
        label_3->setText(QCoreApplication::translate("TerrainProfile", "-240", nullptr));
        label_12->setText(QCoreApplication::translate("TerrainProfile", "-270", nullptr));
        label_9->setText(QCoreApplication::translate("TerrainProfile", "-300", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TerrainProfile: public Ui_TerrainProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERRAINPROFILE_H
