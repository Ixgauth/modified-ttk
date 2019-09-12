// python wrapper for vtkSMPipelineState
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
#include "vtkSMPipelineState.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPipelineState(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPipelineState_ClassNew(); }

#ifndef DECLARED_PyvtkSMRemoteObject_ClassNew
extern "C" { PyObject *PyvtkSMRemoteObject_ClassNew(); }
#define DECLARED_PyvtkSMRemoteObject_ClassNew
#endif

static const char *PyvtkSMPipelineState_Doc =
  "vtkSMPipelineState - class that manage the state of the processing\npipeline\n\n"
  "Superclass: vtkSMRemoteObject\n\n"
  "This class is used to provide a RemoteObject API to the\n"
  "vtkSMProxyManager which allow Undo/Redo and state sharing across\n"
  "several ParaView clients. Basically, we expose the state management\n"
  "API of RemoteObject to handle registration and unregistration of\n"
  "proxies.\n\n";


static PyObject *
PyvtkSMPipelineState_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPipelineState::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPipelineState_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPipelineState::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPipelineState_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPipelineState *tempr = vtkSMPipelineState::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPipelineState_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPipelineState *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPipelineState::NewInstance());

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
PyvtkSMPipelineState_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMPipelineState::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPipelineState_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

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
      op->vtkSMPipelineState::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPipelineState_ValidateState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPipelineState *op = static_cast<vtkSMPipelineState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ValidateState();
    }
    else
    {
      op->vtkSMPipelineState::ValidateState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPipelineState_Methods[] = {
  {"IsTypeOf", PyvtkSMPipelineState_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPipelineState_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPipelineState_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPipelineState\nC++: static vtkSMPipelineState *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPipelineState_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPipelineState\nC++: vtkSMPipelineState *NewInstance()\n\n"},
  {"GetFullState", PyvtkSMPipelineState_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: const vtkSMMessage *GetFullState() override;\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overridden this will return NULL.\n"},
  {"LoadState", PyvtkSMPipelineState_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\n"},
  {"ValidateState", PyvtkSMPipelineState_ValidateState, METH_VARARGS,
   "V.ValidateState()\nC++: void ValidateState()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPipelineState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMPipelineState", // tp_name
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
  PyvtkSMPipelineState_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPipelineState_StaticNew()
{
  return vtkSMPipelineState::New();
}

PyObject *PyvtkSMPipelineState_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPipelineState_Type, PyvtkSMPipelineState_Methods,
    "vtkSMPipelineState",
 &PyvtkSMPipelineState_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPipelineState_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRemoteObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPipelineState(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPipelineState_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPipelineState", o) != 0)
  {
    Py_DECREF(o);
  }

}

