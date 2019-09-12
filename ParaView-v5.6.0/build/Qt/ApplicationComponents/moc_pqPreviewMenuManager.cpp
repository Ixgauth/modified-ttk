/****************************************************************************
** Meta object code from reading C++ file 'pqPreviewMenuManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqPreviewMenuManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPreviewMenuManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPreviewMenuManager_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPreviewMenuManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPreviewMenuManager_t qt_meta_stringdata_pqPreviewMenuManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqPreviewMenuManager"
QT_MOC_LITERAL(1, 21, 18), // "updateEnabledState"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "addCustom"
QT_MOC_LITERAL(4, 51, 14), // "lockResolution"
QT_MOC_LITERAL(5, 66, 4), // "lock"
QT_MOC_LITERAL(6, 71, 2), // "dx"
QT_MOC_LITERAL(7, 74, 2), // "dy"
QT_MOC_LITERAL(8, 77, 8), // "QAction*"
QT_MOC_LITERAL(9, 86, 6), // "target"
QT_MOC_LITERAL(10, 93, 11) // "aboutToShow"

    },
    "pqPreviewMenuManager\0updateEnabledState\0"
    "\0addCustom\0lockResolution\0lock\0dx\0dy\0"
    "QAction*\0target\0aboutToShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPreviewMenuManager[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       4,    3,   44,    2, 0x08 /* Private */,
      10,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void,

       0        // eod
};

void pqPreviewMenuManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPreviewMenuManager *_t = static_cast<pqPreviewMenuManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        case 1: _t->addCustom(); break;
        case 2: _t->lockResolution((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->lockResolution((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QAction*(*)>(_a[3]))); break;
        case 4: _t->aboutToShow(); break;
        default: ;
        }
    }
}

const QMetaObject pqPreviewMenuManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPreviewMenuManager.data,
      qt_meta_data_pqPreviewMenuManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPreviewMenuManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPreviewMenuManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPreviewMenuManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqPreviewMenuManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
