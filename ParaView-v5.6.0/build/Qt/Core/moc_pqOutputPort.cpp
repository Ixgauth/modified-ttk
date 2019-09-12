/****************************************************************************
** Meta object code from reading C++ file 'pqOutputPort.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqOutputPort.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqOutputPort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqOutputPort_t {
    QByteArrayData data[19];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqOutputPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqOutputPort_t qt_meta_stringdata_pqOutputPort = {
    {
QT_MOC_LITERAL(0, 0, 12), // "pqOutputPort"
QT_MOC_LITERAL(1, 13, 15), // "connectionAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "pqOutputPort*"
QT_MOC_LITERAL(4, 44, 4), // "port"
QT_MOC_LITERAL(5, 49, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(6, 67, 8), // "consumer"
QT_MOC_LITERAL(7, 76, 18), // "preConnectionAdded"
QT_MOC_LITERAL(8, 95, 17), // "connectionRemoved"
QT_MOC_LITERAL(9, 113, 20), // "preConnectionRemoved"
QT_MOC_LITERAL(10, 134, 19), // "representationAdded"
QT_MOC_LITERAL(11, 154, 6), // "source"
QT_MOC_LITERAL(12, 161, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(13, 183, 4), // "repr"
QT_MOC_LITERAL(14, 188, 21), // "representationRemoved"
QT_MOC_LITERAL(15, 210, 17), // "visibilityChanged"
QT_MOC_LITERAL(16, 228, 14), // "renderAllViews"
QT_MOC_LITERAL(17, 243, 5), // "force"
QT_MOC_LITERAL(18, 249, 33) // "onRepresentationVisibilityCha..."

    },
    "pqOutputPort\0connectionAdded\0\0"
    "pqOutputPort*\0port\0pqPipelineSource*\0"
    "consumer\0preConnectionAdded\0"
    "connectionRemoved\0preConnectionRemoved\0"
    "representationAdded\0source\0"
    "pqDataRepresentation*\0repr\0"
    "representationRemoved\0visibilityChanged\0"
    "renderAllViews\0force\0"
    "onRepresentationVisibilityChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqOutputPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       7,    2,   69,    2, 0x06 /* Public */,
       8,    2,   74,    2, 0x06 /* Public */,
       9,    2,   79,    2, 0x06 /* Public */,
      10,    2,   84,    2, 0x06 /* Public */,
      14,    2,   89,    2, 0x06 /* Public */,
      15,    2,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   99,    2, 0x0a /* Public */,
      16,    0,  102,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  103,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12,   11,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqOutputPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqOutputPort *_t = static_cast<pqOutputPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 1: _t->preConnectionAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 2: _t->connectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 3: _t->preConnectionRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2]))); break;
        case 4: _t->representationAdded((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 5: _t->representationRemoved((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 6: _t->visibilityChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1])),(*reinterpret_cast< pqDataRepresentation*(*)>(_a[2]))); break;
        case 7: _t->renderAllViews((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->renderAllViews(); break;
        case 9: _t->onRepresentationVisibilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqOutputPort* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqPipelineSource * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::connectionAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqPipelineSource * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::preConnectionAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqPipelineSource * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::connectionRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqPipelineSource * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::preConnectionRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqDataRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::representationAdded)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqDataRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::representationRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqOutputPort::*_t)(pqOutputPort * , pqDataRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPort::visibilityChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject pqOutputPort::staticMetaObject = {
    { &pqServerManagerModelItem::staticMetaObject, qt_meta_stringdata_pqOutputPort.data,
      qt_meta_data_pqOutputPort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqOutputPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqOutputPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqOutputPort.stringdata0))
        return static_cast<void*>(this);
    return pqServerManagerModelItem::qt_metacast(_clname);
}

int pqOutputPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqServerManagerModelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqOutputPort::connectionAdded(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqOutputPort::preConnectionAdded(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqOutputPort::connectionRemoved(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqOutputPort::preConnectionRemoved(pqOutputPort * _t1, pqPipelineSource * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqOutputPort::representationAdded(pqOutputPort * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqOutputPort::representationRemoved(pqOutputPort * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqOutputPort::visibilityChanged(pqOutputPort * _t1, pqDataRepresentation * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
