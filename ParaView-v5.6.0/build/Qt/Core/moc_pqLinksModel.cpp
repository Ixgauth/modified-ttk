/****************************************************************************
** Meta object code from reading C++ file 'pqLinksModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqLinksModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLinksModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqLinksModel_t {
    QByteArrayData data[24];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqLinksModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqLinksModel_t qt_meta_stringdata_pqLinksModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "pqLinksModel"
QT_MOC_LITERAL(1, 13, 9), // "linkAdded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "linkType"
QT_MOC_LITERAL(4, 33, 11), // "linkRemoved"
QT_MOC_LITERAL(5, 45, 4), // "name"
QT_MOC_LITERAL(6, 50, 16), // "onSessionCreated"
QT_MOC_LITERAL(7, 67, 9), // "pqServer*"
QT_MOC_LITERAL(8, 77, 16), // "onSessionRemoved"
QT_MOC_LITERAL(9, 94, 13), // "onStateLoaded"
QT_MOC_LITERAL(10, 108, 16), // "vtkPVXMLElement*"
QT_MOC_LITERAL(11, 125, 4), // "root"
QT_MOC_LITERAL(12, 130, 18), // "vtkSMProxyLocator*"
QT_MOC_LITERAL(13, 149, 7), // "locator"
QT_MOC_LITERAL(14, 157, 12), // "onStateSaved"
QT_MOC_LITERAL(15, 170, 25), // "createInteractiveViewLink"
QT_MOC_LITERAL(16, 196, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(17, 208, 11), // "displayView"
QT_MOC_LITERAL(18, 220, 10), // "linkedView"
QT_MOC_LITERAL(19, 231, 4), // "xPos"
QT_MOC_LITERAL(20, 236, 4), // "yPos"
QT_MOC_LITERAL(21, 241, 5), // "xSize"
QT_MOC_LITERAL(22, 247, 5), // "ySize"
QT_MOC_LITERAL(23, 253, 15) // "emitLinkRemoved"

    },
    "pqLinksModel\0linkAdded\0\0linkType\0"
    "linkRemoved\0name\0onSessionCreated\0"
    "pqServer*\0onSessionRemoved\0onStateLoaded\0"
    "vtkPVXMLElement*\0root\0vtkSMProxyLocator*\0"
    "locator\0onStateSaved\0createInteractiveViewLink\0"
    "vtkSMProxy*\0displayView\0linkedView\0"
    "xPos\0yPos\0xSize\0ySize\0emitLinkRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqLinksModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   80,    2, 0x09 /* Protected */,
       8,    1,   83,    2, 0x09 /* Protected */,
       9,    2,   86,    2, 0x09 /* Protected */,
      14,    1,   91,    2, 0x09 /* Protected */,
      15,    7,   94,    2, 0x09 /* Protected */,
      15,    6,  109,    2, 0x29 /* Protected | MethodCloned */,
      15,    5,  122,    2, 0x29 /* Protected | MethodCloned */,
      15,    4,  133,    2, 0x29 /* Protected | MethodCloned */,
      15,    3,  142,    2, 0x29 /* Protected | MethodCloned */,
      23,    1,  149,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 16, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,   17,   18,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 16, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,   17,   18,   19,   20,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 16, QMetaType::Double, QMetaType::Double,    5,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 16, QMetaType::Double,    5,   17,   18,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16, 0x80000000 | 16,    5,   17,   18,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void pqLinksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqLinksModel *_t = static_cast<pqLinksModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->linkRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onSessionCreated((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 3: _t->onSessionRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->onStateLoaded((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        case 5: _t->onStateSaved((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 6: _t->createInteractiveViewLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 7: _t->createInteractiveViewLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 8: _t->createInteractiveViewLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 9: _t->createInteractiveViewLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 10: _t->createInteractiveViewLink((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[2])),(*reinterpret_cast< vtkSMProxy*(*)>(_a[3]))); break;
        case 11: _t->emitLinkRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqLinksModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLinksModel::linkAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqLinksModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLinksModel::linkRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqLinksModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_pqLinksModel.data,
      qt_meta_data_pqLinksModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqLinksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqLinksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqLinksModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int pqLinksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void pqLinksModel::linkAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqLinksModel::linkRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_pqLinksModelObject_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqLinksModelObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqLinksModelObject_t qt_meta_stringdata_pqLinksModelObject = {
    {
QT_MOC_LITERAL(0, 0, 18), // "pqLinksModelObject"
QT_MOC_LITERAL(1, 19, 11), // "linkRemoved"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "proxyModified"
QT_MOC_LITERAL(4, 46, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(5, 72, 7), // "refresh"
QT_MOC_LITERAL(6, 80, 6) // "remove"

    },
    "pqLinksModelObject\0linkRemoved\0\0"
    "proxyModified\0pqServerManagerModelItem*\0"
    "refresh\0remove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqLinksModelObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqLinksModelObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqLinksModelObject *_t = static_cast<pqLinksModelObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkRemoved(); break;
        case 1: _t->proxyModified((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->remove(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqLinksModelObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqLinksModelObject::linkRemoved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqLinksModelObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqLinksModelObject.data,
      qt_meta_data_pqLinksModelObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqLinksModelObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqLinksModelObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqLinksModelObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqLinksModelObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void pqLinksModelObject::linkRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
