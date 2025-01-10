/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *receiverButton;
    QToolButton *baseToolButton;
    QToolButton *sectorToolButton;
    QPushButton *calculatePushButton;
    QPushButton *rectangleToolButton;
    QRadioButton *signalRadioButton;
    QRadioButton *rsrqRadioButton;
    QRadioButton *interferenceCheckBox;
    QRadioButton *snirCheckBox;
    QRadioButton *modulationRadioButton;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayoutA;
    QLabel *label_2;
    QDoubleSpinBox *minimumRSRSPdoubleSpinBox;
    QHBoxLayout *horizontalLayoutB;
    QVBoxLayout *verticalLayoutMinMax;
    QLabel *minLabel;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *maxLabel;
    QVBoxLayout *verticalLayoutGV;
    QGraphicsView *scalaGraphicsView;
    QHBoxLayout *horizontalLayoutC;
    QTreeWidget *treeWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayoutE_2;
    QGraphicsView *mapGraphicsView;
    QHBoxLayout *horizontalLayoutA_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *zoomOutButton;
    QToolButton *zoomInButton;
    QHBoxLayout *horizontalLayoutB_2;
    QCheckBox *checkBox;
    QLabel *labelValueS;
    QLabel *valueLabel;
    QHBoxLayout *horizontalLayoutC_2;
    QCheckBox *terrainCheckBox;
    QLabel *label_3;
    QLabel *terrainLabel;
    QHBoxLayout *horizontalLayoutD_2;
    QPushButton *terrainPushButton;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::WindowModal);
        MainWindow->resize(1188, 758);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        receiverButton = new QToolButton(centralWidget);
        receiverButton->setObjectName("receiverButton");

        horizontalLayout_3->addWidget(receiverButton);

        baseToolButton = new QToolButton(centralWidget);
        baseToolButton->setObjectName("baseToolButton");

        horizontalLayout_3->addWidget(baseToolButton);

        sectorToolButton = new QToolButton(centralWidget);
        sectorToolButton->setObjectName("sectorToolButton");

        horizontalLayout_3->addWidget(sectorToolButton);

        calculatePushButton = new QPushButton(centralWidget);
        calculatePushButton->setObjectName("calculatePushButton");

        horizontalLayout_3->addWidget(calculatePushButton);

        rectangleToolButton = new QPushButton(centralWidget);
        rectangleToolButton->setObjectName("rectangleToolButton");

        horizontalLayout_3->addWidget(rectangleToolButton);

        signalRadioButton = new QRadioButton(centralWidget);
        signalRadioButton->setObjectName("signalRadioButton");

        horizontalLayout_3->addWidget(signalRadioButton);

        rsrqRadioButton = new QRadioButton(centralWidget);
        rsrqRadioButton->setObjectName("rsrqRadioButton");

        horizontalLayout_3->addWidget(rsrqRadioButton);

        interferenceCheckBox = new QRadioButton(centralWidget);
        interferenceCheckBox->setObjectName("interferenceCheckBox");

        horizontalLayout_3->addWidget(interferenceCheckBox);

        snirCheckBox = new QRadioButton(centralWidget);
        snirCheckBox->setObjectName("snirCheckBox");

        horizontalLayout_3->addWidget(snirCheckBox);

        modulationRadioButton = new QRadioButton(centralWidget);
        modulationRadioButton->setObjectName("modulationRadioButton");

        horizontalLayout_3->addWidget(modulationRadioButton);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutA = new QHBoxLayout();
        horizontalLayoutA->setSpacing(6);
        horizontalLayoutA->setObjectName("horizontalLayoutA");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayoutA->addWidget(label_2);

        minimumRSRSPdoubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        minimumRSRSPdoubleSpinBox->setObjectName("minimumRSRSPdoubleSpinBox");

        horizontalLayoutA->addWidget(minimumRSRSPdoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayoutA);

        horizontalLayoutB = new QHBoxLayout();
        horizontalLayoutB->setSpacing(6);
        horizontalLayoutB->setObjectName("horizontalLayoutB");
        verticalLayoutMinMax = new QVBoxLayout();
        verticalLayoutMinMax->setSpacing(6);
        verticalLayoutMinMax->setObjectName("verticalLayoutMinMax");
        minLabel = new QLabel(verticalLayoutWidget);
        minLabel->setObjectName("minLabel");

        verticalLayoutMinMax->addWidget(minLabel);

        label2 = new QLabel(verticalLayoutWidget);
        label2->setObjectName("label2");

        verticalLayoutMinMax->addWidget(label2);

        label3 = new QLabel(verticalLayoutWidget);
        label3->setObjectName("label3");

        verticalLayoutMinMax->addWidget(label3);

        label4 = new QLabel(verticalLayoutWidget);
        label4->setObjectName("label4");

        verticalLayoutMinMax->addWidget(label4);

        maxLabel = new QLabel(verticalLayoutWidget);
        maxLabel->setObjectName("maxLabel");

        verticalLayoutMinMax->addWidget(maxLabel);


        horizontalLayoutB->addLayout(verticalLayoutMinMax);

        verticalLayoutGV = new QVBoxLayout();
        verticalLayoutGV->setSpacing(6);
        verticalLayoutGV->setObjectName("verticalLayoutGV");
        scalaGraphicsView = new QGraphicsView(verticalLayoutWidget);
        scalaGraphicsView->setObjectName("scalaGraphicsView");

        verticalLayoutGV->addWidget(scalaGraphicsView);


        horizontalLayoutB->addLayout(verticalLayoutGV);


        verticalLayout_2->addLayout(horizontalLayoutB);

        horizontalLayoutC = new QHBoxLayout();
        horizontalLayoutC->setSpacing(6);
        horizontalLayoutC->setObjectName("horizontalLayoutC");
        treeWidget = new QTreeWidget(verticalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        horizontalLayoutC->addWidget(treeWidget);


        verticalLayout_2->addLayout(horizontalLayoutC);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutE_2 = new QHBoxLayout();
        horizontalLayoutE_2->setSpacing(6);
        horizontalLayoutE_2->setObjectName("horizontalLayoutE_2");
        mapGraphicsView = new QGraphicsView(verticalLayoutWidget_2);
        mapGraphicsView->setObjectName("mapGraphicsView");

        horizontalLayoutE_2->addWidget(mapGraphicsView);


        verticalLayout_3->addLayout(horizontalLayoutE_2);

        horizontalLayoutA_2 = new QHBoxLayout();
        horizontalLayoutA_2->setSpacing(6);
        horizontalLayoutA_2->setObjectName("horizontalLayoutA_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutA_2->addItem(horizontalSpacer);

        zoomOutButton = new QToolButton(verticalLayoutWidget_2);
        zoomOutButton->setObjectName("zoomOutButton");

        horizontalLayoutA_2->addWidget(zoomOutButton);

        zoomInButton = new QToolButton(verticalLayoutWidget_2);
        zoomInButton->setObjectName("zoomInButton");

        horizontalLayoutA_2->addWidget(zoomInButton);


        verticalLayout_3->addLayout(horizontalLayoutA_2);

        horizontalLayoutB_2 = new QHBoxLayout();
        horizontalLayoutB_2->setSpacing(6);
        horizontalLayoutB_2->setObjectName("horizontalLayoutB_2");
        checkBox = new QCheckBox(verticalLayoutWidget_2);
        checkBox->setObjectName("checkBox");

        horizontalLayoutB_2->addWidget(checkBox);

        labelValueS = new QLabel(verticalLayoutWidget_2);
        labelValueS->setObjectName("labelValueS");

        horizontalLayoutB_2->addWidget(labelValueS);

        valueLabel = new QLabel(verticalLayoutWidget_2);
        valueLabel->setObjectName("valueLabel");

        horizontalLayoutB_2->addWidget(valueLabel);


        verticalLayout_3->addLayout(horizontalLayoutB_2);

        horizontalLayoutC_2 = new QHBoxLayout();
        horizontalLayoutC_2->setSpacing(6);
        horizontalLayoutC_2->setObjectName("horizontalLayoutC_2");
        terrainCheckBox = new QCheckBox(verticalLayoutWidget_2);
        terrainCheckBox->setObjectName("terrainCheckBox");

        horizontalLayoutC_2->addWidget(terrainCheckBox);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayoutC_2->addWidget(label_3);

        terrainLabel = new QLabel(verticalLayoutWidget_2);
        terrainLabel->setObjectName("terrainLabel");

        horizontalLayoutC_2->addWidget(terrainLabel);


        verticalLayout_3->addLayout(horizontalLayoutC_2);

        horizontalLayoutD_2 = new QHBoxLayout();
        horizontalLayoutD_2->setSpacing(6);
        horizontalLayoutD_2->setObjectName("horizontalLayoutD_2");
        terrainPushButton = new QPushButton(verticalLayoutWidget_2);
        terrainPushButton->setObjectName("terrainPushButton");

        horizontalLayoutD_2->addWidget(terrainPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutD_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayoutD_2);

        splitter->addWidget(verticalLayoutWidget_2);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1188, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        receiverButton->setText(QCoreApplication::translate("MainWindow", "Receiver", nullptr));
        baseToolButton->setText(QCoreApplication::translate("MainWindow", "Add base station", nullptr));
        sectorToolButton->setText(QCoreApplication::translate("MainWindow", "Add sector", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "RUN", nullptr));
        rectangleToolButton->setText(QCoreApplication::translate("MainWindow", "new area calculation", nullptr));
        signalRadioButton->setText(QCoreApplication::translate("MainWindow", "RSRP", nullptr));
        rsrqRadioButton->setText(QCoreApplication::translate("MainWindow", "RSRQ", nullptr));
        interferenceCheckBox->setText(QCoreApplication::translate("MainWindow", "RSSI", nullptr));
        snirCheckBox->setText(QCoreApplication::translate("MainWindow", "SIR", nullptr));
        modulationRadioButton->setText(QCoreApplication::translate("MainWindow", "CQI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minimum value of RSRP", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
        zoomInButton->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Value from point", nullptr));
        labelValueS->setText(QCoreApplication::translate("MainWindow", "  [dBm]:  ", nullptr));
        valueLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        terrainCheckBox->setText(QCoreApplication::translate("MainWindow", "Terrain profile", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "[m]:  ", nullptr));
        terrainLabel->setText(QString());
        terrainPushButton->setText(QCoreApplication::translate("MainWindow", "save trend", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
