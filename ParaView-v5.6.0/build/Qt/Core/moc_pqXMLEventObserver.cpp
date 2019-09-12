/****************************************************************************
** Meta object code from reading C++ file 'pqXMLEventObserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqXMLEventObserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqXMLEventObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqXMLEventObserver_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqXMLEventObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqXMLEventObserver_t qt_meta_stringdata_pqXMLEventObserver = {
    {
QT_MOC_LITERAL(0, 0, 18), // "pqXMLEventObserver"
QT_MOC_LITERAL(1, 19, 13), // "onRecordEvent"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "Widget"
QT_MOC_LITERAL(4, 41, 7), // "Command"
QT_MOC_LITERAL(5, 49, 9), // "Arguments"
QT_MOC_LITERAL(6, 59, 9) // "eventType"

    },
    "pqXMLEventObserver\0onRecordEvent\0\0"
    "Widget\0Command\0Arguments\0eventType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqXMLEventObserver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,

       0        // eod
};

void pqXMLEventObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqXMLEventObserver *_t = static_cast<pqXMLEventObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRecordEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject pqXMLEventObserver::staticMetaObject = {
    { &pqEventObserver::staticMetaObject, qt_meta_stringdata_pqXMLEventObserver.data,
      qt_meta_data_pqXMLEventObserver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqXMLEventObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqXMLEventObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqXMLEventObserver.stringdata0))
        return static_cast<void*>(this);
    return pqEventObserver::qt_metacast(_clname);
}

int pqXMLEventObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqEventObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
