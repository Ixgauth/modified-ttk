/****************************************************************************
** Meta object code from reading C++ file 'pqBackgroundEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqBackgroundEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqBackgroundEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqBackgroundEditorWidget_t {
    QByteArrayData data[13];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqBackgroundEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqBackgroundEditorWidget_t qt_meta_stringdata_pqBackgroundEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "pqBackgroundEditorWidget"
QT_MOC_LITERAL(1, 25, 25), // "gradientBackgroundChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 22), // "imageBackgroundChanged"
QT_MOC_LITERAL(4, 75, 7), // "setView"
QT_MOC_LITERAL(5, 83, 7), // "pqView*"
QT_MOC_LITERAL(6, 91, 7), // "newView"
QT_MOC_LITERAL(7, 99, 33), // "currentIndexChangedBackground..."
QT_MOC_LITERAL(8, 133, 4), // "type"
QT_MOC_LITERAL(9, 138, 26), // "clickedRestoreDefaultColor"
QT_MOC_LITERAL(10, 165, 27), // "clickedRestoreDefaultColor2"
QT_MOC_LITERAL(11, 193, 18), // "gradientBackground"
QT_MOC_LITERAL(12, 212, 15) // "imageBackground"

    },
    "pqBackgroundEditorWidget\0"
    "gradientBackgroundChanged\0\0"
    "imageBackgroundChanged\0setView\0pqView*\0"
    "newView\0currentIndexChangedBackgroundType\0"
    "type\0clickedRestoreDefaultColor\0"
    "clickedRestoreDefaultColor2\0"
    "gradientBackground\0imageBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqBackgroundEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x09 /* Protected */,
       9,    0,   52,    2, 0x09 /* Protected */,
      10,    0,   53,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqBackgroundEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqBackgroundEditorWidget *_t = static_cast<pqBackgroundEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gradientBackgroundChanged(); break;
        case 1: _t->imageBackgroundChanged(); break;
        case 2: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 3: _t->currentIndexChangedBackgroundType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clickedRestoreDefaultColor(); break;
        case 5: _t->clickedRestoreDefaultColor2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqBackgroundEditorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqBackgroundEditorWidget::gradientBackgroundChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqBackgroundEditorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqBackgroundEditorWidget::imageBackgroundChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqBackgroundEditorWidget *_t = static_cast<pqBackgroundEditorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->gradientBackground(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->imageBackground(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqBackgroundEditorWidget *_t = static_cast<pqBackgroundEditorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGradientBackground(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setImageBackground(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqBackgroundEditorWidget::staticMetaObject = {
    { &pqPropertyGroupWidget::staticMetaObject, qt_meta_stringdata_pqBackgroundEditorWidget.data,
      qt_meta_data_pqBackgroundEditorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqBackgroundEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqBackgroundEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqBackgroundEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyGroupWidget::qt_metacast(_clname);
}

int pqBackgroundEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyGroupWidget::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqBackgroundEditorWidget::gradientBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqBackgroundEditorWidget::imageBackgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
