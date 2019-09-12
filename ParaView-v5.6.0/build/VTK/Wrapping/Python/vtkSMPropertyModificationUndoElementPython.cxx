// python wrapper for vtkSMPropertyModificationUndoElement
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
#include "vtkSMPropertyModificationUndoElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPropertyModificationUndoElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPropertyModificationUndoElement_ClassNew(); }

#ifndef DECLARED_PyvtkSMUndoElement_ClassNew
extern "C" { PyObject *PyvtkSMUndoElement_ClassNew(); }
#define DECLARED_PyvtkSMUndoElement_ClassNew
#endif

static const char *PyvtkSMPropertyModificationUndoElement_Doc =
  "vtkSMPropertyModificationUndoElement - This is the concrete\nimplementation for the Undo element for a property modification event.\n\n"
  "Superclass: vtkSMUndoElement\n\n"
  "The undo action sets the property to the value that was pushed on to\n"
  "the server previous to the modification. The redo action sets the\n"
  "property to the modified value.\n\n";


static PyObject *
PyvtkSMPropertyModificationUndoElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPropertyModificationUndoElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyModificationUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPropertyModificationUndoElement *tempr = vtkSMPropertyModificationUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPropertyModificationUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyModificationUndoElement::NewInstance());

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
PyvtkSMPropertyModificationUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMPropertyModificationUndoElement::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMPropertyModificationUndoElement::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_ModifiedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModifiedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ModifiedProperty(temp0, temp1);
    }
    else
    {
      op->vtkSMPropertyModificationUndoElement::ModifiedProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyModificationUndoElement_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyModificationUndoElement *op = static_cast<vtkSMPropertyModificationUndoElement *>(vp);

  vtkUndoElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUndoElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->Merge(temp0) :
      op->vtkSMPropertyModificationUndoElement::Merge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyModificationUndoElement_Methods[] = {
  {"IsTypeOf", PyvtkSMPropertyModificationUndoElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPropertyModificationUndoElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPropertyModificationUndoElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMPropertyModificationUndoElement\nC++: static vtkSMPropertyModificationUndoElement *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPropertyModificationUndoElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPropertyModificationUndoElement\nC++: vtkSMPropertyModificationUndoElement *NewInstance()\n\n"},
  {"Undo", PyvtkSMPropertyModificationUndoElement_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: int Undo() override;\n\nUndo the operation encapsulated by this element.\n"},
  {"Redo", PyvtkSMPropertyModificationUndoElement_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: int Redo() override;\n\nRedo the operation encaspsulated by this element.\n"},
  {"ModifiedProperty", PyvtkSMPropertyModificationUndoElement_ModifiedProperty, METH_VARARGS,
   "V.ModifiedProperty(vtkSMProxy, string)\nC++: void ModifiedProperty(vtkSMProxy *proxy,\n    const char *propertyname)\n\nSet the property/proxy that was modified.\n"},
  {"Merge", PyvtkSMPropertyModificationUndoElement_Merge, METH_VARARGS,
   "V.Merge(vtkUndoElement) -> bool\nC++: bool Merge(vtkUndoElement *new_element) override;\n\nCalled on the older element in the UndoSet to merge with the\nelement being added if  both the elements are mergeable.\nvtkSMPropertyModificationUndoElement is mergeable with\nvtkSMPropertyModificationUndoElement alone if both represent\nchange to the same property. Returns if the merge was successful.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPropertyModificationUndoElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMPropertyModificationUndoElement", // tp_name
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
  PyvtkSMPropertyModificationUndoElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPropertyModificationUndoElement_StaticNew()
{
  return vtkSMPropertyModificationUndoElement::New();
}

PyObject *PyvtkSMPropertyModificationUndoElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPropertyModificationUndoElement_Type, PyvtkSMPropertyModificationUndoElement_Methods,
    "vtkSMPropertyModificationUndoElement",
 &PyvtkSMPropertyModificationUndoElement_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPropertyModificationUndoElement_Type;

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

void PyVTKAddFile_vtkSMPropertyModificationUndoElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPropertyModificationUndoElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPropertyModificationUndoElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

