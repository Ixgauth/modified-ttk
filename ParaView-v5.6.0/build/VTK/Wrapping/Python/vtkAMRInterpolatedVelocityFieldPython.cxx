// python wrapper for vtkAMRInterpolatedVelocityField
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
#include "vtkAMRInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
#endif

static const char *PyvtkAMRInterpolatedVelocityField_Doc =
  "vtkAMRInterpolatedVelocityField - A concrete class for obtaining\n the interpolated velocity values at a point in AMR data.\n\n"
  "Superclass: vtkAbstractInterpolatedVelocityField\n\n"
  "The main functionality supported here is the point location inside\n"
  "vtkOverlappingAMR data set.\n\n";


static PyObject *
PyvtkAMRInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRInterpolatedVelocityField *tempr = vtkAMRInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRInterpolatedVelocityField::NewInstance());

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
PyvtkAMRInterpolatedVelocityField_GetAmrDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmrDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetAmrDataSet() :
      op->vtkAMRInterpolatedVelocityField::GetAmrDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetAMRData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->SetAMRData(temp0);
    }
    else
    {
      op->vtkAMRInterpolatedVelocityField::SetAMRData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetLastDataSetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLastDataSetLocation(temp0, temp1) :
      op->vtkAMRInterpolatedVelocityField::GetLastDataSetLocation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
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


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetLastDataSet(temp0, temp1) :
      op->vtkAMRInterpolatedVelocityField::SetLastDataSet(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::SetLastCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 1:
      return PyvtkAMRInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}



static PyObject *
PyvtkAMRInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkAMRInterpolatedVelocityField_FindGrid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindGrid");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkOverlappingAMR *temp1 = nullptr;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = vtkAMRInterpolatedVelocityField::FindGrid(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkAMRInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRInterpolatedVelocityField\nC++: static vtkAMRInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRInterpolatedVelocityField\nC++: vtkAMRInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetAmrDataSet", PyvtkAMRInterpolatedVelocityField_GetAmrDataSet, METH_VARARGS,
   "V.GetAmrDataSet() -> vtkOverlappingAMR\nC++: virtual vtkOverlappingAMR *GetAmrDataSet()\n\n"},
  {"SetAMRData", PyvtkAMRInterpolatedVelocityField_SetAMRData, METH_VARARGS,
   "V.SetAMRData(vtkOverlappingAMR)\nC++: void SetAMRData(vtkOverlappingAMR *amr)\n\n"},
  {"GetLastDataSetLocation", PyvtkAMRInterpolatedVelocityField_GetLastDataSetLocation, METH_VARARGS,
   "V.GetLastDataSetLocation(int, int) -> bool\nC++: bool GetLastDataSetLocation(unsigned int &level,\n    unsigned int &id)\n\n"},
  {"SetLastDataSet", PyvtkAMRInterpolatedVelocityField_SetLastDataSet, METH_VARARGS,
   "V.SetLastDataSet(int, int) -> bool\nC++: bool SetLastDataSet(int level, int id)\n\n"},
  {"SetLastCellId", PyvtkAMRInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "V.SetLastCellId(int, int)\nC++: void SetLastCellId(vtkIdType c, int dataindex) override;\nV.SetLastCellId(int)\nC++: void SetLastCellId(vtkIdType c) override;\n\nSet the id of the most recently visited cell of a dataset.\n"},
  {"FunctionValues", PyvtkAMRInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate the velocity field f at point p. If it succeeds, then\nboth the last data set (this->LastDataSet) and the last data set\nlocation (this->LastLevel, this->LastId) will be set according to\nwhere p is found.  If it fails, either p is out of bound, in\nwhich case both the last data set and the last location will be\ninvalid or, in a multi-process setting, p is inbound but not on\nthe processor.  In the last case, the last data set location is\nstill valid\n"},
  {"FindGrid", PyvtkAMRInterpolatedVelocityField_FindGrid, METH_VARARGS,
   "V.FindGrid([float, float, float], vtkOverlappingAMR, int, int)\n    -> bool\nC++: static bool FindGrid(double q[3], vtkOverlappingAMR *amrds,\n    unsigned int &level, unsigned int &gridId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkAMRInterpolatedVelocityField", // tp_name
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
  PyvtkAMRInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRInterpolatedVelocityField_StaticNew()
{
  return vtkAMRInterpolatedVelocityField::New();
}

PyObject *PyvtkAMRInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRInterpolatedVelocityField_Type, PyvtkAMRInterpolatedVelocityField_Methods,
    "vtkAMRInterpolatedVelocityField",
 &PyvtkAMRInterpolatedVelocityField_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRInterpolatedVelocityField_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractInterpolatedVelocityField_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

