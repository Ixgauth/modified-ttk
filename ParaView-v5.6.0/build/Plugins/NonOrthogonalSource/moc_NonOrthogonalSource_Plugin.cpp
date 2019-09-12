/****************************************************************************
** Meta object code from reading C++ file 'NonOrthogonalSource_Plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NonOrthogonalSource_Plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NonOrthogonalSource_Plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NonOrthogonalSource_Plugin_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NonOrthogonalSource_Plugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NonOrthogonalSource_Plugin_t qt_meta_stringdata_NonOrthogonalSource_Plugin = {
    {
QT_MOC_LITERAL(0, 0, 26) // "NonOrthogonalSource_Plugin"

    },
    "NonOrthogonalSource_Plugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NonOrthogonalSource_Plugin[] = {

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

void NonOrthogonalSource_Plugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NonOrthogonalSource_Plugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NonOrthogonalSource_Plugin.data,
      qt_meta_data_NonOrthogonalSource_Plugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NonOrthogonalSource_Plugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NonOrthogonalSource_Plugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NonOrthogonalSource_Plugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "vtkPVGUIPluginInterface"))
        return static_cast< vtkPVGUIPluginInterface*>(this);
    if (!strcmp(_clname, "vtkPVPlugin"))
        return static_cast< vtkPVPlugin*>(this);
    if (!strcmp(_clname, "vtkPVServerManagerPluginInterface"))
        return static_cast< vtkPVServerManagerPluginInterface*>(this);
    if (!strcmp(_clname, "com.kitware/paraview/guiplugin"))
        return static_cast< vtkPVGUIPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int NonOrthogonalSource_Plugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xc4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '/',  0x00, 'c',  'o',  'm',  '.',  'k',  'i', 
    't',  'w',  'a',  'r',  'e',  '/',  'p',  'a', 
    'r',  'a',  'v',  'i',  'e',  'w',  '/',  'N', 
    'o',  'n',  'O',  'r',  't',  'h',  'o',  'g', 
    'o',  'n',  'a',  'l',  'S',  'o',  'u',  'r', 
    'c',  'e',  '_',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, 0x9b, 0x0b, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x1a, 0x00, 'N',  'o', 
    'n',  'O',  'r',  't',  'h',  'o',  'g',  'o', 
    'n',  'a',  'l',  'S',  'o',  'u',  'r',  'c', 
    'e',  '_',  'P',  'l',  'u',  'g',  'i',  'n', 
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x14, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xc4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '/',  0x00, 'c',  'o',  'm',  '.',  'k',  'i', 
    't',  'w',  'a',  'r',  'e',  '/',  'p',  'a', 
    'r',  'a',  'v',  'i',  'e',  'w',  '/',  'N', 
    'o',  'n',  'O',  'r',  't',  'h',  'o',  'g', 
    'o',  'n',  'a',  'l',  'S',  'o',  'u',  'r', 
    'c',  'e',  '_',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, 0x95, 0x0b, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0f, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x1a, 0x00, 'N',  'o',  'n',  'O',  'r',  't', 
    'h',  'o',  'g',  'o',  'n',  'a',  'l',  'S', 
    'o',  'u',  'r',  'c',  'e',  '_',  'P',  'l', 
    'u',  'g',  'i',  'n',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(NonOrthogonalSource_Plugin, NonOrthogonalSource_Plugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
