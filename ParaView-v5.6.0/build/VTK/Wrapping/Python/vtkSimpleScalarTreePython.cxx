// python wrapper for vtkSimpleScalarTree
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
#include "vtkSimpleScalarTree.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleScalarTree(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleScalarTree_ClassNew(); }

#ifndef DECLARED_PyvtkScalarTree_ClassNew
extern "C" { PyObject *PyvtkScalarTree_ClassNew(); }
#define DECLARED_PyvtkScalarTree_ClassNew
#endif

static const char *PyvtkSimpleScalarTree_Doc =
  "vtkSimpleScalarTree - organize data according to scalar values (used\nto accelerate contouring operations)\n\n"
  "Superclass: vtkScalarTree\n\n"
  "vtkSimpleScalarTree creates a pointerless binary tree that helps\n"
  "search for cells that lie within a particular scalar range. This\n"
  "object is used to accelerate some contouring (and other scalar-based\n"
  "techniques).\n\n"
  "The tree consists of an array of (min,max) scalar range pairs per\n"
  "node in the tree. The (min,max) range is determined from looking at\n"
  "the range of the children of the tree node. If the node is a leaf,\n"
  "then the range is determined by scanning the range of scalar data in\n"
  "n cells in the dataset. The n cells are determined by arbitrary\n"
  "selecting cell ids from id(i) to id(i+n), and where n is specified\n"
  "using the BranchingFactor ivar. Note that leaf node i=0 contains the\n"
  "scalar range computed from cell ids (0,n-1); leaf node i=1 contains\n"
  "the range from cell ids (n,2n-1); and so on. The implication is that\n"
  "there are no direct lists of cell ids per leaf node, instead the cell\n"
  "ids are implicitly known. Despite the arbitrary grouping of cells, in\n"
  "practice this scalar tree actually performs quite well due to\n"
  "spatial/data coherence.\n\n"
  "This class has an API that supports both serial and parallel\n"
  "operation.  The parallel API enables the using class to grab arrays\n"
  "(or batches) of cells that potentially intersect the isocontour.\n"
  "These batches can then be processed in separate threads.\n\n"
  "@sa\n"
  "vtkSpanSpace\n\n";


