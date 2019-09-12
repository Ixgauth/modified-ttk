/****************************************************************************
** Meta object code from reading C++ file 'pqCustomViewpointsToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqCustomViewpointsToolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomViewpointsToolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCustomViewpointsToolbar_t {
    QByteArrayData data[9];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCustomViewpointsToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCustomViewpointsToolbar_t qt_meta_stringdata_pqCustomViewpointsToolbar = {
    {
QT_MOC_LITERAL(0, 0, 25), // "pqCustomViewpointsToolbar"
QT_MOC_LITERAL(1, 26, 28), // "updateCustomViewpointActions"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 18), // "updateEnabledState"
QT_MOC_LITERAL(4, 75, 25), // "configureCustomViewpoints"
QT_MOC_LITERAL(5, 101, 20), // "applyCustomViewpoint"
QT_MOC_LITERAL(6, 122, 37), // "addCurrentViewpointToCustomVi..."
QT_MOC_LITERAL(7, 160, 21), // "setToCurrentViewpoint"
QT_MOC_LITERAL(8, 182, 21) // "deleteCustomViewpoint"

    },
    "pqCustomViewpointsToolbar\0"
    "updateCustomViewpointActions\0\0"
    "updateEnabledState\0configureCustomViewpoints\0"
    "applyCustomViewpoint\0"
    "addCurrentViewpointToCustomViewpoints\0"
    "setToCurrentViewpoint\0deleteCustomViewpoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCustomViewpointsToolbar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqCustomViewpointsToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCustomViewpointsToolbar *_t = static_cast<pqCustomViewpointsToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCustomViewpointActions(); break;
        case 1: _t->updateEnabledState(); break;
        case 2: _t->configureCustomViewpoints(); break;
        case 3: _t->applyCustomViewpoint(); break;
        case 4: _t->addCurrentViewpointToCustomViewpoints(); break;
        case 5: _t->setToCurrentViewpoint(); break;
        case 6: _t->deleteCustomViewpoint(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pqCustomViewpointsToolbar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_pqCustomViewpointsToolbar.data,
      qt_meta_data_pqCustomViewpointsToolbar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCustomViewpointsToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCustomViewpointsToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomViewpointsToolbar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int pqCustomViewpointsToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
