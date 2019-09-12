/****************************************************************************
** Meta object code from reading C++ file 'pqFavoritesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqFavoritesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFavoritesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFavoritesDialog_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFavoritesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFavoritesDialog_t qt_meta_stringdata_pqFavoritesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqFavoritesDialog"
QT_MOC_LITERAL(1, 18, 14), // "createCategory"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "onAddFavoritePressed"
QT_MOC_LITERAL(4, 55, 23), // "onRemoveFavoritePressed"
QT_MOC_LITERAL(5, 79, 10), // "onAccepted"
QT_MOC_LITERAL(6, 90, 13), // "onItemChanged"
QT_MOC_LITERAL(7, 104, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 121, 19), // "onSearchTextChanged"
QT_MOC_LITERAL(9, 141, 7) // "pattern"

    },
    "pqFavoritesDialog\0createCategory\0\0"
    "onAddFavoritePressed\0onRemoveFavoritePressed\0"
    "onAccepted\0onItemChanged\0QTreeWidgetItem*\0"
    "onSearchTextChanged\0pattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFavoritesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    2,   48,    2, 0x09 /* Protected */,
       8,    1,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void pqFavoritesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFavoritesDialog *_t = static_cast<pqFavoritesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createCategory(); break;
        case 1: _t->onAddFavoritePressed(); break;
        case 2: _t->onRemoveFavoritePressed(); break;
        case 3: _t->onAccepted(); break;
        case 4: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->onSearchTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqFavoritesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqFavoritesDialog.data,
      qt_meta_data_pqFavoritesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFavoritesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFavoritesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFavoritesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqFavoritesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
