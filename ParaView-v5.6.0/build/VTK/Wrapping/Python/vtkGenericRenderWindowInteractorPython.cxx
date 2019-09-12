// python wrapper for vtkGenericRenderWindowInteractor
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
#include "vtkGenericRenderWindowInteractor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericRenderWindowInteractor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericRenderWindowInteractor_ClassNew(); }

#ifndef DECLARED_PyvtkRenderWindowInteractor_ClassNew
extern "C" { PyObject *PyvtkRenderWindowInteractor_ClassNew(); }
#define DECLARED_PyvtkRenderWindowInteractor_ClassNew
#endif

static const char *PyvtkGenericRenderWindowInteractor_Doc =
  "vtkGenericRenderWindowInteractor - platform-independent programmable\nrender window interactor.\n\n"
  "Superclass: vtkRenderWindowInteractor\n\n"
  "vtkGenericRenderWindowInteractor provides a way to translate native\n"
  "mouse and keyboard events into vtk Events.   By calling the methods\n"
  "on this class, vtk events will be invoked.   This will allow\n"
  "scripting languages to use vtkInteractorStyles and 3D widgets.\n\n";


static PyObject *
PyvtkGenericRenderWindowInteractor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericRenderWindowInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericRenderWindowInteractor *tempr = vtkGenericRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericRenderWindowInteractor::NewInstance());

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
PyvtkGenericRenderWindowInteractor_TimerEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimerEvent();
    }
    else
    {
      op->vtkGenericRenderWindowInteractor::TimerEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_SetTimerEventResetsTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventResetsTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventResetsTimer(temp0);
    }
    else
    {
      op->vtkGenericRenderWindowInteractor::SetTimerEventResetsTimer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_GetTimerEventResetsTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventResetsTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventResetsTimer() :
      op->vtkGenericRenderWindowInteractor::GetTimerEventResetsTimer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEventResetsTimerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimerEventResetsTimerOn();
    }
    else
    {
      op->vtkGenericRenderWindowInteractor::TimerEventResetsTimerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEventResetsTimerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimerEventResetsTimerOff();
    }
    else
    {
      op->vtkGenericRenderWindowInteractor::TimerEventResetsTimerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericRenderWindowInteractor_Methods[] = {
  {"IsTypeOf", PyvtkGenericRenderWindowInteractor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericRenderWindowInteractor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericRenderWindowInteractor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericRenderWindowInteractor\nC++: static vtkGenericRenderWindowInteractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericRenderWindowInteractor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericRenderWindowInteractor\nC++: vtkGenericRenderWindowInteractor *NewInstance()\n\n"},
  {"TimerEvent", PyvtkGenericRenderWindowInteractor_TimerEvent, METH_VARARGS,
   "V.TimerEvent()\nC++: virtual void TimerEvent()\n\nFire TimerEvent. SetEventInformation should be called just prior\nto calling any of these methods. These methods will Invoke the\ncorresponding vtk event.\n"},
  {"SetTimerEventResetsTimer", PyvtkGenericRenderWindowInteractor_SetTimerEventResetsTimer, METH_VARARGS,
   "V.SetTimerEventResetsTimer(int)\nC++: virtual void SetTimerEventResetsTimer(vtkTypeBool _arg)\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {"GetTimerEventResetsTimer", PyvtkGenericRenderWindowInteractor_GetTimerEventResetsTimer, METH_VARARGS,
   "V.GetTimerEventResetsTimer() -> int\nC++: virtual vtkTypeBool GetTimerEventResetsTimer()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {"TimerEventResetsTimerOn", PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOn, METH_VARARGS,
   "V.TimerEventResetsTimerOn()\nC++: virtual void TimerEventResetsTimerOn()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {"TimerEventResetsTimerOff", PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOff, METH_VARARGS,
   "V.TimerEventResetsTimerOff()\nC++: virtual void TimerEventResetsTimerOff()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericRenderWindowInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGenericRenderWindowInteractor", // tp_name
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
  PyvtkGenericRenderWindowInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericRenderWindowInteractor_StaticNew()
{
  return vtkGenericRenderWindowInteractor::New();
}

PyObject *PyvtkGenericRenderWindowInteractor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericRenderWindowInteractor_Type, PyvtkGenericRenderWindowInteractor_Methods,
    "vtkGenericRenderWindowInteractor",
 &PyvtkGenericRenderWindowInteractor_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericRenderWindowInteractor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderWindowInteractor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericRenderWindowInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericRenderWindowInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericRenderWindowInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

}

