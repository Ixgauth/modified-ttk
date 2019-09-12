/****************************************************************************
** Meta object code from reading C++ file 'pqAnimationKeyFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqAnimationKeyFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqAnimationKeyFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqAnimationKeyFrame_t {
    QByteArrayData data[19];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqAnimationKeyFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqAnimationKeyFrame_t qt_meta_stringdata_pqAnimationKeyFrame = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pqAnimationKeyFrame"
QT_MOC_LITERAL(1, 20, 17), // "startValueChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "endValueChanged"
QT_MOC_LITERAL(4, 55, 11), // "iconChanged"
QT_MOC_LITERAL(5, 67, 22), // "setNormalizedStartTime"
QT_MOC_LITERAL(6, 90, 1), // "t"
QT_MOC_LITERAL(7, 92, 20), // "setNormalizedEndTime"
QT_MOC_LITERAL(8, 113, 13), // "setStartValue"
QT_MOC_LITERAL(9, 127, 11), // "setEndValue"
QT_MOC_LITERAL(10, 139, 7), // "setIcon"
QT_MOC_LITERAL(11, 147, 4), // "icon"
QT_MOC_LITERAL(12, 152, 15), // "setBoundingRect"
QT_MOC_LITERAL(13, 168, 1), // "r"
QT_MOC_LITERAL(14, 170, 10), // "adjustRect"
QT_MOC_LITERAL(15, 181, 19), // "normalizedStartTime"
QT_MOC_LITERAL(16, 201, 17), // "normalizedEndTime"
QT_MOC_LITERAL(17, 219, 10), // "startValue"
QT_MOC_LITERAL(18, 230, 8) // "endValue"

    },
    "pqAnimationKeyFrame\0startValueChanged\0"
    "\0endValueChanged\0iconChanged\0"
    "setNormalizedStartTime\0t\0setNormalizedEndTime\0"
    "setStartValue\0setEndValue\0setIcon\0"
    "icon\0setBoundingRect\0r\0adjustRect\0"
    "normalizedStartTime\0normalizedEndTime\0"
    "startValue\0endValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqAnimationKeyFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   86, // properties
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
       7,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      14,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QIcon,   11,
    QMetaType::Void, QMetaType::QRectF,   13,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::QVariant, 0x00095103,
      18, QMetaType::QVariant, 0x00095103,
      11, QMetaType::QIcon, 0x00095103,

       0        // eod
};

void pqAnimationKeyFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqAnimationKeyFrame *_t = static_cast<pqAnimationKeyFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startValueChanged(); break;
        case 1: _t->endValueChanged(); break;
        case 2: _t->iconChanged(); break;
        case 3: _t->setNormalizedStartTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setNormalizedEndTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setStartValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 6: _t->setEndValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->setIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 8: _t->setBoundingRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 9: _t->adjustRect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqAnimationKeyFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationKeyFrame::startValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqAnimationKeyFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationKeyFrame::endValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqAnimationKeyFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqAnimationKeyFrame::iconChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqAnimationKeyFrame *_t = static_cast<pqAnimationKeyFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->normalizedStartTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->normalizedEndTime(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->startValue(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->endValue(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqAnimationKeyFrame *_t = static_cast<pqAnimationKeyFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNormalizedStartTime(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setNormalizedEndTime(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setStartValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setEndValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqAnimationKeyFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqAnimationKeyFrame.data,
      qt_meta_data_pqAnimationKeyFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqAnimationKeyFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqAnimationKeyFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqAnimationKeyFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int pqAnimationKeyFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void pqAnimationKeyFrame::startValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqAnimationKeyFrame::endValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pqAnimationKeyFrame::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
