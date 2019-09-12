/****************************************************************************
** Meta object code from reading C++ file 'pqFindDataCreateSelectionFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqFindDataCreateSelectionFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFindDataCreateSelectionFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFindDataCreateSelectionFrame_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFindDataCreateSelectionFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFindDataCreateSelectionFrame_t qt_meta_stringdata_pqFindDataCreateSelectionFrame = {
    {
QT_MOC_LITERAL(0, 0, 30), // "pqFindDataCreateSelectionFrame"
QT_MOC_LITERAL(1, 31, 7), // "setPort"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "pqOutputPort*"
QT_MOC_LITERAL(4, 54, 11), // "dataChanged"
QT_MOC_LITERAL(5, 66, 12), // "refreshQuery"
QT_MOC_LITERAL(6, 79, 8), // "runQuery"
QT_MOC_LITERAL(7, 88, 18) // "onSelectionChanged"

    },
    "pqFindDataCreateSelectionFrame\0setPort\0"
    "\0pqOutputPort*\0dataChanged\0refreshQuery\0"
    "runQuery\0onSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFindDataCreateSelectionFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void pqFindDataCreateSelectionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFindDataCreateSelectionFrame *_t = static_cast<pqFindDataCreateSelectionFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->refreshQuery(); break;
        case 3: _t->runQuery(); break;
        case 4: _t->onSelectionChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqFindDataCreateSelectionFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFindDataCreateSelectionFrame.data,
      qt_meta_data_pqFindDataCreateSelectionFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFindDataCreateSelectionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFindDataCreateSelectionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFindDataCreateSelectionFrame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqFindDataCreateSelectionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
