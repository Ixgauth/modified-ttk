// python wrapper for vtkSMCompoundSourceProxyDefinitionBuilder
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
#include "vtkSMCompoundSourceProxyDefinitionBuilder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCompoundSourceProxyDefinitionBuilder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCompoundSourceProxyDefinitionBuilder_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMCompoundSourceProxyDefinitionBuilder_Doc =
  "vtkSMCompoundSourceProxyDefinitionBuilder - used to build a\nvtkSMCompoundSourceProxy definition.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMCompoundSourceProxyDefinitionBuilder is used to create a XML\n"
  "definition for a compound-proxy consisting of other proxies. This\n"
  "class can only build one compound-proxy definition at a time. Use\n"
  "Reset() to start a new definition.\n"
  "@sa\n"
  "vtkSMCompoundSourceProxy\n\n";


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCompoundSourceProxyDefinitionBuilder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCompoundSourceProxyDefinitionBuilder *tempr = vtkSMCompoundSourceProxyDefinitionBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCompoundSourceProxyDefinitionBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::NewInstance());

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
PyvtkSMCompoundSourceProxyDefinitionBuilder_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkSMCompoundSourceProxyDefinitionBuilder::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_AddProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->AddProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMCompoundSourceProxyDefinitionBuilder::AddProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

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
      op->ExposeProperty(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMCompoundSourceProxyDefinitionBuilder::ExposeProperty(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

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
      op->ExposeOutputPort(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMCompoundSourceProxyDefinitionBuilder::ExposeOutputPort(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ExposeOutputPort(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMCompoundSourceProxyDefinitionBuilder::ExposeOutputPort(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_Methods[] = {
  {nullptr, PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s1, METH_VARARGS,
   "@zzz"},
  {nullptr, PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_s2, METH_VARARGS,
   "@zIz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ExposeOutputPort");
  return nullptr;
}



static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies() :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetNumberOfProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_Methods[] = {
  {nullptr, PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxy");
  return nullptr;
}



static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::GetProxyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCompoundSourceProxyDefinitionBuilder_SaveDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompoundSourceProxyDefinitionBuilder *op = static_cast<vtkSMCompoundSourceProxyDefinitionBuilder *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveDefinition(temp0) :
      op->vtkSMCompoundSourceProxyDefinitionBuilder::SaveDefinition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCompoundSourceProxyDefinitionBuilder_Methods[] = {
  {"IsTypeOf", PyvtkSMCompoundSourceProxyDefinitionBuilder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCompoundSourceProxyDefinitionBuilder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCompoundSourceProxyDefinitionBuilder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMCompoundSourceProxyDefinitionBuilder\nC++: static vtkSMCompoundSourceProxyDefinitionBuilder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCompoundSourceProxyDefinitionBuilder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCompoundSourceProxyDefinitionBuilder\nC++: vtkSMCompoundSourceProxyDefinitionBuilder *NewInstance()\n\n"},
  {"Reset", PyvtkSMCompoundSourceProxyDefinitionBuilder_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nResets the builder. This can be used when using the builder to\ncreate multiple definitions.\n"},
  {"AddProxy", PyvtkSMCompoundSourceProxyDefinitionBuilder_AddProxy, METH_VARARGS,
   "V.AddProxy(string, vtkSMProxy)\nC++: void AddProxy(const char *name, vtkSMProxy *proxy)\n\nAdd a proxy to be included in this compound proxy. The name must\nbe unique to each proxy added, otherwise the previously added\nproxy will be replaced.\n"},
  {"ExposeProperty", PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeProperty, METH_VARARGS,
   "V.ExposeProperty(string, string, string)\nC++: void ExposeProperty(const char *proxyName,\n    const char *propertyName, const char *exposedName)\n\nExpose a property from the sub proxy (added using AddProxy). Only\nexposed properties are accessible externally. Note that the sub\nproxy whose property is being exposed must have been already\nadded using AddProxy().\n"},
  {"ExposeOutputPort", PyvtkSMCompoundSourceProxyDefinitionBuilder_ExposeOutputPort, METH_VARARGS,
   "V.ExposeOutputPort(string, string, string)\nC++: void ExposeOutputPort(const char *proxyName,\n    const char *portName, const char *exposedName)\nV.ExposeOutputPort(string, int, string)\nC++: void ExposeOutputPort(const char *proxyName,\n    unsigned int portIndex, const char *exposedName)\n\nExpose an output port from a subproxy. Exposed output ports are\ntreated as output ports of the vtkSMCompoundSourceProxy itself.\nThis method does not may the output port available. One must call\nCreateOutputPorts().\n"},
  {"GetNumberOfProxies", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetNumberOfProxies, METH_VARARGS,
   "V.GetNumberOfProxies() -> int\nC++: unsigned int GetNumberOfProxies()\n\nReturns the number of sub-proxies.\n"},
  {"GetProxy", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxy, METH_VARARGS,
   "V.GetProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(unsigned int cc)\nV.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nReturns the sub proxy at a given index.\n"},
  {"GetProxyName", PyvtkSMCompoundSourceProxyDefinitionBuilder_GetProxyName, METH_VARARGS,
   "V.GetProxyName(int) -> string\nC++: const char *GetProxyName(unsigned int index)\n\nReturns the name used to store sub-proxy. Returns 0 if sub-proxy\ndoes not exist.\n"},
  {"SaveDefinition", PyvtkSMCompoundSourceProxyDefinitionBuilder_SaveDefinition, METH_VARARGS,
   "V.SaveDefinition(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveDefinition(vtkPVXMLElement *root)\n\nThis is the same as save state except it will remove all\nreferences to \"outside\" proxies. Outside proxies are proxies that\nare not contained in the compound proxy.  As a result, the saved\nstate will be self contained.  Returns the top element created.\nIt is the caller's responsibility to delete the returned element.\nIf root is NULL, the returned element will be a top level\nelement.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCompoundSourceProxyDefinitionBuilder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMCompoundSourceProxyDefinitionBuilder", // tp_name
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
  PyvtkSMCompoundSourceProxyDefinitionBuilder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCompoundSourceProxyDefinitionBuilder_StaticNew()
{
  return vtkSMCompoundSourceProxyDefinitionBuilder::New();
}

PyObject *PyvtkSMCompoundSourceProxyDefinitionBuilder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCompoundSourceProxyDefinitionBuilder_Type, PyvtkSMCompoundSourceProxyDefinitionBuilder_Methods,
    "vtkSMCompoundSourceProxyDefinitionBuilder",
 &PyvtkSMCompoundSourceProxyDefinitionBuilder_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCompoundSourceProxyDefinitionBuilder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMCompoundSourceProxyDefinitionBuilder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCompoundSourceProxyDefinitionBuilder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCompoundSourceProxyDefinitionBuilder", o) != 0)
  {
    Py_DECREF(o);
  }

}

