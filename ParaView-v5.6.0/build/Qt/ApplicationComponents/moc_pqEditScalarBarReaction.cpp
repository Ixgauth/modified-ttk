/****************************************************************************
** Meta object code from reading C++ file 'pqEditScalarBarReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqEditScalarBarReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEditScalarBarReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqEditScalarBarReaction_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqEditScalarBarReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqEditScalarBarReaction_t qt_meta_stringdata_pqEditScalarBarReaction = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqEditScalarBarReaction"
QT_MOC_LITERAL(1, 24, 17), // "setRepresentation"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(4, 65, 13), // "editScalarBar"
QT_MOC_LITERAL(5, 79, 17), // "updateEnableState"
QT_MOC_LITERAL(6, 97, 11) // "onTriggered"

    },
    "pqEditScalarBarReaction\0setRepresentation\0"
    "\0pqDataRepresentation*\0editScalarBar\0"
    "updateEnableState\0onTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqEditScalarBarReaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x09 /* Protected */,
       6,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqEditScalarBarReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqEditScalarBarReaction *_t = static_cast<pqEditScalarBarReaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->editScalarBar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->updateEnableState(); break;
        case 3: _t->onTriggered(); break;
        default: ;
        }
    }
}

const QMetaObject pqEditScalarBarReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqEditScalarBarReaction.data,
      qt_meta_data_pqEditScalarBarReaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqEditScalarBarReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqEditScalarBarReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqEditScalarBarReaction.stringdata0))
        return static_cast<void*>(this);
    return pqReaction::qt_metacast(_clname);
}

int pqEditScalarBarReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
