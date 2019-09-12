// python wrapper for vtkGenericInterpolatedVelocityField
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
#include "vtkGenericInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkFunctionSet_ClassNew
extern "C" { PyObject *PyvtkFunctionSet_ClassNew(); }
#define DECLARED_PyvtkFunctionSet_ClassNew
#endif

static const char *PyvtkGenericInterpolatedVelocityField_Doc =
  "vtkGenericInterpolatedVelocityField - Interface for obtaining\ninterpolated velocity values\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkGenericInterpolatedVelocityField acts as a continuous velocity\n"
  "field by performing cell interpolation on the underlying vtkDataSet.\n"
  "This is a concrete sub-class of vtkFunctionSet with\n"
  "NumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n"
  "(u,v,w). Normally, every time an evaluation is performed, the cell\n"
  "which contains the point (x,y,z) has to be found by calling FindCell.\n"
  "This is a computationally expansive operation. In certain cases, the\n"
  "cell search can be avoided or shortened by providing a guess for the\n"
  "cell iterator. For example, in streamline integration, the next\n"
  "evaluation is usually in the same or a neighbour cell. For this\n"
  "reason, vtkGenericInterpolatedVelocityField stores the last cell\n"
  "iterator. If caching is turned on, it uses this iterator as the\n"
  "starting point.\n\n"
  "@warning\n"
  "vtkGenericInterpolatedVelocityField is not thread safe. A new\n"
  "instance should be created by each thread.\n\n"
  "@sa\n"
  "vtkFunctionSet vtkGenericStreamTracer\n\n";


static PyObject *
PyvtkGenericInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericInterpolatedVelocityField *tempr = vtkGenericInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericInterpolatedVelocityField::NewInstance());

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
PyvtkGenericInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      op->vtkGenericInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkGenericInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0);
    }
    else
    {
      op->vtkGenericInterpolatedVelocityField::AddDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_ClearLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastCell();
    }
    else
    {
      op->vtkGenericInterpolatedVelocityField::ClearLastCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->GetLastCell() :
      op->vtkGenericInterpolatedVelocityField::GetLastCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      op->vtkGenericInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

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
PyvtkGenericInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCaching() :
      op->vtkGenericInterpolatedVelocityField::GetCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaching(temp0);
    }
    else
    {
      op->vtkGenericInterpolatedVelocityField::SetCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CachingOn();
    }
    else
    {
      op->vtkGenericInterpolatedVelocityField::CachingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CachingOff();
    }
    else
    {
      op->vtkGenericInterpolatedVelocityField::CachingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheHit() :
      op->vtkGenericInterpolatedVelocityField::GetCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkGenericInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkGenericInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

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
      op->vtkGenericInterpolatedVelocityField::SelectVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->GetLastDataSet() :
      op->vtkGenericInterpolatedVelocityField::GetLastDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericInterpolatedVelocityField *op = static_cast<vtkGenericInterpolatedVelocityField *>(vp);

  vtkGenericInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkGenericInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkGenericInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkGenericInterpolatedVelocityField\nC++: static vtkGenericInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericInterpolatedVelocityField\nC++: vtkGenericInterpolatedVelocityField *NewInstance()\n\n"},
  {"FunctionValues", PyvtkGenericInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {"AddDataSet", PyvtkGenericInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   "V.AddDataSet(vtkGenericDataSet)\nC++: virtual void AddDataSet(vtkGenericDataSet *dataset)\n\nAdd a dataset used for the implicit function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.\n"},
  {"ClearLastCell", PyvtkGenericInterpolatedVelocityField_ClearLastCell, METH_VARARGS,
   "V.ClearLastCell()\nC++: void ClearLastCell()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {"GetLastCell", PyvtkGenericInterpolatedVelocityField_GetLastCell, METH_VARARGS,
   "V.GetLastCell() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *GetLastCell()\n\nReturn the cell cached from last evaluation.\n"},
  {"GetLastLocalCoordinates", PyvtkGenericInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   "V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nReturns the interpolation weights cached from last evaluation if\nthe cached cell is valid (returns 1). Otherwise, it does not\nchange w and returns 0.\n"},
  {"GetCaching", PyvtkGenericInterpolatedVelocityField_GetCaching, METH_VARARGS,
   "V.GetCaching() -> int\nC++: virtual vtkTypeBool GetCaching()\n\nTurn caching on/off.\n"},
  {"SetCaching", PyvtkGenericInterpolatedVelocityField_SetCaching, METH_VARARGS,
   "V.SetCaching(int)\nC++: virtual void SetCaching(vtkTypeBool _arg)\n\nTurn caching on/off.\n"},
  {"CachingOn", PyvtkGenericInterpolatedVelocityField_CachingOn, METH_VARARGS,
   "V.CachingOn()\nC++: virtual void CachingOn()\n\nTurn caching on/off.\n"},
  {"CachingOff", PyvtkGenericInterpolatedVelocityField_CachingOff, METH_VARARGS,
   "V.CachingOff()\nC++: virtual void CachingOff()\n\nTurn caching on/off.\n"},
  {"GetCacheHit", PyvtkGenericInterpolatedVelocityField_GetCacheHit, METH_VARARGS,
   "V.GetCacheHit() -> int\nC++: virtual int GetCacheHit()\n\nCaching statistics.\n"},
  {"GetCacheMiss", PyvtkGenericInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   "V.GetCacheMiss() -> int\nC++: virtual int GetCacheMiss()\n\nCaching statistics.\n"},
  {"GetVectorsSelection", PyvtkGenericInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   "V.GetVectorsSelection() -> string\nC++: virtual char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in nullptr and the filter will use the\nactive vector array.\n"},
  {"SelectVectors", PyvtkGenericInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in nullptr and the filter will use the\nactive vector array.\n"},
  {"GetLastDataSet", PyvtkGenericInterpolatedVelocityField_GetLastDataSet, METH_VARARGS,
   "V.GetLastDataSet() -> vtkGenericDataSet\nC++: virtual vtkGenericDataSet *GetLastDataSet()\n\nReturns the last dataset that was visited. Can be used as a first\nguess as to where the next point will be as well as to avoid\nsearching through all datasets to get more information about the\npoint.\n"},
  {"CopyParameters", PyvtkGenericInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "V.CopyParameters(vtkGenericInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkGenericInterpolatedVelocityField *from)\n\nCopy the user set parameters from source. This copies the Caching\nparameters. Sub-classes can add more after chaining.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericInterpolatedVelocityField", // tp_name
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
  PyvtkGenericInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericInterpolatedVelocityField_StaticNew()
{
  return vtkGenericInterpolatedVelocityField::New();
}

PyObject *PyvtkGenericInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericInterpolatedVelocityField_Type, PyvtkGenericInterpolatedVelocityField_Methods,
    "vtkGenericInterpolatedVelocityField",
 &PyvtkGenericInterpolatedVelocityField_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericInterpolatedVelocityField_Type;

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

void PyVTKAddFile_vtkGenericInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

