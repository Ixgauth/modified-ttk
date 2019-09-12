// python wrapper for vtkExecutionTimer
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
#include "vtkExecutionTimer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExecutionTimer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExecutionTimer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkExecutionTimer_Doc =
  "vtkExecutionTimer - Time filter execution\n\n"
  "Superclass: vtkObject\n\n"
  "This object monitors a single filter for StartEvent and EndEvent.\n"
  "Each time it hears StartEvent it records the time.  Each time it\n"
  "hears EndEvent it measures the elapsed time (both CPU and wall-clock)\n"
  "since the most recent StartEvent.  Internally we use vtkTimerLog for\n"
  "measurements.\n\n"
  "By default we simply store the elapsed time.  You are welcome to\n"
  "subclass and override TimerFinished() to do anything you want.\n\n";


static PyObject *
PyvtkExecutionTimer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExecutionTimer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutionTimer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExecutionTimer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutionTimer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExecutionTimer *tempr = vtkExecutionTimer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutionTimer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExecutionTimer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExecutionTimer::NewInstance());

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
PyvtkExecutionTimer_SetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetFilter(temp0);
    }
    else
    {
      op->vtkExecutionTimer::SetFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutionTimer_GetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetFilter() :
      op->vtkExecutionTimer::GetFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutionTimer_GetElapsedCPUTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedCPUTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetElapsedCPUTime() :
      op->vtkExecutionTimer::GetElapsedCPUTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutionTimer_GetElapsedWallClockTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedWallClockTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionTimer *op = static_cast<vtkExecutionTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetElapsedWallClockTime() :
      op->vtkExecutionTimer::GetElapsedWallClockTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExecutionTimer_Methods[] = {
  {"IsTypeOf", PyvtkExecutionTimer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExecutionTimer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExecutionTimer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExecutionTimer\nC++: static vtkExecutionTimer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExecutionTimer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExecutionTimer\nC++: vtkExecutionTimer *NewInstance()\n\n"},
  {"SetFilter", PyvtkExecutionTimer_SetFilter, METH_VARARGS,
   "V.SetFilter(vtkAlgorithm)\nC++: void SetFilter(vtkAlgorithm *filter)\n\nSet/get the filter to be monitored.  The only real constraint\nhere is that the vtkExecutive associated with the filter must\nfire StartEvent and EndEvent before and after the filter is\nexecuted.  All VTK executives should do this.\n"},
  {"GetFilter", PyvtkExecutionTimer_GetFilter, METH_VARARGS,
   "V.GetFilter() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetFilter()\n\nSet/get the filter to be monitored.  The only real constraint\nhere is that the vtkExecutive associated with the filter must\nfire StartEvent and EndEvent before and after the filter is\nexecuted.  All VTK executives should do this.\n"},
  {"GetElapsedCPUTime", PyvtkExecutionTimer_GetElapsedCPUTime, METH_VARARGS,
   "V.GetElapsedCPUTime() -> float\nC++: virtual double GetElapsedCPUTime()\n\nGet the total CPU time (in seconds) that elapsed between\nStartEvent and EndEvent.  This is undefined before the filter has\nfinished executing.\n"},
  {"GetElapsedWallClockTime", PyvtkExecutionTimer_GetElapsedWallClockTime, METH_VARARGS,
   "V.GetElapsedWallClockTime() -> float\nC++: virtual double GetElapsedWallClockTime()\n\nGet the total wall clock time (in seconds) that elapsed between\nStartEvent and EndEvent.  This is undefined before the filter has\nfinished executing.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExecutionTimer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkExecutionTimer", // tp_name
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
  PyvtkExecutionTimer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExecutionTimer_StaticNew()
{
  return vtkExecutionTimer::New();
}

PyObject *PyvtkExecutionTimer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExecutionTimer_Type, PyvtkExecutionTimer_Methods,
    "vtkExecutionTimer",
 &PyvtkExecutionTimer_StaticNew);

  PyTypeObject *pytype = &PyvtkExecutionTimer_Type;

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

void PyVTKAddFile_vtkExecutionTimer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExecutionTimer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExecutionTimer", o) != 0)
  {
    Py_DECREF(o);
  }

}

