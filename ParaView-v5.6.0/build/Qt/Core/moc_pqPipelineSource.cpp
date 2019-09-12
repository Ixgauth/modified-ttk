/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineSource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqPipelineSource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineSource_t {
    QByteArrayData data[27];
    char stringdata0[457];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineSource_t qt_meta_stringdata_pqPipelineSource = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqPipelineSource"
QT_MOC_LITERAL(1, 17, 15), // "connectionAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(4, 52, 6), // "source"
QT_MOC_LITERAL(5, 59, 8), // "consumer"
QT_MOC_LITERAL(6, 68, 13), // "srcOutputPort"
QT_MOC_LITERAL(7, 82, 18), // "preConnectionAdded"
QT_MOC_LITERAL(8, 101, 17), // "connectionRemoved"
QT_MOC_LITERAL(9, 119, 20), // "preConnectionRemoved"
QT_MOC_LITERAL(10, 140, 19), // "representationAdded"
QT_MOC_LITERAL(11, 160, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(12, 182, 4), // "repr"
QT_MOC_LITERAL(13, 187, 21), // "representationRemoved"
QT_MOC_LITERAL(14, 209, 17), // "visibilityChanged"
QT_MOC_LITERAL(15, 227, 11), // "dataUpdated"
QT_MOC_LITERAL(16, 239, 33), // "onRepresentationVisibilityCha..."
QT_MOC_LITERAL(17, 273, 22), // "prePortConnectionAdded"
QT_MOC_LITERAL(18, 296, 13), // "pqOutputPort*"
QT_MOC_LITERAL(19, 310, 2), // "op"
QT_MOC_LITERAL(20, 313, 4), // "cons"
QT_MOC_LITERAL(21, 318, 19), // "portConnectionAdded"
QT_MOC_LITERAL(22, 338, 24), // "prePortConnectionRemoved"
QT_MOC_LITERAL(23, 363, 21), // "portConnectionRemoved"
QT_MOC_LITERAL(24, 385, 23), // "portRepresentationAdded"
QT_MOC_LITERAL(25, 409, 25), // "portRepresentationRemoved"
QT_MOC_LITERAL(26, 435, 21) // "portVisibilityChanged"

    },
    "pqPipelineSource\0connectionAdded\0\0"
    "pqPipelineSource*\0source\0consumer\0"
    "srcOutputPort\0preConnectionAdded\0"
    "connectionRemoved\0preConnectionRemoved\0"
    "representationAdded\0pqDataRepresentation*\0"
    "repr\0representationRemoved\0visibilityChanged\0"
    "dataUpdated\0onRepresentationVisibilityChanged\0"
    "prePortConnectionAdded\0pqOutputPort*\0"
    "op\0cons\0portConnectionAdded\0"
    "prePortConnectionRemoved\0portConnectionRemoved\0"
    "portRepresentationAdded\0"
    "portRepresentationRemoved\0"
    "portVisibilityChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   99,    2, 0x06 /* Public */,
       7,    3,  106,    2, 0x06 /* Public */,
       8,    3,  113,    2, 0x06 /* Public */,
       9,    3,  120,    2, 0x06 /* Public */,
      10,    3,  127,    2, 0x06 /* Public */,
      13,    3,  134,    2, 0x06 /* Public */,
      14,    2,  141,    2, 0x06 /* Public */,
      15,    1,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  149,    2, 0x09 /* Protected */,
      17,    2,  150,    2, 0x08 /* Private */,
      21,    2,  155,    2, 0x08 /* Private */,
      22,    2,  160,    2, 0x08 /* Private */,
      23,    2,  165,    2, 0x08 /* Private */,
      24,    2,  170,    2, 0x08 /* Private */,
      25,    2,  175,    2, 0x08 /* Private */,
      26,    2,  180,    2, 0x08 /* Private */,
      15,    0,  185,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 11, QMetaType::Int,    4,   12,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 11, QMetaType::Int,    4,   12,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 11,    4,   12,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 3,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 3,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 3,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 3,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 11,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 11,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 11,   19,   20,
    QMetaType::Void,

       0        // eod
};

void pqPipelineSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineSource *_t = static_cast<pqPipelineSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->preConnectionAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->connectionRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->preConnectionRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->representationAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->representationRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->visibilityChanged((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 7: _t->dataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 8: _t->onRepresentationVisibilityChanged(); break;
        case 9: _t->prePortConnectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 10: _t->portConnectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 11: _t->prePortConnectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 12: _t->portConnectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 13: _t->portRepresentationAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 14: _t->portRepresentationRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 15: _t->portVisibilityChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 16: _t->dataUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqPipelineSource* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqPipelineSource * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::connectionAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqPipelineSource * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::preConnectionAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqPipelineSource * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::connectionRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqPipelineSource * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::preConnectionRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqDataRepresentation * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::representationAdded)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqDataRepresentation * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::representationRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * , pqDataRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::visibilityChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (pqPipelineSource::*_t)(pqPipelineSource * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineSource::dataUpdated)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject pqPipelineSource::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqPipelineSource.data,
      qt_meta_data_pqPipelineSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineSource.stringdata0))
        return static_cast<void*>(this);
    return pqProxy::qt_metacast(_clname);
}

int pqPipelineSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void pqPipelineSource::connectionAdded(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPipelineSource::preConnectionAdded(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqPipelineSource::connectionRemoved(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqPipelineSource::preConnectionRemoved(pqPipelineSource * _t1, pqPipelineSource * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqPipelineSource::representationAdded(pqPipelineSource * _t1, pqDataRepresentation * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqPipelineSource::representationRemoved(pqPipelineSource * _t1, pqDataRepresentation * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqPipelineSource::visibilityChanged(pqPipelineSource * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqPipelineSource::dataUpdated(pqPipelineSource * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
