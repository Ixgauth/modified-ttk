/****************************************************************************
** Meta object code from reading C++ file 'pqCatalystExportInspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqCatalystExportInspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCatalystExportInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCatalystExportInspector_t {
    QByteArrayData data[13];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCatalystExportInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCatalystExportInspector_t qt_meta_stringdata_pqCatalystExportInspector = {
    {
QT_MOC_LITERAL(0, 0, 25), // "pqCatalystExportInspector"
QT_MOC_LITERAL(1, 26, 6), // "Update"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "UpdateWriterCheckbox"
QT_MOC_LITERAL(4, 55, 1), // "i"
QT_MOC_LITERAL(5, 57, 12), // "ExportFilter"
QT_MOC_LITERAL(6, 70, 20), // "ConfigureWriterProxy"
QT_MOC_LITERAL(7, 91, 24), // "UpdateScreenshotCheckbox"
QT_MOC_LITERAL(8, 116, 10), // "ExportView"
QT_MOC_LITERAL(9, 127, 24), // "ConfigureScreenshotProxy"
QT_MOC_LITERAL(10, 152, 8), // "Advanced"
QT_MOC_LITERAL(11, 161, 4), // "Help"
QT_MOC_LITERAL(12, 166, 6) // "Search"

    },
    "pqCatalystExportInspector\0Update\0\0"
    "UpdateWriterCheckbox\0i\0ExportFilter\0"
    "ConfigureWriterProxy\0UpdateScreenshotCheckbox\0"
    "ExportView\0ConfigureScreenshotProxy\0"
    "Advanced\0Help\0Search"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCatalystExportInspector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    1,   75,    2, 0x08 /* Private */,
       3,    0,   78,    2, 0x28 /* Private | MethodCloned */,
       5,    1,   79,    2, 0x08 /* Private */,
       6,    0,   82,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x28 /* Private | MethodCloned */,
       8,    1,   87,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    1,   91,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void pqCatalystExportInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCatalystExportInspector *_t = static_cast<pqCatalystExportInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update(); break;
        case 1: _t->UpdateWriterCheckbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->UpdateWriterCheckbox(); break;
        case 3: _t->ExportFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->ConfigureWriterProxy(); break;
        case 5: _t->UpdateScreenshotCheckbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->UpdateScreenshotCheckbox(); break;
        case 7: _t->ExportView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->ConfigureScreenshotProxy(); break;
        case 9: _t->Advanced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->Help(); break;
        case 11: _t->Search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqCatalystExportInspector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqCatalystExportInspector.data,
      qt_meta_data_pqCatalystExportInspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCatalystExportInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCatalystExportInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCatalystExportInspector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqCatalystExportInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
