/****************************************************************************
** Meta object code from reading C++ file 'pqMultiBlockInspectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqMultiBlockInspectorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqMultiBlockInspectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqMultiBlockInspectorWidget_t {
    QByteArrayData data[29];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqMultiBlockInspectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqMultiBlockInspectorWidget_t qt_meta_stringdata_pqMultiBlockInspectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "pqMultiBlockInspectorWidget"
QT_MOC_LITERAL(1, 28, 24), // "blockVisibilitiesChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 18), // "blockColorsChanged"
QT_MOC_LITERAL(4, 73, 21), // "blockOpacitiesChanged"
QT_MOC_LITERAL(5, 95, 13), // "requestRender"
QT_MOC_LITERAL(6, 109, 13), // "setOutputPort"
QT_MOC_LITERAL(7, 123, 13), // "pqOutputPort*"
QT_MOC_LITERAL(8, 137, 4), // "port"
QT_MOC_LITERAL(9, 142, 7), // "setView"
QT_MOC_LITERAL(10, 150, 7), // "pqView*"
QT_MOC_LITERAL(11, 158, 4), // "view"
QT_MOC_LITERAL(12, 163, 21), // "setOutputPortInternal"
QT_MOC_LITERAL(13, 185, 15), // "setViewInternal"
QT_MOC_LITERAL(14, 201, 17), // "setRepresentation"
QT_MOC_LITERAL(15, 219, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(16, 241, 4), // "repr"
QT_MOC_LITERAL(17, 246, 8), // "selected"
QT_MOC_LITERAL(18, 255, 16), // "modelDataChanged"
QT_MOC_LITERAL(19, 272, 11), // "contextMenu"
QT_MOC_LITERAL(20, 284, 15), // "resetEventually"
QT_MOC_LITERAL(21, 300, 8), // "resetNow"
QT_MOC_LITERAL(22, 309, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(23, 327, 20), // "updateRepresentation"
QT_MOC_LITERAL(24, 348, 11), // "nameChanged"
QT_MOC_LITERAL(25, 360, 20), // "updateScalarColoring"
QT_MOC_LITERAL(26, 381, 17), // "blockVisibilities"
QT_MOC_LITERAL(27, 399, 11), // "blockColors"
QT_MOC_LITERAL(28, 411, 14) // "blockOpacities"

    },
    "pqMultiBlockInspectorWidget\0"
    "blockVisibilitiesChanged\0\0blockColorsChanged\0"
    "blockOpacitiesChanged\0requestRender\0"
    "setOutputPort\0pqOutputPort*\0port\0"
    "setView\0pqView*\0view\0setOutputPortInternal\0"
    "setViewInternal\0setRepresentation\0"
    "pqDataRepresentation*\0repr\0selected\0"
    "modelDataChanged\0contextMenu\0"
    "resetEventually\0resetNow\0itemDoubleClicked\0"
    "updateRepresentation\0nameChanged\0"
    "updateScalarColoring\0blockVisibilities\0"
    "blockColors\0blockOpacities"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqMultiBlockInspectorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       3,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  108,    2, 0x0a /* Public */,
       9,    1,  111,    2, 0x0a /* Public */,
      12,    1,  114,    2, 0x08 /* Private */,
      13,    1,  117,    2, 0x08 /* Private */,
      14,    1,  120,    2, 0x08 /* Private */,
      17,    1,  123,    2, 0x08 /* Private */,
      18,    2,  126,    2, 0x08 /* Private */,
      19,    1,  131,    2, 0x08 /* Private */,
      20,    0,  134,    2, 0x08 /* Private */,
      21,    0,  135,    2, 0x08 /* Private */,
      22,    1,  136,    2, 0x08 /* Private */,
      23,    0,  139,    2, 0x08 /* Private */,
      24,    0,  140,    2, 0x08 /* Private */,
      25,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      26, QMetaType::QVariantList, 0x00495103,
      27, QMetaType::QVariantList, 0x00495103,
      28, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void pqMultiBlockInspectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqMultiBlockInspectorWidget *_t = static_cast<pqMultiBlockInspectorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockVisibilitiesChanged(); break;
        case 1: _t->blockColorsChanged(); break;
        case 2: _t->blockOpacitiesChanged(); break;
        case 3: _t->requestRender(); break;
        case 4: _t->setOutputPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 5: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 6: _t->setOutputPortInternal((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 7: _t->setViewInternal((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 8: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 9: _t->selected((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 10: _t->modelDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->contextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->resetEventually(); break;
        case 13: _t->resetNow(); break;
        case 14: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->updateRepresentation(); break;
        case 16: _t->nameChanged(); break;
        case 17: _t->updateScalarColoring(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqMultiBlockInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiBlockInspectorWidget::blockVisibilitiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqMultiBlockInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiBlockInspectorWidget::blockColorsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqMultiBlockInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiBlockInspectorWidget::blockOpacitiesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqMultiBlockInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqMultiBlockInspectorWidget::requestRender)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqMultiBlockInspectorWidget *_t = static_cast<pqMultiBlockInspectorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = _t->blockVisibilities(); break;
        case 1: *reinterpret_cast< QList<QVariant>*>(_v) = _t->blockColors(); break;
        case 2: *reinterpret_cast< QList<QVariant>*>(_v) = _t->blockOpacities(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqMultiBlockInspectorWidget *_t = static_cast<pqMultiBlockInspectorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBlockVisibilities(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 1: _t->setBlockColors(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 2: _t->setBlockOpacities(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqMultiBlockInspectorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqMultiBlockInspectorWidget.data,
      qt_meta_data_pqMultiBlockInspectorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqMultiBlockInspectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqMultiBlockInspectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqMultiBlockInspectorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqMultiBlockInspectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqMultiBlockInspectorWidget::blockVisibilitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqMultiBlockInspectorWidget::blockColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqMultiBlockInspectorWidget::blockOpacitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void pqMultiBlockInspectorWidget::requestRender()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
