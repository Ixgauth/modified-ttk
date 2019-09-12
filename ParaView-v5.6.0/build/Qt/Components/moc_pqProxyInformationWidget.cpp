/****************************************************************************
** Meta object code from reading C++ file 'pqProxyInformationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqProxyInformationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyInformationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqProxyInformationWidget_t {
    QByteArrayData data[9];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqProxyInformationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqProxyInformationWidget_t qt_meta_stringdata_pqProxyInformationWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "pqProxyInformationWidget"
QT_MOC_LITERAL(1, 25, 17), // "updateInformation"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "setOutputPort"
QT_MOC_LITERAL(4, 58, 13), // "pqOutputPort*"
QT_MOC_LITERAL(5, 72, 10), // "outputport"
QT_MOC_LITERAL(6, 83, 16), // "onCurrentChanged"
QT_MOC_LITERAL(7, 100, 4), // "item"
QT_MOC_LITERAL(8, 105, 33) // "onDataTypePropertiesWidgetCha..."

    },
    "pqProxyInformationWidget\0updateInformation\0"
    "\0setOutputPort\0pqOutputPort*\0outputport\0"
    "onCurrentChanged\0item\0"
    "onDataTypePropertiesWidgetChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqProxyInformationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x08 /* Private */,
       8,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void pqProxyInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqProxyInformationWidget *_t = static_cast<pqProxyInformationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateInformation(); break;
        case 1: _t->setOutputPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->onCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onDataTypePropertiesWidgetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqProxyInformationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxyInformationWidget.data,
      qt_meta_data_pqProxyInformationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqProxyInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqProxyInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyInformationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqProxyInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
