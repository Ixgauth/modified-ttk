/****************************************************************************
** Meta object code from reading C++ file 'pqPythonManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Python/pqPythonManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPythonManager_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPythonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPythonManager_t qt_meta_stringdata_pqPythonManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqPythonManager"
QT_MOC_LITERAL(1, 16, 13), // "executeScript"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "filename"
QT_MOC_LITERAL(4, 40, 22), // "executeScriptAndRender"
QT_MOC_LITERAL(5, 63, 9), // "editMacro"
QT_MOC_LITERAL(6, 73, 8), // "fileName"
QT_MOC_LITERAL(7, 82, 16), // "onRemovingServer"
QT_MOC_LITERAL(8, 99, 9), // "pqServer*"
QT_MOC_LITERAL(9, 109, 6) // "server"

    },
    "pqPythonManager\0executeScript\0\0filename\0"
    "executeScriptAndRender\0editMacro\0"
    "fileName\0onRemovingServer\0pqServer*\0"
    "server"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPythonManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void pqPythonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPythonManager *_t = static_cast<pqPythonManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->executeScriptAndRender((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->editMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onRemovingServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqPythonManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPythonManager.data,
      qt_meta_data_pqPythonManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPythonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPythonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqPythonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
