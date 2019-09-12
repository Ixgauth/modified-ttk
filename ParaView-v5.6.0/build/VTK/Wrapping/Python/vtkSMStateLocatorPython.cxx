// python wrapper for vtkSMStateLocator
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
#include "vtkSMStateLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMStateLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMStateLocator_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMStateLocator_Doc =
  "vtkSMStateLocator - Class used to retrieve a given message state\nbased on its GlobalID.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMStateLocator allow a hierarchical way of finding a message\n"
  "state.\n\n";


static PyObject *
PyvtkSMStateLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMStateLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStateLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMStateLocator *tempr = vtkSMStateLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStateLocator::NewInstance());

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
PyvtkSMStateLocator_SetParentLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMStateLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStateLocator"))
  {
    if (ap.IsBound())
    {
      op->SetParentLocator(temp0);
    }
    else
    {
      op->vtkSMStateLocator::SetParentLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_GetParentLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->GetParentLocator() :
      op->vtkSMStateLocator::GetParentLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_InitGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMSession *temp0 = nullptr;
  vtkUndoStack *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetVTKObject(temp1, "vtkUndoStack"))
  {
    if (ap.IsBound())
    {
      op->InitGarbageCollector(temp0, temp1);
    }
    else
    {
      op->vtkSMStateLocator::InitGarbageCollector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_FindState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  vtkSMMessage *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMMessage") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->FindState(temp0, temp1, temp2) :
      op->vtkSMStateLocator::FindState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_RegisterState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->RegisterState(temp0);
    }
    else
    {
      op->vtkSMStateLocator::RegisterState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_UnRegisterState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UnRegisterState(temp0, temp1);
    }
    else
    {
      op->vtkSMStateLocator::UnRegisterState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_UnRegisterAllStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAllStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterAllStates(temp0);
    }
    else
    {
      op->vtkSMStateLocator::UnRegisterAllStates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_IsStateLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStateLocal(temp0) :
      op->vtkSMStateLocator::IsStateLocal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_IsStateAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStateAvailable(temp0) :
      op->vtkSMStateLocator::IsStateAvailable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLocator_RegisterFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLocator *op = static_cast<vtkSMStateLocator *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RegisterFullState(temp0);
    }
    else
    {
      op->vtkSMStateLocator::RegisterFullState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMStateLocator_Methods[] = {
  {"IsTypeOf", PyvtkSMStateLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMStateLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMStateLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMStateLocator\nC++: static vtkSMStateLocator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMStateLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMStateLocator\nC++: vtkSMStateLocator *NewInstance()\n\n"},
  {"SetParentLocator", PyvtkSMStateLocator_SetParentLocator, METH_VARARGS,
   "V.SetParentLocator(vtkSMStateLocator)\nC++: virtual void SetParentLocator(vtkSMStateLocator *_arg)\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {"GetParentLocator", PyvtkSMStateLocator_GetParentLocator, METH_VARARGS,
   "V.GetParentLocator() -> vtkSMStateLocator\nC++: virtual vtkSMStateLocator *GetParentLocator()\n\nSet/Get a parent locator to search which is used as a backup\nlocation to search from if a given state was not found locally.\n"},
  {"InitGarbageCollector", PyvtkSMStateLocator_InitGarbageCollector, METH_VARARGS,
   "V.InitGarbageCollector(vtkSMSession, vtkUndoStack)\nC++: void InitGarbageCollector(vtkSMSession *, vtkUndoStack *)\n\nBy initializing the garabage collector the stored state get\nremoved once their is no more chance for them to be reused inside\nthe session.\n"},
  {"FindState", PyvtkSMStateLocator_FindState, METH_VARARGS,
   "V.FindState(int, vtkSMMessage, bool) -> bool\nC++: virtual bool FindState(vtkTypeUInt32 globalID,\n    vtkSMMessage *stateToFill, bool useParent=true)\n\nFill the provided State message with the state found inside the\ncurrent locator or one of its parent. The method return true if\nthe state was successfully filled. The \"useParent\" flag allow to\ndisable parent lookup but by default it is set to true.\n"},
  {"RegisterState", PyvtkSMStateLocator_RegisterState, METH_VARARGS,
   "V.RegisterState(vtkSMMessage)\nC++: virtual void RegisterState(const vtkSMMessage *state)\n\nRegister the given state in the current locator. If a previous\nstate was available, the new one will replace it.\n"},
  {"UnRegisterState", PyvtkSMStateLocator_UnRegisterState, METH_VARARGS,
   "V.UnRegisterState(int, bool)\nC++: virtual void UnRegisterState(vtkTypeUInt32 globalID,\n    bool force)\n\nRemove a state for a given proxy inside the local locator. if\nforce is true, it will also remove it from its hierarchical\nparents.\n"},
  {"UnRegisterAllStates", PyvtkSMStateLocator_UnRegisterAllStates, METH_VARARGS,
   "V.UnRegisterAllStates(bool)\nC++: virtual void UnRegisterAllStates(bool force)\n\nRemove all the registered states if force is true, it will also\nremove it from its hierarchical parents.\n"},
  {"IsStateLocal", PyvtkSMStateLocator_IsStateLocal, METH_VARARGS,
   "V.IsStateLocal(int) -> bool\nC++: virtual bool IsStateLocal(vtkTypeUInt32 globalID)\n\nReturn true if the given state can be found locally whitout the\nhelp of on the hierarchical parent\n"},
  {"IsStateAvailable", PyvtkSMStateLocator_IsStateAvailable, METH_VARARGS,
   "V.IsStateAvailable(int) -> bool\nC++: virtual bool IsStateAvailable(vtkTypeUInt32 globalID)\n\nReturn true if the given state do exist in the locator hierarchy\n"},
  {"RegisterFullState", PyvtkSMStateLocator_RegisterFullState, METH_VARARGS,
   "V.RegisterFullState(vtkSMProxy)\nC++: virtual void RegisterFullState(vtkSMProxy *proxy)\n\nRegister the given proxy state as well as all its sub-proxy state\nso if that proxy need to be renew all its sub-proxy will be renew\nin the exact same state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMStateLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMStateLocator", // tp_name
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
  PyvtkSMStateLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMStateLocator_StaticNew()
{
  return vtkSMStateLocator::New();
}

PyObject *PyvtkSMStateLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMStateLocator_Type, PyvtkSMStateLocator_Methods,
    "vtkSMStateLocator",
 &PyvtkSMStateLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMStateLocator_Type;

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

void PyVTKAddFile_vtkSMStateLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMStateLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMStateLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

