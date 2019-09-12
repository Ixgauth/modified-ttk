// python wrapper for vtkScalarTree
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
#include "vtkIdList.h"
#include "vtkScalarTree.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarTree(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarTree_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkScalarTree_Doc =
  "vtkScalarTree - organize data according to scalar values (used to\naccelerate contouring operations)\n\n"
  "Superclass: vtkObject\n\n"
  "vtkScalarTree is an abstract class that defines the API to concrete\n"
  "scalar tree subclasses. A scalar tree is a data structure that\n"
  "organizes data according to its scalar value. This allows rapid\n"
  "access to data for those algorithms that access the data based on\n"
  "scalar value. For example, isocontouring operates on cells based on\n"
  "the scalar (isocontour) value.\n\n"
  "To use subclasses of this class, you must specify a dataset to\n"
  "operate on, and then specify a scalar value in the InitTraversal()\n"
  "method. Then calls to GetNextCell() return cells whose scalar data\n"
  "contains the scalar value specified. (This describes serial\n"
  "traversal.)\n\n"
  "Methods supporting parallel traversal (such as threading) are also\n"
  "supported. Basically thread-safe batches of cells (which are a\n"
  "portion of the whole dataset) are available for processing using a\n"
  "parallel For() operation. First request the number of batches, and\n"
  "then for each batch, retrieve the array of cell ids in that batch.\n"
  "These batches contain cell ids that are likely to contain the\n"
  "isosurface.\n\n"
  "@sa\n"
  "vtkSimpleScalarTree vtkSpanSpace\n\n";


static PyObject *
PyvtkScalarTree_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarTree *tempr = vtkScalarTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarTree::NewInstance());

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
PyvtkScalarTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkScalarTree::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkScalarTree::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_SetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetScalars(temp0);
    }
    else
    {
      op->vtkScalarTree::SetScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_GetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars() :
      op->vtkScalarTree::GetScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BuildTree();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->InitTraversal(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_GetScalarValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarValue() :
      op->vtkScalarTree::GetScalarValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_GetNumberOfCellBatches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellBatches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfCellBatches();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarTree_GetCellBatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarTree *op = static_cast<vtkScalarTree *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkIdType *tempr = op->GetCellBatch(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarTree_Methods[] = {
  {"IsTypeOf", PyvtkScalarTree_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarTree_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarTree_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarTree\nC++: static vtkScalarTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarTree_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarTree\nC++: vtkScalarTree *NewInstance()\n\n"},
  {"SetDataSet", PyvtkScalarTree_SetDataSet, METH_VARARGS,
   "V.SetDataSet(vtkDataSet)\nC++: virtual void SetDataSet(vtkDataSet *)\n\nBuild the tree from the points/cells and scalars defining this\ndataset.\n"},
  {"GetDataSet", PyvtkScalarTree_GetDataSet, METH_VARARGS,
   "V.GetDataSet() -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\nBuild the tree from the points/cells and scalars defining this\ndataset.\n"},
  {"SetScalars", PyvtkScalarTree_SetScalars, METH_VARARGS,
   "V.SetScalars(vtkDataArray)\nC++: virtual void SetScalars(vtkDataArray *)\n\nBuild the tree from the points/cells and scalars defining the\ndataset and scalars provided. Typically the scalars come from the\nvtkDataSet specified, but sometimes a separate vtkDataArray is\nprovided to specify the scalars. If the scalar array is\nexplicitly set, then it takes precedence over the scalars held in\nthe vtkDataSet.\n"},
  {"GetScalars", PyvtkScalarTree_GetScalars, METH_VARARGS,
   "V.GetScalars() -> vtkDataArray\nC++: virtual vtkDataArray *GetScalars()\n\nBuild the tree from the points/cells and scalars defining the\ndataset and scalars provided. Typically the scalars come from the\nvtkDataSet specified, but sometimes a separate vtkDataArray is\nprovided to specify the scalars. If the scalar array is\nexplicitly set, then it takes precedence over the scalars held in\nthe vtkDataSet.\n"},
  {"BuildTree", PyvtkScalarTree_BuildTree, METH_VARARGS,
   "V.BuildTree()\nC++: virtual void BuildTree()\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {"Initialize", PyvtkScalarTree_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {"InitTraversal", PyvtkScalarTree_InitTraversal, METH_VARARGS,
   "V.InitTraversal(float)\nC++: virtual void InitTraversal(double scalarValue)\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will have scalar values that span the scalar value\nspecified. Note that changing the scalarValue does not cause the\nscalar tree to be modified, and hence it does not rebuild.\n"},
  {"GetScalarValue", PyvtkScalarTree_GetScalarValue, METH_VARARGS,
   "V.GetScalarValue() -> float\nC++: double GetScalarValue()\n\nReturn the current scalar value over which tree traversal is\nproceeding. This is the scalar value provided in InitTraversal().\n"},
  {"GetNumberOfCellBatches", PyvtkScalarTree_GetNumberOfCellBatches, METH_VARARGS,
   "V.GetNumberOfCellBatches() -> int\nC++: virtual vtkIdType GetNumberOfCellBatches()\n\nGet the number of cell batches available for processing. Note\nthat this methods should be called after InitTraversal(). This is\nbecause the number of batches available is typically a function\nof the isocontour value. Note that the cells found in\n[0...(NumberOfCellBatches-1)] will contain all the cells\npotentially containing the isocontour.\n"},
  {"GetCellBatch", PyvtkScalarTree_GetCellBatch, METH_VARARGS,
   "V.GetCellBatch(int, int) -> (int, ...)\nC++: virtual const vtkIdType *GetCellBatch(vtkIdType batchNum,\n    vtkIdType &numCells)\n\nReturn the array of cell ids in the specified batch. The method\nalso returns the number of cell ids in the array. Make sure to\ncall InitTraversal() beforehand.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkScalarTree", // tp_name
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
  PyvtkScalarTree_Doc, // tp_doc
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

PyObject *PyvtkScalarTree_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarTree_Type, PyvtkScalarTree_Methods,
    "vtkScalarTree",
 nullptr);

  PyTypeObject *pytype = &PyvtkScalarTree_Type;

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

void PyVTKAddFile_vtkScalarTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

