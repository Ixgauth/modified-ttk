/****************************************************************************
** Meta object code from reading C++ file 'pqDataTimeStepBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqDataTimeStepBehavior.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDataTimeStepBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDataTimeStepBehavior_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDataTimeStepBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDataTimeStepBehavior_t qt_meta_stringdata_pqDataTimeStepBehavior = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqDataTimeStepBehavior"
QT_MOC_LITERAL(1, 23, 15), // "onReaderCreated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(4, 58, 6) // "reader"

    },
    "pqDataTimeStepBehavior\0onReaderCreated\0"
    "\0pqPipelineSource*\0reader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDataTimeStepBehavior[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void pqDataTimeStepBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDataTimeStepBehavior *_t = static_cast<pqDataTimeStepBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onReaderCreated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqDataTimeStepBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqDataTimeStepBehavior.data,
      qt_meta_data_pqDataTimeStepBehavior,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDataTimeStepBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDataTimeStepBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDataTimeStepBehavior.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqDataTimeStepBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
