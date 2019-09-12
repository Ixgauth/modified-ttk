// python wrapper for vtkEllipseArcSource
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
#include "vtkEllipseArcSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEllipseArcSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEllipseArcSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkEllipseArcSource_Doc =
  "vtkEllipseArcSource - create an elliptical arc\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkEllipseArcSource is a source object that creates an elliptical arc\n"
  "defined by a normal, a center and the major radius vector. You can\n"
  "define an angle to draw only a section of the ellipse. The number of\n"
  "segments composing the polyline is controlled by setting the object\n"
  "resolution.\n\n"
  "@sa\n"
  "vtkArcSource\n\n";


static PyObject *
PyvtkEllipseArcSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEllipseArcSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEllipseArcSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEllipseArcSource *tempr = vtkEllipseArcSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEllipseArcSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEllipseArcSource::NewInstance());

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
PyvtkEllipseArcSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->vtkEllipseArcSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEllipseArcSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->vtkEllipseArcSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEllipseArcSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkEllipseArcSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkEllipseArcSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkEllipseArcSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkEllipseArcSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->vtkEllipseArcSource::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEllipseArcSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->vtkEllipseArcSource::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEllipseArcSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkEllipseArcSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkEllipseArcSource_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkEllipseArcSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkEllipseArcSource::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetMajorRadiusVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorRadiusVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->SetMajorRadiusVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEllipseArcSource::SetMajorRadiusVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEllipseArcSource_SetMajorRadiusVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorRadiusVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMajorRadiusVector(temp0);
    }
    else
    {
      op->vtkEllipseArcSource::SetMajorRadiusVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEllipseArcSource_SetMajorRadiusVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkEllipseArcSource_SetMajorRadiusVector_s1(self, args);
    case 1:
      return PyvtkEllipseArcSource_SetMajorRadiusVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMajorRadiusVector");
  return nullptr;
}



