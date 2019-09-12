/****************************************************************************
** Meta object code from reading C++ file 'pqCollaborationPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCollaborationPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCollaborationPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCollaborationPanel_t {
    QByteArrayData data[30];
    char stringdata0[427];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCollaborationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCollaborationPanel_t qt_meta_stringdata_pqCollaborationPanel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqCollaborationPanel"
QT_MOC_LITERAL(1, 21, 18), // "triggerChatMessage"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "pqServer*"
QT_MOC_LITERAL(4, 51, 6), // "server"
QT_MOC_LITERAL(5, 58, 6), // "userId"
QT_MOC_LITERAL(6, 65, 8), // "QString&"
QT_MOC_LITERAL(7, 74, 10), // "msgContent"
QT_MOC_LITERAL(8, 85, 22), // "shareLocalMousePointer"
QT_MOC_LITERAL(9, 108, 25), // "disableFurtherConnections"
QT_MOC_LITERAL(10, 134, 17), // "delayUpdateCamera"
QT_MOC_LITERAL(11, 152, 13), // "vtkSMMessage*"
QT_MOC_LITERAL(12, 166, 3), // "msg"
QT_MOC_LITERAL(13, 170, 16), // "connectIDChanged"
QT_MOC_LITERAL(14, 187, 16), // "writeChatMessage"
QT_MOC_LITERAL(15, 204, 3), // "txt"
QT_MOC_LITERAL(16, 208, 12), // "onUserUpdate"
QT_MOC_LITERAL(17, 221, 11), // "onNewMaster"
QT_MOC_LITERAL(18, 233, 13), // "onUserMessage"
QT_MOC_LITERAL(19, 247, 21), // "connectViewLocalSlots"
QT_MOC_LITERAL(20, 269, 7), // "pqView*"
QT_MOC_LITERAL(21, 277, 24), // "disconnectViewLocalSlots"
QT_MOC_LITERAL(22, 302, 19), // "stopFollowingCamera"
QT_MOC_LITERAL(23, 322, 11), // "itemChanged"
QT_MOC_LITERAL(24, 334, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(25, 352, 4), // "item"
QT_MOC_LITERAL(26, 357, 17), // "cellDoubleClicked"
QT_MOC_LITERAL(27, 375, 16), // "followUserCamera"
QT_MOC_LITERAL(28, 392, 15), // "onServerChanged"
QT_MOC_LITERAL(29, 408, 18) // "onConnectIDChanged"

    },
    "pqCollaborationPanel\0triggerChatMessage\0"
    "\0pqServer*\0server\0userId\0QString&\0"
    "msgContent\0shareLocalMousePointer\0"
    "disableFurtherConnections\0delayUpdateCamera\0"
    "vtkSMMessage*\0msg\0connectIDChanged\0"
    "writeChatMessage\0txt\0onUserUpdate\0"
    "onNewMaster\0onUserMessage\0"
    "connectViewLocalSlots\0pqView*\0"
    "disconnectViewLocalSlots\0stopFollowingCamera\0"
    "itemChanged\0QTableWidgetItem*\0item\0"
    "cellDoubleClicked\0followUserCamera\0"
    "onServerChanged\0onConnectIDChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCollaborationPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   99,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
       9,    1,  109,    2, 0x06 /* Public */,
      10,    1,  112,    2, 0x06 /* Public */,
      13,    1,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    3,  118,    2, 0x0a /* Public */,
      16,    0,  125,    2, 0x0a /* Public */,
      17,    1,  126,    2, 0x0a /* Public */,
      18,    0,  129,    2, 0x09 /* Protected */,
      19,    1,  130,    2, 0x09 /* Protected */,
      21,    1,  133,    2, 0x09 /* Protected */,
      22,    0,  136,    2, 0x09 /* Protected */,
      23,    1,  137,    2, 0x09 /* Protected */,
      26,    2,  140,    2, 0x09 /* Protected */,
      27,    1,  145,    2, 0x09 /* Protected */,
      28,    0,  148,    2, 0x09 /* Protected */,
      29,    0,  149,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 6,    4,    5,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqCollaborationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqCollaborationPanel *_t = static_cast<pqCollaborationPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggerChatMessage((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->shareLocalMousePointer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->disableFurtherConnections((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->delayUpdateCamera((*reinterpret_cast< vtkSMMessage*(*)>(_a[1]))); break;
        case 4: _t->connectIDChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->writeChatMessage((*reinterpret_cast< pqServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->onUserUpdate(); break;
        case 7: _t->onNewMaster((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onUserMessage(); break;
        case 9: _t->connectViewLocalSlots((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 10: _t->disconnectViewLocalSlots((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 11: _t->stopFollowingCamera(); break;
        case 12: _t->itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->followUserCamera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onServerChanged(); break;
        case 16: _t->onConnectIDChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqCollaborationPanel::*_t)(pqServer * , int , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCollaborationPanel::triggerChatMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqCollaborationPanel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCollaborationPanel::shareLocalMousePointer)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqCollaborationPanel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCollaborationPanel::disableFurtherConnections)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (pqCollaborationPanel::*_t)(vtkSMMessage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCollaborationPanel::delayUpdateCamera)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (pqCollaborationPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqCollaborationPanel::connectIDChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject pqCollaborationPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqCollaborationPanel.data,
      qt_meta_data_pqCollaborationPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCollaborationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCollaborationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCollaborationPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqCollaborationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void pqCollaborationPanel::triggerChatMessage(pqServer * _t1, int _t2, QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqCollaborationPanel::shareLocalMousePointer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqCollaborationPanel::disableFurtherConnections(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pqCollaborationPanel::delayUpdateCamera(vtkSMMessage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pqCollaborationPanel::connectIDChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
