/****************************************************************************
** Meta object code from reading C++ file 'pqItemViewSearchWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqItemViewSearchWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqItemViewSearchWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqItemViewSearchWidget_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqItemViewSearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqItemViewSearchWidget_t qt_meta_stringdata_pqItemViewSearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqItemViewSearchWidget"
QT_MOC_LITERAL(1, 23, 16), // "showSearchWidget"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "updateSearch"
QT_MOC_LITERAL(4, 54, 8), // "findNext"
QT_MOC_LITERAL(5, 63, 12), // "findPrevious"
QT_MOC_LITERAL(6, 76, 14), // "ItemSearchType"
QT_MOC_LITERAL(7, 91, 7), // "Current"
QT_MOC_LITERAL(8, 99, 4), // "Next"
QT_MOC_LITERAL(9, 104, 8) // "Previous"

    },
    "pqItemViewSearchWidget\0showSearchWidget\0"
    "\0updateSearch\0findNext\0findPrevious\0"
    "ItemSearchType\0Current\0Next\0Previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqItemViewSearchWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x09 /* Protected */,
       3,    0,   43,    2, 0x09 /* Protected */,
       4,    0,   44,    2, 0x09 /* Protected */,
       5,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       6, 0x0,    3,   50,

 // enum data: key, value
       7, uint(pqItemViewSearchWidget::Current),
       8, uint(pqItemViewSearchWidget::Next),
       9, uint(pqItemViewSearchWidget::Previous),

       0        // eod
};

void pqItemViewSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqItemViewSearchWidget *_t = static_cast<pqItemViewSearchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSearchWidget(); break;
        case 1: _t->updateSearch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updateSearch(); break;
        case 3: _t->findNext(); break;
        case 4: _t->findPrevious(); break;
        default: ;
        }
    }
}

const QMetaObject pqItemViewSearchWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqItemViewSearchWidget.data,
      qt_meta_data_pqItemViewSearchWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqItemViewSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqItemViewSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqItemViewSearchWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqItemViewSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
