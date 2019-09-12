// python wrapper for vtkSMProxyLocator
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
#include "vtkSMProxyLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyLocator_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProxyLocator_Doc =
  "vtkSMProxyLocator - is used to locate proxies referred to in state\nxmls while loading state files.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMProxyLocator is used to locate proxies referred to in state xmls\n"
  "(and otherwise) when loading state files.\n\n";


static PyObject *
PyvtkSMProxyLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyLocator *tempr = vtkSMProxyLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyLocator::NewInstance());

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
PyvtkSMProxyLocator_LocateProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocateProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->LocateProxy(temp0) :
      op->vtkSMProxyLocator::LocateProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_SetDeserializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeserializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  vtkSMDeserializer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMDeserializer"))
  {
    if (ap.IsBound())
    {
      op->SetDeserializer(temp0);
    }
    else
    {
      op->vtkSMProxyLocator::SetDeserializer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_GetDeserializer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeserializer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDeserializer *tempr = (ap.IsBound() ?
      op->GetDeserializer() :
      op->vtkSMProxyLocator::GetDeserializer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMProxyLocator::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

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
      op->vtkSMProxyLocator::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSMProxyLocator::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_GetLocatedProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatedProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetLocatedProxies(temp0);
    }
    else
    {
      op->vtkSMProxyLocator::GetLocatedProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_UseSessionToLocateProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSessionToLocateProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UseSessionToLocateProxy(temp0);
    }
    else
    {
      op->vtkSMProxyLocator::UseSessionToLocateProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyLocator_AssignProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyLocator *op = static_cast<vtkSMProxyLocator *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->AssignProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMProxyLocator::AssignProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyLocator_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyLocator\nC++: static vtkSMProxyLocator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyLocator\nC++: vtkSMProxyLocator *NewInstance()\n\n"},
  {"LocateProxy", PyvtkSMProxyLocator_LocateProxy, METH_VARARGS,
   "V.LocateProxy(int) -> vtkSMProxy\nC++: virtual vtkSMProxy *LocateProxy(vtkTypeUInt32 globalID)\n\nLocate a proxy with the given \"name\". If none can be found\nreturns NULL. If a proxy with the name was not previously\nlocated, it will ask the Deserializer (if any) to create a new\nproxy is possible.\n"},
  {"SetDeserializer", PyvtkSMProxyLocator_SetDeserializer, METH_VARARGS,
   "V.SetDeserializer(vtkSMDeserializer)\nC++: void SetDeserializer(vtkSMDeserializer *)\n\nGet/Set the de-serializer to used to locate XMLs/Protobuf for\nunknown proxies requested to be located using LocateProxy().\n"},
  {"GetDeserializer", PyvtkSMProxyLocator_GetDeserializer, METH_VARARGS,
   "V.GetDeserializer() -> vtkSMDeserializer\nC++: virtual vtkSMDeserializer *GetDeserializer()\n\nGet/Set the de-serializer to used to locate XMLs/Protobuf for\nunknown proxies requested to be located using LocateProxy().\n"},
  {"GetSession", PyvtkSMProxyLocator_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkSMSession\nC++: virtual vtkSMSession *GetSession()\n\nGet/Set the session.\n"},
  {"SetSession", PyvtkSMProxyLocator_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *s)\n\nGet/Set the session.\n"},
  {"Clear", PyvtkSMProxyLocator_Clear, METH_VARARGS,
   "V.Clear()\nC++: virtual void Clear()\n\nClear the locator.\n"},
  {"GetLocatedProxies", PyvtkSMProxyLocator_GetLocatedProxies, METH_VARARGS,
   "V.GetLocatedProxies(vtkCollection)\nC++: virtual void GetLocatedProxies(\n    vtkCollection *collectionToFill)\n\nCopy all the Located proxy into the collection. This allow to\nkeep a reference to them outside of the current locator. This is\nneeded if we don't want to delete those proxy and if we want to\nClear() the current ProxyLocator.\n"},
  {"UseSessionToLocateProxy", PyvtkSMProxyLocator_UseSessionToLocateProxy, METH_VARARGS,
   "V.UseSessionToLocateProxy(bool)\nC++: virtual void UseSessionToLocateProxy(bool useSessionToo)\n\n"},
  {"AssignProxy", PyvtkSMProxyLocator_AssignProxy, METH_VARARGS,
   "V.AssignProxy(int, vtkSMProxy)\nC++: virtual void AssignProxy(vtkTypeUInt32 id, vtkSMProxy *proxy)\n\nFor custom applications managing custom state loading, one can\nuse this method to register proxies with locator to use  when\nLocateProxy() before attempting the standard route i.e. using the\ndeserializer or session.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxyLocator", // tp_name
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
  PyvtkSMProxyLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyLocator_StaticNew()
{
  return vtkSMProxyLocator::New();
}

PyObject *PyvtkSMProxyLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyLocator_Type, PyvtkSMProxyLocator_Methods,
    "vtkSMProxyLocator",
 &PyvtkSMProxyLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyLocator_Type;

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

void PyVTKAddFile_vtkSMProxyLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

