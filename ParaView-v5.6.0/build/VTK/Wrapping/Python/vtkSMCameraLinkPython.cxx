// python wrapper for vtkSMCameraLink
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
#include "vtkSMCameraLink.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCameraLink(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCameraLink_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyLink_ClassNew
extern "C" { PyObject *PyvtkSMProxyLink_ClassNew(); }
#define DECLARED_PyvtkSMProxyLink_ClassNew
#endif

static const char *PyvtkSMCameraLink_Doc =
  "vtkSMCameraLink - creates a link between two cameras.\n\n"
  "Superclass: vtkSMProxyLink\n\n"
  "When a link is created between camera A->B, whenever any property on\n"
  "camera A is modified, a property with the same name as the modified\n"
  "property (if any) on camera B is also modified to be the same as the\n"
  "property on the camera A. Similarly whenever camera\n"
  "A->UpdateVTKObjects() is called, B->UpdateVTKObjects() is also fired.\n\n";


static PyObject *
PyvtkSMCameraLink_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCameraLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCameraLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCameraLink *tempr = vtkSMCameraLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCameraLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCameraLink::NewInstance());

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
PyvtkSMCameraLink_SetSynchronizeInteractiveRenders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizeInteractiveRenders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSynchronizeInteractiveRenders(temp0);
    }
    else
    {
      op->vtkSMCameraLink::SetSynchronizeInteractiveRenders(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_GetSynchronizeInteractiveRenders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizeInteractiveRenders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizeInteractiveRenders() :
      op->vtkSMCameraLink::GetSynchronizeInteractiveRenders());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_SynchronizeInteractiveRendersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeInteractiveRendersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeInteractiveRendersOn();
    }
    else
    {
      op->vtkSMCameraLink::SynchronizeInteractiveRendersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_SynchronizeInteractiveRendersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeInteractiveRendersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeInteractiveRendersOff();
    }
    else
    {
      op->vtkSMCameraLink::SynchronizeInteractiveRendersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_AddLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

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
      op->vtkSMCameraLink::AddLinkedProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_RemoveLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

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
      op->vtkSMCameraLink::RemoveLinkedProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_UpdateViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateViews(temp0, temp1);
    }
    else
    {
      op->vtkSMCameraLink::UpdateViews(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraLink *op = static_cast<vtkSMCameraLink *>(vp);

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
      op->vtkSMCameraLink::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCameraLink_Methods[] = {
  {"IsTypeOf", PyvtkSMCameraLink_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCameraLink_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCameraLink_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMCameraLink\nC++: static vtkSMCameraLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCameraLink_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCameraLink\nC++: vtkSMCameraLink *NewInstance()\n\n"},
  {"SetSynchronizeInteractiveRenders", PyvtkSMCameraLink_SetSynchronizeInteractiveRenders, METH_VARARGS,
   "V.SetSynchronizeInteractiveRenders(int)\nC++: virtual void SetSynchronizeInteractiveRenders(int _arg)\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {"GetSynchronizeInteractiveRenders", PyvtkSMCameraLink_GetSynchronizeInteractiveRenders, METH_VARARGS,
   "V.GetSynchronizeInteractiveRenders() -> int\nC++: virtual int GetSynchronizeInteractiveRenders()\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {"SynchronizeInteractiveRendersOn", PyvtkSMCameraLink_SynchronizeInteractiveRendersOn, METH_VARARGS,
   "V.SynchronizeInteractiveRendersOn()\nC++: virtual void SynchronizeInteractiveRendersOn()\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {"SynchronizeInteractiveRendersOff", PyvtkSMCameraLink_SynchronizeInteractiveRendersOff, METH_VARARGS,
   "V.SynchronizeInteractiveRendersOff()\nC++: virtual void SynchronizeInteractiveRendersOff()\n\nGet/Set if the link should synchronize interactive renders as\nwell. On by default.\n"},
  {"AddLinkedProxy", PyvtkSMCameraLink_AddLinkedProxy, METH_VARARGS,
   "V.AddLinkedProxy(vtkSMProxy, int)\nC++: void AddLinkedProxy(vtkSMProxy *proxy, int updateDir)\n    override;\n\nAdd a property to the link. updateDir determines whether a\nproperty of the proxy is read or written. When a property of an\ninput proxy changes, it's value is pushed to all other output\nproxies in the link. A proxy can be set to be both input and\noutput by setting updateDir to INPUT | OUTPUT\n"},
  {"RemoveLinkedProxy", PyvtkSMCameraLink_RemoveLinkedProxy, METH_VARARGS,
   "V.RemoveLinkedProxy(vtkSMProxy)\nC++: void RemoveLinkedProxy(vtkSMProxy *proxy) override;\n\nRemove a linked proxy.\n"},
  {"UpdateViews", PyvtkSMCameraLink_UpdateViews, METH_VARARGS,
   "V.UpdateViews(vtkSMProxy, bool)\nC++: virtual void UpdateViews(vtkSMProxy *caller,\n    bool interactive)\n\nUpdate all the views linked with an OUTPUT direction.interactive\nindicates if the render is interactive or not.\n"},
  {"LoadState", PyvtkSMCameraLink_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCameraLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMCameraLink", // tp_name
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
  PyvtkSMCameraLink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCameraLink_StaticNew()
{
  return vtkSMCameraLink::New();
}

PyObject *PyvtkSMCameraLink_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCameraLink_Type, PyvtkSMCameraLink_Methods,
    "vtkSMCameraLink",
 &PyvtkSMCameraLink_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCameraLink_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxyLink_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMCameraLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCameraLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCameraLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

