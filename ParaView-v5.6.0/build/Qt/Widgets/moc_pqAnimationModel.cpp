/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqAnimationModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimationModel_t {
    QByteArrayData data[38];
    char stringdata0[411];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimationModel_t qt_meta_stringdata_pqAnimationModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqAnimationModel"
QT_MOC_LITERAL(1, 17, 13), // "trackSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "pqAnimationTrack*"
QT_MOC_LITERAL(4, 50, 14), // "currentTimeSet"
QT_MOC_LITERAL(5, 65, 19), // "keyFrameTimeChanged"
QT_MOC_LITERAL(6, 85, 5), // "track"
QT_MOC_LITERAL(7, 91, 20), // "pqAnimationKeyFrame*"
QT_MOC_LITERAL(8, 112, 2), // "kf"
QT_MOC_LITERAL(9, 115, 3), // "end"
QT_MOC_LITERAL(10, 119, 4), // "time"
QT_MOC_LITERAL(11, 124, 7), // "setMode"
QT_MOC_LITERAL(12, 132, 8), // "ModeType"
QT_MOC_LITERAL(13, 141, 8), // "setTicks"
QT_MOC_LITERAL(14, 150, 14), // "setCurrentTime"
QT_MOC_LITERAL(15, 165, 12), // "setStartTime"
QT_MOC_LITERAL(16, 178, 10), // "setEndTime"
QT_MOC_LITERAL(17, 189, 14), // "setInteractive"
QT_MOC_LITERAL(18, 204, 12), // "setTickMarks"
QT_MOC_LITERAL(19, 217, 3), // "num"
QT_MOC_LITERAL(20, 221, 7), // "double*"
QT_MOC_LITERAL(21, 229, 10), // "tick_marks"
QT_MOC_LITERAL(22, 240, 16), // "setTimePrecision"
QT_MOC_LITERAL(23, 257, 9), // "precision"
QT_MOC_LITERAL(24, 267, 15), // "setTimeNotation"
QT_MOC_LITERAL(25, 283, 8), // "notation"
QT_MOC_LITERAL(26, 292, 12), // "resizeTracks"
QT_MOC_LITERAL(27, 305, 16), // "trackNameChanged"
QT_MOC_LITERAL(28, 322, 14), // "enabledChanged"
QT_MOC_LITERAL(29, 337, 4), // "mode"
QT_MOC_LITERAL(30, 342, 5), // "ticks"
QT_MOC_LITERAL(31, 348, 11), // "currentTime"
QT_MOC_LITERAL(32, 360, 9), // "startTime"
QT_MOC_LITERAL(33, 370, 7), // "endTime"
QT_MOC_LITERAL(34, 378, 11), // "interactive"
QT_MOC_LITERAL(35, 390, 4), // "Real"
QT_MOC_LITERAL(36, 395, 8), // "Sequence"
QT_MOC_LITERAL(37, 404, 6) // "Custom"

    },
    "pqAnimationModel\0trackSelected\0\0"
    "pqAnimationTrack*\0currentTimeSet\0"
    "keyFrameTimeChanged\0track\0"
    "pqAnimationKeyFrame*\0kf\0end\0time\0"
    "setMode\0ModeType\0setTicks\0setCurrentTime\0"
    "setStartTime\0setEndTime\0setInteractive\0"
    "setTickMarks\0num\0double*\0tick_marks\0"
    "setTimePrecision\0precision\0setTimeNotation\0"
    "notation\0resizeTracks\0trackNameChanged\0"
    "enabledChanged\0mode\0ticks\0currentTime\0"
    "startTime\0endTime\0interactive\0Real\0"
    "Sequence\0Custom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimationModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       6,  136, // properties
       1,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    4,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  104,    2, 0x0a /* Public */,
      13,    1,  107,    2, 0x0a /* Public */,
      14,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      16,    1,  116,    2, 0x0a /* Public */,
      17,    1,  119,    2, 0x0a /* Public */,
      18,    2,  122,    2, 0x0a /* Public */,
      22,    1,  127,    2, 0x0a /* Public */,
      24,    1,  130,    2, 0x0a /* Public */,
      26,    0,  133,    2, 0x09 /* Protected */,
      27,    0,  134,    2, 0x09 /* Protected */,
      28,    0,  135,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7, QMetaType::Int, QMetaType::Double,    6,    8,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::QChar,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      29, 0x80000000 | 12, 0x0009510b,
      30, QMetaType::Int, 0x00095103,
      31, QMetaType::Double, 0x00095103,
      32, QMetaType::Double, 0x00095103,
      33, QMetaType::Double, 0x00095103,
      34, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      12, 0x0,    3,  158,

 // enum data: key, value
      35, uint(pqAnimationModel::Real),
      36, uint(pqAnimationModel::Sequence),
      37, uint(pqAnimationModel::Custom),

       0        // eod
};

void pqAnimationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimationModel *_t = static_cast<pqAnimationModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackSelected((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1]))); break;
        case 1: _t->currentTimeSet((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->keyFrameTimeChanged((*reinterpret_cast< pqAnimationTrack*(*)>(_a[1])),(*reinterpret_cast< pqAnimationKeyFrame*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->setMode((*reinterpret_cast< ModeType(*)>(_a[1]))); break;
        case 4: _t->setTicks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setStartTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setEndTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setInteractive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setTickMarks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 10: _t->setTimePrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setTimeNotation((*reinterpret_cast< const QChar(*)>(_a[1]))); break;
        case 12: _t->resizeTracks(); break;
        case 13: _t->trackNameChanged(); break;
        case 14: _t->enabledChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqAnimationModel::*_t)(pqAnimationTrack * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationModel::trackSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqAnimationModel::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationModel::currentTimeSet)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqAnimationModel::*_t)(pqAnimationTrack * , pqAnimationKeyFrame * , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationModel::keyFrameTimeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqAnimationModel *_t = static_cast<pqAnimationModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ModeType*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->ticks(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->currentTime(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->startTime(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->endTime(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqAnimationModel *_t = static_cast<pqAnimationModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< ModeType*>(_v)); break;
        case 1: _t->setTicks(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentTime(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setStartTime(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setEndTime(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqAnimationModel::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_pqAnimationModel.data,
      qt_meta_data_pqAnimationModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationModel.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int pqAnimationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqAnimationModel::trackSelected(pqAnimationTrack * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqAnimationModel::currentTimeSet(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqAnimationModel::keyFrameTimeChanged(pqAnimationTrack * _t1, pqAnimationKeyFrame * _t2, int _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
