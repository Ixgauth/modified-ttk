// python wrapper for vtkQuaternionInterpolator
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
#include "vtkQuaternion.h"
#include "vtkQuaternionInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuaternionInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuaternionInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkQuaternionInterpolator_Doc =
  "vtkQuaternionInterpolator - interpolate a quaternion\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to interpolate a series of quaternions\n"
  "representing the rotations of a 3D object.  The interpolation may be\n"
  "linear in form (using spherical linear interpolation SLERP), or via\n"
  "spline interpolation (using SQUAD). In either case the interpolation\n"
  "is specialized to quaternions since the interpolation occurs on the\n"
  "surface of the unit quaternion sphere.\n\n"
  "To use this class, specify at least two pairs of (t,q[4]) with the\n"
  "AddQuaternion() method.  Next interpolate the tuples with the\n"
  "InterpolateQuaternion(t,q[4]) method, where \"t\" must be in the range\n"
  "of (t_min,t_max) parameter values specified by the AddQuaternion()\n"
  "method (t is clamped otherwise), and q[4] is filled in by the method.\n\n"
  "There are several important background references. Ken Shoemake\n"
  "described the practical application of quaternions for the\n"
  "interpolation of rotation (K. Shoemake, \"Animating rotation with quaternion\n"
  "curves\", Computer Graphics (Siggraph '85) 19(3):245--254, 1985).\n"
  "Another fine reference (available on-line) is E. B. Dam, M. Koch, and\n"
  "M. Lillholm, Technical Report DIKU-TR-98/5, Dept. of Computer\n"
  "Science, University of Copenhagen, Denmark.\n\n"
  "@warning\n"
  "Note that for two or less quaternions, Slerp (linear) interpolation\n"
  "is performed even if spline interpolation is requested. Also, the\n"
  "tangents to the first and last segments of spline interpolation are\n"
  "(arbitrarily) defined by repeating the first and last quaternions.\n\n"
  "@warning\n"
  "There are several methods particular to quaternions (norms, products,\n"
  "etc.) implemented interior to this class. These may be moved to a\n"
  "separate quaternion class at some point.\n\n"
  "@sa\n"
  "vtkQuaternion\n\n";


