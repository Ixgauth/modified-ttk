/****************************************************************************
** Meta object code from reading C++ file 'pqDelimitedTextParser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Widgets/pqDelimitedTextParser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqDelimitedTextParser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqDelimitedTextParser_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqDelimitedTextParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqDelimitedTextParser_t qt_meta_stringdata_pqDelimitedTextParser = {
    {
QT_MOC_LITERAL(0, 0, 21), // "pqDelimitedTextParser"
QT_MOC_LITERAL(1, 22, 12), // "startParsing"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "parseSeries"
QT_MOC_LITERAL(4, 48, 13) // "finishParsing"

    },
    "pqDelimitedTextParser\0startParsing\0\0"
    "parseSeries\0finishParsing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqDelimitedTextParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       4,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,

       0        // eod
};

void pqDelimitedTextParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqDelimitedTextParser *_t = static_cast<pqDelimitedTextParser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startParsing(); break;
        case 1: _t->parseSeries((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->finishParsing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqDelimitedTextParser::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDelimitedTextParser::startParsing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqDelimitedTextParser::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDelimitedTextParser::parseSeries)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqDelimitedTextParser::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqDelimitedTextParser::finishParsing)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject pqDelimitedTextParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqDelimitedTextParser.data,
      qt_meta_data_pqDelimitedTextParser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqDelimitedTextParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqDelimitedTextParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqDelimitedTextParser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqDelimitedTextParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void pqDelimitedTextParser::startParsing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqDelimitedTextParser::parseSeries(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqDelimitedTextParser::finishParsing()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
