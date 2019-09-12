/****************************************************************************
** Meta object code from reading C++ file 'pqPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPropertyWidget_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPropertyWidget_t qt_meta_stringdata_pqPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqPropertyWidget"
QT_MOC_LITERAL(1, 17, 11), // "viewChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "pqView*"
QT_MOC_LITERAL(4, 38, 4), // "view"
QT_MOC_LITERAL(5, 43, 15), // "changeAvailable"
QT_MOC_LITERAL(6, 59, 14), // "changeFinished"
QT_MOC_LITERAL(7, 74, 15), // "restartRequired"
QT_MOC_LITERAL(8, 90, 7), // "setView"
QT_MOC_LITERAL(9, 98, 17) // "onChangeAvailable"

    },
    "pqPropertyWidget\0viewChanged\0\0pqView*\0"
    "view\0changeAvailable\0changeFinished\0"
    "restartRequired\0setView\0onChangeAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   50,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void pqPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPropertyWidget *_t = static_cast<pqPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewChanged((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 1: _t->changeAvailable(); break;
        case 2: _t->changeFinished(); break;
        case 3: _t->restartRequired(); break;
        case 4: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 5: _t->onChangeAvailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPropertyWidget::*_t)(pqView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPropertyWidget::viewChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPropertyWidget::changeAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPropertyWidget::changeFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPropertyWidget::restartRequired)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject pqPropertyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqPropertyWidget.data,
      qt_meta_data_pqPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void pqPropertyWidget::viewChanged(pqView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPropertyWidget::changeAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqPropertyWidget::changeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void pqPropertyWidget::restartRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
