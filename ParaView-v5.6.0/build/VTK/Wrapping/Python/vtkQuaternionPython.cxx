// python wrapper for vtkQuaternion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkQuaternion.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuaternion(PyObject *); }

static const char *PyvtkQuaternion_IdE_Doc =
  "vtkQuaternion- templated base type for storage of quaternions.\n\n"
  "Superclass: vtkTuple[float64,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "quaternions. The quaternions have the form [w, x, y, z]. Given a\n"
  "rotation of angle theta and axis v, the corresponding quaternion is\n"
  "[w, x, y, z] = [cos(theta/2), v*sin(theta/2)]\n\n"
  "This class implements the Spherical Linear interpolation (SLERP) and\n"
  "the Spherical Spline Quaternion interpolation (SQUAD). It is advised\n"
  "to use the vtkQuaternionInterpolator when dealing with multiple\n"
  "quaternions and or interpolations.\n\n"
  "@sa\n"
  "vtkQuaternionInterpolator\n\n"
  "vtkQuaternion()\n"
  "explicit vtkQuaternion(const double &scalar)\n"
  "explicit vtkQuaternion(const double *init)\n"
  "vtkQuaternion(const double &w, const double &x, const double &y,\n    const double &z)\n"
  "vtkQuaternion(const &vtkQuaternion<double>)\n";


static PyObject *
PyvtkQuaternion_IdE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_ToIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToIdentity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ToIdentity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Identity(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = vtkQuaternion<double>::Identity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Conjugate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Conjugate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Conjugate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Conjugated");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Invert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Invert();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = op->Inverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_ToUnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnitLog");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ToUnitLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitLog");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_ToUnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnitExp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ToUnitExp();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitExp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_NormalizeWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeWithAngleInDegrees");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->NormalizeWithAngleInDegrees();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<double> tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Set(temp0);

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
PyvtkQuaternion_IdE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkQuaternion_IdE_Set_s1(self, args);
    case 1:
      return PyvtkQuaternion_IdE_Set_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}



