// python wrapper for vtkCommonInformationKeyManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCommonInformationKeyManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommonInformationKeyManager(PyObject *); }

static const char *PyvtkCommonInformationKeyManager_Doc =
  "vtkCommonInformationKeyManager - Manages key types in vtkCommon.\n\n"
  "vtkCommonInformationKeyManager is included in the header of any\n"
  "subclass of vtkInformationKey defined in the vtkCommon library. It\n"
  "makes sure that the table of keys is created before and destroyed\n"
  "after it is used.\n\n"
  "vtkCommonInformationKeyManager()\n";

static PyMethodDef PyvtkCommonInformationKeyManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkCommonInformationKeyManager_vtkCommonInformationKeyManager(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCommonInformationKeyManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCommonInformationKeyManager *op = new vtkCommonInformationKeyManager();

    result = PyVTKSpecialObject_New("vtkCommonInformationKeyManager", op);
  }

  return result;
}

static PyMethodDef PyvtkCommonInformationKeyManager_vtkCommonInformationKeyManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommonInformationKeyManager_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkCommonInformationKeyManager_vtkCommonInformationKeyManager(nullptr, args);
}

static void PyvtkCommonInformationKeyManager_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkCommonInformationKeyManager *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkCommonInformationKeyManager_Hash(PyObject *self)
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

static PyTypeObject PyvtkCommonInformationKeyManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCommonInformationKeyManager", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCommonInformationKeyManager_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkCommonInformationKeyManager_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkCommonInformationKeyManager_Doc, // tp_doc
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
  PyvtkCommonInformationKeyManager_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCommonInformationKeyManager_TypeNew(); }

PyObject *PyvtkCommonInformationKeyManager_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkCommonInformationKeyManager_Type,
    PyvtkCommonInformationKeyManager_Methods,
    PyvtkCommonInformationKeyManager_vtkCommonInformationKeyManager_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkCommonInformationKeyManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCommonInformationKeyManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommonInformationKeyManager_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkCommonInformationKeyManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

