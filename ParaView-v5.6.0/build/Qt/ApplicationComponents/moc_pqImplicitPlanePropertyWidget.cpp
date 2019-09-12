/****************************************************************************
** Meta object code from reading C++ file 'pqImplicitPlanePropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqImplicitPlanePropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqImplicitPlanePropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqImplicitPlanePropertyWidget_t {
    QByteArrayData data[17];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqImplicitPlanePropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqImplicitPlanePropertyWidget_t qt_meta_stringdata_pqImplicitPlanePropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "pqImplicitPlanePropertyWidget"
QT_MOC_LITERAL(1, 30, 9), // "showPlane"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "hidePlane"
QT_MOC_LITERAL(4, 51, 12), // "setDrawPlane"
QT_MOC_LITERAL(5, 64, 3), // "val"
QT_MOC_LITERAL(6, 68, 10), // "useXNormal"
QT_MOC_LITERAL(7, 79, 10), // "useYNormal"
QT_MOC_LITERAL(8, 90, 10), // "useZNormal"
QT_MOC_LITERAL(9, 101, 17), // "resetToDataBounds"
QT_MOC_LITERAL(10, 119, 19), // "resetCameraToNormal"
QT_MOC_LITERAL(11, 139, 15), // "useCameraNormal"
QT_MOC_LITERAL(12, 155, 11), // "placeWidget"
QT_MOC_LITERAL(13, 167, 9), // "setOrigin"
QT_MOC_LITERAL(14, 177, 1), // "x"
QT_MOC_LITERAL(15, 179, 1), // "y"
QT_MOC_LITERAL(16, 181, 1) // "z"

    },
    "pqImplicitPlanePropertyWidget\0showPlane\0"
    "\0hidePlane\0setDrawPlane\0val\0useXNormal\0"
    "useYNormal\0useZNormal\0resetToDataBounds\0"
    "resetCameraToNormal\0useCameraNormal\0"
    "placeWidget\0setOrigin\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqImplicitPlanePropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x09 /* Protected */,
      13,    3,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   14,   15,   16,

       0        // eod
};

void pqImplicitPlanePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqImplicitPlanePropertyWidget *_t = static_cast<pqImplicitPlanePropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showPlane(); break;
        case 1: _t->hidePlane(); break;
        case 2: _t->setDrawPlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->useXNormal(); break;
        case 4: _t->useYNormal(); break;
        case 5: _t->useZNormal(); break;
        case 6: _t->resetToDataBounds(); break;
        case 7: _t->resetCameraToNormal(); break;
        case 8: _t->useCameraNormal(); break;
        case 9: _t->placeWidget(); break;
        case 10: _t->setOrigin((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject pqImplicitPlanePropertyWidget::staticMetaObject = {
    { &pqInteractivePropertyWidget::staticMetaObject, qt_meta_stringdata_pqImplicitPlanePropertyWidget.data,
      qt_meta_data_pqImplicitPlanePropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqImplicitPlanePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqImplicitPlanePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqImplicitPlanePropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqInteractivePropertyWidget::qt_metacast(_clname);
}

int pqImplicitPlanePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqInteractivePropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
