/****************************************************************************
** Meta object code from reading C++ file 'pqDefaultViewBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqDefaultViewBehavior.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDefaultViewBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDefaultViewBehavior_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDefaultViewBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDefaultViewBehavior_t qt_meta_stringdata_pqDefaultViewBehavior = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqDefaultViewBehavior"
QT_MOC_LITERAL(1, 22, 16), // "onServerCreation"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "pqServer*"
QT_MOC_LITERAL(4, 50, 24), // "fiveMinuteTimeoutWarning"
QT_MOC_LITERAL(5, 75, 19), // "finalTimeoutWarning"
QT_MOC_LITERAL(6, 95, 12) // "showWarnings"

    },
    "pqDefaultViewBehavior\0onServerCreation\0"
    "\0pqServer*\0fiveMinuteTimeoutWarning\0"
    "finalTimeoutWarning\0showWarnings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDefaultViewBehavior[] = {

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
       1,    1,   34,    2, 0x09 /* Protected */,
       4,    0,   37,    2, 0x09 /* Protected */,
       5,    0,   38,    2, 0x09 /* Protected */,
       6,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqDefaultViewBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDefaultViewBehavior *_t = static_cast<pqDefaultViewBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onServerCreation((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->fiveMinuteTimeoutWarning(); break;
        case 2: _t->finalTimeoutWarning(); break;
        case 3: _t->showWarnings(); break;
        default: ;
        }
    }
}

const QMetaObject pqDefaultViewBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqDefaultViewBehavior.data,
      qt_meta_data_pqDefaultViewBehavior,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDefaultViewBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDefaultViewBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDefaultViewBehavior.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqDefaultViewBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
