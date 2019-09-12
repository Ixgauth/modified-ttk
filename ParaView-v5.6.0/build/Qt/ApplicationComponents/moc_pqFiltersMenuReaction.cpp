/****************************************************************************
** Meta object code from reading C++ file 'pqFiltersMenuReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqFiltersMenuReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFiltersMenuReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFiltersMenuReaction_t {
    QByteArrayData data[10];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFiltersMenuReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFiltersMenuReaction_t qt_meta_stringdata_pqFiltersMenuReaction = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqFiltersMenuReaction"
QT_MOC_LITERAL(1, 22, 17), // "updateEnableState"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "updateOnlyToolbars"
QT_MOC_LITERAL(4, 60, 12), // "createFilter"
QT_MOC_LITERAL(5, 73, 17), // "pqPipelineSource*"
QT_MOC_LITERAL(6, 91, 5), // "group"
QT_MOC_LITERAL(7, 97, 4), // "name"
QT_MOC_LITERAL(8, 102, 11), // "onTriggered"
QT_MOC_LITERAL(9, 114, 19) // "setEnableStateDirty"

    },
    "pqFiltersMenuReaction\0updateEnableState\0"
    "\0updateOnlyToolbars\0createFilter\0"
    "pqPipelineSource*\0group\0name\0onTriggered\0"
    "setEnableStateDirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFiltersMenuReaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       1,    0,   42,    2, 0x2a /* Public | MethodCloned */,
       4,    2,   43,    2, 0x0a /* Public */,
       8,    2,   48,    2, 0x09 /* Protected */,
       9,    0,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,

       0        // eod
};

void pqFiltersMenuReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFiltersMenuReaction *_t = static_cast<pqFiltersMenuReaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnableState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateEnableState(); break;
        case 2: { pqPipelineSource* _r = _t->createFilter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< pqPipelineSource**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->onTriggered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setEnableStateDirty(); break;
        default: ;
        }
    }
}

const QMetaObject pqFiltersMenuReaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqFiltersMenuReaction.data,
      qt_meta_data_pqFiltersMenuReaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFiltersMenuReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFiltersMenuReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFiltersMenuReaction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqFiltersMenuReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
