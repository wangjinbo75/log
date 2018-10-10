/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SerialPort/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "clickSerialPortCombobox"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "showInRecvText"
QT_MOC_LITERAL(4, 51, 3), // "str"
QT_MOC_LITERAL(5, 55, 19), // "SerialPortInitSlots"
QT_MOC_LITERAL(6, 75, 10), // "autoScroll"
QT_MOC_LITERAL(7, 86, 16), // "reLoadSerialPort"
QT_MOC_LITERAL(8, 103, 25), // "on_openPushButton_clicked"
QT_MOC_LITERAL(9, 129, 30), // "on_clearRecvPushButton_clicked"
QT_MOC_LITERAL(10, 160, 26), // "on_sendPushButton1_clicked"
QT_MOC_LITERAL(11, 187, 26), // "on_sendPushButton2_clicked"
QT_MOC_LITERAL(12, 214, 30), // "on_sendLineEdit2_returnPressed"
QT_MOC_LITERAL(13, 245, 13), // "sendLineEdit3"
QT_MOC_LITERAL(14, 259, 13), // "sendLineEdit4"
QT_MOC_LITERAL(15, 273, 13), // "sendLineEdit5"
QT_MOC_LITERAL(16, 287, 13), // "sendLineEdit6"
QT_MOC_LITERAL(17, 301, 12), // "timeOutEvent"
QT_MOC_LITERAL(18, 314, 16), // "systemTimeUpdate"
QT_MOC_LITERAL(19, 331, 27) // "on_autoSendCheckBox_clicked"

    },
    "MainWindow\0clickSerialPortCombobox\0\0"
    "showInRecvText\0str\0SerialPortInitSlots\0"
    "autoScroll\0reLoadSerialPort\0"
    "on_openPushButton_clicked\0"
    "on_clearRecvPushButton_clicked\0"
    "on_sendPushButton1_clicked\0"
    "on_sendPushButton2_clicked\0"
    "on_sendLineEdit2_returnPressed\0"
    "sendLineEdit3\0sendLineEdit4\0sendLineEdit5\0"
    "sendLineEdit6\0timeOutEvent\0systemTimeUpdate\0"
    "on_autoSendCheckBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  100,    2, 0x08 /* Private */,
       5,    0,  103,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickSerialPortCombobox(); break;
        case 1: _t->showInRecvText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SerialPortInitSlots(); break;
        case 3: _t->autoScroll(); break;
        case 4: _t->reLoadSerialPort(); break;
        case 5: _t->on_openPushButton_clicked(); break;
        case 6: _t->on_clearRecvPushButton_clicked(); break;
        case 7: _t->on_sendPushButton1_clicked(); break;
        case 8: _t->on_sendPushButton2_clicked(); break;
        case 9: _t->on_sendLineEdit2_returnPressed(); break;
        case 10: _t->sendLineEdit3(); break;
        case 11: _t->sendLineEdit4(); break;
        case 12: _t->sendLineEdit5(); break;
        case 13: _t->sendLineEdit6(); break;
        case 14: _t->timeOutEvent(); break;
        case 15: _t->systemTimeUpdate(); break;
        case 16: _t->on_autoSendCheckBox_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::clickSerialPortCombobox)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::clickSerialPortCombobox()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
