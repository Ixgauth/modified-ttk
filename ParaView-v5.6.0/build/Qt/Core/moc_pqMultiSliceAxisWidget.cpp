/****************************************************************************
** Meta object code from reading C++ file 'pqMultiSliceAxisWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqMultiSliceAxisWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiSliceAxisWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqMultiSliceAxisWidget_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqMultiSliceAxisWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqMultiSliceAxisWidget_t qt_meta_stringdata_pqMultiSliceAxisWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqMultiSliceAxisWidget"
QT_MOC_LITERAL(1, 23, 10), // "sliceAdded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 12), // "sliceRemoved"
QT_MOC_LITERAL(5, 54, 13), // "sliceModified"
QT_MOC_LITERAL(6, 68, 11), // "markClicked"
QT_MOC_LITERAL(7, 80, 6), // "button"
QT_MOC_LITERAL(8, 87, 8), // "modifier"
QT_MOC_LITERAL(9, 96, 5), // "value"
QT_MOC_LITERAL(10, 102, 12), // "titleChanged"
QT_MOC_LITERAL(11, 115, 10), // "renderView"
QT_MOC_LITERAL(12, 126, 5) // "title"

    },
    "pqMultiSliceAxisWidget\0sliceAdded\0\0"
    "index\0sliceRemoved\0sliceModified\0"
    "markClicked\0button\0modifier\0value\0"
    "titleChanged\0renderView\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqMultiSliceAxisWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    3,   53,    2, 0x06 /* Public */,
      10,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095103,

       0        // eod
};

void pqMultiSliceAxisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqMultiSliceAxisWidget *_t = static_cast<pqMultiSliceAxisWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliceAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliceRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliceModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->markClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->renderView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqMultiSliceAxisWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceAxisWidget::sliceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqMultiSliceAxisWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceAxisWidget::sliceRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqMultiSliceAxisWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceAxisWidget::sliceModified)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqMultiSliceAxisWidget::*_t)(int , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceAxisWidget::markClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqMultiSliceAxisWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiSliceAxisWidget::titleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqMultiSliceAxisWidget *_t = static_cast<pqMultiSliceAxisWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqMultiSliceAxisWidget *_t = static_cast<pqMultiSliceAxisWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqMultiSliceAxisWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqMultiSliceAxisWidget.data,
      qt_meta_data_pqMultiSliceAxisWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqMultiSliceAxisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqMultiSliceAxisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiSliceAxisWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqMultiSliceAxisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqMultiSliceAxisWidget::sliceAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqMultiSliceAxisWidget::sliceRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqMultiSliceAxisWidget::sliceModified(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqMultiSliceAxisWidget::markClicked(int _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqMultiSliceAxisWidget::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
