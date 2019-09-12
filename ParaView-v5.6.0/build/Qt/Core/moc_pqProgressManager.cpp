/****************************************************************************
** Meta object code from reading C++ file 'pqProgressManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqProgressManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProgressManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqProgressManager_t {
    QByteArrayData data[23];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqProgressManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqProgressManager_t qt_meta_stringdata_pqProgressManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqProgressManager"
QT_MOC_LITERAL(1, 18, 5), // "abort"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "progress"
QT_MOC_LITERAL(4, 34, 7), // "message"
QT_MOC_LITERAL(5, 42, 14), // "enableProgress"
QT_MOC_LITERAL(6, 57, 11), // "enableAbort"
QT_MOC_LITERAL(7, 69, 18), // "progressStartEvent"
QT_MOC_LITERAL(8, 88, 16), // "progressEndEvent"
QT_MOC_LITERAL(9, 105, 11), // "setProgress"
QT_MOC_LITERAL(10, 117, 17), // "setEnableProgress"
QT_MOC_LITERAL(11, 135, 13), // "beginProgress"
QT_MOC_LITERAL(12, 149, 11), // "endProgress"
QT_MOC_LITERAL(13, 161, 14), // "setEnableAbort"
QT_MOC_LITERAL(14, 176, 12), // "triggerAbort"
QT_MOC_LITERAL(15, 189, 13), // "unblockEvents"
QT_MOC_LITERAL(16, 203, 3), // "val"
QT_MOC_LITERAL(17, 207, 15), // "onStartProgress"
QT_MOC_LITERAL(18, 223, 13), // "onEndProgress"
QT_MOC_LITERAL(19, 237, 10), // "onProgress"
QT_MOC_LITERAL(20, 248, 10), // "vtkObject*"
QT_MOC_LITERAL(21, 259, 13), // "onServerAdded"
QT_MOC_LITERAL(22, 273, 9) // "pqServer*"

    },
    "pqProgressManager\0abort\0\0progress\0"
    "message\0enableProgress\0enableAbort\0"
    "progressStartEvent\0progressEndEvent\0"
    "setProgress\0setEnableProgress\0"
    "beginProgress\0endProgress\0setEnableAbort\0"
    "triggerAbort\0unblockEvents\0val\0"
    "onStartProgress\0onEndProgress\0onProgress\0"
    "vtkObject*\0onServerAdded\0pqServer*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqProgressManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    2,  100,    2, 0x06 /* Public */,
       5,    1,  105,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,
       7,    0,  111,    2, 0x06 /* Public */,
       8,    0,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,  113,    2, 0x0a /* Public */,
      10,    1,  118,    2, 0x0a /* Public */,
      11,    0,  121,    2, 0x0a /* Public */,
      12,    0,  122,    2, 0x0a /* Public */,
      13,    1,  123,    2, 0x0a /* Public */,
      14,    0,  126,    2, 0x0a /* Public */,
      15,    1,  127,    2, 0x0a /* Public */,
      17,    0,  130,    2, 0x09 /* Protected */,
      18,    0,  131,    2, 0x09 /* Protected */,
      19,    1,  132,    2, 0x09 /* Protected */,
      21,    1,  135,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22,    2,

       0        // eod
};

void pqProgressManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqProgressManager *_t = static_cast<pqProgressManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->abort(); break;
        case 1: _t->progress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->enableProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableAbort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->progressStartEvent(); break;
        case 5: _t->progressEndEvent(); break;
        case 6: _t->setProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setEnableProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->beginProgress(); break;
        case 9: _t->endProgress(); break;
        case 10: _t->setEnableAbort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->triggerAbort(); break;
        case 12: { bool _r = _t->unblockEvents((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->onStartProgress(); break;
        case 14: _t->onEndProgress(); break;
        case 15: _t->onProgress((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 16: _t->onServerAdded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqProgressManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProgressManager::abort)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqProgressManager::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProgressManager::progress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqProgressManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProgressManager::enableProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqProgressManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProgressManager::enableAbort)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqProgressManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProgressManager::progressStartEvent)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqProgressManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProgressManager::progressEndEvent)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject pqProgressManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqProgressManager.data,
      qt_meta_data_pqProgressManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqProgressManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqProgressManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqProgressManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqProgressManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void pqProgressManager::abort()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqProgressManager::progress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqProgressManager::enableProgress(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqProgressManager::enableAbort(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqProgressManager::progressStartEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void pqProgressManager::progressEndEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
