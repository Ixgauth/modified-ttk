// python wrapper for vtkLinearTransform
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
#include "vtkDataArray.h"
#include "vtkLinearTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLinearTransform_ClassNew(); }

#ifndef DECLARED_PyvtkHomogeneousTransform_ClassNew
extern "C" { PyObject *PyvtkHomogeneousTransform_ClassNew(); }
#define DECLARED_PyvtkHomogeneousTransform_ClassNew
#endif

static const char *PyvtkLinearTransform_Doc =
  "vtkLinearTransform - abstract superclass for linear transformations\n\n"
  "Superclass: vtkHomogeneousTransform\n\n"
  "vtkLinearTransform provides a generic interface for linear (affine or\n"
  "12 degree-of-freedom) geometric transformations.\n"
  "@sa\n"
  "vtkTransform vtkIdentityTransform\n\n";


static PyObject *
PyvtkLinearTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearTransform *tempr = vtkLinearTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearTransform::NewInstance());

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
PyvtkLinearTransform_TransformNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformNormal(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformNormal(temp0, temp1);
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
PyvtkLinearTransform_TransformNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformNormal_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformNormal(temp0) :
      op->vtkLinearTransform::TransformNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLinearTransform_TransformNormal_s1(self, args);
    case 3:
      return PyvtkLinearTransform_TransformNormal_s2(self, args);
    case 1:
      return PyvtkLinearTransform_TransformNormal_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformNormal");
  return nullptr;
}



static PyObject *
PyvtkLinearTransform_TransformFloatNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformFloatNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormal(temp0) :
      op->vtkLinearTransform::TransformFloatNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformFloatNormal_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformFloatNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatNormal");
  return nullptr;
}



static PyObject *
PyvtkLinearTransform_TransformDoubleNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformDoubleNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormal(temp0) :
      op->vtkLinearTransform::TransformDoubleNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformDoubleNormal_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformDoubleNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoubleNormal");
  return nullptr;
}



static PyObject *
PyvtkLinearTransform_TransformVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformVector(temp0) :
      op->vtkLinearTransform::TransformVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformVector_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformVector(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformVector(temp0, temp1);
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
PyvtkLinearTransform_TransformVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformVector_s2(self, args);
    case 2:
      return PyvtkLinearTransform_TransformVector_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformVector");
  return nullptr;
}



static PyObject *
PyvtkLinearTransform_TransformFloatVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformFloatVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVector(temp0) :
      op->vtkLinearTransform::TransformFloatVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformFloatVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformFloatVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatVector");
  return nullptr;
}



static PyObject *
PyvtkLinearTransform_TransformDoubleVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformDoubleVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVector(temp0) :
      op->vtkLinearTransform::TransformDoubleVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformDoubleVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformDoubleVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoubleVector");
  return nullptr;
}



