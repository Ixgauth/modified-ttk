/****************************************************************************
** Meta object code from reading C++ file 'pqServerManagerObserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqServerManagerObserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerManagerObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqServerManagerObserver_t {
    QByteArrayData data[27];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqServerManagerObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqServerManagerObserver_t qt_meta_stringdata_pqServerManagerObserver = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqServerManagerObserver"
QT_MOC_LITERAL(1, 24, 33), // "compoundProxyDefinitionRegist..."
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 4), // "name"
QT_MOC_LITERAL(4, 64, 35), // "compoundProxyDefinitionUnRegi..."
QT_MOC_LITERAL(5, 100, 15), // "proxyRegistered"
QT_MOC_LITERAL(6, 116, 5), // "group"
QT_MOC_LITERAL(7, 122, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(8, 134, 5), // "proxy"
QT_MOC_LITERAL(9, 140, 17), // "proxyUnRegistered"
QT_MOC_LITERAL(10, 158, 17), // "connectionCreated"
QT_MOC_LITERAL(11, 176, 9), // "vtkIdType"
QT_MOC_LITERAL(12, 186, 12), // "connectionId"
QT_MOC_LITERAL(13, 199, 16), // "connectionClosed"
QT_MOC_LITERAL(14, 216, 11), // "stateLoaded"
QT_MOC_LITERAL(15, 228, 16), // "vtkPVXMLElement*"
QT_MOC_LITERAL(16, 245, 4), // "root"
QT_MOC_LITERAL(17, 250, 18), // "vtkSMProxyLocator*"
QT_MOC_LITERAL(18, 269, 7), // "locator"
QT_MOC_LITERAL(19, 277, 10), // "stateSaved"
QT_MOC_LITERAL(20, 288, 10), // "vtkObject*"
QT_MOC_LITERAL(21, 299, 6), // "object"
QT_MOC_LITERAL(22, 306, 1), // "e"
QT_MOC_LITERAL(23, 308, 10), // "clientData"
QT_MOC_LITERAL(24, 319, 8), // "callData"
QT_MOC_LITERAL(25, 328, 11), // "vtkCommand*"
QT_MOC_LITERAL(26, 340, 7) // "command"

    },
    "pqServerManagerObserver\0"
    "compoundProxyDefinitionRegistered\0\0"
    "name\0compoundProxyDefinitionUnRegistered\0"
    "proxyRegistered\0group\0vtkSMProxy*\0"
    "proxy\0proxyUnRegistered\0connectionCreated\0"
    "vtkIdType\0connectionId\0connectionClosed\0"
    "stateLoaded\0vtkPVXMLElement*\0root\0"
    "vtkSMProxyLocator*\0locator\0stateSaved\0"
    "vtkObject*\0object\0e\0clientData\0callData\0"
    "vtkCommand*\0command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqServerManagerObserver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    3,   90,    2, 0x06 /* Public */,
       9,    3,   97,    2, 0x06 /* Public */,
      10,    1,  104,    2, 0x06 /* Public */,
      13,    1,  107,    2, 0x06 /* Public */,
      14,    2,  110,    2, 0x06 /* Public */,
      19,    1,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,  118,    2, 0x08 /* Private */,
       9,    5,  129,    2, 0x08 /* Private */,
      10,    4,  140,    2, 0x08 /* Private */,
      13,    4,  149,    2, 0x08 /* Private */,
      14,    4,  158,    2, 0x08 /* Private */,
      19,    4,  167,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    6,    3,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    6,    3,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar, 0x80000000 | 25,   21,   22,   23,   24,   26,
    QMetaType::Void, 0x80000000 | 20, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar, 0x80000000 | 25,    2,    2,    2,   24,    2,
    QMetaType::Void, 0x80000000 | 20, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,   24,
    QMetaType::Void, 0x80000000 | 20, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,   24,
    QMetaType::Void, 0x80000000 | 20, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,   24,
    QMetaType::Void, 0x80000000 | 20, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,    2,    2,    2,   24,

       0        // eod
};

void pqServerManagerObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqServerManagerObserver *_t = static_cast<pqServerManagerObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->compoundProxyDefinitionRegistered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->compoundProxyDefinitionUnRegistered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->proxyRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 3: _t->proxyUnRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 4: _t->connectionCreated((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 5: _t->connectionClosed((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 6: _t->stateLoaded((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        case 7: _t->stateSaved((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 8: _t->proxyRegistered((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        case 9: _t->proxyUnRegistered((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< vtkCommand*(*)>(_a[5]))); break;
        case 10: _t->connectionCreated((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 11: _t->connectionClosed((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 12: _t->stateLoaded((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 13: _t->stateSaved((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqServerManagerObserver::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::compoundProxyDefinitionRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::compoundProxyDefinitionUnRegistered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(const QString & , const QString & , vtkSMProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::proxyRegistered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(const QString & , const QString & , vtkSMProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::proxyUnRegistered)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::connectionCreated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::connectionClosed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(vtkPVXMLElement * , vtkSMProxyLocator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::stateLoaded)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (pqServerManagerObserver::*_t)(vtkPVXMLElement * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerManagerObserver::stateSaved)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject pqServerManagerObserver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqServerManagerObserver.data,
      qt_meta_data_pqServerManagerObserver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqServerManagerObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqServerManagerObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerManagerObserver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqServerManagerObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void pqServerManagerObserver::compoundProxyDefinitionRegistered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqServerManagerObserver::compoundProxyDefinitionUnRegistered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqServerManagerObserver::proxyRegistered(const QString & _t1, const QString & _t2, vtkSMProxy * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqServerManagerObserver::proxyUnRegistered(const QString & _t1, const QString & _t2, vtkSMProxy * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqServerManagerObserver::connectionCreated(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void pqServerManagerObserver::connectionClosed(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void pqServerManagerObserver::stateLoaded(vtkPVXMLElement * _t1, vtkSMProxyLocator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void pqServerManagerObserver::stateSaved(vtkPVXMLElement * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
