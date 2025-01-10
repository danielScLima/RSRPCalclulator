/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "calculationButtonPressed",
    "",
    "displayImage",
    "img",
    "std::vector<std::pair<PixelXY,double>>&",
    "drawDataMap",
    "updateProgressBar",
    "progress",
    "setProgressBarRange",
    "max",
    "on_baseStationUi_clicked",
    "on_sectorUI_clliced",
    "selectBase",
    "drawImage",
    "drawInterferenceImage",
    "drawSnirImage",
    "drawSignalImg",
    "drawModulationImg",
    "enabled",
    "drawRsrqImg",
    "receiverClicked",
    "changeMinRSRPValueInData",
    "actionRectangleTriggered",
    "showRectangle",
    "drawTerrainLine",
    "drawBaseStationPossition",
    "zoomIn",
    "zoomOut",
    "terrainProfileTriggered",
    "saveLineData"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,  159,    2, 0x0a,    2 /* Public */,
       6,    0,  164,    2, 0x0a,    5 /* Public */,
       7,    1,  165,    2, 0x0a,    6 /* Public */,
       9,    1,  168,    2, 0x0a,    8 /* Public */,
      11,    0,  171,    2, 0x08,   10 /* Private */,
      12,    0,  172,    2, 0x08,   11 /* Private */,
      13,    0,  173,    2, 0x08,   12 /* Private */,
      14,    1,  174,    2, 0x08,   13 /* Private */,
      15,    1,  177,    2, 0x08,   15 /* Private */,
      16,    1,  180,    2, 0x08,   17 /* Private */,
      17,    1,  183,    2, 0x08,   19 /* Private */,
      18,    1,  186,    2, 0x08,   21 /* Private */,
      20,    1,  189,    2, 0x08,   23 /* Private */,
      21,    0,  192,    2, 0x08,   25 /* Private */,
      22,    1,  193,    2, 0x08,   26 /* Private */,
      23,    0,  196,    2, 0x08,   28 /* Private */,
      24,    0,  197,    2, 0x08,   29 /* Private */,
      25,    0,  198,    2, 0x08,   30 /* Private */,
      26,    0,  199,    2, 0x08,   31 /* Private */,
      27,    0,  200,    2, 0x08,   32 /* Private */,
      28,    0,  201,    2, 0x08,   33 /* Private */,
      29,    1,  202,    2, 0x08,   34 /* Private */,
      30,    0,  205,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap, 0x80000000 | 5,    4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'calculationButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::pair<PixelXY,double>> &, std::false_type>,
        // method 'drawDataMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateProgressBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'setProgressBarRange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'on_baseStationUi_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sectorUI_clliced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectBase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'drawImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::pair<PixelXY,double>> &, std::false_type>,
        // method 'drawInterferenceImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'drawSnirImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'drawSignalImg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'drawModulationImg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'drawRsrqImg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'receiverClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeMinRSRPValueInData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'actionRectangleTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRectangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'drawTerrainLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'drawBaseStationPossition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'terrainProfileTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'saveLineData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->calculationButtonPressed(); break;
        case 1: _t->displayImage((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<PixelXY,double>>&>>(_a[2]))); break;
        case 2: _t->drawDataMap(); break;
        case 3: _t->updateProgressBar((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->setProgressBarRange((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 5: _t->on_baseStationUi_clicked(); break;
        case 6: _t->on_sectorUI_clliced(); break;
        case 7: _t->selectBase(); break;
        case 8: _t->drawImage((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<PixelXY,double>>&>>(_a[1]))); break;
        case 9: _t->drawInterferenceImage((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->drawSnirImage((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->drawSignalImg((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->drawModulationImg((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->drawRsrqImg((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->receiverClicked(); break;
        case 15: _t->changeMinRSRPValueInData((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->actionRectangleTriggered(); break;
        case 17: _t->showRectangle(); break;
        case 18: _t->drawTerrainLine(); break;
        case 19: _t->drawBaseStationPossition(); break;
        case 20: _t->zoomIn(); break;
        case 21: _t->zoomOut(); break;
        case 22: _t->terrainProfileTriggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->saveLineData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::calculationButtonPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::calculationButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
