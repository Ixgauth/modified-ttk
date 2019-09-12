// python wrapper for vtkPCellSizeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPCellSizeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCellSizeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPCellSizeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkCellSizeFilter_ClassNew
extern "C" { PyObject *PyvtkCellSizeFilter_ClassNew(); }
#define DECLARED_PyvtkCellSizeFilter_ClassNew
#endif

static const char *PyvtkPCellSizeFilter_Doc =
  "vtkPCellSizeFilter - Computes cell sizes in parallel.\n\n"
  "Superclass: vtkCellSizeFilter\n\n"
  "Computes the cell sizes for all types of cells in parallel in VTK.\n"
  "For triangles, quads, tets and hexes the static methods in\n"
  "vtkMeshQuality are used. This is done through Verdict for higher\n"
  "accuracy. Other cell types are individually done analytically where\n"
  "possible and breaking into triangles or tets when not possible. When\n"
  "cells are broken into triangles or tets the accuracy may be\n"
  "diminished. By default all sizes are computed but vertex count,\n"
  "length, area and volumetric cells can each be optionally ignored.\n"
  "Individual arrays are used for each requested size (e.g. if length\n"
  "and volume are requested there will be two arrays outputted from this\n"
  "filter). The 4 arrays can be individually named with defaults of\n"
  "VertexCount, Length, Area and Volme. For dimensions of cells that do\n"
  "not have their size computed, a value of 0 will be given. For cells\n"
  "that should have their size computed but can't, the filter will\n"
  "return -1. The ComputeSum option will sum the cell sizes (excluding\n"
  "ghost cells) and put the value into vtkFieldData arrays named with\n"
  "the corresponding cell data array name. For composite datasets the\n"
  "total sum over all blocks will also be added to the top-level block's\n"
  "field data for the summation.\n\n";


static PyObject *
PyvtkPCellSizeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCellSizeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellSizeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellSizeFilter *op = static_cast<vtkPCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCellSizeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellSizeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCellSizeFilter *tempr = vtkPCellSizeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellSizeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellSizeFilter *op = static_cast<vtkPCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCellSizeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCellSizeFilter::NewInstance());

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

static PyMethodDef PyvtkPCellSizeFilter_Methods[] = {
  {"IsTypeOf", PyvtkPCellSizeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCellSizeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCellSizeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPCellSizeFilter\nC++: static vtkPCellSizeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCellSizeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPCellSizeFilter\nC++: vtkPCellSizeFilter *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPCellSizeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelVerdictPython.vtkPCellSizeFilter", // tp_name
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
  PyvtkPCellSizeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCellSizeFilter_StaticNew()
{
  return vtkPCellSizeFilter::New();
}

PyObject *PyvtkPCellSizeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPCellSizeFilter_Type, PyvtkPCellSizeFilter_Methods,
    "vtkPCellSizeFilter",
 &PyvtkPCellSizeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPCellSizeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCellSizeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCellSizeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCellSizeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCellSizeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

