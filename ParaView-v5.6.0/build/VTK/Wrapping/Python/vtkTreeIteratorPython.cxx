// python wrapper for vtkTreeIterator
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
#include "vtkTreeIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTreeIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTreeIterator_Doc =
  "vtkTreeIterator - Abstract class for iterator over a vtkTree.\n\n"
  "Superclass: vtkObject\n\n"
  "The base class for tree iterators vtkTreeBFSIterator and\n"
  "vtkTreeDFSIterator.\n\n"
  "After setting up the iterator, the normal mode of operation is to set\n"
  "up a while(iter->HasNext())loop, with the statement vtkIdType vertex\n"
  "= iter->Next()inside the loop.\n\n"
  "@sa\n"
  "vtkTreeBFSIterator vtkTreeDFSIterator\n\n";


static PyObject *
PyvtkTreeIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeIterator *tempr = vtkTreeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeIterator::NewInstance());

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
PyvtkTreeIterator_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree(temp0);
    }
    else
    {
      op->vtkTreeIterator::SetTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkTreeIterator::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_SetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartVertex(temp0);
    }
    else
    {
      op->vtkTreeIterator::SetStartVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_GetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetStartVertex() :
      op->vtkTreeIterator::GetStartVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->Next() :
      op->vtkTreeIterator::Next());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasNext() :
      op->vtkTreeIterator::HasNext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeIterator_Restart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Restart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeIterator *op = static_cast<vtkTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Restart();
    }
    else
    {
      op->vtkTreeIterator::Restart();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeIterator_Methods[] = {
  {"IsTypeOf", PyvtkTreeIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTreeIterator\nC++: static vtkTreeIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTreeIterator\nC++: vtkTreeIterator *NewInstance()\n\n"},
  {"SetTree", PyvtkTreeIterator_SetTree, METH_VARARGS,
   "V.SetTree(vtkTree)\nC++: void SetTree(vtkTree *graph)\n\nSet/get the graph to iterate over.\n"},
  {"GetTree", PyvtkTreeIterator_GetTree, METH_VARARGS,
   "V.GetTree() -> vtkTree\nC++: virtual vtkTree *GetTree()\n\nSet/get the graph to iterate over.\n"},
  {"SetStartVertex", PyvtkTreeIterator_SetStartVertex, METH_VARARGS,
   "V.SetStartVertex(int)\nC++: void SetStartVertex(vtkIdType vertex)\n\nThe start vertex of the traversal. The tree iterator will only\niterate over the subtree rooted at vertex. If not set (or set to\na negative value), starts at the root of the tree.\n"},
  {"GetStartVertex", PyvtkTreeIterator_GetStartVertex, METH_VARARGS,
   "V.GetStartVertex() -> int\nC++: virtual vtkIdType GetStartVertex()\n\nThe start vertex of the traversal. The tree iterator will only\niterate over the subtree rooted at vertex. If not set (or set to\na negative value), starts at the root of the tree.\n"},
  {"Next", PyvtkTreeIterator_Next, METH_VARARGS,
   "V.Next() -> int\nC++: vtkIdType Next()\n\nThe next vertex visited in the graph.\n"},
  {"HasNext", PyvtkTreeIterator_HasNext, METH_VARARGS,
   "V.HasNext() -> bool\nC++: bool HasNext()\n\nReturn true when all vertices have been visited.\n"},
  {"Restart", PyvtkTreeIterator_Restart, METH_VARARGS,
   "V.Restart()\nC++: void Restart()\n\nReset the iterator to its start vertex.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTreeIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkTreeIterator", // tp_name
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
  PyvtkTreeIterator_Doc, // tp_doc
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

PyObject *PyvtkTreeIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTreeIterator_Type, PyvtkTreeIterator_Methods,
    "vtkTreeIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkTreeIterator_Type;

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

void PyVTKAddFile_vtkTreeIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

