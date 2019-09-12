/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqSpreadSheetViewModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSpreadSheetViewModel_t {
    QByteArrayData data[16];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSpreadSheetViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSpreadSheetViewModel_t qt_meta_stringdata_pqSpreadSheetViewModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqSpreadSheetViewModel"
QT_MOC_LITERAL(1, 23, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 56, 9), // "selection"
QT_MOC_LITERAL(5, 66, 11), // "forceUpdate"
QT_MOC_LITERAL(6, 78, 23), // "setActiveRepresentation"
QT_MOC_LITERAL(7, 102, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(8, 124, 28), // "setActiveRepresentationProxy"
QT_MOC_LITERAL(9, 153, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(10, 165, 13), // "delayedUpdate"
QT_MOC_LITERAL(11, 179, 23), // "triggerSelectionChanged"
QT_MOC_LITERAL(12, 203, 13), // "onDataFetched"
QT_MOC_LITERAL(13, 217, 10), // "vtkObject*"
QT_MOC_LITERAL(14, 228, 9), // "call_data"
QT_MOC_LITERAL(15, 238, 20) // "hiddenColumnsChanged"

    },
    "pqSpreadSheetViewModel\0selectionChanged\0"
    "\0QItemSelection\0selection\0forceUpdate\0"
    "setActiveRepresentation\0pqDataRepresentation*\0"
    "setActiveRepresentationProxy\0vtkSMProxy*\0"
    "delayedUpdate\0triggerSelectionChanged\0"
    "onDataFetched\0vtkObject*\0call_data\0"
    "hiddenColumnsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSpreadSheetViewModel[] = {

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
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    4,   66,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,   14,
    QMetaType::Void,

       0        // eod
};

void pqSpreadSheetViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSpreadSheetViewModel *_t = static_cast<pqSpreadSheetViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 1: _t->forceUpdate(); break;
        case 2: _t->setActiveRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 3: _t->setActiveRepresentationProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 4: _t->delayedUpdate(); break;
        case 5: _t->triggerSelectionChanged(); break;
        case 6: _t->onDataFetched((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 7: _t->hiddenColumnsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSpreadSheetViewModel::*_t)(const QItemSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSpreadSheetViewModel::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqSpreadSheetViewModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewModel.data,
      qt_meta_data_pqSpreadSheetViewModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSpreadSheetViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSpreadSheetViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int pqSpreadSheetViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void pqSpreadSheetViewModel::selectionChanged(const QItemSelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
