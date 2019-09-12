/****************************************************************************
** Meta object code from reading C++ file 'pqQueryClauseWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqQueryClauseWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqQueryClauseWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqQueryClauseWidget_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqQueryClauseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqQueryClauseWidget_t qt_meta_stringdata_pqQueryClauseWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pqQueryClauseWidget"
QT_MOC_LITERAL(1, 20, 10), // "initialize"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "CriteriaTypes"
QT_MOC_LITERAL(4, 46, 10), // "type_flags"
QT_MOC_LITERAL(5, 57, 14), // "qualifier_mode"
QT_MOC_LITERAL(6, 72, 26), // "populateSelectionCondition"
QT_MOC_LITERAL(7, 99, 17), // "updateValueWidget"
QT_MOC_LITERAL(8, 117, 28), // "updateDependentClauseWidgets"
QT_MOC_LITERAL(9, 146, 17) // "showCompositeTree"

    },
    "pqQueryClauseWidget\0initialize\0\0"
    "CriteriaTypes\0type_flags\0qualifier_mode\0"
    "populateSelectionCondition\0updateValueWidget\0"
    "updateDependentClauseWidgets\0"
    "showCompositeTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqQueryClauseWidget[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       1,    2,   50,    2, 0x0a /* Public */,
       1,    1,   55,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   58,    2, 0x09 /* Protected */,
       7,    0,   59,    2, 0x09 /* Protected */,
       8,    0,   60,    2, 0x09 /* Protected */,
       9,    0,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqQueryClauseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqQueryClauseWidget *_t = static_cast<pqQueryClauseWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: _t->initialize((*reinterpret_cast< CriteriaTypes(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->initialize((*reinterpret_cast< CriteriaTypes(*)>(_a[1]))); break;
        case 3: _t->populateSelectionCondition(); break;
        case 4: _t->updateValueWidget(); break;
        case 5: _t->updateDependentClauseWidgets(); break;
        case 6: _t->showCompositeTree(); break;
        default: ;
        }
    }
}

const QMetaObject pqQueryClauseWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqQueryClauseWidget.data,
      qt_meta_data_pqQueryClauseWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqQueryClauseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqQueryClauseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqQueryClauseWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqQueryClauseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
