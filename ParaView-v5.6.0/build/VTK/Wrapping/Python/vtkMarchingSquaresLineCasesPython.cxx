// python wrapper for vtkMarchingSquaresLineCases
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMarchingSquaresLineCases.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMarchingSquaresLineCases(PyObject *); }

static const char *PyvtkMarchingSquaresLineCases_Doc =
  "vtkMarchingSquaresLineCases - no description provided.\n\n"

  "vtkMarchingSquaresLineCases()\n"
  "vtkMarchingSquaresLineCases(const &vtkMarchingSquaresLineCases)\n";

static PyMethodDef PyvtkMarchingSquaresLineCases_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingSquaresLineCases");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMarchingSquaresLineCases *op = new vtkMarchingSquaresLineCases();

    result = PyVTKSpecialObject_New("vtkMarchingSquaresLineCases", op);
  }

  return result;
}

static PyObject *
PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingSquaresLineCases");

  vtkMarchingSquaresLineCases *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMarchingSquaresLineCases"))
  {
    vtkMarchingSquaresLineCases *op = new vtkMarchingSquaresLineCases(*temp0);

    result = PyVTKSpecialObject_New("vtkMarchingSquaresLineCases", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_Methods[] = {
  {nullptr, PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_s2, METH_VARARGS,
   "@W vtkMarchingSquaresLineCases"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_s1(self, args);
    case 1:
      return PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMarchingSquaresLineCases");
  return nullptr;
}


static PyObject *
PyvtkMarchingSquaresLineCases_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases(nullptr, args);
}

static void PyvtkMarchingSquaresLineCases_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMarchingSquaresLineCases *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMarchingSquaresLineCases_Hash(PyObject *self)
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

static PyTypeObject PyvtkMarchingSquaresLineCases_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMarchingSquaresLineCases", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMarchingSquaresLineCases_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMarchingSquaresLineCases_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMarchingSquaresLineCases_Doc, // tp_doc
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
  PyvtkMarchingSquaresLineCases_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMarchingSquaresLineCases_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMarchingSquaresLineCases(*static_cast<const vtkMarchingSquaresLineCases*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMarchingSquaresLineCases_TypeNew(); }

PyObject *PyvtkMarchingSquaresLineCases_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMarchingSquaresLineCases_Type,
    PyvtkMarchingSquaresLineCases_Methods,
    PyvtkMarchingSquaresLineCases_vtkMarchingSquaresLineCases_Methods,
    &PyvtkMarchingSquaresLineCases_CCopy);

  PyTypeObject *pytype = &PyvtkMarchingSquaresLineCases_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarchingSquaresLineCases(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarchingSquaresLineCases_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMarchingSquaresLineCases", o) != 0)
  {
    Py_DECREF(o);
  }

}

