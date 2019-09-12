/****************************************************************************
** Meta object code from reading C++ file 'pqComparativeVisPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqComparativeVisPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqComparativeVisPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqComparativeVisPanel_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqComparativeVisPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqComparativeVisPanel_t qt_meta_stringdata_pqComparativeVisPanel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqComparativeVisPanel"
QT_MOC_LITERAL(1, 22, 7), // "setView"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "pqView*"
QT_MOC_LITERAL(4, 39, 12), // "addParameter"
QT_MOC_LITERAL(5, 52, 20), // "updateParametersList"
QT_MOC_LITERAL(6, 73, 25), // "parameterSelectionChanged"
QT_MOC_LITERAL(7, 99, 11), // "sizeUpdated"
QT_MOC_LITERAL(8, 111, 15), // "removeParameter"
QT_MOC_LITERAL(9, 127, 5) // "index"

    },
    "pqComparativeVisPanel\0setView\0\0pqView*\0"
    "addParameter\0updateParametersList\0"
    "parameterSelectionChanged\0sizeUpdated\0"
    "removeParameter\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqComparativeVisPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    0,   47,    2, 0x09 /* Protected */,
       5,    0,   48,    2, 0x09 /* Protected */,
       6,    0,   49,    2, 0x09 /* Protected */,
       7,    0,   50,    2, 0x09 /* Protected */,
       8,    1,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void pqComparativeVisPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqComparativeVisPanel *_t = static_cast<pqComparativeVisPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 1: _t->addParameter(); break;
        case 2: _t->updateParametersList(); break;
        case 3: _t->parameterSelectionChanged(); break;
        case 4: _t->sizeUpdated(); break;
        case 5: _t->removeParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqComparativeVisPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqComparativeVisPanel.data,
      qt_meta_data_pqComparativeVisPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqComparativeVisPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqComparativeVisPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqComparativeVisPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqComparativeVisPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
