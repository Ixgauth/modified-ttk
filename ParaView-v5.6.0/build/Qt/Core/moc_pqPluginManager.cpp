/****************************************************************************
** Meta object code from reading C++ file 'pqPluginManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqPluginManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPluginManager_t {
    QByteArrayData data[9];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPluginManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPluginManager_t qt_meta_stringdata_pqPluginManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqPluginManager"
QT_MOC_LITERAL(1, 16, 14), // "pluginsUpdated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "requiredPluginsNotLoaded"
QT_MOC_LITERAL(4, 57, 9), // "pqServer*"
QT_MOC_LITERAL(5, 67, 23), // "loadPluginsFromSettings"
QT_MOC_LITERAL(6, 91, 17), // "onServerConnected"
QT_MOC_LITERAL(7, 109, 20), // "onServerDisconnected"
QT_MOC_LITERAL(8, 130, 17) // "updatePluginLists"

    },
    "pqPluginManager\0pluginsUpdated\0\0"
    "requiredPluginsNotLoaded\0pqServer*\0"
    "loadPluginsFromSettings\0onServerConnected\0"
    "onServerDisconnected\0updatePluginLists"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPluginManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x09 /* Protected */,
       6,    1,   51,    2, 0x09 /* Protected */,
       7,    1,   54,    2, 0x09 /* Protected */,
       8,    0,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

       0        // eod
};

void pqPluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPluginManager *_t = static_cast<pqPluginManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginsUpdated(); break;
        case 1: _t->requiredPluginsNotLoaded((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 2: _t->loadPluginsFromSettings((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->onServerConnected((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->onServerDisconnected((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 5: _t->updatePluginLists(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPluginManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPluginManager::pluginsUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqPluginManager::*_t)(pqServer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPluginManager::requiredPluginsNotLoaded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqPluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPluginManager.data,
      qt_meta_data_pqPluginManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqPluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void pqPluginManager::pluginsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqPluginManager::requiredPluginsNotLoaded(pqServer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
