// python wrapper for vtkArcSource
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
#include "vtkArcSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArcSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArcSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkArcSource_Doc =
  "vtkArcSource - create a circular arc\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkArcSource is a source object that creates an arc defined by two\n"
  "endpoints and a center. The number of segments composing the polyline\n"
  "is controlled by setting the object resolution. Alternatively, one\n"
  "can use a better API (that does not allow for inconsistent nor\n"
  "ambiguous inputs), using a starting point (polar vector, measured\n"
  "from the arc's center), a normal to the plane of the arc, and an\n"
  "angle defining the arc length. Since the default API remains the\n"
  "original one, in order to use the improved API, one must switch the\n"
  "UseNormalAndAngle flag to TRUE.\n\n"
  "The development of an improved, consistent API (based on point,\n"
  "normal, and angle) was supported by CEA/DIF - Commissariat a\n"
  "l'Energie Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon,\n"
  "France, and implemented by Philippe Pebay, Kitware SAS 2012.\n\n"
  "@sa\n"
  "vtkEllipseArcSource\n\n";


static PyObject *
PyvtkArcSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArcSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArcSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArcSource *tempr = vtkArcSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArcSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArcSource::NewInstance());

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
PyvtkArcSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArcSource::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkArcSource::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkArcSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkArcSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkArcSource::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArcSource::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkArcSource::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkArcSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkArcSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkArcSource::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->vtkArcSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->vtkArcSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkArcSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkArcSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkArcSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkArcSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArcSource::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkArcSource::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkArcSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkArcSource_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkArcSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkArcSource::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetPolarVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPolarVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArcSource::SetPolarVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetPolarVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPolarVector(temp0);
    }
    else
    {
      op->vtkArcSource::SetPolarVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArcSource_SetPolarVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkArcSource_SetPolarVector_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPolarVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPolarVector");
  return nullptr;
}



