// python wrapper for vtkPCellDataToPointData
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
#include "vtkPCellDataToPointData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCellDataToPointData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPCellDataToPointData_ClassNew(); }

#ifndef DECLARED_PyvtkCellDataToPointData_ClassNew
extern "C" { PyObject *PyvtkCellDataToPointData_ClassNew(); }
#define DECLARED_PyvtkCellDataToPointData_ClassNew
#endif

static const char *PyvtkPCellDataToPointData_Doc =
  "vtkPCellDataToPointData - Compute point arrays from cell arrays.\n\n"
  "Superclass: vtkCellDataToPointData\n\n"
  "Like it super class, this filter averages the cell data around a\n"
  "point to get new point data.  This subclass requests a layer of ghost\n"
  "cells to make the results invariant to pieces.  There is a\n"
  "\"PieceInvariant\" flag that lets the user change the behavior of the\n"
  "filter to that of its superclass.\n\n";


static PyObject *
PyvtkPCellDataToPointData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCellDataToPointData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCellDataToPointData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCellDataToPointData *tempr = vtkPCellDataToPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCellDataToPointData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCellDataToPointData::NewInstance());

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
PyvtkPCellDataToPointData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkPCellDataToPointData::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkPCellDataToPointData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkPCellDataToPointData::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCellDataToPointData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCellDataToPointData *op = static_cast<vtkPCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkPCellDataToPointData::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPCellDataToPointData_Methods[] = {
  {"IsTypeOf", PyvtkPCellDataToPointData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCellDataToPointData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCellDataToPointData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPCellDataToPointData\nC++: static vtkPCellDataToPointData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCellDataToPointData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPCellDataToPointData\nC++: vtkPCellDataToPointData *NewInstance()\n\n"},
  {"SetPieceInvariant", PyvtkPCellDataToPointData_SetPieceInvariant, METH_VARARGS,
   "V.SetPieceInvariant(int)\nC++: virtual void SetPieceInvariant(vtkTypeBool _arg)\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"GetPieceInvariant", PyvtkPCellDataToPointData_GetPieceInvariant, METH_VARARGS,
   "V.GetPieceInvariant() -> int\nC++: virtual vtkTypeBool GetPieceInvariant()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"PieceInvariantOn", PyvtkPCellDataToPointData_PieceInvariantOn, METH_VARARGS,
   "V.PieceInvariantOn()\nC++: virtual void PieceInvariantOn()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"PieceInvariantOff", PyvtkPCellDataToPointData_PieceInvariantOff, METH_VARARGS,
   "V.PieceInvariantOff()\nC++: virtual void PieceInvariantOff()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPCellDataToPointData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPCellDataToPointData", // tp_name
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
  PyvtkPCellDataToPointData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCellDataToPointData_StaticNew()
{
  return vtkPCellDataToPointData::New();
}

PyObject *PyvtkPCellDataToPointData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPCellDataToPointData_Type, PyvtkPCellDataToPointData_Methods,
    "vtkPCellDataToPointData",
 &PyvtkPCellDataToPointData_StaticNew);

  PyTypeObject *pytype = &PyvtkPCellDataToPointData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCellDataToPointData_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCellDataToPointData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCellDataToPointData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCellDataToPointData", o) != 0)
  {
    Py_DECREF(o);
  }

}

