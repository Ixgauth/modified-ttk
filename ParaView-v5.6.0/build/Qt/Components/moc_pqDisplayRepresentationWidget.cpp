/****************************************************************************
** Meta object code from reading C++ file 'pqDisplayRepresentationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqDisplayRepresentationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDisplayRepresentationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDisplayRepresentationWidget_t {
    QByteArrayData data[11];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDisplayRepresentationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDisplayRepresentationWidget_t qt_meta_stringdata_pqDisplayRepresentationWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "pqDisplayRepresentationWidget"
QT_MOC_LITERAL(1, 30, 25), // "representationTextChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "setRepresentation"
QT_MOC_LITERAL(4, 75, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(5, 97, 7), // "display"
QT_MOC_LITERAL(6, 105, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(7, 117, 5), // "proxy"
QT_MOC_LITERAL(8, 123, 21), // "setRepresentationText"
QT_MOC_LITERAL(9, 145, 15), // "comboBoxChanged"
QT_MOC_LITERAL(10, 161, 18) // "representationText"

    },
    "pqDisplayRepresentationWidget\0"
    "representationTextChanged\0\0setRepresentation\0"
    "pqDataRepresentation*\0display\0vtkSMProxy*\0"
    "proxy\0setRepresentationText\0comboBoxChanged\0"
    "representationText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDisplayRepresentationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   42,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void pqDisplayRepresentationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDisplayRepresentationWidget *_t = static_cast<pqDisplayRepresentationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->representationTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 2: _t->setRepresentation((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 3: _t->setRepresentationText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->comboBoxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqDisplayRepresentationWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDisplayRepresentationWidget::representationTextChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqDisplayRepresentationWidget *_t = static_cast<pqDisplayRepresentationWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->representationText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqDisplayRepresentationWidget *_t = static_cast<pqDisplayRepresentationWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRepresentationText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqDisplayRepresentationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqDisplayRepresentationWidget.data,
      qt_meta_data_pqDisplayRepresentationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDisplayRepresentationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDisplayRepresentationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDisplayRepresentationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqDisplayRepresentationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void pqDisplayRepresentationWidget::representationTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_pqDisplayRepresentationPropertyWidget_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDisplayRepresentationPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDisplayRepresentationPropertyWidget_t qt_meta_stringdata_pqDisplayRepresentationPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 37) // "pqDisplayRepresentationProper..."

    },
    "pqDisplayRepresentationPropertyWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDisplayRepresentationPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void pqDisplayRepresentationPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject pqDisplayRepresentationPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqDisplayRepresentationPropertyWidget.data,
      qt_meta_data_pqDisplayRepresentationPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDisplayRepresentationPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDisplayRepresentationPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDisplayRepresentationPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqDisplayRepresentationPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
