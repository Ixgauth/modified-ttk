// python wrapper for vtkSMProxyLink
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
#include "vtkSMProxyLink.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyLink(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyLink_ClassNew(); }

#ifndef DECLARED_PyvtkSMLink_ClassNew
extern "C" { PyObject *PyvtkSMLink_ClassNew(); }
#define DECLARED_PyvtkSMLink_ClassNew
#endif

static const char *PyvtkSMProxyLink_Doc =
  "vtkSMProxyLink - creates a link between two proxies.\n\n"
  "Superclass: vtkSMLink\n\n"
  "When a link is created between proxy A->B, whenever any property on\n"
  "proxy A is modified, a property with the same name as the modified\n"
  "property (if any) on proxy B is also modified to be the same as the\n"
  "property on the proxy A. Similarly whenever proxy\n"
  "A->UpdateVTKObjects() is called, B->UpdateVTKObjects() is also fired.\n\n";


static PyObject *
PyvtkSMProxyLink_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyLink *tempr = vtkSMProxyLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyLink::NewInstance());

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
PyvtkSMProxyLink_AddLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddLinkedProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMProxyLink::AddLinkedProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_RemoveLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveLinkedProxy(temp0);
    }
    else
    {
      op->vtkSMProxyLink::RemoveLinkedProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetNumberOfLinkedObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedObjects() :
      op->vtkSMProxyLink::GetNumberOfLinkedObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetNumberOfLinkedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedProxies() :
      op->vtkSMProxyLink::GetNumberOfLinkedProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetLinkedProxy(temp0) :
      op->vtkSMProxyLink::GetLinkedProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetLinkedObjectDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedObjectDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedObjectDirection(temp0) :
      op->vtkSMProxyLink::GetLinkedObjectDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_GetLinkedProxyDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxyDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedProxyDirection(temp0) :
      op->vtkSMProxyLink::GetLinkedProxyDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_AddException(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddException");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddException(temp0);
    }
    else
    {
      op->vtkSMProxyLink::AddException(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_RemoveException(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveException");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveException(temp0);
    }
    else
    {
      op->vtkSMProxyLink::RemoveException(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLinks();
    }
    else
    {
      op->vtkSMProxyLink::RemoveAllLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLink *op = static_cast<vtkSMProxyLink *>(vp);

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
      op->vtkSMProxyLink::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyLink_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyLink_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyLink_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyLink_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyLink\nC++: static vtkSMProxyLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyLink_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyLink\nC++: vtkSMProxyLink *NewInstance()\n\n"},
  {"AddLinkedProxy", PyvtkSMProxyLink_AddLinkedProxy, METH_VARARGS,
   "V.AddLinkedProxy(vtkSMProxy, int)\nC++: virtual void AddLinkedProxy(vtkSMProxy *proxy, int updateDir)\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A proxy can be set to be both input and\noutput by adding 2 link, one to INPUT and the other to OUTPUT\n"},
  {"RemoveLinkedProxy", PyvtkSMProxyLink_RemoveLinkedProxy, METH_VARARGS,
   "V.RemoveLinkedProxy(vtkSMProxy)\nC++: virtual void RemoveLinkedProxy(vtkSMProxy *proxy)\n\nRemove a linked proxy.\n"},
  {"GetNumberOfLinkedObjects", PyvtkSMProxyLink_GetNumberOfLinkedObjects, METH_VARARGS,
   "V.GetNumberOfLinkedObjects() -> int\nC++: unsigned int GetNumberOfLinkedObjects() override;\n\nGet the number of proxies that are involved in this link.\n"},
  {"GetNumberOfLinkedProxies", PyvtkSMProxyLink_GetNumberOfLinkedProxies, METH_VARARGS,
   "V.GetNumberOfLinkedProxies() -> int\nC++: unsigned int GetNumberOfLinkedProxies()\n\nGet the number of proxies that are involved in this link.\n"},
  {"GetLinkedProxy", PyvtkSMProxyLink_GetLinkedProxy, METH_VARARGS,
   "V.GetLinkedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetLinkedProxy(int index) override;\n\nGet a proxy involved in this link.\n"},
  {"GetLinkedObjectDirection", PyvtkSMProxyLink_GetLinkedObjectDirection, METH_VARARGS,
   "V.GetLinkedObjectDirection(int) -> int\nC++: int GetLinkedObjectDirection(int index) override;\n\nGet the direction of a proxy involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {"GetLinkedProxyDirection", PyvtkSMProxyLink_GetLinkedProxyDirection, METH_VARARGS,
   "V.GetLinkedProxyDirection(int) -> int\nC++: int GetLinkedProxyDirection(int index)\n\nGet the direction of a proxy involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {"AddException", PyvtkSMProxyLink_AddException, METH_VARARGS,
   "V.AddException(string)\nC++: void AddException(const char *propertyname)\n\nIt is possible to exclude certain properties from being\nsynchronized by this link. This method can be used to add/remove\nthe names for such exception properties.\n"},
  {"RemoveException", PyvtkSMProxyLink_RemoveException, METH_VARARGS,
   "V.RemoveException(string)\nC++: void RemoveException(const char *propertyname)\n\nIt is possible to exclude certain properties from being\nsynchronized by this link. This method can be used to add/remove\nthe names for such exception properties.\n"},
  {"RemoveAllLinks", PyvtkSMProxyLink_RemoveAllLinks, METH_VARARGS,
   "V.RemoveAllLinks()\nC++: void RemoveAllLinks() override;\n\nRemove all links.\n"},
  {"LoadState", PyvtkSMProxyLink_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyLink", // tp_name
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
  PyvtkSMProxyLink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyLink_StaticNew()
{
  return vtkSMProxyLink::New();
}

PyObject *PyvtkSMProxyLink_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyLink_Type, PyvtkSMProxyLink_Methods,
    "vtkSMProxyLink",
 &PyvtkSMProxyLink_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyLink_Type;

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

void PyVTKAddFile_vtkSMProxyLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

