/****************************************************************************
** Meta object code from reading C++ file 'pqMultiViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqMultiViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqMultiViewWidget_t {
    QByteArrayData data[27];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqMultiViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqMultiViewWidget_t qt_meta_stringdata_pqMultiViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqMultiViewWidget"
QT_MOC_LITERAL(1, 18, 14), // "frameActivated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 28), // "decorationsVisibilityChanged"
QT_MOC_LITERAL(4, 63, 7), // "visible"
QT_MOC_LITERAL(5, 71, 6), // "reload"
QT_MOC_LITERAL(6, 78, 13), // "assignToFrame"
QT_MOC_LITERAL(7, 92, 7), // "pqView*"
QT_MOC_LITERAL(8, 100, 15), // "makeFrameActive"
QT_MOC_LITERAL(9, 116, 21), // "setDecorationsVisible"
QT_MOC_LITERAL(10, 138, 15), // "showDecorations"
QT_MOC_LITERAL(11, 154, 15), // "hideDecorations"
QT_MOC_LITERAL(12, 170, 12), // "lockViewSize"
QT_MOC_LITERAL(13, 183, 5), // "reset"
QT_MOC_LITERAL(14, 189, 15), // "destroyAllViews"
QT_MOC_LITERAL(15, 205, 21), // "standardButtonPressed"
QT_MOC_LITERAL(16, 227, 13), // "splitterMoved"
QT_MOC_LITERAL(17, 241, 10), // "makeActive"
QT_MOC_LITERAL(18, 252, 12), // "pqViewFrame*"
QT_MOC_LITERAL(19, 265, 5), // "frame"
QT_MOC_LITERAL(20, 271, 10), // "markActive"
QT_MOC_LITERAL(21, 282, 4), // "view"
QT_MOC_LITERAL(22, 287, 13), // "swapPositions"
QT_MOC_LITERAL(23, 301, 12), // "proxyRemoved"
QT_MOC_LITERAL(24, 314, 8), // "pqProxy*"
QT_MOC_LITERAL(25, 323, 9), // "viewAdded"
QT_MOC_LITERAL(26, 333, 21) // "decorationsVisibility"

    },
    "pqMultiViewWidget\0frameActivated\0\0"
    "decorationsVisibilityChanged\0visible\0"
    "reload\0assignToFrame\0pqView*\0"
    "makeFrameActive\0setDecorationsVisible\0"
    "showDecorations\0hideDecorations\0"
    "lockViewSize\0reset\0destroyAllViews\0"
    "standardButtonPressed\0splitterMoved\0"
    "makeActive\0pqViewFrame*\0frame\0markActive\0"
    "view\0swapPositions\0proxyRemoved\0"
    "pqProxy*\0viewAdded\0decorationsVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqMultiViewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       1,  150, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  113,    2, 0x0a /* Public */,
       6,    1,  114,    2, 0x0a /* Public */,
       8,    0,  117,    2, 0x0a /* Public */,
       9,    1,  118,    2, 0x0a /* Public */,
      10,    0,  121,    2, 0x0a /* Public */,
      11,    0,  122,    2, 0x0a /* Public */,
      12,    1,  123,    2, 0x0a /* Public */,
      13,    0,  126,    2, 0x0a /* Public */,
      14,    0,  127,    2, 0x0a /* Public */,
      15,    1,  128,    2, 0x09 /* Protected */,
      16,    0,  131,    2, 0x09 /* Protected */,
      17,    1,  132,    2, 0x09 /* Protected */,
      20,    1,  135,    2, 0x09 /* Protected */,
      20,    1,  138,    2, 0x09 /* Protected */,
      22,    1,  141,    2, 0x09 /* Protected */,
      23,    1,  144,    2, 0x09 /* Protected */,
      25,    1,  147,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 7,   21,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       1,

       0        // eod
};

void pqMultiViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqMultiViewWidget *_t = static_cast<pqMultiViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameActivated(); break;
        case 1: _t->decorationsVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->reload(); break;
        case 3: _t->assignToFrame((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 4: _t->makeFrameActive(); break;
        case 5: _t->setDecorationsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showDecorations(); break;
        case 7: _t->hideDecorations(); break;
        case 8: _t->lockViewSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 9: _t->reset(); break;
        case 10: _t->destroyAllViews(); break;
        case 11: _t->standardButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->splitterMoved(); break;
        case 13: _t->makeActive((*reinterpret_cast< pqViewFrame*(*)>(_a[1]))); break;
        case 14: _t->markActive((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 15: _t->markActive((*reinterpret_cast< pqViewFrame*(*)>(_a[1]))); break;
        case 16: _t->swapPositions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->proxyRemoved((*reinterpret_cast< pqProxy*(*)>(_a[1]))); break;
        case 18: _t->viewAdded((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqMultiViewWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiViewWidget::frameActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqMultiViewWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiViewWidget::decorationsVisibilityChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqMultiViewWidget *_t = static_cast<pqMultiViewWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDecorationsVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqMultiViewWidget *_t = static_cast<pqMultiViewWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDecorationsVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqMultiViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqMultiViewWidget.data,
      qt_meta_data_pqMultiViewWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqMultiViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqMultiViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqMultiViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
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
void pqMultiViewWidget::frameActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqMultiViewWidget::decorationsVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
