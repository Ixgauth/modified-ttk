// python wrapper for vtkAMRUtilities
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
#include "vtkAMRUtilities.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRUtilities(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRUtilities_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAMRUtilities_Doc =
  "vtkAMRUtilities -  A concrete instance of vtkObject that employs a\nsingleton design\n pattern and implements functionality for AMR specific operations.\n\n"
  "Superclass: vtkObject\n\n"
  "@sa\n"
  " vtkOverlappingAMR, vtkAMRBox\n\n";


static PyObject *
PyvtkAMRUtilities_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRUtilities *tempr = vtkAMRUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRUtilities::NewInstance());

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
PyvtkAMRUtilities_StripGhostLayers(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StripGhostLayers");

  vtkOverlappingAMR *temp0 = nullptr;
  vtkOverlappingAMR *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
  {
    vtkAMRUtilities::StripGhostLayers(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_HasPartiallyOverlappingGhostCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasPartiallyOverlappingGhostCells");

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    bool tempr = vtkAMRUtilities::HasPartiallyOverlappingGhostCells(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_BlankCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BlankCells");

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    vtkAMRUtilities::BlankCells(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRUtilities_Methods[] = {
  {"IsTypeOf", PyvtkAMRUtilities_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRUtilities_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRUtilities_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRUtilities\nC++: static vtkAMRUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRUtilities_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRUtilities\nC++: vtkAMRUtilities *NewInstance()\n\n"},
  {"StripGhostLayers", PyvtkAMRUtilities_StripGhostLayers, METH_VARARGS,
   "V.StripGhostLayers(vtkOverlappingAMR, vtkOverlappingAMR)\nC++: static void StripGhostLayers(\n    vtkOverlappingAMR *ghostedAMRData,\n    vtkOverlappingAMR *strippedAMRData)\n\nThis method detects and strips partially overlapping cells from a\ngiven AMR dataset. If ghost layers are detected, they are removed\nand new grid instances are created to represent the stripped\ndata-set otherwise, each block is shallow-copied.\n\n* .SECTION Assumptions\n* 1) The ghosted AMR data must have complete metadata\n  information.\n"},
  {"HasPartiallyOverlappingGhostCells", PyvtkAMRUtilities_HasPartiallyOverlappingGhostCells, METH_VARARGS,
   "V.HasPartiallyOverlappingGhostCells(vtkOverlappingAMR) -> bool\nC++: static bool HasPartiallyOverlappingGhostCells(\n    vtkOverlappingAMR *amr)\n\nA quick test of whether partially overlapping ghost cells exist.\nThis test starts from the highest-res boxes and checks if they\nhave partially overlapping cells. The code returns with true once\npartially overlapping cells are detected. Otherwise, false is\nreturned.\n"},
  {"BlankCells", PyvtkAMRUtilities_BlankCells, METH_VARARGS,
   "V.BlankCells(vtkOverlappingAMR)\nC++: static void BlankCells(vtkOverlappingAMR *amr)\n\nBlank cells in overlapping AMR\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAMRUtilities", // tp_name
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
  PyvtkAMRUtilities_Doc, // tp_doc
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

PyObject *PyvtkAMRUtilities_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRUtilities_Type, PyvtkAMRUtilities_Methods,
    "vtkAMRUtilities",
 nullptr);

  PyTypeObject *pytype = &PyvtkAMRUtilities_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

