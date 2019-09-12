// python wrapper for vtkSMUndoStackBuilder
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
#include "vtkSMUndoStackBuilder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMUndoStackBuilder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMUndoStackBuilder_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMUndoStackBuilder_Doc =
  "vtkSMUndoStackBuilder - builds server manager undo sets and pushes\nthem on the undo stack.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMUndoStackBuilder records Server Manager changes that are\n"
  "undo/redo able and collects them. To begin recording such changes one\n"
  "must call Begin(). To end recording use End(). One can have multiple\n"
  "blocks of Begin-End before pushing the changes on the Undo Stack. To\n"
  "push all collected changes onto the Undo Stack as a single undoable\n"
  "step, use PushToStack(). Applications can subclass\n"
  "vtkSMUndoStackBuilder to record GUI related changes and add them to\n"
  "the undo stack.\n\n";


static PyObject *
PyvtkSMUndoStackBuilder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMUndoStackBuilder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUndoStackBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMUndoStackBuilder *tempr = vtkSMUndoStackBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUndoStackBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUndoStackBuilder::NewInstance());

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
PyvtkSMUndoStackBuilder_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Begin(temp0);
    }
    else
    {
      op->vtkSMUndoStackBuilder::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkSMUndoStackBuilder::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_EndAndPushToStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAndPushToStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndAndPushToStack();
    }
    else
    {
      op->vtkSMUndoStackBuilder::EndAndPushToStack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_PushToStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushToStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushToStack();
    }
    else
    {
      op->vtkSMUndoStackBuilder::PushToStack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSMUndoStackBuilder::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_Add(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkUndoElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->Add(temp0) :
      op->vtkSMUndoStackBuilder::Add(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_GetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUndoStack *tempr = (ap.IsBound() ?
      op->GetUndoStack() :
      op->vtkSMUndoStackBuilder::GetUndoStack());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_SetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkSMUndoStack *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMUndoStack"))
  {
    if (ap.IsBound())
    {
      op->SetUndoStack(temp0);
    }
    else
    {
      op->vtkSMUndoStackBuilder::SetUndoStack(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_SetIgnoreAllChanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreAllChanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreAllChanges(temp0);
    }
    else
    {
      op->vtkSMUndoStackBuilder::SetIgnoreAllChanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_GetIgnoreAllChanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreAllChanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreAllChanges() :
      op->vtkSMUndoStackBuilder::GetIgnoreAllChanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_OnStateChange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStateChange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkSMSession *temp0 = nullptr;
  unsigned int temp1;
  vtkSMMessage *temp2 = nullptr;
  vtkSMMessage *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMMessage") &&
      ap.GetVTKObject(temp3, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->OnStateChange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSMUndoStackBuilder::OnStateChange(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStackBuilder_OnCreateObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnCreateObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStackBuilder *op = static_cast<vtkSMUndoStackBuilder *>(vp);

  vtkSMSession *temp0 = nullptr;
  vtkSMMessage *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetVTKObject(temp1, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->OnCreateObject(temp0, temp1);
    }
    else
    {
      op->vtkSMUndoStackBuilder::OnCreateObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMUndoStackBuilder_Methods[] = {
  {"IsTypeOf", PyvtkSMUndoStackBuilder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMUndoStackBuilder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMUndoStackBuilder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMUndoStackBuilder\nC++: static vtkSMUndoStackBuilder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMUndoStackBuilder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMUndoStackBuilder\nC++: vtkSMUndoStackBuilder *NewInstance()\n\n"},
  {"Begin", PyvtkSMUndoStackBuilder_Begin, METH_VARARGS,
   "V.Begin(string)\nC++: virtual void Begin(const char *label)\n\nBegins monitoring of the vtkSMProxyManager for undoable\noperations. All noted actions are converted to UndoElements and\ncollected. One vtkUndoElement is created per action. All undo\nelements become a part of a vtkUndoSet which is pushed on to the\nUndo Stack on PushToStack().label is a suggestion for the UndoSet\nthat will be built. If the UndoSet already has elements implying\nit hasn't been pushed to the stack then the label is ignored.\n"},
  {"End", PyvtkSMUndoStackBuilder_End, METH_VARARGS,
   "V.End()\nC++: virtual void End()\n\nStops monitoring of the vtkSMProxyManager for undoable\noperations. Any changes made to the proxy manager will not be\nconverted to UndoElements. This method does not push the\nvtkUndoSet of undo elements built. One must call PushToStack() to\npush the UndoSet to the Undo stack. Alternatively, one can use\nthe EndAndPushToStack() method which combines End() and\nPushToStack().\n"},
  {"EndAndPushToStack", PyvtkSMUndoStackBuilder_EndAndPushToStack, METH_VARARGS,
   "V.EndAndPushToStack()\nC++: void EndAndPushToStack()\n\nConvenience method call End(); PushToStack(); in that order.\n"},
  {"PushToStack", PyvtkSMUndoStackBuilder_PushToStack, METH_VARARGS,
   "V.PushToStack()\nC++: virtual void PushToStack()\n\nIf any undoable changes were recorded by the builder, this will\npush the vtkUndoSet formed on to the UndoStack. The UndoStack\nwhich the builder is building must be set by using\nSetUndoStack(). If the UndoSet is empty, it is not pushed on the\nstack. After pushing, the UndoSet is cleared so the builder is\nready to collect new modifications.\n"},
  {"Clear", PyvtkSMUndoStackBuilder_Clear, METH_VARARGS,
   "V.Clear()\nC++: virtual void Clear()\n\nDiscard all recorded changes that haven't been pushed on the\nUndoStack.\n"},
  {"Add", PyvtkSMUndoStackBuilder_Add, METH_VARARGS,
   "V.Add(vtkUndoElement) -> bool\nC++: virtual bool Add(vtkUndoElement *element)\n\nOne can add arbitrary elements to the active undo set. It is\nessential that the StateLoader on the UndoStack can handle the\narbitrary undo elements. If that element has been escaped for any\nreason, the method will return false;\n"},
  {"GetUndoStack", PyvtkSMUndoStackBuilder_GetUndoStack, METH_VARARGS,
   "V.GetUndoStack() -> vtkSMUndoStack\nC++: virtual vtkSMUndoStack *GetUndoStack()\n\nGet/Set the undo stack that this builder will build.\n"},
  {"SetUndoStack", PyvtkSMUndoStackBuilder_SetUndoStack, METH_VARARGS,
   "V.SetUndoStack(vtkSMUndoStack)\nC++: virtual void SetUndoStack(vtkSMUndoStack *)\n\nGet/Set the undo stack that this builder will build.\n"},
  {"SetIgnoreAllChanges", PyvtkSMUndoStackBuilder_SetIgnoreAllChanges, METH_VARARGS,
   "V.SetIgnoreAllChanges(bool)\nC++: virtual void SetIgnoreAllChanges(bool _arg)\n\nIf IgnoreAllChanges is true, any server manager changes will be\nignored even if the changes happened within a Begin()-End() call.\nThis provides a mechanism for the application to perform\nnon-undoable operations irrespective of whether a undo set if\nbeing built. By default, it is set to false.\n"},
  {"GetIgnoreAllChanges", PyvtkSMUndoStackBuilder_GetIgnoreAllChanges, METH_VARARGS,
   "V.GetIgnoreAllChanges() -> bool\nC++: virtual bool GetIgnoreAllChanges()\n\nIf IgnoreAllChanges is true, any server manager changes will be\nignored even if the changes happened within a Begin()-End() call.\nThis provides a mechanism for the application to perform\nnon-undoable operations irrespective of whether a undo set if\nbeing built. By default, it is set to false.\n"},
  {"OnStateChange", PyvtkSMUndoStackBuilder_OnStateChange, METH_VARARGS,
   "V.OnStateChange(vtkSMSession, int, vtkSMMessage, vtkSMMessage)\nC++: virtual void OnStateChange(vtkSMSession *session,\n    vtkTypeUInt32 globalId, const vtkSMMessage *previousState,\n    const vtkSMMessage *newState)\n\n"},
  {"OnCreateObject", PyvtkSMUndoStackBuilder_OnCreateObject, METH_VARARGS,
   "V.OnCreateObject(vtkSMSession, vtkSMMessage)\nC++: virtual void OnCreateObject(vtkSMSession *session,\n    vtkSMMessage *newState)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMUndoStackBuilder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMUndoStackBuilder", // tp_name
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
  PyvtkSMUndoStackBuilder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMUndoStackBuilder_StaticNew()
{
  return vtkSMUndoStackBuilder::New();
}

PyObject *PyvtkSMUndoStackBuilder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMUndoStackBuilder_Type, PyvtkSMUndoStackBuilder_Methods,
    "vtkSMUndoStackBuilder",
 &PyvtkSMUndoStackBuilder_StaticNew);

  PyTypeObject *pytype = &PyvtkSMUndoStackBuilder_Type;

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

void PyVTKAddFile_vtkSMUndoStackBuilder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMUndoStackBuilder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMUndoStackBuilder", o) != 0)
  {
    Py_DECREF(o);
  }

}

