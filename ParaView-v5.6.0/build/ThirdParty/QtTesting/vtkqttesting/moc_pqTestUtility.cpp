/****************************************************************************
** Meta object code from reading C++ file 'pqTestUtility.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqTestUtility.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTestUtility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTestUtility_t {
    QByteArrayData data[17];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTestUtility_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTestUtility_t qt_meta_stringdata_pqTestUtility = {
    {
QT_MOC_LITERAL(0, 0, 13), // "pqTestUtility"
QT_MOC_LITERAL(1, 14, 15), // "playbackStarted"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "playbackStopped"
QT_MOC_LITERAL(4, 47, 8), // "filename"
QT_MOC_LITERAL(5, 56, 5), // "error"
QT_MOC_LITERAL(6, 62, 9), // "playTests"
QT_MOC_LITERAL(7, 72, 16), // "openPlayerDialog"
QT_MOC_LITERAL(8, 89, 9), // "stopTests"
QT_MOC_LITERAL(9, 99, 11), // "stopRecords"
QT_MOC_LITERAL(10, 111, 5), // "value"
QT_MOC_LITERAL(11, 117, 12), // "pauseRecords"
QT_MOC_LITERAL(12, 130, 15), // "onRecordStopped"
QT_MOC_LITERAL(13, 146, 11), // "recordTests"
QT_MOC_LITERAL(14, 158, 19), // "recordTestsBySuffix"
QT_MOC_LITERAL(15, 178, 6), // "suffix"
QT_MOC_LITERAL(16, 185, 16) // "recordWithDialog"

    },
    "pqTestUtility\0playbackStarted\0\0"
    "playbackStopped\0filename\0error\0playTests\0"
    "openPlayerDialog\0stopTests\0stopRecords\0"
    "value\0pauseRecords\0onRecordStopped\0"
    "recordTests\0recordTestsBySuffix\0suffix\0"
    "recordWithDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTestUtility[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       1,    1,   76,    2, 0x06 /* Public */,
       3,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   84,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
      11,    1,   92,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   96,    2, 0x02 /* Public */,
      14,    1,   99,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,   15,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqTestUtility::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTestUtility *_t = static_cast<pqTestUtility *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playbackStarted(); break;
        case 1: _t->playbackStopped(); break;
        case 2: _t->playbackStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->playbackStopped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: { bool _r = _t->playTests((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->openPlayerDialog(); break;
        case 6: _t->stopTests(); break;
        case 7: _t->stopRecords((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->pauseRecords((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onRecordStopped(); break;
        case 10: _t->recordTests((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->recordTestsBySuffix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqTestUtility::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTestUtility::playbackStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqTestUtility::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTestUtility::playbackStopped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqTestUtility::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTestUtility::playbackStarted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqTestUtility::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTestUtility::playbackStopped)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqTestUtility *_t = static_cast<pqTestUtility *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->recordWithDialog(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqTestUtility *_t = static_cast<pqTestUtility *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRecordWithDialog(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqTestUtility::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTestUtility.data,
      qt_meta_data_pqTestUtility,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTestUtility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTestUtility::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTestUtility.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqTestUtility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void pqTestUtility::playbackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqTestUtility::playbackStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqTestUtility::playbackStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqTestUtility::playbackStopped(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
