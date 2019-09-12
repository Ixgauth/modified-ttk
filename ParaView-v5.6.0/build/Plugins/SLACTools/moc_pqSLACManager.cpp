/****************************************************************************
** Meta object code from reading C++ file 'pqSLACManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Plugins/SLACTools/pqSLACManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSLACManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSLACManager_t {
    QByteArrayData data[19];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSLACManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSLACManager_t qt_meta_stringdata_pqSLACManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "pqSLACManager"
QT_MOC_LITERAL(1, 14, 19), // "showDataLoadManager"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "checkActionEnabled"
QT_MOC_LITERAL(4, 54, 9), // "showField"
QT_MOC_LITERAL(5, 64, 4), // "name"
QT_MOC_LITERAL(6, 69, 11), // "const char*"
QT_MOC_LITERAL(7, 81, 10), // "showEField"
QT_MOC_LITERAL(8, 92, 10), // "showBField"
QT_MOC_LITERAL(9, 103, 13), // "showParticles"
QT_MOC_LITERAL(10, 117, 4), // "show"
QT_MOC_LITERAL(11, 122, 13), // "showSolidMesh"
QT_MOC_LITERAL(12, 136, 22), // "showWireframeSolidMesh"
QT_MOC_LITERAL(13, 159, 24), // "showWireframeAndBackMesh"
QT_MOC_LITERAL(14, 184, 15), // "createPlotOverZ"
QT_MOC_LITERAL(15, 200, 18), // "toggleBackgroundBW"
QT_MOC_LITERAL(16, 219, 21), // "showStandardViewpoint"
QT_MOC_LITERAL(17, 241, 18), // "resetRangeTemporal"
QT_MOC_LITERAL(18, 260, 21) // "resetRangeCurrentTime"

    },
    "pqSLACManager\0showDataLoadManager\0\0"
    "checkActionEnabled\0showField\0name\0"
    "const char*\0showEField\0showBField\0"
    "showParticles\0show\0showSolidMesh\0"
    "showWireframeSolidMesh\0showWireframeAndBackMesh\0"
    "createPlotOverZ\0toggleBackgroundBW\0"
    "showStandardViewpoint\0resetRangeTemporal\0"
    "resetRangeCurrentTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSLACManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    1,   91,    2, 0x0a /* Public */,
       4,    1,   94,    2, 0x0a /* Public */,
       7,    0,   97,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x0a /* Public */,
       9,    1,   99,    2, 0x0a /* Public */,
      11,    0,  102,    2, 0x0a /* Public */,
      12,    0,  103,    2, 0x0a /* Public */,
      13,    0,  104,    2, 0x0a /* Public */,
      14,    0,  105,    2, 0x0a /* Public */,
      15,    0,  106,    2, 0x0a /* Public */,
      16,    0,  107,    2, 0x0a /* Public */,
      17,    0,  108,    2, 0x0a /* Public */,
      18,    0,  109,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 6,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqSLACManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSLACManager *_t = static_cast<pqSLACManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showDataLoadManager(); break;
        case 1: _t->checkActionEnabled(); break;
        case 2: _t->showField((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showField((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 4: _t->showEField(); break;
        case 5: _t->showBField(); break;
        case 6: _t->showParticles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showSolidMesh(); break;
        case 8: _t->showWireframeSolidMesh(); break;
        case 9: _t->showWireframeAndBackMesh(); break;
        case 10: _t->createPlotOverZ(); break;
        case 11: _t->toggleBackgroundBW(); break;
        case 12: _t->showStandardViewpoint(); break;
        case 13: _t->resetRangeTemporal(); break;
        case 14: _t->resetRangeCurrentTime(); break;
        default: ;
        }
    }
}

const QMetaObject pqSLACManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSLACManager.data,
      qt_meta_data_pqSLACManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSLACManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSLACManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSLACManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqSLACManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
