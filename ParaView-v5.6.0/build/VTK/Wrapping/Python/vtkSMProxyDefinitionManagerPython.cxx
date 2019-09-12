// python wrapper for vtkSMProxyDefinitionManager
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
#include "vtkSMProxyDefinitionManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyDefinitionManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyDefinitionManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMRemoteObject_ClassNew
extern "C" { PyObject *PyvtkSMRemoteObject_ClassNew(); }
#define DECLARED_PyvtkSMRemoteObject_ClassNew
#endif

static const char *PyvtkSMProxyDefinitionManager_Doc =
  "vtkSMProxyDefinitionManager - vtkSMProxyDefinitionManager is a\nremote-object that represents the vtkSIProxyDefinitionManager\ninstance on all the processes.\n\n"
  "Superclass: vtkSMRemoteObject\n\n"
  "ParaView clients should use API on this class to add/update xml\n"
  "definitions to ensure that the xmls are processed/updated correctly\n"
  "on all the processes.\n\n";

static PyTypeObject PyvtkSMProxyDefinitionManager_Events_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyDefinitionManager.Events", // tp_name
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

PyObject *PyvtkSMProxyDefinitionManager_Events_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMProxyDefinitionManager_Events_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxyDefinitionManager_Events_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMProxyDefinitionManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyDefinitionManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyDefinitionManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyDefinitionManager *tempr = vtkSMProxyDefinitionManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyDefinitionManager::NewInstance());

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
PyvtkSMProxyDefinitionManager_SynchronizeDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeDefinitions();
    }
    else
    {
      op->vtkSMProxyDefinitionManager::SynchronizeDefinitions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkSMProxyDefinitionManager::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_GetProxyDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::GetProxyDefinition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_GetProxyDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1) :
      op->vtkSMProxyDefinitionManager::GetProxyDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_GetProxyDefinition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMProxyDefinitionManager_GetProxyDefinition_s1(self, args);
    case 2:
      return PyvtkSMProxyDefinitionManager_GetProxyDefinition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyDefinition");
  return nullptr;
}



static PyObject *
PyvtkSMProxyDefinitionManager_GetCollapsedProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::GetCollapsedProxyDefinition(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_HasDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDefinition(temp0, temp1) :
      op->vtkSMProxyDefinitionManager::HasDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_SaveCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::SaveCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_NewIterator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSMProxyDefinitionManager::NewIterator());

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
PyvtkSMProxyDefinitionManager_NewIterator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewIterator(temp0) :
      op->vtkSMProxyDefinitionManager::NewIterator(temp0));

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
PyvtkSMProxyDefinitionManager_NewIterator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMProxyDefinitionManager_NewIterator_s1(self, args);
    case 1:
      return PyvtkSMProxyDefinitionManager_NewIterator_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NewIterator");
  return nullptr;
}



