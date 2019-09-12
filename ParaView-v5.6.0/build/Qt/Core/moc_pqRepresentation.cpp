/****************************************************************************
** Meta object code from reading C++ file 'pqRepresentation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqRepresentation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRepresentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqRepresentation_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqRepresentation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqRepresentation_t qt_meta_stringdata_pqRepresentation = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqRepresentation"
QT_MOC_LITERAL(1, 17, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "visible"
QT_MOC_LITERAL(4, 44, 7), // "updated"
QT_MOC_LITERAL(5, 52, 10), // "renderView"
QT_MOC_LITERAL(6, 63, 5), // "force"
QT_MOC_LITERAL(7, 69, 20), // "renderViewEventually"
QT_MOC_LITERAL(8, 90, 19) // "onVisibilityChanged"

    },
    "pqRepresentation\0visibilityChanged\0\0"
    "visible\0updated\0renderView\0force\0"
    "renderViewEventually\0onVisibilityChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqRepresentation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x0a /* Public */,
       7,    0,   46,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqRepresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqRepresentation *_t = static_cast<pqRepresentation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updated(); break;
        case 2: _t->renderView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->renderViewEventually(); break;
        case 4: _t->onVisibilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqRepresentation::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqRepresentation::visibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqRepresentation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqRepresentation::updated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqRepresentation::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqRepresentation.data,
      qt_meta_data_pqRepresentation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqRepresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqRepresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqRepresentation.stringdata0))
        return static_cast<void*>(this);
    return pqProxy::qt_metacast(_clname);
}

int pqRepresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void pqRepresentation::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqRepresentation::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
