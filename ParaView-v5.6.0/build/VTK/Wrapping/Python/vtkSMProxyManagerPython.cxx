// python wrapper for vtkSMProxyManager
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
#include "vtkSMProxyManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProxyManager_Doc =
  "vtkSMProxyManager - singleton/facade to vtkSMSessionProxyManager\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMProxyManager is a singleton/facade that creates and manages\n"
  "proxies. It maintains a map of vtkSMSessionProxyManager and delegate\n"
  "all proxy related call to the appropriate one based on the provided\n"
  "session.\n"
  "@sa\n"
  "vtkSMSessionProxyManager, vtkSMProxyDefinitionManager\n\n";

static PyTypeObject PyvtkSMProxyManager_eventId_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyManager.eventId", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMProxyManager_eventId_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMProxyManager_eventId_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxyManager_eventId_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMProxyManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyManager *tempr = vtkSMProxyManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyManager::NewInstance());

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
PyvtkSMProxyManager_GetProxyManager(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProxyManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMProxyManager *tempr = vtkSMProxyManager::GetProxyManager();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMProxyManager::Finalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_IsInitialized(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInitialized");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMProxyManager::IsInitialized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetVersionMajor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersionMajor");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkSMProxyManager::GetVersionMajor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetVersionMinor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersionMinor");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkSMProxyManager::GetVersionMinor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetVersionPatch(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersionPatch");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkSMProxyManager::GetVersionPatch();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetParaViewSourceVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParaViewSourceVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSMProxyManager::GetParaViewSourceVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetActiveSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetActiveSession() :
      op->vtkSMProxyManager::GetActiveSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_SetActiveSession_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetActiveSession(temp0);
    }
    else
    {
      op->vtkSMProxyManager::SetActiveSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyManager_SetActiveSession_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveSession(temp0);
    }
    else
    {
      op->vtkSMProxyManager::SetActiveSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyManager_SetActiveSession_Methods[] = {
  {nullptr, PyvtkSMProxyManager_SetActiveSession_s1, METH_VARARGS,
   "@V *vtkSMSession"},
  {nullptr, PyvtkSMProxyManager_SetActiveSession_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyManager_SetActiveSession(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyManager_SetActiveSession_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveSession");
  return nullptr;
}



static PyObject *
PyvtkSMProxyManager_GetActiveSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetActiveSessionProxyManager() :
      op->vtkSMProxyManager::GetActiveSessionProxyManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager(temp0) :
      op->vtkSMProxyManager::GetSessionProxyManager(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_NewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = NULL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->NewProxy(temp0, temp1, temp2) :
      op->vtkSMProxyManager::NewProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_RegisterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkSMProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RegisterProxy(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMProxyManager::RegisterProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0, temp1) :
      op->vtkSMProxyManager::GetProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_UnRegisterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkSMProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterProxy(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMProxyManager::UnRegisterProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyManager_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyManager_GetProxyName_Methods[] = {
  {nullptr, PyvtkSMProxyManager_GetProxyName_s1, METH_VARARGS,
   "@zI"},
  {nullptr, PyvtkSMProxyManager_GetProxyName_s2, METH_VARARGS,
   "@zV *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyManager_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyManager_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return nullptr;
}



static PyObject *
PyvtkSMProxyManager_SetUndoStackBuilder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoStackBuilder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  vtkSMUndoStackBuilder *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMUndoStackBuilder"))
  {
    if (ap.IsBound())
    {
      op->SetUndoStackBuilder(temp0);
    }
    else
    {
      op->vtkSMProxyManager::SetUndoStackBuilder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetUndoStackBuilder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoStackBuilder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUndoStackBuilder *tempr = (ap.IsBound() ?
      op->GetUndoStackBuilder() :
      op->vtkSMProxyManager::GetUndoStackBuilder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetPluginManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPluginManager *tempr = (ap.IsBound() ?
      op->GetPluginManager() :
      op->vtkSMProxyManager::GetPluginManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetReaderFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMReaderFactory *tempr = (ap.IsBound() ?
      op->GetReaderFactory() :
      op->vtkSMProxyManager::GetReaderFactory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyManager_GetWriterFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriterFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyManager *op = static_cast<vtkSMProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMWriterFactory *tempr = (ap.IsBound() ?
      op->GetWriterFactory() :
      op->vtkSMProxyManager::GetWriterFactory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyManager_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyManager\nC++: static vtkSMProxyManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyManager\nC++: vtkSMProxyManager *NewInstance()\n\n"},
  {"GetProxyManager", PyvtkSMProxyManager_GetProxyManager, METH_VARARGS,
   "V.GetProxyManager() -> vtkSMProxyManager\nC++: static vtkSMProxyManager *GetProxyManager()\n\nProvides access to the global ProxyManager.\n"},
  {"Finalize", PyvtkSMProxyManager_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: static void Finalize()\n\nFree the singleton\n"},
  {"IsInitialized", PyvtkSMProxyManager_IsInitialized, METH_VARARGS,
   "V.IsInitialized() -> bool\nC++: static bool IsInitialized()\n\nAllow to check if the Singleton has been initialized and has a\nreference to a valid ProxyManager\n"},
  {"GetVersionMajor", PyvtkSMProxyManager_GetVersionMajor, METH_VARARGS,
   "V.GetVersionMajor() -> int\nC++: static int GetVersionMajor()\n\nThese methods can be used to obtain the ProxyManager version\nnumber. Returns the major version number eg. if version is 2.9.1\nthis method will return 2.\n"},
  {"GetVersionMinor", PyvtkSMProxyManager_GetVersionMinor, METH_VARARGS,
   "V.GetVersionMinor() -> int\nC++: static int GetVersionMinor()\n\nThese methods can be used to obtain the ProxyManager version\nnumber. Returns the minor version number eg. if version is 2.9.1\nthis method will return 9.\n"},
  {"GetVersionPatch", PyvtkSMProxyManager_GetVersionPatch, METH_VARARGS,
   "V.GetVersionPatch() -> int\nC++: static int GetVersionPatch()\n\nThese methods can be used to obtain the ProxyManager version\nnumber. Returns the patch version number eg. if version is 2.9.1\nthis method will return 1.\n"},
  {"GetParaViewSourceVersion", PyvtkSMProxyManager_GetParaViewSourceVersion, METH_VARARGS,
   "V.GetParaViewSourceVersion() -> string\nC++: static const char *GetParaViewSourceVersion()\n\nReturns a string with the format \"paraview version x.x.x, Date:\nYYYY-MM-DD\"\n"},
  {"GetActiveSession", PyvtkSMProxyManager_GetActiveSession, METH_VARARGS,
   "V.GetActiveSession() -> vtkSMSession\nC++: vtkSMSession *GetActiveSession()\n\nReturns the current active session. If no active session is set,\nand there's only one registered vtkSMSession with\nvtkProcessModule, then that session is automatically treated as\nthe active session.\n"},
  {"SetActiveSession", PyvtkSMProxyManager_SetActiveSession, METH_VARARGS,
   "V.SetActiveSession(vtkSMSession)\nC++: void SetActiveSession(vtkSMSession *session)\nV.SetActiveSession(int)\nC++: void SetActiveSession(vtkIdType sessionId)\n\nSet the active session. It's acceptable to set the active session\nas NULL (or 0 in case of sessionId), however GetActiveSession()\nmay automatically pick an active session if none is provided.\n"},
  {"GetActiveSessionProxyManager", PyvtkSMProxyManager_GetActiveSessionProxyManager, METH_VARARGS,
   "V.GetActiveSessionProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetActiveSessionProxyManager()\n\nConvenient method to get the active vtkSMSessionProxyManager. If\nno\n"},
  {"GetSessionProxyManager", PyvtkSMProxyManager_GetSessionProxyManager, METH_VARARGS,
   "V.GetSessionProxyManager(vtkSMSession) -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetSessionProxyManager(\n    vtkSMSession *session)\n\nReturn the corresponding vtkSMSessionProxyManager and if any,\nthen create a new one.\n"},
  {"NewProxy", PyvtkSMProxyManager_NewProxy, METH_VARARGS,
   "V.NewProxy(string, string, string) -> vtkSMProxy\nC++: vtkSMProxy *NewProxy(const char *groupName,\n    const char *proxyName, const char *subProxyName=NULL)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {"RegisterProxy", PyvtkSMProxyManager_RegisterProxy, METH_VARARGS,
   "V.RegisterProxy(string, string, vtkSMProxy)\nC++: void RegisterProxy(const char *groupname, const char *name,\n    vtkSMProxy *proxy)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {"GetProxy", PyvtkSMProxyManager_GetProxy, METH_VARARGS,
   "V.GetProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *groupname, const char *name)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {"UnRegisterProxy", PyvtkSMProxyManager_UnRegisterProxy, METH_VARARGS,
   "V.UnRegisterProxy(string, string, vtkSMProxy)\nC++: void UnRegisterProxy(const char *groupname, const char *name,\n     vtkSMProxy *)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {"GetProxyName", PyvtkSMProxyManager_GetProxyName, METH_VARARGS,
   "V.GetProxyName(string, int) -> string\nC++: const char *GetProxyName(const char *groupname,\n    unsigned int idx)\nV.GetProxyName(string, vtkSMProxy) -> string\nC++: const char *GetProxyName(const char *groupname,\n    vtkSMProxy *proxy)\n\nCalls forwarded to the active vtkSMSessionProxyManager, if any.\nRaises errors if no active session manager can be determined\n(using GetActiveSessionProxyManager()).\n"},
  {"SetUndoStackBuilder", PyvtkSMProxyManager_SetUndoStackBuilder, METH_VARARGS,
   "V.SetUndoStackBuilder(vtkSMUndoStackBuilder)\nC++: void SetUndoStackBuilder(vtkSMUndoStackBuilder *builder)\n\nGet/Set the undo-stack builder if the application is using\nundo-redo mechanism to track changes.\n"},
  {"GetUndoStackBuilder", PyvtkSMProxyManager_GetUndoStackBuilder, METH_VARARGS,
   "V.GetUndoStackBuilder() -> vtkSMUndoStackBuilder\nC++: virtual vtkSMUndoStackBuilder *GetUndoStackBuilder()\n\nGet/Set the undo-stack builder if the application is using\nundo-redo mechanism to track changes.\n"},
  {"GetPluginManager", PyvtkSMProxyManager_GetPluginManager, METH_VARARGS,
   "V.GetPluginManager() -> vtkSMPluginManager\nC++: virtual vtkSMPluginManager *GetPluginManager()\n\nPluginManager keeps track of plugins loaded on various sessions.\nThis provides access to the application-wide plugin manager.\n"},
  {"GetReaderFactory", PyvtkSMProxyManager_GetReaderFactory, METH_VARARGS,
   "V.GetReaderFactory() -> vtkSMReaderFactory\nC++: virtual vtkSMReaderFactory *GetReaderFactory()\n\nProvides access to the reader factory. Before using the reader\nfactory, it is essential that it's configured correctly.\n"},
  {"GetWriterFactory", PyvtkSMProxyManager_GetWriterFactory, METH_VARARGS,
   "V.GetWriterFactory() -> vtkSMWriterFactory\nC++: virtual vtkSMWriterFactory *GetWriterFactory()\n\nProvides access to the writer factory. Before using the reader\nfactory, it is essential that it's configured correctly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyManager", // tp_name
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
  PyvtkSMProxyManager_Doc, // tp_doc
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

PyObject *PyvtkSMProxyManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyManager_Type, PyvtkSMProxyManager_Methods,
    "vtkSMProxyManager",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMProxyManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMProxyManager_eventId_Type);
  PyvtkSMProxyManager_eventId_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMProxyManager_eventId_Type);

  o = (PyObject *)&PyvtkSMProxyManager_eventId_Type;
  if (PyDict_SetItemString(d, "eventId", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSMProxyManager_eventId_FromEnum(vtkSMProxyManager::ActiveSessionChanged);
  if (o)
  {
    PyDict_SetItemString(d, "ActiveSessionChanged", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxyManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