static PyObject *
PyvtkQuaternion_IdE_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Get(temp0);

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
PyvtkQuaternion_IdE_SetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetW(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetW();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_GetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngleAndAxis");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = op->GetRotationAngleAndAxis(temp0);

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
PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->SetRotationAngleAndAxis(temp0, temp1);

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
PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetRotationAngleAndAxis(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_SetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s1(self, args);
    case 4:
      return PyvtkQuaternion_IdE_SetRotationAngleAndAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRotationAngleAndAxis");
  return nullptr;
}



static PyObject *
PyvtkQuaternion_IdE_ToMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToMatrix3x3");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    ap.Save(*temp0, *save0, size0[0]*size0[1]);

    op->ToMatrix3x3(temp0);

    if (ap.HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_FromMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FromMatrix3x3");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    op->FromMatrix3x3(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slerp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  double temp0;
  vtkQuaternion<double> *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IdE"))
  {
    vtkQuaternion<double> tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaternion_IdE_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InnerPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<double> *op = static_cast<vtkQuaternion<double> *>(vp);

  vtkQuaternion<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkQuaternion<double> *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IdE") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IdE"))
  {
    vtkQuaternion<double> tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IdE");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaternion_IdE_Methods[] = {
  {"SquaredNorm", PyvtkQuaternion_IdE_SquaredNorm, METH_VARARGS,
   "V.SquaredNorm() -> float\nC++: double SquaredNorm()\n\nGet the squared norm of the quaternion.\n"},
  {"Norm", PyvtkQuaternion_IdE_Norm, METH_VARARGS,
   "V.Norm() -> float\nC++: double Norm()\n\nGet the norm of the quaternion, i.e. its length.\n"},
  {"ToIdentity", PyvtkQuaternion_IdE_ToIdentity, METH_VARARGS,
   "V.ToIdentity()\nC++: void ToIdentity()\n\nSet the quaternion to identity in place.\n"},
  {"Identity", PyvtkQuaternion_IdE_Identity, METH_VARARGS,
   "V.Identity() -> vtkQuaternion_IdE\nC++: static vtkQuaternion<double> Identity()\n\nReturn the identity quaternion. Note that the default constructor\nalso creates an identity quaternion.\n"},
  {"Normalize", PyvtkQuaternion_IdE_Normalize, METH_VARARGS,
   "V.Normalize() -> float\nC++: double Normalize()\n\nNormalize the quaternion in place. Return the norm of the\nquaternion.\n"},
  {"Normalized", PyvtkQuaternion_IdE_Normalized, METH_VARARGS,
   "V.Normalized() -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> Normalized()\n\nReturn the normalized form of this quaternion.\n"},
  {"Conjugate", PyvtkQuaternion_IdE_Conjugate, METH_VARARGS,
   "V.Conjugate()\nC++: void Conjugate()\n\nConjugate the quaternion in place.\n"},
  {"Conjugated", PyvtkQuaternion_IdE_Conjugated, METH_VARARGS,
   "V.Conjugated() -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> Conjugated()\n\nReturn the conjugate form of this quaternion.\n"},
  {"Invert", PyvtkQuaternion_IdE_Invert, METH_VARARGS,
   "V.Invert()\nC++: void Invert()\n\nInvert the quaternion in place. This is equivalent to conjugate\nthe quaternion and then divide it by its squared norm.\n"},
  {"Inverse", PyvtkQuaternion_IdE_Inverse, METH_VARARGS,
   "V.Inverse() -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> Inverse()\n\nReturn the inverted form of this quaternion.\n"},
  {"ToUnitLog", PyvtkQuaternion_IdE_ToUnitLog, METH_VARARGS,
   "V.ToUnitLog()\nC++: void ToUnitLog()\n\nConvert this quaternion to a unit log quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*theta].\n"},
  {"UnitLog", PyvtkQuaternion_IdE_UnitLog, METH_VARARGS,
   "V.UnitLog() -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> UnitLog()\n\nReturn the unit log version of this quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*theta].\n"},
  {"ToUnitExp", PyvtkQuaternion_IdE_ToUnitExp, METH_VARARGS,
   "V.ToUnitExp()\nC++: void ToUnitExp()\n\nConvert this quaternion to a unit exponential quaternion. The\nunit exponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {"UnitExp", PyvtkQuaternion_IdE_UnitExp, METH_VARARGS,
   "V.UnitExp() -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> UnitExp()\n\nReturn the unit exponential version of this quaternion. The unit\nexponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {"NormalizeWithAngleInDegrees", PyvtkQuaternion_IdE_NormalizeWithAngleInDegrees, METH_VARARGS,
   "V.NormalizeWithAngleInDegrees()\nC++: void NormalizeWithAngleInDegrees()\n\nNormalize a quaternion in place and transform it to so its angle\nis in degrees and its axis normalized.\n"},
  {"NormalizedWithAngleInDegrees", PyvtkQuaternion_IdE_NormalizedWithAngleInDegrees, METH_VARARGS,
   "V.NormalizedWithAngleInDegrees() -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> NormalizedWithAngleInDegrees()\n\nReturns a quaternion normalized and transformed so its angle is\nin degrees and its axis normalized.\n"},
  {"Set", PyvtkQuaternion_IdE_Set, METH_VARARGS,
   "V.Set(float, float, float, float)\nC++: void Set(const double &w, const double &x, const double &y,\n    const double &z)\nV.Set([float, float, float, float])\nC++: void Set(double quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {"Get", PyvtkQuaternion_IdE_Get, METH_VARARGS,
   "V.Get([float, float, float, float])\nC++: void Get(double quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {"SetW", PyvtkQuaternion_IdE_SetW, METH_VARARGS,
   "V.SetW(float)\nC++: void SetW(const double &w)\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {"GetW", PyvtkQuaternion_IdE_GetW, METH_VARARGS,
   "V.GetW() -> float\nC++: const double &GetW()\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {"SetX", PyvtkQuaternion_IdE_SetX, METH_VARARGS,
   "V.SetX(float)\nC++: void SetX(const double &x)\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {"GetX", PyvtkQuaternion_IdE_GetX, METH_VARARGS,
   "V.GetX() -> float\nC++: const double &GetX()\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {"SetY", PyvtkQuaternion_IdE_SetY, METH_VARARGS,
   "V.SetY(float)\nC++: void SetY(const double &y)\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {"GetY", PyvtkQuaternion_IdE_GetY, METH_VARARGS,
   "V.GetY() -> float\nC++: const double &GetY()\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {"SetZ", PyvtkQuaternion_IdE_SetZ, METH_VARARGS,
   "V.SetZ(float)\nC++: void SetZ(const double &z)\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {"GetZ", PyvtkQuaternion_IdE_GetZ, METH_VARARGS,
   "V.GetZ() -> float\nC++: const double &GetZ()\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {"GetRotationAngleAndAxis", PyvtkQuaternion_IdE_GetRotationAngleAndAxis, METH_VARARGS,
   "V.GetRotationAngleAndAxis([float, float, float]) -> float\nC++: double GetRotationAngleAndAxis(double axis[3])\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {"SetRotationAngleAndAxis", PyvtkQuaternion_IdE_SetRotationAngleAndAxis, METH_VARARGS,
   "V.SetRotationAngleAndAxis(float, [float, float, float])\nC++: void SetRotationAngleAndAxis(double angle, double axis[3])\nV.SetRotationAngleAndAxis(float, float, float, float)\nC++: void SetRotationAngleAndAxis(const double &angle,\n    const double &x, const double &y, const double &z)\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {"ToMatrix3x3", PyvtkQuaternion_IdE_ToMatrix3x3, METH_VARARGS,
   "V.ToMatrix3x3([[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void ToMatrix3x3(double A[3][3])\n\nConvert a quaternion to a 3x3 rotation matrix. The quaternion\ndoes not have to be normalized beforehand.\n@sa FromMatrix3x3()\n"},
  {"FromMatrix3x3", PyvtkQuaternion_IdE_FromMatrix3x3, METH_VARARGS,
   "V.FromMatrix3x3(((float, float, float), (float, float, float), (\n    float, float, float)))\nC++: void FromMatrix3x3(const double A[3][3])\n\nConvert a 3x3 matrix into a quaternion.  This will provide the\nbest possible answer even if the matrix is not a pure rotation\nmatrix. The method used is that of B.K.P. Horn.\n@sa ToMatrix3x3()\n"},
  {"Slerp", PyvtkQuaternion_IdE_Slerp, METH_VARARGS,
   "V.Slerp(float, vtkQuaternion_IdE) -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> Slerp(double t,\n    const vtkQuaternion<double> &q)\n\nInterpolate quaternions using spherical linear interpolation\nbetween this quaternion and q1 to produce the output. The\nparametric coordinate t belongs to [0,1] and lies between\n(this,q1).\n@sa vtkQuaternionInterpolator\n"},
  {"InnerPoint", PyvtkQuaternion_IdE_InnerPoint, METH_VARARGS,
   "V.InnerPoint(vtkQuaternion_IdE, vtkQuaternion_IdE)\n    -> vtkQuaternion_IdE\nC++: vtkQuaternion<double> InnerPoint(\n    const vtkQuaternion<double> &q1,\n    const vtkQuaternion<double> &q2)\n\nInterpolates between quaternions, using spherical quadrangle\ninterpolation.\n@sa vtkQuaternionInterpolator\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkQuaternion<double> *op = new vtkQuaternion<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  vtkQuaternion<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IdE"))
  {
    vtkQuaternion<double> *op = new vtkQuaternion<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaternion_IdE_vtkQuaternion_Methods[] = {
  {nullptr, PyvtkQuaternion_IdE_vtkQuaternion_s2, METH_VARARGS,
   "-@d"},
  {nullptr, PyvtkQuaternion_IdE_vtkQuaternion_s3, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkQuaternion_IdE_vtkQuaternion_s5, METH_VARARGS,
   "@W vtkQuaternion_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternion_IdE_vtkQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternion_IdE_vtkQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuaternion_IdE_vtkQuaternion_s1(self, args);
    case 4:
      return PyvtkQuaternion_IdE_vtkQuaternion_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaternion");
  return nullptr;
}


static PyObject *
PyvtkQuaternion_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkQuaternion_IdE_vtkQuaternion(nullptr, args);
}

static void PyvtkQuaternion_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkQuaternion<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkQuaternion_IdE_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkQuaternion_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkQuaternion_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaternion_IdE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkQuaternion_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkQuaternion_IdE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkQuaternion_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkQuaternion_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkQuaternion<double>(*static_cast<const vtkQuaternion<double>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuaternion_IdE_TypeNew(); }

#ifndef DECLARED_PyvtkTuple_IdLi4EE_TypeNew
extern "C" { PyObject *PyvtkTuple_IdLi4EE_TypeNew(); }
#define DECLARED_PyvtkTuple_IdLi4EE_TypeNew
#endif
PyObject *PyvtkQuaternion_IdE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkQuaternion_IdE_Type,
    PyvtkQuaternion_IdE_Methods,
    PyvtkQuaternion_IdE_vtkQuaternion_Methods,
    &PyvtkQuaternion_IdE_CCopy);

  PyTypeObject *pytype = &PyvtkQuaternion_IdE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkTuple_IdLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkQuaternion_IfE_Doc =
  "vtkQuaternion- templated base type for storage of quaternions.\n\n"
  "Superclass: vtkTuple[float32,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "quaternions. The quaternions have the form [w, x, y, z]. Given a\n"
  "rotation of angle theta and axis v, the corresponding quaternion is\n"
  "[w, x, y, z] = [cos(theta/2), v*sin(theta/2)]\n\n"
  "This class implements the Spherical Linear interpolation (SLERP) and\n"
  "the Spherical Spline Quaternion interpolation (SQUAD). It is advised\n"
  "to use the vtkQuaternionInterpolator when dealing with multiple\n"
  "quaternions and or interpolations.\n\n"
  "@sa\n"
  "vtkQuaternionInterpolator\n\n"
  "vtkQuaternion()\n"
  "explicit vtkQuaternion(const float &scalar)\n"
  "explicit vtkQuaternion(const float *init)\n"
  "vtkQuaternion(const float &w, const float &x, const float &y,\n    const float &z)\n"
  "vtkQuaternion(const &vtkQuaternion<float>)\n";


static PyObject *
PyvtkQuaternion_IfE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_ToIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToIdentity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ToIdentity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Identity(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = vtkQuaternion<float>::Identity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Conjugate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Conjugate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Conjugate();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Conjugated");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Invert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Invert();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = op->Inverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_ToUnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnitLog");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ToUnitLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitLog");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_ToUnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnitExp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ToUnitExp();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitExp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_NormalizeWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeWithAngleInDegrees");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->NormalizeWithAngleInDegrees();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternion<float> tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  float save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Set(temp0);

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
PyvtkQuaternion_IfE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkQuaternion_IfE_Set_s1(self, args);
    case 1:
      return PyvtkQuaternion_IfE_Set_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}



