/****************************************************************************
** Meta object code from reading C++ file 'pqColorChooserButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqColorChooserButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorChooserButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqColorChooserButton_t {
    QByteArrayData data[12];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqColorChooserButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqColorChooserButton_t qt_meta_stringdata_pqColorChooserButton = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqColorChooserButton"
QT_MOC_LITERAL(1, 21, 18), // "chosenColorChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "validColorChosen"
QT_MOC_LITERAL(4, 58, 14), // "setChosenColor"
QT_MOC_LITERAL(5, 73, 18), // "setChosenColorRgbF"
QT_MOC_LITERAL(6, 92, 19), // "setChosenColorRgbaF"
QT_MOC_LITERAL(7, 112, 11), // "chooseColor"
QT_MOC_LITERAL(8, 124, 11), // "chosenColor"
QT_MOC_LITERAL(9, 136, 15), // "chosenColorRgbF"
QT_MOC_LITERAL(10, 152, 16), // "chosenColorRgbaF"
QT_MOC_LITERAL(11, 169, 16) // "showAlphaChannel"

    },
    "pqColorChooserButton\0chosenColorChanged\0"
    "\0validColorChosen\0setChosenColor\0"
    "setChosenColorRgbF\0setChosenColorRgbaF\0"
    "chooseColor\0chosenColor\0chosenColorRgbF\0"
    "chosenColorRgbaF\0showAlphaChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqColorChooserButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QVariantList, 0x00095103,
      10, QMetaType::QVariantList, 0x00095103,
      11, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqColorChooserButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqColorChooserButton *_t = static_cast<pqColorChooserButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chosenColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->validColorChosen((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setChosenColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setChosenColorRgbF((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 4: _t->setChosenColorRgbaF((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 5: _t->chooseColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqColorChooserButton::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqColorChooserButton::chosenColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqColorChooserButton::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqColorChooserButton::validColorChosen)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqColorChooserButton *_t = static_cast<pqColorChooserButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->chosenColor(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->chosenColorRgbF(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->chosenColorRgbaF(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showAlphaChannel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqColorChooserButton *_t = static_cast<pqColorChooserButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChosenColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setChosenColorRgbF(*reinterpret_cast< QVariantList*>(_v)); break;
        case 2: _t->setChosenColorRgbaF(*reinterpret_cast< QVariantList*>(_v)); break;
        case 3: _t->setShowAlphaChannel(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqColorChooserButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_pqColorChooserButton.data,
      qt_meta_data_pqColorChooserButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqColorChooserButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqColorChooserButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorChooserButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int pqColorChooserButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqColorChooserButton::chosenColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqColorChooserButton::validColorChosen(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
