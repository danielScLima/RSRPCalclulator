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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *mapGraphicsView;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *rectangleToolButton;
    QGridLayout *gridLayout;
    QLabel *terrainLabel;
    QLabel *valueLabel;
    QLabel *labelValueS;
    QLabel *label_3;
    QRadioButton *signalRadioButton;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer;
    QRadioButton *modulationRadioButton;
    QPushButton *terrainPushButton;
    QToolButton *zoomInButton;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *terrainCheckBox;
    QToolButton *zoomOutButton;
    QHBoxLayout *horizontalLayout_5;
    QGraphicsView *scalaGraphicsView;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *receiverButton;
    QToolButton *baseToolButton;
    QToolButton *sectorToolButton;
    QVBoxLayout *verticalLayout;
    QLabel *minLabel;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *maxLabel;
    QRadioButton *snirCheckBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *calculatePushButton;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *minimumRSRSPdoubleSpinBox;
    QRadioButton *rsrqRadioButton;
    QRadioButton *interferenceCheckBox;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1188, 758);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        mapGraphicsView = new QGraphicsView(centralWidget);
        mapGraphicsView->setObjectName("mapGraphicsView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapGraphicsView->sizePolicy().hasHeightForWidth());
        mapGraphicsView->setSizePolicy(sizePolicy);
        mapGraphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::CrossCursor)));
        mapGraphicsView->setMouseTracking(true);

        horizontalLayout_2->addWidget(mapGraphicsView);


        gridLayout_2->addLayout(horizontalLayout_2, 13, 2, 4, 12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        rectangleToolButton = new QToolButton(centralWidget);
        rectangleToolButton->setObjectName("rectangleToolButton");

        horizontalLayout_4->addWidget(rectangleToolButton);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 4, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        terrainLabel = new QLabel(centralWidget);
        terrainLabel->setObjectName("terrainLabel");

        gridLayout->addWidget(terrainLabel, 1, 1, 1, 1);

        valueLabel = new QLabel(centralWidget);
        valueLabel->setObjectName("valueLabel");

        gridLayout->addWidget(valueLabel, 0, 1, 1, 1);

        labelValueS = new QLabel(centralWidget);
        labelValueS->setObjectName("labelValueS");

        gridLayout->addWidget(labelValueS, 0, 0, 1, 1, Qt::AlignRight);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1, Qt::AlignRight);


        gridLayout_2->addLayout(gridLayout, 18, 5, 1, 1);

        signalRadioButton = new QRadioButton(centralWidget);
        signalRadioButton->setObjectName("signalRadioButton");

        gridLayout_2->addWidget(signalRadioButton, 4, 8, 1, 1, Qt::AlignRight);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        horizontalLayout->addWidget(treeWidget);


        gridLayout_2->addLayout(horizontalLayout, 16, 0, 4, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 18, 8, 1, 1);

        modulationRadioButton = new QRadioButton(centralWidget);
        modulationRadioButton->setObjectName("modulationRadioButton");

        gridLayout_2->addWidget(modulationRadioButton, 4, 12, 1, 1);

        terrainPushButton = new QPushButton(centralWidget);
        terrainPushButton->setObjectName("terrainPushButton");

        gridLayout_2->addWidget(terrainPushButton, 19, 2, 1, 3);

        zoomInButton = new QToolButton(centralWidget);
        zoomInButton->setObjectName("zoomInButton");

        gridLayout_2->addWidget(zoomInButton, 17, 11, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");

        verticalLayout_3->addWidget(checkBox, 0, Qt::AlignLeft);

        terrainCheckBox = new QCheckBox(centralWidget);
        terrainCheckBox->setObjectName("terrainCheckBox");

        verticalLayout_3->addWidget(terrainCheckBox);


        gridLayout_2->addLayout(verticalLayout_3, 18, 2, 1, 3);

        zoomOutButton = new QToolButton(centralWidget);
        zoomOutButton->setObjectName("zoomOutButton");

        gridLayout_2->addWidget(zoomOutButton, 17, 10, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        scalaGraphicsView = new QGraphicsView(centralWidget);
        scalaGraphicsView->setObjectName("scalaGraphicsView");
        scalaGraphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        scalaGraphicsView->setMouseTracking(true);

        horizontalLayout_5->addWidget(scalaGraphicsView);


        gridLayout_2->addLayout(horizontalLayout_5, 14, 1, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        receiverButton = new QToolButton(centralWidget);
        receiverButton->setObjectName("receiverButton");

        horizontalLayout_3->addWidget(receiverButton);

        baseToolButton = new QToolButton(centralWidget);
        baseToolButton->setObjectName("baseToolButton");
        baseToolButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(baseToolButton);

        sectorToolButton = new QToolButton(centralWidget);
        sectorToolButton->setObjectName("sectorToolButton");

        horizontalLayout_3->addWidget(sectorToolButton);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        minLabel = new QLabel(centralWidget);
        minLabel->setObjectName("minLabel");

        verticalLayout->addWidget(minLabel, 0, Qt::AlignRight);

        label2 = new QLabel(centralWidget);
        label2->setObjectName("label2");

        verticalLayout->addWidget(label2, 0, Qt::AlignRight);

        label3 = new QLabel(centralWidget);
        label3->setObjectName("label3");

        verticalLayout->addWidget(label3, 0, Qt::AlignRight);

        label4 = new QLabel(centralWidget);
        label4->setObjectName("label4");

        verticalLayout->addWidget(label4, 0, Qt::AlignRight);

        maxLabel = new QLabel(centralWidget);
        maxLabel->setObjectName("maxLabel");

        verticalLayout->addWidget(maxLabel, 0, Qt::AlignRight);


        gridLayout_2->addLayout(verticalLayout, 14, 0, 2, 1);

        snirCheckBox = new QRadioButton(centralWidget);
        snirCheckBox->setObjectName("snirCheckBox");

        gridLayout_2->addWidget(snirCheckBox, 4, 11, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        calculatePushButton = new QPushButton(centralWidget);
        calculatePushButton->setObjectName("calculatePushButton");

        verticalLayout_2->addWidget(calculatePushButton);


        gridLayout_2->addLayout(verticalLayout_2, 4, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        minimumRSRSPdoubleSpinBox = new QDoubleSpinBox(centralWidget);
        minimumRSRSPdoubleSpinBox->setObjectName("minimumRSRSPdoubleSpinBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, minimumRSRSPdoubleSpinBox);


        gridLayout_2->addLayout(formLayout, 13, 0, 1, 2);

        rsrqRadioButton = new QRadioButton(centralWidget);
        rsrqRadioButton->setObjectName("rsrqRadioButton");

        gridLayout_2->addWidget(rsrqRadioButton, 4, 9, 1, 1);

        interferenceCheckBox = new QRadioButton(centralWidget);
        interferenceCheckBox->setObjectName("interferenceCheckBox");

        gridLayout_2->addWidget(interferenceCheckBox, 4, 10, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1188, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        rectangleToolButton->setText(QCoreApplication::translate("MainWindow", "new area calculation", nullptr));
        terrainLabel->setText(QString());
        valueLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelValueS->setText(QCoreApplication::translate("MainWindow", "  [dBm]:  ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "[m]:  ", nullptr));
        signalRadioButton->setText(QCoreApplication::translate("MainWindow", "RSRP", nullptr));
        modulationRadioButton->setText(QCoreApplication::translate("MainWindow", "CQI", nullptr));
        terrainPushButton->setText(QCoreApplication::translate("MainWindow", "save trend", nullptr));
        zoomInButton->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Value from point", nullptr));
        terrainCheckBox->setText(QCoreApplication::translate("MainWindow", "Terrain profile", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
        receiverButton->setText(QCoreApplication::translate("MainWindow", "Receiver", nullptr));
        baseToolButton->setText(QCoreApplication::translate("MainWindow", "Add base station", nullptr));
        sectorToolButton->setText(QCoreApplication::translate("MainWindow", "Add sector", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        snirCheckBox->setText(QCoreApplication::translate("MainWindow", "SIR", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "RUN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minimum value of RSRP", nullptr));
        rsrqRadioButton->setText(QCoreApplication::translate("MainWindow", "RSRQ", nullptr));
        interferenceCheckBox->setText(QCoreApplication::translate("MainWindow", "RSSI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
