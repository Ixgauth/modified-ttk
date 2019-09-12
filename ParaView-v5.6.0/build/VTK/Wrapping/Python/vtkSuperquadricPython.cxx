// python wrapper for vtkSuperquadric
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
#include "vtkSuperquadric.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSuperquadric(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSuperquadric_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkSuperquadric_Doc =
  "vtkSuperquadric - implicit function for a Superquadric\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkSuperquadric computes the implicit function and function gradient\n"
  "for a superquadric. vtkSuperquadric is a concrete implementation of\n"
  "vtkImplicitFunction.  The superquadric is centered at Center and axes\n"
  "of rotation is along the y-axis. (Use the superclass'\n"
  "vtkImplicitFunction transformation matrix if necessary to\n"
  "reposition.) Roundness parameters (PhiRoundness and ThetaRoundness)\n"
  "control the shape of the superquadric.  The Toroidal boolean controls\n"
  "whether a toroidal superquadric is produced.  If so, the Thickness\n"
  "parameter controls the thickness of the toroid:  0 is the thinnest\n"
  "allowable toroid, and 1 has a minimum sized hole.  The Scale\n"
  "parameters allow the superquadric to be scaled in x, y, and z (normal\n"
  "vectors are correctly generated in any case).  The Size parameter\n"
  "controls size of the superquadric.\n\n"
  "This code is based on \"Rigid physically based superquadrics\", A. H.\n"
  "Barr, in \"Graphics Gems III\", David Kirk, ed., Academic Press, 1992.\n\n"
  "@warning\n"
  "The Size and Thickness parameters control coefficients of\n"
  "superquadric generation, and may do not exactly describe the size of\n"
  "the superquadric.\n\n";


static PyObject *
PyvtkSuperquadric_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSuperquadric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSuperquadric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSuperquadric *tempr = vtkSuperquadric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSuperquadric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSuperquadric::NewInstance());

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
PyvtkSuperquadric_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->vtkSuperquadric::EvaluateFunction(temp0));

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
PyvtkSuperquadric_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->vtkSuperquadric::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadric_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->vtkSuperquadric::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadric_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSuperquadric_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkSuperquadric_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkSuperquadric_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkSuperquadric_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->vtkSuperquadric::EvaluateGradient(temp0, temp1);
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
PyvtkSuperquadric_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSuperquadric::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSuperquadric_SetCenter_s1(self, args);
    case 1:
      return PyvtkSuperquadric_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkSuperquadric_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSuperquadric::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSuperquadric::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSuperquadric_SetScale_s1(self, args);
    case 1:
      return PyvtkSuperquadric_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}



