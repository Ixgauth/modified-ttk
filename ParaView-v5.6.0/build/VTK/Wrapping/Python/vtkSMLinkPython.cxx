// python wrapper for vtkSMLink
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
#include "vtkSMLink.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMLink(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMLink_ClassNew(); }

#ifndef DECLARED_PyvtkSMRemoteObject_ClassNew
extern "C" { PyObject *PyvtkSMRemoteObject_ClassNew(); }
#define DECLARED_PyvtkSMRemoteObject_ClassNew
#endif

static const char *PyvtkSMLink_Doc =
  "vtkSMLink - Abstract base class for proxy/property links.\n\n"
  "Superclass: vtkSMRemoteObject\n\n"
  "Abstract base class for proxy/property links. Links provide a means\n"
  "to connect two properties(or proxies) together, thus when one is\n"
  "updated, the dependent one is also updated accordingly.\n\n";

static PyTypeObject PyvtkSMLink_UpdateDirections_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMLink.UpdateDirections", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMLink_UpdateDirections_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMLink_UpdateDirections_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMLink_UpdateDirections_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMLink_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMLink *tempr = vtkSMLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMLink::NewInstance());

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
PyvtkSMLink_SetPropagateUpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropagateUpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropagateUpdateVTKObjects(temp0);
    }
    else
    {
      op->vtkSMLink::SetPropagateUpdateVTKObjects(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_GetPropagateUpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropagateUpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropagateUpdateVTKObjects() :
      op->vtkSMLink::GetPropagateUpdateVTKObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_PropagateUpdateVTKObjectsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateVTKObjectsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropagateUpdateVTKObjectsOn();
    }
    else
    {
      op->vtkSMLink::PropagateUpdateVTKObjectsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_PropagateUpdateVTKObjectsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateVTKObjectsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropagateUpdateVTKObjectsOff();
    }
    else
    {
      op->vtkSMLink::PropagateUpdateVTKObjectsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkSMLink::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkSMLink::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->RemoveAllLinks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMLink::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

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
      op->vtkSMLink::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_UpdateState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->UpdateState();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_GetNumberOfLinkedObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetNumberOfLinkedObjects();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_GetLinkedObjectDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedObjectDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetLinkedObjectDirection(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLink_GetLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLink *op = static_cast<vtkSMLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = op->GetLinkedProxy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMLink_Methods[] = {
  {"IsTypeOf", PyvtkSMLink_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMLink_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMLink_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMLink\nC++: static vtkSMLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMLink_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMLink\nC++: vtkSMLink *NewInstance()\n\n"},
  {"SetPropagateUpdateVTKObjects", PyvtkSMLink_SetPropagateUpdateVTKObjects, METH_VARARGS,
   "V.SetPropagateUpdateVTKObjects(int)\nC++: virtual void SetPropagateUpdateVTKObjects(int _arg)\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {"GetPropagateUpdateVTKObjects", PyvtkSMLink_GetPropagateUpdateVTKObjects, METH_VARARGS,
   "V.GetPropagateUpdateVTKObjects() -> int\nC++: virtual int GetPropagateUpdateVTKObjects()\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {"PropagateUpdateVTKObjectsOn", PyvtkSMLink_PropagateUpdateVTKObjectsOn, METH_VARARGS,
   "V.PropagateUpdateVTKObjectsOn()\nC++: virtual void PropagateUpdateVTKObjectsOn()\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {"PropagateUpdateVTKObjectsOff", PyvtkSMLink_PropagateUpdateVTKObjectsOff, METH_VARARGS,
   "V.PropagateUpdateVTKObjectsOff()\nC++: virtual void PropagateUpdateVTKObjectsOff()\n\nThis flag determines if UpdateVTKObjects calls are to be\npropagated. Set to 1 by default.\n"},
  {"SetEnabled", PyvtkSMLink_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool _arg)\n\nGet/Set if the link is enabled. (true by default).\n"},
  {"GetEnabled", PyvtkSMLink_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nGet/Set if the link is enabled. (true by default).\n"},
  {"RemoveAllLinks", PyvtkSMLink_RemoveAllLinks, METH_VARARGS,
   "V.RemoveAllLinks()\nC++: virtual void RemoveAllLinks()\n\nRemove all links.\n"},
  {"GetFullState", PyvtkSMLink_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: const vtkSMMessage *GetFullState() override;\n\nThis method returns the full object state that can be used to\ncreate the object from scratch. This method will be used to fill\nthe undo stack. If not overridden this will return NULL.\n"},
  {"LoadState", PyvtkSMLink_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialize the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalIDs set. This enables splitting the load\nprocess in 2 step to prevent invalid state when a property refers\nto a sub-proxy that does not exist yet.\n"},
  {"UpdateState", PyvtkSMLink_UpdateState, METH_VARARGS,
   "V.UpdateState()\nC++: virtual void UpdateState()\n\nUpdate the internal protobuf state\n"},
  {"GetNumberOfLinkedObjects", PyvtkSMLink_GetNumberOfLinkedObjects, METH_VARARGS,
   "V.GetNumberOfLinkedObjects() -> int\nC++: virtual unsigned int GetNumberOfLinkedObjects()\n\nGet the number of object that are involved in this link.\n"},
  {"GetLinkedObjectDirection", PyvtkSMLink_GetLinkedObjectDirection, METH_VARARGS,
   "V.GetLinkedObjectDirection(int) -> int\nC++: virtual int GetLinkedObjectDirection(int index)\n\nGet the direction of a object involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {"GetLinkedProxy", PyvtkSMLink_GetLinkedProxy, METH_VARARGS,
   "V.GetLinkedProxy(int) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetLinkedProxy(int index)\n\nGet a proxy involved in this link.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMLink", // tp_name
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
  PyvtkSMLink_Doc, // tp_doc
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

PyObject *PyvtkSMLink_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMLink_Type, PyvtkSMLink_Methods,
    "vtkSMLink",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMLink_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRemoteObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMLink_UpdateDirections_Type);
  PyvtkSMLink_UpdateDirections_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMLink_UpdateDirections_Type);

  o = (PyObject *)&PyvtkSMLink_UpdateDirections_Type;
  if (PyDict_SetItemString(d, "UpdateDirections", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMLink::UpdateDirections cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NONE", vtkSMLink::NONE },
        { "INPUT", vtkSMLink::INPUT },
        { "OUTPUT", vtkSMLink::OUTPUT },
      };

    o = PyvtkSMLink_UpdateDirections_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

