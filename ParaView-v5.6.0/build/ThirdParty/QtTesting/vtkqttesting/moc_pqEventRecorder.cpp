/****************************************************************************
** Meta object code from reading C++ file 'pqEventRecorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqEventRecorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEventRecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqEventRecorder_t {
    QByteArrayData data[15];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqEventRecorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqEventRecorder_t qt_meta_stringdata_pqEventRecorder = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqEventRecorder"
QT_MOC_LITERAL(1, 16, 7), // "started"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "stopped"
QT_MOC_LITERAL(4, 33, 6), // "paused"
QT_MOC_LITERAL(5, 40, 5), // "flush"
QT_MOC_LITERAL(6, 46, 5), // "start"
QT_MOC_LITERAL(7, 52, 4), // "stop"
QT_MOC_LITERAL(8, 57, 5), // "value"
QT_MOC_LITERAL(9, 63, 7), // "unpause"
QT_MOC_LITERAL(10, 71, 5), // "pause"
QT_MOC_LITERAL(11, 77, 5), // "check"
QT_MOC_LITERAL(12, 83, 18), // "setContinuousFlush"
QT_MOC_LITERAL(13, 102, 27), // "setRecordInteractionTimings"
QT_MOC_LITERAL(14, 130, 15) // "continuousFlush"

    },
    "pqEventRecorder\0started\0\0stopped\0"
    "paused\0flush\0start\0stop\0value\0unpause\0"
    "pause\0check\0setContinuousFlush\0"
    "setRecordInteractionTimings\0continuousFlush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqEventRecorder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   74,    2, 0x0a /* Public */,
       6,    0,   75,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqEventRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqEventRecorder *_t = static_cast<pqEventRecorder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        case 2: _t->paused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->flush(); break;
        case 4: _t->start(); break;
        case 5: _t->stop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->unpause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->check((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setContinuousFlush((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setRecordInteractionTimings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqEventRecorder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventRecorder::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqEventRecorder::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventRecorder::stopped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqEventRecorder::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventRecorder::paused)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqEventRecorder *_t = static_cast<pqEventRecorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->continuousFlush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqEventRecorder *_t = static_cast<pqEventRecorder *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContinuousFlush(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqEventRecorder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqEventRecorder.data,
      qt_meta_data_pqEventRecorder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqEventRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqEventRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqEventRecorder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqEventRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqEventRecorder::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqEventRecorder::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqEventRecorder::paused(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
