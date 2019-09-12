// python wrapper for vtkUndoSet
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
#include "vtkUndoSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUndoSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUndoSet_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkUndoSet_Doc =
  "vtkUndoSet - Maintains a collection of vtkUndoElement that can be\nundone/redone in a single step.\n\n"
  "Superclass: vtkObject\n\n"
  "This is a concrete class that stores a collection of vtkUndoElement\n"
  "objects. A vtkUndoSet object represents an atomic undo-redoable\n"
  "operation. It can contain one or more vtkUndoElement objects. When\n"
  "added vtkUndoElement objects to a vtkUndoSet they must be added in\n"
  "the sequence of operation. When undoing the operations are performed\n"
  "in reverse order, while when redoing they are performed in forward\n"
  "order.\n\n"
  "vtkUndoElement, vtkUndoSet and vtkUndoStack form the undo/redo\n"
  "framework core.\n"
  "@sa\n"
  "vtkUndoStack vtkUndoElement\n\n";


static PyObject *
PyvtkUndoSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUndoSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndoSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUndoSet *tempr = vtkUndoSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUndoSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndoSet::NewInstance());

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
PyvtkUndoSet_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkUndoSet::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkUndoSet::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_AddElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  vtkUndoElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
  {
    int tempr = (ap.IsBound() ?
      op->AddElement(temp0) :
      op->vtkUndoSet::AddElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_RemoveElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveElement(temp0);
    }
    else
    {
      op->vtkUndoSet::RemoveElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUndoElement *tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkUndoSet::GetElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_RemoveAllElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllElements();
    }
    else
    {
      op->vtkUndoSet::RemoveAllElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndoSet_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndoSet *op = static_cast<vtkUndoSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkUndoSet::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUndoSet_Methods[] = {
  {"IsTypeOf", PyvtkUndoSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUndoSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUndoSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUndoSet\nC++: static vtkUndoSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUndoSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUndoSet\nC++: vtkUndoSet *NewInstance()\n\n"},
  {"Undo", PyvtkUndoSet_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: virtual int Undo()\n\nPerform an Undo.\n"},
  {"Redo", PyvtkUndoSet_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: virtual int Redo()\n\nPerform a Redo.\n"},
  {"AddElement", PyvtkUndoSet_AddElement, METH_VARARGS,
   "V.AddElement(vtkUndoElement) -> int\nC++: int AddElement(vtkUndoElement *elem)\n\nAdd an element to this set. If the newly added element, elem, and\nthe most recently added element are both Mergeable, then an\nattempt is made to merge the new element with the previous one.\nOn successful merging, the new element is discarded, otherwise it\nis appended to the set.\n\\returns the index at which the element got added/merged.\n"},
  {"RemoveElement", PyvtkUndoSet_RemoveElement, METH_VARARGS,
   "V.RemoveElement(int)\nC++: void RemoveElement(int index)\n\nRemove an element at a particular index.\n"},
  {"GetElement", PyvtkUndoSet_GetElement, METH_VARARGS,
   "V.GetElement(int) -> vtkUndoElement\nC++: vtkUndoElement *GetElement(int index)\n\nGet an element at a particular index\n"},
  {"RemoveAllElements", PyvtkUndoSet_RemoveAllElements, METH_VARARGS,
   "V.RemoveAllElements()\nC++: void RemoveAllElements()\n\nRemove all elemments.\n"},
  {"GetNumberOfElements", PyvtkUndoSet_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: int GetNumberOfElements()\n\nGet number of elements in the set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUndoSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkUndoSet", // tp_name
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
  PyvtkUndoSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUndoSet_StaticNew()
{
  return vtkUndoSet::New();
}

PyObject *PyvtkUndoSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUndoSet_Type, PyvtkUndoSet_Methods,
    "vtkUndoSet",
 &PyvtkUndoSet_StaticNew);

  PyTypeObject *pytype = &PyvtkUndoSet_Type;

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

void PyVTKAddFile_vtkUndoSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUndoSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUndoSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

