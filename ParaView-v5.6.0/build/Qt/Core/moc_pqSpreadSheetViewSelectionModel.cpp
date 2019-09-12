/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewSelectionModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqSpreadSheetViewSelectionModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewSelectionModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSpreadSheetViewSelectionModel_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSpreadSheetViewSelectionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSpreadSheetViewSelectionModel_t qt_meta_stringdata_pqSpreadSheetViewSelectionModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "pqSpreadSheetViewSelectionModel"
QT_MOC_LITERAL(1, 32, 9), // "selection"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 17), // "vtkSMSourceProxy*"
QT_MOC_LITERAL(4, 61, 6), // "select"
QT_MOC_LITERAL(5, 68, 5), // "index"
QT_MOC_LITERAL(6, 74, 35), // "QItemSelectionModel::Selectio..."
QT_MOC_LITERAL(7, 110, 7), // "command"
QT_MOC_LITERAL(8, 118, 14), // "QItemSelection"
QT_MOC_LITERAL(9, 133, 22) // "serverSelectionChanged"

    },
    "pqSpreadSheetViewSelectionModel\0"
    "selection\0\0vtkSMSourceProxy*\0select\0"
    "index\0QItemSelectionModel::SelectionFlags\0"
    "command\0QItemSelection\0serverSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSpreadSheetViewSelectionModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 6,    1,    7,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void pqSpreadSheetViewSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSpreadSheetViewSelectionModel *_t = static_cast<pqSpreadSheetViewSelectionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selection((*reinterpret_cast< vtkSMSourceProxy*(*)>(_a[1]))); break;
        case 1: _t->select((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 2: _t->select((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 3: _t->serverSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSpreadSheetViewSelectionModel::*_t)(vtkSMSourceProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSpreadSheetViewSelectionModel::selection)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqSpreadSheetViewSelectionModel::staticMetaObject = {
    { &QItemSelectionModel::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewSelectionModel.data,
      qt_meta_data_pqSpreadSheetViewSelectionModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSpreadSheetViewSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSpreadSheetViewSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewSelectionModel.stringdata0))
        return static_cast<void*>(this);
    return QItemSelectionModel::qt_metacast(_clname);
}

int pqSpreadSheetViewSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void pqSpreadSheetViewSelectionModel::selection(vtkSMSourceProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
