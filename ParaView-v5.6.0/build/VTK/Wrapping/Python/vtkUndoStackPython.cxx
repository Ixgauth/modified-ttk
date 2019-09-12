// python wrapper for vtkUndoStack
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
#include "vtkUndoStack.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUndoStack(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUndoStack_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkUndoStack_Doc =
  "vtkUndoStack - undo/redo stack.\n\n"
  "Superclass: vtkObject\n\n"
  "This an undo stack. Each undo/redo-able operation is a vtkUndoSet\n"
  "object. This class fires a vtkCommand::ModifiedEvent when  the\n"
  "undo/redo stack changes.\n\n"
  "On Undo, vtkUndoSet::Undo is called on the vtkUndoSet at the top of\n"
  "the undo stack and the set is pushed onto the top of the redo stack.\n"
  "On Redo, vtkUndoSet::Redo is called on the vtkUndoSet at the top of\n"
  "the redo stack and the set is pushed onto the top of the undo stack.\n"
  "When a vtkUndoSet is pushed on the undo stack, the redo stack is\n"
  "cleared.\n\n"
  "Each undo set are assigned user-readable labels providing information\n"
  "about the operation(s) that will be undone/redone.\n\n"
  "vtkUndoElement, vtkUndoSet and vtkUndoStack form the undo/redo\n"
  "framework core.\n"
  "@sa\n"
  "vtkUndoSet vtkUndoElement\n\n";

static PyTypeObject PyvtkUndoStack_EventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkUndoStack.EventIds", // tp_name
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

