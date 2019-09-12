/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqAnimationManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimationManager_t {
    QByteArrayData data[23];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimationManager_t qt_meta_stringdata_pqAnimationManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "pqAnimationManager"
QT_MOC_LITERAL(1, 19, 18), // "activeSceneChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "pqAnimationScene*"
QT_MOC_LITERAL(4, 57, 5), // "scene"
QT_MOC_LITERAL(5, 63, 19), // "activeServerChanged"
QT_MOC_LITERAL(6, 83, 9), // "pqServer*"
QT_MOC_LITERAL(7, 93, 12), // "saveProgress"
QT_MOC_LITERAL(8, 106, 23), // "beginNonUndoableChanges"
QT_MOC_LITERAL(9, 130, 21), // "endNonUndoableChanges"
QT_MOC_LITERAL(10, 152, 14), // "writeAnimation"
QT_MOC_LITERAL(11, 167, 8), // "filename"
QT_MOC_LITERAL(12, 176, 13), // "magnification"
QT_MOC_LITERAL(13, 190, 9), // "frameRate"
QT_MOC_LITERAL(14, 200, 9), // "beginPlay"
QT_MOC_LITERAL(15, 210, 7), // "endPlay"
QT_MOC_LITERAL(16, 218, 21), // "onActiveServerChanged"
QT_MOC_LITERAL(17, 240, 12), // "onProxyAdded"
QT_MOC_LITERAL(18, 253, 8), // "pqProxy*"
QT_MOC_LITERAL(19, 262, 14), // "onProxyRemoved"
QT_MOC_LITERAL(20, 277, 6), // "onTick"
QT_MOC_LITERAL(21, 284, 11), // "onBeginPlay"
QT_MOC_LITERAL(22, 296, 9) // "onEndPlay"

    },
    "pqAnimationManager\0activeSceneChanged\0"
    "\0pqAnimationScene*\0scene\0activeServerChanged\0"
    "pqServer*\0saveProgress\0beginNonUndoableChanges\0"
    "endNonUndoableChanges\0writeAnimation\0"
    "filename\0magnification\0frameRate\0"
    "beginPlay\0endPlay\0onActiveServerChanged\0"
    "onProxyAdded\0pqProxy*\0onProxyRemoved\0"
    "onTick\0onBeginPlay\0onEndPlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       7,    2,   90,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    0,   96,    2, 0x06 /* Public */,
      10,    3,   97,    2, 0x06 /* Public */,
      14,    0,  104,    2, 0x06 /* Public */,
      15,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  106,    2, 0x0a /* Public */,
      17,    1,  109,    2, 0x09 /* Protected */,
      19,    1,  112,    2, 0x09 /* Protected */,
      20,    1,  115,    2, 0x09 /* Protected */,
      21,    0,  118,    2, 0x09 /* Protected */,
      22,    0,  119,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqAnimationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimationManager *_t = static_cast<pqAnimationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeSceneChanged((*reinterpret_cast< pqAnimationScene*(*)>(_a[1]))); break;
        case 1: _t->activeServerChanged((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->saveProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->beginNonUndoableChanges(); break;
        case 4: _t->endNonUndoableChanges(); break;
        case 5: _t->writeAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: _t->beginPlay(); break;
        case 7: _t->endPlay(); break;
        case 8: _t->onActiveServerChanged((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 9: _t->onProxyAdded((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 10: _t->onProxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 11: _t->onTick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onBeginPlay(); break;
        case 13: _t->onEndPlay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqAnimationManager::*_t)(pqAnimationScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::activeSceneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)(pqServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::activeServerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::saveProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::beginNonUndoableChanges)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::endNonUndoableChanges)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)(const QString & , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::writeAnimation)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::beginPlay)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (pqAnimationManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationManager::endPlay)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject pqAnimationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqAnimationManager.data,
      qt_meta_data_pqAnimationManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqAnimationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void pqAnimationManager::activeSceneChanged(pqAnimationScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqAnimationManager::activeServerChanged(pqServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqAnimationManager::saveProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqAnimationManager::beginNonUndoableChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pqAnimationManager::endNonUndoableChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void pqAnimationManager::writeAnimation(const QString & _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqAnimationManager::beginPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void pqAnimationManager::endPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
