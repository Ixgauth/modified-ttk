/****************************************************************************
** Meta object code from reading C++ file 'pqDataRepresentation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqDataRepresentation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDataRepresentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDataRepresentation_t {
    QByteArrayData data[9];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDataRepresentation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDataRepresentation_t qt_meta_stringdata_pqDataRepresentation = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqDataRepresentation"
QT_MOC_LITERAL(1, 21, 11), // "dataUpdated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 29), // "colorTransferFunctionModified"
QT_MOC_LITERAL(4, 64, 22), // "colorArrayNameModified"
QT_MOC_LITERAL(5, 87, 17), // "updateLookupTable"
QT_MOC_LITERAL(6, 105, 46), // "resetAllTransferFunctionRange..."
QT_MOC_LITERAL(7, 152, 19), // "onVisibilityChanged"
QT_MOC_LITERAL(8, 172, 14) // "onInputChanged"

    },
    "pqDataRepresentation\0dataUpdated\0\0"
    "colorTransferFunctionModified\0"
    "colorArrayNameModified\0updateLookupTable\0"
    "resetAllTransferFunctionRangesUsingCurrentData\0"
    "onVisibilityChanged\0onInputChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDataRepresentation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqDataRepresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDataRepresentation *_t = static_cast<pqDataRepresentation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->colorTransferFunctionModified(); break;
        case 2: _t->colorArrayNameModified(); break;
        case 3: _t->updateLookupTable(); break;
        case 4: _t->resetAllTransferFunctionRangesUsingCurrentData(); break;
        case 5: _t->onVisibilityChanged(); break;
        case 6: _t->onInputChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqDataRepresentation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDataRepresentation::dataUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqDataRepresentation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDataRepresentation::colorTransferFunctionModified)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqDataRepresentation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDataRepresentation::colorArrayNameModified)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pqDataRepresentation::staticMetaObject = {
    { &pqRepresentation::staticMetaObject, qt_meta_stringdata_pqDataRepresentation.data,
      qt_meta_data_pqDataRepresentation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDataRepresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDataRepresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDataRepresentation.stringdata0))
        return static_cast<void*>(this);
    return pqRepresentation::qt_metacast(_clname);
}

int pqDataRepresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqRepresentation::qt_metacall(_c, _id, _a);
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
void pqDataRepresentation::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqDataRepresentation::colorTransferFunctionModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqDataRepresentation::colorArrayNameModified()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
