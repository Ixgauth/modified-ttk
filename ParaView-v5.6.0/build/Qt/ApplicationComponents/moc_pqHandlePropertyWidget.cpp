/****************************************************************************
** Meta object code from reading C++ file 'pqHandlePropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqHandlePropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqHandlePropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqHandlePropertyWidget_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqHandlePropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqHandlePropertyWidget_t qt_meta_stringdata_pqHandlePropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqHandlePropertyWidget"
QT_MOC_LITERAL(1, 23, 14), // "centerOnBounds"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "placeWidget"
QT_MOC_LITERAL(4, 51, 16), // "setWorldPosition"
QT_MOC_LITERAL(5, 68, 1), // "x"
QT_MOC_LITERAL(6, 70, 1), // "y"
QT_MOC_LITERAL(7, 72, 1) // "z"

    },
    "pqHandlePropertyWidget\0centerOnBounds\0"
    "\0placeWidget\0setWorldPosition\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqHandlePropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    3,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,    6,    7,

       0        // eod
};

void pqHandlePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqHandlePropertyWidget *_t = static_cast<pqHandlePropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerOnBounds(); break;
        case 1: _t->placeWidget(); break;
        case 2: _t->setWorldPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject pqHandlePropertyWidget::staticMetaObject = {
    { &pqInteractivePropertyWidget::staticMetaObject, qt_meta_stringdata_pqHandlePropertyWidget.data,
      qt_meta_data_pqHandlePropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqHandlePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqHandlePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqHandlePropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqInteractivePropertyWidget::qt_metacast(_clname);
}

int pqHandlePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqInteractivePropertyWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE