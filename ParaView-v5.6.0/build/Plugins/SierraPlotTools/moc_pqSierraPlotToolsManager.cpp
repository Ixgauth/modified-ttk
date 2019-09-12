/****************************************************************************
** Meta object code from reading C++ file 'pqSierraPlotToolsManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Plugins/SierraPlotTools/pqSierraPlotToolsManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSierraPlotToolsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSierraPlotToolsManager_t {
    QByteArrayData data[16];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSierraPlotToolsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSierraPlotToolsManager_t qt_meta_stringdata_pqSierraPlotToolsManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "pqSierraPlotToolsManager"
QT_MOC_LITERAL(1, 25, 14), // "createdPlotGUI"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "createPlot"
QT_MOC_LITERAL(4, 52, 19), // "showDataLoadManager"
QT_MOC_LITERAL(5, 72, 18), // "checkActionEnabled"
QT_MOC_LITERAL(6, 91, 13), // "showSolidMesh"
QT_MOC_LITERAL(7, 105, 22), // "showWireframeSolidMesh"
QT_MOC_LITERAL(8, 128, 24), // "showWireframeAndBackMesh"
QT_MOC_LITERAL(9, 153, 18), // "toggleBackgroundBW"
QT_MOC_LITERAL(10, 172, 18), // "actOnPlotSelection"
QT_MOC_LITERAL(11, 191, 29), // "slotVariableDeselectionByName"
QT_MOC_LITERAL(12, 221, 6), // "varStr"
QT_MOC_LITERAL(13, 228, 27), // "slotVariableSelectionByName"
QT_MOC_LITERAL(14, 256, 22), // "slotPlotDialogAccepted"
QT_MOC_LITERAL(15, 279, 36) // "slotUseParaViewGUIToSelectNod..."

    },
    "pqSierraPlotToolsManager\0createdPlotGUI\0"
    "\0createPlot\0showDataLoadManager\0"
    "checkActionEnabled\0showSolidMesh\0"
    "showWireframeSolidMesh\0showWireframeAndBackMesh\0"
    "toggleBackgroundBW\0actOnPlotSelection\0"
    "slotVariableDeselectionByName\0varStr\0"
    "slotVariableSelectionByName\0"
    "slotPlotDialogAccepted\0"
    "slotUseParaViewGUIToSelectNodesCheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSierraPlotToolsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqSierraPlotToolsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSierraPlotToolsManager *_t = static_cast<pqSierraPlotToolsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createdPlotGUI(); break;
        case 1: _t->createPlot(); break;
        case 2: _t->showDataLoadManager(); break;
        case 3: _t->checkActionEnabled(); break;
        case 4: _t->showSolidMesh(); break;
        case 5: _t->showWireframeSolidMesh(); break;
        case 6: _t->showWireframeAndBackMesh(); break;
        case 7: _t->toggleBackgroundBW(); break;
        case 8: _t->actOnPlotSelection(); break;
        case 9: _t->slotVariableDeselectionByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->slotVariableSelectionByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->slotPlotDialogAccepted(); break;
        case 12: _t->slotUseParaViewGUIToSelectNodesCheck(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSierraPlotToolsManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSierraPlotToolsManager::createdPlotGUI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqSierraPlotToolsManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSierraPlotToolsManager::createPlot)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject pqSierraPlotToolsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqSierraPlotToolsManager.data,
      qt_meta_data_pqSierraPlotToolsManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSierraPlotToolsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSierraPlotToolsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSierraPlotToolsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqSierraPlotToolsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void pqSierraPlotToolsManager::createdPlotGUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pqSierraPlotToolsManager::createPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
