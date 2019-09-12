/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleRangeSliderPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqDoubleRangeSliderPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleRangeSliderPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDoubleRangeSliderPropertyWidget_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDoubleRangeSliderPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDoubleRangeSliderPropertyWidget_t qt_meta_stringdata_pqDoubleRangeSliderPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "pqDoubleRangeSliderPropertyWi..."
QT_MOC_LITERAL(1, 34, 20), // "highlightResetButton"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 9), // "highlight"
QT_MOC_LITERAL(4, 66, 12), // "resetClicked"
QT_MOC_LITERAL(5, 79, 12), // "lowerChanged"
QT_MOC_LITERAL(6, 92, 12) // "upperChanged"

    },
    "pqDoubleRangeSliderPropertyWidget\0"
    "highlightResetButton\0\0highlight\0"
    "resetClicked\0lowerChanged\0upperChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDoubleRangeSliderPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       1,    0,   42,    2, 0x29 /* Protected | MethodCloned */,
       4,    0,   43,    2, 0x09 /* Protected */,
       5,    1,   44,    2, 0x08 /* Private */,
       6,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void pqDoubleRangeSliderPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDoubleRangeSliderPropertyWidget *_t = static_cast<pqDoubleRangeSliderPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highlightResetButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->highlightResetButton(); break;
        case 2: _t->resetClicked(); break;
        case 3: _t->lowerChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->upperChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqDoubleRangeSliderPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqDoubleRangeSliderPropertyWidget.data,
      qt_meta_data_pqDoubleRangeSliderPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDoubleRangeSliderPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDoubleRangeSliderPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleRangeSliderPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqDoubleRangeSliderPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
