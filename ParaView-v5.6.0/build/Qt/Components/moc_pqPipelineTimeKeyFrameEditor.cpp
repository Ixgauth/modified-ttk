/****************************************************************************
** Meta object code from reading C++ file 'pqPipelineTimeKeyFrameEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Qt/Components/pqPipelineTimeKeyFrameEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPipelineTimeKeyFrameEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPipelineTimeKeyFrameEditor_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPipelineTimeKeyFrameEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPipelineTimeKeyFrameEditor_t qt_meta_stringdata_pqPipelineTimeKeyFrameEditor = {
    {
QT_MOC_LITERAL(0, 0, 28), // "pqPipelineTimeKeyFrameEditor"
QT_MOC_LITERAL(1, 29, 16), // "readKeyFrameData"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "writeKeyFrameData"
QT_MOC_LITERAL(4, 65, 11) // "updateState"

    },
    "pqPipelineTimeKeyFrameEditor\0"
    "readKeyFrameData\0\0writeKeyFrameData\0"
    "updateState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPipelineTimeKeyFrameEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqPipelineTimeKeyFrameEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPipelineTimeKeyFrameEditor *_t = static_cast<pqPipelineTimeKeyFrameEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readKeyFrameData(); break;
        case 1: _t->writeKeyFrameData(); break;
        case 2: _t->updateState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject pqPipelineTimeKeyFrameEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pqPipelineTimeKeyFrameEditor.data,
      qt_meta_data_pqPipelineTimeKeyFrameEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pqPipelineTimeKeyFrameEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPipelineTimeKeyFrameEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pqPipelineTimeKeyFrameEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pqPipelineTimeKeyFrameEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