static PyObject *
PyvtkQuaternion_IfE_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  float save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Get(temp0);

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
PyvtkQuaternion_IfE_SetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetW(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetW();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_GetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngleAndAxis");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    float tempr = op->GetRotationAngleAndAxis(temp0);

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
PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  const size_t size1 = 3;
  float temp1[3];
  float save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    op->SetRotationAngleAndAxis(temp0, temp1);

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
PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngleAndAxis");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetRotationAngleAndAxis(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_SetRotationAngleAndAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s1(self, args);
    case 4:
      return PyvtkQuaternion_IfE_SetRotationAngleAndAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRotationAngleAndAxis");
  return nullptr;
}



static PyObject *
PyvtkQuaternion_IfE_ToMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToMatrix3x3");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  static size_t size0[2] = { 3, 3 };
  float temp0[3][3];
  float save0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    ap.Save(*temp0, *save0, size0[0]*size0[1]);

    op->ToMatrix3x3(temp0);

    if (ap.HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_FromMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FromMatrix3x3");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  static size_t size0[2] = { 3, 3 };
  float temp0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    op->FromMatrix3x3(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slerp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  float temp0;
  vtkQuaternion<float> *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IfE"))
  {
    vtkQuaternion<float> tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaternion_IfE_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InnerPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternion<float> *op = static_cast<vtkQuaternion<float> *>(vp);

  vtkQuaternion<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkQuaternion<float> *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IfE") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternion_IfE"))
  {
    vtkQuaternion<float> tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternion_IfE");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaternion_IfE_Methods[] = {
  {"SquaredNorm", PyvtkQuaternion_IfE_SquaredNorm, METH_VARARGS,
   "V.SquaredNorm() -> float\nC++: float SquaredNorm()\n\nGet the squared norm of the quaternion.\n"},
  {"Norm", PyvtkQuaternion_IfE_Norm, METH_VARARGS,
   "V.Norm() -> float\nC++: float Norm()\n\nGet the norm of the quaternion, i.e. its length.\n"},
  {"ToIdentity", PyvtkQuaternion_IfE_ToIdentity, METH_VARARGS,
   "V.ToIdentity()\nC++: void ToIdentity()\n\nSet the quaternion to identity in place.\n"},
  {"Identity", PyvtkQuaternion_IfE_Identity, METH_VARARGS,
   "V.Identity() -> vtkQuaternion_IfE\nC++: static vtkQuaternion<float> Identity()\n\nReturn the identity quaternion. Note that the default constructor\nalso creates an identity quaternion.\n"},
  {"Normalize", PyvtkQuaternion_IfE_Normalize, METH_VARARGS,
   "V.Normalize() -> float\nC++: float Normalize()\n\nNormalize the quaternion in place. Return the norm of the\nquaternion.\n"},
  {"Normalized", PyvtkQuaternion_IfE_Normalized, METH_VARARGS,
   "V.Normalized() -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> Normalized()\n\nReturn the normalized form of this quaternion.\n"},
  {"Conjugate", PyvtkQuaternion_IfE_Conjugate, METH_VARARGS,
   "V.Conjugate()\nC++: void Conjugate()\n\nConjugate the quaternion in place.\n"},
  {"Conjugated", PyvtkQuaternion_IfE_Conjugated, METH_VARARGS,
   "V.Conjugated() -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> Conjugated()\n\nReturn the conjugate form of this quaternion.\n"},
  {"Invert", PyvtkQuaternion_IfE_Invert, METH_VARARGS,
   "V.Invert()\nC++: void Invert()\n\nInvert the quaternion in place. This is equivalent to conjugate\nthe quaternion and then divide it by its squared norm.\n"},
  {"Inverse", PyvtkQuaternion_IfE_Inverse, METH_VARARGS,
   "V.Inverse() -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> Inverse()\n\nReturn the inverted form of this quaternion.\n"},
  {"ToUnitLog", PyvtkQuaternion_IfE_ToUnitLog, METH_VARARGS,
   "V.ToUnitLog()\nC++: void ToUnitLog()\n\nConvert this quaternion to a unit log quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*theta].\n"},
  {"UnitLog", PyvtkQuaternion_IfE_UnitLog, METH_VARARGS,
   "V.UnitLog() -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> UnitLog()\n\nReturn the unit log version of this quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*theta].\n"},
  {"ToUnitExp", PyvtkQuaternion_IfE_ToUnitExp, METH_VARARGS,
   "V.ToUnitExp()\nC++: void ToUnitExp()\n\nConvert this quaternion to a unit exponential quaternion. The\nunit exponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {"UnitExp", PyvtkQuaternion_IfE_UnitExp, METH_VARARGS,
   "V.UnitExp() -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> UnitExp()\n\nReturn the unit exponential version of this quaternion. The unit\nexponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {"NormalizeWithAngleInDegrees", PyvtkQuaternion_IfE_NormalizeWithAngleInDegrees, METH_VARARGS,
   "V.NormalizeWithAngleInDegrees()\nC++: void NormalizeWithAngleInDegrees()\n\nNormalize a quaternion in place and transform it to so its angle\nis in degrees and its axis normalized.\n"},
  {"NormalizedWithAngleInDegrees", PyvtkQuaternion_IfE_NormalizedWithAngleInDegrees, METH_VARARGS,
   "V.NormalizedWithAngleInDegrees() -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> NormalizedWithAngleInDegrees()\n\nReturns a quaternion normalized and transformed so its angle is\nin degrees and its axis normalized.\n"},
  {"Set", PyvtkQuaternion_IfE_Set, METH_VARARGS,
   "V.Set(float, float, float, float)\nC++: void Set(const float &w, const float &x, const float &y,\n    const float &z)\nV.Set([float, float, float, float])\nC++: void Set(float quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {"Get", PyvtkQuaternion_IfE_Get, METH_VARARGS,
   "V.Get([float, float, float, float])\nC++: void Get(float quat[4])\n\nSet/Get the w, x, y and z components of the quaternion.\n"},
  {"SetW", PyvtkQuaternion_IfE_SetW, METH_VARARGS,
   "V.SetW(float)\nC++: void SetW(const float &w)\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {"GetW", PyvtkQuaternion_IfE_GetW, METH_VARARGS,
   "V.GetW() -> float\nC++: const float &GetW()\n\nSet/Get the w component of the quaternion, i.e. element 0.\n"},
  {"SetX", PyvtkQuaternion_IfE_SetX, METH_VARARGS,
   "V.SetX(float)\nC++: void SetX(const float &x)\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {"GetX", PyvtkQuaternion_IfE_GetX, METH_VARARGS,
   "V.GetX() -> float\nC++: const float &GetX()\n\nSet/Get the x component of the quaternion, i.e. element 1.\n"},
  {"SetY", PyvtkQuaternion_IfE_SetY, METH_VARARGS,
   "V.SetY(float)\nC++: void SetY(const float &y)\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {"GetY", PyvtkQuaternion_IfE_GetY, METH_VARARGS,
   "V.GetY() -> float\nC++: const float &GetY()\n\nSet/Get the y component of the quaternion, i.e. element 2.\n"},
  {"SetZ", PyvtkQuaternion_IfE_SetZ, METH_VARARGS,
   "V.SetZ(float)\nC++: void SetZ(const float &z)\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {"GetZ", PyvtkQuaternion_IfE_GetZ, METH_VARARGS,
   "V.GetZ() -> float\nC++: const float &GetZ()\n\nSet/Get the y component of the quaternion, i.e. element 3.\n"},
  {"GetRotationAngleAndAxis", PyvtkQuaternion_IfE_GetRotationAngleAndAxis, METH_VARARGS,
   "V.GetRotationAngleAndAxis([float, float, float]) -> float\nC++: float GetRotationAngleAndAxis(float axis[3])\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {"SetRotationAngleAndAxis", PyvtkQuaternion_IfE_SetRotationAngleAndAxis, METH_VARARGS,
   "V.SetRotationAngleAndAxis(float, [float, float, float])\nC++: void SetRotationAngleAndAxis(float angle, float axis[3])\nV.SetRotationAngleAndAxis(float, float, float, float)\nC++: void SetRotationAngleAndAxis(const float &angle,\n    const float &x, const float &y, const float &z)\n\nSet/Get the angle (in radians) and the axis corresponding to the\naxis-angle rotation of this quaternion.\n"},
  {"ToMatrix3x3", PyvtkQuaternion_IfE_ToMatrix3x3, METH_VARARGS,
   "V.ToMatrix3x3([[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void ToMatrix3x3(float A[3][3])\n\nConvert a quaternion to a 3x3 rotation matrix. The quaternion\ndoes not have to be normalized beforehand.\n@sa FromMatrix3x3()\n"},
  {"FromMatrix3x3", PyvtkQuaternion_IfE_FromMatrix3x3, METH_VARARGS,
   "V.FromMatrix3x3(((float, float, float), (float, float, float), (\n    float, float, float)))\nC++: void FromMatrix3x3(const float A[3][3])\n\nConvert a 3x3 matrix into a quaternion.  This will provide the\nbest possible answer even if the matrix is not a pure rotation\nmatrix. The method used is that of B.K.P. Horn.\n@sa ToMatrix3x3()\n"},
  {"Slerp", PyvtkQuaternion_IfE_Slerp, METH_VARARGS,
   "V.Slerp(float, vtkQuaternion_IfE) -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> Slerp(float t,\n    const vtkQuaternion<float> &q)\n\nInterpolate quaternions using spherical linear interpolation\nbetween this quaternion and q1 to produce the output. The\nparametric coordinate t belongs to [0,1] and lies between\n(this,q1).\n@sa vtkQuaternionInterpolator\n"},
  {"InnerPoint", PyvtkQuaternion_IfE_InnerPoint, METH_VARARGS,
   "V.InnerPoint(vtkQuaternion_IfE, vtkQuaternion_IfE)\n    -> vtkQuaternion_IfE\nC++: vtkQuaternion<float> InnerPoint(\n    const vtkQuaternion<float> &q1,\n    const vtkQuaternion<float> &q2)\n\nInterpolates between quaternions, using spherical quadrangle\ninterpolation.\n@sa vtkQuaternionInterpolator\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkQuaternion<float> *op = new vtkQuaternion<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternion");

  vtkQuaternion<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternion_IfE"))
  {
    vtkQuaternion<float> *op = new vtkQuaternion<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaternion_IfE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaternion_IfE_vtkQuaternion_Methods[] = {
  {nullptr, PyvtkQuaternion_IfE_vtkQuaternion_s2, METH_VARARGS,
   "-@f"},
  {nullptr, PyvtkQuaternion_IfE_vtkQuaternion_s3, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkQuaternion_IfE_vtkQuaternion_s5, METH_VARARGS,
   "@W vtkQuaternion_IfE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternion_IfE_vtkQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternion_IfE_vtkQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuaternion_IfE_vtkQuaternion_s1(self, args);
    case 4:
      return PyvtkQuaternion_IfE_vtkQuaternion_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaternion");
  return nullptr;
}


static PyObject *
PyvtkQuaternion_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkQuaternion_IfE_vtkQuaternion(nullptr, args);
}

static void PyvtkQuaternion_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkQuaternion<float> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkQuaternion_IfE_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkQuaternion_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkQuaternion_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaternion_IfE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkQuaternion_IfE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkQuaternion_IfE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkQuaternion_IfE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkQuaternion_IfE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkQuaternion<float>(*static_cast<const vtkQuaternion<float>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuaternion_IfE_TypeNew(); }

#ifndef DECLARED_PyvtkTuple_IfLi4EE_TypeNew
extern "C" { PyObject *PyvtkTuple_IfLi4EE_TypeNew(); }
#define DECLARED_PyvtkTuple_IfLi4EE_TypeNew
#endif
PyObject *PyvtkQuaternion_IfE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkQuaternion_IfE_Type,
    PyvtkQuaternion_IfE_Methods,
    PyvtkQuaternion_IfE_vtkQuaternion_Methods,
    &PyvtkQuaternion_IfE_CCopy);

  PyTypeObject *pytype = &PyvtkQuaternion_IfE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkTuple_IfLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkQuaternion_Doc =
  "vtkQuaterniond - Double quaternion type.\n\n"
  "Superclass: vtkTuple[T,4]\n\n"
  "This class is uses vtkQuaternion with double type data. For further\n"
  "description, seethe templated class vtkQuaternion.\n"
  "@sa vtkQuaternionf vtkQuaternion\n\n"
  "\nProvided Types:\n\n"
  "  vtkQuaternion[float64] => vtkQuaternion<double>\n"

  "  vtkQuaternion[float32] => vtkQuaternion<float>\n"
;

PyObject *PyvtkQuaternion_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonMathPython.vtkQuaternion",
                                     PyvtkQuaternion_Doc);

  o = PyvtkQuaternion_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkQuaternion_IfE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static const char *PyvtkQuaternionf_Doc =
  "vtkQuaternionf - no description provided.\n\n"
  "Superclass: vtkQuaternion[float32]\n\n"

  "vtkQuaternionf()\n"
  "explicit vtkQuaternionf(float w, float x, float y, float z)\n"
  "explicit vtkQuaternionf(float scalar)\n"
  "explicit vtkQuaternionf(const float *init)\n"
  "vtkQuaternionf(const &vtkQuaternionf)\n";


static PyObject *
PyvtkQuaternionf_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->Identity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Conjugated");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->Inverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitLog");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitExp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionf tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionf_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slerp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  float temp0;
  vtkQuaternionf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternionf"))
  {
    vtkQuaternionf tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaternionf_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InnerPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaternionf *op = static_cast<vtkQuaternionf *>(vp);

  vtkQuaternionf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkQuaternionf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternionf") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaternionf"))
  {
    vtkQuaternionf tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaternionf");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaternionf_Methods[] = {
  {"Identity", PyvtkQuaternionf_Identity, METH_VARARGS,
   "V.Identity() -> vtkQuaternionf\nC++: vtkQuaternionf Identity()\n\nReturn the identity quaternion. Note that the default constructor\nalso creates an identity quaternion.\n"},
  {"Normalized", PyvtkQuaternionf_Normalized, METH_VARARGS,
   "V.Normalized() -> vtkQuaternionf\nC++: vtkQuaternionf Normalized()\n\nReturn the normalized form of this quaternion.\n"},
  {"Conjugated", PyvtkQuaternionf_Conjugated, METH_VARARGS,
   "V.Conjugated() -> vtkQuaternionf\nC++: vtkQuaternionf Conjugated()\n\nReturn the conjugate form of this quaternion.\n"},
  {"Inverse", PyvtkQuaternionf_Inverse, METH_VARARGS,
   "V.Inverse() -> vtkQuaternionf\nC++: vtkQuaternionf Inverse()\n\nReturn the inverted form of this quaternion.\n"},
  {"UnitLog", PyvtkQuaternionf_UnitLog, METH_VARARGS,
   "V.UnitLog() -> vtkQuaternionf\nC++: vtkQuaternionf UnitLog()\n\nReturn the unit log version of this quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*theta].\n"},
  {"UnitExp", PyvtkQuaternionf_UnitExp, METH_VARARGS,
   "V.UnitExp() -> vtkQuaternionf\nC++: vtkQuaternionf UnitExp()\n\nReturn the unit exponential version of this quaternion. The unit\nexponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {"NormalizedWithAngleInDegrees", PyvtkQuaternionf_NormalizedWithAngleInDegrees, METH_VARARGS,
   "V.NormalizedWithAngleInDegrees() -> vtkQuaternionf\nC++: vtkQuaternionf NormalizedWithAngleInDegrees()\n\nReturns a quaternion normalized and transformed so its angle is\nin degrees and its axis normalized.\n"},
  {"Slerp", PyvtkQuaternionf_Slerp, METH_VARARGS,
   "V.Slerp(float, vtkQuaternionf) -> vtkQuaternionf\nC++: vtkQuaternionf Slerp(float t, const vtkQuaternionf &q)\n\n"},
  {"InnerPoint", PyvtkQuaternionf_InnerPoint, METH_VARARGS,
   "V.InnerPoint(vtkQuaternionf, vtkQuaternionf) -> vtkQuaternionf\nC++: vtkQuaternionf InnerPoint(const vtkQuaternionf &q1,\n    const vtkQuaternionf &q2)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkQuaternionf *op = new vtkQuaternionf();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkQuaternionf *op = new vtkQuaternionf(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkQuaternionf *op = new vtkQuaternionf(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkQuaternionf *op = new vtkQuaternionf(temp0);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
  }

  return result;
}

