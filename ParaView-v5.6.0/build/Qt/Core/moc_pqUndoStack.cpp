/****************************************************************************
** Meta object code from reading C++ file 'pqUndoStack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqUndoStack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqUndoStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqUndoStack_t {
    QByteArrayData data[25];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqUndoStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqUndoStack_t qt_meta_stringdata_pqUndoStack = {
    {
QT_MOC_LITERAL(0, 0, 11), // "pqUndoStack"
QT_MOC_LITERAL(1, 12, 12), // "stackChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "canUndo"
QT_MOC_LITERAL(4, 34, 9), // "undoLabel"
QT_MOC_LITERAL(5, 44, 7), // "canRedo"
QT_MOC_LITERAL(6, 52, 9), // "redoLabel"
QT_MOC_LITERAL(7, 62, 14), // "canUndoChanged"
QT_MOC_LITERAL(8, 77, 14), // "canRedoChanged"
QT_MOC_LITERAL(9, 92, 16), // "undoLabelChanged"
QT_MOC_LITERAL(10, 109, 16), // "redoLabelChanged"
QT_MOC_LITERAL(11, 126, 6), // "undone"
QT_MOC_LITERAL(12, 133, 6), // "redone"
QT_MOC_LITERAL(13, 140, 12), // "beginUndoSet"
QT_MOC_LITERAL(14, 153, 5), // "label"
QT_MOC_LITERAL(15, 159, 10), // "endUndoSet"
QT_MOC_LITERAL(16, 170, 4), // "undo"
QT_MOC_LITERAL(17, 175, 4), // "redo"
QT_MOC_LITERAL(18, 180, 5), // "clear"
QT_MOC_LITERAL(19, 186, 23), // "beginNonUndoableChanges"
QT_MOC_LITERAL(20, 210, 21), // "endNonUndoableChanges"
QT_MOC_LITERAL(21, 232, 18), // "addToActiveUndoSet"
QT_MOC_LITERAL(22, 251, 15), // "vtkUndoElement*"
QT_MOC_LITERAL(23, 267, 7), // "element"
QT_MOC_LITERAL(24, 275, 14) // "onStackChanged"

    },
    "pqUndoStack\0stackChanged\0\0canUndo\0"
    "undoLabel\0canRedo\0redoLabel\0canUndoChanged\0"
    "canRedoChanged\0undoLabelChanged\0"
    "redoLabelChanged\0undone\0redone\0"
    "beginUndoSet\0label\0endUndoSet\0undo\0"
    "redo\0clear\0beginNonUndoableChanges\0"
    "endNonUndoableChanges\0addToActiveUndoSet\0"
    "vtkUndoElement*\0element\0onStackChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqUndoStack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   94,    2, 0x06 /* Public */,
       7,    1,  103,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
       9,    1,  109,    2, 0x06 /* Public */,
      10,    1,  112,    2, 0x06 /* Public */,
      11,    0,  115,    2, 0x06 /* Public */,
      12,    0,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  117,    2, 0x0a /* Public */,
      15,    0,  120,    2, 0x0a /* Public */,
      16,    0,  121,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    0,  123,    2, 0x0a /* Public */,
      19,    0,  124,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      21,    1,  126,    2, 0x0a /* Public */,
      24,    0,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,

       0        // eod
};

void pqUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqUndoStack *_t = static_cast<pqUndoStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stackChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->undoLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->redoLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->undone(); break;
        case 6: _t->redone(); break;
        case 7: _t->beginUndoSet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->endUndoSet(); break;
        case 9: _t->undo(); break;
        case 10: _t->redo(); break;
        case 11: _t->clear(); break;
        case 12: _t->beginNonUndoableChanges(); break;
        case 13: _t->endNonUndoableChanges(); break;
        case 14: _t->addToActiveUndoSet((*reinterpret_cast< vtkUndoElement*(*)>(_a[1]))); break;
        case 15: _t->onStackChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqUndoStack::*_t)(bool , QString , bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::stackChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqUndoStack::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::canUndoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqUndoStack::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::canRedoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqUndoStack::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::undoLabelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqUndoStack::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::redoLabelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqUndoStack::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::undone)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqUndoStack::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqUndoStack::redone)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject pqUndoStack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqUndoStack.data,
      qt_meta_data_pqUndoStack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqUndoStack.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void pqUndoStack::stackChanged(bool _t1, QString _t2, bool _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqUndoStack::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqUndoStack::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqUndoStack::undoLabelChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqUndoStack::redoLabelChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqUndoStack::undone()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void pqUndoStack::redone()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
