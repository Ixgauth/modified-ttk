/****************************************************************************
** Meta object code from reading C++ file 'pqSelectionInputWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSelectionInputWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSelectionInputWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSelectionInputWidget_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSelectionInputWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSelectionInputWidget_t qt_meta_stringdata_pqSelectionInputWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqSelectionInputWidget"
QT_MOC_LITERAL(1, 23, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "pqSMProxy"
QT_MOC_LITERAL(4, 51, 12), // "setSelection"
QT_MOC_LITERAL(5, 64, 9), // "selection"
QT_MOC_LITERAL(6, 74, 30), // "initializeDefaultValueIfNeeded"
QT_MOC_LITERAL(7, 105, 9), // "preAccept"
QT_MOC_LITERAL(8, 115, 10), // "postAccept"
QT_MOC_LITERAL(9, 126, 19), // "copyActiveSelection"
QT_MOC_LITERAL(10, 146, 24), // "onActiveSelectionChanged"
QT_MOC_LITERAL(11, 171, 12) // "updateLabels"

    },
    "pqSelectionInputWidget\0selectionChanged\0"
    "\0pqSMProxy\0setSelection\0selection\0"
    "initializeDefaultValueIfNeeded\0preAccept\0"
    "postAccept\0copyActiveSelection\0"
    "onActiveSelectionChanged\0updateLabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSelectionInputWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x09 /* Protected */,
      10,    0,   64,    2, 0x09 /* Protected */,
      11,    0,   65,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 3, 0x0019510b,

       0        // eod
};

void pqSelectionInputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSelectionInputWidget *_t = static_cast<pqSelectionInputWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 1: _t->setSelection((*reinterpret_cast< pqSMProxy(*)>(_a[1]))); break;
        case 2: _t->initializeDefaultValueIfNeeded(); break;
        case 3: _t->preAccept(); break;
        case 4: _t->postAccept(); break;
        case 5: _t->copyActiveSelection(); break;
        case 6: _t->onActiveSelectionChanged(); break;
        case 7: _t->updateLabels(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSelectionInputWidget::*_t)(pqSMProxy );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSelectionInputWidget::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqSelectionInputWidget *_t = static_cast<pqSelectionInputWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pqSMProxy*>(_v) = _t->selection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqSelectionInputWidget *_t = static_cast<pqSelectionInputWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelection(*reinterpret_cast< pqSMProxy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqSelectionInputWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSelectionInputWidget.data,
      qt_meta_data_pqSelectionInputWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSelectionInputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSelectionInputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSelectionInputWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqSelectionInputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSelectionInputWidget::selectionChanged(pqSMProxy _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
