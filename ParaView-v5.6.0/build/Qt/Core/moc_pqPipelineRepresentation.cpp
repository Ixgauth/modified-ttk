/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineRepresentation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqPipelineRepresentation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineRepresentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineRepresentation_t {
    QByteArrayData data[4];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineRepresentation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineRepresentation_t qt_meta_stringdata_pqPipelineRepresentation = {
    {
QT_MOC_LITERAL(0, 0, 24), // "pqPipelineRepresentation"
QT_MOC_LITERAL(1, 25, 27), // "resetLookupTableScalarRange"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 35) // "resetLookupTableScalarRangeOv..."

    },
    "pqPipelineRepresentation\0"
    "resetLookupTableScalarRange\0\0"
    "resetLookupTableScalarRangeOverTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineRepresentation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqPipelineRepresentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineRepresentation *_t = static_cast<pqPipelineRepresentation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetLookupTableScalarRange(); break;
        case 1: _t->resetLookupTableScalarRangeOverTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pqPipelineRepresentation::staticMetaObject = {
    { &pqDataRepresentation::staticMetaObject, qt_meta_stringdata_pqPipelineRepresentation.data,
      qt_meta_data_pqPipelineRepresentation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineRepresentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineRepresentation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineRepresentation.stringdata0))
        return static_cast<void*>(this);
    return pqDataRepresentation::qt_metacast(_clname);
}

int pqPipelineRepresentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqDataRepresentation::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
