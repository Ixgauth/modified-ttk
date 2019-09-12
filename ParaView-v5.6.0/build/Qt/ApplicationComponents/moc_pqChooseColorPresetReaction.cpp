/****************************************************************************
** Meta object code from reading C++ file 'pqChooseColorPresetReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqChooseColorPresetReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqChooseColorPresetReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqChooseColorPresetReaction_t {
    QByteArrayData data[15];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqChooseColorPresetReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqChooseColorPresetReaction_t qt_meta_stringdata_pqChooseColorPresetReaction = {
    {
QT_MOC_LITERAL(0, 0, 27), // "pqChooseColorPresetReaction"
QT_MOC_LITERAL(1, 28, 13), // "presetApplied"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "choosePreset"
QT_MOC_LITERAL(4, 56, 11), // "const char*"
QT_MOC_LITERAL(5, 68, 10), // "presetName"
QT_MOC_LITERAL(6, 79, 17), // "setRepresentation"
QT_MOC_LITERAL(7, 97, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(8, 119, 4), // "repr"
QT_MOC_LITERAL(9, 124, 19), // "setTransferFunction"
QT_MOC_LITERAL(10, 144, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(11, 156, 3), // "lut"
QT_MOC_LITERAL(12, 160, 17), // "updateEnableState"
QT_MOC_LITERAL(13, 178, 18), // "applyCurrentPreset"
QT_MOC_LITERAL(14, 197, 22) // "updateTransferFunction"

    },
    "pqChooseColorPresetReaction\0presetApplied\0"
    "\0choosePreset\0const char*\0presetName\0"
    "setRepresentation\0pqDataRepresentation*\0"
    "repr\0setTransferFunction\0vtkSMProxy*\0"
    "lut\0updateEnableState\0applyCurrentPreset\0"
    "updateTransferFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqChooseColorPresetReaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       3,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      12,    0,   65,    2, 0x0a /* Public */,
      13,    0,   66,    2, 0x08 /* Private */,
      14,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqChooseColorPresetReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqChooseColorPresetReaction *_t = static_cast<pqChooseColorPresetReaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->presetApplied(); break;
        case 1: { bool _r = _t->choosePreset((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->choosePreset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 4: _t->setTransferFunction((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 5: _t->updateEnableState(); break;
        case 6: _t->applyCurrentPreset(); break;
        case 7: _t->updateTransferFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqChooseColorPresetReaction::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqChooseColorPresetReaction::presetApplied)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqChooseColorPresetReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqChooseColorPresetReaction.data,
      qt_meta_data_pqChooseColorPresetReaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqChooseColorPresetReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqChooseColorPresetReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqChooseColorPresetReaction.stringdata0))
        return static_cast<void*>(this);
    return pqReaction::qt_metacast(_clname);
}

int pqChooseColorPresetReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqChooseColorPresetReaction::presetApplied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
