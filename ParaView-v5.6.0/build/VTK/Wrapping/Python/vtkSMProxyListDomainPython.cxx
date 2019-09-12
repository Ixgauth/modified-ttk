// python wrapper for vtkSMProxyListDomain
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
#include "vtkSMProxyListDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyListDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyListDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMProxyListDomain_Doc =
  "vtkSMProxyListDomain - union of proxies.\n\n"
  "Superclass: vtkSMDomain\n\n"
  "This domain is a collection of proxies that can be assigned as the\n"
  "value to a vtkSMProxyProperty. The Server Mananger configuration\n"
  "defines the proxy types that form this list, while the value of this\n"
  "domain is the list of instances of proxies. Example usage :\n\n"
  "{.xml}\n"
  "<ProxyListDomain name=\"proxy_list\">\n"
  "  <Proxy group=\"implicit_functions\"\n"
  "         name=\"Plane\" />\n"
  "  <Group name=\"implicit_functions\"/>\n\n"
  "@sa\n"
  "vtkSMDomain vtkSMProxyProperty\n\n";


static PyObject *
PyvtkSMProxyListDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyListDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyListDomain *tempr = vtkSMProxyListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyListDomain::NewInstance());

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
PyvtkSMProxyListDomain_GetNumberOfProxyTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxyTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxyTypes() :
      op->vtkSMProxyListDomain::GetNumberOfProxyTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetProxyGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyGroup(temp0) :
      op->vtkSMProxyListDomain::GetProxyGroup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyListDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyListDomain_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyListDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyListDomain_GetProxyName_Methods[] = {
  {nullptr, PyvtkSMProxyListDomain_GetProxyName_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSMProxyListDomain_GetProxyName_s2, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyListDomain_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyListDomain_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return nullptr;
}



static PyObject *
PyvtkSMProxyListDomain_GetProxyWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxyWithName(temp0) :
      op->vtkSMProxyListDomain::GetProxyWithName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMProxyListDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

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
      op->vtkSMProxyListDomain::AddProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_HasProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasProxy(temp0) :
      op->vtkSMProxyListDomain::HasProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMProxyListDomain::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMProxyListDomain::GetProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_FindProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindProxy(temp0, temp1) :
      op->vtkSMProxyListDomain::FindProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_RemoveProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveProxy(temp0) :
      op->vtkSMProxyListDomain::RemoveProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyListDomain_RemoveProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveProxy(temp0) :
      op->vtkSMProxyListDomain::RemoveProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyListDomain_RemoveProxy_Methods[] = {
  {nullptr, PyvtkSMProxyListDomain_RemoveProxy_s1, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, PyvtkSMProxyListDomain_RemoveProxy_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyListDomain_RemoveProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyListDomain_RemoveProxy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveProxy");
  return nullptr;
}



static PyObject *
PyvtkSMProxyListDomain_CreateProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
  {
    if (ap.IsBound())
    {
      op->CreateProxies(temp0);
    }
    else
    {
      op->vtkSMProxyListDomain::CreateProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyListDomain *op = static_cast<vtkSMProxyListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMProxyListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyListDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyListDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyListDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyListDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyListDomain\nC++: static vtkSMProxyListDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyListDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyListDomain\nC++: vtkSMProxyListDomain *NewInstance()\n\n"},
  {"GetNumberOfProxyTypes", PyvtkSMProxyListDomain_GetNumberOfProxyTypes, METH_VARARGS,
   "V.GetNumberOfProxyTypes() -> int\nC++: unsigned int GetNumberOfProxyTypes()\n\nReturns the number of proxies in the domain.\n"},
  {"GetProxyGroup", PyvtkSMProxyListDomain_GetProxyGroup, METH_VARARGS,
   "V.GetProxyGroup(int) -> string\nC++: const char *GetProxyGroup(unsigned int index)\n\nReturns the xml group name for the proxy at a given index.\n"},
  {"GetProxyName", PyvtkSMProxyListDomain_GetProxyName, METH_VARARGS,
   "V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int index)\nV.GetProxyName(vtkSMProxy) -> string\nC++: const char *GetProxyName(vtkSMProxy *proxy)\n\nReturns the xml type name for the proxy at a given index.\n"},
  {"GetProxyWithName", PyvtkSMProxyListDomain_GetProxyWithName, METH_VARARGS,
   "V.GetProxyWithName(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxyWithName(const char *pname)\n\nInverse of `GetProxyName`, returns the first proxy with the given\nname.\n"},
  {"IsInDomain", PyvtkSMProxyListDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\n\nThis always returns true.\n"},
  {"AddProxy", PyvtkSMProxyListDomain_AddProxy, METH_VARARGS,
   "V.AddProxy(vtkSMProxy)\nC++: void AddProxy(vtkSMProxy *)\n\nAdd a proxy to the domain.\n"},
  {"HasProxy", PyvtkSMProxyListDomain_HasProxy, METH_VARARGS,
   "V.HasProxy(vtkSMProxy) -> bool\nC++: bool HasProxy(vtkSMProxy *)\n\nReturns if the proxy is present in the domain.\n"},
  {"GetNumberOfProxies", PyvtkSMProxyListDomain_GetNumberOfProxies, METH_VARARGS,
   "V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nGet number of proxies in the domain.\n"},
  {"GetProxy", PyvtkSMProxyListDomain_GetProxy, METH_VARARGS,
   "V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int index)\n\nGet proxy at a given index.\n"},
  {"FindProxy", PyvtkSMProxyListDomain_FindProxy, METH_VARARGS,
   "V.FindProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *FindProxy(const char *xmlgroup,\n    const char *xmlname)\n\nFind a proxy in the domain of the given group and type.\n"},
  {"RemoveProxy", PyvtkSMProxyListDomain_RemoveProxy, METH_VARARGS,
   "V.RemoveProxy(vtkSMProxy) -> int\nC++: int RemoveProxy(vtkSMProxy *proxy)\nV.RemoveProxy(int) -> int\nC++: int RemoveProxy(unsigned int index)\n\nRemoves the first occurrence of the proxy in the domain. Returns\nif the proxy was removed.\n"},
  {"CreateProxies", PyvtkSMProxyListDomain_CreateProxies, METH_VARARGS,
   "V.CreateProxies(vtkSMSessionProxyManager)\nC++: void CreateProxies(vtkSMSessionProxyManager *pxm)\n\nCreates and populates the domain with the proxy-types. This will\nremove any existing proxies in the domain. Note that the newly\ncreated proxies won't be registered with the proxy manager.\n"},
  {"SetDefaultValues", PyvtkSMProxyListDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *prop,\n    bool use_unchecked_values) override;\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyListDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyListDomain", // tp_name
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
  PyvtkSMProxyListDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyListDomain_StaticNew()
{
  return vtkSMProxyListDomain::New();
}

PyObject *PyvtkSMProxyListDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyListDomain_Type, PyvtkSMProxyListDomain_Methods,
    "vtkSMProxyListDomain",
 &PyvtkSMProxyListDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyListDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxyListDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyListDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyListDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

