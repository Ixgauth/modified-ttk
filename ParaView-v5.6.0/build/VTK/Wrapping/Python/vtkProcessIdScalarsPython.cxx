// python wrapper for vtkProcessIdScalars
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
#include "vtkProcessIdScalars.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProcessIdScalars(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProcessIdScalars_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkProcessIdScalars_Doc =
  "vtkProcessIdScalars - Sets cell or point scalars to the processor\nrank.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProcessIdScalars is meant to display which processor owns which\n"
  "cells and points.  It is useful for visualizing the partitioning for\n"
  "streaming or distributed pipelines.\n\n"
  "@sa\n"
  "vtkPolyDataStreamer\n\n";


static PyObject *
PyvtkProcessIdScalars_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProcessIdScalars::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcessIdScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProcessIdScalars *tempr = vtkProcessIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcessIdScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcessIdScalars::NewInstance());

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
PyvtkProcessIdScalars_SetScalarModeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToCellData();
    }
    else
    {
      op->vtkProcessIdScalars::SetScalarModeToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetScalarModeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToPointData();
    }
    else
    {
      op->vtkProcessIdScalars::SetScalarModeToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkProcessIdScalars::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomMode(temp0);
    }
    else
    {
      op->vtkProcessIdScalars::SetRandomMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkProcessIdScalars::GetRandomMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOn();
    }
    else
    {
      op->vtkProcessIdScalars::RandomModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOff();
    }
    else
    {
      op->vtkProcessIdScalars::RandomModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkProcessIdScalars::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkProcessIdScalars::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProcessIdScalars_Methods[] = {
  {"IsTypeOf", PyvtkProcessIdScalars_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProcessIdScalars_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProcessIdScalars_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProcessIdScalars\nC++: static vtkProcessIdScalars *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProcessIdScalars_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProcessIdScalars\nC++: vtkProcessIdScalars *NewInstance()\n\n"},
  {"SetScalarModeToCellData", PyvtkProcessIdScalars_SetScalarModeToCellData, METH_VARARGS,
   "V.SetScalarModeToCellData()\nC++: void SetScalarModeToCellData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {"SetScalarModeToPointData", PyvtkProcessIdScalars_SetScalarModeToPointData, METH_VARARGS,
   "V.SetScalarModeToPointData()\nC++: void SetScalarModeToPointData()\n\n"},
  {"GetScalarMode", PyvtkProcessIdScalars_GetScalarMode, METH_VARARGS,
   "V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\n"},
  {"SetRandomMode", PyvtkProcessIdScalars_SetRandomMode, METH_VARARGS,
   "V.SetRandomMode(int)\nC++: virtual void SetRandomMode(vtkTypeBool _arg)\n\n"},
  {"GetRandomMode", PyvtkProcessIdScalars_GetRandomMode, METH_VARARGS,
   "V.GetRandomMode() -> int\nC++: virtual vtkTypeBool GetRandomMode()\n\n"},
  {"RandomModeOn", PyvtkProcessIdScalars_RandomModeOn, METH_VARARGS,
   "V.RandomModeOn()\nC++: virtual void RandomModeOn()\n\n"},
  {"RandomModeOff", PyvtkProcessIdScalars_RandomModeOff, METH_VARARGS,
   "V.RandomModeOff()\nC++: virtual void RandomModeOff()\n\n"},
  {"SetController", PyvtkProcessIdScalars_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkProcessIdScalars_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProcessIdScalars_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkProcessIdScalars", // tp_name
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
  PyvtkProcessIdScalars_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProcessIdScalars_StaticNew()
{
  return vtkProcessIdScalars::New();
}

PyObject *PyvtkProcessIdScalars_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProcessIdScalars_Type, PyvtkProcessIdScalars_Methods,
    "vtkProcessIdScalars",
 &PyvtkProcessIdScalars_StaticNew);

  PyTypeObject *pytype = &PyvtkProcessIdScalars_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProcessIdScalars(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProcessIdScalars_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProcessIdScalars", o) != 0)
  {
    Py_DECREF(o);
  }

}

