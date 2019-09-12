// python wrapper for vtkCollectionIterator
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
#include "vtkCollectionIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollectionIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCollectionIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCollectionIterator_Doc =
  "vtkCollectionIterator - iterator through a vtkCollection.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCollectionIterator provides an alternative way to traverse through\n"
  "the objects in a vtkCollection.  Unlike the collection's built in\n"
  "interface, this allows multiple iterators to simultaneously traverse\n"
  "the collection.  If items are removed from the collection, only the\n"
  "iterators currently pointing to those items are invalidated.  Other\n"
  "iterators will still continue to function normally.\n\n";

static PyObject *
PyvtkCollectionIterator_Next(PyObject *self)
{
  PyVTKObject *vp = (PyVTKObject *)self;
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator*>(vp->vtk_ptr);

  PyObject *result = nullptr;

  if (op)
  {
    vtkObject *tempr = op->GetCurrentObject();
    op->GoToNextItem();
    if (tempr != nullptr)
    {
      result = vtkPythonArgs::BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCollectionIterator_Iter(PyObject *self)
{
  Py_INCREF(self);
  return self;
}

static PyObject *
PyvtkCollectionIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollectionIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollectionIterator *tempr = vtkCollectionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollectionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectionIterator::NewInstance());

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
PyvtkCollectionIterator_SetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetCollection(temp0);
    }
    else
    {
      op->vtkCollectionIterator::SetCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetCollection() :
      op->vtkCollectionIterator::GetCollection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCollectionIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstItem();
    }
    else
    {
      op->vtkCollectionIterator::GoToFirstItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextItem();
    }
    else
    {
      op->vtkCollectionIterator::GoToNextItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkCollectionIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCurrentObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetCurrentObject() :
      op->vtkCollectionIterator::GetCurrentObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCollectionIterator_Methods[] = {
  {"IsTypeOf", PyvtkCollectionIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollectionIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollectionIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCollectionIterator\nC++: static vtkCollectionIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollectionIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewInstance()\n\n"},
  {"SetCollection", PyvtkCollectionIterator_SetCollection, METH_VARARGS,
   "V.SetCollection(vtkCollection)\nC++: virtual void SetCollection(vtkCollection *)\n\nSet/Get the collection over which to iterate.\n"},
  {"GetCollection", PyvtkCollectionIterator_GetCollection, METH_VARARGS,
   "V.GetCollection() -> vtkCollection\nC++: virtual vtkCollection *GetCollection()\n\nSet/Get the collection over which to iterate.\n"},
  {"InitTraversal", PyvtkCollectionIterator_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: void InitTraversal()\n\nPosition the iterator at the first item in the collection.\n"},
  {"GoToFirstItem", PyvtkCollectionIterator_GoToFirstItem, METH_VARARGS,
   "V.GoToFirstItem()\nC++: void GoToFirstItem()\n\nPosition the iterator at the first item in the collection.\n"},
  {"GoToNextItem", PyvtkCollectionIterator_GoToNextItem, METH_VARARGS,
   "V.GoToNextItem()\nC++: void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkCollectionIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> int\nC++: int IsDoneWithTraversal()\n\nTest whether the iterator is currently positioned at a valid\nitem. Returns 1 for yes, 0 for no.\n"},
  {"GetCurrentObject", PyvtkCollectionIterator_GetCurrentObject, METH_VARARGS,
   "V.GetCurrentObject() -> vtkObject\nC++: vtkObject *GetCurrentObject()\n\nGet the item at the current iterator position.  Valid only when\nIsDoneWithTraversal() returns 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCollectionIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCollectionIterator", // tp_name
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
  PyvtkCollectionIterator_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  PyvtkCollectionIterator_Iter, // tp_iter
  PyvtkCollectionIterator_Next, // tp_iternext
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

static vtkObjectBase *PyvtkCollectionIterator_StaticNew()
{
  return vtkCollectionIterator::New();
}

PyObject *PyvtkCollectionIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCollectionIterator_Type, PyvtkCollectionIterator_Methods,
    "vtkCollectionIterator",
 &PyvtkCollectionIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkCollectionIterator_Type;

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

void PyVTKAddFile_vtkCollectionIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollectionIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollectionIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

