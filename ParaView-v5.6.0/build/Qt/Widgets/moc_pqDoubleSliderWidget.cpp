/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleSliderWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqDoubleSliderWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleSliderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDoubleSliderWidget_t {
    QByteArrayData data[23];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDoubleSliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDoubleSliderWidget_t qt_meta_stringdata_pqDoubleSliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqDoubleSliderWidget"
QT_MOC_LITERAL(1, 21, 12), // "valueChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "valueEdited"
QT_MOC_LITERAL(4, 47, 8), // "setValue"
QT_MOC_LITERAL(5, 56, 3), // "val"
QT_MOC_LITERAL(6, 60, 11), // "setNotation"
QT_MOC_LITERAL(7, 72, 36), // "pqDoubleLineEdit::RealNumberN..."
QT_MOC_LITERAL(8, 109, 9), // "_notation"
QT_MOC_LITERAL(9, 119, 12), // "setPrecision"
QT_MOC_LITERAL(10, 132, 9), // "precision"
QT_MOC_LITERAL(11, 142, 32), // "setUseGlobalPrecisionAndNotation"
QT_MOC_LITERAL(12, 175, 5), // "value"
QT_MOC_LITERAL(13, 181, 13), // "sliderChanged"
QT_MOC_LITERAL(14, 195, 11), // "textChanged"
QT_MOC_LITERAL(15, 207, 4), // "text"
QT_MOC_LITERAL(16, 212, 15), // "editingFinished"
QT_MOC_LITERAL(17, 228, 13), // "sliderPressed"
QT_MOC_LITERAL(18, 242, 14), // "sliderReleased"
QT_MOC_LITERAL(19, 257, 15), // "emitValueEdited"
QT_MOC_LITERAL(20, 273, 25), // "emitIfDeferredValueEdited"
QT_MOC_LITERAL(21, 299, 8), // "notation"
QT_MOC_LITERAL(22, 308, 29) // "useGlobalPrecisionAndNotation"

    },
    "pqDoubleSliderWidget\0valueChanged\0\0"
    "valueEdited\0setValue\0val\0setNotation\0"
    "pqDoubleLineEdit::RealNumberNotation\0"
    "_notation\0setPrecision\0precision\0"
    "setUseGlobalPrecisionAndNotation\0value\0"
    "sliderChanged\0textChanged\0text\0"
    "editingFinished\0sliderPressed\0"
    "sliderReleased\0emitValueEdited\0"
    "emitIfDeferredValueEdited\0notation\0"
    "useGlobalPrecisionAndNotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDoubleSliderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   85,    2, 0x0a /* Public */,
       6,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      11,    1,   94,    2, 0x0a /* Public */,
      13,    1,   97,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Double, 0x00195103,
      21, 0x80000000 | 7, 0x0009510b,
      10, QMetaType::Int, 0x00095103,
      22, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqDoubleSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDoubleSliderWidget *_t = static_cast<pqDoubleSliderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueEdited((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setNotation((*reinterpret_cast< pqDoubleLineEdit::RealNumberNotation(*)>(_a[1]))); break;
        case 4: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setUseGlobalPrecisionAndNotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->editingFinished(); break;
        case 9: _t->sliderPressed(); break;
        case 10: _t->sliderReleased(); break;
        case 11: _t->emitValueEdited(); break;
        case 12: _t->emitIfDeferredValueEdited(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqDoubleSliderWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDoubleSliderWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqDoubleSliderWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDoubleSliderWidget::valueEdited)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqDoubleSliderWidget *_t = static_cast<pqDoubleSliderWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< pqDoubleLineEdit::RealNumberNotation*>(_v) = _t->notation(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->precision(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->useGlobalPrecisionAndNotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqDoubleSliderWidget *_t = static_cast<pqDoubleSliderWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setNotation(*reinterpret_cast< pqDoubleLineEdit::RealNumberNotation*>(_v)); break;
        case 2: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setUseGlobalPrecisionAndNotation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_pqDoubleSliderWidget[] = {
        &pqDoubleLineEdit::staticMetaObject,
    nullptr
};

const QMetaObject pqDoubleSliderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqDoubleSliderWidget.data,
      qt_meta_data_pqDoubleSliderWidget,  qt_static_metacall, qt_meta_extradata_pqDoubleSliderWidget, nullptr}
};


const QMetaObject *pqDoubleSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDoubleSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleSliderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqDoubleSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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

// SIGNAL 0
void pqDoubleSliderWidget::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqDoubleSliderWidget::valueEdited(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
