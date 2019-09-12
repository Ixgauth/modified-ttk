// python wrapper for vtkSMComparativeAnimationCueUndoElement
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
#include "vtkSMComparativeAnimationCueUndoElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMComparativeAnimationCueUndoElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMComparativeAnimationCueUndoElement_ClassNew(); }

#ifndef DECLARED_PyvtkSMUndoElement_ClassNew
extern "C" { PyObject *PyvtkSMUndoElement_ClassNew(); }
#define DECLARED_PyvtkSMUndoElement_ClassNew
#endif

static const char *PyvtkSMComparativeAnimationCueUndoElement_Doc =
  "vtkSMComparativeAnimationCueUndoElement - UndoElement for\nComparativeAnimationCue\n\n"
  "Superclass: vtkSMUndoElement\n\n"
;


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMComparativeAnimationCueUndoElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMComparativeAnimationCueUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMComparativeAnimationCueUndoElement *tempr = vtkSMComparativeAnimationCueUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMComparativeAnimationCueUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMComparativeAnimationCueUndoElement::NewInstance());

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
PyvtkSMComparativeAnimationCueUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMComparativeAnimationCueUndoElement::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMComparativeAnimationCueUndoElement::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueUndoElement_SetXMLStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueUndoElement *op = static_cast<vtkSMComparativeAnimationCueUndoElement *>(vp);

  unsigned int temp0;
  vtkPVXMLElement *temp1 = nullptr;
  vtkPVXMLElement *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp2, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->SetXMLStates(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMComparativeAnimationCueUndoElement::SetXMLStates(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMComparativeAnimationCueUndoElement_Methods[] = {
  {"IsTypeOf", PyvtkSMComparativeAnimationCueUndoElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMComparativeAnimationCueUndoElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMComparativeAnimationCueUndoElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMComparativeAnimationCueUndoElement\nC++: static vtkSMComparativeAnimationCueUndoElement *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMComparativeAnimationCueUndoElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMComparativeAnimationCueUndoElement\nC++: vtkSMComparativeAnimationCueUndoElement *NewInstance()\n\n"},
  {"Undo", PyvtkSMComparativeAnimationCueUndoElement_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: int Undo() override;\n\nUndo the operation encapsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {"Redo", PyvtkSMComparativeAnimationCueUndoElement_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: int Redo() override;\n\nRedo the operation encaspsulated by this element.\n\\return the status of the operation, 1 on success, 0 otherwise.\n"},
  {"SetXMLStates", PyvtkSMComparativeAnimationCueUndoElement_SetXMLStates, METH_VARARGS,
   "V.SetXMLStates(int, vtkPVXMLElement, vtkPVXMLElement)\nC++: void SetXMLStates(vtkTypeUInt32 id, vtkPVXMLElement *before,\n    vtkPVXMLElement *after)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMComparativeAnimationCueUndoElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMComparativeAnimationCueUndoElement", // tp_name
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
  PyvtkSMComparativeAnimationCueUndoElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMComparativeAnimationCueUndoElement_StaticNew()
{
  return vtkSMComparativeAnimationCueUndoElement::New();
}

PyObject *PyvtkSMComparativeAnimationCueUndoElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMComparativeAnimationCueUndoElement_Type, PyvtkSMComparativeAnimationCueUndoElement_Methods,
    "vtkSMComparativeAnimationCueUndoElement",
 &PyvtkSMComparativeAnimationCueUndoElement_StaticNew);

  PyTypeObject *pytype = &PyvtkSMComparativeAnimationCueUndoElement_Type;

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

void PyVTKAddFile_vtkSMComparativeAnimationCueUndoElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMComparativeAnimationCueUndoElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMComparativeAnimationCueUndoElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

