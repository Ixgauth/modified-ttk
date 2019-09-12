// python wrapper for vtkFloatingPointExceptions
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkFloatingPointExceptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFloatingPointExceptions(PyObject *); }

static const char *PyvtkFloatingPointExceptions_Doc =
  "vtkFloatingPointExceptions - Deal with floating-point exceptions\n\n"
  "Right now it is really basic and it only provides a function to\n"
  "enable floating point exceptions on some compilers. Note that Borland\n"
  "C++ has floating-point exceptions by default, not Visual studio nor\n"
  "gcc. It is mainly use to optionally enable floating point exceptions\n"
  "in the C++ tests.\n\n";


static PyObject *
PyvtkFloatingPointExceptions_Enable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Enable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFloatingPointExceptions::Enable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFloatingPointExceptions_Disable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Disable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFloatingPointExceptions::Disable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFloatingPointExceptions_Methods[] = {
  {"Enable", PyvtkFloatingPointExceptions_Enable, METH_VARARGS,
   "V.Enable()\nC++: static void Enable()\n\nEnable floating point exceptions.\n"},
  {"Disable", PyvtkFloatingPointExceptions_Disable, METH_VARARGS,
   "V.Disable()\nC++: static void Disable()\n\nDisable floating point exceptions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFloatingPointExceptions_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkFloatingPointExceptions_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFloatingPointExceptions *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFloatingPointExceptions_Hash(PyObject *self)
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

static PyTypeObject PyvtkFloatingPointExceptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkFloatingPointExceptions", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFloatingPointExceptions_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkFloatingPointExceptions_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFloatingPointExceptions_Doc, // tp_doc
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
  PyvtkFloatingPointExceptions_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFloatingPointExceptions_TypeNew(); }

PyObject *PyvtkFloatingPointExceptions_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkFloatingPointExceptions_Type,
    PyvtkFloatingPointExceptions_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkFloatingPointExceptions_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFloatingPointExceptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFloatingPointExceptions_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFloatingPointExceptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

