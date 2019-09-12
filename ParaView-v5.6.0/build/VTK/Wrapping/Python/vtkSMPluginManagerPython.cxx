// python wrapper for vtkSMPluginManager
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
#include "vtkSMPluginManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPluginManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPluginManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMPluginManager_Doc =
  "vtkSMPluginManager - manages ParaView plugins.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMPluginManager is used to load plugins as well as discover\n"
  "information about currently loaded and available plugins.\n\n"
  "vtkSMPluginManager supports multiple sessions. Every vtkSMSession\n"
  "registers itself with the vtkSMPluginManager during initialization.\n\n";


static PyObject *
PyvtkSMPluginManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPluginManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPluginManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPluginManager *tempr = vtkSMPluginManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPluginManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPluginManager::NewInstance());

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
PyvtkSMPluginManager_RegisterSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->RegisterSession(temp0);
    }
    else
    {
      op->vtkSMPluginManager::RegisterSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_UnRegisterSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterSession(temp0);
    }
    else
    {
      op->vtkSMPluginManager::UnRegisterSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetLocalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPluginsInformation *tempr = (ap.IsBound() ?
      op->GetLocalInformation() :
      op->vtkSMPluginManager::GetLocalInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetRemoteInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkPVPluginsInformation *tempr = (ap.IsBound() ?
      op->GetRemoteInformation(temp0) :
      op->vtkSMPluginManager::GetRemoteInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetLocalPluginSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalPluginSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLocalPluginSearchPaths() :
      op->vtkSMPluginManager::GetLocalPluginSearchPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_GetRemotePluginSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemotePluginSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRemotePluginSearchPaths(temp0) :
      op->vtkSMPluginManager::GetRemotePluginSearchPaths(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_LoadRemotePlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadRemotePlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession"))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadRemotePlugin(temp0, temp1) :
      op->vtkSMPluginManager::LoadRemotePlugin(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_LoadLocalPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadLocalPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadLocalPlugin(temp0) :
      op->vtkSMPluginManager::LoadLocalPlugin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginManager_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginManager *op = static_cast<vtkSMPluginManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMSession *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSession") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->LoadPluginConfigurationXMLFromString(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMPluginManager::LoadPluginConfigurationXMLFromString(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPluginManager_Methods[] = {
  {"IsTypeOf", PyvtkSMPluginManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPluginManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPluginManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPluginManager\nC++: static vtkSMPluginManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPluginManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPluginManager\nC++: vtkSMPluginManager *NewInstance()\n\n"},
  {"RegisterSession", PyvtkSMPluginManager_RegisterSession, METH_VARARGS,
   "V.RegisterSession(vtkSMSession)\nC++: void RegisterSession(vtkSMSession *)\n\nRegister/Unregister a session. Every vtkSMSession must be\nregistered with the vtkSMPluginManager. This is done\nautomatically by vtkSMSession during the initialization stage.\nNote that the vtkSMSession is not reference counted.\n"},
  {"UnRegisterSession", PyvtkSMPluginManager_UnRegisterSession, METH_VARARGS,
   "V.UnRegisterSession(vtkSMSession)\nC++: void UnRegisterSession(vtkSMSession *)\n\nRegister/Unregister a session. Every vtkSMSession must be\nregistered with the vtkSMPluginManager. This is done\nautomatically by vtkSMSession during the initialization stage.\nNote that the vtkSMSession is not reference counted.\n"},
  {"GetLocalInformation", PyvtkSMPluginManager_GetLocalInformation, METH_VARARGS,
   "V.GetLocalInformation() -> vtkPVPluginsInformation\nC++: virtual vtkPVPluginsInformation *GetLocalInformation()\n\nvtkPVPluginsInformation provides information about plugins\nloaded/available. LocalInformation corresponds to plugins loaded\non the local process. For remote sessions i.e. those that connect\nto a remote server process, one can use GetRemoteInformation() to\naccess information about plugins on the remote process.\n"},
  {"GetRemoteInformation", PyvtkSMPluginManager_GetRemoteInformation, METH_VARARGS,
   "V.GetRemoteInformation(vtkSMSession) -> vtkPVPluginsInformation\nC++: vtkPVPluginsInformation *GetRemoteInformation(vtkSMSession *)\n\nvtkPVPluginsInformation provides information about plugins\nloaded/available. LocalInformation corresponds to plugins loaded\non the local process. For remote sessions i.e. those that connect\nto a remote server process, one can use GetRemoteInformation() to\naccess information about plugins on the remote process.\n"},
  {"GetLocalPluginSearchPaths", PyvtkSMPluginManager_GetLocalPluginSearchPaths, METH_VARARGS,
   "V.GetLocalPluginSearchPaths() -> string\nC++: const char *GetLocalPluginSearchPaths()\n\nReturns the plugin search paths used either locally or remotely.\nFor non-remote sessions, GetRemotePluginSearchPaths() returns the\nsame value as GetLocalPluginSearchPaths().\n"},
  {"GetRemotePluginSearchPaths", PyvtkSMPluginManager_GetRemotePluginSearchPaths, METH_VARARGS,
   "V.GetRemotePluginSearchPaths(vtkSMSession) -> string\nC++: const char *GetRemotePluginSearchPaths(vtkSMSession *)\n\nReturns the plugin search paths used either locally or remotely.\nFor non-remote sessions, GetRemotePluginSearchPaths() returns the\nsame value as GetLocalPluginSearchPaths().\n"},
  {"LoadRemotePlugin", PyvtkSMPluginManager_LoadRemotePlugin, METH_VARARGS,
   "V.LoadRemotePlugin(string, vtkSMSession) -> bool\nC++: bool LoadRemotePlugin(const char *filename, vtkSMSession *)\n\nLoads the plugin either locally or remotely.\n"},
  {"LoadLocalPlugin", PyvtkSMPluginManager_LoadLocalPlugin, METH_VARARGS,
   "V.LoadLocalPlugin(string) -> bool\nC++: bool LoadLocalPlugin(const char *filename)\n\nLoads the plugin either locally or remotely.\n"},
  {"LoadPluginConfigurationXMLFromString", PyvtkSMPluginManager_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   "V.LoadPluginConfigurationXMLFromString(string, vtkSMSession, bool)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents, vtkSMSession *session, bool remote)\n\nPlugin configuration XML is a simple XML that makes ParaView\naware of the plugins available and may result in loading of those\nplugins that are marked for auto-loading. In ParaView application\nthere are two uses for this:\n\\li .plugins - used to notify ParaView of the distributed plugins\n\\li session - used to save/restore the plugins loaded by the\n    users.\n\n* This method loads the plugin configuration xml either on the\n  local process or the\n* remote server process(es). session is only used when\n* remote==true and session itself is a remote session.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPluginManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMPluginManager", // tp_name
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
  PyvtkSMPluginManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPluginManager_StaticNew()
{
  return vtkSMPluginManager::New();
}

PyObject *PyvtkSMPluginManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPluginManager_Type, PyvtkSMPluginManager_Methods,
    "vtkSMPluginManager",
 &PyvtkSMPluginManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPluginManager_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "PluginLoadedEvent", vtkSMPluginManager::PluginLoadedEvent },
        { "LocalPluginLoadedEvent", vtkSMPluginManager::LocalPluginLoadedEvent },
        { "RemotePluginLoadedEvent", vtkSMPluginManager::RemotePluginLoadedEvent },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPluginManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPluginManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPluginManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

