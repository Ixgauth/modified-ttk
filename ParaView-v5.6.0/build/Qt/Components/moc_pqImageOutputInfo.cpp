/****************************************************************************
** Meta object code from reading C++ file 'pqImageOutputInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqImageOutputInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqImageOutputInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqImageOutputInfo_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqImageOutputInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqImageOutputInfo_t qt_meta_stringdata_pqImageOutputInfo = {
    {
QT_MOC_LITERAL(0, 0, 17), // "pqImageOutputInfo"
QT_MOC_LITERAL(1, 18, 16), // "compositeChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "checked"
QT_MOC_LITERAL(4, 44, 19), // "updateImageFileName"
QT_MOC_LITERAL(5, 64, 28), // "updateImageFileNameExtension"
QT_MOC_LITERAL(6, 93, 16), // "updateCinemaType"
QT_MOC_LITERAL(7, 110, 15), // "updateComposite"
QT_MOC_LITERAL(8, 126, 20) // "endisAbleDirectFloat"

    },
    "pqImageOutputInfo\0compositeChanged\0\0"
    "checked\0updateImageFileName\0"
    "updateImageFileNameExtension\0"
    "updateCinemaType\0updateComposite\0"
    "endisAbleDirectFloat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqImageOutputInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void pqImageOutputInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqImageOutputInfo *_t = static_cast<pqImageOutputInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->compositeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateImageFileName(); break;
        case 2: _t->updateImageFileNameExtension((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateCinemaType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateComposite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->endisAbleDirectFloat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqImageOutputInfo::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqImageOutputInfo::compositeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqImageOutputInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqImageOutputInfo.data,
      qt_meta_data_pqImageOutputInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqImageOutputInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqImageOutputInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqImageOutputInfo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqImageOutputInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pqImageOutputInfo::compositeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
