// python wrapper for vtkUndoElement
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
#include "vtkUndoElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUndoElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUndoElement_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkUndoElement_Doc =
  "vtkUndoElement - unit undo-redo-able operation.\n\n"
  "Superclass: vtkObject\n\n"
  "This is an abstract class that defines the API for an undo-redo-able\n"
  "operation. One or more vtkUndoElement objects can define a single\n"
  "undo-redo step. Every concrete implementation of this class must know\n"
  "how to undo as well as redo the operation, and save and load the\n"
  "state as an XML.\n\n"
  "vtkUndoElement, vtkUndoSet and vtkUndoStack form the undo/redo\n"
  "framework core.\n"
  "@sa\n"
  "vtkUndoStack vtkUndoSet\n\n";


static PyObject *
PyvtkUndoElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUndoElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUndoElement *tempr = vtkUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndoElement::NewInstance());

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
PyvtkUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->Undo();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->Redo();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_GetMergeable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeable() :
      op->vtkUndoElement::GetMergeable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  vtkUndoElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->Merge(temp0) :
      op->vtkUndoElement::Merge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoElement_SetUndoSetWorkingContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoSetWorkingContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoElement *op = static_cast<vtkUndoElement *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetUndoSetWorkingContext(temp0);
    }
    else
    {
      op->vtkUndoElement::SetUndoSetWorkingContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUndoElement_Methods[] = {
  {"IsTypeOf", PyvtkUndoElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUndoElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUndoElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUndoElement\nC++: static vtkUndoElement *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUndoElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUndoElement\nC++: vtkUndoElement *NewInstance()\n\n"},
  {"Undo", PyvtkUndoElement_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: virtual int Undo()\n\nUndo the operation encapsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {"Redo", PyvtkUndoElement_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: virtual int Redo()\n\nRedo the operation encaspsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {"GetMergeable", PyvtkUndoElement_GetMergeable, METH_VARARGS,
   "V.GetMergeable() -> bool\nC++: virtual bool GetMergeable()\n\nReturns if this undo element can be merged with other undo\nelements. When an undo element is added to a vtkUndoSet unsing\nAddElement, an attempt is made to \"merge\" the element with the\nmost recently added undo element, if any, if both the undo\nelements are mergeable.\n"},
  {"Merge", PyvtkUndoElement_Merge, METH_VARARGS,
   "V.Merge(vtkUndoElement) -> bool\nC++: virtual bool Merge(vtkUndoElement *new_element)\n\nCalled on the older element in the UndoSet to merge with the\nelement being added if  both the elements are mergeable. Returns\nif the merge was successful. Default implementation doesn't do\nanything.\n"},
  {"SetUndoSetWorkingContext", PyvtkUndoElement_SetUndoSetWorkingContext, METH_VARARGS,
   "V.SetUndoSetWorkingContext(vtkCollection)\nC++: virtual void SetUndoSetWorkingContext(vtkCollection *workCTX)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUndoElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkUndoElement", // tp_name
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
  PyvtkUndoElement_Doc, // tp_doc
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

PyObject *PyvtkUndoElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUndoElement_Type, PyvtkUndoElement_Methods,
    "vtkUndoElement",
 nullptr);

  PyTypeObject *pytype = &PyvtkUndoElement_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUndoElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUndoElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUndoElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

