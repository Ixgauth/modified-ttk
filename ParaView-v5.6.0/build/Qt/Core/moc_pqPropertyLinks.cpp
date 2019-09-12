/****************************************************************************
** Meta object code from reading C++ file 'pqPropertyLinks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqPropertyLinks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertyLinks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPropertyLinks_t {
    QByteArrayData data[13];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPropertyLinks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPropertyLinks_t qt_meta_stringdata_pqPropertyLinks = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqPropertyLinks"
QT_MOC_LITERAL(1, 16, 15), // "qtWidgetChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "smPropertyChanged"
QT_MOC_LITERAL(4, 51, 22), // "removeAllPropertyLinks"
QT_MOC_LITERAL(5, 74, 5), // "clear"
QT_MOC_LITERAL(6, 80, 6), // "accept"
QT_MOC_LITERAL(7, 87, 5), // "reset"
QT_MOC_LITERAL(8, 93, 25), // "setUseUncheckedProperties"
QT_MOC_LITERAL(9, 119, 3), // "val"
QT_MOC_LITERAL(10, 123, 23), // "setAutoUpdateVTKObjects"
QT_MOC_LITERAL(11, 147, 20), // "onQtPropertyModified"
QT_MOC_LITERAL(12, 168, 20) // "onSMPropertyModified"

    },
    "pqPropertyLinks\0qtWidgetChanged\0\0"
    "smPropertyChanged\0removeAllPropertyLinks\0"
    "clear\0accept\0reset\0setUseUncheckedProperties\0"
    "val\0setAutoUpdateVTKObjects\0"
    "onQtPropertyModified\0onSMPropertyModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPropertyLinks[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqPropertyLinks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPropertyLinks *_t = static_cast<pqPropertyLinks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qtWidgetChanged(); break;
        case 1: _t->smPropertyChanged(); break;
        case 2: _t->removeAllPropertyLinks(); break;
        case 3: _t->clear(); break;
        case 4: _t->accept(); break;
        case 5: _t->reset(); break;
        case 6: _t->setUseUncheckedProperties((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAutoUpdateVTKObjects((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onQtPropertyModified(); break;
        case 9: _t->onSMPropertyModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPropertyLinks::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPropertyLinks::qtWidgetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqPropertyLinks::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPropertyLinks::smPropertyChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqPropertyLinks::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPropertyLinks.data,
      qt_meta_data_pqPropertyLinks,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPropertyLinks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPropertyLinks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertyLinks.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqPropertyLinks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqPropertyLinks::qtWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqPropertyLinks::smPropertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
