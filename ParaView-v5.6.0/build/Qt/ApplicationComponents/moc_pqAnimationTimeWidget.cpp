/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationTimeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqAnimationTimeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationTimeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimationTimeWidget_t {
    QByteArrayData data[19];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimationTimeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimationTimeWidget_t qt_meta_stringdata_pqAnimationTimeWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqAnimationTimeWidget"
QT_MOC_LITERAL(1, 22, 16), // "timeValueChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "playModeChanged"
QT_MOC_LITERAL(4, 56, 11), // "dummySignal"
QT_MOC_LITERAL(5, 68, 17), // "setAnimationScene"
QT_MOC_LITERAL(6, 86, 11), // "vtkSMProxy*"
QT_MOC_LITERAL(7, 98, 14), // "animationScene"
QT_MOC_LITERAL(8, 113, 22), // "repopulateTimeComboBox"
QT_MOC_LITERAL(9, 136, 34), // "updateTimestepCountLabelVisib..."
QT_MOC_LITERAL(10, 171, 18), // "timeSpinBoxChanged"
QT_MOC_LITERAL(11, 190, 19), // "timeLineEditChanged"
QT_MOC_LITERAL(12, 210, 19), // "timeComboBoxChanged"
QT_MOC_LITERAL(13, 230, 22), // "timeRadioButtonToggled"
QT_MOC_LITERAL(14, 253, 9), // "timeValue"
QT_MOC_LITERAL(15, 263, 13), // "timeStepCount"
QT_MOC_LITERAL(16, 277, 8), // "playMode"
QT_MOC_LITERAL(17, 286, 16), // "playModeReadOnly"
QT_MOC_LITERAL(18, 303, 9) // "timeLabel"

    },
    "pqAnimationTimeWidget\0timeValueChanged\0"
    "\0playModeChanged\0dummySignal\0"
    "setAnimationScene\0vtkSMProxy*\0"
    "animationScene\0repopulateTimeComboBox\0"
    "updateTimestepCountLabelVisibility\0"
    "timeSpinBoxChanged\0timeLineEditChanged\0"
    "timeComboBoxChanged\0timeRadioButtonToggled\0"
    "timeValue\0timeStepCount\0playMode\0"
    "playModeReadOnly\0timeLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimationTimeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   67,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Double, 0x00495103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void pqAnimationTimeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimationTimeWidget *_t = static_cast<pqAnimationTimeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeValueChanged(); break;
        case 1: _t->playModeChanged(); break;
        case 2: _t->dummySignal(); break;
        case 3: _t->setAnimationScene((*reinterpret_cast< vtkSMProxy*(*)>(_a[1]))); break;
        case 4: _t->repopulateTimeComboBox(); break;
        case 5: _t->updateTimestepCountLabelVisibility(); break;
        case 6: _t->timeSpinBoxChanged(); break;
        case 7: _t->timeLineEditChanged(); break;
        case 8: _t->timeComboBoxChanged(); break;
        case 9: _t->timeRadioButtonToggled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqAnimationTimeWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationTimeWidget::timeValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqAnimationTimeWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationTimeWidget::playModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqAnimationTimeWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationTimeWidget::dummySignal)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqAnimationTimeWidget *_t = static_cast<pqAnimationTimeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->timeValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->timeStepCount(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->playMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->playModeReadOnly(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->timeLabel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqAnimationTimeWidget *_t = static_cast<pqAnimationTimeWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimeValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setTimeStepCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPlayMode(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPlayModeReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTimeLabel(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqAnimationTimeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqAnimationTimeWidget.data,
      qt_meta_data_pqAnimationTimeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimationTimeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimationTimeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationTimeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqAnimationTimeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqAnimationTimeWidget::timeValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqAnimationTimeWidget::playModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqAnimationTimeWidget::dummySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
