/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqSpreadSheetViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSpreadSheetViewWidget_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSpreadSheetViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSpreadSheetViewWidget_t qt_meta_stringdata_pqSpreadSheetViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqSpreadSheetViewWidget"
QT_MOC_LITERAL(1, 24, 22), // "onSectionDoubleClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "onSortIndicatorChanged"
QT_MOC_LITERAL(4, 71, 7), // "section"
QT_MOC_LITERAL(5, 79, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(6, 93, 5), // "order"
QT_MOC_LITERAL(7, 99, 19) // "onHeaderDataChanged"

    },
    "pqSpreadSheetViewWidget\0onSectionDoubleClicked\0"
    "\0onSortIndicatorChanged\0section\0"
    "Qt::SortOrder\0order\0onHeaderDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSpreadSheetViewWidget[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       3,    2,   32,    2, 0x09 /* Protected */,
       7,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void pqSpreadSheetViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSpreadSheetViewWidget *_t = static_cast<pqSpreadSheetViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSectionDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onSortIndicatorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 2: _t->onHeaderDataChanged(); break;
        default: ;
        }
    }
}

const QMetaObject pqSpreadSheetViewWidget::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewWidget.data,
      qt_meta_data_pqSpreadSheetViewWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSpreadSheetViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSpreadSheetViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int pqSpreadSheetViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
