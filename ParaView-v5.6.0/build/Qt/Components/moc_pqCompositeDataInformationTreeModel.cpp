/****************************************************************************
** Meta object code from reading C++ file 'pqCompositeDataInformationTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCompositeDataInformationTreeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCompositeDataInformationTreeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCompositeDataInformationTreeModel_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCompositeDataInformationTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCompositeDataInformationTreeModel_t qt_meta_stringdata_pqCompositeDataInformationTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "pqCompositeDataInformationTre..."
QT_MOC_LITERAL(1, 36, 5), // "reset"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "vtkPVDataInformation*"
QT_MOC_LITERAL(4, 65, 4), // "info"
QT_MOC_LITERAL(5, 70, 13), // "userCheckable"
QT_MOC_LITERAL(6, 84, 16), // "expandMultiPiece"
QT_MOC_LITERAL(7, 101, 11), // "exclusivity"
QT_MOC_LITERAL(8, 113, 17) // "defaultCheckState"

    },
    "pqCompositeDataInformationTreeModel\0"
    "reset\0\0vtkPVDataInformation*\0info\0"
    "userCheckable\0expandMultiPiece\0"
    "exclusivity\0defaultCheckState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCompositeDataInformationTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqCompositeDataInformationTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCompositeDataInformationTreeModel *_t = static_cast<pqCompositeDataInformationTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->reset((*reinterpret_cast< vtkPVDataInformation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->reset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqCompositeDataInformationTreeModel *_t = static_cast<pqCompositeDataInformationTreeModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->userCheckable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->expandMultiPiece(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->exclusivity(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->defaultCheckState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqCompositeDataInformationTreeModel *_t = static_cast<pqCompositeDataInformationTreeModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setExpandMultiPiece(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setExclusivity(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDefaultCheckState(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqCompositeDataInformationTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_pqCompositeDataInformationTreeModel.data,
      qt_meta_data_pqCompositeDataInformationTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCompositeDataInformationTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCompositeDataInformationTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCompositeDataInformationTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int pqCompositeDataInformationTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
