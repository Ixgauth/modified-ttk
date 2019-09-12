/****************************************************************************
** Meta object code from reading C++ file 'pqTimeKeeper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqTimeKeeper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTimeKeeper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTimeKeeper_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTimeKeeper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTimeKeeper_t qt_meta_stringdata_pqTimeKeeper = {
    {
QT_MOC_LITERAL(0, 0, 12), // "pqTimeKeeper"
QT_MOC_LITERAL(1, 13, 16), // "timeStepsChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "timeChanged"
QT_MOC_LITERAL(4, 43, 16) // "timeRangeChanged"

    },
    "pqTimeKeeper\0timeStepsChanged\0\0"
    "timeChanged\0timeRangeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTimeKeeper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqTimeKeeper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTimeKeeper *_t = static_cast<pqTimeKeeper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeStepsChanged(); break;
        case 1: _t->timeChanged(); break;
        case 2: _t->timeRangeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqTimeKeeper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTimeKeeper::timeStepsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqTimeKeeper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTimeKeeper::timeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqTimeKeeper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTimeKeeper::timeRangeChanged)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pqTimeKeeper::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqTimeKeeper.data,
      qt_meta_data_pqTimeKeeper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTimeKeeper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTimeKeeper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTimeKeeper.stringdata0))
        return static_cast<void*>(this);
    return pqProxy::qt_metacast(_clname);
}

int pqTimeKeeper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqTimeKeeper::timeStepsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqTimeKeeper::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqTimeKeeper::timeRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
