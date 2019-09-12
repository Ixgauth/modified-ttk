/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPipelineModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineModel_t {
    QByteArrayData data[28];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineModel_t qt_meta_stringdata_pqPipelineModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqPipelineModel"
QT_MOC_LITERAL(1, 16, 15), // "firstChildAdded"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 9), // "addServer"
QT_MOC_LITERAL(5, 49, 9), // "pqServer*"
QT_MOC_LITERAL(6, 59, 6), // "server"
QT_MOC_LITERAL(7, 66, 12), // "removeServer"
QT_MOC_LITERAL(8, 79, 9), // "addSource"
QT_MOC_LITERAL(9, 89, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(10, 107, 6), // "source"
QT_MOC_LITERAL(11, 114, 12), // "removeSource"
QT_MOC_LITERAL(12, 127, 13), // "addConnection"
QT_MOC_LITERAL(13, 141, 4), // "sink"
QT_MOC_LITERAL(14, 146, 16), // "removeConnection"
QT_MOC_LITERAL(15, 163, 7), // "setView"
QT_MOC_LITERAL(16, 171, 7), // "pqView*"
QT_MOC_LITERAL(17, 179, 6), // "module"
QT_MOC_LITERAL(18, 186, 27), // "onInsituConnectionInitiated"
QT_MOC_LITERAL(19, 214, 17), // "serverDataChanged"
QT_MOC_LITERAL(20, 232, 16), // "updateVisibility"
QT_MOC_LITERAL(21, 249, 8), // "ItemType"
QT_MOC_LITERAL(22, 258, 4), // "type"
QT_MOC_LITERAL(23, 263, 23), // "delayedUpdateVisibility"
QT_MOC_LITERAL(24, 287, 30), // "delayedUpdateVisibilityTimeout"
QT_MOC_LITERAL(25, 318, 10), // "updateData"
QT_MOC_LITERAL(26, 329, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(27, 355, 16) // "updateDataServer"

    },
    "pqPipelineModel\0firstChildAdded\0\0index\0"
    "addServer\0pqServer*\0server\0removeServer\0"
    "addSource\0pqPipelineSource*\0source\0"
    "removeSource\0addConnection\0sink\0"
    "removeConnection\0setView\0pqView*\0"
    "module\0onInsituConnectionInitiated\0"
    "serverDataChanged\0updateVisibility\0"
    "ItemType\0type\0delayedUpdateVisibility\0"
    "delayedUpdateVisibilityTimeout\0"
    "updateData\0pqServerManagerModelItem*\0"
    "updateDataServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  102,    2, 0x0a /* Public */,
       7,    1,  105,    2, 0x0a /* Public */,
       8,    1,  108,    2, 0x0a /* Public */,
      11,    1,  111,    2, 0x0a /* Public */,
      12,    3,  114,    2, 0x0a /* Public */,
      14,    3,  121,    2, 0x0a /* Public */,
      15,    1,  128,    2, 0x0a /* Public */,
      18,    1,  131,    2, 0x08 /* Private */,
      19,    0,  134,    2, 0x08 /* Private */,
      20,    2,  135,    2, 0x08 /* Private */,
      20,    1,  140,    2, 0x28 /* Private | MethodCloned */,
      23,    1,  143,    2, 0x08 /* Private */,
      24,    0,  146,    2, 0x08 /* Private */,
      25,    2,  147,    2, 0x08 /* Private */,
      25,    1,  152,    2, 0x28 /* Private | MethodCloned */,
      27,    1,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, QMetaType::Int,   10,   13,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, QMetaType::Int,   10,   13,    2,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 21,    2,   22,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 21,    2,   22,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void pqPipelineModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineModel *_t = static_cast<pqPipelineModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstChildAdded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->addServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->removeServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->addSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 4: _t->removeSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 5: _t->addConnection((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->removeConnection((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< pqPipelineSource*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 8: _t->onInsituConnectionInitiated((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 9: _t->serverDataChanged(); break;
        case 10: _t->updateVisibility((*reinterpret_cast< pqPipelineSource*(*)>(_a[1])),(*reinterpret_cast< ItemType(*)>(_a[2]))); break;
        case 11: _t->updateVisibility((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 12: _t->delayedUpdateVisibility((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 13: _t->delayedUpdateVisibilityTimeout(); break;
        case 14: _t->updateData((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1])),(*reinterpret_cast< ItemType(*)>(_a[2]))); break;
        case 15: _t->updateData((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 16: _t->updateDataServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPipelineModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineModel::firstChildAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqPipelineModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_pqPipelineModel.data,
      qt_meta_data_pqPipelineModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int pqPipelineModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void pqPipelineModel::firstChildAdded(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
