/****************************************************************************
** Meta object code from reading C++ file 'pqLinksEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqLinksEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLinksEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqLinksEditor_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqLinksEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqLinksEditor_t qt_meta_stringdata_pqLinksEditor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "pqLinksEditor"
QT_MOC_LITERAL(1, 14, 20), // "currentProxy1Changed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "cur"
QT_MOC_LITERAL(4, 40, 20), // "currentProxy2Changed"
QT_MOC_LITERAL(5, 61, 23), // "currentProperty1Changed"
QT_MOC_LITERAL(6, 85, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 102, 4), // "item"
QT_MOC_LITERAL(8, 107, 23), // "currentProperty2Changed"
QT_MOC_LITERAL(9, 131, 21), // "updateSelectedProxies"
QT_MOC_LITERAL(10, 153, 18) // "updateEnabledState"

    },
    "pqLinksEditor\0currentProxy1Changed\0\0"
    "cur\0currentProxy2Changed\0"
    "currentProperty1Changed\0QListWidgetItem*\0"
    "item\0currentProperty2Changed\0"
    "updateSelectedProxies\0updateEnabledState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqLinksEditor[] = {

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
       1,    2,   44,    2, 0x08 /* Private */,
       4,    2,   49,    2, 0x08 /* Private */,
       5,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqLinksEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqLinksEditor *_t = static_cast<pqLinksEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentProxy1Changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->currentProxy2Changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->currentProperty1Changed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->currentProperty2Changed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->updateSelectedProxies(); break;
        case 5: _t->updateEnabledState(); break;
        default: ;
        }
    }
}

const QMetaObject pqLinksEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqLinksEditor.data,
      qt_meta_data_pqLinksEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqLinksEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqLinksEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqLinksEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqLinksEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
