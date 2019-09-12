// python wrapper for vtkPVPluginLoader
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
#include "vtkPVPluginLoader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPluginLoader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPluginLoader_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVPluginLoader_Doc =
  "vtkPVPluginLoader - Used to load ParaView plugins.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVPluginLoader can be used to load plugins for ParaView.\n"
  "vtkPVPluginLoader loads the plugin on the local process. For verbose\n"
  "details during the process of loading the plugin, try setting the\n"
  "environment variable PV_PLUGIN_DEBUG. This class only needed when\n"
  "loading plugins from shared libraries dynamically. For statically\n"
  "importing plugins, one directly uses PV_PLUGIN_IMPORT() macro defined\n"
  "in vtkPVPlugin.h.\n\n";


static PyObject *
PyvtkPVPluginLoader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPluginLoader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPluginLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPluginLoader *tempr = vtkPVPluginLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPluginLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPluginLoader::NewInstance());

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
PyvtkPVPluginLoader_LoadPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadPlugin(temp0) :
      op->vtkPVPluginLoader::LoadPlugin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginSilently(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginSilently");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadPluginSilently(temp0) :
      op->vtkPVPluginLoader::LoadPluginSilently(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->LoadPluginConfigurationXMLFromString(temp0);
    }
    else
    {
      op->vtkPVPluginLoader::LoadPluginConfigurationXMLFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginsFromPluginSearchPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginsFromPluginSearchPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadPluginsFromPluginSearchPath();
    }
    else
    {
      op->vtkPVPluginLoader::LoadPluginsFromPluginSearchPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginsFromPluginConfigFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginsFromPluginConfigFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadPluginsFromPluginConfigFile();
    }
    else
    {
      op->vtkPVPluginLoader::LoadPluginsFromPluginConfigFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_LoadPluginsFromPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginsFromPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->LoadPluginsFromPath(temp0);
    }
    else
    {
      op->vtkPVPluginLoader::LoadPluginsFromPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPVPluginLoader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPluginName() :
      op->vtkPVPluginLoader::GetPluginName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetPluginVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPluginVersion() :
      op->vtkPVPluginLoader::GetPluginVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetErrorString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetErrorString() :
      op->vtkPVPluginLoader::GetErrorString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSearchPaths() :
      op->vtkPVPluginLoader::GetSearchPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_GetLoaded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoaded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginLoader *op = static_cast<vtkPVPluginLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoaded() :
      op->vtkPVPluginLoader::GetLoaded());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_UnregisterLoadPluginCallback(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnregisterLoadPluginCallback");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVPluginLoader::UnregisterLoadPluginCallback(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginLoader_PluginLibraryUnloaded(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PluginLibraryUnloaded");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVPluginLoader::PluginLibraryUnloaded(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPluginLoader_Methods[] = {
  {"IsTypeOf", PyvtkPVPluginLoader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPluginLoader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPluginLoader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPluginLoader\nC++: static vtkPVPluginLoader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPluginLoader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPluginLoader\nC++: vtkPVPluginLoader *NewInstance()\n\n"},
  {"LoadPlugin", PyvtkPVPluginLoader_LoadPlugin, METH_VARARGS,
   "V.LoadPlugin(string) -> bool\nC++: bool LoadPlugin(const char *filename)\n\nTries to the load the plugin given the path to the plugin file.\n"},
  {"LoadPluginSilently", PyvtkPVPluginLoader_LoadPluginSilently, METH_VARARGS,
   "V.LoadPluginSilently(string) -> bool\nC++: bool LoadPluginSilently(const char *filename)\n\n"},
  {"LoadPluginConfigurationXMLFromString", PyvtkPVPluginLoader_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   "V.LoadPluginConfigurationXMLFromString(string)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents)\n\nSimply forwards the call to\nvtkPVPluginLoader::LoadPluginConfigurationXMLFromString to load\nconfiguration xml.\n"},
  {"LoadPluginsFromPluginSearchPath", PyvtkPVPluginLoader_LoadPluginsFromPluginSearchPath, METH_VARARGS,
   "V.LoadPluginsFromPluginSearchPath()\nC++: void LoadPluginsFromPluginSearchPath()\n\nLoads all plugins under the directories mentioned in the\nSearchPaths.\n"},
  {"LoadPluginsFromPluginConfigFile", PyvtkPVPluginLoader_LoadPluginsFromPluginConfigFile, METH_VARARGS,
   "V.LoadPluginsFromPluginConfigFile()\nC++: void LoadPluginsFromPluginConfigFile()\n\nUse PV_PLUGIN_CONFILE_FILE xml file to load specified plugins It\ncan contain path to multiples xml pluginc config files sperated\nby env separator. It allow user to fine pick which plugins to\nload, instead of using PV_PLUGIN_PATH the format a xml plugin\nfile should be the following :\n\n{.xml}\n<?xml version=\"1.0\"?>\n\n\n<Plugin name=\"MyPlugin\"\nfilename=\"absolute/path/to/libMyPlugin.so\"/>\n...\n"},
  {"LoadPluginsFromPath", PyvtkPVPluginLoader_LoadPluginsFromPath, METH_VARARGS,
   "V.LoadPluginsFromPath(string)\nC++: void LoadPluginsFromPath(const char *path)\n\nLoads all plugin libraries at a path.\n"},
  {"GetFileName", PyvtkPVPluginLoader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nReturns the full filename for the plugin attempted to load most\nrecently using LoadPlugin().\n"},
  {"GetPluginName", PyvtkPVPluginLoader_GetPluginName, METH_VARARGS,
   "V.GetPluginName() -> string\nC++: virtual char *GetPluginName()\n\nGet the plugin name. This returns a valid name only after the\nplugin has been loaded.\n"},
  {"GetPluginVersion", PyvtkPVPluginLoader_GetPluginVersion, METH_VARARGS,
   "V.GetPluginVersion() -> string\nC++: virtual char *GetPluginVersion()\n\nGet the plugin version string. This returns a valid version\nstring only after the plugin has been loaded.\n"},
  {"GetErrorString", PyvtkPVPluginLoader_GetErrorString, METH_VARARGS,
   "V.GetErrorString() -> string\nC++: virtual char *GetErrorString()\n\nGet the error string if the plugin failed to load. Returns NULL\nif the plugin was loaded successfully.\n"},
  {"GetSearchPaths", PyvtkPVPluginLoader_GetSearchPaths, METH_VARARGS,
   "V.GetSearchPaths() -> string\nC++: virtual char *GetSearchPaths()\n\nGet a string of standard search paths (path1;path2;path3) search\npaths are based on PV_PLUGIN_PATH, plugin dir relative to\nexecutable.\n"},
  {"GetLoaded", PyvtkPVPluginLoader_GetLoaded, METH_VARARGS,
   "V.GetLoaded() -> bool\nC++: virtual bool GetLoaded()\n\nReturns the status of most recent LoadPlugin call.\n"},
  {"UnregisterLoadPluginCallback", PyvtkPVPluginLoader_UnregisterLoadPluginCallback, METH_VARARGS,
   "V.UnregisterLoadPluginCallback(int)\nC++: static void UnregisterLoadPluginCallback(int id)\n\n\n"},
  {"PluginLibraryUnloaded", PyvtkPVPluginLoader_PluginLibraryUnloaded, METH_VARARGS,
   "V.PluginLibraryUnloaded(string)\nC++: static void PluginLibraryUnloaded(const char *pluginname)\n\nInternal method used in pqParaViewPlugin.cxx.in to tell the\nvtkPVPluginLoader that a library was unloaded so it doesn't try\nto unload it again.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPluginLoader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPluginLoader", // tp_name
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
  PyvtkPVPluginLoader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPluginLoader_StaticNew()
{
  return vtkPVPluginLoader::New();
}

PyObject *PyvtkPVPluginLoader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPluginLoader_Type, PyvtkPVPluginLoader_Methods,
    "vtkPVPluginLoader",
 &PyvtkPVPluginLoader_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPluginLoader_Type;

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


static const char *PyvtkPVPluginLoaderCleanerInitializer_Doc =
  "vtkPVPluginLoaderCleanerInitializer - no description provided.\n\n"

  "vtkPVPluginLoaderCleanerInitializer()\n"
  "vtkPVPluginLoaderCleanerInitializer(\n    const &vtkPVPluginLoaderCleanerInitializer)\n";

static PyMethodDef PyvtkPVPluginLoaderCleanerInitializer_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVPluginLoaderCleanerInitializer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVPluginLoaderCleanerInitializer *op = new vtkPVPluginLoaderCleanerInitializer();

    result = PyVTKSpecialObject_New("vtkPVPluginLoaderCleanerInitializer", op);
  }

  return result;
}

static PyObject *
PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVPluginLoaderCleanerInitializer");

  vtkPVPluginLoaderCleanerInitializer *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPVPluginLoaderCleanerInitializer"))
  {
    vtkPVPluginLoaderCleanerInitializer *op = new vtkPVPluginLoaderCleanerInitializer(*temp0);

    result = PyVTKSpecialObject_New("vtkPVPluginLoaderCleanerInitializer", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_Methods[] = {
  {nullptr, PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_s2, METH_VARARGS,
   "@W vtkPVPluginLoaderCleanerInitializer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_s1(self, args);
    case 1:
      return PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPVPluginLoaderCleanerInitializer");
  return nullptr;
}


static PyObject *
PyvtkPVPluginLoaderCleanerInitializer_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer(nullptr, args);
}

static void PyvtkPVPluginLoaderCleanerInitializer_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPVPluginLoaderCleanerInitializer *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPVPluginLoaderCleanerInitializer_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkPVPluginLoaderCleanerInitializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPluginLoaderCleanerInitializer", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVPluginLoaderCleanerInitializer_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPVPluginLoaderCleanerInitializer_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPVPluginLoaderCleanerInitializer_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkPVPluginLoaderCleanerInitializer_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPVPluginLoaderCleanerInitializer_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPVPluginLoaderCleanerInitializer(*static_cast<const vtkPVPluginLoaderCleanerInitializer*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPluginLoaderCleanerInitializer_TypeNew(); }

PyObject *PyvtkPVPluginLoaderCleanerInitializer_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPVPluginLoaderCleanerInitializer_Type,
    PyvtkPVPluginLoaderCleanerInitializer_Methods,
    PyvtkPVPluginLoaderCleanerInitializer_vtkPVPluginLoaderCleanerInitializer_Methods,
    &PyvtkPVPluginLoaderCleanerInitializer_CCopy);

  PyTypeObject *pytype = &PyvtkPVPluginLoaderCleanerInitializer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPluginLoader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPluginLoader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPluginLoader", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkPVPluginLoaderCleanerInitializer_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPluginLoaderCleanerInitializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

