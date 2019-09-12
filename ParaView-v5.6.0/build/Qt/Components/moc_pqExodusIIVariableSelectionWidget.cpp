/****************************************************************************
** Meta object code from reading C++ file 'pqExodusIIVariableSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqExodusIIVariableSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqExodusIIVariableSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqExodusIIVariableSelectionWidget_t {
    QByteArrayData data[6];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqExodusIIVariableSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqExodusIIVariableSelectionWidget_t qt_meta_stringdata_pqExodusIIVariableSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "pqExodusIIVariableSelectionWi..."
QT_MOC_LITERAL(1, 34, 14), // "widgetModified"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 14), // "updateProperty"
QT_MOC_LITERAL(4, 65, 21), // "delayedUpdateProperty"
QT_MOC_LITERAL(5, 87, 11) // "check_state"

    },
    "pqExodusIIVariableSelectionWidget\0"
    "widgetModified\0\0updateProperty\0"
    "delayedUpdateProperty\0check_state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqExodusIIVariableSelectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    1,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void pqExodusIIVariableSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqExodusIIVariableSelectionWidget *_t = static_cast<pqExodusIIVariableSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetModified(); break;
        case 1: _t->updateProperty(); break;
        case 2: _t->delayedUpdateProperty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqExodusIIVariableSelectionWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqExodusIIVariableSelectionWidget::widgetModified)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqExodusIIVariableSelectionWidget::staticMetaObject = {
    { &pqTreeWidget::staticMetaObject, qt_meta_stringdata_pqExodusIIVariableSelectionWidget.data,
      qt_meta_data_pqExodusIIVariableSelectionWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqExodusIIVariableSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqExodusIIVariableSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqExodusIIVariableSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return pqTreeWidget::qt_metacast(_clname);
}

int pqExodusIIVariableSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void pqExodusIIVariableSelectionWidget::widgetModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
