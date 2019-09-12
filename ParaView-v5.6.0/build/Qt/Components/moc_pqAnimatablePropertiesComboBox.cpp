/****************************************************************************
** Meta object code from reading C++ file 'pqAnimatablePropertiesComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqAnimatablePropertiesComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimatablePropertiesComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimatablePropertiesComboBox_t {
    QByteArrayData data[15];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimatablePropertiesComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimatablePropertiesComboBox_t qt_meta_stringdata_pqAnimatablePropertiesComboBox = {
    {
QT_MOC_LITERAL(0, 0, 30), // "pqAnimatablePropertiesComboBox"
QT_MOC_LITERAL(1, 31, 9), // "setSource"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(4, 54, 5), // "proxy"
QT_MOC_LITERAL(5, 60, 26), // "setSourceWithoutProperties"
QT_MOC_LITERAL(6, 87, 18), // "setCollapseVectors"
QT_MOC_LITERAL(7, 106, 3), // "val"
QT_MOC_LITERAL(8, 110, 19), // "setVectorSizeFilter"
QT_MOC_LITERAL(9, 130, 4), // "size"
QT_MOC_LITERAL(10, 135, 13), // "addSMProperty"
QT_MOC_LITERAL(11, 149, 5), // "label"
QT_MOC_LITERAL(12, 155, 12), // "propertyname"
QT_MOC_LITERAL(13, 168, 5), // "index"
QT_MOC_LITERAL(14, 174, 17) // "buildPropertyList"

    },
    "pqAnimatablePropertiesComboBox\0setSource\0"
    "\0vtkSMProxy*\0proxy\0setSourceWithoutProperties\0"
    "setCollapseVectors\0val\0setVectorSizeFilter\0"
    "size\0addSMProperty\0label\0propertyname\0"
    "index\0buildPropertyList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimatablePropertiesComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      10,    3,   56,    2, 0x0a /* Public */,
      14,    0,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,

       0        // eod
};

void pqAnimatablePropertiesComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimatablePropertiesComboBox *_t = static_cast<pqAnimatablePropertiesComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSource((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 1: _t->setSourceWithoutProperties((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 2: _t->setCollapseVectors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVectorSizeFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addSMProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->buildPropertyList(); break;
        default: ;
        }
    }
}

const QMetaObject pqAnimatablePropertiesComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqAnimatablePropertiesComboBox.data,
      qt_meta_data_pqAnimatablePropertiesComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimatablePropertiesComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimatablePropertiesComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimatablePropertiesComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int pqAnimatablePropertiesComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
