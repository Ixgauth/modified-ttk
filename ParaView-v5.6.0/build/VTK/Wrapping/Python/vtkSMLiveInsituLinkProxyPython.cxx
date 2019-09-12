// python wrapper for vtkSMLiveInsituLinkProxy
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
#include "vtkSMLiveInsituLinkProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMLiveInsituLinkProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMLiveInsituLinkProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMLiveInsituLinkProxy_Doc =
  "vtkSMLiveInsituLinkProxy - Performs additional operation on the Live\nclient\n\n"
  "Superclass: vtkSMProxy\n\n"
  "Besides setting or getting parameters from its object\n"
  "(vtkSMLiveInsituLink) it receives paraview state from its object and\n"
  "applies it to the InsituProxyManager as well as sending modified\n"
  "paraview state to its object.@ingroup LiveInsitu\n\n";


static PyObject *
PyvtkSMLiveInsituLinkProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMLiveInsituLinkProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMLiveInsituLinkProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMLiveInsituLinkProxy *tempr = vtkSMLiveInsituLinkProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMLiveInsituLinkProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMLiveInsituLinkProxy::NewInstance());

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
PyvtkSMLiveInsituLinkProxy_GetInsituProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsituProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetInsituProxyManager() :
      op->vtkSMLiveInsituLinkProxy::GetInsituProxyManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_SetInsituProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsituProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
  {
    if (ap.IsBound())
    {
      op->SetInsituProxyManager(temp0);
    }
    else
    {
      op->vtkSMLiveInsituLinkProxy::SetInsituProxyManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_HasExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->HasExtract(temp0, temp1, temp2) :
      op->vtkSMLiveInsituLinkProxy::HasExtract(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_CreateExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateExtract(temp0, temp1, temp2) :
      op->vtkSMLiveInsituLinkProxy::CreateExtract(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_RemoveExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveExtract(temp0);
    }
    else
    {
      op->vtkSMLiveInsituLinkProxy::RemoveExtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_LiveChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LiveChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LiveChanged();
    }
    else
    {
      op->vtkSMLiveInsituLinkProxy::LiveChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkSMLiveInsituLinkProxy::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

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
      op->vtkSMLiveInsituLinkProxy::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLiveInsituLinkProxy_PushUpdatedStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushUpdatedStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLiveInsituLinkProxy *op = static_cast<vtkSMLiveInsituLinkProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushUpdatedStates();
    }
    else
    {
      op->vtkSMLiveInsituLinkProxy::PushUpdatedStates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMLiveInsituLinkProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMLiveInsituLinkProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMLiveInsituLinkProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMLiveInsituLinkProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMLiveInsituLinkProxy\nC++: static vtkSMLiveInsituLinkProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMLiveInsituLinkProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMLiveInsituLinkProxy\nC++: vtkSMLiveInsituLinkProxy *NewInstance()\n\n"},
  {"GetInsituProxyManager", PyvtkSMLiveInsituLinkProxy_GetInsituProxyManager, METH_VARARGS,
   "V.GetInsituProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetInsituProxyManager()\n\nProvides access to the a dummy proxy manager representing the\ninsitu visualization pipeline.\n"},
  {"SetInsituProxyManager", PyvtkSMLiveInsituLinkProxy_SetInsituProxyManager, METH_VARARGS,
   "V.SetInsituProxyManager(vtkSMSessionProxyManager)\nC++: void SetInsituProxyManager(vtkSMSessionProxyManager *)\n\nProvides access to the a dummy proxy manager representing the\ninsitu visualization pipeline.\n"},
  {"HasExtract", PyvtkSMLiveInsituLinkProxy_HasExtract, METH_VARARGS,
   "V.HasExtract(string, string, int) -> bool\nC++: bool HasExtract(const char *reg_group, const char *reg_name,\n    int port_number)\n\n"},
  {"CreateExtract", PyvtkSMLiveInsituLinkProxy_CreateExtract, METH_VARARGS,
   "V.CreateExtract(string, string, int) -> vtkSMProxy\nC++: vtkSMProxy *CreateExtract(const char *reg_group,\n    const char *reg_name, int port_number)\n\n"},
  {"RemoveExtract", PyvtkSMLiveInsituLinkProxy_RemoveExtract, METH_VARARGS,
   "V.RemoveExtract(vtkSMProxy)\nC++: void RemoveExtract(vtkSMProxy *)\n\n"},
  {"LiveChanged", PyvtkSMLiveInsituLinkProxy_LiveChanged, METH_VARARGS,
   "V.LiveChanged()\nC++: void LiveChanged()\n\nWakes up Insitu side if simulation is paused. Handles correctly\nseveral calls on the LIVE side.\n"},
  {"GetTimeStep", PyvtkSMLiveInsituLinkProxy_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: vtkIdType GetTimeStep()\n\nWakes up Insitu side if simulation is paused. Handles correctly\nseveral calls on the LIVE side.\n"},
  {"LoadState", PyvtkSMLiveInsituLinkProxy_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nOverridden to handle server-notification messages.\n"},
  {"PushUpdatedStates", PyvtkSMLiveInsituLinkProxy_PushUpdatedStates, METH_VARARGS,
   "V.PushUpdatedStates()\nC++: void PushUpdatedStates()\n\nPush updated states from the client to the server in aggregate\n(originally, when the simulation was paused, multiple partial\nupdates were pushed, resulting in the connection between client\nand server to sever).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMLiveInsituLinkProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMLiveInsituLinkProxy", // tp_name
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
  PyvtkSMLiveInsituLinkProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMLiveInsituLinkProxy_StaticNew()
{
  return vtkSMLiveInsituLinkProxy::New();
}

PyObject *PyvtkSMLiveInsituLinkProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMLiveInsituLinkProxy_Type, PyvtkSMLiveInsituLinkProxy_Methods,
    "vtkSMLiveInsituLinkProxy",
 &PyvtkSMLiveInsituLinkProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMLiveInsituLinkProxy_Type;

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

void PyVTKAddFile_vtkSMLiveInsituLinkProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMLiveInsituLinkProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMLiveInsituLinkProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