static PyObject *
PyvtkQuaternionf_vtkQuaternionf_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaternionf");

  vtkQuaternionf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaternionf"))
  {
    vtkQuaternionf *op = new vtkQuaternionf(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaternionf", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaternionf_vtkQuaternionf_Methods[] = {
  {nullptr, PyvtkQuaternionf_vtkQuaternionf_s3, METH_VARARGS,
   "-@f"},
  {nullptr, PyvtkQuaternionf_vtkQuaternionf_s4, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkQuaternionf_vtkQuaternionf_s5, METH_VARARGS,
   "@W vtkQuaternionf"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternionf_vtkQuaternionf(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionf_vtkQuaternionf_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuaternionf_vtkQuaternionf_s1(self, args);
    case 4:
      return PyvtkQuaternionf_vtkQuaternionf_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaternionf");
  return nullptr;
}


static PyObject *
PyvtkQuaternionf_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkQuaternionf_vtkQuaternionf(nullptr, args);
}

static void PyvtkQuaternionf_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkQuaternionf *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkQuaternionf_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkQuaternionf_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkQuaternionf", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaternionf_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkQuaternionf_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkQuaternionf_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkQuaternionf_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkQuaternionf_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkQuaternionf(*static_cast<const vtkQuaternionf*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuaternionf_TypeNew(); }

#ifndef DECLARED_PyvtkQuaternion_IfE_TypeNew
extern "C" { PyObject *PyvtkQuaternion_IfE_TypeNew(); }
#define DECLARED_PyvtkQuaternion_IfE_TypeNew
#endif
PyObject *PyvtkQuaternionf_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkQuaternionf_Type,
    PyvtkQuaternionf_Methods,
    PyvtkQuaternionf_vtkQuaternionf_Methods,
    &PyvtkQuaternionf_CCopy);

  PyTypeObject *pytype = &PyvtkQuaternionf_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkQuaternion_IfE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkQuaterniond_Doc =
  "vtkQuaterniond - no description provided.\n\n"
  "Superclass: vtkQuaternion[float64]\n\n"

  "vtkQuaterniond()\n"
  "explicit vtkQuaterniond(double w, double x, double y, double z)\n"
  "explicit vtkQuaterniond(double scalar)\n"
  "explicit vtkQuaterniond(const double *init)\n"
  "vtkQuaterniond(const &vtkQuaterniond)\n";


static PyObject *
PyvtkQuaterniond_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->Identity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_Conjugated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Conjugated");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->Conjugated();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->Inverse();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_UnitLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitLog");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->UnitLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_UnitExp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnitExp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->UnitExp();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_NormalizedWithAngleInDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedWithAngleInDegrees");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaterniond tempr = op->NormalizedWithAngleInDegrees();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  return result;
}


