/****************************************************************************
** Meta object code from reading C++ file 'pqCameraManipulatorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqCameraManipulatorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCameraManipulatorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCameraManipulatorWidget_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCameraManipulatorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCameraManipulatorWidget_t qt_meta_stringdata_pqCameraManipulatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "pqCameraManipulatorWidget"
QT_MOC_LITERAL(1, 26, 23), // "manipulatorTypesChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 19), // "setManipulatorTypes"
QT_MOC_LITERAL(4, 71, 5), // "value"
QT_MOC_LITERAL(5, 77, 16) // "manipulatorTypes"

    },
    "pqCameraManipulatorWidget\0"
    "manipulatorTypesChanged\0\0setManipulatorTypes\0"
    "value\0manipulatorTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCameraManipulatorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    4,

 // properties: name, type, flags
       5, QMetaType::QVariantList, 0x00095103,

       0        // eod
};

void pqCameraManipulatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCameraManipulatorWidget *_t = static_cast<pqCameraManipulatorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->manipulatorTypesChanged(); break;
        case 1: _t->setManipulatorTypes((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqCameraManipulatorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCameraManipulatorWidget::manipulatorTypesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqCameraManipulatorWidget *_t = static_cast<pqCameraManipulatorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = _t->manipulatorTypes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqCameraManipulatorWidget *_t = static_cast<pqCameraManipulatorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setManipulatorTypes(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqCameraManipulatorWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqCameraManipulatorWidget.data,
      qt_meta_data_pqCameraManipulatorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCameraManipulatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCameraManipulatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCameraManipulatorWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqCameraManipulatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void pqCameraManipulatorWidget::manipulatorTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
