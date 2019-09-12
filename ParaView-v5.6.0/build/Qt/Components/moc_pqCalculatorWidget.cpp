/****************************************************************************
** Meta object code from reading C++ file 'pqCalculatorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCalculatorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCalculatorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCalculatorWidget_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCalculatorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCalculatorWidget_t qt_meta_stringdata_pqCalculatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "pqCalculatorWidget"
QT_MOC_LITERAL(1, 19, 14), // "variableChosen"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "QAction*"
QT_MOC_LITERAL(4, 44, 6), // "action"
QT_MOC_LITERAL(5, 51, 13), // "buttonPressed"
QT_MOC_LITERAL(6, 65, 19), // "updateVariableNames"
QT_MOC_LITERAL(7, 85, 15), // "updateVariables"
QT_MOC_LITERAL(8, 101, 4) // "mode"

    },
    "pqCalculatorWidget\0variableChosen\0\0"
    "QAction*\0action\0buttonPressed\0"
    "updateVariableNames\0updateVariables\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCalculatorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       5,    1,   37,    2, 0x09 /* Protected */,
       6,    0,   40,    2, 0x09 /* Protected */,
       7,    1,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void pqCalculatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCalculatorWidget *_t = static_cast<pqCalculatorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->variableChosen((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->buttonPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateVariableNames(); break;
        case 3: _t->updateVariables((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqCalculatorWidget::staticMetaObject = {
    { &pqPropertyWidget::staticMetaObject, qt_meta_stringdata_pqCalculatorWidget.data,
      qt_meta_data_pqCalculatorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCalculatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCalculatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCalculatorWidget.stringdata0))
        return static_cast<void*>(this);
    return pqPropertyWidget::qt_metacast(_clname);
}

int pqCalculatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqPropertyWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
