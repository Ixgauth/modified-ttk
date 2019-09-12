// python wrapper for vtkParallelAMRUtilities
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
#include "vtkParallelAMRUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelAMRUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParallelAMRUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkAMRUtilities_ClassNew
extern "C" { PyObject *PyvtkAMRUtilities_ClassNew(); }
#define DECLARED_PyvtkAMRUtilities_ClassNew
#endif

static const char *PyvtkParallelAMRUtilities_Doc =
  "vtkParallelAMRUtilities -  A concrete instance of vtkObject that\nemploys a singleton design\n pattern and implements functionality for AMR specific operations.\n\n"
  "Superclass: vtkAMRUtilities\n\n"
  "@sa\n"
  " vtkOverlappingAMR, vtkAMRBox\n\n";


static PyObject *
PyvtkParallelAMRUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelAMRUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelAMRUtilities *op = static_cast<vtkParallelAMRUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelAMRUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelAMRUtilities *tempr = vtkParallelAMRUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelAMRUtilities *op = static_cast<vtkParallelAMRUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelAMRUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelAMRUtilities::NewInstance());

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
PyvtkParallelAMRUtilities_StripGhostLayers(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StripGhostLayers");

  vtkOverlappingAMR *temp0 = nullptr;
  vtkOverlappingAMR *temp1 = nullptr;
  vtkMultiProcessController *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp2, "vtkMultiProcessController"))
  {
    vtkParallelAMRUtilities::StripGhostLayers(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelAMRUtilities_BlankCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BlankCells");

  vtkOverlappingAMR *temp0 = nullptr;
  vtkMultiProcessController *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkMultiProcessController"))
  {
    vtkParallelAMRUtilities::BlankCells(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelAMRUtilities_Methods[] = {
  {"IsTypeOf", PyvtkParallelAMRUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelAMRUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelAMRUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParallelAMRUtilities\nC++: static vtkParallelAMRUtilities *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelAMRUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParallelAMRUtilities\nC++: vtkParallelAMRUtilities *NewInstance()\n\n"},
  {"StripGhostLayers", PyvtkParallelAMRUtilities_StripGhostLayers, METH_VARARGS,
   "V.StripGhostLayers(vtkOverlappingAMR, vtkOverlappingAMR,\n    vtkMultiProcessController)\nC++: static void StripGhostLayers(\n    vtkOverlappingAMR *ghostedAMRData,\n    vtkOverlappingAMR *strippedAMRData,\n    vtkMultiProcessController *myController)\n\nThis method detects and strips partially overlapping cells from a\ngiven AMR dataset. If ghost layers are detected, they are removed\nand new grid instances are created to represent the stripped\ndata-set otherwise, each block is shallow-copied.\n\n* .SECTION Assumptions\n* 1) The ghosted AMR data must have complete metadata\n  information.\n"},
  {"BlankCells", PyvtkParallelAMRUtilities_BlankCells, METH_VARARGS,
   "V.BlankCells(vtkOverlappingAMR, vtkMultiProcessController)\nC++: static void BlankCells(vtkOverlappingAMR *amr,\n    vtkMultiProcessController *myController)\n\nBlank cells in overlapping AMR\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParallelAMRUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkParallelAMRUtilities", // tp_name
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
  PyvtkParallelAMRUtilities_Doc, // tp_doc
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

PyObject *PyvtkParallelAMRUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParallelAMRUtilities_Type, PyvtkParallelAMRUtilities_Methods,
    "vtkParallelAMRUtilities",
 nullptr);

  PyTypeObject *pytype = &PyvtkParallelAMRUtilities_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAMRUtilities_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelAMRUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelAMRUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelAMRUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

