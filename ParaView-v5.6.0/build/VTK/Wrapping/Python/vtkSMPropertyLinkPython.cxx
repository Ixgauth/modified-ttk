// python wrapper for vtkSMPropertyLink
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
#include "vtkSMPropertyLink.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPropertyLink(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPropertyLink_ClassNew(); }

#ifndef DECLARED_PyvtkSMLink_ClassNew
extern "C" { PyObject *PyvtkSMLink_ClassNew(); }
#define DECLARED_PyvtkSMLink_ClassNew
#endif

static const char *PyvtkSMPropertyLink_Doc =
  "vtkSMPropertyLink - Creates a link between two properties.\n\n"
  "Superclass: vtkSMLink\n\n"
  "Can create M->N links. At the time when the link is created every\n"
  "output property is synchornized with the first input property.\n\n";


static PyObject *
PyvtkSMPropertyLink_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPropertyLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPropertyLink *tempr = vtkSMPropertyLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPropertyLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyLink::NewInstance());

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
PyvtkSMPropertyLink_AddLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddLinkedProperty(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMPropertyLink::AddLinkedProperty(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_RemoveLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveLinkedProperty(temp0, temp1);
    }
    else
    {
      op->vtkSMPropertyLink::RemoveLinkedProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetNumberOfLinkedObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedObjects() :
      op->vtkSMPropertyLink::GetNumberOfLinkedObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetNumberOfLinkedProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedProperties() :
      op->vtkSMPropertyLink::GetNumberOfLinkedProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetLinkedProperty(temp0) :
      op->vtkSMPropertyLink::GetLinkedProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetLinkedProxy(temp0) :
      op->vtkSMPropertyLink::GetLinkedProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLinkedPropertyName(temp0) :
      op->vtkSMPropertyLink::GetLinkedPropertyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedObjectDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedObjectDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedObjectDirection(temp0) :
      op->vtkSMPropertyLink::GetLinkedObjectDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_GetLinkedPropertyDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedPropertyDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedPropertyDirection(temp0) :
      op->vtkSMPropertyLink::GetLinkedPropertyDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLinks();
    }
    else
    {
      op->vtkSMPropertyLink::RemoveAllLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyLink *op = static_cast<vtkSMPropertyLink *>(vp);

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
      op->vtkSMPropertyLink::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyLink_Methods[] = {
  {"IsTypeOf", PyvtkSMPropertyLink_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPropertyLink_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPropertyLink_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPropertyLink\nC++: static vtkSMPropertyLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPropertyLink_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPropertyLink\nC++: vtkSMPropertyLink *NewInstance()\n\n"},
  {"AddLinkedProperty", PyvtkSMPropertyLink_AddLinkedProperty, METH_VARARGS,
   "V.AddLinkedProperty(vtkSMProxy, string, int)\nC++: void AddLinkedProperty(vtkSMProxy *proxy,\n    const char *propertyname, int updateDir)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A property can be set to be both input and\noutput by adding 2 links, one to INPUT and the other to OUTPUT\nWhen a link is added, all output property values are synchronized\nwith that of the input.\n"},
  {"RemoveLinkedProperty", PyvtkSMPropertyLink_RemoveLinkedProperty, METH_VARARGS,
   "V.RemoveLinkedProperty(vtkSMProxy, string)\nC++: void RemoveLinkedProperty(vtkSMProxy *proxy,\n    const char *propertyname)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A property can be set to be both input and\noutput by adding 2 links, one to INPUT and the other to OUTPUT\nWhen a link is added, all output property values are synchronized\nwith that of the input.\n"},
  {"GetNumberOfLinkedObjects", PyvtkSMPropertyLink_GetNumberOfLinkedObjects, METH_VARARGS,
   "V.GetNumberOfLinkedObjects() -> int\nC++: unsigned int GetNumberOfLinkedObjects() override;\n\nGet the number of properties that are involved in this link.\n"},
  {"GetNumberOfLinkedProperties", PyvtkSMPropertyLink_GetNumberOfLinkedProperties, METH_VARARGS,
   "V.GetNumberOfLinkedProperties() -> int\nC++: unsigned int GetNumberOfLinkedProperties()\n\nGet the number of properties that are involved in this link.\n"},
  {"GetLinkedProperty", PyvtkSMPropertyLink_GetLinkedProperty, METH_VARARGS,
   "V.GetLinkedProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetLinkedProperty(int index)\n\nGet a property involved in this link.\n"},
  {"GetLinkedProxy", PyvtkSMPropertyLink_GetLinkedProxy, METH_VARARGS,
   "V.GetLinkedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetLinkedProxy(int index) override;\n\nGet a proxy involved in this link.\n"},
  {"GetLinkedPropertyName", PyvtkSMPropertyLink_GetLinkedPropertyName, METH_VARARGS,
   "V.GetLinkedPropertyName(int) -> string\nC++: const char *GetLinkedPropertyName(int index)\n\nGet a property involved in this link.\n"},
  {"GetLinkedObjectDirection", PyvtkSMPropertyLink_GetLinkedObjectDirection, METH_VARARGS,
   "V.GetLinkedObjectDirection(int) -> int\nC++: int GetLinkedObjectDirection(int index) override;\n\nGet the direction of a property involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {"GetLinkedPropertyDirection", PyvtkSMPropertyLink_GetLinkedPropertyDirection, METH_VARARGS,
   "V.GetLinkedPropertyDirection(int) -> int\nC++: int GetLinkedPropertyDirection(int index)\n\nGet the direction of a property involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {"RemoveAllLinks", PyvtkSMPropertyLink_RemoveAllLinks, METH_VARARGS,
   "V.RemoveAllLinks()\nC++: void RemoveAllLinks() override;\n\nRemove all links.\n"},
  {"LoadState", PyvtkSMPropertyLink_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialize the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalIDs set. This enables splitting the load\nprocess in 2 step to prevent invalid state when a property refers\nto a sub-proxy that does not exist yet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPropertyLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMPropertyLink", // tp_name
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
  PyvtkSMPropertyLink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPropertyLink_StaticNew()
{
  return vtkSMPropertyLink::New();
}

PyObject *PyvtkSMPropertyLink_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPropertyLink_Type, PyvtkSMPropertyLink_Methods,
    "vtkSMPropertyLink",
 &PyvtkSMPropertyLink_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPropertyLink_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMLink_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPropertyLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPropertyLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPropertyLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

