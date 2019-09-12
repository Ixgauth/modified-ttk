/****************************************************************************
** Meta object code from reading C++ file 'pqSelectionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSelectionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSelectionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSelectionManager_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSelectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSelectionManager_t qt_meta_stringdata_pqSelectionManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "pqSelectionManager"
QT_MOC_LITERAL(1, 19, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "pqOutputPort*"
QT_MOC_LITERAL(4, 51, 14), // "clearSelection"
QT_MOC_LITERAL(5, 66, 10), // "outputPort"
QT_MOC_LITERAL(6, 77, 13), // "setActiveView"
QT_MOC_LITERAL(7, 91, 7), // "pqView*"
QT_MOC_LITERAL(8, 99, 6), // "select"
QT_MOC_LITERAL(9, 106, 11), // "onLinkAdded"
QT_MOC_LITERAL(10, 118, 8), // "linkType"
QT_MOC_LITERAL(11, 127, 13), // "onLinkRemoved"
QT_MOC_LITERAL(12, 141, 13), // "onItemRemoved"
QT_MOC_LITERAL(13, 155, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(14, 181, 4) // "item"

    },
    "pqSelectionManager\0selectionChanged\0"
    "\0pqOutputPort*\0clearSelection\0outputPort\0"
    "setActiveView\0pqView*\0select\0onLinkAdded\0"
    "linkType\0onLinkRemoved\0onItemRemoved\0"
    "pqServerManagerModelItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSelectionManager[] = {

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
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       4,    0,   60,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   61,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void pqSelectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSelectionManager *_t = static_cast<pqSelectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->clearSelection((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->clearSelection(); break;
        case 3: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 4: _t->select((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 5: _t->onLinkAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onLinkRemoved(); break;
        case 7: _t->onItemRemoved((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSelectionManager::*_t)(pqOutputPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSelectionManager::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqSelectionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSelectionManager.data,
      qt_meta_data_pqSelectionManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSelectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSelectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSelectionManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqSelectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void pqSelectionManager::selectionChanged(pqOutputPort * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
