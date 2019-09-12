// python wrapper for vtkPVAMRFragmentIntegration
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
#include "vtkInformationVector.h"
#include "vtkPVAMRFragmentIntegration.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVAMRFragmentIntegration(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVAMRFragmentIntegration_ClassNew(); }

#ifndef DECLARED_PyvtkAMRFragmentIntegration_ClassNew
extern "C" { PyObject *PyvtkAMRFragmentIntegration_ClassNew(); }
#define DECLARED_PyvtkAMRFragmentIntegration_ClassNew
#endif

static const char *PyvtkPVAMRFragmentIntegration_Doc =
  "vtkPVAMRFragmentIntegration - Generates fragment analysis from an amr\nvolume and a previously run contour on that volume\n\n"
  "Superclass: vtkAMRFragmentIntegration\n\n"
  ".SEE vtkAMRFragmentIntegration\n\n";


static PyObject *
PyvtkPVAMRFragmentIntegration_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVAMRFragmentIntegration::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAMRFragmentIntegration::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVAMRFragmentIntegration *tempr = vtkPVAMRFragmentIntegration::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVAMRFragmentIntegration *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAMRFragmentIntegration::NewInstance());

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
PyvtkPVAMRFragmentIntegration_AddInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

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
      op->vtkPVAMRFragmentIntegration::AddInputVolumeArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputVolumeArrayToProcess();
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::ClearInputVolumeArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputMassArrayToProcess(temp0);
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::AddInputMassArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputMassArrayToProcess();
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::ClearInputMassArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputVolumeWeightedArrayToProcess(temp0);
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::AddInputVolumeWeightedArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputVolumeWeightedArrayToProcess();
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::ClearInputVolumeWeightedArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_AddInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputMassWeightedArrayToProcess(temp0);
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::AddInputMassWeightedArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_ClearInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputMassWeightedArrayToProcess();
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::ClearInputMassWeightedArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRFragmentIntegration_SetContourConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContourConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRFragmentIntegration *op = static_cast<vtkPVAMRFragmentIntegration *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetContourConnection(temp0);
    }
    else
    {
      op->vtkPVAMRFragmentIntegration::SetContourConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVAMRFragmentIntegration_Methods[] = {
  {"IsTypeOf", PyvtkPVAMRFragmentIntegration_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVAMRFragmentIntegration_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVAMRFragmentIntegration_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVAMRFragmentIntegration\nC++: static vtkPVAMRFragmentIntegration *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVAMRFragmentIntegration_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVAMRFragmentIntegration\nC++: vtkPVAMRFragmentIntegration *NewInstance()\n\n"},
  {"AddInputVolumeArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputVolumeArrayToProcess, METH_VARARGS,
   "V.AddInputVolumeArrayToProcess(string)\nC++: void AddInputVolumeArrayToProcess(const char *name)\n\nAdd to list of volume arrays which are used for generating\ncontours.\n"},
  {"ClearInputVolumeArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputVolumeArrayToProcess, METH_VARARGS,
   "V.ClearInputVolumeArrayToProcess()\nC++: void ClearInputVolumeArrayToProcess()\n\nAdd to list of volume arrays which are used for generating\ncontours.\n"},
  {"AddInputMassArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputMassArrayToProcess, METH_VARARGS,
   "V.AddInputMassArrayToProcess(string)\nC++: void AddInputMassArrayToProcess(const char *name)\n\nAdd to list of mass arrays\n"},
  {"ClearInputMassArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputMassArrayToProcess, METH_VARARGS,
   "V.ClearInputMassArrayToProcess()\nC++: void ClearInputMassArrayToProcess()\n\nAdd to list of mass arrays\n"},
  {"AddInputVolumeWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputVolumeWeightedArrayToProcess, METH_VARARGS,
   "V.AddInputVolumeWeightedArrayToProcess(string)\nC++: void AddInputVolumeWeightedArrayToProcess(const char *name)\n\nAdd to list of volume weighted arrays\n"},
  {"ClearInputVolumeWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputVolumeWeightedArrayToProcess, METH_VARARGS,
   "V.ClearInputVolumeWeightedArrayToProcess()\nC++: void ClearInputVolumeWeightedArrayToProcess()\n\nAdd to list of volume weighted arrays\n"},
  {"AddInputMassWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_AddInputMassWeightedArrayToProcess, METH_VARARGS,
   "V.AddInputMassWeightedArrayToProcess(string)\nC++: void AddInputMassWeightedArrayToProcess(const char *name)\n\nAdd to list of mass weighted arrays\n"},
  {"ClearInputMassWeightedArrayToProcess", PyvtkPVAMRFragmentIntegration_ClearInputMassWeightedArrayToProcess, METH_VARARGS,
   "V.ClearInputMassWeightedArrayToProcess()\nC++: void ClearInputMassWeightedArrayToProcess()\n\nAdd to list of mass weighted arrays\n"},
  {"SetContourConnection", PyvtkPVAMRFragmentIntegration_SetContourConnection, METH_VARARGS,
   "V.SetContourConnection(vtkAlgorithmOutput)\nC++: void SetContourConnection(vtkAlgorithmOutput *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVAMRFragmentIntegration_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVAMRFragmentIntegration", // tp_name
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
  PyvtkPVAMRFragmentIntegration_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVAMRFragmentIntegration_StaticNew()
{
  return vtkPVAMRFragmentIntegration::New();
}

PyObject *PyvtkPVAMRFragmentIntegration_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVAMRFragmentIntegration_Type, PyvtkPVAMRFragmentIntegration_Methods,
    "vtkPVAMRFragmentIntegration",
 &PyvtkPVAMRFragmentIntegration_StaticNew);

  PyTypeObject *pytype = &PyvtkPVAMRFragmentIntegration_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAMRFragmentIntegration_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVAMRFragmentIntegration(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVAMRFragmentIntegration_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVAMRFragmentIntegration", o) != 0)
  {
    Py_DECREF(o);
  }

}

