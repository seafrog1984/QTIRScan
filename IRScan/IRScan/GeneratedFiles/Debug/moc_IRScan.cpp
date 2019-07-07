/****************************************************************************
** Meta object code from reading C++ file 'IRScan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IRScan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IRScan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IRScan_t {
    QByteArrayData data[15];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IRScan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IRScan_t qt_meta_stringdata_IRScan = {
    {
QT_MOC_LITERAL(0, 0, 6), // "IRScan"
QT_MOC_LITERAL(1, 7, 16), // "btn_scan_Clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "btn_focusFar"
QT_MOC_LITERAL(4, 38, 13), // "btn_focusNear"
QT_MOC_LITERAL(5, 52, 10), // "btn_sysPar"
QT_MOC_LITERAL(6, 63, 13), // "btn_clockWise"
QT_MOC_LITERAL(7, 77, 13), // "btn_antiClock"
QT_MOC_LITERAL(8, 91, 9), // "btn_camUp"
QT_MOC_LITERAL(9, 101, 11), // "btn_camDown"
QT_MOC_LITERAL(10, 113, 11), // "btn_camLeft"
QT_MOC_LITERAL(11, 125, 12), // "btn_camRight"
QT_MOC_LITERAL(12, 138, 7), // "btn_reg"
QT_MOC_LITERAL(13, 146, 7), // "btn_del"
QT_MOC_LITERAL(14, 154, 10) // "btn_change"

    },
    "IRScan\0btn_scan_Clicked\0\0btn_focusFar\0"
    "btn_focusNear\0btn_sysPar\0btn_clockWise\0"
    "btn_antiClock\0btn_camUp\0btn_camDown\0"
    "btn_camLeft\0btn_camRight\0btn_reg\0"
    "btn_del\0btn_change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IRScan[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
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

void IRScan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IRScan *_t = static_cast<IRScan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btn_scan_Clicked(); break;
        case 1: _t->btn_focusFar(); break;
        case 2: _t->btn_focusNear(); break;
        case 3: _t->btn_sysPar(); break;
        case 4: _t->btn_clockWise(); break;
        case 5: _t->btn_antiClock(); break;
        case 6: _t->btn_camUp(); break;
        case 7: _t->btn_camDown(); break;
        case 8: _t->btn_camLeft(); break;
        case 9: _t->btn_camRight(); break;
        case 10: _t->btn_reg(); break;
        case 11: _t->btn_del(); break;
        case 12: _t->btn_change(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject IRScan::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_IRScan.data,
      qt_meta_data_IRScan,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IRScan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IRScan::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IRScan.stringdata0))
        return static_cast<void*>(const_cast< IRScan*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int IRScan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