static PyObject *
PyvtkSimpleScalarTree_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleScalarTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleScalarTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleScalarTree *tempr = vtkSimpleScalarTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleScalarTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleScalarTree::NewInstance());

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
PyvtkSimpleScalarTree_SetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBranchingFactor(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::SetBranchingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactorMinValue() :
      op->vtkSimpleScalarTree::GetBranchingFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactorMaxValue() :
      op->vtkSimpleScalarTree::GetBranchingFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactor() :
      op->vtkSimpleScalarTree::GetBranchingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkSimpleScalarTree::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLevel(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::SetMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMinValue() :
      op->vtkSimpleScalarTree::GetMaxLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMaxValue() :
      op->vtkSimpleScalarTree::GetMaxLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkSimpleScalarTree::GetMaxLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTree();
    }
    else
    {
      op->vtkSimpleScalarTree::BuildTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSimpleScalarTree::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::InitTraversal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetNumberOfCellBatches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellBatches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCellBatches() :
      op->vtkSimpleScalarTree::GetNumberOfCellBatches());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetCellBatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkIdType *tempr = (ap.IsBound() ?
      op->GetCellBatch(temp0, temp1) :
      op->vtkSimpleScalarTree::GetCellBatch(temp0, temp1));

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

static PyMethodDef PyvtkSimpleScalarTree_Methods[] = {
  {"IsTypeOf", PyvtkSimpleScalarTree_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type related macros and PrintSelf() method.\n"},
  {"IsA", PyvtkSimpleScalarTree_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type related macros and PrintSelf() method.\n"},
  {"SafeDownCast", PyvtkSimpleScalarTree_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSimpleScalarTree\nC++: static vtkSimpleScalarTree *SafeDownCast(vtkObjectBase *o)\n\nStandard type related macros and PrintSelf() method.\n"},
  {"NewInstance", PyvtkSimpleScalarTree_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSimpleScalarTree\nC++: vtkSimpleScalarTree *NewInstance()\n\nStandard type related macros and PrintSelf() method.\n"},
  {"SetBranchingFactor", PyvtkSimpleScalarTree_SetBranchingFactor, METH_VARARGS,
   "V.SetBranchingFactor(int)\nC++: virtual void SetBranchingFactor(int _arg)\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {"GetBranchingFactorMinValue", PyvtkSimpleScalarTree_GetBranchingFactorMinValue, METH_VARARGS,
   "V.GetBranchingFactorMinValue() -> int\nC++: virtual int GetBranchingFactorMinValue()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {"GetBranchingFactorMaxValue", PyvtkSimpleScalarTree_GetBranchingFactorMaxValue, METH_VARARGS,
   "V.GetBranchingFactorMaxValue() -> int\nC++: virtual int GetBranchingFactorMaxValue()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {"GetBranchingFactor", PyvtkSimpleScalarTree_GetBranchingFactor, METH_VARARGS,
   "V.GetBranchingFactor() -> int\nC++: virtual int GetBranchingFactor()\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {"GetLevel", PyvtkSimpleScalarTree_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: virtual int GetLevel()\n\nGet the level of the scalar tree. This value may change each time\nthe scalar tree is built and the branching factor changes.\n"},
  {"SetMaxLevel", PyvtkSimpleScalarTree_SetMaxLevel, METH_VARARGS,
   "V.SetMaxLevel(int)\nC++: virtual void SetMaxLevel(int _arg)\n\nSet the maximum allowable level for the tree.\n"},
  {"GetMaxLevelMinValue", PyvtkSimpleScalarTree_GetMaxLevelMinValue, METH_VARARGS,
   "V.GetMaxLevelMinValue() -> int\nC++: virtual int GetMaxLevelMinValue()\n\nSet the maximum allowable level for the tree.\n"},
  {"GetMaxLevelMaxValue", PyvtkSimpleScalarTree_GetMaxLevelMaxValue, METH_VARARGS,
   "V.GetMaxLevelMaxValue() -> int\nC++: virtual int GetMaxLevelMaxValue()\n\nSet the maximum allowable level for the tree.\n"},
  {"GetMaxLevel", PyvtkSimpleScalarTree_GetMaxLevel, METH_VARARGS,
   "V.GetMaxLevel() -> int\nC++: virtual int GetMaxLevel()\n\nSet the maximum allowable level for the tree.\n"},
  {"BuildTree", PyvtkSimpleScalarTree_BuildTree, METH_VARARGS,
   "V.BuildTree()\nC++: void BuildTree() override;\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {"Initialize", PyvtkSimpleScalarTree_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {"InitTraversal", PyvtkSimpleScalarTree_InitTraversal, METH_VARARGS,
   "V.InitTraversal(float)\nC++: void InitTraversal(double scalarValue) override;\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will likely have scalar values that span the scalar value\nspecified.\n"},
  {"GetNumberOfCellBatches", PyvtkSimpleScalarTree_GetNumberOfCellBatches, METH_VARARGS,
   "V.GetNumberOfCellBatches() -> int\nC++: vtkIdType GetNumberOfCellBatches() override;\n\nGet the number of cell batches available for processing. Note\nthat this methods should be called after InitTraversal(). This is\nbecause the number of batches available is typically a function\nof the isocontour value. Note that the cells found in\n[0...(NumberOfCellBatches-1)] will contain all the cells\npotentially containing the isocontour.\n"},
  {"GetCellBatch", PyvtkSimpleScalarTree_GetCellBatch, METH_VARARGS,
   "V.GetCellBatch(int, int) -> (int, ...)\nC++: const vtkIdType *GetCellBatch(vtkIdType batchNum,\n    vtkIdType &numCells) override;\n\nReturn the array of cell ids in the specified batch. The method\nalso returns the number of cell ids in the array. Make sure to\ncall InitTraversal() beforehand.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSimpleScalarTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkSimpleScalarTree", // tp_name
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
  PyvtkSimpleScalarTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimpleScalarTree_StaticNew()
{
  return vtkSimpleScalarTree::New();
}

PyObject *PyvtkSimpleScalarTree_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSimpleScalarTree_Type, PyvtkSimpleScalarTree_Methods,
    "vtkSimpleScalarTree",
 &PyvtkSimpleScalarTree_StaticNew);

  PyTypeObject *pytype = &PyvtkSimpleScalarTree_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleScalarTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleScalarTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleScalarTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

