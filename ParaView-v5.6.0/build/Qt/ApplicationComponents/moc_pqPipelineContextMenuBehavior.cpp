/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineContextMenuBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqPipelineContextMenuBehavior.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineContextMenuBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineContextMenuBehavior_t {
    QByteArrayData data[17];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineContextMenuBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineContextMenuBehavior_t qt_meta_stringdata_pqPipelineContextMenuBehavior = {
    {
QT_MOC_LITERAL(0, 0, 29), // "pqPipelineContextMenuBehavior"
QT_MOC_LITERAL(1, 30, 11), // "onViewAdded"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "pqView*"
QT_MOC_LITERAL(4, 51, 4), // "hide"
QT_MOC_LITERAL(5, 56, 9), // "hideBlock"
QT_MOC_LITERAL(6, 66, 13), // "showOnlyBlock"
QT_MOC_LITERAL(7, 80, 13), // "showAllBlocks"
QT_MOC_LITERAL(8, 94, 20), // "unsetBlockVisibility"
QT_MOC_LITERAL(9, 115, 13), // "setBlockColor"
QT_MOC_LITERAL(10, 129, 15), // "unsetBlockColor"
QT_MOC_LITERAL(11, 145, 15), // "setBlockOpacity"
QT_MOC_LITERAL(12, 161, 17), // "unsetBlockOpacity"
QT_MOC_LITERAL(13, 179, 15), // "reprTypeChanged"
QT_MOC_LITERAL(14, 195, 8), // "QAction*"
QT_MOC_LITERAL(15, 204, 6), // "action"
QT_MOC_LITERAL(16, 211, 18) // "colorMenuTriggered"

    },
    "pqPipelineContextMenuBehavior\0onViewAdded\0"
    "\0pqView*\0hide\0hideBlock\0showOnlyBlock\0"
    "showAllBlocks\0unsetBlockVisibility\0"
    "setBlockColor\0unsetBlockColor\0"
    "setBlockOpacity\0unsetBlockOpacity\0"
    "reprTypeChanged\0QAction*\0action\0"
    "colorMenuTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineContextMenuBehavior[] = {

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
       1,    1,   74,    2, 0x09 /* Protected */,
       4,    0,   77,    2, 0x09 /* Protected */,
       5,    0,   78,    2, 0x09 /* Protected */,
       6,    0,   79,    2, 0x09 /* Protected */,
       7,    0,   80,    2, 0x09 /* Protected */,
       8,    0,   81,    2, 0x09 /* Protected */,
       9,    0,   82,    2, 0x09 /* Protected */,
      10,    0,   83,    2, 0x09 /* Protected */,
      11,    0,   84,    2, 0x09 /* Protected */,
      12,    0,   85,    2, 0x09 /* Protected */,
      13,    1,   86,    2, 0x09 /* Protected */,
      16,    1,   89,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void pqPipelineContextMenuBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineContextMenuBehavior *_t = static_cast<pqPipelineContextMenuBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onViewAdded((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 1: _t->hide(); break;
        case 2: _t->hideBlock(); break;
        case 3: _t->showOnlyBlock(); break;
        case 4: _t->showAllBlocks(); break;
        case 5: _t->unsetBlockVisibility(); break;
        case 6: _t->setBlockColor(); break;
        case 7: _t->unsetBlockColor(); break;
        case 8: _t->setBlockOpacity(); break;
        case 9: _t->unsetBlockOpacity(); break;
        case 10: _t->reprTypeChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->colorMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqPipelineContextMenuBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPipelineContextMenuBehavior.data,
      qt_meta_data_pqPipelineContextMenuBehavior,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineContextMenuBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineContextMenuBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineContextMenuBehavior.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pqPipelineContextMenuBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
