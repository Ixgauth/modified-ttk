/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineInputComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPipelineInputComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineInputComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineInputComboBox_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineInputComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineInputComboBox_t qt_meta_stringdata_pqPipelineInputComboBox = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqPipelineInputComboBox"
QT_MOC_LITERAL(1, 24, 15), // "setCurrentProxy"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(4, 53, 5), // "proxy"
QT_MOC_LITERAL(5, 59, 6), // "reload"
QT_MOC_LITERAL(6, 66, 11), // "onActivated"
QT_MOC_LITERAL(7, 78, 15), // "proxyRegistered"
QT_MOC_LITERAL(8, 94, 5), // "group"
QT_MOC_LITERAL(9, 100, 4), // "name"
QT_MOC_LITERAL(10, 105, 17) // "proxyUnRegistered"

    },
    "pqPipelineInputComboBox\0setCurrentProxy\0"
    "\0vtkSMProxy*\0proxy\0reload\0onActivated\0"
    "proxyRegistered\0group\0name\0proxyUnRegistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineInputComboBox[] = {

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
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x09 /* Protected */,
       7,    3,   46,    2, 0x09 /* Protected */,
      10,    3,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 3,    8,    9,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 3,    8,    9,    4,

       0        // eod
};

void pqPipelineInputComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineInputComboBox *_t = static_cast<pqPipelineInputComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentProxy((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 1: _t->reload(); break;
        case 2: _t->onActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->proxyRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 4: _t->proxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject pqPipelineInputComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqPipelineInputComboBox.data,
      qt_meta_data_pqPipelineInputComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineInputComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineInputComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineInputComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int pqPipelineInputComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
