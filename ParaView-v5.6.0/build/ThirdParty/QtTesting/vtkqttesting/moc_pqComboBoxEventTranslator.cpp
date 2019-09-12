/****************************************************************************
** Meta object code from reading C++ file 'pqComboBoxEventTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqComboBoxEventTranslator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqComboBoxEventTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqComboBoxEventTranslator_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqComboBoxEventTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqComboBoxEventTranslator_t qt_meta_stringdata_pqComboBoxEventTranslator = {
    {
QT_MOC_LITERAL(0, 0, 25), // "pqComboBoxEventTranslator"
QT_MOC_LITERAL(1, 26, 11), // "onDestroyed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "onActivated"
QT_MOC_LITERAL(4, 51, 17) // "onEditTextChanged"

    },
    "pqComboBoxEventTranslator\0onDestroyed\0"
    "\0onActivated\0onEditTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqComboBoxEventTranslator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       3,    1,   32,    2, 0x08 /* Private */,
       4,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void pqComboBoxEventTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqComboBoxEventTranslator *_t = static_cast<pqComboBoxEventTranslator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->onActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqComboBoxEventTranslator::staticMetaObject = {
    { &pqWidgetEventTranslator::staticMetaObject, qt_meta_stringdata_pqComboBoxEventTranslator.data,
      qt_meta_data_pqComboBoxEventTranslator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqComboBoxEventTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqComboBoxEventTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqComboBoxEventTranslator.stringdata0))
        return static_cast<void*>(this);
    return pqWidgetEventTranslator::qt_metacast(_clname);
}

int pqComboBoxEventTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqWidgetEventTranslator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
