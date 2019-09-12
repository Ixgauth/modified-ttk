/****************************************************************************
** Meta object code from reading C++ file 'pqTimerLogDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqTimerLogDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTimerLogDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTimerLogDisplay_t {
    QByteArrayData data[17];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTimerLogDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTimerLogDisplay_t qt_meta_stringdata_pqTimerLogDisplay = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqTimerLogDisplay"
QT_MOC_LITERAL(1, 18, 7), // "refresh"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "clear"
QT_MOC_LITERAL(4, 33, 16), // "setTimeThreshold"
QT_MOC_LITERAL(5, 50, 5), // "value"
QT_MOC_LITERAL(6, 56, 15), // "setBufferLength"
QT_MOC_LITERAL(7, 72, 9), // "setEnable"
QT_MOC_LITERAL(8, 82, 5), // "state"
QT_MOC_LITERAL(9, 88, 4), // "save"
QT_MOC_LITERAL(10, 93, 8), // "filename"
QT_MOC_LITERAL(11, 102, 5), // "files"
QT_MOC_LITERAL(12, 108, 9), // "saveState"
QT_MOC_LITERAL(13, 118, 12), // "restoreState"
QT_MOC_LITERAL(14, 131, 20), // "setTimeThresholdById"
QT_MOC_LITERAL(15, 152, 2), // "id"
QT_MOC_LITERAL(16, 155, 19) // "setBufferLengthById"

    },
    "pqTimerLogDisplay\0refresh\0\0clear\0"
    "setTimeThreshold\0value\0setBufferLength\0"
    "setEnable\0state\0save\0filename\0files\0"
    "saveState\0restoreState\0setTimeThresholdById\0"
    "id\0setBufferLengthById"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTimerLogDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    1,   76,    2, 0x0a /* Public */,
       6,    1,   79,    2, 0x0a /* Public */,
       7,    1,   82,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x0a /* Public */,
       9,    1,   86,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,
      14,    1,   94,    2, 0x09 /* Protected */,
      16,    1,   97,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void pqTimerLogDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTimerLogDisplay *_t = static_cast<pqTimerLogDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->clear(); break;
        case 2: _t->setTimeThreshold((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setBufferLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->save(); break;
        case 6: _t->save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->save((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->saveState(); break;
        case 9: _t->restoreState(); break;
        case 10: _t->setTimeThresholdById((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setBufferLengthById((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqTimerLogDisplay::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqTimerLogDisplay.data,
      qt_meta_data_pqTimerLogDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTimerLogDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTimerLogDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTimerLogDisplay.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqTimerLogDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
