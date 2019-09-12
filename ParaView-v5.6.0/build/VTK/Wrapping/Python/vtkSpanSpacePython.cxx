// python wrapper for vtkSpanSpace
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
#include "vtkSpanSpace.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpanSpace(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpanSpace_ClassNew(); }

#ifndef DECLARED_PyvtkScalarTree_ClassNew
extern "C" { PyObject *PyvtkScalarTree_ClassNew(); }
#define DECLARED_PyvtkScalarTree_ClassNew
#endif

static const char *PyvtkSpanSpace_Doc =
  "vtkSpanSpace - organize data according to scalar span space\n\n"
  "Superclass: vtkScalarTree\n\n"
  "This is a helper class used to accelerate contouring operations.\n"
  "Given an dataset, it organizes the dataset cells into a 2D binned\n"
  "space, with axes (scalar_min,scalar_max). This so-called span space\n"
  "can then be traversed quickly to find the cells that intersect a\n"
  "particular contour value.\n\n"
  "This class has an API that supports both serial and parallel\n"
  "operation.  The parallel API enables the using class to grab arrays\n"
  "(or batches) of cells that lie along a particular row in the span\n"
  "space. These arrays can then be processed separately in parallel.\n\n"
  "Learn more about span space in these two publications: 1) \"A Near\n"
  "Optimal Isosorface Extraction Algorithm Using the Spsn Space.\" Yarden\n"
  "Livnat et al. and 2) Isosurfacing in SPan Space with Utmost\n"
  "Efficiency.\" Han-Wei Shen et al.\n\n"
  "@sa\n"
  "vtkSimpleScalarTree\n\n";


static PyObject *
PyvtkSpanSpace_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpanSpace::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpanSpace::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpanSpace *tempr = vtkSpanSpace::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpanSpace *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpanSpace::NewInstance());

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
PyvtkSpanSpace_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkSpanSpace::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkSpanSpace::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSpanSpace::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSpanSpace::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTree();
    }
    else
    {
      op->vtkSpanSpace::BuildTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

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
      op->vtkSpanSpace::InitTraversal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetNumberOfCellBatches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellBatches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCellBatches() :
      op->vtkSpanSpace::GetNumberOfCellBatches());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetCellBatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkIdType *tempr = (ap.IsBound() ?
      op->GetCellBatch(temp0, temp1) :
      op->vtkSpanSpace::GetCellBatch(temp0, temp1));

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

static PyMethodDef PyvtkSpanSpace_Methods[] = {
  {"IsTypeOf", PyvtkSpanSpace_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type related macros and PrintSelf() method.\n"},
  {"IsA", PyvtkSpanSpace_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type related macros and PrintSelf() method.\n"},
  {"SafeDownCast", PyvtkSpanSpace_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpanSpace\nC++: static vtkSpanSpace *SafeDownCast(vtkObjectBase *o)\n\nStandard type related macros and PrintSelf() method.\n"},
  {"NewInstance", PyvtkSpanSpace_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpanSpace\nC++: vtkSpanSpace *NewInstance()\n\nStandard type related macros and PrintSelf() method.\n"},
  {"SetResolution", PyvtkSpanSpace_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(vtkIdType _arg)\n\nSet/Get the resolution N of the span space. The span space can be\nenvisioned as a rectangular lattice of NXN buckets (i.e., N rows\nand N columns), where each bucket stores a list of cell ids. The\ni-j coordinate of each cell (hence its location in the lattice)\nis determined from the cell's 2-tuple (smin,smax) scalar range.\nBy default Resolution = 100.\n"},
  {"GetResolutionMinValue", PyvtkSpanSpace_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual vtkIdType GetResolutionMinValue()\n\nSet/Get the resolution N of the span space. The span space can be\nenvisioned as a rectangular lattice of NXN buckets (i.e., N rows\nand N columns), where each bucket stores a list of cell ids. The\ni-j coordinate of each cell (hence its location in the lattice)\nis determined from the cell's 2-tuple (smin,smax) scalar range.\nBy default Resolution = 100.\n"},
  {"GetResolutionMaxValue", PyvtkSpanSpace_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual vtkIdType GetResolutionMaxValue()\n\nSet/Get the resolution N of the span space. The span space can be\nenvisioned as a rectangular lattice of NXN buckets (i.e., N rows\nand N columns), where each bucket stores a list of cell ids. The\ni-j coordinate of each cell (hence its location in the lattice)\nis determined from the cell's 2-tuple (smin,smax) scalar range.\nBy default Resolution = 100.\n"},
  {"GetResolution", PyvtkSpanSpace_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual vtkIdType GetResolution()\n\nSet/Get the resolution N of the span space. The span space can be\nenvisioned as a rectangular lattice of NXN buckets (i.e., N rows\nand N columns), where each bucket stores a list of cell ids. The\ni-j coordinate of each cell (hence its location in the lattice)\nis determined from the cell's 2-tuple (smin,smax) scalar range.\nBy default Resolution = 100.\n"},
  {"Initialize", PyvtkSpanSpace_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {"BuildTree", PyvtkSpanSpace_BuildTree, METH_VARARGS,
   "V.BuildTree()\nC++: void BuildTree() override;\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {"InitTraversal", PyvtkSpanSpace_InitTraversal, METH_VARARGS,
   "V.InitTraversal(float)\nC++: void InitTraversal(double scalarValue) override;\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will have scalar values that span the scalar value\nspecified. Note this method must be called prior to parallel or\nserial traversal since it specifies the scalar value to be\nextracted.\n"},
  {"GetNumberOfCellBatches", PyvtkSpanSpace_GetNumberOfCellBatches, METH_VARARGS,
   "V.GetNumberOfCellBatches() -> int\nC++: vtkIdType GetNumberOfCellBatches() override;\n\nGet the number of cell batches available for processing. Note\nthat this methods should be called after InitTraversal(). This is\nbecause the number of batches available is typically a function\nof the isocontour value. Note that the cells found in\n[0...(NumberOfCellBatches-1)] will contain all the cells\npotentially containing the isocontour.\n"},
  {"GetCellBatch", PyvtkSpanSpace_GetCellBatch, METH_VARARGS,
   "V.GetCellBatch(int, int) -> (int, ...)\nC++: const vtkIdType *GetCellBatch(vtkIdType batchNum,\n    vtkIdType &numCells) override;\n\nReturn the array of cell ids in the specified batch. The method\nalso returns the number of cell ids in the array. Make sure to\ncall InitTraversal() beforehand.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpanSpace_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkSpanSpace", // tp_name
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
  PyvtkSpanSpace_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpanSpace_StaticNew()
{
  return vtkSpanSpace::New();
}

PyObject *PyvtkSpanSpace_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpanSpace_Type, PyvtkSpanSpace_Methods,
    "vtkSpanSpace",
 &PyvtkSpanSpace_StaticNew);

  PyTypeObject *pytype = &PyvtkSpanSpace_Type;

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

void PyVTKAddFile_vtkSpanSpace(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpanSpace_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpanSpace", o) != 0)
  {
    Py_DECREF(o);
  }

}

