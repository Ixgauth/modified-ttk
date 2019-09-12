/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqPipelineFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineFilter_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineFilter_t qt_meta_stringdata_pqPipelineFilter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqPipelineFilter"
QT_MOC_LITERAL(1, 17, 15), // "producerChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "inputportname"
QT_MOC_LITERAL(4, 48, 12), // "inputChanged"
QT_MOC_LITERAL(5, 61, 10), // "vtkObject*"
QT_MOC_LITERAL(6, 72, 11) // "client_data"

    },
    "pqPipelineFilter\0producerChanged\0\0"
    "inputportname\0inputChanged\0vtkObject*\0"
    "client_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::ULong, QMetaType::VoidStar,    2,    2,    6,

       0        // eod
};

void pqPipelineFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineFilter *_t = static_cast<pqPipelineFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->producerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->inputChanged((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPipelineFilter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineFilter::producerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqPipelineFilter::staticMetaObject = {
    { &pqPipelineSource::staticMetaObject, qt_meta_stringdata_pqPipelineFilter.data,
      qt_meta_data_pqPipelineFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineFilter.stringdata0))
        return static_cast<void*>(this);
    return pqPipelineSource::qt_metacast(_clname);
}

int pqPipelineFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPipelineSource::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void pqPipelineFilter::producerChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
