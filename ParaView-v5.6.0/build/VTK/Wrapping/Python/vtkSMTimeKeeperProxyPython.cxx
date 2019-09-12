// python wrapper for vtkSMTimeKeeperProxy
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
#include "vtkSMTimeKeeperProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTimeKeeperProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTimeKeeperProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMTimeKeeperProxy_Doc =
  "vtkSMTimeKeeperProxy - We simply pass the TimestepValues and\nTimeRange properties to the client-side vtkSMTimeKeeper instance so\nthat it can keep those up-to-date.\n\n"
  "Superclass: vtkSMProxy\n\n"
;


static PyObject *
PyvtkSMTimeKeeperProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTimeKeeperProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeperProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTimeKeeperProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeperProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTimeKeeperProxy *tempr = vtkSMTimeKeeperProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeperProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTimeKeeperProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTimeKeeperProxy::NewInstance());

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
PyvtkSMTimeKeeperProxy_AddTimeSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddTimeSource(temp0, temp1) :
      op->vtkSMTimeKeeperProxy::AddTimeSource(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_AddTimeSource_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AddTimeSource");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMTimeKeeperProxy::AddTimeSource(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_AddTimeSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMTimeKeeperProxy_AddTimeSource_s1(self, args);
    case 3:
      return PyvtkSMTimeKeeperProxy_AddTimeSource_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddTimeSource");
  return nullptr;
}



static PyObject *
PyvtkSMTimeKeeperProxy_RemoveTimeSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveTimeSource(temp0, temp1) :
      op->vtkSMTimeKeeperProxy::RemoveTimeSource(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_RemoveTimeSource_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveTimeSource");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMTimeKeeperProxy::RemoveTimeSource(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_RemoveTimeSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMTimeKeeperProxy_RemoveTimeSource_s1(self, args);
    case 3:
      return PyvtkSMTimeKeeperProxy_RemoveTimeSource_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTimeSource");
  return nullptr;
}



static PyObject *
PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTimeSourceTracked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTimeSourceTracked(temp0) :
      op->vtkSMTimeKeeperProxy::IsTimeSourceTracked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTimeSourceTracked");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMTimeKeeperProxy::IsTimeSourceTracked(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_IsTimeSourceTracked(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s1(self, args);
    case 2:
      return PyvtkSMTimeKeeperProxy_IsTimeSourceTracked_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsTimeSourceTracked");
  return nullptr;
}



static PyObject *
PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSuppressTimeSource(temp0, temp1) :
      op->vtkSMTimeKeeperProxy::SetSuppressTimeSource(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSuppressTimeSource");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMTimeKeeperProxy::SetSuppressTimeSource(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_SetSuppressTimeSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s1(self, args);
    case 3:
      return PyvtkSMTimeKeeperProxy_SetSuppressTimeSource_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSuppressTimeSource");
  return nullptr;
}



static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerBoundTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerBoundTimeStep(temp0) :
      op->vtkSMTimeKeeperProxy::GetLowerBoundTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLowerBoundTimeStep");

  vtkSMProxy *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    double tempr = vtkSMTimeKeeperProxy::GetLowerBoundTimeStep(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s1(self, args);
    case 2:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLowerBoundTimeStep");
  return nullptr;
}



static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerBoundTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLowerBoundTimeStepIndex(temp0) :
      op->vtkSMTimeKeeperProxy::GetLowerBoundTimeStepIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLowerBoundTimeStepIndex");

  vtkSMProxy *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkSMTimeKeeperProxy::GetLowerBoundTimeStepIndex(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s1(self, args);
    case 2:
      return PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLowerBoundTimeStepIndex");
  return nullptr;
}



static PyObject *
PyvtkSMTimeKeeperProxy_UpdateTimeInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeperProxy *op = static_cast<vtkSMTimeKeeperProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateTimeInformation();
    }
    else
    {
      op->vtkSMTimeKeeperProxy::UpdateTimeInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_UpdateTimeInformation_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateTimeInformation");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    vtkSMTimeKeeperProxy::UpdateTimeInformation(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMTimeKeeperProxy_UpdateTimeInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMTimeKeeperProxy_UpdateTimeInformation_s1(self, args);
    case 1:
      return PyvtkSMTimeKeeperProxy_UpdateTimeInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateTimeInformation");
  return nullptr;
}


static PyMethodDef PyvtkSMTimeKeeperProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMTimeKeeperProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTimeKeeperProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTimeKeeperProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTimeKeeperProxy\nC++: static vtkSMTimeKeeperProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTimeKeeperProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTimeKeeperProxy\nC++: vtkSMTimeKeeperProxy *NewInstance()\n\n"},
  {"AddTimeSource", PyvtkSMTimeKeeperProxy_AddTimeSource, METH_VARARGS,
   "V.AddTimeSource(vtkSMProxy, bool) -> bool\nC++: virtual bool AddTimeSource(vtkSMProxy *proxy,\n    bool suppress_input)\nV.AddTimeSource(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool AddTimeSource(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy, bool suppress_input)\n\nTrack timesteps provided by a source. If suppress_input is true,\nbefore adding the proxy, if the proxy has producers those will be\nremoved from the time sources i.e. we'll ignore timesteps from\nthe input.\n"},
  {"RemoveTimeSource", PyvtkSMTimeKeeperProxy_RemoveTimeSource, METH_VARARGS,
   "V.RemoveTimeSource(vtkSMProxy, bool) -> bool\nC++: virtual bool RemoveTimeSource(vtkSMProxy *proxy,\n    bool unsuppress_input)\nV.RemoveTimeSource(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool RemoveTimeSource(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy, bool unsuppress_input)\n\nRemove a particular time source.\n"},
  {"IsTimeSourceTracked", PyvtkSMTimeKeeperProxy_IsTimeSourceTracked, METH_VARARGS,
   "V.IsTimeSourceTracked(vtkSMProxy) -> bool\nC++: virtual bool IsTimeSourceTracked(vtkSMProxy *proxy)\nV.IsTimeSourceTracked(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool IsTimeSourceTracked(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy)\n\nReturns true if the proxy has been added to time sources and not\nsuppressed.\n"},
  {"SetSuppressTimeSource", PyvtkSMTimeKeeperProxy_SetSuppressTimeSource, METH_VARARGS,
   "V.SetSuppressTimeSource(vtkSMProxy, bool) -> bool\nC++: virtual bool SetSuppressTimeSource(vtkSMProxy *proxy,\n    bool suppress)\nV.SetSuppressTimeSource(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool SetSuppressTimeSource(vtkSMProxy *timeKeeper,\n    vtkSMProxy *proxy, bool suppress)\n\nSet whether to suppress a time source that has been added to the\ntime keeper. Suppressing a source results in its time being\nignored by the time keeper.\n"},
  {"GetLowerBoundTimeStep", PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStep, METH_VARARGS,
   "V.GetLowerBoundTimeStep(float) -> float\nC++: virtual double GetLowerBoundTimeStep(double value)\nV.GetLowerBoundTimeStep(vtkSMProxy, float) -> float\nC++: static double GetLowerBoundTimeStep(vtkSMProxy *timeKeeper,\n    double value)\n\nReturns a time value after snapping to a lower-bound in the\ncurrent timesteps.\n"},
  {"GetLowerBoundTimeStepIndex", PyvtkSMTimeKeeperProxy_GetLowerBoundTimeStepIndex, METH_VARARGS,
   "V.GetLowerBoundTimeStepIndex(float) -> int\nC++: virtual int GetLowerBoundTimeStepIndex(double value)\nV.GetLowerBoundTimeStepIndex(vtkSMProxy, float) -> int\nC++: static int GetLowerBoundTimeStepIndex(vtkSMProxy *timeKeeper,\n     double value)\n\nReturns the index for the lower bound of the time specified in\ncurrent timestep values, if possible. If there are no timestep\nvalues, returns 0.\n"},
  {"UpdateTimeInformation", PyvtkSMTimeKeeperProxy_UpdateTimeInformation, METH_VARARGS,
   "V.UpdateTimeInformation()\nC++: virtual void UpdateTimeInformation()\nV.UpdateTimeInformation(vtkSMProxy)\nC++: static void UpdateTimeInformation(vtkSMProxy *timeKeeper)\n\nIterates over all sources providing time and calls\n`vtkSMSourceProxy::UpdatePipelineInformation` on them. That\nensures that timekeeper is using the latest time information\navailable to it.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTimeKeeperProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMTimeKeeperProxy", // tp_name
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
  PyvtkSMTimeKeeperProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTimeKeeperProxy_StaticNew()
{
  return vtkSMTimeKeeperProxy::New();
}

PyObject *PyvtkSMTimeKeeperProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTimeKeeperProxy_Type, PyvtkSMTimeKeeperProxy_Methods,
    "vtkSMTimeKeeperProxy",
 &PyvtkSMTimeKeeperProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTimeKeeperProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTimeKeeperProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTimeKeeperProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTimeKeeperProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

