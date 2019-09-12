// python wrapper for vtkmHistogram
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
#include "vtkmHistogram.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmHistogram(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmHistogram_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkmHistogram_Doc =
  "vtkmHistogram - generate a histogram out of a scalar data\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkmHistogram is a filter that generates a histogram out of a scalar\n"
  "data. The histogram consists of a certain number of bins specified by\n"
  "the user, and the user can fetch the range and bin delta after\n"
  "completion.\n\n";


static PyObject *
PyvtkmHistogram_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmHistogram::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmHistogram *tempr = vtkmHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmHistogram::NewInstance());

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
PyvtkmHistogram_SetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0);
    }
    else
    {
      op->vtkmHistogram::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkmHistogram::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_SetCustomBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomBinRange(temp0, temp1);
    }
    else
    {
      op->vtkmHistogram::SetCustomBinRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkmHistogram_SetCustomBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomBinRange(temp0);
    }
    else
    {
      op->vtkmHistogram::SetCustomBinRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkmHistogram_SetCustomBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkmHistogram_SetCustomBinRange_s1(self, args);
    case 1:
      return PyvtkmHistogram_SetCustomBinRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBinRange");
  return nullptr;
}



static PyObject *
PyvtkmHistogram_GetCustomBinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBinRange() :
      op->vtkmHistogram::GetCustomBinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_SetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomBinRanges(temp0);
    }
    else
    {
      op->vtkmHistogram::SetUseCustomBinRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_GetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomBinRanges() :
      op->vtkmHistogram::GetUseCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_UseCustomBinRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomBinRangesOn();
    }
    else
    {
      op->vtkmHistogram::UseCustomBinRangesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_UseCustomBinRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomBinRangesOff();
    }
    else
    {
      op->vtkmHistogram::UseCustomBinRangesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_SetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterBinsAroundMinAndMax(temp0);
    }
    else
    {
      op->vtkmHistogram::SetCenterBinsAroundMinAndMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_GetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterBinsAroundMinAndMax() :
      op->vtkmHistogram::GetCenterBinsAroundMinAndMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_CenterBinsAroundMinAndMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterBinsAroundMinAndMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterBinsAroundMinAndMaxOn();
    }
    else
    {
      op->vtkmHistogram::CenterBinsAroundMinAndMaxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_CenterBinsAroundMinAndMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterBinsAroundMinAndMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterBinsAroundMinAndMaxOff();
    }
    else
    {
      op->vtkmHistogram::CenterBinsAroundMinAndMaxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_GetComputedRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedRange() :
      op->vtkmHistogram::GetComputedRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkmHistogram_GetBinDelta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinDelta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmHistogram *op = static_cast<vtkmHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBinDelta() :
      op->vtkmHistogram::GetBinDelta());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkmHistogram_Methods[] = {
  {"IsTypeOf", PyvtkmHistogram_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmHistogram_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmHistogram_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmHistogram\nC++: static vtkmHistogram *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmHistogram_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmHistogram\nC++: vtkmHistogram *NewInstance()\n\n"},
  {"SetNumberOfBins", PyvtkmHistogram_SetNumberOfBins, METH_VARARGS,
   "V.SetNumberOfBins(int)\nC++: virtual void SetNumberOfBins(size_t _arg)\n\nSpecify number of bins.  Default is 10.\n"},
  {"GetNumberOfBins", PyvtkmHistogram_GetNumberOfBins, METH_VARARGS,
   "V.GetNumberOfBins() -> int\nC++: virtual size_t GetNumberOfBins()\n\nSpecify number of bins.  Default is 10.\n"},
  {"SetCustomBinRange", PyvtkmHistogram_SetCustomBinRange, METH_VARARGS,
   "V.SetCustomBinRange(float, float)\nC++: void SetCustomBinRange(double, double)\nV.SetCustomBinRange((float, float))\nC++: void SetCustomBinRange(double a[2])\n\n"},
  {"GetCustomBinRange", PyvtkmHistogram_GetCustomBinRange, METH_VARARGS,
   "V.GetCustomBinRange() -> (float, float)\nC++: double *GetCustomBinRange()\n\n"},
  {"SetUseCustomBinRanges", PyvtkmHistogram_SetUseCustomBinRanges, METH_VARARGS,
   "V.SetUseCustomBinRanges(bool)\nC++: virtual void SetUseCustomBinRanges(bool _arg)\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"GetUseCustomBinRanges", PyvtkmHistogram_GetUseCustomBinRanges, METH_VARARGS,
   "V.GetUseCustomBinRanges() -> bool\nC++: virtual bool GetUseCustomBinRanges()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"UseCustomBinRangesOn", PyvtkmHistogram_UseCustomBinRangesOn, METH_VARARGS,
   "V.UseCustomBinRangesOn()\nC++: virtual void UseCustomBinRangesOn()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"UseCustomBinRangesOff", PyvtkmHistogram_UseCustomBinRangesOff, METH_VARARGS,
   "V.UseCustomBinRangesOff()\nC++: virtual void UseCustomBinRangesOff()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"SetCenterBinsAroundMinAndMax", PyvtkmHistogram_SetCenterBinsAroundMinAndMax, METH_VARARGS,
   "V.SetCenterBinsAroundMinAndMax(bool)\nC++: virtual void SetCenterBinsAroundMinAndMax(bool _arg)\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"GetCenterBinsAroundMinAndMax", PyvtkmHistogram_GetCenterBinsAroundMinAndMax, METH_VARARGS,
   "V.GetCenterBinsAroundMinAndMax() -> bool\nC++: virtual bool GetCenterBinsAroundMinAndMax()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"CenterBinsAroundMinAndMaxOn", PyvtkmHistogram_CenterBinsAroundMinAndMaxOn, METH_VARARGS,
   "V.CenterBinsAroundMinAndMaxOn()\nC++: virtual void CenterBinsAroundMinAndMaxOn()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"CenterBinsAroundMinAndMaxOff", PyvtkmHistogram_CenterBinsAroundMinAndMaxOff, METH_VARARGS,
   "V.CenterBinsAroundMinAndMaxOff()\nC++: virtual void CenterBinsAroundMinAndMaxOff()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"GetComputedRange", PyvtkmHistogram_GetComputedRange, METH_VARARGS,
   "V.GetComputedRange() -> (float, float)\nC++: double *GetComputedRange()\n\nReturn the range used to generate the histogram.\n"},
  {"GetBinDelta", PyvtkmHistogram_GetBinDelta, METH_VARARGS,
   "V.GetBinDelta() -> float\nC++: virtual double GetBinDelta()\n\nReturn the bin delta of the computed field.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmHistogram_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmHistogram", // tp_name
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
  PyvtkmHistogram_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmHistogram_StaticNew()
{
  return vtkmHistogram::New();
}

PyObject *PyvtkmHistogram_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmHistogram_Type, PyvtkmHistogram_Methods,
    "vtkmHistogram",
 &PyvtkmHistogram_StaticNew);

  PyTypeObject *pytype = &PyvtkmHistogram_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmHistogram(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmHistogram_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmHistogram", o) != 0)
  {
    Py_DECREF(o);
  }

}

