// python wrapper for vtkSMGlobalPropertiesLinkUndoElement
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
#include "vtkSMGlobalPropertiesLinkUndoElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMGlobalPropertiesLinkUndoElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMGlobalPropertiesLinkUndoElement_ClassNew(); }

#ifndef DECLARED_PyvtkSMUndoElement_ClassNew
extern "C" { PyObject *PyvtkSMUndoElement_ClassNew(); }
#define DECLARED_PyvtkSMUndoElement_ClassNew
#endif

static const char *PyvtkSMGlobalPropertiesLinkUndoElement_Doc =
  "vtkSMGlobalPropertiesLinkUndoElement - This UndoElement is used to\nlink or unlink GlobalPropertyManager property to a property of an\narbitrary Proxy.\n\n"
  "Superclass: vtkSMUndoElement\n\n"
  "This class is automatically build inside the vtkSMProxyManager when\n"
  "GlobalPropertyLinks are changed. FIXME: This class is currrently\n"
  "non-functional. I need to re-energize this class. It's falling down\n"
  "the priority chain for now.\n\n";


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMGlobalPropertiesLinkUndoElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMGlobalPropertiesLinkUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMGlobalPropertiesLinkUndoElement *tempr = vtkSMGlobalPropertiesLinkUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMGlobalPropertiesLinkUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMGlobalPropertiesLinkUndoElement::NewInstance());

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
PyvtkSMGlobalPropertiesLinkUndoElement_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMGlobalPropertiesLinkUndoElement::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMGlobalPropertiesLinkUndoElement::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGlobalPropertiesLinkUndoElement_SetLinkState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGlobalPropertiesLinkUndoElement *op = static_cast<vtkSMGlobalPropertiesLinkUndoElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkSMProxy *temp2 = nullptr;
  const char *temp3 = nullptr;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetLinkState(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSMGlobalPropertiesLinkUndoElement::SetLinkState(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMGlobalPropertiesLinkUndoElement_Methods[] = {
  {"IsTypeOf", PyvtkSMGlobalPropertiesLinkUndoElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMGlobalPropertiesLinkUndoElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMGlobalPropertiesLinkUndoElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMGlobalPropertiesLinkUndoElement\nC++: static vtkSMGlobalPropertiesLinkUndoElement *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMGlobalPropertiesLinkUndoElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMGlobalPropertiesLinkUndoElement\nC++: vtkSMGlobalPropertiesLinkUndoElement *NewInstance()\n\n"},
  {"Undo", PyvtkSMGlobalPropertiesLinkUndoElement_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: int Undo() override;\n\nUndo the operation encapsulated by this element.\n"},
  {"Redo", PyvtkSMGlobalPropertiesLinkUndoElement_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: int Redo() override;\n\nRedo the operation encaspsulated by this element.\n"},
  {"SetLinkState", PyvtkSMGlobalPropertiesLinkUndoElement_SetLinkState, METH_VARARGS,
   "V.SetLinkState(string, string, vtkSMProxy, string, bool)\nC++: void SetLinkState(const char *mgrname,\n    const char *globalpropname, vtkSMProxy *proxy,\n    const char *propname, bool isAddAction)\n\nProvide the information needed to restore the previous state\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMGlobalPropertiesLinkUndoElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMGlobalPropertiesLinkUndoElement", // tp_name
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
  PyvtkSMGlobalPropertiesLinkUndoElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMGlobalPropertiesLinkUndoElement_StaticNew()
{
  return vtkSMGlobalPropertiesLinkUndoElement::New();
}

PyObject *PyvtkSMGlobalPropertiesLinkUndoElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMGlobalPropertiesLinkUndoElement_Type, PyvtkSMGlobalPropertiesLinkUndoElement_Methods,
    "vtkSMGlobalPropertiesLinkUndoElement",
 &PyvtkSMGlobalPropertiesLinkUndoElement_StaticNew);

  PyTypeObject *pytype = &PyvtkSMGlobalPropertiesLinkUndoElement_Type;

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

void PyVTKAddFile_vtkSMGlobalPropertiesLinkUndoElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMGlobalPropertiesLinkUndoElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMGlobalPropertiesLinkUndoElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

