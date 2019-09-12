// python wrapper for vtkShepardMethod
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
#include "vtkShepardMethod.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShepardMethod(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShepardMethod_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkShepardMethod_Doc =
  "vtkShepardMethod - interpolate points and associated scalars onto\nvolume using the method of Shepard\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkShepardMethod is a filter used to interpolate point scalar values\n"
  "using Shepard's method. The method works by resampling the scalars\n"
  "associated with points defined on an arbitrary dataset onto a volume\n"
  "(i.e., structured points) dataset. The influence functions are\n"
  "described as \"inverse distance weighted\". Once the interpolation is\n"
  "performed across the volume, the usual volume visualization\n"
  "techniques (e.g., iso-contouring or volume rendering) can be used.\n\n"
  "Note that this implementation also provides the ability to specify\n"
  "the power parameter p. Given the generalized Inverse Distance\n"
  "Weighting (IDW) function with distance between points measured as\n"
  "d(x,xi), p is defined as:\n\n"
  "u(x) = Sum(wi(x) * ui) / Sum(wi(x)) if d(x,xi) != 0 u(x) = ui        \n"
  "                  if d(x,xi) == 0\n\n"
  "where wi(x) = 1 / (d(x,xi)^p  Typically p=2, so the weights wi(x) are\n"
  "the inverse of the distance squared. However, power parameters > 2\n"
  "can be used which assign higher weights for data closer to the\n"
  "interpolated point; or <2 which assigns greater weight to points\n"
  "further away. (Note that if p!=2, performance may be significantly\n"
  "impacted as the algorithm is tuned for p=2.)\n\n"
  "@warning\n"
  "Strictly speaking, this is a modified Shepard's methodsince only\n"
  "points within the MaxiumDistance are used for interpolation. By\n"
  "setting the maximum distance to include the entire bounding box and\n"
  "therefore all points, the class executes much slower but incorporates\n"
  "all points into the interpolation process (i.e., a pure Shepard\n"
  "method).\n\n"
  "@warning\n"
  "The input to this filter is any dataset type. This filter can be used\n"
  "to resample the points of any type of dataset onto the output volume;\n"
  "i.e., the input data need not be unstructured with explicit point\n"
  "representations.\n\n"
  "@warning\n"
  "The bounds of the data (i.e., the sample space) is automatically\n"
  "computed if not set by the user.\n\n"
  "@warning\n"
  "If you use a maximum distance less than 1.0 (i.e., using a modified\n"
  "Shephard's method), some output points may never receive a\n"
  "contribution. The final value of these points can be specified with\n"
  "the \"NullValue\" instance variable.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkGaussianSplatter vtkCheckerboardSplatter\n\n";


static PyObject *
PyvtkShepardMethod_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShepardMethod::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShepardMethod::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShepardMethod *tempr = vtkShepardMethod::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShepardMethod *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShepardMethod::NewInstance());

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
PyvtkShepardMethod_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkShepardMethod::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkShepardMethod::SetSampleDimensions(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkShepardMethod_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkShepardMethod_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}



static PyObject *
PyvtkShepardMethod_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkShepardMethod::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkShepardMethod::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkShepardMethod::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkShepardMethod::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkShepardMethod::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkShepardMethod::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNullValue() :
      op->vtkShepardMethod::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkShepardMethod::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkShepardMethod::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkShepardMethod_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkShepardMethod_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkShepardMethod_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkShepardMethod_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkShepardMethod::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_SetPowerParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPowerParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPowerParameter(temp0);
    }
    else
    {
      op->vtkShepardMethod::SetPowerParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetPowerParameterMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerParameterMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPowerParameterMinValue() :
      op->vtkShepardMethod::GetPowerParameterMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetPowerParameterMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerParameterMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPowerParameterMaxValue() :
      op->vtkShepardMethod::GetPowerParameterMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_GetPowerParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPowerParameter() :
      op->vtkShepardMethod::GetPowerParameter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardMethod_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardMethod *op = static_cast<vtkShepardMethod *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0, temp1) :
      op->vtkShepardMethod::ComputeModelBounds(temp0, temp1));

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

