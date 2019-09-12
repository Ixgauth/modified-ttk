// python wrapper for vtkCompositeDataIterator
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
#include "vtkCompositeDataIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCompositeDataIterator_Doc =
  "vtkCompositeDataIterator - superclass for composite data iterators\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCompositeDataIterator provides an interface for accessing datasets\n"
  "in a collection (vtkCompositeDataIterator).\n\n";


static PyObject *
PyvtkCompositeDataIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataIterator *tempr = vtkCompositeDataIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataIterator::NewInstance());

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
PyvtkCompositeDataIterator_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkCompositeDataIterator::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkCompositeDataIterator::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCompositeDataIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_InitReverseTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitReverseTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitReverseTraversal();
    }
    else
    {
      op->vtkCompositeDataIterator::InitReverseTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->GoToFirstItem();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->GoToNextItem();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->IsDoneWithTraversal();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = op->GetCurrentDataObject();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = op->GetCurrentMetaData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->HasCurrentMetaData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SetSkipEmptyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipEmptyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipEmptyNodes(temp0);
    }
    else
    {
      op->vtkCompositeDataIterator::SetSkipEmptyNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetSkipEmptyNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipEmptyNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSkipEmptyNodes() :
      op->vtkCompositeDataIterator::GetSkipEmptyNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SkipEmptyNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipEmptyNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipEmptyNodesOn();
    }
    else
    {
      op->vtkCompositeDataIterator::SkipEmptyNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_SkipEmptyNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipEmptyNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipEmptyNodesOff();
    }
    else
    {
      op->vtkCompositeDataIterator::SkipEmptyNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetCurrentFlatIndex();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataIterator_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataIterator *op = static_cast<vtkCompositeDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverse() :
      op->vtkCompositeDataIterator::GetReverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataIterator_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeDataIterator\nC++: static vtkCompositeDataIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewInstance()\n\n"},
  {"SetDataSet", PyvtkCompositeDataIterator_SetDataSet, METH_VARARGS,
   "V.SetDataSet(vtkCompositeDataSet)\nC++: virtual void SetDataSet(vtkCompositeDataSet *ds)\n\nSet the composite dataset this iterator is iterating over. Must\nbe set before traversal begins.\n"},
  {"GetDataSet", PyvtkCompositeDataIterator_GetDataSet, METH_VARARGS,
   "V.GetDataSet() -> vtkCompositeDataSet\nC++: virtual vtkCompositeDataSet *GetDataSet()\n\nSet the composite dataset this iterator is iterating over. Must\nbe set before traversal begins.\n"},
  {"InitTraversal", PyvtkCompositeDataIterator_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: virtual void InitTraversal()\n\nBegin iterating over the composite dataset structure.\n"},
  {"InitReverseTraversal", PyvtkCompositeDataIterator_InitReverseTraversal, METH_VARARGS,
   "V.InitReverseTraversal()\nC++: virtual void InitReverseTraversal()\n\nBegin iterating over the composite dataset structure in reverse\norder.\n"},
  {"GoToFirstItem", PyvtkCompositeDataIterator_GoToFirstItem, METH_VARARGS,
   "V.GoToFirstItem()\nC++: virtual void GoToFirstItem()\n\nMove the iterator to the beginning of the collection.\n"},
  {"GoToNextItem", PyvtkCompositeDataIterator_GoToNextItem, METH_VARARGS,
   "V.GoToNextItem()\nC++: virtual void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkCompositeDataIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> int\nC++: virtual int IsDoneWithTraversal()\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {"GetCurrentDataObject", PyvtkCompositeDataIterator_GetCurrentDataObject, METH_VARARGS,
   "V.GetCurrentDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetCurrentDataObject()\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {"GetCurrentMetaData", PyvtkCompositeDataIterator_GetCurrentMetaData, METH_VARARGS,
   "V.GetCurrentMetaData() -> vtkInformation\nC++: virtual vtkInformation *GetCurrentMetaData()\n\nReturns the meta-data associated with the current item. This will\nallocate a new vtkInformation object is none is already present.\nUse HasCurrentMetaData to avoid unnecessary creation of\nvtkInformation objects.\n"},
  {"HasCurrentMetaData", PyvtkCompositeDataIterator_HasCurrentMetaData, METH_VARARGS,
   "V.HasCurrentMetaData() -> int\nC++: virtual int HasCurrentMetaData()\n\nReturns if the a meta-data information object is present for the\ncurrent item. Return 1 on success, 0 otherwise.\n"},
  {"SetSkipEmptyNodes", PyvtkCompositeDataIterator_SetSkipEmptyNodes, METH_VARARGS,
   "V.SetSkipEmptyNodes(int)\nC++: virtual void SetSkipEmptyNodes(vtkTypeBool _arg)\n\nIf SkipEmptyNodes is true, then nullptr datasets will be skipped.\nDefault is true.\n"},
  {"GetSkipEmptyNodes", PyvtkCompositeDataIterator_GetSkipEmptyNodes, METH_VARARGS,
   "V.GetSkipEmptyNodes() -> int\nC++: virtual vtkTypeBool GetSkipEmptyNodes()\n\nIf SkipEmptyNodes is true, then nullptr datasets will be skipped.\nDefault is true.\n"},
  {"SkipEmptyNodesOn", PyvtkCompositeDataIterator_SkipEmptyNodesOn, METH_VARARGS,
   "V.SkipEmptyNodesOn()\nC++: virtual void SkipEmptyNodesOn()\n\nIf SkipEmptyNodes is true, then nullptr datasets will be skipped.\nDefault is true.\n"},
  {"SkipEmptyNodesOff", PyvtkCompositeDataIterator_SkipEmptyNodesOff, METH_VARARGS,
   "V.SkipEmptyNodesOff()\nC++: virtual void SkipEmptyNodesOff()\n\nIf SkipEmptyNodes is true, then nullptr datasets will be skipped.\nDefault is true.\n"},
  {"GetCurrentFlatIndex", PyvtkCompositeDataIterator_GetCurrentFlatIndex, METH_VARARGS,
   "V.GetCurrentFlatIndex() -> int\nC++: virtual unsigned int GetCurrentFlatIndex()\n\nFlat index is an index to identify the data in a composite data\nstructure\n"},
  {"GetReverse", PyvtkCompositeDataIterator_GetReverse, METH_VARARGS,
   "V.GetReverse() -> int\nC++: virtual int GetReverse()\n\nReturns if the iteration is in reverse order.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkCompositeDataIterator", // tp_name
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
  PyvtkCompositeDataIterator_Doc, // tp_doc
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

PyObject *PyvtkCompositeDataIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataIterator_Type, PyvtkCompositeDataIterator_Methods,
    "vtkCompositeDataIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkCompositeDataIterator_Type;

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

void PyVTKAddFile_vtkCompositeDataIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

