/****************************************************************************
** Meta object code from reading C++ file 'pqColorChooserButtonWithPalettes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqColorChooserButtonWithPalettes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorChooserButtonWithPalettes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqColorChooserButtonWithPalettes_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqColorChooserButtonWithPalettes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqColorChooserButtonWithPalettes_t qt_meta_stringdata_pqColorChooserButtonWithPalettes = {
    {
QT_MOC_LITERAL(0, 0, 32), // "pqColorChooserButtonWithPalettes"
QT_MOC_LITERAL(1, 33, 10), // "updateMenu"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "actionTriggered"
QT_MOC_LITERAL(4, 61, 8) // "QAction*"

    },
    "pqColorChooserButtonWithPalettes\0"
    "updateMenu\0\0actionTriggered\0QAction*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqColorChooserButtonWithPalettes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void pqColorChooserButtonWithPalettes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqColorChooserButtonWithPalettes *_t = static_cast<pqColorChooserButtonWithPalettes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMenu(); break;
        case 1: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqColorChooserButtonWithPalettes::staticMetaObject = {
    { &pqColorChooserButton::staticMetaObject, qt_meta_stringdata_pqColorChooserButtonWithPalettes.data,
      qt_meta_data_pqColorChooserButtonWithPalettes,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqColorChooserButtonWithPalettes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqColorChooserButtonWithPalettes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorChooserButtonWithPalettes.stringdata0))
        return static_cast<void*>(this);
    return pqColorChooserButton::qt_metacast(_clname);
}

int pqColorChooserButtonWithPalettes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqColorChooserButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_pqColorPaletteLinkHelper_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqColorPaletteLinkHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqColorPaletteLinkHelper_t qt_meta_stringdata_pqColorPaletteLinkHelper = {
    {
QT_MOC_LITERAL(0, 0, 24) // "pqColorPaletteLinkHelper"

    },
    "pqColorPaletteLinkHelper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqColorPaletteLinkHelper[] = {

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

void pqColorPaletteLinkHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject pqColorPaletteLinkHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqColorPaletteLinkHelper.data,
      qt_meta_data_pqColorPaletteLinkHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqColorPaletteLinkHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqColorPaletteLinkHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorPaletteLinkHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqColorPaletteLinkHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
