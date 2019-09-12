/****************************************************************************
** Meta object code from reading C++ file 'pqInteractivePropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqInteractivePropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqInteractivePropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqInteractivePropertyWidget_t {
    QByteArrayData data[17];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqInteractivePropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqInteractivePropertyWidget_t qt_meta_stringdata_pqInteractivePropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "pqInteractivePropertyWidget"
QT_MOC_LITERAL(1, 28, 23), // "widgetVisibilityToggled"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 23), // "widgetVisibilityUpdated"
QT_MOC_LITERAL(4, 77, 16), // "startInteraction"
QT_MOC_LITERAL(5, 94, 11), // "interaction"
QT_MOC_LITERAL(6, 106, 14), // "endInteraction"
QT_MOC_LITERAL(7, 121, 11), // "dummySignal"
QT_MOC_LITERAL(8, 133, 16), // "setWidgetVisible"
QT_MOC_LITERAL(9, 150, 3), // "val"
QT_MOC_LITERAL(10, 154, 13), // "setDataSource"
QT_MOC_LITERAL(11, 168, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(12, 180, 10), // "dataSource"
QT_MOC_LITERAL(13, 191, 11), // "placeWidget"
QT_MOC_LITERAL(14, 203, 6), // "render"
QT_MOC_LITERAL(15, 210, 22), // "updateWidgetVisibility"
QT_MOC_LITERAL(16, 233, 9) // "pqSMProxy"

    },
    "pqInteractivePropertyWidget\0"
    "widgetVisibilityToggled\0\0"
    "widgetVisibilityUpdated\0startInteraction\0"
    "interaction\0endInteraction\0dummySignal\0"
    "setWidgetVisible\0val\0setDataSource\0"
    "vtkSMProxy*\0dataSource\0placeWidget\0"
    "render\0updateWidgetVisibility\0pqSMProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqInteractivePropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    0,   75,    2, 0x06 /* Public */,
       5,    0,   76,    2, 0x06 /* Public */,
       6,    0,   77,    2, 0x06 /* Public */,
       7,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x09 /* Protected */,
      14,    0,   86,    2, 0x09 /* Protected */,
      15,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 16, 0x0009510b,

       0        // eod
};

void pqInteractivePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqInteractivePropertyWidget *_t = static_cast<pqInteractivePropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetVisibilityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->widgetVisibilityUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->startInteraction(); break;
        case 3: _t->interaction(); break;
        case 4: _t->endInteraction(); break;
        case 5: _t->dummySignal(); break;
        case 6: _t->setWidgetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setDataSource((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 8: _t->placeWidget(); break;
        case 9: _t->render(); break;
        case 10: _t->updateWidgetVisibility(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqInteractivePropertyWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqInteractivePropertyWidget::widgetVisibilityToggled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqInteractivePropertyWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqInteractivePropertyWidget::widgetVisibilityUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqInteractivePropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqInteractivePropertyWidget::startInteraction)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqInteractivePropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqInteractivePropertyWidget::interaction)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqInteractivePropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqInteractivePropertyWidget::endInteraction)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqInteractivePropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqInteractivePropertyWidget::dummySignal)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqSMProxy >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqInteractivePropertyWidget *_t = static_cast<pqInteractivePropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pqSMProxy*>(_v) = _t->dataSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqInteractivePropertyWidget *_t = static_cast<pqInteractivePropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataSource(*reinterpret_cast< pqSMProxy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqInteractivePropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqInteractivePropertyWidget.data,
      qt_meta_data_pqInteractivePropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqInteractivePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqInteractivePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqInteractivePropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqInteractivePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void pqInteractivePropertyWidget::widgetVisibilityToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqInteractivePropertyWidget::widgetVisibilityUpdated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqInteractivePropertyWidget::startInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void pqInteractivePropertyWidget::interaction()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pqInteractivePropertyWidget::endInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void pqInteractivePropertyWidget::dummySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
