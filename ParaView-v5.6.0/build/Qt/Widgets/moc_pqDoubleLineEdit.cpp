/****************************************************************************
** Meta object code from reading C++ file 'pqDoubleLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqDoubleLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDoubleLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDoubleLineEdit_t {
    QByteArrayData data[22];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDoubleLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDoubleLineEdit_t qt_meta_stringdata_pqDoubleLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqDoubleLineEdit"
QT_MOC_LITERAL(1, 17, 42), // "fullPrecisionTextChangedAndEd..."
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 24), // "fullPrecisionTextChanged"
QT_MOC_LITERAL(4, 86, 20), // "setFullPrecisionText"
QT_MOC_LITERAL(5, 107, 5), // "_text"
QT_MOC_LITERAL(6, 113, 11), // "setNotation"
QT_MOC_LITERAL(7, 125, 18), // "RealNumberNotation"
QT_MOC_LITERAL(8, 144, 9), // "_notation"
QT_MOC_LITERAL(9, 154, 12), // "setPrecision"
QT_MOC_LITERAL(10, 167, 9), // "precision"
QT_MOC_LITERAL(11, 177, 32), // "setUseGlobalPrecisionAndNotation"
QT_MOC_LITERAL(12, 210, 5), // "value"
QT_MOC_LITERAL(13, 216, 16), // "onEditingStarted"
QT_MOC_LITERAL(14, 233, 17), // "onEditingFinished"
QT_MOC_LITERAL(15, 251, 49), // "triggerFullPrecisionTextChang..."
QT_MOC_LITERAL(16, 301, 17), // "fullPrecisionText"
QT_MOC_LITERAL(17, 319, 8), // "notation"
QT_MOC_LITERAL(18, 328, 29), // "useGlobalPrecisionAndNotation"
QT_MOC_LITERAL(19, 358, 13), // "MixedNotation"
QT_MOC_LITERAL(20, 372, 18), // "ScientificNotation"
QT_MOC_LITERAL(21, 391, 13) // "FixedNotation"

    },
    "pqDoubleLineEdit\0"
    "fullPrecisionTextChangedAndEditingFinished\0"
    "\0fullPrecisionTextChanged\0"
    "setFullPrecisionText\0_text\0setNotation\0"
    "RealNumberNotation\0_notation\0setPrecision\0"
    "precision\0setUseGlobalPrecisionAndNotation\0"
    "value\0onEditingStarted\0onEditingFinished\0"
    "triggerFullPrecisionTextChangedAndEditingFinished\0"
    "fullPrecisionText\0notation\0"
    "useGlobalPrecisionAndNotation\0"
    "MixedNotation\0ScientificNotation\0"
    "FixedNotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDoubleLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   78, // properties
       1,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   63,    2, 0x0a /* Public */,
       6,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x09 /* Protected */,
      14,    0,   76,    2, 0x09 /* Protected */,
      15,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095103,
      17, 0x80000000 | 7, 0x0009510b,
      10, QMetaType::Int, 0x00095103,
      18, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
       7, 0x0,    3,   94,

 // enum data: key, value
      19, uint(pqDoubleLineEdit::MixedNotation),
      20, uint(pqDoubleLineEdit::ScientificNotation),
      21, uint(pqDoubleLineEdit::FixedNotation),

       0        // eod
};

void pqDoubleLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDoubleLineEdit *_t = static_cast<pqDoubleLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fullPrecisionTextChangedAndEditingFinished(); break;
        case 1: _t->fullPrecisionTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFullPrecisionText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setNotation((*reinterpret_cast< RealNumberNotation(*)>(_a[1]))); break;
        case 4: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setUseGlobalPrecisionAndNotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onEditingStarted(); break;
        case 7: _t->onEditingFinished(); break;
        case 8: _t->triggerFullPrecisionTextChangedAndEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqDoubleLineEdit::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDoubleLineEdit::fullPrecisionTextChangedAndEditingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqDoubleLineEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDoubleLineEdit::fullPrecisionTextChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqDoubleLineEdit *_t = static_cast<pqDoubleLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fullPrecisionText(); break;
        case 1: *reinterpret_cast< RealNumberNotation*>(_v) = _t->notation(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->precision(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->useGlobalPrecisionAndNotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqDoubleLineEdit *_t = static_cast<pqDoubleLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFullPrecisionText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNotation(*reinterpret_cast< RealNumberNotation*>(_v)); break;
        case 2: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setUseGlobalPrecisionAndNotation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqDoubleLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_pqDoubleLineEdit.data,
      qt_meta_data_pqDoubleLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDoubleLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDoubleLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDoubleLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int pqDoubleLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqDoubleLineEdit::fullPrecisionTextChangedAndEditingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqDoubleLineEdit::fullPrecisionTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
