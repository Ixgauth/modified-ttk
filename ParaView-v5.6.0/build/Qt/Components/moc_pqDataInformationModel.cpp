/****************************************************************************
** Meta object code from reading C++ file 'pqDataInformationModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqDataInformationModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDataInformationModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDataInformationModel_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDataInformationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDataInformationModel_t qt_meta_stringdata_pqDataInformationModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqDataInformationModel"
QT_MOC_LITERAL(1, 23, 9), // "addSource"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(4, 52, 6), // "source"
QT_MOC_LITERAL(5, 59, 12), // "removeSource"
QT_MOC_LITERAL(6, 72, 13), // "setActiveView"
QT_MOC_LITERAL(7, 86, 7), // "pqView*"
QT_MOC_LITERAL(8, 94, 4), // "view"
QT_MOC_LITERAL(9, 99, 11), // "dataUpdated"
QT_MOC_LITERAL(10, 111, 13), // "changedSource"
QT_MOC_LITERAL(11, 125, 20) // "refreshGeometrySizes"

    },
    "pqDataInformationModel\0addSource\0\0"
    "pqPipelineSource*\0source\0removeSource\0"
    "setActiveView\0pqView*\0view\0dataUpdated\0"
    "changedSource\0refreshGeometrySizes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDataInformationModel[] = {

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
       5,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x08 /* Private */,
      11,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void,

       0        // eod
};

void pqDataInformationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDataInformationModel *_t = static_cast<pqDataInformationModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 1: _t->removeSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 2: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->dataUpdated((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 4: _t->refreshGeometrySizes(); break;
        default: ;
        }
    }
}

const QMetaObject pqDataInformationModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_pqDataInformationModel.data,
      qt_meta_data_pqDataInformationModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDataInformationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDataInformationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDataInformationModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int pqDataInformationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
