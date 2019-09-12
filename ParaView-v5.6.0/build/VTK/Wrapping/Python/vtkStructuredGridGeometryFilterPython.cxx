// python wrapper for vtkStructuredGridGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredGridGeometryFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGridGeometryFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredGridGeometryFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkStructuredGridGeometryFilter_Doc =
  "vtkStructuredGridGeometryFilter - extract geometry for structured grid\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStructuredGridGeometryFilter is a filter that extracts geometry\n"
  "from a structured grid. By specifying appropriate i-j-k indices, it\n"
  "is possible to extract a point, a curve, a surface, or a \"volume\".\n"
  "Depending upon the type of data, the curve and surface may be curved\n"
  "or planar. (The volume is actually a (n x m x o) region of points.)\n\n"
  "The extent specification is zero-offset. That is, the first k-plane\n"
  "in a 50x50x50 structured grid is given by (0,49, 0,49, 0,0).\n\n"
  "The output of this filter is affected by the structured grid\n"
  "blanking. If blanking is on, and a blanking array defined, then those\n"
  "cells attached to blanked points are not output. (Blanking is a\n"
  "property of the input vtkStructuredGrid.)\n\n"
  "@warning\n"
  "If you don't know the dimensions of the input dataset, you can use a\n"
  "large number to specify extent (the number will be clamped\n"
  "appropriately). For example, if the dataset dimensions are 50x50x50,\n"
  "and you want a the fifth k-plane, you can use the extents (0,100,\n"
  "0,100, 4,4). The 100 will automatically be clamped to 49.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkExtractGrid vtkStructuredGrid\n\n";


static PyObject *
PyvtkStructuredGridGeometryFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGridGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGeometryFilter *op = static_cast<vtkStructuredGridGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGridGeometryFilter *tempr = vtkStructuredGridGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGeometryFilter *op = static_cast<vtkStructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGridGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridGeometryFilter::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGeometryFilter *op = static_cast<vtkStructuredGridGeometryFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkStructuredGridGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGeometryFilter *op = static_cast<vtkStructuredGridGeometryFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkStructuredGridGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGeometryFilter *op = static_cast<vtkStructuredGridGeometryFilter *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkStructuredGridGeometryFilter::SetExtent(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkStructuredGridGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkStructuredGridGeometryFilter_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyMethodDef PyvtkStructuredGridGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkStructuredGridGeometryFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGridGeometryFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGridGeometryFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredGridGeometryFilter\nC++: static vtkStructuredGridGeometryFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGridGeometryFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredGridGeometryFilter\nC++: vtkStructuredGridGeometryFilter *NewInstance()\n\n"},
  {"GetExtent", PyvtkStructuredGridGeometryFilter_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\nGet the extent in topological coordinate range (imin,imax,\njmin,jmax, kmin,kmax).\n"},
  {"SetExtent", PyvtkStructuredGridGeometryFilter_SetExtent, METH_VARARGS,
   "V.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int iMin, int iMax, int jMin, int jMax,\n    int kMin, int kMax)\nV.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\n\nSpecify (imin,imax, jmin,jmax, kmin,kmax) indices.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredGridGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkStructuredGridGeometryFilter", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkStructuredGridGeometryFilter_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkStructuredGridGeometryFilter_StaticNew()
{
  return vtkStructuredGridGeometryFilter::New();
}

PyObject *PyvtkStructuredGridGeometryFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredGridGeometryFilter_Type, PyvtkStructuredGridGeometryFilter_Methods,
    "vtkStructuredGridGeometryFilter",
 &PyvtkStructuredGridGeometryFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredGridGeometryFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredGridGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGridGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGridGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

