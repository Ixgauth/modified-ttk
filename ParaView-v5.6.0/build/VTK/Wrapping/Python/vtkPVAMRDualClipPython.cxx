// python wrapper for vtkPVAMRDualClip
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
#include "vtkPVAMRDualClip.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVAMRDualClip(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVAMRDualClip_ClassNew(); }

#ifndef DECLARED_PyvtkAMRDualClip_ClassNew
extern "C" { PyObject *PyvtkAMRDualClip_ClassNew(); }
#define DECLARED_PyvtkAMRDualClip_ClassNew
#endif

static const char *PyvtkPVAMRDualClip_Doc =
  "vtkPVAMRDualClip - Generates contour given one or more cell array and\na volume fraction value.\n\n"
  "Superclass: vtkAMRDualClip\n\n"
  ".SEE vtkAMRDualClip\n\n";


static PyObject *
PyvtkPVAMRDualClip_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVAMRDualClip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAMRDualClip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVAMRDualClip *tempr = vtkPVAMRDualClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVAMRDualClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAMRDualClip::NewInstance());

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
PyvtkPVAMRDualClip_AddInputCellArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputCellArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputCellArrayToProcess(temp0);
    }
    else
    {
      op->vtkPVAMRDualClip::AddInputCellArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_ClearInputCellArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputCellArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputCellArrayToProcess();
    }
    else
    {
      op->vtkPVAMRDualClip::ClearInputCellArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkPVAMRDualClip::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAMRDualClip_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAMRDualClip *op = static_cast<vtkPVAMRDualClip *>(vp);

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
      op->vtkPVAMRDualClip::SetVolumeFractionSurfaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVAMRDualClip_Methods[] = {
  {"IsTypeOf", PyvtkPVAMRDualClip_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVAMRDualClip_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVAMRDualClip_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVAMRDualClip\nC++: static vtkPVAMRDualClip *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVAMRDualClip_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVAMRDualClip\nC++: vtkPVAMRDualClip *NewInstance()\n\n"},
  {"AddInputCellArrayToProcess", PyvtkPVAMRDualClip_AddInputCellArrayToProcess, METH_VARARGS,
   "V.AddInputCellArrayToProcess(string)\nC++: void AddInputCellArrayToProcess(const char *name)\n\nAdd to list of cell arrays which are used for generating\ncontours.\n"},
  {"ClearInputCellArrayToProcess", PyvtkPVAMRDualClip_ClearInputCellArrayToProcess, METH_VARARGS,
   "V.ClearInputCellArrayToProcess()\nC++: void ClearInputCellArrayToProcess()\n\nAdd to list of cell arrays which are used for generating\ncontours.\n"},
  {"GetVolumeFractionSurfaceValue", PyvtkPVAMRDualClip_GetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {"SetVolumeFractionSurfaceValue", PyvtkPVAMRDualClip_SetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.SetVolumeFractionSurfaceValue(float)\nC++: virtual void SetVolumeFractionSurfaceValue(double _arg)\n\nGet / Set volume fraction value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVAMRDualClip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVAMRDualClip", // tp_name
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
  PyvtkPVAMRDualClip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVAMRDualClip_StaticNew()
{
  return vtkPVAMRDualClip::New();
}

PyObject *PyvtkPVAMRDualClip_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVAMRDualClip_Type, PyvtkPVAMRDualClip_Methods,
    "vtkPVAMRDualClip",
 &PyvtkPVAMRDualClip_StaticNew);

  PyTypeObject *pytype = &PyvtkPVAMRDualClip_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAMRDualClip_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVAMRDualClip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVAMRDualClip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVAMRDualClip", o) != 0)
  {
    Py_DECREF(o);
  }

}

