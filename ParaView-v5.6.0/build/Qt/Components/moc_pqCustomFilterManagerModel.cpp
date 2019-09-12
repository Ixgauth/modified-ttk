/****************************************************************************
** Meta object code from reading C++ file 'pqCustomFilterManagerModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCustomFilterManagerModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomFilterManagerModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCustomFilterManagerModel_t {
    QByteArrayData data[8];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCustomFilterManagerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCustomFilterManagerModel_t qt_meta_stringdata_pqCustomFilterManagerModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "pqCustomFilterManagerModel"
QT_MOC_LITERAL(1, 27, 17), // "customFilterAdded"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "name"
QT_MOC_LITERAL(4, 51, 15), // "addCustomFilter"
QT_MOC_LITERAL(5, 67, 18), // "removeCustomFilter"
QT_MOC_LITERAL(6, 86, 31), // "importCustomFiltersFromSettings"
QT_MOC_LITERAL(7, 118, 29) // "exportCustomFiltersToSettings"

    },
    "pqCustomFilterManagerModel\0customFilterAdded\0"
    "\0name\0addCustomFilter\0removeCustomFilter\0"
    "importCustomFiltersFromSettings\0"
    "exportCustomFiltersToSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCustomFilterManagerModel[] = {

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
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqCustomFilterManagerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCustomFilterManagerModel *_t = static_cast<pqCustomFilterManagerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->customFilterAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addCustomFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->removeCustomFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->importCustomFiltersFromSettings(); break;
        case 4: _t->exportCustomFiltersToSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqCustomFilterManagerModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCustomFilterManagerModel::customFilterAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqCustomFilterManagerModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_pqCustomFilterManagerModel.data,
      qt_meta_data_pqCustomFilterManagerModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCustomFilterManagerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCustomFilterManagerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomFilterManagerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int pqCustomFilterManagerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void pqCustomFilterManagerModel::customFilterAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
