/****************************************************************************
** Meta object code from reading C++ file 'pqTimeInspectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqTimeInspectorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTimeInspectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTimeInspectorWidget_t {
    QByteArrayData data[23];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTimeInspectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTimeInspectorWidget_t qt_meta_stringdata_pqTimeInspectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqTimeInspectorWidget"
QT_MOC_LITERAL(1, 22, 11), // "dummySignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "sceneCurrentTimeChanged"
QT_MOC_LITERAL(4, 59, 28), // "suppressedTimeSourcesChanged"
QT_MOC_LITERAL(5, 88, 9), // "setServer"
QT_MOC_LITERAL(6, 98, 9), // "pqServer*"
QT_MOC_LITERAL(7, 108, 6), // "server"
QT_MOC_LITERAL(8, 115, 19), // "setSceneCurrentTime"
QT_MOC_LITERAL(9, 135, 11), // "updateScene"
QT_MOC_LITERAL(10, 147, 22), // "handleProxyNameChanged"
QT_MOC_LITERAL(11, 170, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(12, 196, 22), // "toggleTrackSuppression"
QT_MOC_LITERAL(13, 219, 17), // "pqAnimationTrack*"
QT_MOC_LITERAL(14, 237, 22), // "generalSettingsChanged"
QT_MOC_LITERAL(15, 260, 14), // "sceneStartTime"
QT_MOC_LITERAL(16, 275, 12), // "sceneEndTime"
QT_MOC_LITERAL(17, 288, 13), // "scenePlayMode"
QT_MOC_LITERAL(18, 302, 14), // "sceneTimeSteps"
QT_MOC_LITERAL(19, 317, 19), // "sceneNumberOfFrames"
QT_MOC_LITERAL(20, 337, 11), // "timeSources"
QT_MOC_LITERAL(21, 349, 21), // "suppressedTimeSources"
QT_MOC_LITERAL(22, 371, 16) // "sceneCurrentTime"

    },
    "pqTimeInspectorWidget\0dummySignal\0\0"
    "sceneCurrentTimeChanged\0"
    "suppressedTimeSourcesChanged\0setServer\0"
    "pqServer*\0server\0setSceneCurrentTime\0"
    "updateScene\0handleProxyNameChanged\0"
    "pqServerManagerModelItem*\0"
    "toggleTrackSuppression\0pqAnimationTrack*\0"
    "generalSettingsChanged\0sceneStartTime\0"
    "sceneEndTime\0scenePlayMode\0sceneTimeSteps\0"
    "sceneNumberOfFrames\0timeSources\0"
    "suppressedTimeSources\0sceneCurrentTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTimeInspectorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   62,    2, 0x0a /* Public */,
       8,    1,   65,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      12,    1,   72,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::QString, 0x00095103,
      18, QMetaType::QVariantList, 0x00095103,
      19, QMetaType::Int, 0x00095103,
      20, QMetaType::QVariantList, 0x00095103,
      21, QMetaType::QVariantList, 0x00095103,
      22, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void pqTimeInspectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTimeInspectorWidget *_t = static_cast<pqTimeInspectorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dummySignal(); break;
        case 1: _t->sceneCurrentTimeChanged(); break;
        case 2: _t->suppressedTimeSourcesChanged(); break;
        case 3: _t->setServer((*reinterpret_cast< pqServer*(*)>(_a[1]))); break;
        case 4: _t->setSceneCurrentTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->updateScene(); break;
        case 6: _t->handleProxyNameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 7: _t->toggleTrackSuppression((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 8: _t->generalSettingsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqTimeInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTimeInspectorWidget::dummySignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqTimeInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTimeInspectorWidget::sceneCurrentTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqTimeInspectorWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTimeInspectorWidget::suppressedTimeSourcesChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqTimeInspectorWidget *_t = static_cast<pqTimeInspectorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->sceneStartTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->sceneEndTime(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->scenePlayMode(); break;
        case 3: *reinterpret_cast< QList<QVariant>*>(_v) = _t->sceneTimeSteps(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->sceneNumberOfFrames(); break;
        case 5: *reinterpret_cast< QList<QVariant>*>(_v) = _t->timeSources(); break;
        case 6: *reinterpret_cast< QList<QVariant>*>(_v) = _t->suppressedTimeSources(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->sceneCurrentTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqTimeInspectorWidget *_t = static_cast<pqTimeInspectorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSceneStartTime(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setSceneEndTime(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setScenePlayMode(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSceneTimeSteps(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 4: _t->setSceneNumberOfFrames(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setTimeSources(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 6: _t->setSuppressedTimeSources(*reinterpret_cast< QList<QVariant>*>(_v)); break;
        case 7: _t->setSceneCurrentTime(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqTimeInspectorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqTimeInspectorWidget.data,
      qt_meta_data_pqTimeInspectorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTimeInspectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTimeInspectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTimeInspectorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqTimeInspectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqTimeInspectorWidget::dummySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqTimeInspectorWidget::sceneCurrentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqTimeInspectorWidget::suppressedTimeSourcesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
