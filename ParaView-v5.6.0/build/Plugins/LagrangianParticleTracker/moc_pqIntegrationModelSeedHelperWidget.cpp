/****************************************************************************
** Meta object code from reading C++ file 'pqIntegrationModelSeedHelperWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Plugins/LagrangianParticleTracker/pqIntegrationModelSeedHelperWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqIntegrationModelSeedHelperWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqIntegrationModelSeedHelperWidget_t {
    QByteArrayData data[8];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqIntegrationModelSeedHelperWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqIntegrationModelSeedHelperWidget_t qt_meta_stringdata_pqIntegrationModelSeedHelperWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "pqIntegrationModelSeedHelperW..."
QT_MOC_LITERAL(1, 35, 22), // "arrayToGenerateChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 18), // "setArrayToGenerate"
QT_MOC_LITERAL(4, 78, 11), // "resetWidget"
QT_MOC_LITERAL(5, 90, 20), // "forceResetSeedWidget"
QT_MOC_LITERAL(6, 111, 18), // "updateEnabledState"
QT_MOC_LITERAL(7, 130, 15) // "arrayToGenerate"

    },
    "pqIntegrationModelSeedHelperWidget\0"
    "arrayToGenerateChanged\0\0setArrayToGenerate\0"
    "resetWidget\0forceResetSeedWidget\0"
    "updateEnabledState\0arrayToGenerate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqIntegrationModelSeedHelperWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       4,    0,   43,    2, 0x09 /* Protected */,
       5,    0,   44,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QVariantList, 0x00095103,

       0        // eod
};

void pqIntegrationModelSeedHelperWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqIntegrationModelSeedHelperWidget *_t = static_cast<pqIntegrationModelSeedHelperWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->arrayToGenerateChanged(); break;
        case 1: _t->setArrayToGenerate((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        case 2: _t->resetWidget(); break;
        case 3: _t->forceResetSeedWidget(); break;
        case 4: _t->updateEnabledState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqIntegrationModelSeedHelperWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqIntegrationModelSeedHelperWidget::arrayToGenerateChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqIntegrationModelSeedHelperWidget *_t = static_cast<pqIntegrationModelSeedHelperWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QVariant>*>(_v) = _t->arrayToGenerate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqIntegrationModelSeedHelperWidget *_t = static_cast<pqIntegrationModelSeedHelperWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setArrayToGenerate(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqIntegrationModelSeedHelperWidget::staticMetaObject = {
    { &pqIntegrationModelHelperWidget::staticMetaObject, qt_meta_stringdata_pqIntegrationModelSeedHelperWidget.data,
      qt_meta_data_pqIntegrationModelSeedHelperWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqIntegrationModelSeedHelperWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqIntegrationModelSeedHelperWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqIntegrationModelSeedHelperWidget.stringdata0))
        return static_cast<void*>(this);
    return pqIntegrationModelHelperWidget::qt_metacast(_clname);
}

int pqIntegrationModelSeedHelperWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqIntegrationModelHelperWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void pqIntegrationModelSeedHelperWidget::arrayToGenerateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
