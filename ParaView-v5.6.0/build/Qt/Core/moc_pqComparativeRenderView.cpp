/****************************************************************************
** Meta object code from reading C++ file 'pqComparativeRenderView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqComparativeRenderView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqComparativeRenderView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqComparativeRenderView_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqComparativeRenderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqComparativeRenderView_t qt_meta_stringdata_pqComparativeRenderView = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqComparativeRenderView"
QT_MOC_LITERAL(1, 24, 17), // "updateViewWidgets"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "QWidget*"
QT_MOC_LITERAL(4, 52, 9) // "container"

    },
    "pqComparativeRenderView\0updateViewWidgets\0"
    "\0QWidget*\0container"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqComparativeRenderView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       1,    0,   27,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void pqComparativeRenderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqComparativeRenderView *_t = static_cast<pqComparativeRenderView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateViewWidgets((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->updateViewWidgets(); break;
        default: ;
        }
    }
}

const QMetaObject pqComparativeRenderView::staticMetaObject = {
    { &pqRenderView::staticMetaObject, qt_meta_stringdata_pqComparativeRenderView.data,
      qt_meta_data_pqComparativeRenderView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqComparativeRenderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqComparativeRenderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqComparativeRenderView.stringdata0))
        return static_cast<void*>(this);
    return pqRenderView::qt_metacast(_clname);
}

int pqComparativeRenderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqRenderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
