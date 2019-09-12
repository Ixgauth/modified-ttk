/****************************************************************************
** Meta object code from reading C++ file 'pqLiveInsituManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqLiveInsituManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLiveInsituManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqLiveInsituManager_t {
    QByteArrayData data[16];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqLiveInsituManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqLiveInsituManager_t qt_meta_stringdata_pqLiveInsituManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pqLiveInsituManager"
QT_MOC_LITERAL(1, 20, 19), // "connectionInitiated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "pqServer*"
QT_MOC_LITERAL(4, 51, 14), // "displaySession"
QT_MOC_LITERAL(5, 66, 11), // "timeUpdated"
QT_MOC_LITERAL(6, 78, 15), // "breakpointAdded"
QT_MOC_LITERAL(7, 94, 13), // "insituSession"
QT_MOC_LITERAL(8, 108, 17), // "breakpointRemoved"
QT_MOC_LITERAL(9, 126, 13), // "breakpointHit"
QT_MOC_LITERAL(10, 140, 22), // "onCatalystDisconnected"
QT_MOC_LITERAL(11, 163, 15), // "onBreakpointHit"
QT_MOC_LITERAL(12, 179, 13), // "onSourceAdded"
QT_MOC_LITERAL(13, 193, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(14, 211, 6), // "source"
QT_MOC_LITERAL(15, 218, 13) // "onDataUpdated"

    },
    "pqLiveInsituManager\0connectionInitiated\0"
    "\0pqServer*\0displaySession\0timeUpdated\0"
    "breakpointAdded\0insituSession\0"
    "breakpointRemoved\0breakpointHit\0"
    "onCatalystDisconnected\0onBreakpointHit\0"
    "onSourceAdded\0pqPipelineSource*\0source\0"
    "onDataUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqLiveInsituManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       8,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   72,    2, 0x09 /* Protected */,
      11,    1,   73,    2, 0x09 /* Protected */,
      12,    1,   76,    2, 0x09 /* Protected */,
      15,    1,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void pqLiveInsituManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqLiveInsituManager *_t = static_cast<pqLiveInsituManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionInitiated((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 1: _t->timeUpdated(); break;
        case 2: _t->breakpointAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->breakpointRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->breakpointHit((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 5: _t->onCatalystDisconnected(); break;
        case 6: _t->onBreakpointHit((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 7: _t->onSourceAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 8: _t->onDataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqLiveInsituManager::*_t)(pqServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLiveInsituManager::connectionInitiated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqLiveInsituManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLiveInsituManager::timeUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqLiveInsituManager::*_t)(pqServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLiveInsituManager::breakpointAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqLiveInsituManager::*_t)(pqServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLiveInsituManager::breakpointRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqLiveInsituManager::*_t)(pqServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLiveInsituManager::breakpointHit)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject pqLiveInsituManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqLiveInsituManager.data,
      qt_meta_data_pqLiveInsituManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqLiveInsituManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqLiveInsituManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqLiveInsituManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqLiveInsituManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pqLiveInsituManager::connectionInitiated(pqServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqLiveInsituManager::timeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqLiveInsituManager::breakpointAdded(pqServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqLiveInsituManager::breakpointRemoved(pqServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqLiveInsituManager::breakpointHit(pqServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
