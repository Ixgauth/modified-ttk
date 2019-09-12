/****************************************************************************
** Meta object code from reading C++ file 'pqColorMapEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqColorMapEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqColorMapEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqColorMapEditor_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqColorMapEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqColorMapEditor_t qt_meta_stringdata_pqColorMapEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqColorMapEditor"
QT_MOC_LITERAL(1, 17, 12), // "updateActive"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "updatePanel"
QT_MOC_LITERAL(4, 43, 11), // "renderViews"
QT_MOC_LITERAL(5, 55, 13), // "saveAsDefault"
QT_MOC_LITERAL(6, 69, 18), // "saveAsArrayDefault"
QT_MOC_LITERAL(7, 88, 15), // "restoreDefaults"
QT_MOC_LITERAL(8, 104, 13), // "setAutoUpdate"
QT_MOC_LITERAL(9, 118, 14), // "updateIfNeeded"
QT_MOC_LITERAL(10, 133, 22) // "updateScalarBarButtons"

    },
    "pqColorMapEditor\0updateActive\0\0"
    "updatePanel\0renderViews\0saveAsDefault\0"
    "saveAsArrayDefault\0restoreDefaults\0"
    "setAutoUpdate\0updateIfNeeded\0"
    "updateScalarBarButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqColorMapEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    1,   65,    2, 0x09 /* Protected */,
       9,    0,   68,    2, 0x09 /* Protected */,
      10,    0,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqColorMapEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqColorMapEditor *_t = static_cast<pqColorMapEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateActive(); break;
        case 1: _t->updatePanel(); break;
        case 2: _t->renderViews(); break;
        case 3: _t->saveAsDefault(); break;
        case 4: _t->saveAsArrayDefault(); break;
        case 5: _t->restoreDefaults(); break;
        case 6: _t->setAutoUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateIfNeeded(); break;
        case 8: _t->updateScalarBarButtons(); break;
        default: ;
        }
    }
}

const QMetaObject pqColorMapEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqColorMapEditor.data,
      qt_meta_data_pqColorMapEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqColorMapEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqColorMapEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqColorMapEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqColorMapEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
