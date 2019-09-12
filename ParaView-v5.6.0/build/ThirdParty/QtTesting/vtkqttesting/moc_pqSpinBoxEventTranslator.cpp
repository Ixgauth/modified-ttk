/****************************************************************************
** Meta object code from reading C++ file 'pqSpinBoxEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqSpinBoxEventTranslator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpinBoxEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSpinBoxEventTranslator_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSpinBoxEventTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSpinBoxEventTranslator_t qt_meta_stringdata_pqSpinBoxEventTranslator = {
    {
QT_MOC_LITERAL(0, 0, 24), // "pqSpinBoxEventTranslator"
QT_MOC_LITERAL(1, 25, 11), // "onDestroyed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "onValueChanged"
QT_MOC_LITERAL(4, 53, 6) // "number"

    },
    "pqSpinBoxEventTranslator\0onDestroyed\0"
    "\0onValueChanged\0number"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSpinBoxEventTranslator[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       3,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void pqSpinBoxEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSpinBoxEventTranslator *_t = static_cast<pqSpinBoxEventTranslator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqSpinBoxEventTranslator::staticMetaObject = {
    { &pqWidgetEventTranslator::staticMetaObject, qt_meta_stringdata_pqSpinBoxEventTranslator.data,
      qt_meta_data_pqSpinBoxEventTranslator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSpinBoxEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSpinBoxEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpinBoxEventTranslator.stringdata0))
        return static_cast<void*>(this);
    return pqWidgetEventTranslator::qt_metacast(_clname);
}

int pqSpinBoxEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqWidgetEventTranslator::qt_metacall(_c, _id, _a);
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
