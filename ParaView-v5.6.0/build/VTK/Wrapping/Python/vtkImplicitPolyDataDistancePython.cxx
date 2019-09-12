// python wrapper for vtkImplicitPolyDataDistance
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
#include "vtkImplicitPolyDataDistance.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitPolyDataDistance(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitPolyDataDistance_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkImplicitPolyDataDistance_Doc =
  "vtkImplicitPolyDataDistance - Implicit function that computes the\ndistance from a point x to the nearest point p on an input\nvtkPolyData.\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "The sign of the function is set to the sign of the dot product\n"
  "between the angle-weighted pseudonormal at the nearest surface point\n"
  "and the vector x - p. Points interior to the geometry have a negative\n"
  "distance, points on the exterior have a positive distance, and points\n"
  "on the input vtkPolyData have a distance of zero. The gradient of the\n"
  "function is the angle-weighted pseudonormal at the nearest point.\n\n"
  "Baerentzen, J. A. and Aanaes, H. (2005). Signed distance computation\n"
  "using the angle weighted pseudonormal. IEEE Transactions on\n"
  "Visualization and Computer Graphics, 11:243-253.\n\n"
  "This code was contributed in the VTK Journal paper: \"Boolean Operations on Surfaces in VTK Without External\n"
  "Libraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\n"
  "http://hdl.handle.net/10380/3262\n"
  "http://www.midasjournal.org/browse/publication/797\n\n";


