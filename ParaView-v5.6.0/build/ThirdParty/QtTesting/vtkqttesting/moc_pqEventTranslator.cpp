/****************************************************************************
** Meta object code from reading C++ file 'pqEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqEventTranslator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqEventTranslator_t {
    QByteArrayData data[13];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqEventTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqEventTranslator_t qt_meta_stringdata_pqEventTranslator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqEventTranslator"
QT_MOC_LITERAL(1, 18, 11), // "recordEvent"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "Object"
QT_MOC_LITERAL(4, 38, 7), // "Command"
QT_MOC_LITERAL(5, 46, 9), // "Arguments"
QT_MOC_LITERAL(6, 56, 9), // "eventType"
QT_MOC_LITERAL(7, 66, 7), // "started"
QT_MOC_LITERAL(8, 74, 7), // "stopped"
QT_MOC_LITERAL(9, 82, 13), // "onRecordEvent"
QT_MOC_LITERAL(10, 96, 18), // "setOverlayGeometry"
QT_MOC_LITERAL(11, 115, 8), // "geometry"
QT_MOC_LITERAL(12, 124, 8) // "specific"

    },
    "pqEventTranslator\0recordEvent\0\0Object\0"
    "Command\0Arguments\0eventType\0started\0"
    "stopped\0onRecordEvent\0setOverlayGeometry\0"
    "geometry\0specific"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqEventTranslator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       7,    0,   58,    2, 0x06 /* Public */,
       8,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    4,   60,    2, 0x08 /* Private */,
       9,    3,   69,    2, 0x08 /* Private */,
      10,    2,   76,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QRect, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::QRect,   11,

       0        // eod
};

void pqEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqEventTranslator *_t = static_cast<pqEventTranslator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->started(); break;
        case 2: _t->stopped(); break;
        case 3: _t->onRecordEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->onRecordEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->setOverlayGeometry((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setOverlayGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqEventTranslator::*_t)(const QString & , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventTranslator::recordEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqEventTranslator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventTranslator::started)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqEventTranslator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqEventTranslator::stopped)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject pqEventTranslator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqEventTranslator.data,
      qt_meta_data_pqEventTranslator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqEventTranslator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqEventTranslator::recordEvent(const QString & _t1, const QString & _t2, const QString & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqEventTranslator::started()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqEventTranslator::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
