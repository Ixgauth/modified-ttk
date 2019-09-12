// python wrapper for vtkSIProxyDefinitionManager
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
#include "vtkSIProxyDefinitionManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIProxyDefinitionManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIProxyDefinitionManager_ClassNew(); }

#ifndef DECLARED_PyvtkSIObject_ClassNew
extern "C" { PyObject *PyvtkSIObject_ClassNew(); }
#define DECLARED_PyvtkSIObject_ClassNew
#endif

static const char *PyvtkSIProxyDefinitionManager_Doc =
  "vtkSIProxyDefinitionManager - object responsible for managing XML\nproxies definitions\n\n"
  "Superclass: vtkSIObject\n\n"
  "vtkSIProxyDefinitionManager is a class that manages XML proxies\n"
  "definition. It maintains a map of vtkPVXMLElement (populated by the\n"
  "XML parser) from which it can extract Hint, Documentation,\n"
  "Properties, Domains definition.\n\n"
  "This class fires the following events:\n"
  "\\li vtkSIProxyDefinitionManager::ProxyDefinitionsUpdated - Fired any\n"
  "    time\n"
  "any definitions are updated. If a group of definitions are being\n"
  "updated (i.e. a new definition is registered, or unregistered, or\n"
  "modified) then this event gets fired after all of them are updated.\n"
  "\\li vtkSIProxyDefinitionManager::CompoundProxyDefinitionsUpdated -\n"
  "    Fired\n"
  "when a custom proxy definition is updated. Similar to\n"
  "ProxyDefinitionsUpdated this is fired after collective updates, if\n"
  "applicable. Note whenever CompoundProxyDefinitionsUpdated is fired,\n"
  "ProxyDefinitionsUpdated is also fired.\n"
  "\\li vtkCommand::RegisterEvent - Fired when a new proxy definition is\n"
  "registered or an old one modified (through extensions). This is fired\n"
  "for regular proxies as well as custom proxy definitions.\n"
  "\\li vtkCommand::UnRegisterEvent - Fired when a proxy definition is\n"
  "removed. Since this class only support removing custom proxies, this\n"
  "event is fired only when a custom proxy is removed.\n\n";

static PyTypeObject PyvtkSIProxyDefinitionManager_Events_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIProxyDefinitionManager.Events", // tp_name
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

PyObject *PyvtkSIProxyDefinitionManager_Events_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSIProxyDefinitionManager_Events_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSIProxyDefinitionManager_Events_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSIProxyDefinitionManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIProxyDefinitionManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProxyDefinitionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIProxyDefinitionManager *tempr = vtkSIProxyDefinitionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProxyDefinitionManager::NewInstance());

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
PyvtkSIProxyDefinitionManager_GetReservedGlobalID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReservedGlobalID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkSIProxyDefinitionManager::GetReservedGlobalID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_PatchXMLProperty(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PatchXMLProperty");

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkSIProxyDefinitionManager::PatchXMLProperty(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_GetProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1, temp2) :
      op->vtkSIProxyDefinitionManager::GetProxyDefinition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1) :
      op->vtkSIProxyDefinitionManager::GetProxyDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetProxyDefinition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSIProxyDefinitionManager_GetProxyDefinition_s1(self, args);
    case 2:
      return PyvtkSIProxyDefinitionManager_GetProxyDefinition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyDefinition");
  return nullptr;
}



static PyObject *
PyvtkSIProxyDefinitionManager_HasDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDefinition(temp0, temp1) :
      op->vtkSIProxyDefinitionManager::HasDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetCollapsedProxyDefinition(temp0, temp1, temp2, temp3) :
      op->vtkSIProxyDefinitionManager::GetCollapsedProxyDefinition(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetCollapsedProxyDefinition(temp0, temp1, temp2) :
      op->vtkSIProxyDefinitionManager::GetCollapsedProxyDefinition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s1(self, args);
    case 3:
      return PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCollapsedProxyDefinition");
  return nullptr;
}



