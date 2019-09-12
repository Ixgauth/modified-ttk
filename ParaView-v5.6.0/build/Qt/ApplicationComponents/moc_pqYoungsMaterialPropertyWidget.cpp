/****************************************************************************
** Meta object code from reading C++ file 'pqYoungsMaterialPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqYoungsMaterialPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqYoungsMaterialPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqYoungsMaterialPropertyWidget_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqYoungsMaterialPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqYoungsMaterialPropertyWidget_t qt_meta_stringdata_pqYoungsMaterialPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "pqYoungsMaterialPropertyWidget"
QT_MOC_LITERAL(1, 31, 19), // "normalArraysChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 21), // "orderingArraysChanged"
QT_MOC_LITERAL(4, 74, 5), // "value"
QT_MOC_LITERAL(5, 80, 16), // "updateComboBoxes"
QT_MOC_LITERAL(6, 97, 14), // "orderingArrays"
QT_MOC_LITERAL(7, 112, 12) // "normalArrays"

    },
    "pqYoungsMaterialPropertyWidget\0"
    "normalArraysChanged\0\0orderingArraysChanged\0"
    "value\0updateComboBoxes\0orderingArrays\0"
    "normalArrays"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqYoungsMaterialPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    1,   41,    2, 0x08 /* Private */,
       3,    1,   44,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QVariantList, 0x00495103,
       7, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void pqYoungsMaterialPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqYoungsMaterialPropertyWidget *_t = static_cast<pqYoungsMaterialPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->normalArraysChanged(); break;
        case 1: _t->orderingArraysChanged(); break;
        case 2: _t->normalArraysChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->orderingArraysChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateComboBoxes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqYoungsMaterialPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqYoungsMaterialPropertyWidget::normalArraysChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqYoungsMaterialPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqYoungsMaterialPropertyWidget::orderingArraysChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqYoungsMaterialPropertyWidget *_t = static_cast<pqYoungsMaterialPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = _t->orderingArrays(); break;
        case 1: *reinterpret_cast< QList<QVariant>*>(_v) = _t->normalArrays(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqYoungsMaterialPropertyWidget *_t = static_cast<pqYoungsMaterialPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrderingArrays(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 1: _t->setNormalArrays(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqYoungsMaterialPropertyWidget::staticMetaObject = {
    { &pqStringVectorPropertyWidget::staticMetaObject, qt_meta_stringdata_pqYoungsMaterialPropertyWidget.data,
      qt_meta_data_pqYoungsMaterialPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqYoungsMaterialPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqYoungsMaterialPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqYoungsMaterialPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqStringVectorPropertyWidget::qt_metacast(_clname);
}

int pqYoungsMaterialPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqStringVectorPropertyWidget::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqYoungsMaterialPropertyWidget::normalArraysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqYoungsMaterialPropertyWidget::orderingArraysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