static PyMethodDef PyvtkShepardMethod_Methods[] = {
  {"IsTypeOf", PyvtkShepardMethod_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkShepardMethod_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkShepardMethod_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShepardMethod\nC++: static vtkShepardMethod *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkShepardMethod_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShepardMethod\nC++: vtkShepardMethod *NewInstance()\n\nStandard type and print methods.\n"},
  {"SetSampleDimensions", PyvtkShepardMethod_SetSampleDimensions, METH_VARARGS,
   "V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet the i-j-k dimensions on which to interpolate the input\npoints.\n"},
  {"GetSampleDimensions", PyvtkShepardMethod_GetSampleDimensions, METH_VARARGS,
   "V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nRetrieve the i-j-k dimensions on which to interpolate the input\npoints.\n"},
  {"SetMaximumDistance", PyvtkShepardMethod_SetMaximumDistance, METH_VARARGS,
   "V.SetMaximumDistance(float)\nC++: virtual void SetMaximumDistance(double _arg)\n\nSpecify the maximum influence distance of each input point. This\ndistance is a fraction of the length of the diagonal of the\nsample space. Thus, values of 1.0 will cause each input point to\ninfluence all points in the volume dataset. Values less than 1.0\ncan improve performance significantly. By default the maximum\ndistance is 0.25.\n"},
  {"GetMaximumDistanceMinValue", PyvtkShepardMethod_GetMaximumDistanceMinValue, METH_VARARGS,
   "V.GetMaximumDistanceMinValue() -> float\nC++: virtual double GetMaximumDistanceMinValue()\n\nSpecify the maximum influence distance of each input point. This\ndistance is a fraction of the length of the diagonal of the\nsample space. Thus, values of 1.0 will cause each input point to\ninfluence all points in the volume dataset. Values less than 1.0\ncan improve performance significantly. By default the maximum\ndistance is 0.25.\n"},
  {"GetMaximumDistanceMaxValue", PyvtkShepardMethod_GetMaximumDistanceMaxValue, METH_VARARGS,
   "V.GetMaximumDistanceMaxValue() -> float\nC++: virtual double GetMaximumDistanceMaxValue()\n\nSpecify the maximum influence distance of each input point. This\ndistance is a fraction of the length of the diagonal of the\nsample space. Thus, values of 1.0 will cause each input point to\ninfluence all points in the volume dataset. Values less than 1.0\ncan improve performance significantly. By default the maximum\ndistance is 0.25.\n"},
  {"GetMaximumDistance", PyvtkShepardMethod_GetMaximumDistance, METH_VARARGS,
   "V.GetMaximumDistance() -> float\nC++: virtual double GetMaximumDistance()\n\nSpecify the maximum influence distance of each input point. This\ndistance is a fraction of the length of the diagonal of the\nsample space. Thus, values of 1.0 will cause each input point to\ninfluence all points in the volume dataset. Values less than 1.0\ncan improve performance significantly. By default the maximum\ndistance is 0.25.\n"},
  {"SetNullValue", PyvtkShepardMethod_SetNullValue, METH_VARARGS,
   "V.SetNullValue(float)\nC++: virtual void SetNullValue(double _arg)\n\nSet the value for output points not receiving a contribution from\nany input point(s). Output points may not receive a contribution\nwhen the MaximumDistance < 1.\n"},
  {"GetNullValue", PyvtkShepardMethod_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> float\nC++: virtual double GetNullValue()\n\nSet the value for output points not receiving a contribution from\nany input point(s). Output points may not receive a contribution\nwhen the MaximumDistance < 1.\n"},
  {"SetModelBounds", PyvtkShepardMethod_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {"GetModelBounds", PyvtkShepardMethod_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the position in space to perform the sampling. The\nModelBounds and SampleDimensions together define the output\nvolume. (Note: if the ModelBounds are set to an invalid state\n[zero or negative volume] then the bounds are computed\nautomatically.)\n"},
  {"SetPowerParameter", PyvtkShepardMethod_SetPowerParameter, METH_VARARGS,
   "V.SetPowerParameter(float)\nC++: virtual void SetPowerParameter(double _arg)\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"GetPowerParameterMinValue", PyvtkShepardMethod_GetPowerParameterMinValue, METH_VARARGS,
   "V.GetPowerParameterMinValue() -> float\nC++: virtual double GetPowerParameterMinValue()\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"GetPowerParameterMaxValue", PyvtkShepardMethod_GetPowerParameterMaxValue, METH_VARARGS,
   "V.GetPowerParameterMaxValue() -> float\nC++: virtual double GetPowerParameterMaxValue()\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"GetPowerParameter", PyvtkShepardMethod_GetPowerParameter, METH_VARARGS,
   "V.GetPowerParameter() -> float\nC++: virtual double GetPowerParameter()\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"ComputeModelBounds", PyvtkShepardMethod_ComputeModelBounds, METH_VARARGS,
   "V.ComputeModelBounds([float, float, float], [float, float, float])\n     -> float\nC++: double ComputeModelBounds(double origin[3], double ar[3])\n\nCompute ModelBounds from the input geometry.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShepardMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkShepardMethod", // tp_name
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
  PyvtkShepardMethod_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShepardMethod_StaticNew()
{
  return vtkShepardMethod::New();
}

PyObject *PyvtkShepardMethod_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShepardMethod_Type, PyvtkShepardMethod_Methods,
    "vtkShepardMethod",
 &PyvtkShepardMethod_StaticNew);

  PyTypeObject *pytype = &PyvtkShepardMethod_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShepardMethod(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShepardMethod_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShepardMethod", o) != 0)
  {
    Py_DECREF(o);
  }

}

