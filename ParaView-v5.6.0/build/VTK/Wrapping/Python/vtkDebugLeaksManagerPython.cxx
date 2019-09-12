// python wrapper for vtkDebugLeaksManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDebugLeaksManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDebugLeaksManager(PyObject *); }

static const char *PyvtkDebugLeaksManager_Doc =
  "vtkDebugLeaksManager - Manages the vtkDebugLeaks singleton.\n\n"
  "vtkDebugLeaksManager should be included in any translation unit that\n"
  "will use vtkDebugLeaks or that implements the singleton pattern.  It\n"
  "makes sure that the vtkDebugLeaks singleton is created before and\n"
  "destroyed after all other singletons in VTK.\n\n"
  "vtkDebugLeaksManager()\n";

static PyMethodDef PyvtkDebugLeaksManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkDebugLeaksManager_vtkDebugLeaksManager(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDebugLeaksManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDebugLeaksManager *op = new vtkDebugLeaksManager();

    result = PyVTKSpecialObject_New("vtkDebugLeaksManager", op);
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaksManager_vtkDebugLeaksManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDebugLeaksManager_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDebugLeaksManager_vtkDebugLeaksManager(nullptr, args);
}

static void PyvtkDebugLeaksManager_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDebugLeaksManager *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDebugLeaksManager_Hash(PyObject *self)
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

static PyTypeObject PyvtkDebugLeaksManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDebugLeaksManager", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDebugLeaksManager_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDebugLeaksManager_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDebugLeaksManager_Doc, // tp_doc
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
  PyvtkDebugLeaksManager_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDebugLeaksManager_TypeNew(); }

PyObject *PyvtkDebugLeaksManager_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkDebugLeaksManager_Type,
    PyvtkDebugLeaksManager_Methods,
    PyvtkDebugLeaksManager_vtkDebugLeaksManager_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkDebugLeaksManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDebugLeaksManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDebugLeaksManager_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDebugLeaksManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

