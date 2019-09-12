/****************************************************************************
** Meta object code from reading C++ file 'pqFindDataSelectionDisplayFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqFindDataSelectionDisplayFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFindDataSelectionDisplayFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFindDataSelectionDisplayFrame_t {
    QByteArrayData data[19];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFindDataSelectionDisplayFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFindDataSelectionDisplayFrame_t qt_meta_stringdata_pqFindDataSelectionDisplayFrame = {
    {
QT_MOC_LITERAL(0, 0, 31), // "pqFindDataSelectionDisplayFrame"
QT_MOC_LITERAL(1, 32, 15), // "setSelectedPort"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 13), // "pqOutputPort*"
QT_MOC_LITERAL(4, 63, 7), // "setView"
QT_MOC_LITERAL(5, 71, 7), // "pqView*"
QT_MOC_LITERAL(6, 79, 11), // "updatePanel"
QT_MOC_LITERAL(7, 91, 14), // "fillCellLabels"
QT_MOC_LITERAL(8, 106, 15), // "fillPointLabels"
QT_MOC_LITERAL(9, 122, 17), // "cellLabelSelected"
QT_MOC_LITERAL(10, 140, 8), // "QAction*"
QT_MOC_LITERAL(11, 149, 18), // "pointLabelSelected"
QT_MOC_LITERAL(12, 168, 28), // "editLabelPropertiesSelection"
QT_MOC_LITERAL(13, 197, 39), // "editLabelPropertiesInteractiv..."
QT_MOC_LITERAL(14, 237, 11), // "showFrustum"
QT_MOC_LITERAL(15, 249, 13), // "onDataUpdated"
QT_MOC_LITERAL(16, 263, 22), // "onSelectionModeChanged"
QT_MOC_LITERAL(17, 286, 7), // "frustum"
QT_MOC_LITERAL(18, 294, 17) // "useVerticalLayout"

    },
    "pqFindDataSelectionDisplayFrame\0"
    "setSelectedPort\0\0pqOutputPort*\0setView\0"
    "pqView*\0updatePanel\0fillCellLabels\0"
    "fillPointLabels\0cellLabelSelected\0"
    "QAction*\0pointLabelSelected\0"
    "editLabelPropertiesSelection\0"
    "editLabelPropertiesInteractiveSelection\0"
    "showFrustum\0onDataUpdated\0"
    "onSelectionModeChanged\0frustum\0"
    "useVerticalLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFindDataSelectionDisplayFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqFindDataSelectionDisplayFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFindDataSelectionDisplayFrame *_t = static_cast<pqFindDataSelectionDisplayFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSelectedPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 2: _t->updatePanel(); break;
        case 3: _t->fillCellLabels(); break;
        case 4: _t->fillPointLabels(); break;
        case 5: _t->cellLabelSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->pointLabelSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->editLabelPropertiesSelection(); break;
        case 8: _t->editLabelPropertiesInteractiveSelection(); break;
        case 9: _t->showFrustum((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onDataUpdated(); break;
        case 11: _t->onSelectionModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqFindDataSelectionDisplayFrame *_t = static_cast<pqFindDataSelectionDisplayFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->useVerticalLayout(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqFindDataSelectionDisplayFrame *_t = static_cast<pqFindDataSelectionDisplayFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUseVerticalLayout(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqFindDataSelectionDisplayFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFindDataSelectionDisplayFrame.data,
      qt_meta_data_pqFindDataSelectionDisplayFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFindDataSelectionDisplayFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFindDataSelectionDisplayFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFindDataSelectionDisplayFrame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqFindDataSelectionDisplayFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
