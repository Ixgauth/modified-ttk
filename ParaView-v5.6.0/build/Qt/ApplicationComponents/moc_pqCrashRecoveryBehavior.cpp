/****************************************************************************
** Meta object code from reading C++ file 'pqCrashRecoveryBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqCrashRecoveryBehavior.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCrashRecoveryBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCrashRecoveryBehavior_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCrashRecoveryBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCrashRecoveryBehavior_t qt_meta_stringdata_pqCrashRecoveryBehavior = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqCrashRecoveryBehavior"
QT_MOC_LITERAL(1, 24, 24), // "delayedSaveRecoveryState"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "saveRecoveryState"
QT_MOC_LITERAL(4, 68, 13), // "onServerAdded"
QT_MOC_LITERAL(5, 82, 9), // "pqServer*"
QT_MOC_LITERAL(6, 92, 6), // "server"
QT_MOC_LITERAL(7, 99, 18) // "onServerDisconnect"

    },
    "pqCrashRecoveryBehavior\0"
    "delayedSaveRecoveryState\0\0saveRecoveryState\0"
    "onServerAdded\0pqServer*\0server\0"
    "onServerDisconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCrashRecoveryBehavior[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       7,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void pqCrashRecoveryBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCrashRecoveryBehavior *_t = static_cast<pqCrashRecoveryBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->delayedSaveRecoveryState(); break;
        case 1: _t->saveRecoveryState(); break;
        case 2: _t->onServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->onServerDisconnect(); break;
        default: ;
        }
    }
}

const QMetaObject pqCrashRecoveryBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqCrashRecoveryBehavior.data,
      qt_meta_data_pqCrashRecoveryBehavior,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCrashRecoveryBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCrashRecoveryBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCrashRecoveryBehavior.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqCrashRecoveryBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
