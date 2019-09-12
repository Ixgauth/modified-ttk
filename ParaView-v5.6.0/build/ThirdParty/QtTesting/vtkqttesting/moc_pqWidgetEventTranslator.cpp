/****************************************************************************
** Meta object code from reading C++ file 'pqWidgetEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqWidgetEventTranslator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqWidgetEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqWidgetEventTranslator_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqWidgetEventTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqWidgetEventTranslator_t qt_meta_stringdata_pqWidgetEventTranslator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqWidgetEventTranslator"
QT_MOC_LITERAL(1, 24, 11), // "recordEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "Object"
QT_MOC_LITERAL(4, 44, 7), // "Command"
QT_MOC_LITERAL(5, 52, 9), // "Arguments"
QT_MOC_LITERAL(6, 62, 9), // "eventType"
QT_MOC_LITERAL(7, 72, 15), // "specificOverlay"
QT_MOC_LITERAL(8, 88, 8) // "geometry"

    },
    "pqWidgetEventTranslator\0recordEvent\0"
    "\0Object\0Command\0Arguments\0eventType\0"
    "specificOverlay\0geometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqWidgetEventTranslator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       1,    3,   38,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QRect,    8,

       0        // eod
};

void pqWidgetEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqWidgetEventTranslator *_t = static_cast<pqWidgetEventTranslator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->recordEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->specificOverlay((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqWidgetEventTranslator::*_t)(QObject * , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqWidgetEventTranslator::recordEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqWidgetEventTranslator::*_t)(QObject * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqWidgetEventTranslator::recordEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqWidgetEventTranslator::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqWidgetEventTranslator::specificOverlay)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject pqWidgetEventTranslator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqWidgetEventTranslator.data,
      qt_meta_data_pqWidgetEventTranslator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqWidgetEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqWidgetEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqWidgetEventTranslator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqWidgetEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqWidgetEventTranslator::recordEvent(QObject * _t1, const QString & _t2, const QString & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqWidgetEventTranslator::recordEvent(QObject * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqWidgetEventTranslator::specificOverlay(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
