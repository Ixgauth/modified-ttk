// python wrapper for vtkAMRCutPlane
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
#include "vtkAMRCutPlane.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRCutPlane(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRCutPlane_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAMRCutPlane_Doc =
  "vtkAMRCutPlane -  A concrete instance of vtkMultiBlockDataSet that\nprovides functionality for cutting an AMR dataset (an instance of\nvtkOverlappingAMR) with user supplied implicit plane function defined\nby a normal and center.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
;


static PyObject *
PyvtkAMRCutPlane_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRCutPlane::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRCutPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRCutPlane *tempr = vtkAMRCutPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRCutPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRCutPlane::NewInstance());

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
PyvtkAMRCutPlane_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRCutPlane::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRCutPlane_SetCenter_s1(self, args);
    case 1:
      return PyvtkAMRCutPlane_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkAMRCutPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRCutPlane::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRCutPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkAMRCutPlane_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkAMRCutPlane_SetLevelOfResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelOfResolution(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetLevelOfResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetLevelOfResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOfResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevelOfResolution() :
      op->vtkAMRCutPlane::GetLevelOfResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetUseNativeCutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeCutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNativeCutter(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetUseNativeCutter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetUseNativeCutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNativeCutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseNativeCutter() :
      op->vtkAMRCutPlane::GetUseNativeCutter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_UseNativeCutterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNativeCutterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNativeCutterOn();
    }
    else
    {
      op->vtkAMRCutPlane::UseNativeCutterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_UseNativeCutterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNativeCutterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNativeCutterOff();
    }
    else
    {
      op->vtkAMRCutPlane::UseNativeCutterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->vtkAMRCutPlane::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRCutPlane::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRCutPlane::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRCutPlane::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRCutPlane_Methods[] = {
  {"IsTypeOf", PyvtkAMRCutPlane_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRCutPlane_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRCutPlane_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRCutPlane\nC++: static vtkAMRCutPlane *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRCutPlane_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRCutPlane\nC++: vtkAMRCutPlane *NewInstance()\n\n"},
  {"SetCenter", PyvtkAMRCutPlane_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"SetNormal", PyvtkAMRCutPlane_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"SetLevelOfResolution", PyvtkAMRCutPlane_SetLevelOfResolution, METH_VARARGS,
   "V.SetLevelOfResolution(int)\nC++: virtual void SetLevelOfResolution(int _arg)\n\nSets the level of resolution\n"},
  {"GetLevelOfResolution", PyvtkAMRCutPlane_GetLevelOfResolution, METH_VARARGS,
   "V.GetLevelOfResolution() -> int\nC++: virtual int GetLevelOfResolution()\n\nSets the level of resolution\n"},
  {"SetUseNativeCutter", PyvtkAMRCutPlane_SetUseNativeCutter, METH_VARARGS,
   "V.SetUseNativeCutter(bool)\nC++: virtual void SetUseNativeCutter(bool _arg)\n\n\n"},
  {"GetUseNativeCutter", PyvtkAMRCutPlane_GetUseNativeCutter, METH_VARARGS,
   "V.GetUseNativeCutter() -> bool\nC++: virtual bool GetUseNativeCutter()\n\n\n"},
  {"UseNativeCutterOn", PyvtkAMRCutPlane_UseNativeCutterOn, METH_VARARGS,
   "V.UseNativeCutterOn()\nC++: virtual void UseNativeCutterOn()\n\n\n"},
  {"UseNativeCutterOff", PyvtkAMRCutPlane_UseNativeCutterOff, METH_VARARGS,
   "V.UseNativeCutterOff()\nC++: virtual void UseNativeCutterOff()\n\n\n"},
  {"SetController", PyvtkAMRCutPlane_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *_arg)\n\nSet/Get a multiprocess controller for parallel processing. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"GetController", PyvtkAMRCutPlane_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess controller for parallel processing. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"FillInputPortInformation", PyvtkAMRCutPlane_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"FillOutputPortInformation", PyvtkAMRCutPlane_FillOutputPortInformation, METH_VARARGS,
   "V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nFill the output port information objects for this algorithm. This\nis invoked by the first call to GetOutputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRCutPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkAMRCutPlane", // tp_name
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
  PyvtkAMRCutPlane_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRCutPlane_StaticNew()
{
  return vtkAMRCutPlane::New();
}

PyObject *PyvtkAMRCutPlane_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRCutPlane_Type, PyvtkAMRCutPlane_Methods,
    "vtkAMRCutPlane",
 &PyvtkAMRCutPlane_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRCutPlane_Type;

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

void PyVTKAddFile_vtkAMRCutPlane(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRCutPlane_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRCutPlane", o) != 0)
  {
    Py_DECREF(o);
  }

}