static PyObject *
PyvtkImplicitPolyDataDistance_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitPolyDataDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPolyDataDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitPolyDataDistance *tempr = vtkImplicitPolyDataDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPolyDataDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPolyDataDistance::NewInstance());

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
PyvtkImplicitPolyDataDistance_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitPolyDataDistance::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitPolyDataDistance::EvaluateFunction(temp0));

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
PyvtkImplicitPolyDataDistance_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitPolyDataDistance::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitPolyDataDistance_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitPolyDataDistance_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitPolyDataDistance_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

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

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::EvaluateGradient(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_EvaluateFunctionAndGetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunctionAndGetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

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
      op->EvaluateFunctionAndGetClosestPoint(temp0, temp1) :
      op->vtkImplicitPolyDataDistance::EvaluateFunctionAndGetClosestPoint(temp0, temp1));

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
PyvtkImplicitPolyDataDistance_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetNoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoValue(temp0);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetNoValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_GetNoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNoValue() :
      op->vtkImplicitPolyDataDistance::GetNoValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetNoGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

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
      op->SetNoGradient(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetNoGradient(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_SetNoGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNoGradient(temp0);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetNoGradient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_SetNoGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPolyDataDistance_SetNoGradient_s1(self, args);
    case 1:
      return PyvtkImplicitPolyDataDistance_SetNoGradient_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNoGradient");
  return nullptr;
}



static PyObject *
PyvtkImplicitPolyDataDistance_GetNoGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNoGradient() :
      op->vtkImplicitPolyDataDistance::GetNoGradient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetNoClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

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
      op->SetNoClosestPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetNoClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_SetNoClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNoClosestPoint(temp0);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetNoClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPolyDataDistance_SetNoClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPolyDataDistance_SetNoClosestPoint_s1(self, args);
    case 1:
      return PyvtkImplicitPolyDataDistance_SetNoClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNoClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkImplicitPolyDataDistance_GetNoClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNoClosestPoint() :
      op->vtkImplicitPolyDataDistance::GetNoClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkImplicitPolyDataDistance::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPolyDataDistance_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPolyDataDistance *op = static_cast<vtkImplicitPolyDataDistance *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkImplicitPolyDataDistance::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitPolyDataDistance_Methods[] = {
  {"IsTypeOf", PyvtkImplicitPolyDataDistance_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitPolyDataDistance_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitPolyDataDistance_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitPolyDataDistance\nC++: static vtkImplicitPolyDataDistance *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitPolyDataDistance_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitPolyDataDistance\nC++: vtkImplicitPolyDataDistance *NewInstance()\n\n"},
  {"GetMTime", PyvtkImplicitPolyDataDistance_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the Input dependency.\n"},
  {"EvaluateFunction", PyvtkImplicitPolyDataDistance_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkImplicitPolyDataDistance_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate function gradient of nearest triangle to point x[3].\n"},
  {"EvaluateFunctionAndGetClosestPoint", PyvtkImplicitPolyDataDistance_EvaluateFunctionAndGetClosestPoint, METH_VARARGS,
   "V.EvaluateFunctionAndGetClosestPoint([float, float, float],\n    [float, float, float]) -> float\nC++: double EvaluateFunctionAndGetClosestPoint(double x[3],\n    double closestPoint[3])\n\nEvaluate plane equation of nearest triangle to point x[3] and\nprovides closest point on an input vtkPolyData.\n"},
  {"SetInput", PyvtkImplicitPolyDataDistance_SetInput, METH_VARARGS,
   "V.SetInput(vtkPolyData)\nC++: void SetInput(vtkPolyData *input)\n\nSet the input vtkPolyData used for the implicit function\nevaluation.  Passes input through an internal instance of\nvtkTriangleFilter to remove vertices and lines, leaving only\ntriangular polygons for evaluation as implicit planes.\n"},
  {"SetNoValue", PyvtkImplicitPolyDataDistance_SetNoValue, METH_VARARGS,
   "V.SetNoValue(float)\nC++: virtual void SetNoValue(double _arg)\n\nSet/get the function value to use if no input vtkPolyData\nspecified.\n"},
  {"GetNoValue", PyvtkImplicitPolyDataDistance_GetNoValue, METH_VARARGS,
   "V.GetNoValue() -> float\nC++: virtual double GetNoValue()\n\nSet/get the function value to use if no input vtkPolyData\nspecified.\n"},
  {"SetNoGradient", PyvtkImplicitPolyDataDistance_SetNoGradient, METH_VARARGS,
   "V.SetNoGradient(float, float, float)\nC++: void SetNoGradient(double, double, double)\nV.SetNoGradient((float, float, float))\nC++: void SetNoGradient(double a[3])\n\n"},
  {"GetNoGradient", PyvtkImplicitPolyDataDistance_GetNoGradient, METH_VARARGS,
   "V.GetNoGradient() -> (float, float, float)\nC++: double *GetNoGradient()\n\n"},
  {"SetNoClosestPoint", PyvtkImplicitPolyDataDistance_SetNoClosestPoint, METH_VARARGS,
   "V.SetNoClosestPoint(float, float, float)\nC++: void SetNoClosestPoint(double, double, double)\nV.SetNoClosestPoint((float, float, float))\nC++: void SetNoClosestPoint(double a[3])\n\n"},
  {"GetNoClosestPoint", PyvtkImplicitPolyDataDistance_GetNoClosestPoint, METH_VARARGS,
   "V.GetNoClosestPoint() -> (float, float, float)\nC++: double *GetNoClosestPoint()\n\n"},
  {"GetTolerance", PyvtkImplicitPolyDataDistance_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet/get the tolerance usued for the locator.\n"},
  {"SetTolerance", PyvtkImplicitPolyDataDistance_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet/get the tolerance usued for the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitPolyDataDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkImplicitPolyDataDistance", // tp_name
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
  PyvtkImplicitPolyDataDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitPolyDataDistance_StaticNew()
{
  return vtkImplicitPolyDataDistance::New();
}

PyObject *PyvtkImplicitPolyDataDistance_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitPolyDataDistance_Type, PyvtkImplicitPolyDataDistance_Methods,
    "vtkImplicitPolyDataDistance",
 &PyvtkImplicitPolyDataDistance_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitPolyDataDistance_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitPolyDataDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitPolyDataDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitPolyDataDistance", o) != 0)
  {
    Py_DECREF(o);
  }

}

