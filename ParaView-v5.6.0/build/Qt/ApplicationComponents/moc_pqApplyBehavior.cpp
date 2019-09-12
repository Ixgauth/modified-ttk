/****************************************************************************
** Meta object code from reading C++ file 'pqApplyBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqApplyBehavior.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqApplyBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqApplyBehavior_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqApplyBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqApplyBehavior_t qt_meta_stringdata_pqApplyBehavior = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqApplyBehavior"
QT_MOC_LITERAL(1, 16, 7), // "applied"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "pqPropertiesPanel*"
QT_MOC_LITERAL(4, 44, 8), // "pqProxy*"
QT_MOC_LITERAL(5, 53, 9) // "onApplied"

    },
    "pqApplyBehavior\0applied\0\0pqPropertiesPanel*\0"
    "pqProxy*\0onApplied"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqApplyBehavior[] = {

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
       1,    2,   34,    2, 0x09 /* Protected */,
       1,    1,   39,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

       0        // eod
};

void pqApplyBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqApplyBehavior *_t = static_cast<pqApplyBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applied((*reinterpret_cast< pqPropertiesPanel*(*)>(_a[1])),(*reinterpret_cast< pqProxy*(*)>(_a[2]))); break;
        case 1: _t->applied((*reinterpret_cast< pqPropertiesPanel*(*)>(_a[1]))); break;
        case 2: _t->onApplied((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 3: _t->onApplied(); break;
        default: ;
        }
    }
}

const QMetaObject pqApplyBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqApplyBehavior.data,
      qt_meta_data_pqApplyBehavior,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqApplyBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqApplyBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqApplyBehavior.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqApplyBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
