/****************************************************************************
** Meta object code from reading C++ file 'pqRenderViewSelectionReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqRenderViewSelectionReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqRenderViewSelectionReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqRenderViewSelectionReaction_t {
    QByteArrayData data[22];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqRenderViewSelectionReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqRenderViewSelectionReaction_t qt_meta_stringdata_pqRenderViewSelectionReaction = {
    {
QT_MOC_LITERAL(0, 0, 29), // "pqRenderViewSelectionReaction"
QT_MOC_LITERAL(1, 30, 17), // "selectedCustomBox"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "xmin"
QT_MOC_LITERAL(4, 54, 4), // "ymin"
QT_MOC_LITERAL(5, 59, 4), // "xmax"
QT_MOC_LITERAL(6, 64, 4), // "ymax"
QT_MOC_LITERAL(7, 69, 12), // "const int[4]"
QT_MOC_LITERAL(8, 82, 6), // "region"
QT_MOC_LITERAL(9, 89, 21), // "selectedCustomPolygon"
QT_MOC_LITERAL(10, 111, 12), // "vtkIntArray*"
QT_MOC_LITERAL(11, 124, 7), // "polygon"
QT_MOC_LITERAL(12, 132, 15), // "actionTriggered"
QT_MOC_LITERAL(13, 148, 3), // "val"
QT_MOC_LITERAL(14, 152, 17), // "updateEnableState"
QT_MOC_LITERAL(15, 170, 7), // "setView"
QT_MOC_LITERAL(16, 178, 7), // "pqView*"
QT_MOC_LITERAL(17, 186, 4), // "view"
QT_MOC_LITERAL(18, 191, 14), // "beginSelection"
QT_MOC_LITERAL(19, 206, 12), // "endSelection"
QT_MOC_LITERAL(20, 219, 12), // "preSelection"
QT_MOC_LITERAL(21, 232, 11) // "onMouseStop"

    },
    "pqRenderViewSelectionReaction\0"
    "selectedCustomBox\0\0xmin\0ymin\0xmax\0"
    "ymax\0const int[4]\0region\0selectedCustomPolygon\0"
    "vtkIntArray*\0polygon\0actionTriggered\0"
    "val\0updateEnableState\0setView\0pqView*\0"
    "view\0beginSelection\0endSelection\0"
    "preSelection\0onMouseStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqRenderViewSelectionReaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x06 /* Public */,
       1,    1,   73,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    1,   83,    2, 0x08 /* Private */,
      18,    0,   86,    2, 0x08 /* Private */,
      19,    0,   87,    2, 0x08 /* Private */,
      20,    0,   88,    2, 0x08 /* Private */,
      21,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqRenderViewSelectionReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqRenderViewSelectionReaction *_t = static_cast<pqRenderViewSelectionReaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedCustomBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->selectedCustomBox((*reinterpret_cast< const int(*)[4]>(_a[1]))); break;
        case 2: _t->selectedCustomPolygon((*reinterpret_cast< vtkIntArray*(*)>(_a[1]))); break;
        case 3: _t->actionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateEnableState(); break;
        case 5: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 6: _t->beginSelection(); break;
        case 7: _t->endSelection(); break;
        case 8: _t->preSelection(); break;
        case 9: _t->onMouseStop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqRenderViewSelectionReaction::*_t)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqRenderViewSelectionReaction::selectedCustomBox)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqRenderViewSelectionReaction::*_t)(const int [4]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqRenderViewSelectionReaction::selectedCustomBox)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqRenderViewSelectionReaction::*_t)(vtkIntArray * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqRenderViewSelectionReaction::selectedCustomPolygon)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject pqRenderViewSelectionReaction::staticMetaObject = {
    { &pqSelectionReaction::staticMetaObject, qt_meta_stringdata_pqRenderViewSelectionReaction.data,
      qt_meta_data_pqRenderViewSelectionReaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqRenderViewSelectionReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqRenderViewSelectionReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqRenderViewSelectionReaction.stringdata0))
        return static_cast<void*>(this);
    return pqSelectionReaction::qt_metacast(_clname);
}

int pqRenderViewSelectionReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqSelectionReaction::qt_metacall(_c, _id, _a);
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
void pqRenderViewSelectionReaction::selectedCustomBox(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqRenderViewSelectionReaction::selectedCustomBox(const int _t1[4])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqRenderViewSelectionReaction::selectedCustomPolygon(vtkIntArray * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
