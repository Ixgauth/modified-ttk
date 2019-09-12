// python wrapper for vtkSMProxyGroupDomain
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
#include "vtkSMProxyGroupDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyGroupDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyGroupDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMProxyGroupDomain_Doc =
  "vtkSMProxyGroupDomain - union of proxy groups\n\n"
  "Superclass: vtkSMDomain\n\n"
  "The proxy group domain consists of all proxies in a list of groups.\n"
  "This domain is commonly used together with vtkSMProxyproperty Valid\n"
  "XML elements are:\n"
  " * <Group name=\"\"> where name is the groupname used by the proxy\n"
  " manager to refer to a group of proxies.\n"
  " // .SECTION See Also vtkSMDomain vtkSMProxyproperty\n\n";


static PyObject *
PyvtkSMProxyGroupDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyGroupDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyGroupDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyGroupDomain *tempr = vtkSMProxyGroupDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyGroupDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyGroupDomain::NewInstance());

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
PyvtkSMProxyGroupDomain_AddGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddGroup(temp0);
    }
    else
    {
      op->vtkSMProxyGroupDomain::AddGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMProxyGroupDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyGroupDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMProxyGroupDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyGroupDomain_IsInDomain_Methods[] = {
  {nullptr, PyvtkSMProxyGroupDomain_IsInDomain_s1, METH_VARARGS,
   "@V *vtkSMProperty"},
  {nullptr, PyvtkSMProxyGroupDomain_IsInDomain_s2, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyGroupDomain_IsInDomain(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyGroupDomain_IsInDomain_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return nullptr;
}



static PyObject *
PyvtkSMProxyGroupDomain_GetNumberOfGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfGroups() :
      op->vtkSMProxyGroupDomain::GetNumberOfGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGroup(temp0) :
      op->vtkSMProxyGroupDomain::GetGroup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMProxyGroupDomain::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMProxyGroupDomain::GetProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyGroupDomain_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyGroupDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyGroupDomain_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyGroupDomain *op = static_cast<vtkSMProxyGroupDomain *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMProxyGroupDomain::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyGroupDomain_GetProxyName_Methods[] = {
  {nullptr, PyvtkSMProxyGroupDomain_GetProxyName_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSMProxyGroupDomain_GetProxyName_s2, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyGroupDomain_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyGroupDomain_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return nullptr;
}


static PyMethodDef PyvtkSMProxyGroupDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyGroupDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyGroupDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyGroupDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyGroupDomain\nC++: static vtkSMProxyGroupDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyGroupDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyGroupDomain\nC++: vtkSMProxyGroupDomain *NewInstance()\n\n"},
  {"AddGroup", PyvtkSMProxyGroupDomain_AddGroup, METH_VARARGS,
   "V.AddGroup(string)\nC++: void AddGroup(const char *group)\n\nAdd a group to the domain. The domain is the union of all groups.\n"},
  {"IsInDomain", PyvtkSMProxyGroupDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\nV.IsInDomain(vtkSMProxy) -> int\nC++: int IsInDomain(vtkSMProxy *proxy)\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMProxyproperty or a sub-class. All\nproxies pointed by the property have to be in the domain.\n"},
  {"GetNumberOfGroups", PyvtkSMProxyGroupDomain_GetNumberOfGroups, METH_VARARGS,
   "V.GetNumberOfGroups() -> int\nC++: unsigned int GetNumberOfGroups()\n\nReturns the number of groups.\n"},
  {"GetGroup", PyvtkSMProxyGroupDomain_GetGroup, METH_VARARGS,
   "V.GetGroup(int) -> string\nC++: const char *GetGroup(unsigned int idx)\n\nReturns group with give id. Does not perform bounds check.\n"},
  {"GetNumberOfProxies", PyvtkSMProxyGroupDomain_GetNumberOfProxies, METH_VARARGS,
   "V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the total number of proxies in the domain.\n"},
  {"GetProxy", PyvtkSMProxyGroupDomain_GetProxy, METH_VARARGS,
   "V.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nGiven a name, returns a proxy.\n"},
  {"GetProxyName", PyvtkSMProxyGroupDomain_GetProxyName, METH_VARARGS,
   "V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int idx)\nV.GetProxyName(vtkSMProxy) -> string\nC++: const char *GetProxyName(vtkSMProxy *proxy)\n\nReturns the name (in the group) of a proxy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyGroupDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyGroupDomain", // tp_name
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
  PyvtkSMProxyGroupDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyGroupDomain_StaticNew()
{
  return vtkSMProxyGroupDomain::New();
}

PyObject *PyvtkSMProxyGroupDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyGroupDomain_Type, PyvtkSMProxyGroupDomain_Methods,
    "vtkSMProxyGroupDomain",
 &PyvtkSMProxyGroupDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyGroupDomain_Type;

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

void PyVTKAddFile_vtkSMProxyGroupDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyGroupDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyGroupDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

