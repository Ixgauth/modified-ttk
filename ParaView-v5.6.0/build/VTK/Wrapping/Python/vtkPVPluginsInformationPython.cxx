// python wrapper for vtkPVPluginsInformation
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
#include "vtkPVPluginsInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPluginsInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPluginsInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVPluginsInformation_Doc =
  "vtkPVPluginsInformation - information about plugins tracked by\nvtkPVPluginTracker.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "vtkPVPluginsInformation is used to collect information about plugins\n"
  "tracked by vtkPVPluginTracker.\n\n";


static PyObject *
PyvtkPVPluginsInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPluginsInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPluginsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPluginsInformation *tempr = vtkPVPluginsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPluginsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPluginsInformation::NewInstance());

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
PyvtkPVPluginsInformation_GetNumberOfPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlugins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPlugins() :
      op->vtkPVPluginsInformation::GetNumberOfPlugins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginName(temp0) :
      op->vtkPVPluginsInformation::GetPluginName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginFileName(temp0) :
      op->vtkPVPluginsInformation::GetPluginFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginVersion(temp0) :
      op->vtkPVPluginsInformation::GetPluginVersion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginLoaded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginLoaded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPluginLoaded(temp0) :
      op->vtkPVPluginsInformation::GetPluginLoaded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetRequiredPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredPlugins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRequiredPlugins(temp0) :
      op->vtkPVPluginsInformation::GetRequiredPlugins(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetRequiredOnServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequiredOnServer(temp0) :
      op->vtkPVPluginsInformation::GetRequiredOnServer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetRequiredOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequiredOnClient(temp0) :
      op->vtkPVPluginsInformation::GetRequiredOnClient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetAutoLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoLoad(temp0) :
      op->vtkPVPluginsInformation::GetAutoLoad(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetPluginStatusMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginStatusMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPluginStatusMessage(temp0) :
      op->vtkPVPluginsInformation::GetPluginStatusMessage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_SetAutoLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAutoLoad(temp0, temp1);
    }
    else
    {
      op->vtkPVPluginsInformation::SetAutoLoad(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_SetAutoLoadAndForce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoLoadAndForce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAutoLoadAndForce(temp0, temp1);
    }
    else
    {
      op->vtkPVPluginsInformation::SetAutoLoadAndForce(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVPluginsInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVPluginsInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  vtkPVPluginsInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVPluginsInformation"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkPVPluginsInformation::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_GetSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPluginsInformation *op = static_cast<vtkPVPluginsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSearchPaths() :
      op->vtkPVPluginsInformation::GetSearchPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPluginsInformation_PluginRequirementsSatisfied(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PluginRequirementsSatisfied");

  vtkPVPluginsInformation *temp0 = nullptr;
  vtkPVPluginsInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVPluginsInformation") &&
      ap.GetVTKObject(temp1, "vtkPVPluginsInformation"))
  {
    bool tempr = vtkPVPluginsInformation::PluginRequirementsSatisfied(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPluginsInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVPluginsInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPluginsInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPluginsInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPluginsInformation\nC++: static vtkPVPluginsInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPluginsInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPluginsInformation\nC++: vtkPVPluginsInformation *NewInstance()\n\n"},
  {"GetNumberOfPlugins", PyvtkPVPluginsInformation_GetNumberOfPlugins, METH_VARARGS,
   "V.GetNumberOfPlugins() -> int\nC++: unsigned int GetNumberOfPlugins()\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetPluginName", PyvtkPVPluginsInformation_GetPluginName, METH_VARARGS,
   "V.GetPluginName(int) -> string\nC++: const char *GetPluginName(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetPluginFileName", PyvtkPVPluginsInformation_GetPluginFileName, METH_VARARGS,
   "V.GetPluginFileName(int) -> string\nC++: const char *GetPluginFileName(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetPluginVersion", PyvtkPVPluginsInformation_GetPluginVersion, METH_VARARGS,
   "V.GetPluginVersion(int) -> string\nC++: const char *GetPluginVersion(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetPluginLoaded", PyvtkPVPluginsInformation_GetPluginLoaded, METH_VARARGS,
   "V.GetPluginLoaded(int) -> bool\nC++: bool GetPluginLoaded(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetRequiredPlugins", PyvtkPVPluginsInformation_GetRequiredPlugins, METH_VARARGS,
   "V.GetRequiredPlugins(int) -> string\nC++: const char *GetRequiredPlugins(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetRequiredOnServer", PyvtkPVPluginsInformation_GetRequiredOnServer, METH_VARARGS,
   "V.GetRequiredOnServer(int) -> bool\nC++: bool GetRequiredOnServer(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetRequiredOnClient", PyvtkPVPluginsInformation_GetRequiredOnClient, METH_VARARGS,
   "V.GetRequiredOnClient(int) -> bool\nC++: bool GetRequiredOnClient(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetAutoLoad", PyvtkPVPluginsInformation_GetAutoLoad, METH_VARARGS,
   "V.GetAutoLoad(int) -> bool\nC++: bool GetAutoLoad(unsigned int)\n\nAPI to iterate over the information collected for each plugin.\n"},
  {"GetPluginStatusMessage", PyvtkPVPluginsInformation_GetPluginStatusMessage, METH_VARARGS,
   "V.GetPluginStatusMessage(int) -> string\nC++: const char *GetPluginStatusMessage(unsigned int)\n\nNote that unlike other properties, this one is updated as a\nconsequence of calling PluginRequirementsSatisfied().\n"},
  {"SetAutoLoad", PyvtkPVPluginsInformation_SetAutoLoad, METH_VARARGS,
   "V.SetAutoLoad(int, bool)\nC++: void SetAutoLoad(unsigned int cc, bool)\n\nAPI to change auto-load status.\n"},
  {"SetAutoLoadAndForce", PyvtkPVPluginsInformation_SetAutoLoadAndForce, METH_VARARGS,
   "V.SetAutoLoadAndForce(int, bool)\nC++: void SetAutoLoadAndForce(unsigned int cc, bool)\n\nThis is a hack. When the user sets an auto-load option from  the\nGUI to avoid that choice being overwritten as the information\nobject is updated over time as new plugins are loaded/unloaded,\nthe pqPluginDialog uses this method to set the auto-load flag.\nThis flag is not communicated across processes, but when called,\nGetAutoLoad() will return the value set using this method.\n"},
  {"CopyFromObject", PyvtkPVPluginsInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVPluginsInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"Update", PyvtkPVPluginsInformation_Update, METH_VARARGS,
   "V.Update(vtkPVPluginsInformation)\nC++: void Update(vtkPVPluginsInformation *other)\n\nUpdates the local information with elements from other without\noverriding auto-load state.\n"},
  {"GetSearchPaths", PyvtkPVPluginsInformation_GetSearchPaths, METH_VARARGS,
   "V.GetSearchPaths() -> string\nC++: virtual char *GetSearchPaths()\n\nGet the plugin search path.\n"},
  {"PluginRequirementsSatisfied", PyvtkPVPluginsInformation_PluginRequirementsSatisfied, METH_VARARGS,
   "V.PluginRequirementsSatisfied(vtkPVPluginsInformation,\n    vtkPVPluginsInformation) -> bool\nC++: static bool PluginRequirementsSatisfied(\n    vtkPVPluginsInformation *client_plugins,\n    vtkPVPluginsInformation *server_plugins)\n\nMethod to validate if the plugin requirements are met across\nprocesses. This also updated the \"StatusMessage\" for all the\nplugins. If StatusMessage is empty for a loaded plugin, it\nimplies that everything is fine. If some requirement is not met,\nthe StatusMessage includes the error message.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPluginsInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPluginsInformation", // tp_name
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
  PyvtkPVPluginsInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPluginsInformation_StaticNew()
{
  return vtkPVPluginsInformation::New();
}

PyObject *PyvtkPVPluginsInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPluginsInformation_Type, PyvtkPVPluginsInformation_Methods,
    "vtkPVPluginsInformation",
 &PyvtkPVPluginsInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPluginsInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPluginsInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPluginsInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPluginsInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

