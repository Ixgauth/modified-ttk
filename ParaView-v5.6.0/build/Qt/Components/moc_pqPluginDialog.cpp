/****************************************************************************
** Meta object code from reading C++ file 'pqPluginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPluginDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPluginDialog_t {
    QByteArrayData data[15];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPluginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPluginDialog_t qt_meta_stringdata_pqPluginDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "pqPluginDialog"
QT_MOC_LITERAL(1, 15, 15), // "loadLocalPlugin"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "loadRemotePlugin"
QT_MOC_LITERAL(4, 49, 19), // "onPluginItemChanged"
QT_MOC_LITERAL(5, 69, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 86, 9), // "onRefresh"
QT_MOC_LITERAL(7, 96, 7), // "refresh"
QT_MOC_LITERAL(8, 104, 26), // "onLoadSelectedRemotePlugin"
QT_MOC_LITERAL(9, 131, 25), // "onLoadSelectedLocalPlugin"
QT_MOC_LITERAL(10, 157, 28), // "onRemoveSelectedRemotePlugin"
QT_MOC_LITERAL(11, 186, 27), // "onRemoveSelectedLocalPlugin"
QT_MOC_LITERAL(12, 214, 24), // "onRemoteSelectionChanged"
QT_MOC_LITERAL(13, 239, 23), // "onLocalSelectionChanged"
QT_MOC_LITERAL(14, 263, 12) // "resizeColumn"

    },
    "pqPluginDialog\0loadLocalPlugin\0\0"
    "loadRemotePlugin\0onPluginItemChanged\0"
    "QTreeWidgetItem*\0onRefresh\0refresh\0"
    "onLoadSelectedRemotePlugin\0"
    "onLoadSelectedLocalPlugin\0"
    "onRemoveSelectedRemotePlugin\0"
    "onRemoveSelectedLocalPlugin\0"
    "onRemoteSelectionChanged\0"
    "onLocalSelectionChanged\0resizeColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPluginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    2,   76,    2, 0x09 /* Protected */,
       6,    0,   81,    2, 0x09 /* Protected */,
       7,    0,   82,    2, 0x09 /* Protected */,
       8,    0,   83,    2, 0x09 /* Protected */,
       9,    0,   84,    2, 0x09 /* Protected */,
      10,    0,   85,    2, 0x09 /* Protected */,
      11,    0,   86,    2, 0x09 /* Protected */,
      12,    0,   87,    2, 0x09 /* Protected */,
      13,    0,   88,    2, 0x09 /* Protected */,
      14,    1,   89,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void pqPluginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPluginDialog *_t = static_cast<pqPluginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadLocalPlugin(); break;
        case 1: _t->loadRemotePlugin(); break;
        case 2: _t->onPluginItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->onRefresh(); break;
        case 4: _t->refresh(); break;
        case 5: _t->onLoadSelectedRemotePlugin(); break;
        case 6: _t->onLoadSelectedLocalPlugin(); break;
        case 7: _t->onRemoveSelectedRemotePlugin(); break;
        case 8: _t->onRemoveSelectedLocalPlugin(); break;
        case 9: _t->onRemoteSelectionChanged(); break;
        case 10: _t->onLocalSelectionChanged(); break;
        case 11: _t->resizeColumn((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqPluginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPluginDialog.data,
      qt_meta_data_pqPluginDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqPluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
