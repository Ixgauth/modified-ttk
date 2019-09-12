// python wrapper for vtkPVPluginTracker
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
#include "vtkPVPluginTracker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPluginTracker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPluginTracker_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVPluginTracker_Doc =
  "vtkPVPluginTracker - a global manager for each processes to keep\ntrack of plugins loaded on that process.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVPluginTracker is a singleton that's present on each process to\n"
  "keep track of plugins loaded on that process. Whenever is plugin is\n"
  "loaded (either statically using PV_PLUGIN_IMPORT() or dynamically, it\n"
  "gets registered with the  on every process that it is loaded.\n"
  "Whenever a plugin is registered, this class fires a\n"
  "vtkCommand::RegisterEvent that handlers can listen to, to process the\n"
  "plugin.\n\n";


static PyObject *
PyvtkPVPluginTracker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPluginTracker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPluginTracker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPluginTracker *tempr = vtkPVPluginTracker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPluginTracker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPluginTracker::NewInstance());

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
PyvtkPVPluginTracker_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVPluginTracker *tempr = vtkPVPluginTracker::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_RegisterAvailablePlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAvailablePlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->RegisterAvailablePlugin(temp0) :
      op->vtkPVPluginTracker::RegisterAvailablePlugin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXML_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->LoadPluginConfigurationXML(temp0, temp1);
    }
    else
    {
      op->vtkPVPluginTracker::LoadPluginConfigurationXML(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXML_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->LoadPluginConfigurationXML(temp0, temp1);
    }
    else
    {
      op->vtkPVPluginTracker::LoadPluginConfigurationXML(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPluginTracker_LoadPluginConfigurationXML_Methods[] = {
  {nullptr, PyvtkPVPluginTracker_LoadPluginConfigurationXML_s1, METH_VARARGS,
   "@z|q"},
  {nullptr, PyvtkPVPluginTracker_LoadPluginConfigurationXML_s2, METH_VARARGS,
   "@V|q *vtkPVXMLElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXML(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVPluginTracker_LoadPluginConfigurationXML_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LoadPluginConfigurationXML");
  return nullptr;
}



static PyObject *
PyvtkPVPluginTracker_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->LoadPluginConfigurationXMLFromString(temp0, temp1);
    }
    else
    {
      op->vtkPVPluginTracker::LoadPluginConfigurationXMLFromString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetNumberOfPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlugins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPlugins() :
      op->vtkPVPluginTracker::GetNumberOfPlugins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginName(temp0) :
      op->vtkPVPluginTracker::GetPluginName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginFileName(temp0) :
      op->vtkPVPluginTracker::GetPluginFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginLoaded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginLoaded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPluginLoaded(temp0) :
      op->vtkPVPluginTracker::GetPluginLoaded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginTracker_GetPluginAutoLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginAutoLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginTracker *op = static_cast<vtkPVPluginTracker *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPluginAutoLoad(temp0) :
      op->vtkPVPluginTracker::GetPluginAutoLoad(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPluginTracker_Methods[] = {
  {"IsTypeOf", PyvtkPVPluginTracker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPluginTracker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPluginTracker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPluginTracker\nC++: static vtkPVPluginTracker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPluginTracker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPluginTracker\nC++: vtkPVPluginTracker *NewInstance()\n\n"},
  {"GetInstance", PyvtkPVPluginTracker_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkPVPluginTracker\nC++: static vtkPVPluginTracker *GetInstance()\n\nProvides access to the singleton. This will create the\nvtkPVPluginTracker singleton the first time this method is\ncalled.\n"},
  {"RegisterAvailablePlugin", PyvtkPVPluginTracker_RegisterAvailablePlugin, METH_VARARGS,
   "V.RegisterAvailablePlugin(string) -> int\nC++: unsigned int RegisterAvailablePlugin(const char *filename)\n\nThis API is used to register available plugins without actually\nloading them.\n"},
  {"LoadPluginConfigurationXML", PyvtkPVPluginTracker_LoadPluginConfigurationXML, METH_VARARGS,
   "V.LoadPluginConfigurationXML(string, bool)\nC++: void LoadPluginConfigurationXML(const char *filename,\n    bool forceLoad=false)\nV.LoadPluginConfigurationXML(vtkPVXMLElement, bool)\nC++: void LoadPluginConfigurationXML(vtkPVXMLElement *,\n    bool forceLoad=false)\n\nCalled to load application-specific configuration xml. The xml is\nof the form:<Plugins>\n<Plugin name=\"[plugin name]\" filename=\"[optional file name]\nauto_load=\"[bool]\" />\n...\n\nThis method will process the XML, locate the plugin shared\nlibrary and either load the plugin or call\nRegisterAvailablePlugin based on the status of the auto_load\nflag. auto_load flag is optional and is 0 by default. filaname is\nalso optional, if not provided this method will look in different\nplace to find the plugin, eg. paraview lib dir. It will NOT look\nin PV_PLUGIN_PATH.\n"},
  {"LoadPluginConfigurationXMLFromString", PyvtkPVPluginTracker_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   "V.LoadPluginConfigurationXMLFromString(string, bool)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents, bool forceLoad=false)\n\nCalled to load application-specific configuration xml. The xml is\nof the form:<Plugins>\n<Plugin name=\"[plugin name]\" filename=\"[optional file name]\nauto_load=\"[bool]\" />\n...\n\nThis method will process the XML, locate the plugin shared\nlibrary and either load the plugin or call\nRegisterAvailablePlugin based on the status of the auto_load\nflag. auto_load flag is optional and is 0 by default. filaname is\nalso optional, if not provided this method will look in different\nplace to find the plugin, eg. paraview lib dir. It will NOT look\nin PV_PLUGIN_PATH.\n"},
  {"GetNumberOfPlugins", PyvtkPVPluginTracker_GetNumberOfPlugins, METH_VARARGS,
   "V.GetNumberOfPlugins() -> int\nC++: unsigned int GetNumberOfPlugins()\n\nMethods to iterate over registered plugins.\n"},
  {"GetPluginName", PyvtkPVPluginTracker_GetPluginName, METH_VARARGS,
   "V.GetPluginName(int) -> string\nC++: const char *GetPluginName(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {"GetPluginFileName", PyvtkPVPluginTracker_GetPluginFileName, METH_VARARGS,
   "V.GetPluginFileName(int) -> string\nC++: const char *GetPluginFileName(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {"GetPluginLoaded", PyvtkPVPluginTracker_GetPluginLoaded, METH_VARARGS,
   "V.GetPluginLoaded(int) -> bool\nC++: bool GetPluginLoaded(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {"GetPluginAutoLoad", PyvtkPVPluginTracker_GetPluginAutoLoad, METH_VARARGS,
   "V.GetPluginAutoLoad(int) -> bool\nC++: bool GetPluginAutoLoad(unsigned int index)\n\nThis is provided for wrapped languages since they can't directly\naccess the vtkPVPlugin instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPluginTracker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPluginTracker", // tp_name
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
  PyvtkPVPluginTracker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPluginTracker_StaticNew()
{
  return vtkPVPluginTracker::New();
}

PyObject *PyvtkPVPluginTracker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPluginTracker_Type, PyvtkPVPluginTracker_Methods,
    "vtkPVPluginTracker",
 &PyvtkPVPluginTracker_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPluginTracker_Type;

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

void PyVTKAddFile_vtkPVPluginTracker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPluginTracker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPluginTracker", o) != 0)
  {
    Py_DECREF(o);
  }

}

