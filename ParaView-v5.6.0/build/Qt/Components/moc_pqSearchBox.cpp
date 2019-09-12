/****************************************************************************
** Meta object code from reading C++ file 'pqSearchBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqSearchBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSearchBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSearchBox_t {
    QByteArrayData data[20];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSearchBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSearchBox_t qt_meta_stringdata_pqSearchBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "pqSearchBox"
QT_MOC_LITERAL(1, 12, 23), // "advancedSearchActivated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "textChanged"
QT_MOC_LITERAL(4, 49, 17), // "settingKeyChanged"
QT_MOC_LITERAL(5, 67, 23), // "setAdvancedSearchActive"
QT_MOC_LITERAL(6, 91, 3), // "use"
QT_MOC_LITERAL(7, 95, 7), // "setText"
QT_MOC_LITERAL(8, 103, 4), // "text"
QT_MOC_LITERAL(9, 108, 13), // "setSettingKey"
QT_MOC_LITERAL(10, 122, 3), // "key"
QT_MOC_LITERAL(11, 126, 24), // "setAdvancedSearchEnabled"
QT_MOC_LITERAL(12, 151, 6), // "enable"
QT_MOC_LITERAL(13, 158, 23), // "onAdvancedButtonClicked"
QT_MOC_LITERAL(14, 182, 14), // "updateSettings"
QT_MOC_LITERAL(15, 197, 18), // "updateFromSettings"
QT_MOC_LITERAL(16, 216, 15), // "placeholderText"
QT_MOC_LITERAL(17, 232, 20), // "advancedSearchActive"
QT_MOC_LITERAL(18, 253, 21), // "advancedSearchEnabled"
QT_MOC_LITERAL(19, 275, 10) // "settingKey"

    },
    "pqSearchBox\0advancedSearchActivated\0"
    "\0textChanged\0settingKeyChanged\0"
    "setAdvancedSearchActive\0use\0setText\0"
    "text\0setSettingKey\0key\0setAdvancedSearchEnabled\0"
    "enable\0onAdvancedButtonClicked\0"
    "updateSettings\0updateFromSettings\0"
    "placeholderText\0advancedSearchActive\0"
    "advancedSearchEnabled\0settingKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSearchBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   73,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x09 /* Protected */,
      14,    0,   88,    2, 0x09 /* Protected */,
      15,    0,   89,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00595103,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::Bool, 0x00495103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       2,

       0        // eod
};

void pqSearchBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSearchBox *_t = static_cast<pqSearchBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->advancedSearchActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->settingKeyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAdvancedSearchActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->setSettingKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setAdvancedSearchEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onAdvancedButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateSettings(); break;
        case 9: _t->updateFromSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqSearchBox::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSearchBox::advancedSearchActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (pqSearchBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSearchBox::textChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (pqSearchBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqSearchBox::settingKeyChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        pqSearchBox *_t = static_cast<pqSearchBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isAdvancedSearchActive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAdvancedSearchEnabled(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->settingKey(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        pqSearchBox *_t = static_cast<pqSearchBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAdvancedSearchActive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAdvancedSearchEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setSettingKey(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject pqSearchBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqSearchBox.data,
      qt_meta_data_pqSearchBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqSearchBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSearchBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqSearchBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int pqSearchBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqSearchBox::advancedSearchActivated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqSearchBox::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pqSearchBox::settingKeyChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
