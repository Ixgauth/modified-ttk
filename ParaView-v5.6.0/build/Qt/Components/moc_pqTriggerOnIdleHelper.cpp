/****************************************************************************
** Meta object code from reading C++ file 'pqTriggerOnIdleHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqTriggerOnIdleHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTriggerOnIdleHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTriggerOnIdleHelper_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTriggerOnIdleHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTriggerOnIdleHelper_t qt_meta_stringdata_pqTriggerOnIdleHelper = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqTriggerOnIdleHelper"
QT_MOC_LITERAL(1, 22, 9), // "triggered"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "setServer"
QT_MOC_LITERAL(4, 43, 9), // "pqServer*"
QT_MOC_LITERAL(5, 53, 7), // "trigger"
QT_MOC_LITERAL(6, 61, 15) // "triggerInternal"

    },
    "pqTriggerOnIdleHelper\0triggered\0\0"
    "setServer\0pqServer*\0trigger\0triggerInternal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTriggerOnIdleHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqTriggerOnIdleHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTriggerOnIdleHelper *_t = static_cast<pqTriggerOnIdleHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->setServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->trigger(); break;
        case 3: _t->triggerInternal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqTriggerOnIdleHelper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTriggerOnIdleHelper::triggered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqTriggerOnIdleHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTriggerOnIdleHelper.data,
      qt_meta_data_pqTriggerOnIdleHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTriggerOnIdleHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTriggerOnIdleHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTriggerOnIdleHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqTriggerOnIdleHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqTriggerOnIdleHelper::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
