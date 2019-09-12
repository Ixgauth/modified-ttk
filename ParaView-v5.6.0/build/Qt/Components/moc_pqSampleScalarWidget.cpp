/****************************************************************************
** Meta object code from reading C++ file 'pqSampleScalarWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSampleScalarWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSampleScalarWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSampleScalarWidget_t {
    QByteArrayData data[15];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSampleScalarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSampleScalarWidget_t qt_meta_stringdata_pqSampleScalarWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqSampleScalarWidget"
QT_MOC_LITERAL(1, 21, 14), // "samplesChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "onSamplesChanged"
QT_MOC_LITERAL(4, 54, 18), // "onSelectionChanged"
QT_MOC_LITERAL(5, 73, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 88, 8), // "onDelete"
QT_MOC_LITERAL(7, 97, 11), // "onDeleteAll"
QT_MOC_LITERAL(8, 109, 10), // "onNewValue"
QT_MOC_LITERAL(9, 120, 10), // "onNewRange"
QT_MOC_LITERAL(10, 131, 11), // "onSelectAll"
QT_MOC_LITERAL(11, 143, 20), // "onScientificNotation"
QT_MOC_LITERAL(12, 164, 27), // "onControlledPropertyChanged"
QT_MOC_LITERAL(13, 192, 33), // "onControlledPropertyDomainCha..."
QT_MOC_LITERAL(14, 226, 7) // "samples"

    },
    "pqSampleScalarWidget\0samplesChanged\0"
    "\0onSamplesChanged\0onSelectionChanged\0"
    "QItemSelection\0onDelete\0onDeleteAll\0"
    "onNewValue\0onNewRange\0onSelectAll\0"
    "onScientificNotation\0onControlledPropertyChanged\0"
    "onControlledPropertyDomainChanged\0"
    "samples"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSampleScalarWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    2,   71,    2, 0x08 /* Private */,
       6,    0,   76,    2, 0x08 /* Private */,
       7,    0,   77,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QVariantList, 0x00095103,

       0        // eod
};

void pqSampleScalarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSampleScalarWidget *_t = static_cast<pqSampleScalarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->samplesChanged(); break;
        case 1: _t->onSamplesChanged(); break;
        case 2: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->onDelete(); break;
        case 4: _t->onDeleteAll(); break;
        case 5: _t->onNewValue(); break;
        case 6: _t->onNewRange(); break;
        case 7: _t->onSelectAll(); break;
        case 8: _t->onScientificNotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onControlledPropertyChanged(); break;
        case 10: _t->onControlledPropertyDomainChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSampleScalarWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSampleScalarWidget::samplesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqSampleScalarWidget *_t = static_cast<pqSampleScalarWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->samples(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqSampleScalarWidget *_t = static_cast<pqSampleScalarWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSamples(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqSampleScalarWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSampleScalarWidget.data,
      qt_meta_data_pqSampleScalarWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSampleScalarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSampleScalarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSampleScalarWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqSampleScalarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void pqSampleScalarWidget::samplesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
