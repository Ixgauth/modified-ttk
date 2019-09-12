// python wrapper for vtkSpline
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
#include "vtkSpline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpline_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSpline_Doc =
  "vtkSpline - spline abstract class for interpolating splines\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSpline interpolates a set of data points (i.e., interpolation\n"
  "means that the spline passes through the points).  vtkSpline is an\n"
  "abstract class: its subclasses vtkCardinalSpline and\n"
  "vtkKochanekSpline do the interpolation. Note that this spline maps\n"
  "the 1D parametric coordinate t into a single value x. Thus if you\n"
  "want to use the spline to interpolate points (i.e. x[3]), you have to\n"
  "create three splines for each of the x-y-z coordinates. Fortunately,\n"
  "the vtkParametricSpline class does this for you.\n\n"
  "Typically a spline is used by adding a sequence of parametric\n"
  "coordinate / data (t,x) values followed by use of an evaluation\n"
  "function (e.g., vtkCardinalSpline::Evaluate()).  Since these splines\n"
  "are 1D, a point in this context is an independent / dependent\n"
  "variable pair.\n\n"
  "Splines can also be set up to be closed or open. Closed splines\n"
  "continue from the last point to the first point with continuous\n"
  "function and derivative values. (You don't need to duplicate the\n"
  "first point to close the spline, just set ClosedOn.)\n\n"
  "This implementation of splines does not use a normalized parametric\n"
  "coordinate. If the spline is open, then the parameter space is (tMin\n"
  "<= t <= tMax) where tMin and tMax are the minimum and maximum\n"
  "parametric values seen when performing AddPoint(). If the spline is\n"
  "closed, then the parameter space is (tMin <= t <= (tMax+1)) where\n"
  "tMin and tMax are the minimum and maximum parametric values seen when\n"
  "performing AddPoint(). Note, however, that this behavior can be\n"
  "changed by explicitly setting the ParametricRange(tMin,tMax). If set,\n"
  "the parameter space remains (tMin <= t <= tMax), except that\n"
  "additions of data with parametric values outside this range are\n"
  "clamped within this range.\n\n"
  "@sa\n"
  "vtkCardinalSpline vtkKochanekSpline vtkParametricSpline\n"
  "vtkParametricFunctionSource\n\n";


static PyObject *
PyvtkSpline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpline *tempr = vtkSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpline::NewInstance());

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
PyvtkSpline_SetParametricRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParametricRange(temp0, temp1);
    }
    else
    {
      op->vtkSpline::SetParametricRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpline_SetParametricRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetParametricRange(temp0);
    }
    else
    {
      op->vtkSpline::SetParametricRange(temp0);
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
PyvtkSpline_SetParametricRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSpline_SetParametricRange_s1(self, args);
    case 1:
      return PyvtkSpline_SetParametricRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetParametricRange");
  return nullptr;
}



