/****************************************************************************
** Meta object code from reading C++ file 'pqTextEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqTextEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqTextEdit_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqTextEdit_t qt_meta_stringdata_pqTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "pqTextEdit"
QT_MOC_LITERAL(1, 11, 29), // "textChangedAndEditingFinished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "editingFinished"
QT_MOC_LITERAL(4, 58, 17), // "onEditingFinished"
QT_MOC_LITERAL(5, 76, 12) // "onTextEdited"

    },
    "pqTextEdit\0textChangedAndEditingFinished\0"
    "\0editingFinished\0onEditingFinished\0"
    "onTextEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqTextEdit *_t = static_cast<pqTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChangedAndEditingFinished(); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->onEditingFinished(); break;
        case 3: _t->onTextEdited(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTextEdit::textChangedAndEditingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqTextEdit::editingFinished)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pqTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_pqTextEdit.data,
      qt_meta_data_pqTextEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int pqTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqTextEdit::textChangedAndEditingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqTextEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
