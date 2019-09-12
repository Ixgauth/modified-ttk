// python wrapper for vtkContourHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkContourHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourHelper(PyObject *); }

static const char *PyvtkContourHelper_Doc =
  "vtkContourHelper - A utility class used by various contour filters\n\n"
  "This is a simple utility class that can be used by various contour\n"
  "filters to\n"
  " produce either triangles and/or polygons based on the\n"
  "outputTriangles parameter\n"
  " When working with multidimensional dataset, it is needed to process\n"
  "cells\n"
  " from low to high dimensions.\n"
  "@sa\n"
  "vtkContourGrid vtkCutter vtkContourFilter\n\n"
  "vtkContourHelper(vtkIncrementalPointLocator *locator,\n    vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys,\n    vtkPointData *inPd, vtkCellData *inCd, vtkPointData *outPd,\n    vtkCellData *outCd, int estimatedSize, bool outputTriangles)\n";


static PyObject *
PyvtkContourHelper_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContourHelper *op = static_cast<vtkContourHelper *>(vp);

  vtkCell *temp0 = nullptr;
  double temp1;
  vtkDataArray *temp2 = nullptr;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetValue(temp3))
  {
    op->Contour(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourHelper_Methods[] = {
  {"Contour", PyvtkContourHelper_Contour, METH_VARARGS,
   "V.Contour(vtkCell, float, vtkDataArray, int)\nC++: void Contour(vtkCell *cell, double value,\n    vtkDataArray *cellScalars, vtkIdType cellId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourHelper_vtkContourHelper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourHelper");

  vtkIncrementalPointLocator *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkCellData *temp7 = nullptr;
  int temp8;
  bool temp9 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(10) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkCellData") &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    vtkContourHelper *op = new vtkContourHelper(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    result = PyVTKSpecialObject_New("vtkContourHelper", op);
  }

  return result;
}

static PyMethodDef PyvtkContourHelper_vtkContourHelper_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContourHelper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourHelper_vtkContourHelper(nullptr, args);
}

static void PyvtkContourHelper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourHelper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourHelper_Hash(PyObject *self)
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

static PyTypeObject PyvtkContourHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkContourHelper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourHelper_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkContourHelper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourHelper_Doc, // tp_doc
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
  PyvtkContourHelper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourHelper_TypeNew(); }

PyObject *PyvtkContourHelper_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkContourHelper_Type,
    PyvtkContourHelper_Methods,
    PyvtkContourHelper_vtkContourHelper_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkContourHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourHelper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

