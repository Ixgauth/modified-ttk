/****************************************************************************
** Meta object code from reading C++ file 'pqOutputPortComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqOutputPortComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqOutputPortComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqOutputPortComboBox_t {
    QByteArrayData data[16];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqOutputPortComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqOutputPortComboBox_t qt_meta_stringdata_pqOutputPortComboBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqOutputPortComboBox"
QT_MOC_LITERAL(1, 21, 19), // "currentIndexChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "pqOutputPort*"
QT_MOC_LITERAL(4, 56, 14), // "setCurrentPort"
QT_MOC_LITERAL(5, 71, 4), // "port"
QT_MOC_LITERAL(6, 76, 11), // "nameChanged"
QT_MOC_LITERAL(7, 88, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(8, 114, 4), // "item"
QT_MOC_LITERAL(9, 119, 11), // "portChanged"
QT_MOC_LITERAL(10, 131, 21), // "onCurrentIndexChanged"
QT_MOC_LITERAL(11, 153, 5), // "index"
QT_MOC_LITERAL(12, 159, 9), // "addSource"
QT_MOC_LITERAL(13, 169, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(14, 187, 6), // "source"
QT_MOC_LITERAL(15, 194, 12) // "removeSource"

    },
    "pqOutputPortComboBox\0currentIndexChanged\0"
    "\0pqOutputPort*\0setCurrentPort\0port\0"
    "nameChanged\0pqServerManagerModelItem*\0"
    "item\0portChanged\0onCurrentIndexChanged\0"
    "index\0addSource\0pqPipelineSource*\0"
    "source\0removeSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqOutputPortComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,
      12,    1,   64,    2, 0x08 /* Private */,
      15,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void pqOutputPortComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqOutputPortComboBox *_t = static_cast<pqOutputPortComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->setCurrentPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 3: _t->portChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 4: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 6: _t->removeSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqOutputPortComboBox::*_t)(pqOutputPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqOutputPortComboBox::currentIndexChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqOutputPortComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqOutputPortComboBox.data,
      qt_meta_data_pqOutputPortComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqOutputPortComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqOutputPortComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqOutputPortComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int pqOutputPortComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqOutputPortComboBox::currentIndexChanged(pqOutputPort * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
