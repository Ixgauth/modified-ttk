/****************************************************************************
** Meta object code from reading C++ file 'pqCustomizeShortcutsReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/ApplicationComponents/pqCustomizeShortcutsReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCustomizeShortcutsReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCustomizeShortcutsReaction_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCustomizeShortcutsReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCustomizeShortcutsReaction_t qt_meta_stringdata_pqCustomizeShortcutsReaction = {
    {
QT_MOC_LITERAL(0, 0, 28) // "pqCustomizeShortcutsReaction"

    },
    "pqCustomizeShortcutsReaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCustomizeShortcutsReaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void pqCustomizeShortcutsReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject pqCustomizeShortcutsReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqCustomizeShortcutsReaction.data,
      qt_meta_data_pqCustomizeShortcutsReaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCustomizeShortcutsReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCustomizeShortcutsReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCustomizeShortcutsReaction.stringdata0))
        return static_cast<void*>(this);
    return pqReaction::qt_metacast(_clname);
}

int pqCustomizeShortcutsReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
