/****************************************************************************
** Meta object code from reading C++ file 'pqProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqProxy_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqProxy_t qt_meta_stringdata_pqProxy = {
    {
QT_MOC_LITERAL(0, 0, 7), // "pqProxy"
QT_MOC_LITERAL(1, 8, 11), // "nameChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(4, 47, 20), // "modifiedStateChanged"
QT_MOC_LITERAL(5, 68, 17), // "onProxyRegistered"
QT_MOC_LITERAL(6, 86, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(7, 98, 19) // "onProxyUnRegistered"

    },
    "pqProxy\0nameChanged\0\0pqServerManagerModelItem*\0"
    "modifiedStateChanged\0onProxyRegistered\0"
    "vtkSMProxy*\0onProxyUnRegistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   40,    2, 0x09 /* Protected */,
       7,    3,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    2,    2,    2,

       0        // eod
};

void pqProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqProxy *_t = static_cast<pqProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 1: _t->modifiedStateChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 2: _t->onProxyRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 3: _t->onProxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqServerManagerModelItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqServerManagerModelItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqProxy::*_t)(pqServerManagerModelItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProxy::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqProxy::*_t)(pqServerManagerModelItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProxy::modifiedStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqProxy::staticMetaObject = {
    { &pqServerManagerModelItem::staticMetaObject, qt_meta_stringdata_pqProxy.data,
      qt_meta_data_pqProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxy.stringdata0))
        return static_cast<void*>(this);
    return pqServerManagerModelItem::qt_metacast(_clname);
}

int pqProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqServerManagerModelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqProxy::nameChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqProxy::modifiedStateChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
