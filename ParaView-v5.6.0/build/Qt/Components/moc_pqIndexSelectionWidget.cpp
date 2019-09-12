/****************************************************************************
** Meta object code from reading C++ file 'pqIndexSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqIndexSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqIndexSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqIndexSelectionWidget_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqIndexSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqIndexSelectionWidget_t qt_meta_stringdata_pqIndexSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqIndexSelectionWidget"
QT_MOC_LITERAL(1, 23, 14), // "widgetModified"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "setHeaderLabel"
QT_MOC_LITERAL(4, 54, 3), // "str"
QT_MOC_LITERAL(5, 58, 19), // "setPushPropertyName"
QT_MOC_LITERAL(6, 78, 5), // "pName"
QT_MOC_LITERAL(7, 84, 14), // "currentChanged"
QT_MOC_LITERAL(8, 99, 7), // "current"
QT_MOC_LITERAL(9, 107, 14), // "updateProperty"
QT_MOC_LITERAL(10, 122, 18) // "updatePropertyImpl"

    },
    "pqIndexSelectionWidget\0widgetModified\0"
    "\0setHeaderLabel\0str\0setPushPropertyName\0"
    "pName\0currentChanged\0current\0"
    "updateProperty\0updatePropertyImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqIndexSelectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x09 /* Protected */,
       7,    1,   64,    2, 0x09 /* Protected */,
       7,    0,   67,    2, 0x09 /* Protected */,
       9,    0,   68,    2, 0x09 /* Protected */,
      10,    0,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqIndexSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqIndexSelectionWidget *_t = static_cast<pqIndexSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetModified(); break;
        case 1: _t->setHeaderLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setPushPropertyName((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->currentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->currentChanged(); break;
        case 6: _t->updateProperty(); break;
        case 7: _t->updatePropertyImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqIndexSelectionWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqIndexSelectionWidget::widgetModified)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqIndexSelectionWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqIndexSelectionWidget.data,
      qt_meta_data_pqIndexSelectionWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqIndexSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqIndexSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqIndexSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqIndexSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqIndexSelectionWidget::widgetModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
