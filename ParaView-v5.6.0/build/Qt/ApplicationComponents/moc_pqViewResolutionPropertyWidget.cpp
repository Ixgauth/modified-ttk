/****************************************************************************
** Meta object code from reading C++ file 'pqViewResolutionPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqViewResolutionPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqViewResolutionPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqViewResolutionPropertyWidget_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqViewResolutionPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqViewResolutionPropertyWidget_t qt_meta_stringdata_pqViewResolutionPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "pqViewResolutionPropertyWidget"
QT_MOC_LITERAL(1, 31, 20), // "highlightResetButton"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 14), // "clearHighlight"
QT_MOC_LITERAL(4, 68, 18), // "resetButtonClicked"
QT_MOC_LITERAL(5, 87, 5), // "scale"
QT_MOC_LITERAL(6, 93, 6), // "factor"
QT_MOC_LITERAL(7, 100, 15), // "widthTextEdited"
QT_MOC_LITERAL(8, 116, 16), // "heightTextEdited"
QT_MOC_LITERAL(9, 133, 22) // "lockAspectRatioToggled"

    },
    "pqViewResolutionPropertyWidget\0"
    "highlightResetButton\0\0clearHighlight\0"
    "resetButtonClicked\0scale\0factor\0"
    "widthTextEdited\0heightTextEdited\0"
    "lockAspectRatioToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqViewResolutionPropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void pqViewResolutionPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqViewResolutionPropertyWidget *_t = static_cast<pqViewResolutionPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highlightResetButton(); break;
        case 1: _t->clearHighlight(); break;
        case 2: _t->resetButtonClicked(); break;
        case 3: _t->scale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->widthTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->heightTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->lockAspectRatioToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqViewResolutionPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqViewResolutionPropertyWidget::highlightResetButton)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqViewResolutionPropertyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqViewResolutionPropertyWidget::clearHighlight)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqViewResolutionPropertyWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqViewResolutionPropertyWidget.data,
      qt_meta_data_pqViewResolutionPropertyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqViewResolutionPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqViewResolutionPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqViewResolutionPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqViewResolutionPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqViewResolutionPropertyWidget::highlightResetButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqViewResolutionPropertyWidget::clearHighlight()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
