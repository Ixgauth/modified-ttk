/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleLineEditEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqDoubleLineEditEventTranslator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleLineEditEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDoubleLineEditEventTranslator_t {
    QByteArrayData data[5];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDoubleLineEditEventTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDoubleLineEditEventTranslator_t qt_meta_stringdata_pqDoubleLineEditEventTranslator = {
    {
QT_MOC_LITERAL(0, 0, 31), // "pqDoubleLineEditEventTranslator"
QT_MOC_LITERAL(1, 32, 11), // "onDestroyed"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 44), // "onFullPrecisionTextChangedAnd..."
QT_MOC_LITERAL(4, 90, 4) // "text"

    },
    "pqDoubleLineEditEventTranslator\0"
    "onDestroyed\0\0onFullPrecisionTextChangedAndEditingFinished\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDoubleLineEditEventTranslator[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void pqDoubleLineEditEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDoubleLineEditEventTranslator *_t = static_cast<pqDoubleLineEditEventTranslator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDestroyed(); break;
        case 1: _t->onFullPrecisionTextChangedAndEditingFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqDoubleLineEditEventTranslator::staticMetaObject = {
    { &pqWidgetEventTranslator::staticMetaObject, qt_meta_stringdata_pqDoubleLineEditEventTranslator.data,
      qt_meta_data_pqDoubleLineEditEventTranslator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDoubleLineEditEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDoubleLineEditEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleLineEditEventTranslator.stringdata0))
        return static_cast<void*>(this);
    return pqWidgetEventTranslator::qt_metacast(_clname);
}

int pqDoubleLineEditEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
