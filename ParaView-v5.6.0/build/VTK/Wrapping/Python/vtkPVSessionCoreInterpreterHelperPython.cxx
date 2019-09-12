// python wrapper for vtkPVSessionCoreInterpreterHelper
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
#include "vtkPVSessionCoreInterpreterHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSessionCoreInterpreterHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSessionCoreInterpreterHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVSessionCoreInterpreterHelper_Doc =
  "vtkPVSessionCoreInterpreterHelper - vtkPVSessionCoreInterpreterHelper\nis used by vtkPVSessionCore to avoid a circular reference between the\nvtkPVSessionCore instance and its Interpreter.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSessionCoreInterpreterHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSessionCoreInterpreterHelper *tempr = vtkPVSessionCoreInterpreterHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSessionCoreInterpreterHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionCoreInterpreterHelper::NewInstance());

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
PyvtkPVSessionCoreInterpreterHelper_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetVTKObject(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::GetVTKObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetNextGlobalIdChunk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalIdChunk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalIdChunk(temp0) :
      op->vtkPVSessionCoreInterpreterHelper::GetNextGlobalIdChunk(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetProcessModule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcessModule *tempr = (ap.IsBound() ?
      op->GetProcessModule() :
      op->vtkPVSessionCoreInterpreterHelper::GetProcessModule());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_GetActiveProgressHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProgressHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVProgressHandler *tempr = (ap.IsBound() ?
      op->GetActiveProgressHandler() :
      op->vtkPVSessionCoreInterpreterHelper::GetActiveProgressHandler());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  vtkMPIMToNSocketConnection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnection"))
  {
    if (ap.IsBound())
    {
      op->SetMPIMToNSocketConnection(temp0);
    }
    else
    {
      op->vtkPVSessionCoreInterpreterHelper::SetMPIMToNSocketConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SetCore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  vtkPVSessionCore *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionCore"))
  {
    if (ap.IsBound())
    {
      op->SetCore(temp0);
    }
    else
    {
      op->vtkPVSessionCoreInterpreterHelper::SetCore(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCoreInterpreterHelper_SetLogLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCoreInterpreterHelper *op = static_cast<vtkPVSessionCoreInterpreterHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogLevel(temp0);
    }
    else
    {
      op->vtkPVSessionCoreInterpreterHelper::SetLogLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSessionCoreInterpreterHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVSessionCoreInterpreterHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSessionCoreInterpreterHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSessionCoreInterpreterHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSessionCoreInterpreterHelper\nC++: static vtkPVSessionCoreInterpreterHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSessionCoreInterpreterHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSessionCoreInterpreterHelper\nC++: vtkPVSessionCoreInterpreterHelper *NewInstance()\n\n"},
  {"GetSIObject", PyvtkPVSessionCoreInterpreterHelper_GetSIObject, METH_VARARGS,
   "V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 gid)\n\nReturns the vtkSIObject for the global-id. This is used by\nSIOBJECT() and SIPROXY() stream (vtkClientServerStream)\nmanipulator macros.\n"},
  {"GetVTKObject", PyvtkPVSessionCoreInterpreterHelper_GetVTKObject, METH_VARARGS,
   "V.GetVTKObject(int) -> vtkObjectBase\nC++: vtkObjectBase *GetVTKObject(vtkTypeUInt32 gid)\n\nReturns the vtkObject corresponding to the global id. This is\nused by the VTKOBJECT() stream (vtkClientServerStream)\nmanipulator macros.\n"},
  {"GetNextGlobalIdChunk", PyvtkPVSessionCoreInterpreterHelper_GetNextGlobalIdChunk, METH_VARARGS,
   "V.GetNextGlobalIdChunk(int) -> int\nC++: vtkTypeUInt32 GetNextGlobalIdChunk(vtkTypeUInt32 chunkSize)\n\nReserve a global id block.\n"},
  {"GetProcessModule", PyvtkPVSessionCoreInterpreterHelper_GetProcessModule, METH_VARARGS,
   "V.GetProcessModule() -> vtkProcessModule\nC++: vtkProcessModule *GetProcessModule()\n\nProvides access to the process module.\n"},
  {"GetActiveProgressHandler", PyvtkPVSessionCoreInterpreterHelper_GetActiveProgressHandler, METH_VARARGS,
   "V.GetActiveProgressHandler() -> vtkPVProgressHandler\nC++: vtkPVProgressHandler *GetActiveProgressHandler()\n\nProvides access to the progress handler.\n"},
  {"SetMPIMToNSocketConnection", PyvtkPVSessionCoreInterpreterHelper_SetMPIMToNSocketConnection, METH_VARARGS,
   "V.SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection)\nC++: void SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection *)\n\nSets and initializes the MPIMToNSocketConnection for\ncommunicating between data-server and render-server.\n"},
  {"SetCore", PyvtkPVSessionCoreInterpreterHelper_SetCore, METH_VARARGS,
   "V.SetCore(vtkPVSessionCore)\nC++: void SetCore(vtkPVSessionCore *)\n\nUsed by vtkPVSessionCore to pass the core. This is not reference\ncounted.\n"},
  {"SetLogLevel", PyvtkPVSessionCoreInterpreterHelper_SetLogLevel, METH_VARARGS,
   "V.SetLogLevel(int)\nC++: virtual void SetLogLevel(int _arg)\n\nSwitch from 0:vtkErrorMacro to 1:vtkWarningMacro\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSessionCoreInterpreterHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVSessionCoreInterpreterHelper", // tp_name
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
  PyvtkPVSessionCoreInterpreterHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSessionCoreInterpreterHelper_StaticNew()
{
  return vtkPVSessionCoreInterpreterHelper::New();
}

PyObject *PyvtkPVSessionCoreInterpreterHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSessionCoreInterpreterHelper_Type, PyvtkPVSessionCoreInterpreterHelper_Methods,
    "vtkPVSessionCoreInterpreterHelper",
 &PyvtkPVSessionCoreInterpreterHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSessionCoreInterpreterHelper_Type;

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

void PyVTKAddFile_vtkPVSessionCoreInterpreterHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSessionCoreInterpreterHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSessionCoreInterpreterHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

