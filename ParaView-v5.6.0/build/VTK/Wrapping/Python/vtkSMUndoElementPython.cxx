// python wrapper for vtkSMUndoElement
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
#include "vtkSMUndoElement.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMUndoElement(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMUndoElement_ClassNew(); }

#ifndef DECLARED_PyvtkUndoElement_ClassNew
extern "C" { PyObject *PyvtkUndoElement_ClassNew(); }
#define DECLARED_PyvtkUndoElement_ClassNew
#endif

static const char *PyvtkSMUndoElement_Doc =
  "vtkSMUndoElement - abstract superclass for Server Manager undo\nelements.\n\n"
  "Superclass: vtkUndoElement\n\n"
  "Abstract superclass for Server Manager undo elements. This class\n"
  "keeps the session, so undoelement could work across a set of\n"
  "communication Sessions.\n\n";


static PyObject *
PyvtkSMUndoElement_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMUndoElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUndoElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoElement_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMUndoElement *tempr = vtkSMUndoElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUndoElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUndoElement::NewInstance());

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
PyvtkSMUndoElement_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMUndoElement::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoElement_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkSMUndoElement::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoElement_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoElement *op = static_cast<vtkSMUndoElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMUndoElement::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMUndoElement_Methods[] = {
  {"IsTypeOf", PyvtkSMUndoElement_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMUndoElement_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMUndoElement_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMUndoElement\nC++: static vtkSMUndoElement *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMUndoElement_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMUndoElement\nC++: vtkSMUndoElement *NewInstance()\n\n"},
  {"GetSession", PyvtkSMUndoElement_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkSMSession\nC++: virtual vtkSMSession *GetSession()\n\n"},
  {"SetSession", PyvtkSMUndoElement_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\n"},
  {"GetSessionProxyManager", PyvtkSMUndoElement_GetSessionProxyManager, METH_VARARGS,
   "V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: virtual vtkSMSessionProxyManager *GetSessionProxyManager()\n\nReturn the corresponding ProxyManager if any.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMUndoElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMUndoElement", // tp_name
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
  PyvtkSMUndoElement_Doc, // tp_doc
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

PyObject *PyvtkSMUndoElement_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMUndoElement_Type, PyvtkSMUndoElement_Methods,
    "vtkSMUndoElement",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMUndoElement_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUndoElement_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMUndoElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMUndoElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMUndoElement", o) != 0)
  {
    Py_DECREF(o);
  }

}

