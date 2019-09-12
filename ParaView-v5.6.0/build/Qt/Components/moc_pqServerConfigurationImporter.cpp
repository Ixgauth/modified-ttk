/****************************************************************************
** Meta object code from reading C++ file 'pqServerConfigurationImporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqServerConfigurationImporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqServerConfigurationImporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqServerConfigurationImporter_t {
    QByteArrayData data[12];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqServerConfigurationImporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqServerConfigurationImporter_t qt_meta_stringdata_pqServerConfigurationImporter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "pqServerConfigurationImporter"
QT_MOC_LITERAL(1, 30, 17), // "incrementalUpdate"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "configurationsUpdated"
QT_MOC_LITERAL(4, 71, 22), // "authenticationRequired"
QT_MOC_LITERAL(5, 94, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 109, 15), // "QAuthenticator*"
QT_MOC_LITERAL(7, 125, 19), // "abortFetchTriggered"
QT_MOC_LITERAL(8, 145, 7), // "message"
QT_MOC_LITERAL(9, 153, 19), // "fetchConfigurations"
QT_MOC_LITERAL(10, 173, 10), // "abortFetch"
QT_MOC_LITERAL(11, 184, 15) // "readCurrentData"

    },
    "pqServerConfigurationImporter\0"
    "incrementalUpdate\0\0configurationsUpdated\0"
    "authenticationRequired\0QNetworkReply*\0"
    "QAuthenticator*\0abortFetchTriggered\0"
    "message\0fetchConfigurations\0abortFetch\0"
    "readCurrentData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqServerConfigurationImporter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    2,   56,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   65,    2, 0x0a /* Public */,
      10,    0,   66,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqServerConfigurationImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqServerConfigurationImporter *_t = static_cast<pqServerConfigurationImporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->incrementalUpdate(); break;
        case 1: _t->configurationsUpdated(); break;
        case 2: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 3: _t->abortFetchTriggered(); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fetchConfigurations(); break;
        case 6: _t->abortFetch(); break;
        case 7: _t->readCurrentData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqServerConfigurationImporter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerConfigurationImporter::incrementalUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqServerConfigurationImporter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerConfigurationImporter::configurationsUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqServerConfigurationImporter::*_t)(QNetworkReply * , QAuthenticator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerConfigurationImporter::authenticationRequired)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqServerConfigurationImporter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerConfigurationImporter::abortFetchTriggered)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqServerConfigurationImporter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqServerConfigurationImporter::message)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject pqServerConfigurationImporter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqServerConfigurationImporter.data,
      qt_meta_data_pqServerConfigurationImporter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqServerConfigurationImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqServerConfigurationImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqServerConfigurationImporter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqServerConfigurationImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void pqServerConfigurationImporter::incrementalUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqServerConfigurationImporter::configurationsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqServerConfigurationImporter::authenticationRequired(QNetworkReply * _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqServerConfigurationImporter::abortFetchTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pqServerConfigurationImporter::message(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
