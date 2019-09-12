// python wrapper for vtkSMProxyProperty
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
#include "vtkSMProxy.h"
#include "vtkSMProxyProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMProperty_ClassNew
extern "C" { PyObject *PyvtkSMProperty_ClassNew(); }
#define DECLARED_PyvtkSMProperty_ClassNew
#endif

static const char *PyvtkSMProxyProperty_Doc =
  "vtkSMProxyProperty - property representing pointer(s) to vtkObject(s)\n\n"
  "Superclass: vtkSMProperty\n\n"
  "vtkSMProxyProperty is a concrete sub-class of vtkSMProperty\n"
  "representing pointer(s) to vtkObject(s) (through vtkSMProxy).\n\n"
  "vtkSMProperty::UpdateDomains() is called by vtkSMProperty itself\n"
  "whenever its unchecked values are modified. In case of\n"
  "proxy-properties, the dependent domains typically tend to depend on\n"
  "the data information provided by the source-proxies added to the\n"
  "property. Thus, to ensure that the domains get updated if the data\n"
  "information changes, vtkSMProxyProperty ensures that\n"
  "vtkSMProperty::UpdateDomains() is called whenever any of the added\n"
  "proxies fires the vtkCommand::UpdateDataEvent (which is fired\n"
  "whenever the pipeline us updated through the ServerManager indicating\n"
  "that the data-information last used may have been invalidated).\n\n"
  "Besides the standard set of attributes, the following XML attributes\n"
  "are supported:\n"
  "\\li command : identifies the method to call on the VTK object e.g.\n"
  "AddRepresentation.\n"
  "\\li clean_command : if present, called once before invoking the\n"
  "    method\n"
  "specified by command every time the property value is pushed e.g.\n"
  "RemoveAllRepresentations. If property can take multiple values then\n"
  "the command is called for for each of the values after the clean\n"
  "command for every push.\n"
  "\\li remove_command : an alternative to clean_command where instead of\n"
  "resetting and adding all the values for every push, this simply calls\n"
  "the specified method to remove the vtk-objects no longer referred to\n"
  "e.g. RemoveRepresentation.\n"
  "\\li argument_type : identifies the type for value passed to the\n"
  "    method on the\n"
  "VTK object. Accepted values are \"VTK\", \"SMProxy\" or \"SIProxy\".\n"
  "Default is VTK.\n"
  "\\li null_on_empty : if set to 1, whenever the property's value\n"
  "    changes to\n"
  "empty i.e. it contains no proxies, the command is called on the VTK\n"
  "object with NULL argument useful when there's no clean_command that\n"
  "can be called on the VTK object to unset the property e.g.\n"
  "SetLookupTable(NULL).\n"
  "\\li skip_dependency: obsolete and no longer supported. This was\n"
  "    intended for\n"
  "vtkSMRepresentationProxy to distinguish between proxy connections\n"
  "that invalidate representation pipeline (e.g. input) and those that\n"
  "don't (e.g. LookupTable). vtkSMRepresentationProxy now handles this\n"
  "automatically.\n"
  "@sa\n"
  "vtkSMProperty\n\n";


