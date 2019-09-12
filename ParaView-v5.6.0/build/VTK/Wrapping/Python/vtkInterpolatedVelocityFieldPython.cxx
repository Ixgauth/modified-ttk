// python wrapper for vtkInterpolatedVelocityField
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
#include "vtkInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkCompositeInterpolatedVelocityField_ClassNew
#endif

static const char *PyvtkInterpolatedVelocityField_Doc =
  "vtkInterpolatedVelocityField - A concrete class for obtaining\n the interpolated velocity values at a point.\n\n"
  "Superclass: vtkCompositeInterpolatedVelocityField\n\n"
  "vtkInterpolatedVelocityField acts as a continuous velocity field via\n"
  " cell interpolation on a vtkDataSet, NumberOfIndependentVariables = 4\n"
  " (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). As a concrete sub-class\n"
  " of vtkCompositeInterpolatedVelocityField, this class adopts two\n"
  "levels\n"
  " of cell caching for faster though less robust cell location than its\n"
  " sibling class vtkCellLocatorInterpolatedVelocityField. Level #0\n"
  "begins\n"
  " with intra-cell caching. Specifically, if the previous cell is valid\n"
  " and the nex point is still within it, ( vtkCell::EvaluatePosition()\n"
  " returns 1, coupled with the new parametric coordinates and weights\n"
  "),\n"
  " the function values are interpolated and vtkCell::EvaluatePosition()\n"
  " is invoked only. If it fails, level #1 follows by inter-cell\n"
  "location\n"
  " of the target cell (that contains the next point). By inter-cell,\n"
  "the\n"
  " previous cell gives an important clue / guess or serves as an\n"
  "immediate\n"
  " neighbor to aid in the location of the target cell (as is typically\n"
  "the\n"
  " case with integrating a streamline across cells) by means of\n"
  "vtkDataSet::\n"
  " FindCell(). If this still fails, a global cell search is invoked via\n"
  " vtkDataSet::FindCell().\n\n\n"
  " Regardless of inter-cell or global search, vtkPointLocator is\n"
  "employed\n"
  " as a crucial tool underlying the cell locator. The use of\n"
  "vtkPointLocator\n"
  " causes vtkInterpolatedVelocityField to return false target cells for\n"
  " datasets defined on complex grids.\n\n"
  "@warning\n"
  " vtkInterpolatedVelocityField is not thread safe. A new instance\n"
  "should be\n"
  " created by each thread.\n\n"
  "@sa\n"
  " vtkCompositeInterpolatedVelocityField\n"
  "vtkCellLocatorInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n\n";


static PyObject *
PyvtkInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInterpolatedVelocityField *tempr = vtkInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInterpolatedVelocityField::NewInstance());

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
PyvtkInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0);
    }
    else
    {
      op->vtkInterpolatedVelocityField::AddDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

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
      op->vtkInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkInterpolatedVelocityField_SnapPointOnCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapPointOnCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

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
      op->SnapPointOnCell(temp0, temp1) :
      op->vtkInterpolatedVelocityField::SnapPointOnCell(temp0, temp1));

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
PyvtkInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLastCellId(temp0, temp1);
    }
    else
    {
      op->vtkInterpolatedVelocityField::SetLastCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatedVelocityField *op = static_cast<vtkInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastCellId(temp0);
    }
    else
    {
      op->vtkInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 1:
      return PyvtkInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}


static PyMethodDef PyvtkInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInterpolatedVelocityField\nC++: static vtkInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInterpolatedVelocityField\nC++: vtkInterpolatedVelocityField *NewInstance()\n\n"},
  {"AddDataSet", PyvtkInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   "V.AddDataSet(vtkDataSet)\nC++: void AddDataSet(vtkDataSet *dataset) override;\n\nAdd a dataset used for the implicit function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF DATASET FOR THREAD SAFETY REASONS.\n"},
  {"FunctionValues", PyvtkInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate the velocity field f at point (x, y, z).\n"},
  {"SnapPointOnCell", PyvtkInterpolatedVelocityField_SnapPointOnCell, METH_VARARGS,
   "V.SnapPointOnCell([float, ...], [float, ...]) -> int\nC++: virtual int SnapPointOnCell(double *pOrigin, double *pProj)\n\nProject the provided point on current cell, current dataset.\n"},
  {"SetLastCellId", PyvtkInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "V.SetLastCellId(int, int)\nC++: void SetLastCellId(vtkIdType c, int dataindex) override;\nV.SetLastCellId(int)\nC++: void SetLastCellId(vtkIdType c) override;\n\nSet the cell id cached by the last evaluation within a specified\ndataset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkInterpolatedVelocityField", // tp_name
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
  PyvtkInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInterpolatedVelocityField_StaticNew()
{
  return vtkInterpolatedVelocityField::New();
}

PyObject *PyvtkInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInterpolatedVelocityField_Type, PyvtkInterpolatedVelocityField_Methods,
    "vtkInterpolatedVelocityField",
 &PyvtkInterpolatedVelocityField_StaticNew);

  PyTypeObject *pytype = &PyvtkInterpolatedVelocityField_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeInterpolatedVelocityField_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

