// python wrapper for vtkSMRemoteObjectUpdateUndoElement
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
#include "vtkSMRemoteObjectUpdateUndoElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRemoteObjectUpdateUndoElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRemoteObjectUpdateUndoElement_ClassNew(); }

#ifndef DECLARED_PyvtkSMUndoElement_ClassNew
extern "C" { PyObject *PyvtkSMUndoElement_ClassNew(); }
#define DECLARED_PyvtkSMUndoElement_ClassNew
#endif

static const char *PyvtkSMRemoteObjectUpdateUndoElement_Doc =
  "vtkSMRemoteObjectUpdateUndoElement - vtkSMRemoteObject undo element.\n\n"
  "Superclass: vtkSMUndoElement\n\n"
  "This class keeps the before and after state of the RemoteObject in\n"
  "the vtkSMMessage form. It works with any proxy and RemoteObject. It\n"
  "is a very generic undoElement.\n\n";


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRemoteObjectUpdateUndoElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRemoteObjectUpdateUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRemoteObjectUpdateUndoElement *tempr = vtkSMRemoteObjectUpdateUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRemoteObjectUpdateUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRemoteObjectUpdateUndoElement::NewInstance());

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
PyvtkSMRemoteObjectUpdateUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMRemoteObjectUpdateUndoElement::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMRemoteObjectUpdateUndoElement::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_SetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  vtkSMProxyLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->SetProxyLocator(temp0);
    }
    else
    {
      op->vtkSMRemoteObjectUpdateUndoElement::SetProxyLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_SetUndoRedoState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoRedoState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMMessage *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->SetUndoRedoState(temp0, temp1);
    }
    else
    {
      op->vtkSMRemoteObjectUpdateUndoElement::SetUndoRedoState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObjectUpdateUndoElement_GetGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObjectUpdateUndoElement *op = static_cast<vtkSMRemoteObjectUpdateUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalId() :
      op->vtkSMRemoteObjectUpdateUndoElement::GetGlobalId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRemoteObjectUpdateUndoElement_Methods[] = {
  {"IsTypeOf", PyvtkSMRemoteObjectUpdateUndoElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRemoteObjectUpdateUndoElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRemoteObjectUpdateUndoElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMRemoteObjectUpdateUndoElement\nC++: static vtkSMRemoteObjectUpdateUndoElement *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRemoteObjectUpdateUndoElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRemoteObjectUpdateUndoElement\nC++: vtkSMRemoteObjectUpdateUndoElement *NewInstance()\n\n"},
  {"Undo", PyvtkSMRemoteObjectUpdateUndoElement_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: int Undo() override;\n\nUndo the operation encapsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {"Redo", PyvtkSMRemoteObjectUpdateUndoElement_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: int Redo() override;\n\nRedo the operation encaspsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {"SetProxyLocator", PyvtkSMRemoteObjectUpdateUndoElement_SetProxyLocator, METH_VARARGS,
   "V.SetProxyLocator(vtkSMProxyLocator)\nC++: virtual void SetProxyLocator(vtkSMProxyLocator *)\n\nSet ProxyLocator to use if any.\n"},
  {"SetUndoRedoState", PyvtkSMRemoteObjectUpdateUndoElement_SetUndoRedoState, METH_VARARGS,
   "V.SetUndoRedoState(vtkSMMessage, vtkSMMessage)\nC++: virtual void SetUndoRedoState(const vtkSMMessage *before,\n    const vtkSMMessage *after)\n\nSet the state of the UndoElement\n"},
  {"GetGlobalId", PyvtkSMRemoteObjectUpdateUndoElement_GetGlobalId, METH_VARARGS,
   "V.GetGlobalId() -> int\nC++: virtual vtkTypeUInt32 GetGlobalId()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRemoteObjectUpdateUndoElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMRemoteObjectUpdateUndoElement", // tp_name
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
  PyvtkSMRemoteObjectUpdateUndoElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMRemoteObjectUpdateUndoElement_StaticNew()
{
  return vtkSMRemoteObjectUpdateUndoElement::New();
}

PyObject *PyvtkSMRemoteObjectUpdateUndoElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRemoteObjectUpdateUndoElement_Type, PyvtkSMRemoteObjectUpdateUndoElement_Methods,
    "vtkSMRemoteObjectUpdateUndoElement",
 &PyvtkSMRemoteObjectUpdateUndoElement_StaticNew);

  PyTypeObject *pytype = &PyvtkSMRemoteObjectUpdateUndoElement_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMUndoElement_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRemoteObjectUpdateUndoElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRemoteObjectUpdateUndoElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRemoteObjectUpdateUndoElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

