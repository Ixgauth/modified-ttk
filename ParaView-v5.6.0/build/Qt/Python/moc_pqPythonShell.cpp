/****************************************************************************
** Meta object code from reading C++ file 'pqPythonShell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Python/pqPythonShell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonShell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPythonShell_t {
    QByteArrayData data[18];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPythonShell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPythonShell_t qt_meta_stringdata_pqPythonShell = {
    {
QT_MOC_LITERAL(0, 0, 13), // "pqPythonShell"
QT_MOC_LITERAL(1, 14, 9), // "executing"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "starting"
QT_MOC_LITERAL(4, 34, 12), // "printMessage"
QT_MOC_LITERAL(5, 47, 5), // "clear"
QT_MOC_LITERAL(6, 53, 13), // "executeScript"
QT_MOC_LITERAL(7, 67, 5), // "reset"
QT_MOC_LITERAL(8, 73, 11), // "isExecuting"
QT_MOC_LITERAL(9, 85, 11), // "printString"
QT_MOC_LITERAL(10, 97, 9), // "PrintMode"
QT_MOC_LITERAL(11, 107, 4), // "mode"
QT_MOC_LITERAL(12, 112, 11), // "setPreamble"
QT_MOC_LITERAL(13, 124, 10), // "statements"
QT_MOC_LITERAL(14, 135, 8), // "preamble"
QT_MOC_LITERAL(15, 144, 10), // "initialize"
QT_MOC_LITERAL(16, 155, 10), // "pushScript"
QT_MOC_LITERAL(17, 166, 9) // "runScript"

    },
    "pqPythonShell\0executing\0\0starting\0"
    "printMessage\0clear\0executeScript\0reset\0"
    "isExecuting\0printString\0PrintMode\0"
    "mode\0setPreamble\0statements\0preamble\0"
    "initialize\0pushScript\0runScript"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPythonShell[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   82,    2, 0x0a /* Public */,
       5,    0,   85,    2, 0x0a /* Public */,
       6,    1,   86,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    2,   91,    2, 0x0a /* Public */,
       9,    1,   96,    2, 0x2a /* Public | MethodCloned */,
      12,    1,   99,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    1,  104,    2, 0x09 /* Protected */,
      17,    0,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    2,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void pqPythonShell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPythonShell *_t = static_cast<pqPythonShell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->printMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->executeScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->reset(); break;
        case 5: { bool _r = _t->isExecuting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->printString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< PrintMode(*)>(_a[2]))); break;
        case 7: _t->printString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setPreamble((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 9: _t->preamble(); break;
        case 10: _t->initialize(); break;
        case 11: _t->pushScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->runScript(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPythonShell::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPythonShell::executing)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqPythonShell::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqPythonShell.data,
      qt_meta_data_pqPythonShell,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPythonShell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPythonShell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonShell.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqPythonShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void pqPythonShell::executing(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
