/****************************************************************************
** Meta object code from reading C++ file 'pqStandardViewFrameActionsImplementation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqStandardViewFrameActionsImplementation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqStandardViewFrameActionsImplementation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqStandardViewFrameActionsImplementation_t {
    QByteArrayData data[15];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqStandardViewFrameActionsImplementation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqStandardViewFrameActionsImplementation_t qt_meta_stringdata_pqStandardViewFrameActionsImplementation = {
    {
QT_MOC_LITERAL(0, 0, 40), // "pqStandardViewFrameActionsImp..."
QT_MOC_LITERAL(1, 41, 22), // "aboutToShowConvertMenu"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 7), // "invoked"
QT_MOC_LITERAL(4, 73, 27), // "selectSurfaceCellsTriggered"
QT_MOC_LITERAL(5, 101, 28), // "selectSurfacePointsTriggered"
QT_MOC_LITERAL(6, 130, 27), // "selectFrustumCellsTriggered"
QT_MOC_LITERAL(7, 158, 28), // "selectFrustumPointsTriggered"
QT_MOC_LITERAL(8, 187, 21), // "selectBlocksTriggered"
QT_MOC_LITERAL(9, 209, 12), // "escTriggered"
QT_MOC_LITERAL(10, 222, 22), // "manageGroupExclusivity"
QT_MOC_LITERAL(11, 245, 8), // "QAction*"
QT_MOC_LITERAL(12, 254, 23), // "escapeableActionToggled"
QT_MOC_LITERAL(13, 278, 7), // "checked"
QT_MOC_LITERAL(14, 286, 27) // "interactiveSelectionToggled"

    },
    "pqStandardViewFrameActionsImplementation\0"
    "aboutToShowConvertMenu\0\0invoked\0"
    "selectSurfaceCellsTriggered\0"
    "selectSurfacePointsTriggered\0"
    "selectFrustumCellsTriggered\0"
    "selectFrustumPointsTriggered\0"
    "selectBlocksTriggered\0escTriggered\0"
    "manageGroupExclusivity\0QAction*\0"
    "escapeableActionToggled\0checked\0"
    "interactiveSelectionToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqStandardViewFrameActionsImplementation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    0,   71,    2, 0x09 /* Protected */,
       5,    0,   72,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x09 /* Protected */,
       7,    0,   74,    2, 0x09 /* Protected */,
       8,    0,   75,    2, 0x09 /* Protected */,
       9,    0,   76,    2, 0x09 /* Protected */,
      10,    1,   77,    2, 0x09 /* Protected */,
      12,    1,   80,    2, 0x09 /* Protected */,
      14,    1,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void pqStandardViewFrameActionsImplementation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqStandardViewFrameActionsImplementation *_t = static_cast<pqStandardViewFrameActionsImplementation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToShowConvertMenu(); break;
        case 1: _t->invoked(); break;
        case 2: _t->selectSurfaceCellsTriggered(); break;
        case 3: _t->selectSurfacePointsTriggered(); break;
        case 4: _t->selectFrustumCellsTriggered(); break;
        case 5: _t->selectFrustumPointsTriggered(); break;
        case 6: _t->selectBlocksTriggered(); break;
        case 7: _t->escTriggered(); break;
        case 8: _t->manageGroupExclusivity((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->escapeableActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->interactiveSelectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqStandardViewFrameActionsImplementation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqStandardViewFrameActionsImplementation.data,
      qt_meta_data_pqStandardViewFrameActionsImplementation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqStandardViewFrameActionsImplementation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqStandardViewFrameActionsImplementation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqStandardViewFrameActionsImplementation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "pqViewFrameActionsInterface"))
        return static_cast< pqViewFrameActionsInterface*>(this);
    if (!strcmp(_clname, "com.kitware/paraview/viewframeactions"))
        return static_cast< pqViewFrameActionsInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int pqStandardViewFrameActionsImplementation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