static PyObject *
PyvtkArcSource_GetPolarVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPolarVector() :
      op->vtkArcSource::GetPolarVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkArcSource::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkArcSource::GetAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkArcSource::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkArcSource::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkArcSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkArcSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkArcSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkArcSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetNegative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNegative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNegative(temp0);
    }
    else
    {
      op->vtkArcSource::SetNegative(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetNegative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNegative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNegative() :
      op->vtkArcSource::GetNegative());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_NegativeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegativeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NegativeOn();
    }
    else
    {
      op->vtkArcSource::NegativeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_NegativeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegativeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NegativeOff();
    }
    else
    {
      op->vtkArcSource::NegativeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetUseNormalAndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormalAndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNormalAndAngle(temp0);
    }
    else
    {
      op->vtkArcSource::SetUseNormalAndAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetUseNormalAndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormalAndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseNormalAndAngle() :
      op->vtkArcSource::GetUseNormalAndAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_UseNormalAndAngleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalAndAngleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalAndAngleOn();
    }
    else
    {
      op->vtkArcSource::UseNormalAndAngleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_UseNormalAndAngleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalAndAngleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalAndAngleOff();
    }
    else
    {
      op->vtkArcSource::UseNormalAndAngleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkArcSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArcSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkArcSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArcSource_Methods[] = {
  {"IsTypeOf", PyvtkArcSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArcSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArcSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArcSource\nC++: static vtkArcSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArcSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArcSource\nC++: vtkArcSource *NewInstance()\n\n"},
  {"SetPoint1", PyvtkArcSource_SetPoint1, METH_VARARGS,
   "V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {"GetPoint1", PyvtkArcSource_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSet position of the first end point.\n"},
  {"SetPoint2", PyvtkArcSource_SetPoint2, METH_VARARGS,
   "V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {"GetPoint2", PyvtkArcSource_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSet position of the other end point.\n"},
  {"SetCenter", PyvtkArcSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkArcSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet position of the center of the circle that defines the arc.\nNote: you can use the function vtkMath::Solve3PointCircle to find\nthe center from 3 points located on a circle.\n"},
  {"SetNormal", PyvtkArcSource_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkArcSource_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet the normal vector to the plane of the arc. By default it\npoints in the positive Z direction. Note: This is only used when\nUseNormalAndAngle is ON.\n"},
  {"SetPolarVector", PyvtkArcSource_SetPolarVector, METH_VARARGS,
   "V.SetPolarVector(float, float, float)\nC++: void SetPolarVector(double, double, double)\nV.SetPolarVector((float, float, float))\nC++: void SetPolarVector(double a[3])\n\n"},
  {"GetPolarVector", PyvtkArcSource_GetPolarVector, METH_VARARGS,
   "V.GetPolarVector() -> (float, float, float)\nC++: double *GetPolarVector()\n\nSet polar vector (starting point of the arc). By default it is\nthe unit vector in the positive X direction. Note: This is only\nused when UseNormalAndAngle is ON.\n"},
  {"SetAngle", PyvtkArcSource_SetAngle, METH_VARARGS,
   "V.SetAngle(float)\nC++: virtual void SetAngle(double _arg)\n\nArc length (in degrees), beginning at the polar vector. The\ndirection is counterclockwise by default; a negative value draws\nthe arc in the clockwise direction. Note: This is only used when\nUseNormalAndAngle is ON.\n"},
  {"GetAngleMinValue", PyvtkArcSource_GetAngleMinValue, METH_VARARGS,
   "V.GetAngleMinValue() -> float\nC++: virtual double GetAngleMinValue()\n\nArc length (in degrees), beginning at the polar vector. The\ndirection is counterclockwise by default; a negative value draws\nthe arc in the clockwise direction. Note: This is only used when\nUseNormalAndAngle is ON.\n"},
  {"GetAngleMaxValue", PyvtkArcSource_GetAngleMaxValue, METH_VARARGS,
   "V.GetAngleMaxValue() -> float\nC++: virtual double GetAngleMaxValue()\n\nArc length (in degrees), beginning at the polar vector. The\ndirection is counterclockwise by default; a negative value draws\nthe arc in the clockwise direction. Note: This is only used when\nUseNormalAndAngle is ON.\n"},
  {"GetAngle", PyvtkArcSource_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nArc length (in degrees), beginning at the polar vector. The\ndirection is counterclockwise by default; a negative value draws\nthe arc in the clockwise direction. Note: This is only used when\nUseNormalAndAngle is ON.\n"},
  {"SetResolution", PyvtkArcSource_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\nDefine the number of segments of the polyline that draws the arc.\nNote: if the resolution is set to 1 (the default value), the arc\nis drawn as a straight line.\n"},
  {"GetResolutionMinValue", PyvtkArcSource_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual int GetResolutionMinValue()\n\nDefine the number of segments of the polyline that draws the arc.\nNote: if the resolution is set to 1 (the default value), the arc\nis drawn as a straight line.\n"},
  {"GetResolutionMaxValue", PyvtkArcSource_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual int GetResolutionMaxValue()\n\nDefine the number of segments of the polyline that draws the arc.\nNote: if the resolution is set to 1 (the default value), the arc\nis drawn as a straight line.\n"},
  {"GetResolution", PyvtkArcSource_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nDefine the number of segments of the polyline that draws the arc.\nNote: if the resolution is set to 1 (the default value), the arc\nis drawn as a straight line.\n"},
  {"SetNegative", PyvtkArcSource_SetNegative, METH_VARARGS,
   "V.SetNegative(bool)\nC++: virtual void SetNegative(bool _arg)\n\nBy default the arc spans the shortest angular sector point1 and\npoint2. By setting this to true, the longest angular sector is\nused instead (i.e. the negative coterminal angle to the shortest\none). Note: This is only used when UseNormalAndAngle is OFF.\nFalse by default.\n"},
  {"GetNegative", PyvtkArcSource_GetNegative, METH_VARARGS,
   "V.GetNegative() -> bool\nC++: virtual bool GetNegative()\n\nBy default the arc spans the shortest angular sector point1 and\npoint2. By setting this to true, the longest angular sector is\nused instead (i.e. the negative coterminal angle to the shortest\none). Note: This is only used when UseNormalAndAngle is OFF.\nFalse by default.\n"},
  {"NegativeOn", PyvtkArcSource_NegativeOn, METH_VARARGS,
   "V.NegativeOn()\nC++: virtual void NegativeOn()\n\nBy default the arc spans the shortest angular sector point1 and\npoint2. By setting this to true, the longest angular sector is\nused instead (i.e. the negative coterminal angle to the shortest\none). Note: This is only used when UseNormalAndAngle is OFF.\nFalse by default.\n"},
  {"NegativeOff", PyvtkArcSource_NegativeOff, METH_VARARGS,
   "V.NegativeOff()\nC++: virtual void NegativeOff()\n\nBy default the arc spans the shortest angular sector point1 and\npoint2. By setting this to true, the longest angular sector is\nused instead (i.e. the negative coterminal angle to the shortest\none). Note: This is only used when UseNormalAndAngle is OFF.\nFalse by default.\n"},
  {"SetUseNormalAndAngle", PyvtkArcSource_SetUseNormalAndAngle, METH_VARARGS,
   "V.SetUseNormalAndAngle(bool)\nC++: virtual void SetUseNormalAndAngle(bool _arg)\n\nActivate the API based on a normal vector, a starting point\n(polar vector) and an angle defining the arc length. The previous\nAPI (which remains the default) allows for inputs that are\ninconsistent (when Point1 and Point2 are not equidistant from\nCenter) or ambiguous (when Point1, Point2, and Center are\naligned). Note: false by default.\n"},
  {"GetUseNormalAndAngle", PyvtkArcSource_GetUseNormalAndAngle, METH_VARARGS,
   "V.GetUseNormalAndAngle() -> bool\nC++: virtual bool GetUseNormalAndAngle()\n\nActivate the API based on a normal vector, a starting point\n(polar vector) and an angle defining the arc length. The previous\nAPI (which remains the default) allows for inputs that are\ninconsistent (when Point1 and Point2 are not equidistant from\nCenter) or ambiguous (when Point1, Point2, and Center are\naligned). Note: false by default.\n"},
  {"UseNormalAndAngleOn", PyvtkArcSource_UseNormalAndAngleOn, METH_VARARGS,
   "V.UseNormalAndAngleOn()\nC++: virtual void UseNormalAndAngleOn()\n\nActivate the API based on a normal vector, a starting point\n(polar vector) and an angle defining the arc length. The previous\nAPI (which remains the default) allows for inputs that are\ninconsistent (when Point1 and Point2 are not equidistant from\nCenter) or ambiguous (when Point1, Point2, and Center are\naligned). Note: false by default.\n"},
  {"UseNormalAndAngleOff", PyvtkArcSource_UseNormalAndAngleOff, METH_VARARGS,
   "V.UseNormalAndAngleOff()\nC++: virtual void UseNormalAndAngleOff()\n\nActivate the API based on a normal vector, a starting point\n(polar vector) and an angle defining the arc length. The previous\nAPI (which remains the default) allows for inputs that are\ninconsistent (when Point1 and Point2 are not equidistant from\nCenter) or ambiguous (when Point1, Point2, and Center are\naligned). Note: false by default.\n"},
  {"SetOutputPointsPrecision", PyvtkArcSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkArcSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArcSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkArcSource", // tp_name
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
  PyvtkArcSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArcSource_StaticNew()
{
  return vtkArcSource::New();
}

PyObject *PyvtkArcSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArcSource_Type, PyvtkArcSource_Methods,
    "vtkArcSource",
 &PyvtkArcSource_StaticNew);

  PyTypeObject *pytype = &PyvtkArcSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArcSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArcSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArcSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

