/****************************************************************************
** Meta object code from reading C++ file 'pqPythonDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Python/pqPythonDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPythonDialog_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPythonDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPythonDialog_t qt_meta_stringdata_pqPythonDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "pqPythonDialog"
QT_MOC_LITERAL(1, 15, 9), // "runString"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "script"
QT_MOC_LITERAL(4, 33, 5), // "print"
QT_MOC_LITERAL(5, 39, 3), // "msg"
QT_MOC_LITERAL(6, 43, 9), // "runScript"
QT_MOC_LITERAL(7, 53, 5), // "shell"
QT_MOC_LITERAL(8, 59, 14), // "pqPythonShell*"
QT_MOC_LITERAL(9, 74, 12) // "clearConsole"

    },
    "pqPythonDialog\0runString\0\0script\0print\0"
    "msg\0runScript\0shell\0pqPythonShell*\0"
    "clearConsole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPythonDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QStringList,    2,
    0x80000000 | 8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqPythonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPythonDialog *_t = static_cast<pqPythonDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->print((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->runScript((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: { pqPythonShell* _r = _t->shell();
            if (_a[0]) *reinterpret_cast< pqPythonShell**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->runScript(); break;
        case 5: _t->clearConsole(); break;
        default: ;
        }
    }
}

const QMetaObject pqPythonDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPythonDialog.data,
      qt_meta_data_pqPythonDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPythonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPythonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqPythonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
