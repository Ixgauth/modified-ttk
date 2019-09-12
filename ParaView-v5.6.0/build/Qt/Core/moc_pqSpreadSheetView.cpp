/****************************************************************************
** Meta object code from reading C++ file 'pqSpreadSheetView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Core/pqSpreadSheetView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSpreadSheetView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSpreadSheetView_t {
    QByteArrayData data[19];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSpreadSheetView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSpreadSheetView_t qt_meta_stringdata_pqSpreadSheetView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqSpreadSheetView"
QT_MOC_LITERAL(1, 18, 7), // "showing"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(4, 49, 4), // "repr"
QT_MOC_LITERAL(5, 54, 15), // "viewportUpdated"
QT_MOC_LITERAL(6, 70, 19), // "onAddRepresentation"
QT_MOC_LITERAL(7, 90, 17), // "pqRepresentation*"
QT_MOC_LITERAL(8, 108, 30), // "updateRepresentationVisibility"
QT_MOC_LITERAL(9, 139, 7), // "visible"
QT_MOC_LITERAL(10, 147, 13), // "onBeginRender"
QT_MOC_LITERAL(11, 161, 11), // "onEndRender"
QT_MOC_LITERAL(12, 173, 17), // "onCreateSelection"
QT_MOC_LITERAL(13, 191, 17), // "vtkSMSourceProxy*"
QT_MOC_LITERAL(14, 209, 9), // "selSource"
QT_MOC_LITERAL(15, 219, 15), // "onSelectionOnly"
QT_MOC_LITERAL(16, 235, 17), // "onFontSizeChanged"
QT_MOC_LITERAL(17, 253, 12), // "createWidget"
QT_MOC_LITERAL(18, 266, 8) // "QWidget*"

    },
    "pqSpreadSheetView\0showing\0\0"
    "pqDataRepresentation*\0repr\0viewportUpdated\0"
    "onAddRepresentation\0pqRepresentation*\0"
    "updateRepresentationVisibility\0visible\0"
    "onBeginRender\0onEndRender\0onCreateSelection\0"
    "vtkSMSourceProxy*\0selSource\0onSelectionOnly\0"
    "onFontSizeChanged\0createWidget\0QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSpreadSheetView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   68,    2, 0x0a /* Public */,
       8,    2,   71,    2, 0x09 /* Protected */,
      10,    0,   76,    2, 0x09 /* Protected */,
      11,    0,   77,    2, 0x09 /* Protected */,
      12,    1,   78,    2, 0x09 /* Protected */,
      15,    0,   81,    2, 0x09 /* Protected */,
      16,    0,   82,    2, 0x09 /* Protected */,
      17,    0,   83,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    4,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 18,

       0        // eod
};

void pqSpreadSheetView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSpreadSheetView *_t = static_cast<pqSpreadSheetView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showing((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->viewportUpdated(); break;
        case 2: _t->onAddRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 3: _t->updateRepresentationVisibility((*reinterpret_cast< pqRepresentation*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->onBeginRender(); break;
        case 5: _t->onEndRender(); break;
        case 6: _t->onCreateSelection((*reinterpret_cast< vtkSMSourceProxy*(*)>(_a[1]))); break;
        case 7: _t->onSelectionOnly(); break;
        case 8: _t->onFontSizeChanged(); break;
        case 9: { QWidget* _r = _t->createWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSpreadSheetView::*_t)(pqDataRepresentation * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSpreadSheetView::showing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqSpreadSheetView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSpreadSheetView::viewportUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqSpreadSheetView::staticMetaObject = {
    { &pqView::staticMetaObject, qt_meta_stringdata_pqSpreadSheetView.data,
      qt_meta_data_pqSpreadSheetView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSpreadSheetView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSpreadSheetView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSpreadSheetView.stringdata0))
        return static_cast<void*>(this);
    return pqView::qt_metacast(_clname);
}

int pqSpreadSheetView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void pqSpreadSheetView::showing(pqDataRepresentation * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqSpreadSheetView::viewportUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
