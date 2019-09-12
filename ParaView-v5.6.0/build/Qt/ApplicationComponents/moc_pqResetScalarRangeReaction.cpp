/****************************************************************************
** Meta object code from reading C++ file 'pqResetScalarRangeReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqResetScalarRangeReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqResetScalarRangeReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqResetScalarRangeReaction_t {
    QByteArrayData data[10];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqResetScalarRangeReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqResetScalarRangeReaction_t qt_meta_stringdata_pqResetScalarRangeReaction = {
    {
QT_MOC_LITERAL(0, 0, 26), // "pqResetScalarRangeReaction"
QT_MOC_LITERAL(1, 27, 17), // "updateEnableState"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 17), // "setRepresentation"
QT_MOC_LITERAL(4, 64, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(5, 86, 4), // "repr"
QT_MOC_LITERAL(6, 91, 13), // "onServerAdded"
QT_MOC_LITERAL(7, 105, 9), // "pqServer*"
QT_MOC_LITERAL(8, 115, 6), // "server"
QT_MOC_LITERAL(9, 122, 21) // "onAboutToRemoveServer"

    },
    "pqResetScalarRangeReaction\0updateEnableState\0"
    "\0setRepresentation\0pqDataRepresentation*\0"
    "repr\0onServerAdded\0pqServer*\0server\0"
    "onAboutToRemoveServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqResetScalarRangeReaction[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x09 /* Protected */,
       9,    1,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void pqResetScalarRangeReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqResetScalarRangeReaction *_t = static_cast<pqResetScalarRangeReaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnableState(); break;
        case 1: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 2: _t->onServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->onAboutToRemoveServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqResetScalarRangeReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqResetScalarRangeReaction.data,
      qt_meta_data_pqResetScalarRangeReaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqResetScalarRangeReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqResetScalarRangeReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqResetScalarRangeReaction.stringdata0))
        return static_cast<void*>(this);
    return pqReaction::qt_metacast(_clname);
}

int pqResetScalarRangeReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
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
