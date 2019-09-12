// python wrapper for vtkReverseSense
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
#include "vtkReverseSense.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReverseSense(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkReverseSense_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkReverseSense_Doc =
  "vtkReverseSense - reverse the ordering of polygonal cells and/or\nvertex normals\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkReverseSense is a filter that reverses the order of polygonal\n"
  "cells and/or reverses the direction of point and cell normals. Two\n"
  "flags are used to control these operations. Cell reversal means\n"
  "reversing the order of indices in the cell connectivity list. Normal\n"
  "reversal means multiplying the normal vector by -1 (both point and\n"
  "cell normals, if present).\n\n"
  "@warning\n"
  "Normals can be operated on only if they are present in the data.\n\n";


static PyObject *
PyvtkReverseSense_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReverseSense::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReverseSense::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReverseSense *tempr = vtkReverseSense::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReverseSense *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReverseSense::NewInstance());

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
PyvtkReverseSense_SetReverseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseCells(temp0);
    }
    else
    {
      op->vtkReverseSense::SetReverseCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_GetReverseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseCells() :
      op->vtkReverseSense::GetReverseCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseCellsOn();
    }
    else
    {
      op->vtkReverseSense::ReverseCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseCellsOff();
    }
    else
    {
      op->vtkReverseSense::ReverseCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_SetReverseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseNormals(temp0);
    }
    else
    {
      op->vtkReverseSense::SetReverseNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_GetReverseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseNormals() :
      op->vtkReverseSense::GetReverseNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseNormalsOn();
    }
    else
    {
      op->vtkReverseSense::ReverseNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReverseSense_ReverseNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReverseSense *op = static_cast<vtkReverseSense *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseNormalsOff();
    }
    else
    {
      op->vtkReverseSense::ReverseNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkReverseSense_Methods[] = {
  {"IsTypeOf", PyvtkReverseSense_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReverseSense_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReverseSense_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkReverseSense\nC++: static vtkReverseSense *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReverseSense_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkReverseSense\nC++: vtkReverseSense *NewInstance()\n\n"},
  {"SetReverseCells", PyvtkReverseSense_SetReverseCells, METH_VARARGS,
   "V.SetReverseCells(int)\nC++: virtual void SetReverseCells(vtkTypeBool _arg)\n\nFlag controls whether to reverse cell ordering.\n"},
  {"GetReverseCells", PyvtkReverseSense_GetReverseCells, METH_VARARGS,
   "V.GetReverseCells() -> int\nC++: virtual vtkTypeBool GetReverseCells()\n\nFlag controls whether to reverse cell ordering.\n"},
  {"ReverseCellsOn", PyvtkReverseSense_ReverseCellsOn, METH_VARARGS,
   "V.ReverseCellsOn()\nC++: virtual void ReverseCellsOn()\n\nFlag controls whether to reverse cell ordering.\n"},
  {"ReverseCellsOff", PyvtkReverseSense_ReverseCellsOff, METH_VARARGS,
   "V.ReverseCellsOff()\nC++: virtual void ReverseCellsOff()\n\nFlag controls whether to reverse cell ordering.\n"},
  {"SetReverseNormals", PyvtkReverseSense_SetReverseNormals, METH_VARARGS,
   "V.SetReverseNormals(int)\nC++: virtual void SetReverseNormals(vtkTypeBool _arg)\n\nFlag controls whether to reverse normal orientation.\n"},
  {"GetReverseNormals", PyvtkReverseSense_GetReverseNormals, METH_VARARGS,
   "V.GetReverseNormals() -> int\nC++: virtual vtkTypeBool GetReverseNormals()\n\nFlag controls whether to reverse normal orientation.\n"},
  {"ReverseNormalsOn", PyvtkReverseSense_ReverseNormalsOn, METH_VARARGS,
   "V.ReverseNormalsOn()\nC++: virtual void ReverseNormalsOn()\n\nFlag controls whether to reverse normal orientation.\n"},
  {"ReverseNormalsOff", PyvtkReverseSense_ReverseNormalsOff, METH_VARARGS,
   "V.ReverseNormalsOff()\nC++: virtual void ReverseNormalsOff()\n\nFlag controls whether to reverse normal orientation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkReverseSense_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkReverseSense", // tp_name
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
  PyvtkReverseSense_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReverseSense_StaticNew()
{
  return vtkReverseSense::New();
}

PyObject *PyvtkReverseSense_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkReverseSense_Type, PyvtkReverseSense_Methods,
    "vtkReverseSense",
 &PyvtkReverseSense_StaticNew);

  PyTypeObject *pytype = &PyvtkReverseSense_Type;

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

void PyVTKAddFile_vtkReverseSense(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReverseSense_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReverseSense", o) != 0)
  {
    Py_DECREF(o);
  }

}

