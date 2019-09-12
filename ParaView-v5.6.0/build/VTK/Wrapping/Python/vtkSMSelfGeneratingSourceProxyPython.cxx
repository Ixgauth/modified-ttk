// python wrapper for vtkSMSelfGeneratingSourceProxy
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
#include "vtkSMSelfGeneratingSourceProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSelfGeneratingSourceProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSelfGeneratingSourceProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSourceProxy_ClassNew
extern "C" { PyObject *PyvtkSMSourceProxy_ClassNew(); }
#define DECLARED_PyvtkSMSourceProxy_ClassNew
#endif

static const char *PyvtkSMSelfGeneratingSourceProxy_Doc =
  "vtkSMSelfGeneratingSourceProxy - source proxy that generates its own\nproxy definition at run time.\n\n"
  "Superclass: vtkSMSourceProxy\n\n"
  "vtkSMSelfGeneratingSourceProxy is a source proxy that supports\n"
  "extending its property definition at runtime. Client code can\n"
  "instantiate this proxy using standard mechanisms and then call\n"
  "`ExtendDefinition` to add XML stubs to this proxy's definitions.\n"
  "vtkSMSelfGeneratingSourceProxy (working together with vtkSIProxy)\n"
  "ensures that those extensions get loaded correctly on both client and\n"
  "server side. After that point, the proxy is pretty much like a\n"
  "regular proxy together with its properties.\n\n"
  "vtkSMSelfGeneratingSourceProxy also ensures that when the XML state\n"
  "for this proxy gets saved, the extended definitions are also saved in\n"
  "the XML state so that they can be loaded back as well.\n\n"
  "@warning\n"
  "This is only intended for simple source proxies. The\n"
  "`ExtendDefinition()` API is only intended to add new property\n"
  "definitions for the proxy and should not be used for adding other\n"
  "entities in a proxy definition such as sub proxies, hints,\n"
  "documentation, etc.\n\n";


static PyObject *
PyvtkSMSelfGeneratingSourceProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSelfGeneratingSourceProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelfGeneratingSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSelfGeneratingSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelfGeneratingSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSelfGeneratingSourceProxy *tempr = vtkSMSelfGeneratingSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelfGeneratingSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSelfGeneratingSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSelfGeneratingSourceProxy::NewInstance());

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
PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtendDefinition(temp0) :
      op->vtkSMSelfGeneratingSourceProxy::ExtendDefinition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtendDefinition(temp0) :
      op->vtkSMSelfGeneratingSourceProxy::ExtendDefinition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition_Methods[] = {
  {nullptr, PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition_s2, METH_VARARGS,
   "@V *vtkPVXMLElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ExtendDefinition");
  return nullptr;
}



static PyObject *
PyvtkSMSelfGeneratingSourceProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMPropertyIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMSelfGeneratingSourceProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSelfGeneratingSourceProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMSelfGeneratingSourceProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSelfGeneratingSourceProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMSelfGeneratingSourceProxy_SaveXMLState_s1(self, args);
    case 1:
      return PyvtkSMSelfGeneratingSourceProxy_SaveXMLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMSelfGeneratingSourceProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMSelfGeneratingSourceProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelfGeneratingSourceProxy_CreateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelfGeneratingSourceProxy *op = static_cast<vtkSMSelfGeneratingSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateVTKObjects();
    }
    else
    {
      op->vtkSMSelfGeneratingSourceProxy::CreateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSelfGeneratingSourceProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMSelfGeneratingSourceProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSelfGeneratingSourceProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSelfGeneratingSourceProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSelfGeneratingSourceProxy\nC++: static vtkSMSelfGeneratingSourceProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSelfGeneratingSourceProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSelfGeneratingSourceProxy\nC++: vtkSMSelfGeneratingSourceProxy *NewInstance()\n\n"},
  {"ExtendDefinition", PyvtkSMSelfGeneratingSourceProxy_ExtendDefinition, METH_VARARGS,
   "V.ExtendDefinition(string) -> bool\nC++: virtual bool ExtendDefinition(\n    const char *proxy_definition_xml)\nV.ExtendDefinition(vtkPVXMLElement) -> bool\nC++: virtual bool ExtendDefinition(vtkPVXMLElement *xml)\n\nWill extend this proxy to add properties using the XML definition\nprovided.\n"},
  {"SaveXMLState", PyvtkSMSelfGeneratingSourceProxy_SaveXMLState, METH_VARARGS,
   "V.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter) override;\nV.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\n\nOverridden to save information about extended definitions loaded.\n"},
  {"LoadXMLState", PyvtkSMSelfGeneratingSourceProxy_LoadXMLState, METH_VARARGS,
   "V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator) override;\n\nOverridden to process extended definition XML in the state file.\n"},
  {"CreateVTKObjects", PyvtkSMSelfGeneratingSourceProxy_CreateVTKObjects, METH_VARARGS,
   "V.CreateVTKObjects()\nC++: void CreateVTKObjects() override;\n\nOverridden to push extended definitions to the server side if not\nalready pushed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSelfGeneratingSourceProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSelfGeneratingSourceProxy", // tp_name
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
  PyvtkSMSelfGeneratingSourceProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSelfGeneratingSourceProxy_StaticNew()
{
  return vtkSMSelfGeneratingSourceProxy::New();
}

PyObject *PyvtkSMSelfGeneratingSourceProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSelfGeneratingSourceProxy_Type, PyvtkSMSelfGeneratingSourceProxy_Methods,
    "vtkSMSelfGeneratingSourceProxy",
 &PyvtkSMSelfGeneratingSourceProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSelfGeneratingSourceProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSourceProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSelfGeneratingSourceProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSelfGeneratingSourceProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSelfGeneratingSourceProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

