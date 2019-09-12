/****************************************************************************
** Meta object code from reading C++ file 'pqRecentFilesMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqRecentFilesMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRecentFilesMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqRecentFilesMenu_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqRecentFilesMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqRecentFilesMenu_t qt_meta_stringdata_pqRecentFilesMenu = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqRecentFilesMenu"
QT_MOC_LITERAL(1, 18, 9), // "buildMenu"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "onOpenResource"
QT_MOC_LITERAL(4, 44, 8), // "QAction*"
QT_MOC_LITERAL(5, 53, 16), // "pqServerResource"
QT_MOC_LITERAL(6, 70, 8) // "resource"

    },
    "pqRecentFilesMenu\0buildMenu\0\0"
    "onOpenResource\0QAction*\0pqServerResource\0"
    "resource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqRecentFilesMenu[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       3,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void pqRecentFilesMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqRecentFilesMenu *_t = static_cast<pqRecentFilesMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buildMenu(); break;
        case 1: _t->onOpenResource((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->onOpenResource((*reinterpret_cast< const pqServerResource(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqRecentFilesMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqRecentFilesMenu.data,
      qt_meta_data_pqRecentFilesMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqRecentFilesMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqRecentFilesMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqRecentFilesMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqRecentFilesMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
