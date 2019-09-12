/****************************************************************************
** Meta object code from reading C++ file 'pqTextureComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqTextureComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTextureComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTextureComboBox_t {
    QByteArrayData data[19];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTextureComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTextureComboBox_t qt_meta_stringdata_pqTextureComboBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqTextureComboBox"
QT_MOC_LITERAL(1, 18, 17), // "setRepresentation"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(4, 59, 4), // "repr"
QT_MOC_LITERAL(5, 64, 13), // "setRenderView"
QT_MOC_LITERAL(6, 78, 13), // "pqRenderView*"
QT_MOC_LITERAL(7, 92, 5), // "rview"
QT_MOC_LITERAL(8, 98, 6), // "reload"
QT_MOC_LITERAL(9, 105, 17), // "updateEnableState"
QT_MOC_LITERAL(10, 123, 11), // "onActivated"
QT_MOC_LITERAL(11, 135, 18), // "updateFromProperty"
QT_MOC_LITERAL(12, 154, 14), // "updateTextures"
QT_MOC_LITERAL(13, 169, 15), // "proxyRegistered"
QT_MOC_LITERAL(14, 185, 9), // "groupname"
QT_MOC_LITERAL(15, 195, 17), // "proxyUnRegistered"
QT_MOC_LITERAL(16, 213, 5), // "group"
QT_MOC_LITERAL(17, 219, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(18, 231, 5) // "proxy"

    },
    "pqTextureComboBox\0setRepresentation\0"
    "\0pqDataRepresentation*\0repr\0setRenderView\0"
    "pqRenderView*\0rview\0reload\0updateEnableState\0"
    "onActivated\0updateFromProperty\0"
    "updateTextures\0proxyRegistered\0groupname\0"
    "proxyUnRegistered\0group\0vtkSMProxy*\0"
    "proxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTextureComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    1,   67,    2, 0x09 /* Protected */,
      11,    0,   70,    2, 0x09 /* Protected */,
      12,    0,   71,    2, 0x09 /* Protected */,
      13,    1,   72,    2, 0x09 /* Protected */,
      15,    3,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 17,   16,    2,   18,

       0        // eod
};

void pqTextureComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTextureComboBox *_t = static_cast<pqTextureComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->setRenderView((*reinterpret_cast< pqRenderView*(*)>(_a[1]))); break;
        case 2: _t->reload(); break;
        case 3: _t->updateEnableState(); break;
        case 4: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateFromProperty(); break;
        case 6: _t->updateTextures(); break;
        case 7: _t->proxyRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->proxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject pqTextureComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqTextureComboBox.data,
      qt_meta_data_pqTextureComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTextureComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTextureComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTextureComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int pqTextureComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
