/****************************************************************************
** Meta object code from reading C++ file 'pqPythonMacroSupervisor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Python/pqPythonMacroSupervisor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPythonMacroSupervisor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPythonMacroSupervisor_t {
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPythonMacroSupervisor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPythonMacroSupervisor_t qt_meta_stringdata_pqPythonMacroSupervisor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqPythonMacroSupervisor"
QT_MOC_LITERAL(1, 24, 22), // "executeScriptRequested"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "filename"
QT_MOC_LITERAL(4, 57, 11), // "onEditMacro"
QT_MOC_LITERAL(5, 69, 8), // "addMacro"
QT_MOC_LITERAL(6, 78, 9), // "macroName"
QT_MOC_LITERAL(7, 88, 11), // "removeMacro"
QT_MOC_LITERAL(8, 100, 15), // "updateMacroList"
QT_MOC_LITERAL(9, 116, 16), // "onMacroTriggered"
QT_MOC_LITERAL(10, 133, 22), // "onDeleteMacroTriggered"
QT_MOC_LITERAL(11, 156, 20) // "onEditMacroTriggered"

    },
    "pqPythonMacroSupervisor\0executeScriptRequested\0"
    "\0filename\0onEditMacro\0addMacro\0macroName\0"
    "removeMacro\0updateMacroList\0"
    "onMacroTriggered\0onDeleteMacroTriggered\0"
    "onEditMacroTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPythonMacroSupervisor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   65,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x09 /* Protected */,
      10,    0,   78,    2, 0x09 /* Protected */,
      11,    0,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqPythonMacroSupervisor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPythonMacroSupervisor *_t = static_cast<pqPythonMacroSupervisor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeScriptRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onEditMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addMacro((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->addMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeMacro((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateMacroList(); break;
        case 6: _t->onMacroTriggered(); break;
        case 7: _t->onDeleteMacroTriggered(); break;
        case 8: _t->onEditMacroTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPythonMacroSupervisor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPythonMacroSupervisor::executeScriptRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqPythonMacroSupervisor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPythonMacroSupervisor::onEditMacro)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqPythonMacroSupervisor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPythonMacroSupervisor.data,
      qt_meta_data_pqPythonMacroSupervisor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPythonMacroSupervisor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPythonMacroSupervisor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPythonMacroSupervisor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqPythonMacroSupervisor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void pqPythonMacroSupervisor::executeScriptRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPythonMacroSupervisor::onEditMacro(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