PyObject *PyvtkUndoStack_EventIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkUndoStack_EventIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkUndoStack_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkUndoStack_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUndoStack::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndoStack::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUndoStack *tempr = vtkUndoStack::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUndoStack *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndoStack::NewInstance());

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
PyvtkUndoStack_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  const char *temp0 = nullptr;
  vtkUndoSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUndoSet"))
  {
    if (ap.IsBound())
    {
      op->Push(temp0, temp1);
    }
    else
    {
      op->vtkUndoStack::Push(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetUndoSetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoSetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUndoSetLabel(temp0) :
      op->vtkUndoStack::GetUndoSetLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetRedoSetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedoSetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRedoSetLabel(temp0) :
      op->vtkUndoStack::GetRedoSetLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNumberOfUndoSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUndoSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUndoSets() :
      op->vtkUndoStack::GetNumberOfUndoSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNumberOfRedoSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRedoSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRedoSets() :
      op->vtkUndoStack::GetNumberOfRedoSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_CanUndo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CanUndo() :
      op->vtkUndoStack::CanUndo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_CanRedo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanRedo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CanRedo() :
      op->vtkUndoStack::CanRedo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNextUndoSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextUndoSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUndoSet *tempr = (ap.IsBound() ?
      op->GetNextUndoSet() :
      op->vtkUndoStack::GetNextUndoSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetNextRedoSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextRedoSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUndoSet *tempr = (ap.IsBound() ?
      op->GetNextRedoSet() :
      op->vtkUndoStack::GetNextRedoSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkUndoStack::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkUndoStack::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_PopUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopUndoStack();
    }
    else
    {
      op->vtkUndoStack::PopUndoStack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_PopRedoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopRedoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopRedoStack();
    }
    else
    {
      op->vtkUndoStack::PopRedoStack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkUndoStack::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetInUndo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInUndo() :
      op->vtkUndoStack::GetInUndo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetInRedo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInRedo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInRedo() :
      op->vtkUndoStack::GetInRedo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_SetStackDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStackDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStackDepth(temp0);
    }
    else
    {
      op->vtkUndoStack::SetStackDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetStackDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStackDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStackDepthMinValue() :
      op->vtkUndoStack::GetStackDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetStackDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStackDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStackDepthMaxValue() :
      op->vtkUndoStack::GetStackDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoStack_GetStackDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStackDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoStack *op = static_cast<vtkUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStackDepth() :
      op->vtkUndoStack::GetStackDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUndoStack_Methods[] = {
  {"IsTypeOf", PyvtkUndoStack_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUndoStack_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUndoStack_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUndoStack\nC++: static vtkUndoStack *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUndoStack_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUndoStack\nC++: vtkUndoStack *NewInstance()\n\n"},
  {"Push", PyvtkUndoStack_Push, METH_VARARGS,
   "V.Push(string, vtkUndoSet)\nC++: virtual void Push(const char *label, vtkUndoSet *changeSet)\n\nPush an undo set on the Undo stack. This will clear any sets in\nthe Redo stack.\n"},
  {"GetUndoSetLabel", PyvtkUndoStack_GetUndoSetLabel, METH_VARARGS,
   "V.GetUndoSetLabel(int) -> string\nC++: const char *GetUndoSetLabel(unsigned int position)\n\nReturns the label for the set at the given Undo position. 0 is\nthe current undo set, 1 is the one preceding to the current one\nand so on.\n\\returns NULL is no set exists at the given index, otherwise the\n    label\nfor the change set.\n"},
  {"GetRedoSetLabel", PyvtkUndoStack_GetRedoSetLabel, METH_VARARGS,
   "V.GetRedoSetLabel(int) -> string\nC++: const char *GetRedoSetLabel(unsigned int position)\n\nReturns the label for the set at the given Redo position. 0 is\nthe next set to redo, 1 is the one after the next one and so on.\n\\returns NULL is no set exists at the given index, otherwise the\n    label\nfor the change set.\n"},
  {"GetNumberOfUndoSets", PyvtkUndoStack_GetNumberOfUndoSets, METH_VARARGS,
   "V.GetNumberOfUndoSets() -> int\nC++: unsigned int GetNumberOfUndoSets()\n\nReturns the number of sets on the undo stack.\n"},
  {"GetNumberOfRedoSets", PyvtkUndoStack_GetNumberOfRedoSets, METH_VARARGS,
   "V.GetNumberOfRedoSets() -> int\nC++: unsigned int GetNumberOfRedoSets()\n\nReturns the number of sets on the undo stack.\n"},
  {"CanUndo", PyvtkUndoStack_CanUndo, METH_VARARGS,
   "V.CanUndo() -> int\nC++: int CanUndo()\n\nReturns if undo operation can be performed.\n"},
  {"CanRedo", PyvtkUndoStack_CanRedo, METH_VARARGS,
   "V.CanRedo() -> int\nC++: int CanRedo()\n\nReturns if redo operation can be performed.\n"},
  {"GetNextUndoSet", PyvtkUndoStack_GetNextUndoSet, METH_VARARGS,
   "V.GetNextUndoSet() -> vtkUndoSet\nC++: virtual vtkUndoSet *GetNextUndoSet()\n\nGet the UndoSet on the top of the Undo stack, if any.\n"},
  {"GetNextRedoSet", PyvtkUndoStack_GetNextRedoSet, METH_VARARGS,
   "V.GetNextRedoSet() -> vtkUndoSet\nC++: virtual vtkUndoSet *GetNextRedoSet()\n\nGet the UndoSet on the top of the Redo stack, if any.\n"},
  {"Undo", PyvtkUndoStack_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: virtual int Undo()\n\nPerforms an Undo using the set on the top of the undo stack. The\nset is poped from the undo stack and pushed at the top of the\nredo stack. Before undo begins, it fires vtkCommand::StartEvent\nand when undo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {"Redo", PyvtkUndoStack_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: virtual int Redo()\n\nPerforms a Redo using the set on the top of the redo stack. The\nset is poped from the redo stack and pushed at the top of the\nundo stack. Before redo begins, it fires vtkCommand::StartEvent\nand when redo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {"PopUndoStack", PyvtkUndoStack_PopUndoStack, METH_VARARGS,
   "V.PopUndoStack()\nC++: void PopUndoStack()\n\nPop the undo stack. The UndoElement on the top of the undo stack\nis popped from the undo stack and pushed on the redo stack. This\nis same as Undo() except that the vtkUndoElement::Undo() is not\ninvoked.\n"},
  {"PopRedoStack", PyvtkUndoStack_PopRedoStack, METH_VARARGS,
   "V.PopRedoStack()\nC++: void PopRedoStack()\n\nPop the redo stack. The UndoElement on the top of the redo stack\nis popped and then pushed on the undo stack. This is same as\nRedo() except that vtkUndoElement::Redo() is not invoked.\n"},
  {"Clear", PyvtkUndoStack_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nClears all the undo/redo elements from the stack.\n"},
  {"GetInUndo", PyvtkUndoStack_GetInUndo, METH_VARARGS,
   "V.GetInUndo() -> bool\nC++: virtual bool GetInUndo()\n\nReturns if the stack is currently being undone.\n"},
  {"GetInRedo", PyvtkUndoStack_GetInRedo, METH_VARARGS,
   "V.GetInRedo() -> bool\nC++: virtual bool GetInRedo()\n\nReturns if the stack is currently being redone.\n"},
  {"SetStackDepth", PyvtkUndoStack_SetStackDepth, METH_VARARGS,
   "V.SetStackDepth(int)\nC++: virtual void SetStackDepth(int _arg)\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {"GetStackDepthMinValue", PyvtkUndoStack_GetStackDepthMinValue, METH_VARARGS,
   "V.GetStackDepthMinValue() -> int\nC++: virtual int GetStackDepthMinValue()\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {"GetStackDepthMaxValue", PyvtkUndoStack_GetStackDepthMaxValue, METH_VARARGS,
   "V.GetStackDepthMaxValue() -> int\nC++: virtual int GetStackDepthMaxValue()\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {"GetStackDepth", PyvtkUndoStack_GetStackDepth, METH_VARARGS,
   "V.GetStackDepth() -> int\nC++: virtual int GetStackDepth()\n\nGet set the maximum stack depth. As more entries are pushed on\nthe stack, if its size exceeds this limit then old entries will\nbe removed. Default is 10.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUndoStack_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkUndoStack", // tp_name
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
  PyvtkUndoStack_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUndoStack_StaticNew()
{
  return vtkUndoStack::New();
}

PyObject *PyvtkUndoStack_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUndoStack_Type, PyvtkUndoStack_Methods,
    "vtkUndoStack",
 &PyvtkUndoStack_StaticNew);

  PyTypeObject *pytype = &PyvtkUndoStack_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkUndoStack_EventIds_Type);
  PyvtkUndoStack_EventIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkUndoStack_EventIds_Type);

  o = (PyObject *)&PyvtkUndoStack_EventIds_Type;
  if (PyDict_SetItemString(d, "EventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkUndoStack::EventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "UndoSetRemovedEvent", vtkUndoStack::UndoSetRemovedEvent },
        { "UndoSetClearedEvent", vtkUndoStack::UndoSetClearedEvent },
      };

    o = PyvtkUndoStack_EventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUndoStack(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUndoStack_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUndoStack", o) != 0)
  {
    Py_DECREF(o);
  }

}

