/****************************************************************************
** Meta object code from reading C++ file 'pqFontPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqFontPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFontPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFontPropertyWidget_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFontPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFontPropertyWidget_t qt_meta_stringdata_pqFontPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqFontPropertyWidget"
QT_MOC_LITERAL(1, 21, 20), // "justificationChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "QString&"
QT_MOC_LITERAL(4, 52, 23), // "changeJustificationIcon"
QT_MOC_LITERAL(5, 76, 8), // "QAction*"
QT_MOC_LITERAL(6, 85, 19), // "onFontFamilyChanged"
QT_MOC_LITERAL(7, 105, 13) // "justification"

    },
    "pqFontPropertyWidget\0justificationChanged\0"
    "\0QString&\0changeJustificationIcon\0"
    "QAction*\0onFontFamilyChanged\0justification"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFontPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x09 /* Protected */,
       6,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,

       0        // eod
};

void pqFontPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFontPropertyWidget *_t = static_cast<pqFontPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->justificationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeJustificationIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->onFontFamilyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqFontPropertyWidget::*_t)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqFontPropertyWidget::justificationChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqFontPropertyWidget *_t = static_cast<pqFontPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->justification(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqFontPropertyWidget *_t = static_cast<pqFontPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setJustification(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqFontPropertyWidget::staticMetaObject = {
    { &pqPropertyGroupWidget::staticMetaObject, qt_meta_stringdata_pqFontPropertyWidget.data,
      qt_meta_data_pqFontPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFontPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFontPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFontPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyGroupWidget::qt_metacast(_clname);
}

int pqFontPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyGroupWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
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
void pqFontPropertyWidget::justificationChanged(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