static PyObject *
PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkPVXMLElement *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->AddCustomProxyDefinition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::AddCustomProxyDefinition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddCustomProxyDefinition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::AddCustomProxyDefinition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_Methods[] = {
  {nullptr, PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s1, METH_VARARGS,
   "@zzV *vtkPVXMLElement"},
  {nullptr, PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_s2, METH_VARARGS,
   "@zzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddCustomProxyDefinition");
  return nullptr;
}



static PyObject *
PyvtkSIProxyDefinitionManager_RemoveCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveCustomProxyDefinition(temp0, temp1);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::RemoveCustomProxyDefinition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_ClearCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCustomProxyDefinitions();
    }
    else
    {
      op->vtkSIProxyDefinitionManager::ClearCustomProxyDefinitions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->LoadCustomProxyDefinitions(temp0);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::LoadCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitionsFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitionsFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->LoadCustomProxyDefinitionsFromString(temp0);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::LoadCustomProxyDefinitionsFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_SaveCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->SaveCustomProxyDefinitions(temp0);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::SaveCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadConfigurationXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXML(temp0) :
      op->vtkSIProxyDefinitionManager::LoadConfigurationXML(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_LoadConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXMLFromString(temp0) :
      op->vtkSIProxyDefinitionManager::LoadConfigurationXMLFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  int temp0 = vtkSIProxyDefinitionManager::ALL_DEFINITIONS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewIterator(temp0) :
      op->vtkSIProxyDefinitionManager::NewIterator(temp0));

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
PyvtkSIProxyDefinitionManager_NewSingleGroupIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSingleGroupIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  int temp1 = vtkSIProxyDefinitionManager::ALL_DEFINITIONS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewSingleGroupIterator(temp0, temp1) :
      op->vtkSIProxyDefinitionManager::NewSingleGroupIterator(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_EnableXMLProxyDefnitionUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableXMLProxyDefnitionUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableXMLProxyDefnitionUpdate(temp0);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::EnableXMLProxyDefnitionUpdate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Push(temp0);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::Push(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyDefinitionManager_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyDefinitionManager *op = static_cast<vtkSIProxyDefinitionManager *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Pull(temp0);
    }
    else
    {
      op->vtkSIProxyDefinitionManager::Pull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSIProxyDefinitionManager_Methods[] = {
  {"IsTypeOf", PyvtkSIProxyDefinitionManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIProxyDefinitionManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIProxyDefinitionManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIProxyDefinitionManager\nC++: static vtkSIProxyDefinitionManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIProxyDefinitionManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIProxyDefinitionManager\nC++: vtkSIProxyDefinitionManager *NewInstance()\n\n"},
  {"GetReservedGlobalID", PyvtkSIProxyDefinitionManager_GetReservedGlobalID, METH_VARARGS,
   "V.GetReservedGlobalID() -> int\nC++: static vtkTypeUInt32 GetReservedGlobalID()\n\nReturns the ID reserved for the proxy definition manager.\n"},
  {"PatchXMLProperty", PyvtkSIProxyDefinitionManager_PatchXMLProperty, METH_VARARGS,
   "V.PatchXMLProperty(vtkPVXMLElement)\nC++: static void PatchXMLProperty(vtkPVXMLElement *propElement)\n\nFor now we dynamically convert InformationHelper into the correct\nsi_class and attribute sets. THIS CODE SHOULD BE REMOVED once\nInformationHelper have been removed from legacy XML\n"},
  {"GetProxyDefinition", PyvtkSIProxyDefinitionManager_GetProxyDefinition, METH_VARARGS,
   "V.GetProxyDefinition(string, string, bool) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name, bool throwError)\nV.GetProxyDefinition(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name)\n\nReturns a registered proxy definition or return a NULL otherwise.\nMoreover, error can be throw if the definition was not found if\nthe flag throwError is true.\n"},
  {"HasDefinition", PyvtkSIProxyDefinitionManager_HasDefinition, METH_VARARGS,
   "V.HasDefinition(string, string) -> bool\nC++: bool HasDefinition(const char *groupName,\n    const char *proxyName)\n\nReturn true if the XML Definition was found\n"},
  {"GetCollapsedProxyDefinition", PyvtkSIProxyDefinitionManager_GetCollapsedProxyDefinition, METH_VARARGS,
   "V.GetCollapsedProxyDefinition(string, string, string, bool)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetCollapsedProxyDefinition(\n    const char *group, const char *name, const char *subProxyName,\n     bool throwError)\nV.GetCollapsedProxyDefinition(string, string, string)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetCollapsedProxyDefinition(\n    const char *group, const char *name, const char *subProxyName)\n\nReturns the same thing as GetProxyDefinition in a flatten manner.\nBy flatten, we mean that the class hierarchy has been walked and\nmerged into a single vtkPVXMLElement definition.\n"},
  {"AddCustomProxyDefinition", PyvtkSIProxyDefinitionManager_AddCustomProxyDefinition, METH_VARARGS,
   "V.AddCustomProxyDefinition(string, string, vtkPVXMLElement)\nC++: void AddCustomProxyDefinition(const char *group,\n    const char *name, vtkPVXMLElement *top)\nV.AddCustomProxyDefinition(string, string, string)\nC++: void AddCustomProxyDefinition(const char *groupName,\n    const char *proxyName, const char *xmlcontents)\n\nAdd a custom proxy definition. Custom definitions are NOT ALLOWED\nto overrive or overlap any ProxyDefinition that has been defined\nby parsing server manager proxy configuration files. This can be\na compound proxy definition (look at vtkSMCompoundSourceProxy.h)\nor a regular proxy definition. For all practical purposes,\nthere's no difference between a proxy definition added using this\nmethod or by parsing a server manager configuration file.\n"},
  {"RemoveCustomProxyDefinition", PyvtkSIProxyDefinitionManager_RemoveCustomProxyDefinition, METH_VARARGS,
   "V.RemoveCustomProxyDefinition(string, string)\nC++: void RemoveCustomProxyDefinition(const char *group,\n    const char *name)\n\nGiven its name, remove a custom proxy definition. Note that this\ncan only be used to remove definitions added using\nAddCustomProxyDefinition(), cannot be used to remove definitions\nloaded using vtkSMXMLParser.\n"},
  {"ClearCustomProxyDefinitions", PyvtkSIProxyDefinitionManager_ClearCustomProxyDefinitions, METH_VARARGS,
   "V.ClearCustomProxyDefinitions()\nC++: void ClearCustomProxyDefinitions()\n\nRemove all registered custom proxy definitions. Note that this\ncan only be used to remove definitions added using\nAddCustomProxyDefinition(), cannot be used to remove definitions\nloaded using vtkSMXMLParser.\n"},
  {"LoadCustomProxyDefinitions", PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitions, METH_VARARGS,
   "V.LoadCustomProxyDefinitions(vtkPVXMLElement)\nC++: void LoadCustomProxyDefinitions(vtkPVXMLElement *root)\n\nLoad custom proxy definitions and register them.\n"},
  {"LoadCustomProxyDefinitionsFromString", PyvtkSIProxyDefinitionManager_LoadCustomProxyDefinitionsFromString, METH_VARARGS,
   "V.LoadCustomProxyDefinitionsFromString(string)\nC++: void LoadCustomProxyDefinitionsFromString(\n    const char *xmlContent)\n\nLoad custom proxy definitions and register them.\n"},
  {"SaveCustomProxyDefinitions", PyvtkSIProxyDefinitionManager_SaveCustomProxyDefinitions, METH_VARARGS,
   "V.SaveCustomProxyDefinitions(vtkPVXMLElement)\nC++: void SaveCustomProxyDefinitions(vtkPVXMLElement *root)\n\nSave registered custom proxy definitions. The caller must release\nthe reference to the returned vtkPVXMLElement.\n"},
  {"LoadConfigurationXML", PyvtkSIProxyDefinitionManager_LoadConfigurationXML, METH_VARARGS,
   "V.LoadConfigurationXML(vtkPVXMLElement) -> bool\nC++: bool LoadConfigurationXML(vtkPVXMLElement *root)\n\nLoads server-manager configuration xml.\n"},
  {"LoadConfigurationXMLFromString", PyvtkSIProxyDefinitionManager_LoadConfigurationXMLFromString, METH_VARARGS,
   "V.LoadConfigurationXMLFromString(string) -> bool\nC++: bool LoadConfigurationXMLFromString(const char *xmlContent)\n\nLoads server-manager configuration xml.\n"},
  {"NewIterator", PyvtkSIProxyDefinitionManager_NewIterator, METH_VARARGS,
   "V.NewIterator(int) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewIterator(\n    int scope=vtkSIProxyDefinitionManager::ALL_DEFINITIONS)\n\nReturn a NEW instance of vtkPVProxyDefinitionIterator configured\nto get through all the definition available for the requested\nscope. Possible scope defined as enum inside\nvtkSIProxyDefinitionManager: ALL_DEFINITIONS=0 /\nCORE_DEFINITIONS=1 / CUSTOM_DEFINITIONS=2 Some extra restriction\ncan be set directly on the iterator itself by setting a set of\nGroupName...\n"},
  {"NewSingleGroupIterator", PyvtkSIProxyDefinitionManager_NewSingleGroupIterator, METH_VARARGS,
   "V.NewSingleGroupIterator(string, int)\n    -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewSingleGroupIterator(\n    const char *groupName,\n    int scope=vtkSIProxyDefinitionManager::ALL_DEFINITIONS)\n\nReturn a new configured iterator for traversing a set of proxy\ndefinition for only one GroupName. Possible scope defined as enum\ninside vtkSIProxyDefinitionManager: ALL_DEFINITIONS=0 /\nCORE_DEFINITIONS=1 / CUSTOM_DEFINITIONS=2\n"},
  {"EnableXMLProxyDefnitionUpdate", PyvtkSIProxyDefinitionManager_EnableXMLProxyDefnitionUpdate, METH_VARARGS,
   "V.EnableXMLProxyDefnitionUpdate(bool)\nC++: void EnableXMLProxyDefnitionUpdate(bool)\n\nDeactivate the modification of the ProxyDefinitions for that\ngiven vtkSIProxyDefinitionManager to make sure update only come\nfrom the remote server and not plugin loaded on the client.\n"},
  {"Push", PyvtkSIProxyDefinitionManager_Push, METH_VARARGS,
   "V.Push(vtkSMMessage)\nC++: void Push(vtkSMMessage *msg) override;\n\nPush a new state to the underneath implementation The provided\nimplementation just store the message and return it at the Pull\none.\n"},
  {"Pull", PyvtkSIProxyDefinitionManager_Pull, METH_VARARGS,
   "V.Pull(vtkSMMessage)\nC++: void Pull(vtkSMMessage *msg) override;\n\nPull the current state of the underneath implementation The\nprovided implementation update the given message with the one\nthat has been previously pushed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIProxyDefinitionManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIProxyDefinitionManager", // tp_name
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
  PyvtkSIProxyDefinitionManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIProxyDefinitionManager_StaticNew()
{
  return vtkSIProxyDefinitionManager::New();
}

PyObject *PyvtkSIProxyDefinitionManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIProxyDefinitionManager_Type, PyvtkSIProxyDefinitionManager_Methods,
    "vtkSIProxyDefinitionManager",
 &PyvtkSIProxyDefinitionManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSIProxyDefinitionManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSIProxyDefinitionManager_Events_Type);
  PyvtkSIProxyDefinitionManager_Events_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSIProxyDefinitionManager_Events_Type);

  o = (PyObject *)&PyvtkSIProxyDefinitionManager_Events_Type;
  if (PyDict_SetItemString(d, "Events", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSIProxyDefinitionManager::Events cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ProxyDefinitionsUpdated", vtkSIProxyDefinitionManager::ProxyDefinitionsUpdated },
        { "CompoundProxyDefinitionsUpdated", vtkSIProxyDefinitionManager::CompoundProxyDefinitionsUpdated },
      };

    o = PyvtkSIProxyDefinitionManager_Events_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "ALL_DEFINITIONS", vtkSIProxyDefinitionManager::ALL_DEFINITIONS },
        { "CORE_DEFINITIONS", vtkSIProxyDefinitionManager::CORE_DEFINITIONS },
        { "CUSTOM_DEFINITIONS", vtkSIProxyDefinitionManager::CUSTOM_DEFINITIONS },
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

void PyVTKAddFile_vtkSIProxyDefinitionManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIProxyDefinitionManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIProxyDefinitionManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

