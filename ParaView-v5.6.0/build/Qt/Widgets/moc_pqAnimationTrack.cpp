/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationTrack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqAnimationTrack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationTrack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimationTrack_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimationTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimationTrack_t qt_meta_stringdata_pqAnimationTrack = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqAnimationTrack"
QT_MOC_LITERAL(1, 17, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 49, 11), // "setProperty"
QT_MOC_LITERAL(5, 61, 1), // "p"
QT_MOC_LITERAL(6, 63, 15), // "setBoundingRect"
QT_MOC_LITERAL(7, 79, 1), // "r"
QT_MOC_LITERAL(8, 81, 10), // "setEnabled"
QT_MOC_LITERAL(9, 92, 6), // "enable"
QT_MOC_LITERAL(10, 99, 8) // "property"

    },
    "pqAnimationTrack\0propertyChanged\0\0"
    "enabledChanged\0setProperty\0p\0"
    "setBoundingRect\0r\0setEnabled\0enable\0"
    "property"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimationTrack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::QRectF,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // properties: name, type, flags
      10, QMetaType::QVariant, 0x00095103,

       0        // eod
};

void pqAnimationTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimationTrack *_t = static_cast<pqAnimationTrack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->setProperty((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->setBoundingRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 4: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqAnimationTrack::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationTrack::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqAnimationTrack::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationTrack::enabledChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqAnimationTrack *_t = static_cast<pqAnimationTrack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqAnimationTrack *_t = static_cast<pqAnimationTrack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProperty(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqAnimationTrack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqAnimationTrack.data,
      qt_meta_data_pqAnimationTrack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimationTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimationTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationTrack.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int pqAnimationTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void pqAnimationTrack::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqAnimationTrack::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
