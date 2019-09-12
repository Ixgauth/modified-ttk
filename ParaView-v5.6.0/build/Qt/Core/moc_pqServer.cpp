/****************************************************************************
** Meta object code from reading C++ file 'pqServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqServer_t {
    QByteArrayData data[23];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqServer_t qt_meta_stringdata_pqServer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "pqServer"
QT_MOC_LITERAL(1, 9, 11), // "nameChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(4, 48, 24), // "fiveMinuteTimeoutWarning"
QT_MOC_LITERAL(5, 73, 19), // "finalTimeoutWarning"
QT_MOC_LITERAL(6, 93, 22), // "serverSideDisconnected"
QT_MOC_LITERAL(7, 116, 19), // "sentFromOtherClient"
QT_MOC_LITERAL(8, 136, 9), // "pqServer*"
QT_MOC_LITERAL(9, 146, 13), // "vtkSMMessage*"
QT_MOC_LITERAL(10, 160, 3), // "msg"
QT_MOC_LITERAL(11, 164, 19), // "triggeredMasterUser"
QT_MOC_LITERAL(12, 184, 17), // "triggeredUserName"
QT_MOC_LITERAL(13, 202, 8), // "QString&"
QT_MOC_LITERAL(14, 211, 24), // "triggeredUserListChanged"
QT_MOC_LITERAL(15, 236, 19), // "triggerFollowCamera"
QT_MOC_LITERAL(16, 256, 18), // "sendToOtherClients"
QT_MOC_LITERAL(17, 275, 9), // "heartBeat"
QT_MOC_LITERAL(18, 285, 23), // "updateRemainingLifeTime"
QT_MOC_LITERAL(19, 309, 25), // "processServerNotification"
QT_MOC_LITERAL(20, 335, 28), // "onCollaborationCommunication"
QT_MOC_LITERAL(21, 364, 10), // "vtkObject*"
QT_MOC_LITERAL(22, 375, 16) // "onConnectionLost"

    },
    "pqServer\0nameChanged\0\0pqServerManagerModelItem*\0"
    "fiveMinuteTimeoutWarning\0finalTimeoutWarning\0"
    "serverSideDisconnected\0sentFromOtherClient\0"
    "pqServer*\0vtkSMMessage*\0msg\0"
    "triggeredMasterUser\0triggeredUserName\0"
    "QString&\0triggeredUserListChanged\0"
    "triggerFollowCamera\0sendToOtherClients\0"
    "heartBeat\0updateRemainingLifeTime\0"
    "processServerNotification\0"
    "onCollaborationCommunication\0vtkObject*\0"
    "onConnectionLost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,
       5,    0,   93,    2, 0x06 /* Public */,
       6,    0,   94,    2, 0x06 /* Public */,
       7,    2,   95,    2, 0x06 /* Public */,
      11,    1,  100,    2, 0x06 /* Public */,
      12,    2,  103,    2, 0x06 /* Public */,
      14,    0,  108,    2, 0x06 /* Public */,
      15,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  112,    2, 0x0a /* Public */,
      17,    0,  115,    2, 0x09 /* Protected */,
      18,    0,  116,    2, 0x09 /* Protected */,
      19,    0,  117,    2, 0x09 /* Protected */,
      20,    4,  118,    2, 0x09 /* Protected */,
      22,    4,  127,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,   10,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,    2,

       0        // eod
};

void pqServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqServer *_t = static_cast<pqServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 1: _t->fiveMinuteTimeoutWarning(); break;
        case 2: _t->finalTimeoutWarning(); break;
        case 3: _t->serverSideDisconnected(); break;
        case 4: _t->sentFromOtherClient((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< vtkSMMessage*(*)>(_a[2]))); break;
        case 5: _t->triggeredMasterUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->triggeredUserName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->triggeredUserListChanged(); break;
        case 8: _t->triggerFollowCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->sendToOtherClients((*reinterpret_cast< vtkSMMessage*(*)>(_a[1]))); break;
        case 10: _t->heartBeat(); break;
        case 11: _t->updateRemainingLifeTime(); break;
        case 12: _t->processServerNotification(); break;
        case 13: _t->onCollaborationCommunication((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 14: _t->onConnectionLost((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqServerManagerModelItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqServer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqServer::*_t)(pqServerManagerModelItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::fiveMinuteTimeoutWarning)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::finalTimeoutWarning)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::serverSideDisconnected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)(pqServer * , vtkSMMessage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::sentFromOtherClient)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::triggeredMasterUser)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)(int , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::triggeredUserName)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::triggeredUserListChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (pqServer::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServer::triggerFollowCamera)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject pqServer::staticMetaObject = {
    { &pqServerManagerModelItem::staticMetaObject, qt_meta_stringdata_pqServer.data,
      qt_meta_data_pqServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqServer.stringdata0))
        return static_cast<void*>(this);
    return pqServerManagerModelItem::qt_metacast(_clname);
}

int pqServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqServerManagerModelItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void pqServer::nameChanged(pqServerManagerModelItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqServer::fiveMinuteTimeoutWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqServer::finalTimeoutWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void pqServer::serverSideDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pqServer::sentFromOtherClient(pqServer * _t1, vtkSMMessage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqServer::triggeredMasterUser(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqServer::triggeredUserName(int _t1, QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqServer::triggeredUserListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void pqServer::triggerFollowCamera(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
