// python wrapper for vtkRenderTimerLog
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
#include "vtkStdString.h"
#include "vtkRenderTimerLog.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderTimerLog(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderTimerLog_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRenderTimerLog_Doc =
  "vtkRenderTimerLog - Asynchronously measures GPU execution times for a\nseries of events.\n\n"
  "Superclass: vtkObject\n\n"
  "This class measures the time it takes for events to occur on the GPU\n"
  "by posting timing events into the rendering command stream. This can\n"
  "be used to compute the time spent doing work on the GPU without\n"
  "stalling the CPU.\n\n"
  "To aid asynchronous usage, this class uses the concepts \"Event\" and\n"
  "\"Frame\", where a Frame is a logical collection of Events. The timer\n"
  "log can manage multiple Frames at a time:\n"
  "- The current Frame, where new Events are created.\n"
  "- Pending Frames, for which all Events have been marked, but the\n"
  "  results are not available (the timer requests are still waiting to\n"
  "  be processed by the graphics device).\n"
  "- Ready Frames, which have been completed by the graphics device and\n"
  "  may be retrieved.\n\n"
  "Call MarkFrame() to begin a new Frame. This pushes the current Frame\n"
  "to the collection of pending Frames, and creates a new one to store\n"
  "future Events.\n\n"
  "Call MarkStartEvent() and MarkEndEvent() to mark the beginning and\n"
  "end of an Event. These Events may be nested, but all child Events\n"
  "must have their end marked before the parent Event ends.\n\n"
  "Use FrameReady() and PopFirstReadyFrame() to check for completed\n"
  "Frames and retrieve results.\n\n"
  "This is currently only implemented for the OpenGL2 backend. The\n"
  "IsSupported() method can be used to detect if there is a valid\n"
  "implementation available.\n\n";


static PyObject *
PyvtkRenderTimerLog_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderTimerLog::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderTimerLog::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderTimerLog *tempr = vtkRenderTimerLog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderTimerLog *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderTimerLog::NewInstance());

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
PyvtkRenderTimerLog_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported() :
      op->vtkRenderTimerLog::IsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_MarkFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkFrame();
    }
    else
    {
      op->vtkRenderTimerLog::MarkFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_MarkStartEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkStartEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MarkStartEvent(temp0);
    }
    else
    {
      op->vtkRenderTimerLog::MarkStartEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_MarkEndEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkEndEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkEndEvent();
    }
    else
    {
      op->vtkRenderTimerLog::MarkEndEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_FrameReady(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameReady");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FrameReady() :
      op->vtkRenderTimerLog::FrameReady());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_SetLoggingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoggingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoggingEnabled(temp0);
    }
    else
    {
      op->vtkRenderTimerLog::SetLoggingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_GetLoggingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoggingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoggingEnabled() :
      op->vtkRenderTimerLog::GetLoggingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_LoggingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoggingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoggingEnabledOn();
    }
    else
    {
      op->vtkRenderTimerLog::LoggingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_LoggingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoggingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoggingEnabledOff();
    }
    else
    {
      op->vtkRenderTimerLog::LoggingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_SetFrameLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameLimit(temp0);
    }
    else
    {
      op->vtkRenderTimerLog::SetFrameLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_GetFrameLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrameLimit() :
      op->vtkRenderTimerLog::GetFrameLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderTimerLog_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderTimerLog *op = static_cast<vtkRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkRenderTimerLog::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderTimerLog_Methods[] = {
  {"IsTypeOf", PyvtkRenderTimerLog_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderTimerLog_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderTimerLog_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderTimerLog\nC++: static vtkRenderTimerLog *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderTimerLog_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderTimerLog\nC++: vtkRenderTimerLog *NewInstance()\n\n"},
  {"IsSupported", PyvtkRenderTimerLog_IsSupported, METH_VARARGS,
   "V.IsSupported() -> bool\nC++: virtual bool IsSupported()\n\nReturns true if stream timings are implemented for the current\ngraphics backend.\n"},
  {"MarkFrame", PyvtkRenderTimerLog_MarkFrame, METH_VARARGS,
   "V.MarkFrame()\nC++: virtual void MarkFrame()\n\nCall to mark the start of a new frame, or the end of an old one.\nDoes nothing if no events have been recorded in the current\nframe.\n"},
  {"MarkStartEvent", PyvtkRenderTimerLog_MarkStartEvent, METH_VARARGS,
   "V.MarkStartEvent(string)\nC++: virtual void MarkStartEvent(const std::string &name)\n\n"},
  {"MarkEndEvent", PyvtkRenderTimerLog_MarkEndEvent, METH_VARARGS,
   "V.MarkEndEvent()\nC++: virtual void MarkEndEvent()\n\n"},
  {"FrameReady", PyvtkRenderTimerLog_FrameReady, METH_VARARGS,
   "V.FrameReady() -> bool\nC++: virtual bool FrameReady()\n\nReturns true if there are any frames ready with complete timing\ninfo.\n"},
  {"SetLoggingEnabled", PyvtkRenderTimerLog_SetLoggingEnabled, METH_VARARGS,
   "V.SetLoggingEnabled(bool)\nC++: virtual void SetLoggingEnabled(bool _arg)\n\n"},
  {"GetLoggingEnabled", PyvtkRenderTimerLog_GetLoggingEnabled, METH_VARARGS,
   "V.GetLoggingEnabled() -> bool\nC++: virtual bool GetLoggingEnabled()\n\n"},
  {"LoggingEnabledOn", PyvtkRenderTimerLog_LoggingEnabledOn, METH_VARARGS,
   "V.LoggingEnabledOn()\nC++: virtual void LoggingEnabledOn()\n\n"},
  {"LoggingEnabledOff", PyvtkRenderTimerLog_LoggingEnabledOff, METH_VARARGS,
   "V.LoggingEnabledOff()\nC++: virtual void LoggingEnabledOff()\n\n"},
  {"SetFrameLimit", PyvtkRenderTimerLog_SetFrameLimit, METH_VARARGS,
   "V.SetFrameLimit(int)\nC++: virtual void SetFrameLimit(unsigned int _arg)\n\n"},
  {"GetFrameLimit", PyvtkRenderTimerLog_GetFrameLimit, METH_VARARGS,
   "V.GetFrameLimit() -> int\nC++: virtual unsigned int GetFrameLimit()\n\n"},
  {"ReleaseGraphicsResources", PyvtkRenderTimerLog_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources()\nC++: virtual void ReleaseGraphicsResources()\n\nReleases any resources allocated on the graphics device.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderTimerLog_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderTimerLog", // tp_name
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
  PyvtkRenderTimerLog_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderTimerLog_StaticNew()
{
  return vtkRenderTimerLog::New();
}

PyObject *PyvtkRenderTimerLog_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderTimerLog_Type, PyvtkRenderTimerLog_Methods,
    "vtkRenderTimerLog",
 &PyvtkRenderTimerLog_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderTimerLog_Type;

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

void PyVTKAddFile_vtkRenderTimerLog(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderTimerLog_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderTimerLog", o) != 0)
  {
    Py_DECREF(o);
  }

}

