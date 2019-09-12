/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetViewDecorator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqSpreadSheetViewDecorator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetViewDecorator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSpreadSheetViewDecorator_t {
    QByteArrayData data[13];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSpreadSheetViewDecorator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSpreadSheetViewDecorator_t qt_meta_stringdata_pqSpreadSheetViewDecorator = {
    {
QT_MOC_LITERAL(0, 0, 26), // "pqSpreadSheetViewDecorator"
QT_MOC_LITERAL(1, 27, 10), // "uiModified"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "currentIndexChanged"
QT_MOC_LITERAL(4, 59, 13), // "pqOutputPort*"
QT_MOC_LITERAL(5, 73, 7), // "showing"
QT_MOC_LITERAL(6, 81, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(7, 103, 23), // "displayPrecisionChanged"
QT_MOC_LITERAL(8, 127, 25), // "toggleFixedRepresentation"
QT_MOC_LITERAL(9, 153, 19), // "allowChangeOfSource"
QT_MOC_LITERAL(10, 173, 24), // "generateCellConnectivity"
QT_MOC_LITERAL(11, 198, 24), // "showSelectedElementsOnly"
QT_MOC_LITERAL(12, 223, 16) // "fieldAssociation"

    },
    "pqSpreadSheetViewDecorator\0uiModified\0"
    "\0currentIndexChanged\0pqOutputPort*\0"
    "showing\0pqDataRepresentation*\0"
    "displayPrecisionChanged\0"
    "toggleFixedRepresentation\0allowChangeOfSource\0"
    "generateCellConnectivity\0"
    "showSelectedElementsOnly\0fieldAssociation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSpreadSheetViewDecorator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,
       7,    1,   46,    2, 0x09 /* Protected */,
       8,    1,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Int, 0x00095103,

       0        // eod
};

void pqSpreadSheetViewDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSpreadSheetViewDecorator *_t = static_cast<pqSpreadSheetViewDecorator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uiModified(); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->showing((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 3: _t->displayPrecisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->toggleFixedRepresentation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSpreadSheetViewDecorator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSpreadSheetViewDecorator::uiModified)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqSpreadSheetViewDecorator *_t = static_cast<pqSpreadSheetViewDecorator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->allowChangeOfSource(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->generateCellConnectivity(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showSelectedElementsOnly(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->fieldAssociation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqSpreadSheetViewDecorator *_t = static_cast<pqSpreadSheetViewDecorator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAllowChangeOfSource(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGenerateCellConnectivity(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowSelectedElementsOnly(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFieldAssociation(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqSpreadSheetViewDecorator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSpreadSheetViewDecorator.data,
      qt_meta_data_pqSpreadSheetViewDecorator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSpreadSheetViewDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSpreadSheetViewDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetViewDecorator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqSpreadSheetViewDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void pqSpreadSheetViewDecorator::uiModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
