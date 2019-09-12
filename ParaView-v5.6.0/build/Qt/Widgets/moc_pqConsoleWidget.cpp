/****************************************************************************
** Meta object code from reading C++ file 'pqConsoleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqConsoleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqConsoleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqConsoleWidget_t {
    QByteArrayData data[14];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqConsoleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqConsoleWidget_t qt_meta_stringdata_pqConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pqConsoleWidget"
QT_MOC_LITERAL(1, 16, 14), // "executeCommand"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "Command"
QT_MOC_LITERAL(4, 40, 19), // "consoleFocusInEvent"
QT_MOC_LITERAL(5, 60, 11), // "printString"
QT_MOC_LITERAL(6, 72, 4), // "Text"
QT_MOC_LITERAL(7, 77, 12), // "printCommand"
QT_MOC_LITERAL(8, 90, 3), // "cmd"
QT_MOC_LITERAL(9, 94, 5), // "clear"
QT_MOC_LITERAL(10, 100, 6), // "prompt"
QT_MOC_LITERAL(11, 107, 4), // "text"
QT_MOC_LITERAL(12, 112, 16), // "insertCompletion"
QT_MOC_LITERAL(13, 129, 9) // "takeFocus"

    },
    "pqConsoleWidget\0executeCommand\0\0Command\0"
    "consoleFocusInEvent\0printString\0Text\0"
    "printCommand\0cmd\0clear\0prompt\0text\0"
    "insertCompletion\0takeFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqConsoleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void pqConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqConsoleWidget *_t = static_cast<pqConsoleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->consoleFocusInEvent(); break;
        case 2: _t->printString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->printCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->prompt((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->insertCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->takeFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqConsoleWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqConsoleWidget::executeCommand)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqConsoleWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqConsoleWidget::consoleFocusInEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqConsoleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqConsoleWidget.data,
      qt_meta_data_pqConsoleWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqConsoleWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void pqConsoleWidget::executeCommand(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqConsoleWidget::consoleFocusInEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
