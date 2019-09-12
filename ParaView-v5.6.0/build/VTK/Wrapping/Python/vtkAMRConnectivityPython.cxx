// python wrapper for vtkAMRConnectivity
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
#include "vtkAMRConnectivity.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRConnectivity(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRConnectivity_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAMRConnectivity_Doc =
  "vtkAMRConnectivity - Identify fragments in the grid\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  ".SEE vtkAMRConnectivity\n\n";


static PyObject *
PyvtkAMRConnectivity_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRConnectivity *tempr = vtkAMRConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRConnectivity::NewInstance());

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
PyvtkAMRConnectivity_AddInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputVolumeArrayToProcess(temp0);
    }
    else
    {
      op->vtkAMRConnectivity::AddInputVolumeArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_ClearInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputVolumeArrayToProcess();
    }
    else
    {
      op->vtkAMRConnectivity::ClearInputVolumeArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkAMRConnectivity::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeFractionSurfaceValue(temp0);
    }
    else
    {
      op->vtkAMRConnectivity::SetVolumeFractionSurfaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_GetResolveBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolveBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetResolveBlocks() :
      op->vtkAMRConnectivity::GetResolveBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SetResolveBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolveBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolveBlocks(temp0);
    }
    else
    {
      op->vtkAMRConnectivity::SetResolveBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_GetPropagateGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropagateGhosts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropagateGhosts() :
      op->vtkAMRConnectivity::GetPropagateGhosts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRConnectivity_SetPropagateGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropagateGhosts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRConnectivity *op = static_cast<vtkAMRConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropagateGhosts(temp0);
    }
    else
    {
      op->vtkAMRConnectivity::SetPropagateGhosts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkAMRConnectivity_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRConnectivity_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRConnectivity_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRConnectivity\nC++: static vtkAMRConnectivity *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRConnectivity_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRConnectivity\nC++: vtkAMRConnectivity *NewInstance()\n\n"},
  {"AddInputVolumeArrayToProcess", PyvtkAMRConnectivity_AddInputVolumeArrayToProcess, METH_VARARGS,
   "V.AddInputVolumeArrayToProcess(string)\nC++: void AddInputVolumeArrayToProcess(const char *name)\n\nAdd to list of volume arrays to find connected fragments\n"},
  {"ClearInputVolumeArrayToProcess", PyvtkAMRConnectivity_ClearInputVolumeArrayToProcess, METH_VARARGS,
   "V.ClearInputVolumeArrayToProcess()\nC++: void ClearInputVolumeArrayToProcess()\n\nAdd to list of volume arrays to find connected fragments\n"},
  {"GetVolumeFractionSurfaceValue", PyvtkAMRConnectivity_GetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {"SetVolumeFractionSurfaceValue", PyvtkAMRConnectivity_SetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.SetVolumeFractionSurfaceValue(float)\nC++: virtual void SetVolumeFractionSurfaceValue(double _arg)\n\nGet / Set volume fraction value.\n"},
  {"GetResolveBlocks", PyvtkAMRConnectivity_GetResolveBlocks, METH_VARARGS,
   "V.GetResolveBlocks() -> bool\nC++: virtual bool GetResolveBlocks()\n\nGet / Set where to resolve the regions between blocks\n"},
  {"SetResolveBlocks", PyvtkAMRConnectivity_SetResolveBlocks, METH_VARARGS,
   "V.SetResolveBlocks(bool)\nC++: virtual void SetResolveBlocks(bool _arg)\n\nGet / Set where to resolve the regions between blocks\n"},
  {"GetPropagateGhosts", PyvtkAMRConnectivity_GetPropagateGhosts, METH_VARARGS,
   "V.GetPropagateGhosts() -> bool\nC++: virtual bool GetPropagateGhosts()\n\nGet / Set where to resolve the regions between blocks\n"},
  {"SetPropagateGhosts", PyvtkAMRConnectivity_SetPropagateGhosts, METH_VARARGS,
   "V.SetPropagateGhosts(bool)\nC++: virtual void SetPropagateGhosts(bool _arg)\n\nGet / Set where to resolve the regions between blocks\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRConnectivity", // tp_name
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
  PyvtkAMRConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRConnectivity_StaticNew()
{
  return vtkAMRConnectivity::New();
}

PyObject *PyvtkAMRConnectivity_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRConnectivity_Type, PyvtkAMRConnectivity_Methods,
    "vtkAMRConnectivity",
 &PyvtkAMRConnectivity_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRConnectivity_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

