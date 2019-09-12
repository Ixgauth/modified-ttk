// python wrapper for vtkSMMultiServerSourceProxy
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
#include "vtkSMMultiServerSourceProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMMultiServerSourceProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMMultiServerSourceProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSourceProxy_ClassNew
extern "C" { PyObject *PyvtkSMSourceProxy_ClassNew(); }
#define DECLARED_PyvtkSMSourceProxy_ClassNew
#endif

static const char *PyvtkSMMultiServerSourceProxy_Doc =
  "vtkSMMultiServerSourceProxy -       - proxy use to fetch data from\ndistributed servers\n\n"
  "Superclass: vtkSMSourceProxy\n\n"
  "vtkSMMultiServerSourceProxy can be useful in case of multi-server\n"
  "setup when the user want to display a data object that belong to\n"
  "another server into its local built-in view.\n\n";


static PyObject *
PyvtkSMMultiServerSourceProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMMultiServerSourceProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMultiServerSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMMultiServerSourceProxy *tempr = vtkSMMultiServerSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMMultiServerSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMultiServerSourceProxy::NewInstance());

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
PyvtkSMMultiServerSourceProxy_SetExternalProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExternalProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetExternalProxy(temp0, temp1);
    }
    else
    {
      op->vtkSMMultiServerSourceProxy::SetExternalProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_GetExternalProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExternalProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetExternalProxy() :
      op->vtkSMMultiServerSourceProxy::GetExternalProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->MarkDirty(temp0);
    }
    else
    {
      op->vtkSMMultiServerSourceProxy::MarkDirty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMMultiServerSourceProxy_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMultiServerSourceProxy *op = static_cast<vtkSMMultiServerSourceProxy *>(vp);

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
      op->vtkSMMultiServerSourceProxy::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMMultiServerSourceProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMMultiServerSourceProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMMultiServerSourceProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMMultiServerSourceProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMMultiServerSourceProxy\nC++: static vtkSMMultiServerSourceProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMMultiServerSourceProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMMultiServerSourceProxy\nC++: vtkSMMultiServerSourceProxy *NewInstance()\n\n"},
  {"SetExternalProxy", PyvtkSMMultiServerSourceProxy_SetExternalProxy, METH_VARARGS,
   "V.SetExternalProxy(vtkSMSourceProxy, int)\nC++: virtual void SetExternalProxy(\n    vtkSMSourceProxy *proxyFromAnotherServer, int port=0)\n\nBind proxy with a given external proxy\n"},
  {"GetExternalProxy", PyvtkSMMultiServerSourceProxy_GetExternalProxy, METH_VARARGS,
   "V.GetExternalProxy() -> vtkSMSourceProxy\nC++: virtual vtkSMSourceProxy *GetExternalProxy()\n\nReturn the proxy that is currently binded if any otherwise return\nNULL;\n"},
  {"MarkDirty", PyvtkSMMultiServerSourceProxy_MarkDirty, METH_VARARGS,
   "V.MarkDirty(vtkSMProxy)\nC++: void MarkDirty(vtkSMProxy *modifiedProxy) override;\n\nMarks the selection proxies dirty as well as chain to superclass.\n"},
  {"LoadState", PyvtkSMMultiServerSourceProxy_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *message,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMMultiServerSourceProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMMultiServerSourceProxy", // tp_name
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
  PyvtkSMMultiServerSourceProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMMultiServerSourceProxy_StaticNew()
{
  return vtkSMMultiServerSourceProxy::New();
}

PyObject *PyvtkSMMultiServerSourceProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMMultiServerSourceProxy_Type, PyvtkSMMultiServerSourceProxy_Methods,
    "vtkSMMultiServerSourceProxy",
 &PyvtkSMMultiServerSourceProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMMultiServerSourceProxy_Type;

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

void PyVTKAddFile_vtkSMMultiServerSourceProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMMultiServerSourceProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMMultiServerSourceProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

