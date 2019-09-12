/****************************************************************************
** Meta object code from reading C++ file 'pqLinePropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqLinePropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLinePropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqLinePropertyWidget_t {
    QByteArrayData data[16];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqLinePropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqLinePropertyWidget_t qt_meta_stringdata_pqLinePropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqLinePropertyWidget"
QT_MOC_LITERAL(1, 21, 8), // "useXAxis"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "useYAxis"
QT_MOC_LITERAL(4, 40, 8), // "useZAxis"
QT_MOC_LITERAL(5, 49, 14), // "centerOnBounds"
QT_MOC_LITERAL(6, 64, 12), // "setLineColor"
QT_MOC_LITERAL(7, 77, 5), // "color"
QT_MOC_LITERAL(8, 83, 11), // "placeWidget"
QT_MOC_LITERAL(9, 95, 4), // "pick"
QT_MOC_LITERAL(10, 100, 1), // "x"
QT_MOC_LITERAL(11, 102, 1), // "y"
QT_MOC_LITERAL(12, 104, 1), // "z"
QT_MOC_LITERAL(13, 106, 10), // "pickPoint1"
QT_MOC_LITERAL(14, 117, 10), // "pickPoint2"
QT_MOC_LITERAL(15, 128, 17) // "updateLengthLabel"

    },
    "pqLinePropertyWidget\0useXAxis\0\0useYAxis\0"
    "useZAxis\0centerOnBounds\0setLineColor\0"
    "color\0placeWidget\0pick\0x\0y\0z\0pickPoint1\0"
    "pickPoint2\0updateLengthLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqLinePropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x09 /* Protected */,
       9,    3,   72,    2, 0x09 /* Protected */,
      13,    3,   79,    2, 0x09 /* Protected */,
      14,    3,   86,    2, 0x09 /* Protected */,
      15,    0,   93,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   10,   11,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   10,   11,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void pqLinePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqLinePropertyWidget *_t = static_cast<pqLinePropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->useXAxis(); break;
        case 1: _t->useYAxis(); break;
        case 2: _t->useZAxis(); break;
        case 3: _t->centerOnBounds(); break;
        case 4: _t->setLineColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->placeWidget(); break;
        case 6: _t->pick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->pickPoint1((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->pickPoint2((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->updateLengthLabel(); break;
        default: ;
        }
    }
}

const QMetaObject pqLinePropertyWidget::staticMetaObject = {
    { &pqInteractivePropertyWidget::staticMetaObject, qt_meta_stringdata_pqLinePropertyWidget.data,
      qt_meta_data_pqLinePropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqLinePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqLinePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqLinePropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqInteractivePropertyWidget::qt_metacast(_clname);
}

int pqLinePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqInteractivePropertyWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
