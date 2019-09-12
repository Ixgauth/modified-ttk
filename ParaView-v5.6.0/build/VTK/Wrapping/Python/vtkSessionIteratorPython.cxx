// python wrapper for vtkSessionIterator
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
#include "vtkSessionIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSessionIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSessionIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSessionIterator_Doc =
  "vtkSessionIterator - vtkSessionIterator is used to iterate over\nsessions in the global\n\n"
  "Superclass: vtkObject\n\n"
  "ProcessModule.\n\n";


static PyObject *
PyvtkSessionIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSessionIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSessionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSessionIterator *tempr = vtkSessionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSessionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSessionIterator::NewInstance());

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
PyvtkSessionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkSessionIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextItem();
    }
    else
    {
      op->vtkSessionIterator::GoToNextItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkSessionIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_GetCurrentSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetCurrentSession() :
      op->vtkSessionIterator::GetCurrentSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSessionIterator_GetCurrentSessionId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSessionId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSessionIterator *op = static_cast<vtkSessionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCurrentSessionId() :
      op->vtkSessionIterator::GetCurrentSessionId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSessionIterator_Methods[] = {
  {"IsTypeOf", PyvtkSessionIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSessionIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSessionIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSessionIterator\nC++: static vtkSessionIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSessionIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSessionIterator\nC++: vtkSessionIterator *NewInstance()\n\n"},
  {"InitTraversal", PyvtkSessionIterator_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: virtual void InitTraversal()\n\nBegin iterating over the composite dataset structure.\n"},
  {"GoToNextItem", PyvtkSessionIterator_GoToNextItem, METH_VARARGS,
   "V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkSessionIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> bool\nC++: virtual bool IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {"GetCurrentSession", PyvtkSessionIterator_GetCurrentSession, METH_VARARGS,
   "V.GetCurrentSession() -> vtkSession\nC++: vtkSession *GetCurrentSession()\n\nReturns the current session.\n"},
  {"GetCurrentSessionId", PyvtkSessionIterator_GetCurrentSessionId, METH_VARARGS,
   "V.GetCurrentSessionId() -> int\nC++: vtkIdType GetCurrentSessionId()\n\nReturns the current session id.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSessionIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkSessionIterator", // tp_name
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
  PyvtkSessionIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSessionIterator_StaticNew()
{
  return vtkSessionIterator::New();
}

PyObject *PyvtkSessionIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSessionIterator_Type, PyvtkSessionIterator_Methods,
    "vtkSessionIterator",
 &PyvtkSessionIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkSessionIterator_Type;

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

void PyVTKAddFile_vtkSessionIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSessionIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSessionIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

