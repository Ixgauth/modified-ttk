// python wrapper for vtkImageGaussianSmooth
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
#include "vtkImageGaussianSmooth.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageGaussianSmooth(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageGaussianSmooth_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageGaussianSmooth_Doc =
  "vtkImageGaussianSmooth - Performs a gaussian convolution.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageGaussianSmooth implements a convolution of the input image\n"
  "with a gaussian. Supports from one to three dimensional convolutions.\n\n";


static PyObject *
PyvtkImageGaussianSmooth_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageGaussianSmooth::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGaussianSmooth::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageGaussianSmooth *tempr = vtkImageGaussianSmooth::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageGaussianSmooth *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGaussianSmooth::NewInstance());

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
PyvtkImageGaussianSmooth_SetStandardDeviations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviations(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviations(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviations(temp0, temp1);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviations");
  return nullptr;
}



static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviation(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviation(temp0, temp1);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s1(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s2(self, args);
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviation");
  return nullptr;
}



static PyObject *
PyvtkImageGaussianSmooth_GetStandardDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStandardDeviations() :
      op->vtkImageGaussianSmooth::GetStandardDeviations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactors(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactors(temp0, temp1);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusFactors");
  return nullptr;
}



static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactor(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetRadiusFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRadiusFactors() :
      op->vtkImageGaussianSmooth::GetRadiusFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGaussianSmooth::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageGaussianSmooth_Methods[] = {
  {"IsTypeOf", PyvtkImageGaussianSmooth_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageGaussianSmooth_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageGaussianSmooth_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageGaussianSmooth\nC++: static vtkImageGaussianSmooth *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageGaussianSmooth_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageGaussianSmooth\nC++: vtkImageGaussianSmooth *NewInstance()\n\n"},
  {"SetStandardDeviations", PyvtkImageGaussianSmooth_SetStandardDeviations, METH_VARARGS,
   "V.SetStandardDeviations(float, float, float)\nC++: void SetStandardDeviations(double, double, double)\nV.SetStandardDeviations((float, float, float))\nC++: void SetStandardDeviations(double a[3])\nV.SetStandardDeviations(float, float)\nC++: void SetStandardDeviations(double a, double b)\n\n"},
  {"SetStandardDeviation", PyvtkImageGaussianSmooth_SetStandardDeviation, METH_VARARGS,
   "V.SetStandardDeviation(float)\nC++: void SetStandardDeviation(double std)\nV.SetStandardDeviation(float, float)\nC++: void SetStandardDeviation(double a, double b)\nV.SetStandardDeviation(float, float, float)\nC++: void SetStandardDeviation(double a, double b, double c)\n\nSets/Gets the Standard deviation of the gaussian in pixel units.\n"},
  {"GetStandardDeviations", PyvtkImageGaussianSmooth_GetStandardDeviations, METH_VARARGS,
   "V.GetStandardDeviations() -> (float, float, float)\nC++: double *GetStandardDeviations()\n\n"},
  {"SetRadiusFactors", PyvtkImageGaussianSmooth_SetRadiusFactors, METH_VARARGS,
   "V.SetRadiusFactors(float, float, float)\nC++: void SetRadiusFactors(double, double, double)\nV.SetRadiusFactors((float, float, float))\nC++: void SetRadiusFactors(double a[3])\nV.SetRadiusFactors(float, float)\nC++: void SetRadiusFactors(double f, double f2)\n\n"},
  {"SetRadiusFactor", PyvtkImageGaussianSmooth_SetRadiusFactor, METH_VARARGS,
   "V.SetRadiusFactor(float)\nC++: void SetRadiusFactor(double f)\n\nSets/Gets the Radius Factors of the gaussian (no unit). The\nradius factors determine how far out the gaussian kernel will go\nbefore being clamped to zero.\n"},
  {"GetRadiusFactors", PyvtkImageGaussianSmooth_GetRadiusFactors, METH_VARARGS,
   "V.GetRadiusFactors() -> (float, float, float)\nC++: double *GetRadiusFactors()\n\n"},
  {"SetDimensionality", PyvtkImageGaussianSmooth_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: virtual void SetDimensionality(int _arg)\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {"GetDimensionality", PyvtkImageGaussianSmooth_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageGaussianSmooth_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageGaussianSmooth", // tp_name
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
  PyvtkImageGaussianSmooth_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageGaussianSmooth_StaticNew()
{
  return vtkImageGaussianSmooth::New();
}

PyObject *PyvtkImageGaussianSmooth_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageGaussianSmooth_Type, PyvtkImageGaussianSmooth_Methods,
    "vtkImageGaussianSmooth",
 &PyvtkImageGaussianSmooth_StaticNew);

  PyTypeObject *pytype = &PyvtkImageGaussianSmooth_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageGaussianSmooth(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageGaussianSmooth_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageGaussianSmooth", o) != 0)
  {
    Py_DECREF(o);
  }

}