static PyObject *
PyvtkSuperquadric_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkSuperquadric::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkSuperquadric::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThicknessMinValue() :
      op->vtkSuperquadric::GetThicknessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThicknessMaxValue() :
      op->vtkSuperquadric::GetThicknessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhiRoundness() :
      op->vtkSuperquadric::GetPhiRoundness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiRoundness(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetPhiRoundness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThetaRoundness() :
      op->vtkSuperquadric::GetThetaRoundness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaRoundness(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetThetaRoundness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkSuperquadric::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_ToroidalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToroidalOn();
    }
    else
    {
      op->vtkSuperquadric::ToroidalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_ToroidalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToroidalOff();
    }
    else
    {
      op->vtkSuperquadric::ToroidalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToroidal() :
      op->vtkSuperquadric::GetToroidal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToroidal(temp0);
    }
    else
    {
      op->vtkSuperquadric::SetToroidal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSuperquadric_Methods[] = {
  {"IsTypeOf", PyvtkSuperquadric_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSuperquadric_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSuperquadric_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSuperquadric\nC++: static vtkSuperquadric *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSuperquadric_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSuperquadric\nC++: vtkSuperquadric *NewInstance()\n\n"},
  {"EvaluateFunction", PyvtkSuperquadric_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkSuperquadric_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate function gradient at position x-y-z and pass back\nvector. You should generally not call this method directly, you\nshould use FunctionGradient() instead.  This method must be\nimplemented by any derived class.\n"},
  {"SetCenter", PyvtkSuperquadric_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkSuperquadric_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the superquadric. Default is 0,0,0.\n"},
  {"SetScale", PyvtkSuperquadric_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {"GetScale", PyvtkSuperquadric_GetScale, METH_VARARGS,
   "V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet the scale factors of the superquadric. Default is 1,1,1.\n"},
  {"GetThickness", PyvtkSuperquadric_GetThickness, METH_VARARGS,
   "V.GetThickness() -> float\nC++: virtual double GetThickness()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {"SetThickness", PyvtkSuperquadric_SetThickness, METH_VARARGS,
   "V.SetThickness(float)\nC++: virtual void SetThickness(double _arg)\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {"GetThicknessMinValue", PyvtkSuperquadric_GetThicknessMinValue, METH_VARARGS,
   "V.GetThicknessMinValue() -> float\nC++: virtual double GetThicknessMinValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {"GetThicknessMaxValue", PyvtkSuperquadric_GetThicknessMaxValue, METH_VARARGS,
   "V.GetThicknessMaxValue() -> float\nC++: virtual double GetThicknessMaxValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {"GetPhiRoundness", PyvtkSuperquadric_GetPhiRoundness, METH_VARARGS,
   "V.GetPhiRoundness() -> float\nC++: virtual double GetPhiRoundness()\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {"SetPhiRoundness", PyvtkSuperquadric_SetPhiRoundness, METH_VARARGS,
   "V.SetPhiRoundness(float)\nC++: void SetPhiRoundness(double e)\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {"GetThetaRoundness", PyvtkSuperquadric_GetThetaRoundness, METH_VARARGS,
   "V.GetThetaRoundness() -> float\nC++: virtual double GetThetaRoundness()\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {"SetThetaRoundness", PyvtkSuperquadric_SetThetaRoundness, METH_VARARGS,
   "V.SetThetaRoundness(float)\nC++: void SetThetaRoundness(double e)\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {"SetSize", PyvtkSuperquadric_SetSize, METH_VARARGS,
   "V.SetSize(float)\nC++: virtual void SetSize(double _arg)\n\nSet/Get Superquadric isotropic size.\n"},
  {"GetSize", PyvtkSuperquadric_GetSize, METH_VARARGS,
   "V.GetSize() -> float\nC++: virtual double GetSize()\n\nSet/Get Superquadric isotropic size.\n"},
  {"ToroidalOn", PyvtkSuperquadric_ToroidalOn, METH_VARARGS,
   "V.ToroidalOn()\nC++: virtual void ToroidalOn()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {"ToroidalOff", PyvtkSuperquadric_ToroidalOff, METH_VARARGS,
   "V.ToroidalOff()\nC++: virtual void ToroidalOff()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {"GetToroidal", PyvtkSuperquadric_GetToroidal, METH_VARARGS,
   "V.GetToroidal() -> int\nC++: virtual vtkTypeBool GetToroidal()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {"SetToroidal", PyvtkSuperquadric_SetToroidal, METH_VARARGS,
   "V.SetToroidal(int)\nC++: virtual void SetToroidal(vtkTypeBool _arg)\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSuperquadric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSuperquadric", // tp_name
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
  PyvtkSuperquadric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSuperquadric_StaticNew()
{
  return vtkSuperquadric::New();
}

PyObject *PyvtkSuperquadric_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSuperquadric_Type, PyvtkSuperquadric_Methods,
    "vtkSuperquadric",
 &PyvtkSuperquadric_StaticNew);

  PyTypeObject *pytype = &PyvtkSuperquadric_Type;

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

void PyVTKAddFile_vtkSuperquadric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSuperquadric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSuperquadric", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyFloat_FromDouble(1e-4);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MIN_SUPERQUADRIC_THICKNESS", o);
    Py_DECREF(o);
  }
}

