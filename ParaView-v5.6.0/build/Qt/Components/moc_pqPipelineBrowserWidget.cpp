/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineBrowserWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPipelineBrowserWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineBrowserWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineBrowserWidget_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineBrowserWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineBrowserWidget_t qt_meta_stringdata_pqPipelineBrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pqPipelineBrowserWidget"
QT_MOC_LITERAL(1, 24, 9), // "deleteKey"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "setActiveView"
QT_MOC_LITERAL(4, 49, 7), // "pqView*"
QT_MOC_LITERAL(5, 57, 18), // "handleIndexClicked"
QT_MOC_LITERAL(6, 76, 5), // "index"
QT_MOC_LITERAL(7, 82, 31) // "expandWithModelIndexTranslation"

    },
    "pqPipelineBrowserWidget\0deleteKey\0\0"
    "setActiveView\0pqView*\0handleIndexClicked\0"
    "index\0expandWithModelIndexTranslation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineBrowserWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x09 /* Protected */,
       7,    1,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void pqPipelineBrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineBrowserWidget *_t = static_cast<pqPipelineBrowserWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteKey(); break;
        case 1: _t->setActiveView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 2: _t->handleIndexClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->expandWithModelIndexTranslation((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (pqPipelineBrowserWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pqPipelineBrowserWidget::deleteKey)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqPipelineBrowserWidget::staticMetaObject = {
    { &pqFlatTreeView::staticMetaObject, qt_meta_stringdata_pqPipelineBrowserWidget.data,
      qt_meta_data_pqPipelineBrowserWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineBrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineBrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineBrowserWidget.stringdata0))
        return static_cast<void*>(this);
    return pqFlatTreeView::qt_metacast(_clname);
}

int pqPipelineBrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqFlatTreeView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void pqPipelineBrowserWidget::deleteKey()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
