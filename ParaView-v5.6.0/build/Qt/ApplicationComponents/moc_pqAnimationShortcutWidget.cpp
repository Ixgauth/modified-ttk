/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationShortcutWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqAnimationShortcutWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationShortcutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimationShortcutWidget_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimationShortcutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimationShortcutWidget_t qt_meta_stringdata_pqAnimationShortcutWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "pqAnimationShortcutWidget"
QT_MOC_LITERAL(1, 26, 10), // "updateMenu"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "onTriggered"
QT_MOC_LITERAL(4, 50, 8), // "QAction*"
QT_MOC_LITERAL(5, 59, 8), // "setScene"
QT_MOC_LITERAL(6, 68, 17), // "pqAnimationScene*"
QT_MOC_LITERAL(7, 86, 5) // "scene"

    },
    "pqAnimationShortcutWidget\0updateMenu\0"
    "\0onTriggered\0QAction*\0setScene\0"
    "pqAnimationScene*\0scene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimationShortcutWidget[] = {

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
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    1,   30,    2, 0x09 /* Protected */,
       5,    1,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void pqAnimationShortcutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimationShortcutWidget *_t = static_cast<pqAnimationShortcutWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMenu(); break;
        case 1: _t->onTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->setScene((*reinterpret_cast< pqAnimationScene*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqAnimationShortcutWidget::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_pqAnimationShortcutWidget.data,
      qt_meta_data_pqAnimationShortcutWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimationShortcutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimationShortcutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationShortcutWidget.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int pqAnimationShortcutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
