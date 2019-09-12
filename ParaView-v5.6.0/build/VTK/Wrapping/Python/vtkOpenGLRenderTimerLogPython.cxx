// python wrapper for vtkOpenGLRenderTimerLog
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
#include "vtkOpenGLRenderTimerLog.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderTimerLog(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLRenderTimerLog_ClassNew(); }

#ifndef DECLARED_PyvtkRenderTimerLog_ClassNew
extern "C" { PyObject *PyvtkRenderTimerLog_ClassNew(); }
#define DECLARED_PyvtkRenderTimerLog_ClassNew
#endif

static const char *PyvtkOpenGLRenderTimerLog_Doc =
  "vtkOpenGLRenderTimerLog - OpenGL2 override for vtkRenderTimerLog.\n\n"
  "Superclass: vtkRenderTimerLog\n\n"
;


static PyObject *
PyvtkOpenGLRenderTimerLog_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderTimerLog::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderTimerLog::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderTimerLog *tempr = vtkOpenGLRenderTimerLog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderTimerLog *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderTimerLog::NewInstance());

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
PyvtkOpenGLRenderTimerLog_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported() :
      op->vtkOpenGLRenderTimerLog::IsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_GetLoggingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoggingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoggingEnabled() :
      op->vtkOpenGLRenderTimerLog::GetLoggingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_MarkFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkFrame();
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::MarkFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_MarkStartEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkStartEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

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
      op->vtkOpenGLRenderTimerLog::MarkStartEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_MarkEndEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkEndEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkEndEvent();
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::MarkEndEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_FrameReady(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameReady");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FrameReady() :
      op->vtkOpenGLRenderTimerLog::FrameReady());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_SetMinTimerPoolSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinTimerPoolSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinTimerPoolSize(temp0);
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::SetMinTimerPoolSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_GetMinTimerPoolSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTimerPoolSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetMinTimerPoolSize() :
      op->vtkOpenGLRenderTimerLog::GetMinTimerPoolSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderTimerLog_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderTimerLog_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderTimerLog_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderTimerLog_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLRenderTimerLog\nC++: static vtkOpenGLRenderTimerLog *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderTimerLog_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLRenderTimerLog\nC++: vtkOpenGLRenderTimerLog *NewInstance()\n\n"},
  {"IsSupported", PyvtkOpenGLRenderTimerLog_IsSupported, METH_VARARGS,
   "V.IsSupported() -> bool\nC++: bool IsSupported() override;\n\nReturns true if stream timings are implemented for the current\ngraphics backend.\n"},
  {"GetLoggingEnabled", PyvtkOpenGLRenderTimerLog_GetLoggingEnabled, METH_VARARGS,
   "V.GetLoggingEnabled() -> bool\nC++: bool GetLoggingEnabled() override;\n\nOverridden to do support check before returning.\n"},
  {"MarkFrame", PyvtkOpenGLRenderTimerLog_MarkFrame, METH_VARARGS,
   "V.MarkFrame()\nC++: void MarkFrame() override;\n\nCall to mark the start of a new frame, or the end of an old one.\nDoes nothing if no events have been recorded in the current\nframe.\n"},
  {"MarkStartEvent", PyvtkOpenGLRenderTimerLog_MarkStartEvent, METH_VARARGS,
   "V.MarkStartEvent(string)\nC++: void MarkStartEvent(const std::string &name) override;\n\n"},
  {"MarkEndEvent", PyvtkOpenGLRenderTimerLog_MarkEndEvent, METH_VARARGS,
   "V.MarkEndEvent()\nC++: void MarkEndEvent() override;\n\n"},
  {"FrameReady", PyvtkOpenGLRenderTimerLog_FrameReady, METH_VARARGS,
   "V.FrameReady() -> bool\nC++: bool FrameReady() override;\n\nReturns true if there are any frames ready with complete timing\ninfo.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLRenderTimerLog_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources() override;\n\nReleases any resources allocated on the graphics device.\n"},
  {"SetMinTimerPoolSize", PyvtkOpenGLRenderTimerLog_SetMinTimerPoolSize, METH_VARARGS,
   "V.SetMinTimerPoolSize(int)\nC++: virtual void SetMinTimerPoolSize(size_t _arg)\n\nThis implementations keeps a pool of vtkRenderTimers around,\nrecycling them to avoid constantly allocating/freeing them. The\npool is sometimes trimmed to free up memory if the number of\ntimers in the pool is much greater the the number of timers\ncurrently used. This setting controls the minimum number of\ntimers that will be kept. More may be kept if they are being\nused, but the pool will never be trimmed below this amount.\n\nDefault value is 32, but can be adjusted for specific use cases.\n"},
  {"GetMinTimerPoolSize", PyvtkOpenGLRenderTimerLog_GetMinTimerPoolSize, METH_VARARGS,
   "V.GetMinTimerPoolSize() -> int\nC++: virtual size_t GetMinTimerPoolSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLRenderTimerLog_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLRenderTimerLog", // tp_name
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
  PyvtkOpenGLRenderTimerLog_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLRenderTimerLog_StaticNew()
{
  return vtkOpenGLRenderTimerLog::New();
}

PyObject *PyvtkOpenGLRenderTimerLog_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLRenderTimerLog_Type, PyvtkOpenGLRenderTimerLog_Methods,
    "vtkOpenGLRenderTimerLog",
 &PyvtkOpenGLRenderTimerLog_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLRenderTimerLog_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderTimerLog_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderTimerLog(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderTimerLog_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderTimerLog", o) != 0)
  {
    Py_DECREF(o);
  }

}

