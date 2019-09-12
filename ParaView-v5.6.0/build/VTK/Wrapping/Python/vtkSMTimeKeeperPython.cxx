// python wrapper for vtkSMTimeKeeper
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
#include "vtkSMTimeKeeper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTimeKeeper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTimeKeeper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMTimeKeeper_Doc =
  "vtkSMTimeKeeper - a time keeper is used to keep track of the pipeline\ntime.\n\n"
  "Superclass: vtkObject\n\n"
  "TimeKeeper can be thought of as a application wide clock. In\n"
  "ParaView, all views are registered with the TimeKeeper (using\n"
  "AddView()) so that all the views render data at the same global time.\n\n"
  "TimeKeeper also keeps track of time steps and continuous time ranges\n"
  "provided by sources/readers/filters. This expects that the readers\n"
  "have a \"TimestepValues\" and/or \"TimeRange\" properties from which the\n"
  "time steps and time ranges provided by the reader can be obtained.\n"
  "All sources whose time steps/time ranges must be noted by the time\n"
  "keeper need to be registered with the time keeper using\n"
  "AddTimeSource(). ParaView automatically registers all created\n"
  "sources/filters/readers with the time keeper. The time steps and time\n"
  "ranges are made accessible by two information properties\n"
  "\"TimestepValues\" and \"TimeRange\" on the TimeKeeper proxy.\n\n"
  "To change the time shown by all the views, simply change the \"Time\"\n"
  "property on the time keeper proxy (don't directly call SetTime()\n"
  "since otherwise undo/redo, state etc. will not work as expected).\n\n"
  "This proxy has no VTK objects that it creates on the server.\n\n";


static PyObject *
PyvtkSMTimeKeeper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTimeKeeper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTimeKeeper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTimeKeeper *tempr = vtkSMTimeKeeper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTimeKeeper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTimeKeeper::NewInstance());

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
PyvtkSMTimeKeeper_SetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTime(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::SetTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkSMTimeKeeper::GetTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_AddView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->AddView(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::AddView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveView(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::RemoveView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveAllViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllViews();
    }
    else
    {
      op->vtkSMTimeKeeper::RemoveAllViews();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_AddTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    if (ap.IsBound())
    {
      op->AddTimeSource(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::AddTimeSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveTimeSource(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::RemoveTimeSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveAllTimeSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTimeSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllTimeSources();
    }
    else
    {
      op->vtkSMTimeKeeper::RemoveAllTimeSources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_AddSuppressedTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSuppressedTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    if (ap.IsBound())
    {
      op->AddSuppressedTimeSource(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::AddSuppressedTimeSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_RemoveSuppressedTimeSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSuppressedTimeSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveSuppressedTimeSource(temp0);
    }
    else
    {
      op->vtkSMTimeKeeper::RemoveSuppressedTimeSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeKeeper_UpdateTimeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeKeeper *op = static_cast<vtkSMTimeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateTimeInformation();
    }
    else
    {
      op->vtkSMTimeKeeper::UpdateTimeInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTimeKeeper_Methods[] = {
  {"IsTypeOf", PyvtkSMTimeKeeper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTimeKeeper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTimeKeeper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTimeKeeper\nC++: static vtkSMTimeKeeper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTimeKeeper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTimeKeeper\nC++: vtkSMTimeKeeper *NewInstance()\n\n"},
  {"SetTime", PyvtkSMTimeKeeper_SetTime, METH_VARARGS,
   "V.SetTime(float)\nC++: void SetTime(double time)\n\nGet/Set the pipeline time.\n"},
  {"GetTime", PyvtkSMTimeKeeper_GetTime, METH_VARARGS,
   "V.GetTime() -> float\nC++: virtual double GetTime()\n\nGet/Set the pipeline time.\n"},
  {"AddView", PyvtkSMTimeKeeper_AddView, METH_VARARGS,
   "V.AddView(vtkSMProxy)\nC++: void AddView(vtkSMProxy *)\n\nAdd/Remove view proxy linked to this time keeper.\n"},
  {"RemoveView", PyvtkSMTimeKeeper_RemoveView, METH_VARARGS,
   "V.RemoveView(vtkSMProxy)\nC++: void RemoveView(vtkSMProxy *)\n\nAdd/Remove view proxy linked to this time keeper.\n"},
  {"RemoveAllViews", PyvtkSMTimeKeeper_RemoveAllViews, METH_VARARGS,
   "V.RemoveAllViews()\nC++: void RemoveAllViews()\n\nAdd/Remove view proxy linked to this time keeper.\n"},
  {"AddTimeSource", PyvtkSMTimeKeeper_AddTimeSource, METH_VARARGS,
   "V.AddTimeSource(vtkSMSourceProxy)\nC++: void AddTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {"RemoveTimeSource", PyvtkSMTimeKeeper_RemoveTimeSource, METH_VARARGS,
   "V.RemoveTimeSource(vtkSMSourceProxy)\nC++: void RemoveTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {"RemoveAllTimeSources", PyvtkSMTimeKeeper_RemoveAllTimeSources, METH_VARARGS,
   "V.RemoveAllTimeSources()\nC++: void RemoveAllTimeSources()\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {"AddSuppressedTimeSource", PyvtkSMTimeKeeper_AddSuppressedTimeSource, METH_VARARGS,
   "V.AddSuppressedTimeSource(vtkSMSourceProxy)\nC++: void AddSuppressedTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {"RemoveSuppressedTimeSource", PyvtkSMTimeKeeper_RemoveSuppressedTimeSource, METH_VARARGS,
   "V.RemoveSuppressedTimeSource(vtkSMSourceProxy)\nC++: void RemoveSuppressedTimeSource(vtkSMSourceProxy *)\n\nList of proxies that provide time. TimestepValues property has a\nset of timesteps provided by all the sources added to this\nproperty alone.\n"},
  {"UpdateTimeInformation", PyvtkSMTimeKeeper_UpdateTimeInformation, METH_VARARGS,
   "V.UpdateTimeInformation()\nC++: void UpdateTimeInformation()\n\nIterates over all sources providing time and calls\n`vtkSMSourceProxy::UpdatePipelineInformation` on them. That\nensures that timekeeper is using the latest time information\navailable to it.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTimeKeeper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMTimeKeeper", // tp_name
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
  PyvtkSMTimeKeeper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTimeKeeper_StaticNew()
{
  return vtkSMTimeKeeper::New();
}

PyObject *PyvtkSMTimeKeeper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTimeKeeper_Type, PyvtkSMTimeKeeper_Methods,
    "vtkSMTimeKeeper",
 &PyvtkSMTimeKeeper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTimeKeeper_Type;

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

void PyVTKAddFile_vtkSMTimeKeeper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTimeKeeper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTimeKeeper", o) != 0)
  {
    Py_DECREF(o);
  }

}

