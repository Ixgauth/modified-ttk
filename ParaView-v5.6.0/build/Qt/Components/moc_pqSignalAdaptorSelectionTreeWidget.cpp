/****************************************************************************
** Meta object code from reading C++ file 'pqSignalAdaptorSelectionTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSignalAdaptorSelectionTreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSignalAdaptorSelectionTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSignalAdaptorSelectionTreeWidget_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSignalAdaptorSelectionTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSignalAdaptorSelectionTreeWidget_t qt_meta_stringdata_pqSignalAdaptorSelectionTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "pqSignalAdaptorSelectionTreeW..."
QT_MOC_LITERAL(1, 35, 13), // "valuesChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 9), // "setValues"
QT_MOC_LITERAL(4, 60, 23), // "QList<QList<QVariant> >"
QT_MOC_LITERAL(5, 84, 6), // "values"
QT_MOC_LITERAL(6, 91, 13) // "domainChanged"

    },
    "pqSignalAdaptorSelectionTreeWidget\0"
    "valuesChanged\0\0setValues\0"
    "QList<QList<QVariant> >\0values\0"
    "domainChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSignalAdaptorSelectionTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 4, 0x0009510b,

       0        // eod
};

void pqSignalAdaptorSelectionTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSignalAdaptorSelectionTreeWidget *_t = static_cast<pqSignalAdaptorSelectionTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valuesChanged(); break;
        case 1: _t->setValues((*reinterpret_cast< const QList<QList<QVariant> >(*)>(_a[1]))); break;
        case 2: _t->domainChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<QVariant> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSignalAdaptorSelectionTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSignalAdaptorSelectionTreeWidget::valuesChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<QVariant> > >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqSignalAdaptorSelectionTreeWidget *_t = static_cast<pqSignalAdaptorSelectionTreeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QList<QVariant> >*>(_v) = _t->values(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqSignalAdaptorSelectionTreeWidget *_t = static_cast<pqSignalAdaptorSelectionTreeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValues(*reinterpret_cast< QList<QList<QVariant> >*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqSignalAdaptorSelectionTreeWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSignalAdaptorSelectionTreeWidget.data,
      qt_meta_data_pqSignalAdaptorSelectionTreeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSignalAdaptorSelectionTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSignalAdaptorSelectionTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSignalAdaptorSelectionTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqSignalAdaptorSelectionTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
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
void pqSignalAdaptorSelectionTreeWidget::valuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
