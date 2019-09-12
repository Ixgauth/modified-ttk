/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleRangeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqDoubleRangeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleRangeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDoubleRangeWidget_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDoubleRangeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDoubleRangeWidget_t qt_meta_stringdata_pqDoubleRangeWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pqDoubleRangeWidget"
QT_MOC_LITERAL(1, 20, 10), // "setMinimum"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "setMaximum"
QT_MOC_LITERAL(4, 43, 14), // "setStrictRange"
QT_MOC_LITERAL(5, 58, 13), // "setResolution"
QT_MOC_LITERAL(6, 72, 15), // "updateValidator"
QT_MOC_LITERAL(7, 88, 7), // "minimum"
QT_MOC_LITERAL(8, 96, 7), // "maximum"
QT_MOC_LITERAL(9, 104, 11), // "strictRange"
QT_MOC_LITERAL(10, 116, 10) // "resolution"

    },
    "pqDoubleRangeWidget\0setMinimum\0\0"
    "setMaximum\0setStrictRange\0setResolution\0"
    "updateValidator\0minimum\0maximum\0"
    "strictRange\0resolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDoubleRangeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       3,    1,   42,    2, 0x0a /* Public */,
       4,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Int, 0x00095103,

       0        // eod
};

void pqDoubleRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDoubleRangeWidget *_t = static_cast<pqDoubleRangeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMinimum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setMaximum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setStrictRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateValidator(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqDoubleRangeWidget *_t = static_cast<pqDoubleRangeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->strictRange(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->resolution(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqDoubleRangeWidget *_t = static_cast<pqDoubleRangeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setStrictRange(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setResolution(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqDoubleRangeWidget::staticMetaObject = {
    { &pqDoubleSliderWidget::staticMetaObject, qt_meta_stringdata_pqDoubleRangeWidget.data,
      qt_meta_data_pqDoubleRangeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDoubleRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDoubleRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleRangeWidget.stringdata0))
        return static_cast<void*>(this);
    return pqDoubleSliderWidget::qt_metacast(_clname);
}

int pqDoubleRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqDoubleSliderWidget::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
