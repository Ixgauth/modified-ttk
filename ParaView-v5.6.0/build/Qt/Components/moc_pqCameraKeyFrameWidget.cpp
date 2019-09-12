/****************************************************************************
** Meta object code from reading C++ file 'pqCameraKeyFrameWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCameraKeyFrameWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCameraKeyFrameWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCameraKeyFrameWidget_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCameraKeyFrameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCameraKeyFrameWidget_t qt_meta_stringdata_pqCameraKeyFrameWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqCameraKeyFrameWidget"
QT_MOC_LITERAL(1, 23, 16), // "useCurrentCamera"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "initializeUsingKeyFrame"
QT_MOC_LITERAL(4, 65, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(5, 77, 13), // "keyframeProxy"
QT_MOC_LITERAL(6, 91, 21), // "initializeUsingCamera"
QT_MOC_LITERAL(7, 113, 10), // "vtkCamera*"
QT_MOC_LITERAL(8, 124, 6), // "camera"
QT_MOC_LITERAL(9, 131, 19), // "setUsePathBasedMode"
QT_MOC_LITERAL(10, 151, 14), // "saveToKeyFrame"
QT_MOC_LITERAL(11, 166, 17) // "changeCurrentPage"

    },
    "pqCameraKeyFrameWidget\0useCurrentCamera\0"
    "\0initializeUsingKeyFrame\0vtkSMProxy*\0"
    "keyframeProxy\0initializeUsingCamera\0"
    "vtkCamera*\0camera\0setUsePathBasedMode\0"
    "saveToKeyFrame\0changeCurrentPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCameraKeyFrameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,
      10,    1,   54,    2, 0x0a /* Public */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void pqCameraKeyFrameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCameraKeyFrameWidget *_t = static_cast<pqCameraKeyFrameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->useCurrentCamera(); break;
        case 1: _t->initializeUsingKeyFrame((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 2: _t->initializeUsingCamera((*reinterpret_cast< vtkCamera*(*)>(_a[1]))); break;
        case 3: _t->setUsePathBasedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->saveToKeyFrame((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 5: _t->changeCurrentPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqCameraKeyFrameWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCameraKeyFrameWidget::useCurrentCamera)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqCameraKeyFrameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqCameraKeyFrameWidget.data,
      qt_meta_data_pqCameraKeyFrameWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCameraKeyFrameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCameraKeyFrameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCameraKeyFrameWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqCameraKeyFrameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void pqCameraKeyFrameWidget::useCurrentCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
