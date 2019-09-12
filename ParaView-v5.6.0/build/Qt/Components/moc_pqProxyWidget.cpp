/****************************************************************************
** Meta object code from reading C++ file 'pqProxyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqProxyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProxyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqProxyWidget_t {
    QByteArrayData data[16];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqProxyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqProxyWidget_t qt_meta_stringdata_pqProxyWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "pqProxyWidget"
QT_MOC_LITERAL(1, 14, 15), // "changeAvailable"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "changeFinished"
QT_MOC_LITERAL(4, 46, 15), // "restartRequired"
QT_MOC_LITERAL(5, 62, 13), // "filterWidgets"
QT_MOC_LITERAL(6, 76, 13), // "show_advanced"
QT_MOC_LITERAL(7, 90, 10), // "filterText"
QT_MOC_LITERAL(8, 101, 5), // "apply"
QT_MOC_LITERAL(9, 107, 5), // "reset"
QT_MOC_LITERAL(10, 113, 7), // "setView"
QT_MOC_LITERAL(11, 121, 7), // "pqView*"
QT_MOC_LITERAL(12, 129, 11), // "updatePanel"
QT_MOC_LITERAL(13, 141, 15), // "restoreDefaults"
QT_MOC_LITERAL(14, 157, 14), // "saveAsDefaults"
QT_MOC_LITERAL(15, 172, 16) // "onChangeFinished"

    },
    "pqProxyWidget\0changeAvailable\0\0"
    "changeFinished\0restartRequired\0"
    "filterWidgets\0show_advanced\0filterText\0"
    "apply\0reset\0setView\0pqView*\0updatePanel\0"
    "restoreDefaults\0saveAsDefaults\0"
    "onChangeFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqProxyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   82,    2, 0x0a /* Public */,
       5,    1,   87,    2, 0x2a /* Public | MethodCloned */,
       5,    0,   90,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   91,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    1,   93,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,
      14,    0,   98,    2, 0x0a /* Public */,
      15,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString,    6,    7,
    QMetaType::Bool, QMetaType::Bool,    6,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqProxyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqProxyWidget *_t = static_cast<pqProxyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeAvailable(); break;
        case 1: _t->changeFinished(); break;
        case 2: _t->restartRequired(); break;
        case 3: { bool _r = _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->filterWidgets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->apply(); break;
        case 7: _t->reset(); break;
        case 8: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 9: _t->updatePanel(); break;
        case 10: { bool _r = _t->restoreDefaults();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->saveAsDefaults(); break;
        case 12: _t->onChangeFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqProxyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProxyWidget::changeAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqProxyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProxyWidget::changeFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqProxyWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqProxyWidget::restartRequired)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject pqProxyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProxyWidget.data,
      qt_meta_data_pqProxyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqProxyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqProxyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqProxyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqProxyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void pqProxyWidget::changeAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqProxyWidget::changeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqProxyWidget::restartRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
