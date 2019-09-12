// python wrapper for vtkPVProgressHandler
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
#include "vtkPVProgressHandler.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVProgressHandler(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVProgressHandler_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVProgressHandler_Doc =
  "vtkPVProgressHandler - progress handler.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVProgressHandler handles the progress messages. It handles\n"
  "progress in all configurations single process, client-server. It must\n"
  "be noted that when running in parallel, progress updates are fetched\n"
  "from the root node. Due to performance reasons, we no longer collect\n"
  "progress events (or messages) from satellites, only root-node events\n"
  "are reported back to the client. While this may not faithfully report\n"
  "the progress, this avoid nasty MPI issues that can be painful to\n"
  "debug and diagnose.\n\n"
  "Progress events are currently not supported in multi-clients mode.\n\n"
  "@par Events: vtkCommand::StartEvent\n"
  "\\li fired to indicate beginning of progress handling\n"
  "\\li calldata: vtkPVProgressHandler*\n"
  "vtkCommand::ProgressEvent\n"
  "\\li fired to indicate a progress event.\n"
  "\\li calldata: vtkPVProgressHandler*\n"
  "vtkCommand::EndEvent\n"
  "\\li fired to indicate end of progress handling\n"
  "\\li calldata: vtkPVProgressHandler*\n\n"
  "Starting ParaView 5.5, vtkCommand::MessageEvent is no longer fired.\n\n";


