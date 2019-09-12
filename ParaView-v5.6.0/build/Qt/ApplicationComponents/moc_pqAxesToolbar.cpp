/****************************************************************************
** Meta object code from reading C++ file 'pqAxesToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqAxesToolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAxesToolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAxesToolbar_t {
    QByteArrayData data[7];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAxesToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAxesToolbar_t qt_meta_stringdata_pqAxesToolbar = {
    {
QT_MOC_LITERAL(0, 0, 13), // "pqAxesToolbar"
QT_MOC_LITERAL(1, 14, 18), // "updateEnabledState"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "showCenterAxes"
QT_MOC_LITERAL(4, 49, 19), // "showOrientationAxes"
QT_MOC_LITERAL(5, 69, 42), // "resetCenterOfRotationToCenter..."
QT_MOC_LITERAL(6, 112, 20) // "pickCenterOfRotation"

    },
    "pqAxesToolbar\0updateEnabledState\0\0"
    "showCenterAxes\0showOrientationAxes\0"
    "resetCenterOfRotationToCenterOfCurrentData\0"
    "pickCenterOfRotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAxesToolbar[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    1,   40,    2, 0x09 /* Protected */,
       4,    1,   43,    2, 0x09 /* Protected */,
       5,    0,   46,    2, 0x09 /* Protected */,
       6,    2,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void pqAxesToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAxesToolbar *_t = static_cast<pqAxesToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        case 1: _t->showCenterAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showOrientationAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->resetCenterOfRotationToCenterOfCurrentData(); break;
        case 4: _t->pickCenterOfRotation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject pqAxesToolbar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_pqAxesToolbar.data,
      qt_meta_data_pqAxesToolbar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAxesToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAxesToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAxesToolbar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int pqAxesToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
