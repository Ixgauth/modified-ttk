/****************************************************************************
** Meta object code from reading C++ file 'pqFindDataCurrentSelectionFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqFindDataCurrentSelectionFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFindDataCurrentSelectionFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFindDataCurrentSelectionFrame_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFindDataCurrentSelectionFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFindDataCurrentSelectionFrame_t qt_meta_stringdata_pqFindDataCurrentSelectionFrame = {
    {
QT_MOC_LITERAL(0, 0, 31), // "pqFindDataCurrentSelectionFrame"
QT_MOC_LITERAL(1, 32, 7), // "showing"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "pqOutputPort*"
QT_MOC_LITERAL(4, 55, 16), // "showSelectedData"
QT_MOC_LITERAL(5, 72, 15), // "updateFieldType"
QT_MOC_LITERAL(6, 88, 15), // "invertSelection"
QT_MOC_LITERAL(7, 104, 17) // "updateSpreadSheet"

    },
    "pqFindDataCurrentSelectionFrame\0showing\0"
    "\0pqOutputPort*\0showSelectedData\0"
    "updateFieldType\0invertSelection\0"
    "updateSpreadSheet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFindDataCurrentSelectionFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void pqFindDataCurrentSelectionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFindDataCurrentSelectionFrame *_t = static_cast<pqFindDataCurrentSelectionFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showing((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->showSelectedData((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->updateFieldType(); break;
        case 3: _t->invertSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateSpreadSheet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqFindDataCurrentSelectionFrame::*_t)(pqOutputPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqFindDataCurrentSelectionFrame::showing)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqFindDataCurrentSelectionFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFindDataCurrentSelectionFrame.data,
      qt_meta_data_pqFindDataCurrentSelectionFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFindDataCurrentSelectionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFindDataCurrentSelectionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFindDataCurrentSelectionFrame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqFindDataCurrentSelectionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void pqFindDataCurrentSelectionFrame::showing(pqOutputPort * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
