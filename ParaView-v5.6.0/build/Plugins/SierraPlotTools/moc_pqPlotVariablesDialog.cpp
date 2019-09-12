/****************************************************************************
** Meta object code from reading C++ file 'pqPlotVariablesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Plugins/SierraPlotTools/pqPlotVariablesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPlotVariablesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPlotVariablesDialog_t {
    QByteArrayData data[17];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPlotVariablesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPlotVariablesDialog_t qt_meta_stringdata_pqPlotVariablesDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqPlotVariablesDialog"
QT_MOC_LITERAL(1, 22, 16), // "variableSelected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 57, 4), // "item"
QT_MOC_LITERAL(5, 62, 25), // "variableDeselectionByName"
QT_MOC_LITERAL(6, 88, 7), // "varName"
QT_MOC_LITERAL(7, 96, 23), // "variableSelectionByName"
QT_MOC_LITERAL(8, 120, 11), // "okDismissed"
QT_MOC_LITERAL(9, 132, 15), // "cancelDismissed"
QT_MOC_LITERAL(10, 148, 32), // "useParaViewGUIToSelectNodesCheck"
QT_MOC_LITERAL(11, 181, 24), // "slotItemSelectionChanged"
QT_MOC_LITERAL(12, 206, 6), // "slotOk"
QT_MOC_LITERAL(13, 213, 10), // "slotCancel"
QT_MOC_LITERAL(14, 224, 39), // "slotUseParaViewGUIToSelectNod..."
QT_MOC_LITERAL(15, 264, 7), // "checked"
QT_MOC_LITERAL(16, 272, 15) // "slotTextChanged"

    },
    "pqPlotVariablesDialog\0variableSelected\0"
    "\0QListWidgetItem*\0item\0variableDeselectionByName\0"
    "varName\0variableSelectionByName\0"
    "okDismissed\0cancelDismissed\0"
    "useParaViewGUIToSelectNodesCheck\0"
    "slotItemSelectionChanged\0slotOk\0"
    "slotCancel\0slotUseParaViewGUIToSelectNodesCheckBox\0"
    "checked\0slotTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPlotVariablesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
       8,    0,   78,    2, 0x06 /* Public */,
       9,    0,   79,    2, 0x06 /* Public */,
      10,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   81,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,
      14,    1,   84,    2, 0x0a /* Public */,
      16,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void pqPlotVariablesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPlotVariablesDialog *_t = static_cast<pqPlotVariablesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->variableSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->variableDeselectionByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->variableSelectionByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->okDismissed(); break;
        case 4: _t->cancelDismissed(); break;
        case 5: _t->useParaViewGUIToSelectNodesCheck(); break;
        case 6: _t->slotItemSelectionChanged(); break;
        case 7: _t->slotOk(); break;
        case 8: _t->slotCancel(); break;
        case 9: _t->slotUseParaViewGUIToSelectNodesCheckBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPlotVariablesDialog::*_t)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPlotVariablesDialog::variableSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqPlotVariablesDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPlotVariablesDialog::variableDeselectionByName)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqPlotVariablesDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPlotVariablesDialog::variableSelectionByName)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqPlotVariablesDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPlotVariablesDialog::okDismissed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqPlotVariablesDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPlotVariablesDialog::cancelDismissed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (pqPlotVariablesDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPlotVariablesDialog::useParaViewGUIToSelectNodesCheck)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject pqPlotVariablesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPlotVariablesDialog.data,
      qt_meta_data_pqPlotVariablesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPlotVariablesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPlotVariablesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPlotVariablesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqPlotVariablesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void pqPlotVariablesDialog::variableSelected(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqPlotVariablesDialog::variableDeselectionByName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqPlotVariablesDialog::variableSelectionByName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqPlotVariablesDialog::okDismissed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void pqPlotVariablesDialog::cancelDismissed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void pqPlotVariablesDialog::useParaViewGUIToSelectNodesCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
