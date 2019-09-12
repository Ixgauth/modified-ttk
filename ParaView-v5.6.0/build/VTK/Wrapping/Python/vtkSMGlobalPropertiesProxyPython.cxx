// python wrapper for vtkSMGlobalPropertiesProxy
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
#include "vtkSMGlobalPropertiesProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMGlobalPropertiesProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMGlobalPropertiesProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMGlobalPropertiesProxy_Doc =
  "vtkSMGlobalPropertiesProxy - proxy that adds support for linking\nproperties with other proxies designed for use-cases like\ncolor-palettes.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMGlobalPropertiesProxy can be thought of as a proxy which\n"
  "provides API to link its properties with any arbitrary proxy\n"
  "unidirectionally, so that if the property value on this proxy\n"
  "changes, the linked property on every other proxy is updated. However\n"
  "if the linked property (or target property) is modified externally,\n"
  "then the link is automatically broken.\n\n"
  "This is suitable adding ability for color palettes. Using XML hints\n"
  "in the proxy definition, one can write application code that setups\n"
  "links with a proxy and the color palette proxy (as done in\n"
  "vtkSMParaViewPipelineController). Now as long as the user doesn't\n"
  "modify the linked properties, the color palette can be changed and it\n"
  "will reflect on all linked properties.\n\n"
  "vtkSMParaViewPipelineController uses the property level\n"
  "hint\\<GlobalPropertyLink/> to define such links e.g.   {.xml}\n"
  "   <DoubleVectorProperty name=\"Background\" ... >\n"
  "        ...\n"
  "     \n"
  "       <GlobalPropertyLink type=\"ColorPalette\"\n"
  "property=\"BackgroundColor\" />\n"
  "     \n"
  "      \n\n"
  "While vtkSMParaViewPipelineController currently only respects hints\n"
  "on the property, we can in future add support for respecting hints at\n"
  "the proxy level if needed.\n\n";


static PyObject *
PyvtkSMGlobalPropertiesProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMGlobalPropertiesProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMGlobalPropertiesProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMGlobalPropertiesProxy *tempr = vtkSMGlobalPropertiesProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMGlobalPropertiesProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMGlobalPropertiesProxy::NewInstance());

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
PyvtkSMGlobalPropertiesProxy_Link(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Link");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->Link(temp0, temp1, temp2) :
      op->vtkSMGlobalPropertiesProxy::Link(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_Unlink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->Unlink(temp0, temp1, temp2) :
      op->vtkSMGlobalPropertiesProxy::Unlink(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLinks();
    }
    else
    {
      op->vtkSMGlobalPropertiesProxy::RemoveAllLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_GetLinkedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLinkedPropertyName(temp0, temp1) :
      op->vtkSMGlobalPropertiesProxy::GetLinkedPropertyName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMPropertyIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMGlobalPropertiesProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMGlobalPropertiesProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMGlobalPropertiesProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMGlobalPropertiesProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMGlobalPropertiesProxy_SaveXMLState_s1(self, args);
    case 1:
      return PyvtkSMGlobalPropertiesProxy_SaveXMLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMGlobalPropertiesProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesProxy *op = static_cast<vtkSMGlobalPropertiesProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMGlobalPropertiesProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMGlobalPropertiesProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMGlobalPropertiesProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMGlobalPropertiesProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMGlobalPropertiesProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMGlobalPropertiesProxy\nC++: static vtkSMGlobalPropertiesProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMGlobalPropertiesProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMGlobalPropertiesProxy\nC++: vtkSMGlobalPropertiesProxy *NewInstance()\n\n"},
  {"Link", PyvtkSMGlobalPropertiesProxy_Link, METH_VARARGS,
   "V.Link(string, vtkSMProxy, string) -> bool\nC++: bool Link(const char *propertyname, vtkSMProxy *targetProxy,\n    const char *targetPropertyName)\n\nSet up a property link with the given property on the proxy with\nthe specified property on this proxy. The link is automatically\nbroken if the target property is modified outside by someone\nother than this vtkSMGlobalPropertiesProxy instance or when the\ntargetProxy is destroyed.\n"},
  {"Unlink", PyvtkSMGlobalPropertiesProxy_Unlink, METH_VARARGS,
   "V.Unlink(string, vtkSMProxy, string) -> bool\nC++: bool Unlink(const char *propertyname,\n    vtkSMProxy *targetProxy, const char *targetPropertyName)\n\nUnlink a property link,\n"},
  {"RemoveAllLinks", PyvtkSMGlobalPropertiesProxy_RemoveAllLinks, METH_VARARGS,
   "V.RemoveAllLinks()\nC++: void RemoveAllLinks()\n\nRemove all links.\n"},
  {"GetLinkedPropertyName", PyvtkSMGlobalPropertiesProxy_GetLinkedPropertyName, METH_VARARGS,
   "V.GetLinkedPropertyName(vtkSMProxy, string) -> string\nC++: const char *GetLinkedPropertyName(vtkSMProxy *targetProxy,\n    const char *targetPropertyName)\n\nIf a link between the target and a property on this proxy exists,\nreturns the name of that property else NULL.\n"},
  {"SaveXMLState", PyvtkSMGlobalPropertiesProxy_SaveXMLState, METH_VARARGS,
   "V.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter) override;\nV.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\n\nOverridden to save link state.\n"},
  {"LoadXMLState", PyvtkSMGlobalPropertiesProxy_LoadXMLState, METH_VARARGS,
   "V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator) override;\n\nOverridden to load links state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMGlobalPropertiesProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMGlobalPropertiesProxy", // tp_name
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
  PyvtkSMGlobalPropertiesProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMGlobalPropertiesProxy_StaticNew()
{
  return vtkSMGlobalPropertiesProxy::New();
}

PyObject *PyvtkSMGlobalPropertiesProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMGlobalPropertiesProxy_Type, PyvtkSMGlobalPropertiesProxy_Methods,
    "vtkSMGlobalPropertiesProxy",
 &PyvtkSMGlobalPropertiesProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMGlobalPropertiesProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMGlobalPropertiesProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMGlobalPropertiesProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMGlobalPropertiesProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