static PyObject *
PyvtkLinearTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformNormals(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformNormals(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformVectors(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_GetLinearInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetLinearInverse() :
      op->vtkLinearTransform::GetLinearInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformNormal(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformNormal(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformVector(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformVector(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLinearTransform_Methods[] = {
  {"IsTypeOf", PyvtkLinearTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinearTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinearTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLinearTransform\nC++: static vtkLinearTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinearTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLinearTransform\nC++: vtkLinearTransform *NewInstance()\n\n"},
  {"TransformNormal", PyvtkLinearTransform_TransformNormal, METH_VARARGS,
   "V.TransformNormal((float, float, float), [float, float, float])\nC++: void TransformNormal(const double in[3], double out[3])\nV.TransformNormal(float, float, float) -> (float, float, float)\nC++: double *TransformNormal(double x, double y, double z)\nV.TransformNormal((float, float, float)) -> (float, float, float)\nC++: double *TransformNormal(const double normal[3])\n\nApply the transformation to a double-precision normal. You can\nuse the same array to store both the input and output.\n"},
  {"TransformFloatNormal", PyvtkLinearTransform_TransformFloatNormal, METH_VARARGS,
   "V.TransformFloatNormal(float, float, float) -> (float, float,\n    float)\nC++: float *TransformFloatNormal(float x, float y, float z)\nV.TransformFloatNormal((float, float, float)) -> (float, float,\n    float)\nC++: float *TransformFloatNormal(const float normal[3])\n\nApply the transformation to an (x,y,z) normal. Use this if you\nare programming in python or Java.\n"},
  {"TransformDoubleNormal", PyvtkLinearTransform_TransformDoubleNormal, METH_VARARGS,
   "V.TransformDoubleNormal(float, float, float) -> (float, float,\n    float)\nC++: double *TransformDoubleNormal(double x, double y, double z)\nV.TransformDoubleNormal((float, float, float)) -> (float, float,\n    float)\nC++: double *TransformDoubleNormal(const double normal[3])\n\nApply the transformation to a double-precision (x,y,z) normal.\nUse this if you are programming in python or Java.\n"},
  {"TransformVector", PyvtkLinearTransform_TransformVector, METH_VARARGS,
   "V.TransformVector(float, float, float) -> (float, float, float)\nC++: double *TransformVector(double x, double y, double z)\nV.TransformVector((float, float, float)) -> (float, float, float)\nC++: double *TransformVector(const double normal[3])\nV.TransformVector((float, float, float), [float, float, float])\nC++: void TransformVector(const double in[3], double out[3])\n\nSynonymous with TransformDoubleVector(x,y,z). Use this if you are\nprogramming in python or Java.\n"},
  {"TransformFloatVector", PyvtkLinearTransform_TransformFloatVector, METH_VARARGS,
   "V.TransformFloatVector(float, float, float) -> (float, float,\n    float)\nC++: float *TransformFloatVector(float x, float y, float z)\nV.TransformFloatVector((float, float, float)) -> (float, float,\n    float)\nC++: float *TransformFloatVector(const float vec[3])\n\nApply the transformation to an (x,y,z) vector. Use this if you\nare programming in python or Java.\n"},
  {"TransformDoubleVector", PyvtkLinearTransform_TransformDoubleVector, METH_VARARGS,
   "V.TransformDoubleVector(float, float, float) -> (float, float,\n    float)\nC++: double *TransformDoubleVector(double x, double y, double z)\nV.TransformDoubleVector((float, float, float)) -> (float, float,\n    float)\nC++: double *TransformDoubleVector(const double vec[3])\n\nApply the transformation to a double-precision (x,y,z) vector.\nUse this if you are programming in python or Java.\n"},
  {"TransformPoints", PyvtkLinearTransform_TransformPoints, METH_VARARGS,
   "V.TransformPoints(vtkPoints, vtkPoints)\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n    override;\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {"TransformNormals", PyvtkLinearTransform_TransformNormals, METH_VARARGS,
   "V.TransformNormals(vtkDataArray, vtkDataArray)\nC++: virtual void TransformNormals(vtkDataArray *inNms,\n    vtkDataArray *outNms)\n\nApply the transformation to a series of normals, and append the\nresults to outNms.\n"},
  {"TransformVectors", PyvtkLinearTransform_TransformVectors, METH_VARARGS,
   "V.TransformVectors(vtkDataArray, vtkDataArray)\nC++: virtual void TransformVectors(vtkDataArray *inVrs,\n    vtkDataArray *outVrs)\n\nApply the transformation to a series of vectors, and append the\nresults to outVrs.\n"},
  {"GetLinearInverse", PyvtkLinearTransform_GetLinearInverse, METH_VARARGS,
   "V.GetLinearInverse() -> vtkLinearTransform\nC++: vtkLinearTransform *GetLinearInverse()\n\nJust like GetInverse, but it includes a typecast to\nvtkLinearTransform.\n"},
  {"InternalTransformPoint", PyvtkLinearTransform_InternalTransformPoint, METH_VARARGS,
   "V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformNormal", PyvtkLinearTransform_InternalTransformNormal, METH_VARARGS,
   "V.InternalTransformNormal((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformNormal(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformVector", PyvtkLinearTransform_InternalTransformVector, METH_VARARGS,
   "V.InternalTransformVector((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformVector(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {"InternalTransformDerivative", PyvtkLinearTransform_InternalTransformDerivative, METH_VARARGS,
   "V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLinearTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonTransformsPython.vtkLinearTransform", // tp_name
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
  PyvtkLinearTransform_Doc, // tp_doc
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

PyObject *PyvtkLinearTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLinearTransform_Type, PyvtkLinearTransform_Methods,
    "vtkLinearTransform",
 nullptr);

  PyTypeObject *pytype = &PyvtkLinearTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHomogeneousTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

