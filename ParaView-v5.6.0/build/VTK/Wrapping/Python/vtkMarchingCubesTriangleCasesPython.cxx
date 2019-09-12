// python wrapper for vtkMarchingCubesTriangleCases
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMarchingCubesTriangleCases.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMarchingCubesTriangleCases(PyObject *); }

static const char *PyvtkMarchingCubesTriangleCases_Doc =
  "vtkMarchingCubesTriangleCases - no description provided.\n\n"

  "vtkMarchingCubesTriangleCases()\n"
  "vtkMarchingCubesTriangleCases(const &vtkMarchingCubesTriangleCases)\n";

static PyMethodDef PyvtkMarchingCubesTriangleCases_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingCubesTriangleCases");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMarchingCubesTriangleCases *op = new vtkMarchingCubesTriangleCases();

    result = PyVTKSpecialObject_New("vtkMarchingCubesTriangleCases", op);
  }

  return result;
}

static PyObject *
PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingCubesTriangleCases");

  vtkMarchingCubesTriangleCases *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMarchingCubesTriangleCases"))
  {
    vtkMarchingCubesTriangleCases *op = new vtkMarchingCubesTriangleCases(*temp0);

    result = PyVTKSpecialObject_New("vtkMarchingCubesTriangleCases", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_Methods[] = {
  {nullptr, PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s2, METH_VARARGS,
   "@W vtkMarchingCubesTriangleCases"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s1(self, args);
    case 1:
      return PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMarchingCubesTriangleCases");
  return nullptr;
}


static PyObject *
PyvtkMarchingCubesTriangleCases_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases(nullptr, args);
}

static void PyvtkMarchingCubesTriangleCases_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMarchingCubesTriangleCases *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMarchingCubesTriangleCases_Hash(PyObject *self)
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

static PyTypeObject PyvtkMarchingCubesTriangleCases_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMarchingCubesTriangleCases", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMarchingCubesTriangleCases_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMarchingCubesTriangleCases_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMarchingCubesTriangleCases_Doc, // tp_doc
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
  PyvtkMarchingCubesTriangleCases_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMarchingCubesTriangleCases_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMarchingCubesTriangleCases(*static_cast<const vtkMarchingCubesTriangleCases*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMarchingCubesTriangleCases_TypeNew(); }

PyObject *PyvtkMarchingCubesTriangleCases_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMarchingCubesTriangleCases_Type,
    PyvtkMarchingCubesTriangleCases_Methods,
    PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_Methods,
    &PyvtkMarchingCubesTriangleCases_CCopy);

  PyTypeObject *pytype = &PyvtkMarchingCubesTriangleCases_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarchingCubesTriangleCases(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarchingCubesTriangleCases_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMarchingCubesTriangleCases", o) != 0)
  {
    Py_DECREF(o);
  }

}

