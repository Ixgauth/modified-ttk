// python wrapper for vtkMultiThreader
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
#include "vtkMultiThreader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiThreader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiThreader_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMultiThreader_Doc =
  "vtkMultiThreader - A class for performing multithreaded execution\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMultithreader is a class that provides support for multithreaded\n"
  "execution using pthreads on POSIX systems, or Win32 threads on\n"
  "Windows.  This class can be used to execute a single method on\n"
  "multiple threads, or to specify a method per thread.\n\n";


static PyObject *
PyvtkMultiThreader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiThreader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiThreader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiThreader *tempr = vtkMultiThreader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiThreader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiThreader::NewInstance());

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
PyvtkMultiThreader_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkMultiThreader::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkMultiThreader::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkMultiThreader::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkMultiThreader::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_SetGlobalMaximumNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalMaximumNumberOfThreads");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMultiThreader::SetGlobalMaximumNumberOfThreads(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetGlobalMaximumNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalMaximumNumberOfThreads");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMultiThreader::GetGlobalMaximumNumberOfThreads();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_SetGlobalDefaultNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalDefaultNumberOfThreads");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMultiThreader::SetGlobalDefaultNumberOfThreads(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetGlobalDefaultNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalDefaultNumberOfThreads");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMultiThreader::GetGlobalDefaultNumberOfThreads();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMethodExecute();
    }
    else
    {
      op->vtkMultiThreader::SingleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleMethodExecute();
    }
    else
    {
      op->vtkMultiThreader::MultipleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_TerminateThread(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateThread");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->TerminateThread(temp0);
    }
    else
    {
      op->vtkMultiThreader::TerminateThread(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiThreader_IsThreadActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThreadActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsThreadActive(temp0) :
      op->vtkMultiThreader::IsThreadActive(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiThreader_Methods[] = {
  {"IsTypeOf", PyvtkMultiThreader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiThreader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiThreader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMultiThreader\nC++: static vtkMultiThreader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiThreader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMultiThreader\nC++: vtkMultiThreader *NewInstance()\n\n"},
  {"SetNumberOfThreads", PyvtkMultiThreader_SetNumberOfThreads, METH_VARARGS,
   "V.SetNumberOfThreads(int)\nC++: virtual void SetNumberOfThreads(int _arg)\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {"GetNumberOfThreadsMinValue", PyvtkMultiThreader_GetNumberOfThreadsMinValue, METH_VARARGS,
   "V.GetNumberOfThreadsMinValue() -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkMultiThreader_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "V.GetNumberOfThreadsMaxValue() -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {"GetNumberOfThreads", PyvtkMultiThreader_GetNumberOfThreads, METH_VARARGS,
   "V.GetNumberOfThreads() -> int\nC++: virtual int GetNumberOfThreads()\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {"SetGlobalMaximumNumberOfThreads", PyvtkMultiThreader_SetGlobalMaximumNumberOfThreads, METH_VARARGS,
   "V.SetGlobalMaximumNumberOfThreads(int)\nC++: static void SetGlobalMaximumNumberOfThreads(int val)\n\nSet/Get the maximum number of threads to use when multithreading.\nThis limits and overrides any other settings for multithreading.\nA value of zero indicates no limit.\n"},
  {"GetGlobalMaximumNumberOfThreads", PyvtkMultiThreader_GetGlobalMaximumNumberOfThreads, METH_VARARGS,
   "V.GetGlobalMaximumNumberOfThreads() -> int\nC++: static int GetGlobalMaximumNumberOfThreads()\n\nSet/Get the maximum number of threads to use when multithreading.\nThis limits and overrides any other settings for multithreading.\nA value of zero indicates no limit.\n"},
  {"SetGlobalDefaultNumberOfThreads", PyvtkMultiThreader_SetGlobalDefaultNumberOfThreads, METH_VARARGS,
   "V.SetGlobalDefaultNumberOfThreads(int)\nC++: static void SetGlobalDefaultNumberOfThreads(int val)\n\nSet/Get the value which is used to initialize the NumberOfThreads\nin the constructor.  Initially this default is set to the number\nof processors or VTK_MAX_THREADS (which ever is less).\n"},
  {"GetGlobalDefaultNumberOfThreads", PyvtkMultiThreader_GetGlobalDefaultNumberOfThreads, METH_VARARGS,
   "V.GetGlobalDefaultNumberOfThreads() -> int\nC++: static int GetGlobalDefaultNumberOfThreads()\n\nSet/Get the value which is used to initialize the NumberOfThreads\nin the constructor.  Initially this default is set to the number\nof processors or VTK_MAX_THREADS (which ever is less).\n"},
  {"SingleMethodExecute", PyvtkMultiThreader_SingleMethodExecute, METH_VARARGS,
   "V.SingleMethodExecute()\nC++: void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfThreads threads.\n"},
  {"MultipleMethodExecute", PyvtkMultiThreader_MultipleMethodExecute, METH_VARARGS,
   "V.MultipleMethodExecute()\nC++: void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required this->NumberOfThreads\nmethods) using this->NumberOfThreads threads.\n"},
  {"TerminateThread", PyvtkMultiThreader_TerminateThread, METH_VARARGS,
   "V.TerminateThread(int)\nC++: void TerminateThread(int thread_id)\n\nTerminate the thread that was created with a SpawnThreadExecute()\n"},
  {"IsThreadActive", PyvtkMultiThreader_IsThreadActive, METH_VARARGS,
   "V.IsThreadActive(int) -> int\nC++: vtkTypeBool IsThreadActive(int threadID)\n\nDetermine if a thread is still active\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMultiThreader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkMultiThreader", // tp_name
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
  PyvtkMultiThreader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiThreader_StaticNew()
{
  return vtkMultiThreader::New();
}

PyObject *PyvtkMultiThreader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMultiThreader_Type, PyvtkMultiThreader_Methods,
    "vtkMultiThreader",
 &PyvtkMultiThreader_StaticNew);

  PyTypeObject *pytype = &PyvtkMultiThreader_Type;

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

void PyVTKAddFile_vtkMultiThreader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiThreader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiThreader", o) != 0)
  {
    Py_DECREF(o);
  }

}

