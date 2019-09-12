// python wrapper for vtkCachingInterpolatedVelocityField
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
#include "vtkCachingInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCachingInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCachingInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkFunctionSet_ClassNew
extern "C" { PyObject *PyvtkFunctionSet_ClassNew(); }
#define DECLARED_PyvtkFunctionSet_ClassNew
#endif

static const char *PyvtkCachingInterpolatedVelocityField_Doc =
  "vtkCachingInterpolatedVelocityField - Interface for obtaining\ninterpolated velocity values\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkCachingInterpolatedVelocityField acts as a continuous velocity\n"
  "field by performing cell interpolation on the underlying vtkDataSet.\n"
  "This is a concrete sub-class of vtkFunctionSet with\n"
  "NumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n"
  "(u,v,w). Normally, every time an evaluation is performed, the cell\n"
  "which contains the point (x,y,z) has to be found by calling FindCell.\n"
  "This is a computationally expensive operation. In certain cases, the\n"
  "cell search can be avoided or shortened by providing a guess for the\n"
  "cell id. For example, in streamline integration, the next evaluation\n"
  "is usually in the same or a neighbour cell. For this reason,\n"
  "vtkCachingInterpolatedVelocityField stores the last cell id. If\n"
  "caching is turned on, it uses this id as the starting point.\n\n"
  "@warning\n"
  "vtkCachingInterpolatedVelocityField is not thread safe. A new\n"
  "instance should be created by each thread.\n\n"
  "@sa\n"
  "vtkFunctionSet vtkStreamTracer\n\n"
  "@todo Need to clean up style to match vtk/Kitware standards. Please\n"
  "help.\n\n";


static PyObject *
PyvtkCachingInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCachingInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCachingInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCachingInterpolatedVelocityField *tempr = vtkCachingInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCachingInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCachingInterpolatedVelocityField::NewInstance());

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
PyvtkCachingInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkCachingInterpolatedVelocityField::FunctionValues(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_InsideTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InsideTest(temp0) :
      op->vtkCachingInterpolatedVelocityField::InsideTest(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int temp0;
  vtkDataSet *temp1 = nullptr;
  bool temp2 = false;
  vtkAbstractCellLocator *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::SetDataSet(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkCachingInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectVectors(temp0);
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::SelectVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SetLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLastCellInfo(temp0, temp1);
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::SetLastCellInfo(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastCellInfo();
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::ClearLastCellInfo();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetLastWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastWeights(temp0) :
      op->vtkCachingInterpolatedVelocityField::GetLastWeights(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastLocalCoordinates(temp0) :
      op->vtkCachingInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetCellCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellCacheHit() :
      op->vtkCachingInterpolatedVelocityField::GetCellCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataSetCacheHit() :
      op->vtkCachingInterpolatedVelocityField::GetDataSetCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkCachingInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCachingInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkCachingInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCachingInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCachingInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCachingInterpolatedVelocityField\nC++: static vtkCachingInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCachingInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCachingInterpolatedVelocityField\nC++: vtkCachingInterpolatedVelocityField *NewInstance()\n\n"},
  {"FunctionValues", PyvtkCachingInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate the velocity field, f={u,v,w}, at {x, y, z}. returns 1\nif valid, 0 if test failed\n"},
  {"InsideTest", PyvtkCachingInterpolatedVelocityField_InsideTest, METH_VARARGS,
   "V.InsideTest([float, ...]) -> int\nC++: virtual int InsideTest(double *x)\n\nEvaluate the velocity field, f={u,v,w}, at {x, y, z}. returns 1\nif valid, 0 if test failed\n"},
  {"SetDataSet", PyvtkCachingInterpolatedVelocityField_SetDataSet, METH_VARARGS,
   "V.SetDataSet(int, vtkDataSet, bool, vtkAbstractCellLocator)\nC++: virtual void SetDataSet(int I, vtkDataSet *dataset,\n    bool staticdataset, vtkAbstractCellLocator *locator)\n\nAdd a dataset used by the interpolation function evaluation.\n"},
  {"GetVectorsSelection", PyvtkCachingInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   "V.GetVectorsSelection() -> string\nC++: virtual char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in nullptr and the filter will use the\nactive vector array.\n"},
  {"SelectVectors", PyvtkCachingInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in nullptr and the filter will use the\nactive vector array.\n"},
  {"SetLastCellInfo", PyvtkCachingInterpolatedVelocityField_SetLastCellInfo, METH_VARARGS,
   "V.SetLastCellInfo(int, int)\nC++: void SetLastCellInfo(vtkIdType c, int datasetindex)\n\nSet LastCellId to c and LastCacheIndex datasetindex, cached from\nlast evaluation. If c isn't -1 then the corresponding cell is\nstored in Cache->Cell. These values should be valid or an\nassertion will be triggered.\n"},
  {"ClearLastCellInfo", PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo, METH_VARARGS,
   "V.ClearLastCellInfo()\nC++: void ClearLastCellInfo()\n\nSet LastCellId to -1 and Cache to nullptr so that the next search\ndoes not start from the previous cell.\n"},
  {"GetLastWeights", PyvtkCachingInterpolatedVelocityField_GetLastWeights, METH_VARARGS,
   "V.GetLastWeights([float, ...]) -> int\nC++: int GetLastWeights(double *w)\n\nReturns the interpolation weights/pcoords cached from last\nevaluation if the cached cell is valid (returns 1). Otherwise, it\ndoes not change w and returns 0.\n"},
  {"GetLastLocalCoordinates", PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   "V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nReturns the interpolation weights/pcoords cached from last\nevaluation if the cached cell is valid (returns 1). Otherwise, it\ndoes not change w and returns 0.\n"},
  {"GetCellCacheHit", PyvtkCachingInterpolatedVelocityField_GetCellCacheHit, METH_VARARGS,
   "V.GetCellCacheHit() -> int\nC++: virtual int GetCellCacheHit()\n\nCaching statistics.\n"},
  {"GetDataSetCacheHit", PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit, METH_VARARGS,
   "V.GetDataSetCacheHit() -> int\nC++: virtual int GetDataSetCacheHit()\n\nCaching statistics.\n"},
  {"GetCacheMiss", PyvtkCachingInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   "V.GetCacheMiss() -> int\nC++: virtual int GetCacheMiss()\n\nCaching statistics.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCachingInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkCachingInterpolatedVelocityField", // tp_name
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
  PyvtkCachingInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCachingInterpolatedVelocityField_StaticNew()
{
  return vtkCachingInterpolatedVelocityField::New();
}

PyObject *PyvtkCachingInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCachingInterpolatedVelocityField_Type, PyvtkCachingInterpolatedVelocityField_Methods,
    "vtkCachingInterpolatedVelocityField",
 &PyvtkCachingInterpolatedVelocityField_StaticNew);

  PyTypeObject *pytype = &PyvtkCachingInterpolatedVelocityField_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFunctionSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCachingInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCachingInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCachingInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

