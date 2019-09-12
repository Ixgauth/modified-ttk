/****************************************************************************
** Meta object code from reading C++ file 'pqCustomFilterManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCustomFilterManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomFilterManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCustomFilterManager_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCustomFilterManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCustomFilterManager_t qt_meta_stringdata_pqCustomFilterManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqCustomFilterManager"
QT_MOC_LITERAL(1, 22, 18), // "selectCustomFilter"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "name"
QT_MOC_LITERAL(4, 47, 11), // "importFiles"
QT_MOC_LITERAL(5, 59, 5), // "files"
QT_MOC_LITERAL(6, 65, 14), // "exportSelected"
QT_MOC_LITERAL(7, 80, 14), // "removeSelected"
QT_MOC_LITERAL(8, 95, 13), // "updateButtons"
QT_MOC_LITERAL(9, 109, 14), // "QItemSelection"
QT_MOC_LITERAL(10, 124, 8), // "selected"
QT_MOC_LITERAL(11, 133, 10) // "deselected"

    },
    "pqCustomFilterManager\0selectCustomFilter\0"
    "\0name\0importFiles\0files\0exportSelected\0"
    "removeSelected\0updateButtons\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCustomFilterManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       4,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,

       0        // eod
};

void pqCustomFilterManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCustomFilterManager *_t = static_cast<pqCustomFilterManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectCustomFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->importFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->exportSelected((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->importFiles(); break;
        case 4: _t->exportSelected(); break;
        case 5: _t->removeSelected(); break;
        case 6: _t->updateButtons((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject pqCustomFilterManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqCustomFilterManager.data,
      qt_meta_data_pqCustomFilterManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCustomFilterManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCustomFilterManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomFilterManager.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqCustomFilterManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