static PyObject *
PyvtkQuaterniond_Slerp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slerp");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
  {
    vtkQuaterniond tempr = op->Slerp(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkQuaterniond_InnerPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InnerPoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkQuaterniond *op = static_cast<vtkQuaterniond *>(vp);

  vtkQuaterniond *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkQuaterniond *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaterniond") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
  {
    vtkQuaterniond tempr = op->InnerPoint(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkQuaterniond");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkQuaterniond_Methods[] = {
  {"Identity", PyvtkQuaterniond_Identity, METH_VARARGS,
   "V.Identity() -> vtkQuaterniond\nC++: vtkQuaterniond Identity()\n\nReturn the identity quaternion. Note that the default constructor\nalso creates an identity quaternion.\n"},
  {"Normalized", PyvtkQuaterniond_Normalized, METH_VARARGS,
   "V.Normalized() -> vtkQuaterniond\nC++: vtkQuaterniond Normalized()\n\nReturn the normalized form of this quaternion.\n"},
  {"Conjugated", PyvtkQuaterniond_Conjugated, METH_VARARGS,
   "V.Conjugated() -> vtkQuaterniond\nC++: vtkQuaterniond Conjugated()\n\nReturn the conjugate form of this quaternion.\n"},
  {"Inverse", PyvtkQuaterniond_Inverse, METH_VARARGS,
   "V.Inverse() -> vtkQuaterniond\nC++: vtkQuaterniond Inverse()\n\nReturn the inverted form of this quaternion.\n"},
  {"UnitLog", PyvtkQuaterniond_UnitLog, METH_VARARGS,
   "V.UnitLog() -> vtkQuaterniond\nC++: vtkQuaterniond UnitLog()\n\nReturn the unit log version of this quaternion. The unit log\nquaternion is defined by: [w, x, y, z] =  [0.0, v*theta].\n"},
  {"UnitExp", PyvtkQuaterniond_UnitExp, METH_VARARGS,
   "V.UnitExp() -> vtkQuaterniond\nC++: vtkQuaterniond UnitExp()\n\nReturn the unit exponential version of this quaternion. The unit\nexponential quaternion is defined by: [w, x, y, z] = \n[cos(theta), v*sin(theta)].\n"},
  {"NormalizedWithAngleInDegrees", PyvtkQuaterniond_NormalizedWithAngleInDegrees, METH_VARARGS,
   "V.NormalizedWithAngleInDegrees() -> vtkQuaterniond\nC++: vtkQuaterniond NormalizedWithAngleInDegrees()\n\nReturns a quaternion normalized and transformed so its angle is\nin degrees and its axis normalized.\n"},
  {"Slerp", PyvtkQuaterniond_Slerp, METH_VARARGS,
   "V.Slerp(float, vtkQuaterniond) -> vtkQuaterniond\nC++: vtkQuaterniond Slerp(double t, const vtkQuaterniond &q)\n\n"},
  {"InnerPoint", PyvtkQuaterniond_InnerPoint, METH_VARARGS,
   "V.InnerPoint(vtkQuaterniond, vtkQuaterniond) -> vtkQuaterniond\nC++: vtkQuaterniond InnerPoint(const vtkQuaterniond &q1,\n    const vtkQuaterniond &q2)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkQuaterniond *op = new vtkQuaterniond();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
  }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkQuaterniond *op = new vtkQuaterniond(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
  }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkQuaterniond *op = new vtkQuaterniond(temp0);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
  }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkQuaterniond *op = new vtkQuaterniond(temp0);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
  }

  return result;
}

static PyObject *
PyvtkQuaterniond_vtkQuaterniond_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkQuaterniond");

  vtkQuaterniond *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkQuaterniond"))
  {
    vtkQuaterniond *op = new vtkQuaterniond(*temp0);

    result = PyVTKSpecialObject_New("vtkQuaterniond", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkQuaterniond_vtkQuaterniond_Methods[] = {
  {nullptr, PyvtkQuaterniond_vtkQuaterniond_s3, METH_VARARGS,
   "-@d"},
  {nullptr, PyvtkQuaterniond_vtkQuaterniond_s4, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkQuaterniond_vtkQuaterniond_s5, METH_VARARGS,
   "@W vtkQuaterniond"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaterniond_vtkQuaterniond(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaterniond_vtkQuaterniond_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuaterniond_vtkQuaterniond_s1(self, args);
    case 4:
      return PyvtkQuaterniond_vtkQuaterniond_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkQuaterniond");
  return nullptr;
}


static PyObject *
PyvtkQuaterniond_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkQuaterniond_vtkQuaterniond(nullptr, args);
}

static void PyvtkQuaterniond_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkQuaterniond *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkQuaterniond_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkQuaterniond_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkQuaterniond", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkQuaterniond_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkQuaterniond_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkQuaterniond_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkQuaterniond_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkQuaterniond_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkQuaterniond(*static_cast<const vtkQuaterniond*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuaterniond_TypeNew(); }

#ifndef DECLARED_PyvtkQuaternion_IdE_TypeNew
extern "C" { PyObject *PyvtkQuaternion_IdE_TypeNew(); }
#define DECLARED_PyvtkQuaternion_IdE_TypeNew
#endif
PyObject *PyvtkQuaterniond_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkQuaterniond_Type,
    PyvtkQuaterniond_Methods,
    PyvtkQuaterniond_vtkQuaterniond_Methods,
    &PyvtkQuaterniond_CCopy);

  PyTypeObject *pytype = &PyvtkQuaterniond_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkQuaternion_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuaternion(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuaternion_TemplateNew();

  if (o)
  {
#if PY_VERSION_HEX >= 0x03040000
    const char *methodname = "values";
#else
    char methodname[] = "values";
#endif
    PyObject *l = PyObject_CallMethod(o, methodname, nullptr);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = ((PyTypeObject *)ot)->tp_name;
      }
      else if (PyCFunction_Check(ot))
      {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
      }
      if (nt)
      {
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkQuaternion", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkQuaternionf_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkQuaternionf", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkQuaterniond_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkQuaterniond", o) != 0)
  {
    Py_DECREF(o);
  }

}