static PyObject *
PyvtkEllipseArcSource_GetMajorRadiusVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorRadiusVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMajorRadiusVector() :
      op->vtkEllipseArcSource::GetMajorRadiusVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartAngle(temp0);
    }
    else
    {
      op->vtkEllipseArcSource::SetStartAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetStartAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngleMinValue() :
      op->vtkEllipseArcSource::GetStartAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetStartAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngleMaxValue() :
      op->vtkEllipseArcSource::GetStartAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngle() :
      op->vtkEllipseArcSource::GetStartAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetSegmentAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSegmentAngle(temp0);
    }
    else
    {
      op->vtkEllipseArcSource::SetSegmentAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetSegmentAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSegmentAngleMinValue() :
      op->vtkEllipseArcSource::GetSegmentAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetSegmentAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSegmentAngleMaxValue() :
      op->vtkEllipseArcSource::GetSegmentAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetSegmentAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSegmentAngle() :
      op->vtkEllipseArcSource::GetSegmentAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->vtkEllipseArcSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkEllipseArcSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkEllipseArcSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkEllipseArcSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

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
      op->vtkEllipseArcSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkEllipseArcSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_SetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRatio(temp0);
    }
    else
    {
      op->vtkEllipseArcSource::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRatioMinValue() :
      op->vtkEllipseArcSource::GetRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRatioMaxValue() :
      op->vtkEllipseArcSource::GetRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipseArcSource_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipseArcSource *op = static_cast<vtkEllipseArcSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRatio() :
      op->vtkEllipseArcSource::GetRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEllipseArcSource_Methods[] = {
  {"IsTypeOf", PyvtkEllipseArcSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEllipseArcSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEllipseArcSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEllipseArcSource\nC++: static vtkEllipseArcSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEllipseArcSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEllipseArcSource\nC++: vtkEllipseArcSource *NewInstance()\n\n"},
  {"SetCenter", PyvtkEllipseArcSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkEllipseArcSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet position of the center of the ellipse that define the arc.\nDefault is 0, 0, 0.\n"},
  {"SetNormal", PyvtkEllipseArcSource_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkEllipseArcSource_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet normal vector. Represents the plane in which the ellipse will\nbe drawn. Default 0, 0, 1.\n"},
  {"SetMajorRadiusVector", PyvtkEllipseArcSource_SetMajorRadiusVector, METH_VARARGS,
   "V.SetMajorRadiusVector(float, float, float)\nC++: void SetMajorRadiusVector(double, double, double)\nV.SetMajorRadiusVector((float, float, float))\nC++: void SetMajorRadiusVector(double a[3])\n\n"},
  {"GetMajorRadiusVector", PyvtkEllipseArcSource_GetMajorRadiusVector, METH_VARARGS,
   "V.GetMajorRadiusVector() -> (float, float, float)\nC++: double *GetMajorRadiusVector()\n\nSet Major Radius Vector. It defines the origin of polar angle and\nthe major radius size. Default is 1, 0, 0.\n"},
  {"SetStartAngle", PyvtkEllipseArcSource_SetStartAngle, METH_VARARGS,
   "V.SetStartAngle(float)\nC++: virtual void SetStartAngle(double _arg)\n\nSet the start angle. The angle where the plot begins. Default is\n0.\n"},
  {"GetStartAngleMinValue", PyvtkEllipseArcSource_GetStartAngleMinValue, METH_VARARGS,
   "V.GetStartAngleMinValue() -> float\nC++: virtual double GetStartAngleMinValue()\n\nSet the start angle. The angle where the plot begins. Default is\n0.\n"},
  {"GetStartAngleMaxValue", PyvtkEllipseArcSource_GetStartAngleMaxValue, METH_VARARGS,
   "V.GetStartAngleMaxValue() -> float\nC++: virtual double GetStartAngleMaxValue()\n\nSet the start angle. The angle where the plot begins. Default is\n0.\n"},
  {"GetStartAngle", PyvtkEllipseArcSource_GetStartAngle, METH_VARARGS,
   "V.GetStartAngle() -> float\nC++: virtual double GetStartAngle()\n\nSet the start angle. The angle where the plot begins. Default is\n0.\n"},
  {"SetSegmentAngle", PyvtkEllipseArcSource_SetSegmentAngle, METH_VARARGS,
   "V.SetSegmentAngle(float)\nC++: virtual void SetSegmentAngle(double _arg)\n\nAngular sector occupied by the arc, beginning at Start Angle\nDefault is 90.\n"},
  {"GetSegmentAngleMinValue", PyvtkEllipseArcSource_GetSegmentAngleMinValue, METH_VARARGS,
   "V.GetSegmentAngleMinValue() -> float\nC++: virtual double GetSegmentAngleMinValue()\n\nAngular sector occupied by the arc, beginning at Start Angle\nDefault is 90.\n"},
  {"GetSegmentAngleMaxValue", PyvtkEllipseArcSource_GetSegmentAngleMaxValue, METH_VARARGS,
   "V.GetSegmentAngleMaxValue() -> float\nC++: virtual double GetSegmentAngleMaxValue()\n\nAngular sector occupied by the arc, beginning at Start Angle\nDefault is 90.\n"},
  {"GetSegmentAngle", PyvtkEllipseArcSource_GetSegmentAngle, METH_VARARGS,
   "V.GetSegmentAngle() -> float\nC++: virtual double GetSegmentAngle()\n\nAngular sector occupied by the arc, beginning at Start Angle\nDefault is 90.\n"},
  {"SetResolution", PyvtkEllipseArcSource_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 the arc is a straight line. Default is 100.\n"},
  {"GetResolutionMinValue", PyvtkEllipseArcSource_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual int GetResolutionMinValue()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 the arc is a straight line. Default is 100.\n"},
  {"GetResolutionMaxValue", PyvtkEllipseArcSource_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual int GetResolutionMaxValue()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 the arc is a straight line. Default is 100.\n"},
  {"GetResolution", PyvtkEllipseArcSource_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 the arc is a straight line. Default is 100.\n"},
  {"SetOutputPointsPrecision", PyvtkEllipseArcSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint, This is the default. vtkAlgorithm::DOUBLE_PRECISION -\nOutput double-precision floating point.\n"},
  {"GetOutputPointsPrecision", PyvtkEllipseArcSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint, This is the default. vtkAlgorithm::DOUBLE_PRECISION -\nOutput double-precision floating point.\n"},
  {"SetRatio", PyvtkEllipseArcSource_SetRatio, METH_VARARGS,
   "V.SetRatio(float)\nC++: virtual void SetRatio(double _arg)\n\nSet the ratio of the ellipse, i.e. the ratio b/a _ b: minor\nradius; a: major radius default is 1.\n"},
  {"GetRatioMinValue", PyvtkEllipseArcSource_GetRatioMinValue, METH_VARARGS,
   "V.GetRatioMinValue() -> float\nC++: virtual double GetRatioMinValue()\n\nSet the ratio of the ellipse, i.e. the ratio b/a _ b: minor\nradius; a: major radius default is 1.\n"},
  {"GetRatioMaxValue", PyvtkEllipseArcSource_GetRatioMaxValue, METH_VARARGS,
   "V.GetRatioMaxValue() -> float\nC++: virtual double GetRatioMaxValue()\n\nSet the ratio of the ellipse, i.e. the ratio b/a _ b: minor\nradius; a: major radius default is 1.\n"},
  {"GetRatio", PyvtkEllipseArcSource_GetRatio, METH_VARARGS,
   "V.GetRatio() -> float\nC++: virtual double GetRatio()\n\nSet the ratio of the ellipse, i.e. the ratio b/a _ b: minor\nradius; a: major radius default is 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEllipseArcSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkEllipseArcSource", // tp_name
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
  PyvtkEllipseArcSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEllipseArcSource_StaticNew()
{
  return vtkEllipseArcSource::New();
}

PyObject *PyvtkEllipseArcSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEllipseArcSource_Type, PyvtkEllipseArcSource_Methods,
    "vtkEllipseArcSource",
 &PyvtkEllipseArcSource_StaticNew);

  PyTypeObject *pytype = &PyvtkEllipseArcSource_Type;

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

void PyVTKAddFile_vtkEllipseArcSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEllipseArcSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEllipseArcSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