static PyObject *
PyvtkPVProgressHandler_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVProgressHandler::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVProgressHandler::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVProgressHandler *tempr = vtkPVProgressHandler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVProgressHandler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVProgressHandler::NewInstance());

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
PyvtkPVProgressHandler_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  vtkPVSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkPVProgressHandler::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkPVProgressHandler::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_RegisterProgressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProgressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  vtkObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterProgressEvent(temp0, temp1);
    }
    else
    {
      op->vtkPVProgressHandler::RegisterProgressEvent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_PrepareProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareProgress();
    }
    else
    {
      op->vtkPVProgressHandler::PrepareProgress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_AddHandlers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHandlers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddHandlers();
    }
    else
    {
      op->vtkPVProgressHandler::AddHandlers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetEnableProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableProgress() :
      op->vtkPVProgressHandler::GetEnableProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_CleanupPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanupPendingProgress();
    }
    else
    {
      op->vtkPVProgressHandler::CleanupPendingProgress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_LocalCleanupPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocalCleanupPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LocalCleanupPendingProgress();
    }
    else
    {
      op->vtkPVProgressHandler::LocalCleanupPendingProgress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_SetProgressInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgressInterval(temp0);
    }
    else
    {
      op->vtkPVProgressHandler::SetProgressInterval(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetProgressIntervalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressIntervalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressIntervalMinValue() :
      op->vtkPVProgressHandler::GetProgressIntervalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetProgressIntervalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressIntervalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressIntervalMaxValue() :
      op->vtkPVProgressHandler::GetProgressIntervalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetProgressInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressInterval() :
      op->vtkPVProgressHandler::GetProgressInterval());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetLastProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLastProgressText() :
      op->vtkPVProgressHandler::GetLastProgressText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVProgressHandler_GetLastProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVProgressHandler *op = static_cast<vtkPVProgressHandler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastProgress() :
      op->vtkPVProgressHandler::GetLastProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVProgressHandler_Methods[] = {
  {"IsTypeOf", PyvtkPVProgressHandler_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVProgressHandler_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVProgressHandler_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVProgressHandler\nC++: static vtkPVProgressHandler *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVProgressHandler_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVProgressHandler\nC++: vtkPVProgressHandler *NewInstance()\n\n"},
  {"SetSession", PyvtkPVProgressHandler_SetSession, METH_VARARGS,
   "V.SetSession(vtkPVSession)\nC++: void SetSession(vtkPVSession *conn)\n\nGet/Set the session. This is not reference-counted to avoid\ncycles.\n"},
  {"GetSession", PyvtkPVProgressHandler_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkPVSession\nC++: virtual vtkPVSession *GetSession()\n\nGet/Set the session. This is not reference-counted to avoid\ncycles.\n"},
  {"RegisterProgressEvent", PyvtkPVProgressHandler_RegisterProgressEvent, METH_VARARGS,
   "V.RegisterProgressEvent(vtkObject, int)\nC++: void RegisterProgressEvent(vtkObject *object, int id)\n\nListen to progress events from the object.\n"},
  {"PrepareProgress", PyvtkPVProgressHandler_PrepareProgress, METH_VARARGS,
   "V.PrepareProgress()\nC++: void PrepareProgress()\n\nThis method resets all the progress counters and prepares\nprogress reporting. All progress events before this call are\nignored.\n"},
  {"AddHandlers", PyvtkPVProgressHandler_AddHandlers, METH_VARARGS,
   "V.AddHandlers()\nC++: void AddHandlers()\n\nThis method add wrong tag event handlers and rmi call back for\nprogress related mathods\n"},
  {"GetEnableProgress", PyvtkPVProgressHandler_GetEnableProgress, METH_VARARGS,
   "V.GetEnableProgress() -> bool\nC++: bool GetEnableProgress()\n\nGet whether or not progress is currently enable and if this\nprogress handler is ready to receive progress events\n"},
  {"CleanupPendingProgress", PyvtkPVProgressHandler_CleanupPendingProgress, METH_VARARGS,
   "V.CleanupPendingProgress()\nC++: void CleanupPendingProgress()\n\nThis method collects all outstanding progress messages. All\nprogress events after this call are ignored.\n"},
  {"LocalCleanupPendingProgress", PyvtkPVProgressHandler_LocalCleanupPendingProgress, METH_VARARGS,
   "V.LocalCleanupPendingProgress()\nC++: void LocalCleanupPendingProgress()\n\nLocal cleanup of progress flags\n"},
  {"SetProgressInterval", PyvtkPVProgressHandler_SetProgressInterval, METH_VARARGS,
   "V.SetProgressInterval(float)\nC++: virtual void SetProgressInterval(double _arg)\n\nGet/Set the progress interval in seconds. Progress events\noccurring more frequently than this interval are skipped. Default\nis 0.1 seconds on client and 1 second on server and batch\nprocesses.\n"},
  {"GetProgressIntervalMinValue", PyvtkPVProgressHandler_GetProgressIntervalMinValue, METH_VARARGS,
   "V.GetProgressIntervalMinValue() -> float\nC++: virtual double GetProgressIntervalMinValue()\n\nGet/Set the progress interval in seconds. Progress events\noccurring more frequently than this interval are skipped. Default\nis 0.1 seconds on client and 1 second on server and batch\nprocesses.\n"},
  {"GetProgressIntervalMaxValue", PyvtkPVProgressHandler_GetProgressIntervalMaxValue, METH_VARARGS,
   "V.GetProgressIntervalMaxValue() -> float\nC++: virtual double GetProgressIntervalMaxValue()\n\nGet/Set the progress interval in seconds. Progress events\noccurring more frequently than this interval are skipped. Default\nis 0.1 seconds on client and 1 second on server and batch\nprocesses.\n"},
  {"GetProgressInterval", PyvtkPVProgressHandler_GetProgressInterval, METH_VARARGS,
   "V.GetProgressInterval() -> float\nC++: virtual double GetProgressInterval()\n\nGet/Set the progress interval in seconds. Progress events\noccurring more frequently than this interval are skipped. Default\nis 0.1 seconds on client and 1 second on server and batch\nprocesses.\n"},
  {"GetLastProgressText", PyvtkPVProgressHandler_GetLastProgressText, METH_VARARGS,
   "V.GetLastProgressText() -> string\nC++: virtual char *GetLastProgressText()\n\nThese are only valid in handler for the\nvtkCommand::ProgressEvent.\n"},
  {"GetLastProgress", PyvtkPVProgressHandler_GetLastProgress, METH_VARARGS,
   "V.GetLastProgress() -> int\nC++: virtual int GetLastProgress()\n\nThese are only valid in handler for the\nvtkCommand::ProgressEvent.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVProgressHandler_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVProgressHandler", // tp_name
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
  PyvtkPVProgressHandler_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVProgressHandler_StaticNew()
{
  return vtkPVProgressHandler::New();
}

PyObject *PyvtkPVProgressHandler_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVProgressHandler_Type, PyvtkPVProgressHandler_Methods,
    "vtkPVProgressHandler",
 &PyvtkPVProgressHandler_StaticNew);

  PyTypeObject *pytype = &PyvtkPVProgressHandler_Type;

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

void PyVTKAddFile_vtkPVProgressHandler(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVProgressHandler_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVProgressHandler", o) != 0)
  {
    Py_DECREF(o);
  }

}

