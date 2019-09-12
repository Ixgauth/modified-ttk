/****************************************************************************
** Meta object code from reading C++ file 'pqView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqView_t {
    QByteArrayData data[39];
    char stringdata0[533];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqView_t qt_meta_stringdata_pqView = {
    {
QT_MOC_LITERAL(0, 0, 6), // "pqView"
QT_MOC_LITERAL(1, 7, 15), // "updateDataEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 19), // "representationAdded"
QT_MOC_LITERAL(4, 44, 17), // "pqRepresentation*"
QT_MOC_LITERAL(5, 62, 21), // "representationRemoved"
QT_MOC_LITERAL(6, 84, 11), // "beginRender"
QT_MOC_LITERAL(7, 96, 9), // "endRender"
QT_MOC_LITERAL(8, 106, 31), // "representationVisibilityChanged"
QT_MOC_LITERAL(9, 138, 4), // "repr"
QT_MOC_LITERAL(10, 143, 7), // "visible"
QT_MOC_LITERAL(11, 151, 14), // "canUndoChanged"
QT_MOC_LITERAL(12, 166, 14), // "canRedoChanged"
QT_MOC_LITERAL(13, 181, 8), // "selected"
QT_MOC_LITERAL(14, 190, 13), // "pqOutputPort*"
QT_MOC_LITERAL(15, 204, 6), // "opport"
QT_MOC_LITERAL(16, 211, 20), // "selectionModeChanged"
QT_MOC_LITERAL(17, 232, 7), // "frustum"
QT_MOC_LITERAL(18, 240, 6), // "picked"
QT_MOC_LITERAL(19, 247, 13), // "beginProgress"
QT_MOC_LITERAL(20, 261, 11), // "endProgress"
QT_MOC_LITERAL(21, 273, 8), // "progress"
QT_MOC_LITERAL(22, 282, 7), // "message"
QT_MOC_LITERAL(23, 290, 16), // "percent_progress"
QT_MOC_LITERAL(24, 307, 16), // "multipleSelected"
QT_MOC_LITERAL(25, 324, 20), // "QList<pqOutputPort*>"
QT_MOC_LITERAL(26, 345, 7), // "opports"
QT_MOC_LITERAL(27, 353, 6), // "render"
QT_MOC_LITERAL(28, 360, 11), // "forceRender"
QT_MOC_LITERAL(29, 372, 20), // "cancelPendingRenders"
QT_MOC_LITERAL(30, 393, 4), // "undo"
QT_MOC_LITERAL(31, 398, 4), // "redo"
QT_MOC_LITERAL(32, 403, 12), // "resetDisplay"
QT_MOC_LITERAL(33, 416, 24), // "onRepresentationsChanged"
QT_MOC_LITERAL(34, 441, 33), // "onRepresentationVisibilityCha..."
QT_MOC_LITERAL(35, 475, 21), // "representationCreated"
QT_MOC_LITERAL(36, 497, 9), // "tryRender"
QT_MOC_LITERAL(37, 507, 13), // "onBeginRender"
QT_MOC_LITERAL(38, 521, 11) // "onEndRender"

    },
    "pqView\0updateDataEvent\0\0representationAdded\0"
    "pqRepresentation*\0representationRemoved\0"
    "beginRender\0endRender\0"
    "representationVisibilityChanged\0repr\0"
    "visible\0canUndoChanged\0canRedoChanged\0"
    "selected\0pqOutputPort*\0opport\0"
    "selectionModeChanged\0frustum\0picked\0"
    "beginProgress\0endProgress\0progress\0"
    "message\0percent_progress\0multipleSelected\0"
    "QList<pqOutputPort*>\0opports\0render\0"
    "forceRender\0cancelPendingRenders\0undo\0"
    "redo\0resetDisplay\0onRepresentationsChanged\0"
    "onRepresentationVisibilityChanged\0"
    "representationCreated\0tryRender\0"
    "onBeginRender\0onEndRender"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,
       3,    1,  150,    2, 0x06 /* Public */,
       5,    1,  153,    2, 0x06 /* Public */,
       6,    0,  156,    2, 0x06 /* Public */,
       7,    0,  157,    2, 0x06 /* Public */,
       8,    2,  158,    2, 0x06 /* Public */,
      11,    1,  163,    2, 0x06 /* Public */,
      12,    1,  166,    2, 0x06 /* Public */,
      13,    1,  169,    2, 0x06 /* Public */,
      16,    1,  172,    2, 0x06 /* Public */,
      18,    1,  175,    2, 0x06 /* Public */,
      19,    0,  178,    2, 0x06 /* Public */,
      20,    0,  179,    2, 0x06 /* Public */,
      21,    2,  180,    2, 0x06 /* Public */,
      24,    1,  185,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  188,    2, 0x0a /* Public */,
      28,    0,  189,    2, 0x0a /* Public */,
      29,    0,  190,    2, 0x0a /* Public */,
      30,    0,  191,    2, 0x0a /* Public */,
      31,    0,  192,    2, 0x0a /* Public */,
      32,    0,  193,    2, 0x0a /* Public */,
      33,    0,  194,    2, 0x08 /* Private */,
      34,    1,  195,    2, 0x08 /* Private */,
      35,    1,  198,    2, 0x08 /* Private */,
      36,    0,  201,    2, 0x08 /* Private */,
      37,    0,  202,    2, 0x08 /* Private */,
      38,    0,  203,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqView *_t = static_cast<pqView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDataEvent(); break;
        case 1: _t->representationAdded((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 2: _t->representationRemoved((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 3: _t->beginRender(); break;
        case 4: _t->endRender(); break;
        case 5: _t->representationVisibilityChanged((*reinterpret_cast< pqRepresentation*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->selected((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 9: _t->selectionModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->picked((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 11: _t->beginProgress(); break;
        case 12: _t->endProgress(); break;
        case 13: _t->progress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->multipleSelected((*reinterpret_cast< QList<pqOutputPort*>(*)>(_a[1]))); break;
        case 15: _t->render(); break;
        case 16: _t->forceRender(); break;
        case 17: _t->cancelPendingRenders(); break;
        case 18: _t->undo(); break;
        case 19: _t->redo(); break;
        case 20: _t->resetDisplay(); break;
        case 21: _t->onRepresentationsChanged(); break;
        case 22: _t->onRepresentationVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->representationCreated((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 24: _t->tryRender(); break;
        case 25: _t->onBeginRender(); break;
        case 26: _t->onEndRender(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::updateDataEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(pqRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::representationAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(pqRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::representationRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::beginRender)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::endRender)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(pqRepresentation * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::representationVisibilityChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::canUndoChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::canRedoChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(pqOutputPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::selected)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::selectionModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(pqOutputPort * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::picked)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (pqView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::beginProgress)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (pqView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::endProgress)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::progress)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (pqView::*_t)(QList<pqOutputPort*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqView::multipleSelected)) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject pqView::staticMetaObject = {
    { &pqProxy::staticMetaObject, qt_meta_stringdata_pqView.data,
      qt_meta_data_pqView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqView.stringdata0))
        return static_cast<void*>(this);
    return pqProxy::qt_metacast(_clname);
}

int pqView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void pqView::updateDataEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqView::representationAdded(pqRepresentation * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqView::representationRemoved(pqRepresentation * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqView::beginRender()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pqView::endRender()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void pqView::representationVisibilityChanged(pqRepresentation * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqView::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqView::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void pqView::selected(pqOutputPort * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void pqView::selectionModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void pqView::picked(pqOutputPort * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void pqView::beginProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void pqView::endProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void pqView::progress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void pqView::multipleSelected(QList<pqOutputPort*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
