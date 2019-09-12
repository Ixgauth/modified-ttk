/****************************************************************************
** Meta object code from reading C++ file 'pqMultiSliceView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqMultiSliceView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiSliceView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqMultiSliceView_t {
    QByteArrayData data[19];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqMultiSliceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqMultiSliceView_t qt_meta_stringdata_pqMultiSliceView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqMultiSliceView"
QT_MOC_LITERAL(1, 17, 10), // "sliceAdded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "axisIndex"
QT_MOC_LITERAL(4, 39, 10), // "sliceIndex"
QT_MOC_LITERAL(5, 50, 12), // "sliceRemoved"
QT_MOC_LITERAL(6, 63, 13), // "sliceModified"
QT_MOC_LITERAL(7, 77, 12), // "sliceClicked"
QT_MOC_LITERAL(8, 90, 17), // "sliceOffsetOnAxis"
QT_MOC_LITERAL(9, 108, 6), // "button"
QT_MOC_LITERAL(10, 115, 8), // "modifier"
QT_MOC_LITERAL(11, 124, 12), // "updateSlices"
QT_MOC_LITERAL(12, 137, 16), // "updateAxisBounds"
QT_MOC_LITERAL(13, 154, 12), // "onSliceAdded"
QT_MOC_LITERAL(14, 167, 16), // "activeSliceIndex"
QT_MOC_LITERAL(15, 184, 14), // "onSliceRemoved"
QT_MOC_LITERAL(16, 199, 15), // "onSliceModified"
QT_MOC_LITERAL(17, 215, 14), // "onSliceClicked"
QT_MOC_LITERAL(18, 230, 5) // "value"

    },
    "pqMultiSliceView\0sliceAdded\0\0axisIndex\0"
    "sliceIndex\0sliceRemoved\0sliceModified\0"
    "sliceClicked\0sliceOffsetOnAxis\0button\0"
    "modifier\0updateSlices\0updateAxisBounds\0"
    "onSliceAdded\0activeSliceIndex\0"
    "onSliceRemoved\0onSliceModified\0"
    "onSliceClicked\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqMultiSliceView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,
       6,    2,   74,    2, 0x06 /* Public */,
       7,    4,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      17,    3,   99,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    9,   10,   18,

       0        // eod
};

void pqMultiSliceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqMultiSliceView *_t = static_cast<pqMultiSliceView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliceAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sliceRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->sliceModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sliceClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->updateSlices(); break;
        case 5: _t->updateAxisBounds(); break;
        case 6: _t->onSliceAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onSliceRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onSliceModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onSliceClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqMultiSliceView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceView::sliceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqMultiSliceView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceView::sliceRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqMultiSliceView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceView::sliceModified)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqMultiSliceView::*_t)(int , double , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceView::sliceClicked)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject pqMultiSliceView::staticMetaObject = {
    { &pqRenderView::staticMetaObject, qt_meta_stringdata_pqMultiSliceView.data,
      qt_meta_data_pqMultiSliceView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqMultiSliceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqMultiSliceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiSliceView.stringdata0))
        return static_cast<void*>(this);
    return pqRenderView::qt_metacast(_clname);
}

int pqMultiSliceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqRenderView::qt_metacall(_c, _id, _a);
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
void pqMultiSliceView::sliceAdded(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqMultiSliceView::sliceRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqMultiSliceView::sliceModified(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqMultiSliceView::sliceClicked(int _t1, double _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
