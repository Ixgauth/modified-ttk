// python wrapper for vtkPVServerManagerPluginInterface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPVServerManagerPluginInterface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVServerManagerPluginInterface(PyObject *); }

static const char *PyvtkPVServerManagerPluginInterface_Doc =
  "vtkPVServerManagerPluginInterface - vtkPVServerManagerPluginInterface\ndefines the interface needed to be implemented by a server-manager\nplugin i.e.\n\n"
  "a plugin that adds new filters/readers/proxies etc. to ParaView.\n\n";

static PyMethodDef PyvtkPVServerManagerPluginInterface_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVServerManagerPluginInterface_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkPVServerManagerPluginInterface_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPVServerManagerPluginInterface *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPVServerManagerPluginInterface_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkPVServerManagerPluginInterface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVServerManagerPluginInterface", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVServerManagerPluginInterface_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPVServerManagerPluginInterface_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPVServerManagerPluginInterface_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkPVServerManagerPluginInterface_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVServerManagerPluginInterface_TypeNew(); }

PyObject *PyvtkPVServerManagerPluginInterface_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPVServerManagerPluginInterface_Type,
    PyvtkPVServerManagerPluginInterface_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkPVServerManagerPluginInterface_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVServerManagerPluginInterface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVServerManagerPluginInterface_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPVServerManagerPluginInterface", o) != 0)
  {
    Py_DECREF(o);
  }

}