static PyObject *
PyvtkSpline_GetParametricRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetParametricRange(temp0);
    }
    else
    {
      op->vtkSpline::GetParametricRange(temp0);
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
PyvtkSpline_SetClampValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampValue(temp0);
    }
    else
    {
      op->vtkSpline::SetClampValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetClampValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampValue() :
      op->vtkSpline::GetClampValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_ClampValueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampValueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampValueOn();
    }
    else
    {
      op->vtkSpline::ClampValueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_ClampValueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampValueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampValueOff();
    }
    else
    {
      op->vtkSpline::ClampValueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Compute();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->Evaluate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkSpline::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddPoint(temp0, temp1);
    }
    else
    {
      op->vtkSpline::AddPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePoint(temp0);
    }
    else
    {
      op->vtkSpline::RemovePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPoints();
    }
    else
    {
      op->vtkSpline::RemoveAllPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosed(temp0);
    }
    else
    {
      op->vtkSpline::SetClosed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosed() :
      op->vtkSpline::GetClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedOn();
    }
    else
    {
      op->vtkSpline::ClosedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedOff();
    }
    else
    {
      op->vtkSpline::ClosedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_SetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftConstraint(temp0);
    }
    else
    {
      op->vtkSpline::SetLeftConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraintMinValue() :
      op->vtkSpline::GetLeftConstraintMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraintMaxValue() :
      op->vtkSpline::GetLeftConstraintMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraint() :
      op->vtkSpline::GetLeftConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_SetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightConstraint(temp0);
    }
    else
    {
      op->vtkSpline::SetRightConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetRightConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraintMinValue() :
      op->vtkSpline::GetRightConstraintMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetRightConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraintMaxValue() :
      op->vtkSpline::GetRightConstraintMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraint() :
      op->vtkSpline::GetRightConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_SetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftValue(temp0);
    }
    else
    {
      op->vtkSpline::SetLeftValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeftValue() :
      op->vtkSpline::GetLeftValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_SetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightValue(temp0);
    }
    else
    {
      op->vtkSpline::SetRightValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRightValue() :
      op->vtkSpline::GetRightValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSpline::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpline *op = static_cast<vtkSpline *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSpline::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpline_Methods[] = {
  {"IsTypeOf", PyvtkSpline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpline\nC++: static vtkSpline *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpline\nC++: vtkSpline *NewInstance()\n\n"},
  {"SetParametricRange", PyvtkSpline_SetParametricRange, METH_VARARGS,
   "V.SetParametricRange(float, float)\nC++: void SetParametricRange(double tMin, double tMax)\nV.SetParametricRange([float, float])\nC++: void SetParametricRange(double tRange[2])\n\nSet/Get the parametric range. If not set, the range is determined\nimplicitly by keeping track of the (min,max) parameter values for\nt. If set, the AddPoint() method will clamp the t value to lie\nwithin the specified range.\n"},
  {"GetParametricRange", PyvtkSpline_GetParametricRange, METH_VARARGS,
   "V.GetParametricRange([float, float])\nC++: void GetParametricRange(double tRange[2])\n\nSet/Get the parametric range. If not set, the range is determined\nimplicitly by keeping track of the (min,max) parameter values for\nt. If set, the AddPoint() method will clamp the t value to lie\nwithin the specified range.\n"},
  {"SetClampValue", PyvtkSpline_SetClampValue, METH_VARARGS,
   "V.SetClampValue(int)\nC++: virtual void SetClampValue(vtkTypeBool _arg)\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {"GetClampValue", PyvtkSpline_GetClampValue, METH_VARARGS,
   "V.GetClampValue() -> int\nC++: virtual vtkTypeBool GetClampValue()\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {"ClampValueOn", PyvtkSpline_ClampValueOn, METH_VARARGS,
   "V.ClampValueOn()\nC++: virtual void ClampValueOn()\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {"ClampValueOff", PyvtkSpline_ClampValueOff, METH_VARARGS,
   "V.ClampValueOff()\nC++: virtual void ClampValueOff()\n\nSet/Get ClampValue. If On, results of the interpolation will be\nclamped to the min/max of the input data.\n"},
  {"Compute", PyvtkSpline_Compute, METH_VARARGS,
   "V.Compute()\nC++: virtual void Compute()\n\nCompute the coefficients for the spline.\n"},
  {"Evaluate", PyvtkSpline_Evaluate, METH_VARARGS,
   "V.Evaluate(float) -> float\nC++: virtual double Evaluate(double t)\n\nInterpolate the value of the spline at parametric location of t.\n"},
  {"GetNumberOfPoints", PyvtkSpline_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nReturn the number of points inserted thus far.\n"},
  {"AddPoint", PyvtkSpline_AddPoint, METH_VARARGS,
   "V.AddPoint(float, float)\nC++: void AddPoint(double t, double x)\n\nAdd a pair of points to be fit with the spline.\n"},
  {"RemovePoint", PyvtkSpline_RemovePoint, METH_VARARGS,
   "V.RemovePoint(float)\nC++: void RemovePoint(double t)\n\nRemove a point from the data to be fit with the spline.\n"},
  {"RemoveAllPoints", PyvtkSpline_RemoveAllPoints, METH_VARARGS,
   "V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemove all points from the data.\n"},
  {"SetClosed", PyvtkSpline_SetClosed, METH_VARARGS,
   "V.SetClosed(int)\nC++: virtual void SetClosed(vtkTypeBool _arg)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {"GetClosed", PyvtkSpline_GetClosed, METH_VARARGS,
   "V.GetClosed() -> int\nC++: virtual vtkTypeBool GetClosed()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {"ClosedOn", PyvtkSpline_ClosedOn, METH_VARARGS,
   "V.ClosedOn()\nC++: virtual void ClosedOn()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {"ClosedOff", PyvtkSpline_ClosedOff, METH_VARARGS,
   "V.ClosedOff()\nC++: virtual void ClosedOff()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {"SetLeftConstraint", PyvtkSpline_SetLeftConstraint, METH_VARARGS,
   "V.SetLeftConstraint(int)\nC++: virtual void SetLeftConstraint(int _arg)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetLeftConstraintMinValue", PyvtkSpline_GetLeftConstraintMinValue, METH_VARARGS,
   "V.GetLeftConstraintMinValue() -> int\nC++: virtual int GetLeftConstraintMinValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetLeftConstraintMaxValue", PyvtkSpline_GetLeftConstraintMaxValue, METH_VARARGS,
   "V.GetLeftConstraintMaxValue() -> int\nC++: virtual int GetLeftConstraintMaxValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetLeftConstraint", PyvtkSpline_GetLeftConstraint, METH_VARARGS,
   "V.GetLeftConstraint() -> int\nC++: virtual int GetLeftConstraint()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"SetRightConstraint", PyvtkSpline_SetRightConstraint, METH_VARARGS,
   "V.SetRightConstraint(int)\nC++: virtual void SetRightConstraint(int _arg)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetRightConstraintMinValue", PyvtkSpline_GetRightConstraintMinValue, METH_VARARGS,
   "V.GetRightConstraintMinValue() -> int\nC++: virtual int GetRightConstraintMinValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetRightConstraintMaxValue", PyvtkSpline_GetRightConstraintMaxValue, METH_VARARGS,
   "V.GetRightConstraintMaxValue() -> int\nC++: virtual int GetRightConstraintMaxValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetRightConstraint", PyvtkSpline_GetRightConstraint, METH_VARARGS,
   "V.GetRightConstraint() -> int\nC++: virtual int GetRightConstraint()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"SetLeftValue", PyvtkSpline_SetLeftValue, METH_VARARGS,
   "V.SetLeftValue(float)\nC++: virtual void SetLeftValue(double _arg)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {"GetLeftValue", PyvtkSpline_GetLeftValue, METH_VARARGS,
   "V.GetLeftValue() -> float\nC++: virtual double GetLeftValue()\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {"SetRightValue", PyvtkSpline_SetRightValue, METH_VARARGS,
   "V.SetRightValue(float)\nC++: virtual void SetRightValue(double _arg)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {"GetRightValue", PyvtkSpline_GetRightValue, METH_VARARGS,
   "V.GetRightValue() -> float\nC++: virtual double GetRightValue()\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {"GetMTime", PyvtkSpline_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the Piecewise function.\n"},
  {"DeepCopy", PyvtkSpline_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkSpline)\nC++: virtual void DeepCopy(vtkSpline *s)\n\nDeep copy of spline data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSpline", // tp_name
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
  PyvtkSpline_Doc, // tp_doc
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

PyObject *PyvtkSpline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpline_Type, PyvtkSpline_Methods,
    "vtkSpline",
 nullptr);

  PyTypeObject *pytype = &PyvtkSpline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpline", o) != 0)
  {
    Py_DECREF(o);
  }

}

