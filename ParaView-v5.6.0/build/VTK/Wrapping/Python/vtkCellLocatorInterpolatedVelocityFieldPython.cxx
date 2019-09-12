// python wrapper for vtkCellLocatorInterpolatedVelocityField
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
#include "vtkCellLocatorInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellLocatorInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkCompositeInterpolatedVelocityField_ClassNew
#endif

static const char *PyvtkCellLocatorInterpolatedVelocityField_Doc =
  "vtkCellLocatorInterpolatedVelocityField - A concrete class for\n obtaining the interpolated velocity values at a point.\n\n"
  "Superclass: vtkCompositeInterpolatedVelocityField\n\n"
  "vtkCellLocatorInterpolatedVelocityField acts as a continuous velocity\n"
  " field via cell interpolation on a vtkDataSet,\n"
  "NumberOfIndependentVariables\n"
  " = 4 (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). As a concrete\n"
  "sub-class\n"
  " of vtkCompositeInterpolatedVelocityField, it adopts\n"
  "vtkAbstractCellLocator's\n"
  " sub-classes, e.g., vtkCellLocator and vtkModifiedBSPTree, without\n"
  "the use\n"
  " of vtkPointLocator ( employed by vtkDataSet/vtkPointSet::FindCell()\n"
  "in\n"
  " vtkInterpolatedVelocityField ).\n"
  "vtkCellLocatorInterpolatedVelocityField\n"
  " adopts one level of cell caching. Specifically, if the next point is\n"
  "still\n"
  " within the previous cell, cell location is then simply skipped and\n"
  "vtkCell::\n"
  " EvaluatePosition() is called to obtain the new parametric\n"
  "coordinates and\n"
  " weights that are used to interpolate the velocity function values\n"
  "across the\n"
  " vertices of this cell. Otherwise a global cell (the target\n"
  "containing the next\n"
  " point) location is instead directly invoked, without exploiting the\n"
  "clue that\n"
  " vtkInterpolatedVelocityField makes use of from the previous cell (an\n"
  "immediate\n"
  " neighbor). Although ignoring the neighbor cell may incur a\n"
  "relatively high\n"
  " computational cost, vtkCellLocatorInterpolatedVelocityField is more\n"
  "robust in\n"
  " locating the target cell than its sibling class\n"
  "vtkInterpolatedVelocityField.\n\n"
  "@warning\n"
  " vtkCellLocatorInterpolatedVelocityField is not thread safe. A new\n"
  "instance\n"
  " should be created by each thread.\n\n"
  "@sa\n"
  " vtkCompositeInterpolatedVelocityField vtkInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n\n";


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellLocatorInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellLocatorInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellLocatorInterpolatedVelocityField *tempr = vtkCellLocatorInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellLocatorInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellLocatorInterpolatedVelocityField::NewInstance());

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
PyvtkCellLocatorInterpolatedVelocityField_GetLastCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetLastCellLocator() :
      op->vtkCellLocatorInterpolatedVelocityField::GetLastCellLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_GetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetCellLocatorPrototype() :
      op->vtkCellLocatorInterpolatedVelocityField::GetCellLocatorPrototype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetCellLocatorPrototype(temp0);
    }
    else
    {
      op->vtkCellLocatorInterpolatedVelocityField::SetCellLocatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkCellLocatorInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

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
      op->vtkCellLocatorInterpolatedVelocityField::AddDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

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
      op->vtkCellLocatorInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

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
      op->vtkCellLocatorInterpolatedVelocityField::SetLastCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

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
      op->vtkCellLocatorInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 1:
      return PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}


static PyMethodDef PyvtkCellLocatorInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkCellLocatorInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellLocatorInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellLocatorInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCellLocatorInterpolatedVelocityField\nC++: static vtkCellLocatorInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellLocatorInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellLocatorInterpolatedVelocityField\nC++: vtkCellLocatorInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetLastCellLocator", PyvtkCellLocatorInterpolatedVelocityField_GetLastCellLocator, METH_VARARGS,
   "V.GetLastCellLocator() -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetLastCellLocator()\n\nGet the cell locator attached to the most recently visited\ndataset.\n"},
  {"GetCellLocatorPrototype", PyvtkCellLocatorInterpolatedVelocityField_GetCellLocatorPrototype, METH_VARARGS,
   "V.GetCellLocatorPrototype() -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetCellLocatorPrototype()\n\nGet the prototype of the cell locator that is used for\ninterpolating the velocity field during integration.\n"},
  {"SetCellLocatorPrototype", PyvtkCellLocatorInterpolatedVelocityField_SetCellLocatorPrototype, METH_VARARGS,
   "V.SetCellLocatorPrototype(vtkAbstractCellLocator)\nC++: void SetCellLocatorPrototype(\n    vtkAbstractCellLocator *prototype)\n\nSet a prototype of the cell locator that is used for\ninterpolating the velocity field during integration.\n"},
  {"CopyParameters", PyvtkCellLocatorInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "V.CopyParameters(vtkAbstractInterpolatedVelocityField)\nC++: void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from) override;\n\nImport parameters. Sub-classes can add more after chaining.\n"},
  {"AddDataSet", PyvtkCellLocatorInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   "V.AddDataSet(vtkDataSet)\nC++: void AddDataSet(vtkDataSet *dataset) override;\n\nAdd a dataset coupled with a cell locator (of type\nvtkAbstractCellLocator) for vector function evaluation. Note the\nuse of a vtkAbstractCellLocator enables robust cell location. If\nmore than one dataset is added, the evaluation point is searched\nin all until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {"FunctionValues", PyvtkCellLocatorInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate the velocity field f at point (x, y, z).\n"},
  {"SetLastCellId", PyvtkCellLocatorInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "V.SetLastCellId(int, int)\nC++: void SetLastCellId(vtkIdType c, int dataindex) override;\nV.SetLastCellId(int)\nC++: void SetLastCellId(vtkIdType c) override;\n\nSet the cell id cached by the last evaluation within a specified\ndataset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellLocatorInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkCellLocatorInterpolatedVelocityField", // tp_name
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
  PyvtkCellLocatorInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellLocatorInterpolatedVelocityField_StaticNew()
{
  return vtkCellLocatorInterpolatedVelocityField::New();
}

PyObject *PyvtkCellLocatorInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellLocatorInterpolatedVelocityField_Type, PyvtkCellLocatorInterpolatedVelocityField_Methods,
    "vtkCellLocatorInterpolatedVelocityField",
 &PyvtkCellLocatorInterpolatedVelocityField_StaticNew);

  PyTypeObject *pytype = &PyvtkCellLocatorInterpolatedVelocityField_Type;

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

void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellLocatorInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellLocatorInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