static PyObject *
PyvtkSMProxyProperty_EnableProxyCreation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EnableProxyCreation");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMProxyProperty::EnableProxyCreation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_DisableProxyCreation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DisableProxyCreation");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMProxyProperty::DisableProxyCreation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_CanCreateProxy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanCreateProxy");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMProxyProperty::CanCreateProxy();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyProperty *tempr = vtkSMProxyProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyProperty::NewInstance());

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
PyvtkSMProxyProperty_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->AddProxy(temp0);
    }
    else
    {
      op->vtkSMProxyProperty::AddProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMProxyProperty::SetProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_RemoveProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveProxy(temp0);
    }
    else
    {
      op->vtkSMProxyProperty::RemoveProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_RemoveAllProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllProxies();
    }
    else
    {
      op->vtkSMProxyProperty::RemoveAllProxies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsProxyAdded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProxyAdded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsProxyAdded(temp0) :
      op->vtkSMProxyProperty::IsProxyAdded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_AddUncheckedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUncheckedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->AddUncheckedProxy(temp0);
    }
    else
    {
      op->vtkSMProxyProperty::AddUncheckedProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetUncheckedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetUncheckedProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMProxyProperty::SetUncheckedProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_RemoveAllUncheckedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUncheckedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllUncheckedProxies();
    }
    else
    {
      op->vtkSMProxyProperty::RemoveAllUncheckedProxies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearUncheckedElements();
    }
    else
    {
      op->vtkSMProxyProperty::ClearUncheckedElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMProxyProperty::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetNumberOfUncheckedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedProxies() :
      op->vtkSMProxyProperty::GetNumberOfUncheckedProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfProxies(temp0);
    }
    else
    {
      op->vtkSMProxyProperty::SetNumberOfProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_SetNumberOfUncheckedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfUncheckedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfUncheckedProxies(temp0);
    }
    else
    {
      op->vtkSMProxyProperty::SetNumberOfUncheckedProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMProxyProperty::GetProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_GetUncheckedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetUncheckedProxy(temp0) :
      op->vtkSMProxyProperty::GetUncheckedProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMProxyProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkSMProxyProperty_GetSkipDependency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDependency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSkipDependency() :
      op->vtkSMProxyProperty::GetSkipDependency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkSMProxyProperty_UpdateAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAllInputs();
    }
    else
    {
      op->vtkSMProxyProperty::UpdateAllInputs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMProxyProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyProperty *op = static_cast<vtkSMProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetToXMLDefaults();
    }
    else
    {
      op->vtkSMProxyProperty::ResetToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyProperty_Methods[] = {
  {"EnableProxyCreation", PyvtkSMProxyProperty_EnableProxyCreation, METH_VARARGS,
   "V.EnableProxyCreation()\nC++: static void EnableProxyCreation()\n\nWhen we load ProxyManager state we want Proxy/InputProperty to be\nable to create the corresponding missing proxy. Although when the\ngoal is to load a state on any standard proxy, we do not want\nthat proxy property be able to create new proxy based on some\nprevious state.\n"},
  {"DisableProxyCreation", PyvtkSMProxyProperty_DisableProxyCreation, METH_VARARGS,
   "V.DisableProxyCreation()\nC++: static void DisableProxyCreation()\n\nWhen we load ProxyManager state we want Proxy/InputProperty to be\nable to create the corresponding missing proxy. Although when the\ngoal is to load a state on any standard proxy, we do not want\nthat proxy property be able to create new proxy based on some\nprevious state.\n"},
  {"CanCreateProxy", PyvtkSMProxyProperty_CanCreateProxy, METH_VARARGS,
   "V.CanCreateProxy() -> bool\nC++: static bool CanCreateProxy()\n\nWhen we load ProxyManager state we want Proxy/InputProperty to be\nable to create the corresponding missing proxy. Although when the\ngoal is to load a state on any standard proxy, we do not want\nthat proxy property be able to create new proxy based on some\nprevious state.\n"},
  {"IsTypeOf", PyvtkSMProxyProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyProperty\nC++: static vtkSMProxyProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyProperty\nC++: vtkSMProxyProperty *NewInstance()\n\n"},
  {"AddProxy", PyvtkSMProxyProperty_AddProxy, METH_VARARGS,
   "V.AddProxy(vtkSMProxy)\nC++: virtual void AddProxy(vtkSMProxy *proxy)\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {"SetProxy", PyvtkSMProxyProperty_SetProxy, METH_VARARGS,
   "V.SetProxy(int, vtkSMProxy)\nC++: virtual void SetProxy(unsigned int idx, vtkSMProxy *proxy)\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {"RemoveProxy", PyvtkSMProxyProperty_RemoveProxy, METH_VARARGS,
   "V.RemoveProxy(vtkSMProxy)\nC++: virtual void RemoveProxy(vtkSMProxy *proxy)\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {"RemoveAllProxies", PyvtkSMProxyProperty_RemoveAllProxies, METH_VARARGS,
   "V.RemoveAllProxies()\nC++: virtual void RemoveAllProxies()\n\nAdd/remove/set a proxy to the list of proxies. For SetProxy, the\nproperty automatically resizes to accommodate the index\nspecified.\n"},
  {"IsProxyAdded", PyvtkSMProxyProperty_IsProxyAdded, METH_VARARGS,
   "V.IsProxyAdded(vtkSMProxy) -> bool\nC++: bool IsProxyAdded(vtkSMProxy *proxy)\n\nReturns if the given proxy is already added to the property.\n"},
  {"AddUncheckedProxy", PyvtkSMProxyProperty_AddUncheckedProxy, METH_VARARGS,
   "V.AddUncheckedProxy(vtkSMProxy)\nC++: virtual void AddUncheckedProxy(vtkSMProxy *proxy)\n\nAdd an unchecked proxy. Does not modify the property. Unchecked\nproxies are used by domains when verifying whether a value is\nacceptable. To check if a value is in the domains, you can do the\nfollowing:\n - RemoveAllUncheckedProxies()\n - AddUncheckedProxy(proxy)\n - IsInDomains()\n \n"},
  {"SetUncheckedProxy", PyvtkSMProxyProperty_SetUncheckedProxy, METH_VARARGS,
   "V.SetUncheckedProxy(int, vtkSMProxy)\nC++: virtual void SetUncheckedProxy(unsigned int idx,\n    vtkSMProxy *proxy)\n\nAdd an unchecked proxy. Does not modify the property. Unchecked\nproxies are used by domains when verifying whether a value is\nacceptable. To check if a value is in the domains, you can do the\nfollowing:\n - RemoveAllUncheckedProxies()\n - AddUncheckedProxy(proxy)\n - IsInDomains()\n \n"},
  {"RemoveAllUncheckedProxies", PyvtkSMProxyProperty_RemoveAllUncheckedProxies, METH_VARARGS,
   "V.RemoveAllUncheckedProxies()\nC++: virtual void RemoveAllUncheckedProxies()\n\nRemoves all unchecked proxies.\n"},
  {"ClearUncheckedElements", PyvtkSMProxyProperty_ClearUncheckedElements, METH_VARARGS,
   "V.ClearUncheckedElements()\nC++: void ClearUncheckedElements() override;\n\nUse this method to clear unchecked values set of this property.\n"},
  {"GetNumberOfProxies", PyvtkSMProxyProperty_GetNumberOfProxies, METH_VARARGS,
   "V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the number of proxies.\n"},
  {"GetNumberOfUncheckedProxies", PyvtkSMProxyProperty_GetNumberOfUncheckedProxies, METH_VARARGS,
   "V.GetNumberOfUncheckedProxies() -> int\nC++: unsigned int GetNumberOfUncheckedProxies()\n\nReturns the number of unchecked proxies.\n"},
  {"SetNumberOfProxies", PyvtkSMProxyProperty_SetNumberOfProxies, METH_VARARGS,
   "V.SetNumberOfProxies(int)\nC++: void SetNumberOfProxies(unsigned int count)\n\nSet the number of proxies.\n"},
  {"SetNumberOfUncheckedProxies", PyvtkSMProxyProperty_SetNumberOfUncheckedProxies, METH_VARARGS,
   "V.SetNumberOfUncheckedProxies(int)\nC++: void SetNumberOfUncheckedProxies(unsigned int count)\n\nSet the number of proxies.\n"},
  {"GetProxy", PyvtkSMProxyProperty_GetProxy, METH_VARARGS,
   "V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int idx)\n\nReturn a proxy. No bounds check is performed.\n"},
  {"GetUncheckedProxy", PyvtkSMProxyProperty_GetUncheckedProxy, METH_VARARGS,
   "V.GetUncheckedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetUncheckedProxy(unsigned int idx)\n\nReturn a proxy. No bounds check is performed.\n"},
  {"Copy", PyvtkSMProxyProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: void Copy(vtkSMProperty *src) override;\n\nCopy all property values. This method behaves differently for\nproperties with vtkSMProxyListDomain and those without it. If the\nproperty has a vtkSMProxyListDomain, then the property is acting\nas an enumeration, giving user ability to pick one of the\navailable proxies in the domain, hence a `Copy` request, will\nfind an equivalent proxy on the target's domain and set that as\nthe value of the target property.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"GetSkipDependency", PyvtkSMProxyProperty_GetSkipDependency, METH_VARARGS,
   "V.GetSkipDependency() -> bool\nC++: bool GetSkipDependency()\n\n@deprecated ParaView 5.6. No longer supported or needed.\n"},
#endif
  {"UpdateAllInputs", PyvtkSMProxyProperty_UpdateAllInputs, METH_VARARGS,
   "V.UpdateAllInputs()\nC++: void UpdateAllInputs() override;\n\nUpdate all proxies referred by this property (if any).\n"},
  {"IsValueDefault", PyvtkSMProxyProperty_IsValueDefault, METH_VARARGS,
   "V.IsValueDefault() -> bool\nC++: bool IsValueDefault() override;\n\nReturns true if the property's value is different from the\ndefault value. This is used as a hint by the state saving code to\ndetermine if the value should be written to the file or if the\ndefaults are sufficient.\n"},
  {"ResetToXMLDefaults", PyvtkSMProxyProperty_ResetToXMLDefaults, METH_VARARGS,
   "V.ResetToXMLDefaults()\nC++: void ResetToXMLDefaults() override;\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML. Simply clears the property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyProperty", // tp_name
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
  PyvtkSMProxyProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyProperty_StaticNew()
{
  return vtkSMProxyProperty::New();
}

PyObject *PyvtkSMProxyProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyProperty_Type, PyvtkSMProxyProperty_Methods,
    "vtkSMProxyProperty",
 &PyvtkSMProxyProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxyProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

