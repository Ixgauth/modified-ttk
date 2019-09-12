/****************************************************************************
** Meta object code from reading C++ file 'pqFileChooserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqFileChooserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqFileChooserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqFileChooserWidget_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqFileChooserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqFileChooserWidget_t qt_meta_stringdata_pqFileChooserWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pqFileChooserWidget"
QT_MOC_LITERAL(1, 20, 16), // "filenamesChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "filenameChanged"
QT_MOC_LITERAL(4, 54, 10), // "chooseFile"
QT_MOC_LITERAL(5, 65, 25), // "handleFileLineEditChanged"
QT_MOC_LITERAL(6, 91, 10), // "fileString"
QT_MOC_LITERAL(7, 102, 9), // "filenames"
QT_MOC_LITERAL(8, 112, 14), // "singleFilename"
QT_MOC_LITERAL(9, 127, 9), // "extension"
QT_MOC_LITERAL(10, 137, 16), // "useDirectoryMode"
QT_MOC_LITERAL(11, 154, 15), // "forceSingleFile"
QT_MOC_LITERAL(12, 170, 13) // "acceptAnyFile"

    },
    "pqFileChooserWidget\0filenamesChanged\0"
    "\0filenameChanged\0chooseFile\0"
    "handleFileLineEditChanged\0fileString\0"
    "filenames\0singleFilename\0extension\0"
    "useDirectoryMode\0forceSingleFile\0"
    "acceptAnyFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqFileChooserWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x09 /* Protected */,
       5,    1,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::QStringList, 0x00195103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void pqFileChooserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqFileChooserWidget *_t = static_cast<pqFileChooserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filenamesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->filenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->chooseFile(); break;
        case 3: _t->handleFileLineEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqFileChooserWidget::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqFileChooserWidget::filenamesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqFileChooserWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqFileChooserWidget::filenameChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqFileChooserWidget *_t = static_cast<pqFileChooserWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->filenames(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->singleFilename(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->extension(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->useDirectoryMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->forceSingleFile(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->acceptAnyFile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqFileChooserWidget *_t = static_cast<pqFileChooserWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilenames(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setSingleFilename(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setExtension(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUseDirectoryMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setForceSingleFile(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAcceptAnyFile(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqFileChooserWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqFileChooserWidget.data,
      qt_meta_data_pqFileChooserWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqFileChooserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqFileChooserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqFileChooserWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqFileChooserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqFileChooserWidget::filenamesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqFileChooserWidget::filenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
