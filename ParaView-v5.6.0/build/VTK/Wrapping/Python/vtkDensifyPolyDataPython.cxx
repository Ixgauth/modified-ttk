// python wrapper for vtkDensifyPolyData
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
#include "vtkDensifyPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDensifyPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDensifyPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDensifyPolyData_Doc =
  "vtkDensifyPolyData - Densify the input by adding points at the\ncentroid\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The filter takes any polygonal data as input and will tessellate\n"
  "cells that are planar polygons present by fanning out triangles from\n"
  "its centroid. Other cells are simply passed through to the output. \n"
  "PointData, if present, is interpolated via linear interpolation.\n"
  "CellData for any tessellated cell is simply copied over from its\n"
  "parent cell. Planar polygons are assumed to be convex. Funny things\n"
  "will happen if they are not.\n\n"
  "The number of subdivisions can be controlled by the parameter\n"
  "NumberOfSubdivisions.\n\n";


static PyObject *
PyvtkDensifyPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDensifyPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDensifyPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDensifyPolyData *tempr = vtkDensifyPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDensifyPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDensifyPolyData::NewInstance());

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
PyvtkDensifyPolyData_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkDensifyPolyData::SetNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPolyData_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPolyData *op = static_cast<vtkDensifyPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkDensifyPolyData::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDensifyPolyData_Methods[] = {
  {"IsTypeOf", PyvtkDensifyPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDensifyPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDensifyPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDensifyPolyData\nC++: static vtkDensifyPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDensifyPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDensifyPolyData\nC++: vtkDensifyPolyData *NewInstance()\n\n"},
  {"SetNumberOfSubdivisions", PyvtkDensifyPolyData_SetNumberOfSubdivisions, METH_VARARGS,
   "V.SetNumberOfSubdivisions(int)\nC++: virtual void SetNumberOfSubdivisions(unsigned int _arg)\n\nNumber of recursive subdivisions. Initial value is 1.\n"},
  {"GetNumberOfSubdivisions", PyvtkDensifyPolyData_GetNumberOfSubdivisions, METH_VARARGS,
   "V.GetNumberOfSubdivisions() -> int\nC++: virtual unsigned int GetNumberOfSubdivisions()\n\nNumber of recursive subdivisions. Initial value is 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDensifyPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkDensifyPolyData", // tp_name
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
  PyvtkDensifyPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDensifyPolyData_StaticNew()
{
  return vtkDensifyPolyData::New();
}

PyObject *PyvtkDensifyPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDensifyPolyData_Type, PyvtkDensifyPolyData_Methods,
    "vtkDensifyPolyData",
 &PyvtkDensifyPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkDensifyPolyData_Type;

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

void PyVTKAddFile_vtkDensifyPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDensifyPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDensifyPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

