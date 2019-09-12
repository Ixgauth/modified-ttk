/****************************************************************************
** Meta object code from reading C++ file 'pqEventDispatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqEventDispatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEventDispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqEventDispatcher_t {
    QByteArrayData data[14];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqEventDispatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqEventDispatcher_t qt_meta_stringdata_pqEventDispatcher = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqEventDispatcher"
QT_MOC_LITERAL(1, 18, 9), // "restarted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "paused"
QT_MOC_LITERAL(4, 36, 9), // "playEvent"
QT_MOC_LITERAL(5, 46, 6), // "indent"
QT_MOC_LITERAL(6, 53, 19), // "playEventOnBlocking"
QT_MOC_LITERAL(7, 73, 12), // "aboutToBlock"
QT_MOC_LITERAL(8, 86, 5), // "awake"
QT_MOC_LITERAL(9, 92, 11), // "setTimeStep"
QT_MOC_LITERAL(10, 104, 5), // "value"
QT_MOC_LITERAL(11, 110, 3), // "run"
QT_MOC_LITERAL(12, 114, 4), // "stop"
QT_MOC_LITERAL(13, 119, 7) // "oneStep"

    },
    "pqEventDispatcher\0restarted\0\0paused\0"
    "playEvent\0indent\0playEventOnBlocking\0"
    "aboutToBlock\0awake\0setTimeStep\0value\0"
    "run\0stop\0oneStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqEventDispatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   71,    2, 0x09 /* Protected */,
       4,    0,   74,    2, 0x29 /* Protected | MethodCloned */,
       6,    0,   75,    2, 0x09 /* Protected */,
       7,    0,   76,    2, 0x09 /* Protected */,
       8,    0,   77,    2, 0x09 /* Protected */,
       9,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqEventDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqEventDispatcher *_t = static_cast<pqEventDispatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restarted(); break;
        case 1: _t->paused(); break;
        case 2: _t->playEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->playEvent(); break;
        case 4: _t->playEventOnBlocking(); break;
        case 5: _t->aboutToBlock(); break;
        case 6: _t->awake(); break;
        case 7: _t->setTimeStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->run((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->stop(); break;
        case 10: _t->oneStep(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqEventDispatcher::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventDispatcher::restarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqEventDispatcher::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventDispatcher::paused)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqEventDispatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqEventDispatcher.data,
      qt_meta_data_pqEventDispatcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqEventDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqEventDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqEventDispatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqEventDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void pqEventDispatcher::restarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqEventDispatcher::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
