// python wrapper for vtkOStrStreamWrapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOStrStreamWrapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOStrStreamWrapper(PyObject *); }

static const char *PyvtkOStrStreamWrapper_Doc =
  "vtkOStrStreamWrapper - Wrapper for ostrstream.\n\n"
  "Internal VTK use only.\n\n"
  "Provides a wrapper around the C++ ostrstream class so that VTK source\n"
  "files need not include the full C++ streams library.  This is\n"
  "intended to prevent cluttering of the translation unit and speed up\n"
  "compilation.  Experimentation has revealed between 10% and 60% less\n"
  "time for compilation depending on the platform.  This wrapper is used\n"
  "by the macros in vtkSetGet.h.\n\n"
  "vtkOStrStreamWrapper()\n";


static PyObject *
PyvtkOStrStreamWrapper_str(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "str");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOStrStreamWrapper *op = static_cast<vtkOStrStreamWrapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = op->str();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOStrStreamWrapper_freeze_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "freeze");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOStrStreamWrapper *op = static_cast<vtkOStrStreamWrapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->freeze();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOStrStreamWrapper_freeze_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "freeze");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOStrStreamWrapper *op = static_cast<vtkOStrStreamWrapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->freeze(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOStrStreamWrapper_freeze(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkOStrStreamWrapper_freeze_s1(self, args);
    case 1:
      return PyvtkOStrStreamWrapper_freeze_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "freeze");
  return nullptr;
}


static PyMethodDef PyvtkOStrStreamWrapper_Methods[] = {
  {"str", PyvtkOStrStreamWrapper_str, METH_VARARGS,
   "V.str() -> string\nC++: char *str()\n\nGet the string that has been written.  This call transfers\nownership of the returned memory to the caller.  Call\nrdbuf()->freeze(0) to return ownership to the\nvtkOStrStreamWrapper.\n"},
  {"freeze", PyvtkOStrStreamWrapper_freeze, METH_VARARGS,
   "V.freeze()\nC++: void freeze()\nV.freeze(int)\nC++: void freeze(int)\n\nSet whether the memory is frozen.  The vtkOStrStreamWrapper will\nfree the memory returned by str() only if it is not frozen.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOStrStreamWrapper_vtkOStrStreamWrapper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOStrStreamWrapper");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOStrStreamWrapper *op = new vtkOStrStreamWrapper();

    result = PyVTKSpecialObject_New("vtkOStrStreamWrapper", op);
  }

  return result;
}

static PyMethodDef PyvtkOStrStreamWrapper_vtkOStrStreamWrapper_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOStrStreamWrapper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOStrStreamWrapper_vtkOStrStreamWrapper(nullptr, args);
}

static void PyvtkOStrStreamWrapper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOStrStreamWrapper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOStrStreamWrapper_Hash(PyObject *self)
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

static PyTypeObject PyvtkOStrStreamWrapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkOStrStreamWrapper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOStrStreamWrapper_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOStrStreamWrapper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOStrStreamWrapper_Doc, // tp_doc
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
  PyvtkOStrStreamWrapper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOStrStreamWrapper_TypeNew(); }

PyObject *PyvtkOStrStreamWrapper_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkOStrStreamWrapper_Type,
    PyvtkOStrStreamWrapper_Methods,
    PyvtkOStrStreamWrapper_vtkOStrStreamWrapper_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkOStrStreamWrapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOStrStreamWrapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOStrStreamWrapper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOStrStreamWrapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