static PyObject *
PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSingleGroupIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewSingleGroupIterator(temp0) :
      op->vtkSMProxyDefinitionManager::NewSingleGroupIterator(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSingleGroupIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVProxyDefinitionIterator *tempr = (ap.IsBound() ?
      op->NewSingleGroupIterator(temp0, temp1) :
      op->vtkSMProxyDefinitionManager::NewSingleGroupIterator(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyDefinitionManager_NewSingleGroupIterator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s1(self, args);
    case 2:
      return PyvtkSMProxyDefinitionManager_NewSingleGroupIterator_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NewSingleGroupIterator");
  return nullptr;
}



static PyObject *
PyvtkSMProxyDefinitionManager_AddCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::AddCustomProxyDefinition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_RemoveCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::RemoveCustomProxyDefinition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_ClearCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCustomProxyDefinitions();
    }
    else
    {
      op->vtkSMProxyDefinitionManager::ClearCustomProxyDefinitions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::LoadCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitionsFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitionsFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

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
      op->vtkSMProxyDefinitionManager::LoadCustomProxyDefinitionsFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadConfigurationXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXML(temp0) :
      op->vtkSMProxyDefinitionManager::LoadConfigurationXML(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXMLFromString(temp0) :
      op->vtkSMProxyDefinitionManager::LoadConfigurationXMLFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyDefinitionManager_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyDefinitionManager *op = static_cast<vtkSMProxyDefinitionManager *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->LoadState(temp0, temp1);
    }
    else
    {
      op->vtkSMProxyDefinitionManager::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyDefinitionManager_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyDefinitionManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyDefinitionManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyDefinitionManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyDefinitionManager\nC++: static vtkSMProxyDefinitionManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyDefinitionManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyDefinitionManager\nC++: vtkSMProxyDefinitionManager *NewInstance()\n\n"},
  {"SynchronizeDefinitions", PyvtkSMProxyDefinitionManager_SynchronizeDefinitions, METH_VARARGS,
   "V.SynchronizeDefinitions()\nC++: void SynchronizeDefinitions()\n\nSynchronizes the client-side definitions using the server-side\ndefinitions, if applicable. Call this method after any code that\ncould result in changing of the XML definitions on the server\ne.g. loading of plugins.\n"},
  {"SetSession", PyvtkSMProxyDefinitionManager_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *) override;\n\nOverridden call SynchronizeDefinitions() when the session\nchanges. Also ensures that the internal references to\nvtkSIProxyDefinitionManager are updated correctly.\n"},
  {"GetProxyDefinition", PyvtkSMProxyDefinitionManager_GetProxyDefinition, METH_VARARGS,
   "V.GetProxyDefinition(string, string, bool) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name, bool throwError)\nV.GetProxyDefinition(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name)\n\nReturns a registered proxy definition or return a NULL otherwise.\nMoreover, error can be throw if the definition was not found if\nthe flag throwError is true.\n"},
  {"GetCollapsedProxyDefinition", PyvtkSMProxyDefinitionManager_GetCollapsedProxyDefinition, METH_VARARGS,
   "V.GetCollapsedProxyDefinition(string, string, string, bool)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetCollapsedProxyDefinition(\n    const char *group, const char *name, const char *subProxyName,\n     bool throwError)\n\nReturns the same thing as GetProxyDefinition in a flatten manner.\nBy flatten, we mean that the class hierarchy has been walked and\nmerged into a single vtkPVXMLElement definition.\n"},
  {"HasDefinition", PyvtkSMProxyDefinitionManager_HasDefinition, METH_VARARGS,
   "V.HasDefinition(string, string) -> bool\nC++: bool HasDefinition(const char *groupName,\n    const char *proxyName)\n\nReturn true if the XML Definition was found\n"},
  {"SaveCustomProxyDefinitions", PyvtkSMProxyDefinitionManager_SaveCustomProxyDefinitions, METH_VARARGS,
   "V.SaveCustomProxyDefinitions(vtkPVXMLElement)\nC++: void SaveCustomProxyDefinitions(vtkPVXMLElement *root)\n\nSave registered custom proxy definitions. The caller must release\nthe reference to the returned vtkPVXMLElement.\n"},
  {"NewIterator", PyvtkSMProxyDefinitionManager_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewIterator()\nV.NewIterator(int) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewIterator(int scope)\n\nReturn a NEW instance of vtkPVProxyDefinitionIterator configured\nto get through all the definition available for the requested\nscope. Possible scope defined as enum inside\nvtkSIProxyDefinitionManager: ALL_DEFINITIONS=0 /\nCORE_DEFINITIONS=1 / CUSTOM_DEFINITIONS=2 Some extra restriction\ncan be set directly on the iterator itself by setting a set of\nGroupName...\n"},
  {"NewSingleGroupIterator", PyvtkSMProxyDefinitionManager_NewSingleGroupIterator, METH_VARARGS,
   "V.NewSingleGroupIterator(string) -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewSingleGroupIterator(\n    const char *groupName)\nV.NewSingleGroupIterator(string, int)\n    -> vtkPVProxyDefinitionIterator\nC++: vtkPVProxyDefinitionIterator *NewSingleGroupIterator(\n    const char *groupName, int scope)\n\nReturn a new configured iterator for traversing a set of proxy\ndefinition for only one GroupName. Possible scope defined as enum\ninside vtkSIProxyDefinitionManager: ALL_DEFINITIONS=0 /\nCORE_DEFINITIONS=1 / CUSTOM_DEFINITIONS=2\n"},
  {"AddCustomProxyDefinition", PyvtkSMProxyDefinitionManager_AddCustomProxyDefinition, METH_VARARGS,
   "V.AddCustomProxyDefinition(string, string, vtkPVXMLElement)\nC++: void AddCustomProxyDefinition(const char *group,\n    const char *name, vtkPVXMLElement *top)\n\nAdd/Remove/Clear custom proxy definitions.\n"},
  {"RemoveCustomProxyDefinition", PyvtkSMProxyDefinitionManager_RemoveCustomProxyDefinition, METH_VARARGS,
   "V.RemoveCustomProxyDefinition(string, string)\nC++: void RemoveCustomProxyDefinition(const char *group,\n    const char *name)\n\nAdd/Remove/Clear custom proxy definitions.\n"},
  {"ClearCustomProxyDefinitions", PyvtkSMProxyDefinitionManager_ClearCustomProxyDefinitions, METH_VARARGS,
   "V.ClearCustomProxyDefinitions()\nC++: void ClearCustomProxyDefinitions()\n\nAdd/Remove/Clear custom proxy definitions.\n"},
  {"LoadCustomProxyDefinitions", PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitions, METH_VARARGS,
   "V.LoadCustomProxyDefinitions(vtkPVXMLElement)\nC++: void LoadCustomProxyDefinitions(vtkPVXMLElement *root)\n\nLoad custom proxy definitions and register them.\n"},
  {"LoadCustomProxyDefinitionsFromString", PyvtkSMProxyDefinitionManager_LoadCustomProxyDefinitionsFromString, METH_VARARGS,
   "V.LoadCustomProxyDefinitionsFromString(string)\nC++: void LoadCustomProxyDefinitionsFromString(\n    const char *xmlContent)\n\nLoad custom proxy definitions and register them.\n"},
  {"LoadConfigurationXML", PyvtkSMProxyDefinitionManager_LoadConfigurationXML, METH_VARARGS,
   "V.LoadConfigurationXML(vtkPVXMLElement) -> bool\nC++: bool LoadConfigurationXML(vtkPVXMLElement *root)\n\nLoads server-manager configuration xml.\n"},
  {"LoadConfigurationXMLFromString", PyvtkSMProxyDefinitionManager_LoadConfigurationXMLFromString, METH_VARARGS,
   "V.LoadConfigurationXMLFromString(string) -> bool\nC++: bool LoadConfigurationXMLFromString(const char *xmlContent)\n\nLoads server-manager configuration xml.\n"},
  {"LoadState", PyvtkSMProxyDefinitionManager_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyDefinitionManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyDefinitionManager", // tp_name
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
  PyvtkSMProxyDefinitionManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyDefinitionManager_StaticNew()
{
  return vtkSMProxyDefinitionManager::New();
}

PyObject *PyvtkSMProxyDefinitionManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyDefinitionManager_Type, PyvtkSMProxyDefinitionManager_Methods,
    "vtkSMProxyDefinitionManager",
 &PyvtkSMProxyDefinitionManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyDefinitionManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRemoteObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMProxyDefinitionManager_Events_Type);
  PyvtkSMProxyDefinitionManager_Events_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMProxyDefinitionManager_Events_Type);

  o = (PyObject *)&PyvtkSMProxyDefinitionManager_Events_Type;
  if (PyDict_SetItemString(d, "Events", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSMProxyDefinitionManager::Events cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ProxyDefinitionsUpdated", vtkSMProxyDefinitionManager::ProxyDefinitionsUpdated },
        { "CompoundProxyDefinitionsUpdated", vtkSMProxyDefinitionManager::CompoundProxyDefinitionsUpdated },
      };

    o = PyvtkSMProxyDefinitionManager_Events_FromEnum(constants[c].value);
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
        { "ALL_DEFINITIONS", vtkSMProxyDefinitionManager::ALL_DEFINITIONS },
        { "CORE_DEFINITIONS", vtkSMProxyDefinitionManager::CORE_DEFINITIONS },
        { "CUSTOM_DEFINITIONS", vtkSMProxyDefinitionManager::CUSTOM_DEFINITIONS },
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

void PyVTKAddFile_vtkSMProxyDefinitionManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyDefinitionManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyDefinitionManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

