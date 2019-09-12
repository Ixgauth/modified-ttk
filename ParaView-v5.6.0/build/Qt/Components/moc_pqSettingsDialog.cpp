/****************************************************************************
** Meta object code from reading C++ file 'pqSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSettingsDialog_t {
    QByteArrayData data[16];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSettingsDialog_t qt_meta_stringdata_pqSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqSettingsDialog"
QT_MOC_LITERAL(1, 17, 13), // "filterWidgets"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "showAdvanced"
QT_MOC_LITERAL(4, 45, 4), // "text"
QT_MOC_LITERAL(5, 50, 7), // "clicked"
QT_MOC_LITERAL(6, 58, 16), // "QAbstractButton*"
QT_MOC_LITERAL(7, 75, 10), // "onAccepted"
QT_MOC_LITERAL(8, 86, 10), // "onRejected"
QT_MOC_LITERAL(9, 97, 17), // "onTabIndexChanged"
QT_MOC_LITERAL(10, 115, 5), // "index"
QT_MOC_LITERAL(11, 121, 17), // "onChangeAvailable"
QT_MOC_LITERAL(12, 139, 26), // "showRestartRequiredMessage"
QT_MOC_LITERAL(13, 166, 18), // "filterPanelWidgets"
QT_MOC_LITERAL(14, 185, 13), // "serverRemoved"
QT_MOC_LITERAL(15, 199, 9) // "pqServer*"

    },
    "pqSettingsDialog\0filterWidgets\0\0"
    "showAdvanced\0text\0clicked\0QAbstractButton*\0"
    "onAccepted\0onRejected\0onTabIndexChanged\0"
    "index\0onChangeAvailable\0"
    "showRestartRequiredMessage\0"
    "filterPanelWidgets\0serverRemoved\0"
    "pqServer*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   64,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

void pqSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSettingsDialog *_t = static_cast<pqSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterWidgets((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->onAccepted(); break;
        case 3: _t->onRejected(); break;
        case 4: _t->onTabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onChangeAvailable(); break;
        case 6: _t->showRestartRequiredMessage(); break;
        case 7: _t->filterPanelWidgets(); break;
        case 8: _t->serverRemoved((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSettingsDialog::*_t)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSettingsDialog::filterWidgets)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqSettingsDialog.data,
      qt_meta_data_pqSettingsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void pqSettingsDialog::filterWidgets(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
