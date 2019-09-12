/****************************************************************************
** Meta object code from reading C++ file 'pqAnimatableProxyComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqAnimatableProxyComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimatableProxyComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimatableProxyComboBox_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimatableProxyComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimatableProxyComboBox_t qt_meta_stringdata_pqAnimatableProxyComboBox = {
    {
QT_MOC_LITERAL(0, 0, 25), // "pqAnimatableProxyComboBox"
QT_MOC_LITERAL(1, 26, 19), // "currentProxyChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(4, 59, 13), // "onSourceAdded"
QT_MOC_LITERAL(5, 73, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(6, 91, 3), // "src"
QT_MOC_LITERAL(7, 95, 15), // "onSourceRemoved"
QT_MOC_LITERAL(8, 111, 13), // "onNameChanged"
QT_MOC_LITERAL(9, 125, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(10, 151, 22), // "onCurrentSourceChanged"
QT_MOC_LITERAL(11, 174, 3) // "idx"

    },
    "pqAnimatableProxyComboBox\0currentProxyChanged\0"
    "\0vtkSMProxy*\0onSourceAdded\0pqPipelineSource*\0"
    "src\0onSourceRemoved\0onNameChanged\0"
    "pqServerManagerModelItem*\0"
    "onCurrentSourceChanged\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimatableProxyComboBox[] = {

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
       4,    1,   42,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,
       8,    1,   48,    2, 0x09 /* Protected */,
      10,    1,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void pqAnimatableProxyComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimatableProxyComboBox *_t = static_cast<pqAnimatableProxyComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentProxyChanged((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 1: _t->onSourceAdded((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 2: _t->onSourceRemoved((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 3: _t->onNameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 4: _t->onCurrentSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqAnimatableProxyComboBox::*_t)(vtkSMProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimatableProxyComboBox::currentProxyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqAnimatableProxyComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqAnimatableProxyComboBox.data,
      qt_meta_data_pqAnimatableProxyComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimatableProxyComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimatableProxyComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimatableProxyComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int pqAnimatableProxyComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void pqAnimatableProxyComboBox::currentProxyChanged(vtkSMProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
