/****************************************************************************
** Meta object code from reading C++ file 'pqCatalystExportStateWizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqCatalystExportStateWizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqCatalystExportStateWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqCatalystExportStateWizard_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqCatalystExportStateWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqCatalystExportStateWizard_t qt_meta_stringdata_pqCatalystExportStateWizard = {
    {
QT_MOC_LITERAL(0, 0, 27) // "pqCatalystExportStateWizard"

    },
    "pqCatalystExportStateWizard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqCatalystExportStateWizard[] = {

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

void pqCatalystExportStateWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject pqCatalystExportStateWizard::staticMetaObject = {
    { &pqSGExportStateWizard::staticMetaObject, qt_meta_stringdata_pqCatalystExportStateWizard.data,
      qt_meta_data_pqCatalystExportStateWizard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqCatalystExportStateWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqCatalystExportStateWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqCatalystExportStateWizard.stringdata0))
        return static_cast<void*>(this);
    return pqSGExportStateWizard::qt_metacast(_clname);
}

int pqCatalystExportStateWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqSGExportStateWizard::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