static PyObject *
PyvtkQuaternionInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuaternionInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuaternionInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuaternionInterpolator *tempr = vtkQuaternionInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuaternionInterpolator::NewInstance());

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
PyvtkQuaternionInterpolator_GetNumberOfQuaternions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuaternions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQuaternions() :
      op->vtkQuaternionInterpolator::GetNumberOfQuaternions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkQuaternionInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkQuaternionInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkQuaternionInterpolator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
  {
    if (ap.IsBound())
    {
      op->AddQuaternion(temp0, *temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddQuaternion(temp0, temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, temp1);
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

static PyMethodDef PyvtkQuaternionInterpolator_AddQuaternion_Methods[] = {
  {nullptr, PyvtkQuaternionInterpolator_AddQuaternion_s1, METH_VARARGS,
   "@dW vtkQuaterniond"},
  {nullptr, PyvtkQuaternionInterpolator_AddQuaternion_s2, METH_VARARGS,
   "@dP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionInterpolator_AddQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddQuaternion");
  return nullptr;
}



static PyObject *
PyvtkQuaternionInterpolator_RemoveQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveQuaternion(temp0);
    }
    else
    {
      op->vtkQuaternionInterpolator::RemoveQuaternion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkQuaterniond"))
  {
    if (ap.IsBound())
    {
      op->InterpolateQuaternion(temp0, *temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateQuaternion(temp0, temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, temp1);
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

static PyMethodDef PyvtkQuaternionInterpolator_InterpolateQuaternion_Methods[] = {
  {nullptr, PyvtkQuaternionInterpolator_InterpolateQuaternion_s1, METH_VARARGS,
   "@dW &vtkQuaterniond"},
  {nullptr, PyvtkQuaternionInterpolator_InterpolateQuaternion_s2, METH_VARARGS,
   "@dP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionInterpolator_InterpolateQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateQuaternion");
  return nullptr;
}



static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkQuaternionInterpolator::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkQuaternionInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkQuaternionInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkQuaternionInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToSpline();
    }
    else
    {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuaternionInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkQuaternionInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuaternionInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuaternionInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuaternionInterpolator\nC++: static vtkQuaternionInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuaternionInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *NewInstance()\n\n"},
  {"GetNumberOfQuaternions", PyvtkQuaternionInterpolator_GetNumberOfQuaternions, METH_VARARGS,
   "V.GetNumberOfQuaternions() -> int\nC++: int GetNumberOfQuaternions()\n\nReturn the number of quaternions in the list of quaternions to be\ninterpolated.\n"},
  {"GetMinimumT", PyvtkQuaternionInterpolator_GetMinimumT, METH_VARARGS,
   "V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {"GetMaximumT", PyvtkQuaternionInterpolator_GetMaximumT, METH_VARARGS,
   "V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {"Initialize", PyvtkQuaternionInterpolator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nReset the class so that it contains no data; i.e., the array of\n(t,q[4]) information is discarded.\n"},
  {"AddQuaternion", PyvtkQuaternionInterpolator_AddQuaternion, METH_VARARGS,
   "V.AddQuaternion(float, vtkQuaterniond)\nC++: void AddQuaternion(double t, const vtkQuaterniond &q)\nV.AddQuaternion(float, [float, float, float, float])\nC++: void AddQuaternion(double t, double q[4])\n\nAdd another quaternion to the list of quaternions to be\ninterpolated. Note that using the same time t value more than\nonce replaces the previous quaternion at t. At least one\nquaternions must be added to define an interpolation functions.\n"},
  {"RemoveQuaternion", PyvtkQuaternionInterpolator_RemoveQuaternion, METH_VARARGS,
   "V.RemoveQuaternion(float)\nC++: void RemoveQuaternion(double t)\n\nDelete the quaternion at a particular parameter t. If there is no\nquaternion tuple defined at t, then the method does nothing.\n"},
  {"InterpolateQuaternion", PyvtkQuaternionInterpolator_InterpolateQuaternion, METH_VARARGS,
   "V.InterpolateQuaternion(float, vtkQuaterniond)\nC++: void InterpolateQuaternion(double t, vtkQuaterniond &q)\nV.InterpolateQuaternion(float, [float, float, float, float])\nC++: void InterpolateQuaternion(double t, double q[4])\n\nInterpolate the list of quaternions and determine a new\nquaternion (i.e., fill in the quaternion provided). If t is\noutside the range of (min,max) values, then t is clamped to lie\nwithin the range.\n"},
  {"SetInterpolationType", PyvtkQuaternionInterpolator_SetInterpolationType, METH_VARARGS,
   "V.SetInterpolationType(int)\nC++: virtual void SetInterpolationType(int _arg)\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {"GetInterpolationTypeMinValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   "V.GetInterpolationTypeMinValue() -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {"GetInterpolationTypeMaxValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   "V.GetInterpolationTypeMaxValue() -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {"GetInterpolationType", PyvtkQuaternionInterpolator_GetInterpolationType, METH_VARARGS,
   "V.GetInterpolationType() -> int\nC++: virtual int GetInterpolationType()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {"SetInterpolationTypeToLinear", PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   "V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {"SetInterpolationTypeToSpline", PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   "V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuaternionInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkQuaternionInterpolator", // tp_name
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
  PyvtkQuaternionInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuaternionInterpolator_StaticNew()
{
  return vtkQuaternionInterpolator::New();
}

PyObject *PyvtkQuaternionInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuaternionInterpolator_Type, PyvtkQuaternionInterpolator_Methods,
    "vtkQuaternionInterpolator",
 &PyvtkQuaternionInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkQuaternionInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "INTERPOLATION_TYPE_LINEAR", vtkQuaternionInterpolator::INTERPOLATION_TYPE_LINEAR },
        { "INTERPOLATION_TYPE_SPLINE", vtkQuaternionInterpolator::INTERPOLATION_TYPE_SPLINE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuaternionInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuaternionInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuaternionInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

