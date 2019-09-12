/****************************************************************************
** Meta object code from reading C++ file 'pqProxyEditorPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqProxyEditorPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyEditorPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqProxyEditorPropertyWidget_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqProxyEditorPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqProxyEditorPropertyWidget_t qt_meta_stringdata_pqProxyEditorPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "pqProxyEditorPropertyWidget"
QT_MOC_LITERAL(1, 28, 11), // "dummySignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "setProxyToEdit"
QT_MOC_LITERAL(4, 56, 9), // "pqSMProxy"
QT_MOC_LITERAL(5, 66, 13), // "buttonClicked"
QT_MOC_LITERAL(6, 80, 11) // "proxyToEdit"

    },
    "pqProxyEditorPropertyWidget\0dummySignal\0"
    "\0setProxyToEdit\0pqSMProxy\0buttonClicked\0"
    "proxyToEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqProxyEditorPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 4, 0x0009510b,

       0        // eod
};

void pqProxyEditorPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqProxyEditorPropertyWidget *_t = static_cast<pqProxyEditorPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dummySignal(); break;
        case 1: _t->setProxyToEdit((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 2: _t->buttonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqProxyEditorPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProxyEditorPropertyWidget::dummySignal)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqProxyEditorPropertyWidget *_t = static_cast<pqProxyEditorPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pqSMProxy*>(_v) = _t->proxyToEdit(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqProxyEditorPropertyWidget *_t = static_cast<pqProxyEditorPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProxyToEdit(*reinterpret_cast< pqSMProxy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqProxyEditorPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqProxyEditorPropertyWidget.data,
      qt_meta_data_pqProxyEditorPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqProxyEditorPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqProxyEditorPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyEditorPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqProxyEditorPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
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
void pqProxyEditorPropertyWidget::dummySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
