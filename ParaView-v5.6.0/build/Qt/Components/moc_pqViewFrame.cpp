/****************************************************************************
** Meta object code from reading C++ file 'pqViewFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqViewFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqViewFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqViewFrame_t {
    QByteArrayData data[23];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqViewFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqViewFrame_t qt_meta_stringdata_pqViewFrame = {
    {
QT_MOC_LITERAL(0, 0, 11), // "pqViewFrame"
QT_MOC_LITERAL(1, 12, 13), // "buttonPressed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "button"
QT_MOC_LITERAL(4, 34, 15), // "actionTriggered"
QT_MOC_LITERAL(5, 50, 8), // "QAction*"
QT_MOC_LITERAL(6, 59, 6), // "action"
QT_MOC_LITERAL(7, 66, 13), // "swapPositions"
QT_MOC_LITERAL(8, 80, 5), // "other"
QT_MOC_LITERAL(9, 86, 10), // "finishDrag"
QT_MOC_LITERAL(10, 97, 12), // "pqViewFrame*"
QT_MOC_LITERAL(11, 110, 6), // "source"
QT_MOC_LITERAL(12, 117, 19), // "setBorderVisibility"
QT_MOC_LITERAL(13, 137, 3), // "val"
QT_MOC_LITERAL(14, 141, 21), // "setTitleBarVisibility"
QT_MOC_LITERAL(15, 163, 24), // "setDecorationsVisibility"
QT_MOC_LITERAL(16, 188, 17), // "onViewNameChanged"
QT_MOC_LITERAL(17, 206, 25), // "pqServerManagerModelItem*"
QT_MOC_LITERAL(18, 232, 11), // "eventFilter"
QT_MOC_LITERAL(19, 244, 7), // "QEvent*"
QT_MOC_LITERAL(20, 252, 13), // "buttonClicked"
QT_MOC_LITERAL(21, 266, 20), // "contextMenuRequested"
QT_MOC_LITERAL(22, 287, 12) // "finishedDrag"

    },
    "pqViewFrame\0buttonPressed\0\0button\0"
    "actionTriggered\0QAction*\0action\0"
    "swapPositions\0other\0finishDrag\0"
    "pqViewFrame*\0source\0setBorderVisibility\0"
    "val\0setTitleBarVisibility\0"
    "setDecorationsVisibility\0onViewNameChanged\0"
    "pqServerManagerModelItem*\0eventFilter\0"
    "QEvent*\0buttonClicked\0contextMenuRequested\0"
    "finishedDrag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqViewFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   86,    2, 0x0a /* Public */,
      14,    1,   89,    2, 0x0a /* Public */,
      15,    1,   92,    2, 0x0a /* Public */,
      16,    1,   95,    2, 0x0a /* Public */,
      18,    2,   98,    2, 0x0a /* Public */,
      20,    0,  103,    2, 0x09 /* Protected */,
      21,    1,  104,    2, 0x09 /* Protected */,
      22,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 19,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void pqViewFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqViewFrame *_t = static_cast<pqViewFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->swapPositions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->finishDrag((*reinterpret_cast< pqViewFrame*(*)>(_a[1]))); break;
        case 4: _t->setBorderVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTitleBarVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDecorationsVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onViewNameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->buttonClicked(); break;
        case 10: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->finishedDrag((*reinterpret_cast< pqViewFrame*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqViewFrame* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pqViewFrame* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqViewFrame::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqViewFrame::buttonPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqViewFrame::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqViewFrame::actionTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqViewFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqViewFrame::swapPositions)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqViewFrame::*_t)(pqViewFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqViewFrame::finishDrag)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject pqViewFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqViewFrame.data,
      qt_meta_data_pqViewFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqViewFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqViewFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqViewFrame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqViewFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void pqViewFrame::buttonPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqViewFrame::actionTriggered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqViewFrame::swapPositions(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqViewFrame::finishDrag(pqViewFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
