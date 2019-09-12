/****************************************************************************
** Meta object code from reading C++ file 'pqLightsInspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqLightsInspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqLightsInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqLightsInspector_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqLightsInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqLightsInspector_t qt_meta_stringdata_pqLightsInspector = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqLightsInspector"
QT_MOC_LITERAL(1, 18, 8), // "addLight"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "removeLight"
QT_MOC_LITERAL(4, 40, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(5, 52, 17), // "syncLightToCamera"
QT_MOC_LITERAL(6, 70, 13), // "setActiveView"
QT_MOC_LITERAL(7, 84, 7), // "pqView*"
QT_MOC_LITERAL(8, 92, 6), // "render"
QT_MOC_LITERAL(9, 99, 15) // "updateAndRender"

    },
    "pqLightsInspector\0addLight\0\0removeLight\0"
    "vtkSMProxy*\0syncLightToCamera\0"
    "setActiveView\0pqView*\0render\0"
    "updateAndRender"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqLightsInspector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       3,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   59,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqLightsInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqLightsInspector *_t = static_cast<pqLightsInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLight(); break;
        case 1: _t->removeLight((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 2: _t->removeLight(); break;
        case 3: _t->syncLightToCamera((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 4: _t->syncLightToCamera(); break;
        case 5: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 6: _t->render(); break;
        case 7: _t->updateAndRender(); break;
        default: ;
        }
    }
}

const QMetaObject pqLightsInspector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqLightsInspector.data,
      qt_meta_data_pqLightsInspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqLightsInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqLightsInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqLightsInspector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqLightsInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
