/****************************************************************************
** Meta object code from reading C++ file 'pqHelpWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqHelpWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqHelpWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqHelpWindow_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqHelpWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqHelpWindow_t qt_meta_stringdata_pqHelpWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "pqHelpWindow"
QT_MOC_LITERAL(1, 13, 12), // "helpWarnings"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "showPage"
QT_MOC_LITERAL(4, 36, 3), // "url"
QT_MOC_LITERAL(5, 40, 12), // "showHomePage"
QT_MOC_LITERAL(6, 53, 14), // "namespace_name"
QT_MOC_LITERAL(7, 68, 6) // "search"

    },
    "pqHelpWindow\0helpWarnings\0\0showPage\0"
    "url\0showHomePage\0namespace_name\0search"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqHelpWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   42,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void pqHelpWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqHelpWindow *_t = static_cast<pqHelpWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->helpWarnings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showPage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->showHomePage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->search(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqHelpWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqHelpWindow::helpWarnings)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqHelpWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_pqHelpWindow.data,
      qt_meta_data_pqHelpWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqHelpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqHelpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqHelpWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int pqHelpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void pqHelpWindow::helpWarnings(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
