/****************************************************************************
** Meta object code from reading C++ file 'pqPresetDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPresetDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPresetDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPresetDialog_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPresetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPresetDialog_t qt_meta_stringdata_pqPresetDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "pqPresetDialog"
QT_MOC_LITERAL(1, 15, 11), // "applyPreset"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "Json::Value"
QT_MOC_LITERAL(4, 40, 6), // "preset"
QT_MOC_LITERAL(5, 47, 30), // "updateEnabledStateForSelection"
QT_MOC_LITERAL(6, 78, 22), // "updateForSelectedIndex"
QT_MOC_LITERAL(7, 101, 10), // "proxyIndex"
QT_MOC_LITERAL(8, 112, 12), // "triggerApply"
QT_MOC_LITERAL(9, 125, 12), // "removePreset"
QT_MOC_LITERAL(10, 138, 3), // "idx"
QT_MOC_LITERAL(11, 142, 13), // "importPresets"
QT_MOC_LITERAL(12, 156, 13), // "exportPresets"
QT_MOC_LITERAL(13, 170, 19), // "setPresetIsAdvanced"
QT_MOC_LITERAL(14, 190, 8) // "newState"

    },
    "pqPresetDialog\0applyPreset\0\0Json::Value\0"
    "preset\0updateEnabledStateForSelection\0"
    "updateForSelectedIndex\0proxyIndex\0"
    "triggerApply\0removePreset\0idx\0"
    "importPresets\0exportPresets\0"
    "setPresetIsAdvanced\0newState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPresetDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x09 /* Protected */,
       6,    1,   68,    2, 0x09 /* Protected */,
       8,    1,   71,    2, 0x09 /* Protected */,
       8,    0,   74,    2, 0x29 /* Protected | MethodCloned */,
       9,    1,   75,    2, 0x09 /* Protected */,
       9,    0,   78,    2, 0x29 /* Protected | MethodCloned */,
      11,    0,   79,    2, 0x09 /* Protected */,
      12,    0,   80,    2, 0x09 /* Protected */,
      13,    1,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void pqPresetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPresetDialog *_t = static_cast<pqPresetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyPreset((*reinterpret_cast< const Json::Value(*)>(_a[1]))); break;
        case 1: _t->updateEnabledStateForSelection(); break;
        case 2: _t->updateForSelectedIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->triggerApply((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->triggerApply(); break;
        case 5: _t->removePreset((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->removePreset(); break;
        case 7: _t->importPresets(); break;
        case 8: _t->exportPresets(); break;
        case 9: _t->setPresetIsAdvanced((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPresetDialog::*_t)(const Json::Value & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPresetDialog::applyPreset)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqPresetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPresetDialog.data,
      qt_meta_data_pqPresetDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPresetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPresetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPresetDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqPresetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void pqPresetDialog::applyPreset(const Json::Value & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
