/****************************************************************************
** Meta object code from reading C++ file 'pqFieldSelectionAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqFieldSelectionAdaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFieldSelectionAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFieldSelectionAdaptor_t {
    QByteArrayData data[19];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFieldSelectionAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFieldSelectionAdaptor_t qt_meta_stringdata_pqFieldSelectionAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqFieldSelectionAdaptor"
QT_MOC_LITERAL(1, 24, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "setAttributeMode"
QT_MOC_LITERAL(4, 59, 9), // "setScalar"
QT_MOC_LITERAL(5, 69, 25), // "setAttributeModeAndScalar"
QT_MOC_LITERAL(6, 95, 4), // "mode"
QT_MOC_LITERAL(7, 100, 6), // "scalar"
QT_MOC_LITERAL(8, 107, 9), // "updateGUI"
QT_MOC_LITERAL(9, 117, 12), // "indexChanged"
QT_MOC_LITERAL(10, 130, 5), // "index"
QT_MOC_LITERAL(11, 136, 13), // "domainChanged"
QT_MOC_LITERAL(12, 150, 21), // "internalDomainChanged"
QT_MOC_LITERAL(13, 172, 19), // "blockDomainModified"
QT_MOC_LITERAL(14, 192, 10), // "vtkObject*"
QT_MOC_LITERAL(15, 203, 6), // "caller"
QT_MOC_LITERAL(16, 210, 11), // "vtkCommand*"
QT_MOC_LITERAL(17, 222, 13), // "attributeMode"
QT_MOC_LITERAL(18, 236, 9) // "selection"

    },
    "pqFieldSelectionAdaptor\0selectionChanged\0"
    "\0setAttributeMode\0setScalar\0"
    "setAttributeModeAndScalar\0mode\0scalar\0"
    "updateGUI\0indexChanged\0index\0domainChanged\0"
    "internalDomainChanged\0blockDomainModified\0"
    "vtkObject*\0caller\0vtkCommand*\0"
    "attributeMode\0selection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFieldSelectionAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       4,    1,   63,    2, 0x0a /* Public */,
       5,    2,   66,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x09 /* Protected */,
       9,    1,   72,    2, 0x09 /* Protected */,
      11,    0,   75,    2, 0x09 /* Protected */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    5,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar, 0x80000000 | 16,   15,    2,    2,    2,    2,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
      18, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void pqFieldSelectionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFieldSelectionAdaptor *_t = static_cast<pqFieldSelectionAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->setAttributeMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setScalar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAttributeModeAndScalar((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->updateGUI(); break;
        case 5: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->domainChanged(); break;
        case 7: _t->internalDomainChanged(); break;
        case 8: _t->blockDomainModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqFieldSelectionAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqFieldSelectionAdaptor::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqFieldSelectionAdaptor *_t = static_cast<pqFieldSelectionAdaptor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->attributeMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->scalar(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->selection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqFieldSelectionAdaptor *_t = static_cast<pqFieldSelectionAdaptor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAttributeMode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setScalar(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSelection(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqFieldSelectionAdaptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqFieldSelectionAdaptor.data,
      qt_meta_data_pqFieldSelectionAdaptor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFieldSelectionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFieldSelectionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFieldSelectionAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqFieldSelectionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqFieldSelectionAdaptor::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
