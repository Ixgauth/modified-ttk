/****************************************************************************
** Meta object code from reading C++ file 'pqSelectionAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSelectionAdaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSelectionAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSelectionAdaptor_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSelectionAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSelectionAdaptor_t qt_meta_stringdata_pqSelectionAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "pqSelectionAdaptor"
QT_MOC_LITERAL(1, 19, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "currentProxyChanged"
QT_MOC_LITERAL(4, 57, 21), // "proxySelectionChanged"
QT_MOC_LITERAL(5, 79, 16), // "qtSelectionFlags"
QT_MOC_LITERAL(6, 96, 34) // "QItemSelectionModel::Selectio..."

    },
    "pqSelectionAdaptor\0selectionChanged\0"
    "\0currentProxyChanged\0proxySelectionChanged\0"
    "qtSelectionFlags\0QItemSelectionModel::SelectionFlag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSelectionAdaptor[] = {

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
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6,

       0        // eod
};

void pqSelectionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSelectionAdaptor *_t = static_cast<pqSelectionAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->currentProxyChanged(); break;
        case 2: _t->proxySelectionChanged(); break;
        case 3: { QItemSelectionModel::SelectionFlag _r = _t->qtSelectionFlags();
            if (_a[0]) *reinterpret_cast< QItemSelectionModel::SelectionFlag*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject pqSelectionAdaptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSelectionAdaptor.data,
      qt_meta_data_pqSelectionAdaptor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSelectionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSelectionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSelectionAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqSelectionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
