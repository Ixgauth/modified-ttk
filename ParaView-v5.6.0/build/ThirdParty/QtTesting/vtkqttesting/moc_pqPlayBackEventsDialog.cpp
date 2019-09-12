/****************************************************************************
** Meta object code from reading C++ file 'pqPlayBackEventsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ThirdParty/QtTesting/vtkqttesting/pqPlayBackEventsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPlayBackEventsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPlayBackEventsDialog_t {
    QByteArrayData data[14];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPlayBackEventsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPlayBackEventsDialog_t qt_meta_stringdata_pqPlayBackEventsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqPlayBackEventsDialog"
QT_MOC_LITERAL(1, 23, 22), // "onEventAboutToBePlayed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "loadFiles"
QT_MOC_LITERAL(4, 57, 11), // "insertFiles"
QT_MOC_LITERAL(5, 69, 11), // "removeFiles"
QT_MOC_LITERAL(6, 81, 13), // "onPlayOrPause"
QT_MOC_LITERAL(7, 95, 9), // "onOneStep"
QT_MOC_LITERAL(8, 105, 9), // "onStarted"
QT_MOC_LITERAL(9, 115, 9), // "onStopped"
QT_MOC_LITERAL(10, 125, 7), // "onModal"
QT_MOC_LITERAL(11, 133, 5), // "value"
QT_MOC_LITERAL(12, 139, 4), // "done"
QT_MOC_LITERAL(13, 144, 8) // "updateUi"

    },
    "pqPlayBackEventsDialog\0onEventAboutToBePlayed\0"
    "\0loadFiles\0insertFiles\0removeFiles\0"
    "onPlayOrPause\0onOneStep\0onStarted\0"
    "onStopped\0onModal\0value\0done\0updateUi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPlayBackEventsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x08 /* Private */,
       3,    0,   81,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    1,   84,    2, 0x08 /* Private */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       8,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void pqPlayBackEventsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPlayBackEventsDialog *_t = static_cast<pqPlayBackEventsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onEventAboutToBePlayed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->loadFiles(); break;
        case 2: _t->insertFiles(); break;
        case 3: _t->removeFiles(); break;
        case 4: _t->onPlayOrPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onOneStep(); break;
        case 6: _t->onStarted(); break;
        case 7: _t->onStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onStopped(); break;
        case 9: _t->onModal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateUi(); break;
        default: ;
        }
    }
}

const QMetaObject pqPlayBackEventsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPlayBackEventsDialog.data,
      qt_meta_data_pqPlayBackEventsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPlayBackEventsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPlayBackEventsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPlayBackEventsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqPlayBackEventsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
