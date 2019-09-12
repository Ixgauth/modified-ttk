/****************************************************************************
** Meta object code from reading C++ file 'pqScalarsToColors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqScalarsToColors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqScalarsToColors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqScalarsToColors_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqScalarsToColors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqScalarsToColors_t qt_meta_stringdata_pqScalarsToColors = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqScalarsToColors"
QT_MOC_LITERAL(1, 18, 22), // "componentOrModeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 20), // "hideUnusedScalarBars"
QT_MOC_LITERAL(4, 63, 18), // "setScalarRangeLock"
QT_MOC_LITERAL(5, 82, 4), // "lock"
QT_MOC_LITERAL(6, 87, 5), // "build"
QT_MOC_LITERAL(7, 93, 10) // "checkRange"

    },
    "pqScalarsToColors\0componentOrModeChanged\0"
    "\0hideUnusedScalarBars\0setScalarRangeLock\0"
    "lock\0build\0checkRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqScalarsToColors[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqScalarsToColors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqScalarsToColors *_t = static_cast<pqScalarsToColors *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->componentOrModeChanged(); break;
        case 1: _t->hideUnusedScalarBars(); break;
        case 2: _t->setScalarRangeLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->build(); break;
        case 4: _t->checkRange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqScalarsToColors::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqScalarsToColors::componentOrModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqScalarsToColors::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqScalarsToColors.data,
      qt_meta_data_pqScalarsToColors,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqScalarsToColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqScalarsToColors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqScalarsToColors.stringdata0))
        return static_cast<void*>(this);
    return pqProxy::qt_metacast(_clname);
}

int pqScalarsToColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
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
void pqScalarsToColors::componentOrModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
