// python wrapper for vtkImageThresholdConnectivity
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
#include "vtkImageThresholdConnectivity.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageThresholdConnectivity(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageThresholdConnectivity_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageThresholdConnectivity_Doc =
  "vtkImageThresholdConnectivity - Flood fill an image region.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageThresholdConnectivity will perform a flood fill on an image,\n"
  "given upper and lower pixel intensity thresholds. It works similarly\n"
  "to vtkImageThreshold, but also allows the user to set seed points to\n"
  "limit the threshold operation to contiguous regions of the image. The\n"
  "filled region, or the \"inside\", will be passed through to the output\n"
  "by default, while the \"outside\" will be replaced with zeros. This\n"
  "behavior can be changed by using the ReplaceIn() and ReplaceOut()\n"
  "methods.  The scalar type of the output is the same as the input.\n"
  "@sa\n"
  "vtkImageThreshold@par Thanks: Thanks to David Gobbi for contributing\n"
  "this class to VTK.\n\n";


static PyObject *
PyvtkImageThresholdConnectivity_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageThresholdConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageThresholdConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageThresholdConnectivity *tempr = vtkImageThresholdConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageThresholdConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageThresholdConnectivity::NewInstance());

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
PyvtkImageThresholdConnectivity_SetSeedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetSeedPoints(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSeedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetSeedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSeedPoints() :
      op->vtkImageThresholdConnectivity::GetSeedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByUpper(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::ThresholdByUpper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByLower(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::ThresholdByLower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceIn(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetReplaceIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceIn() :
      op->vtkImageThresholdConnectivity::GetReplaceIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInOn();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceInOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceInOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInOff();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceInOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInValue(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetInValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInValue() :
      op->vtkImageThresholdConnectivity::GetInValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceOut(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetReplaceOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceOut() :
      op->vtkImageThresholdConnectivity::GetReplaceOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceOutOn();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceOutOff();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutValue(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetOutValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkImageThresholdConnectivity::GetOutValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkImageThresholdConnectivity::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkImageThresholdConnectivity::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeX(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeX(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeX(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeX_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeX");
  return nullptr;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeX() :
      op->vtkImageThresholdConnectivity::GetSliceRangeX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeY(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeY(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeY(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeY_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeY");
  return nullptr;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeY() :
      op->vtkImageThresholdConnectivity::GetSliceRangeY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeZ(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeZ(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeZ(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeZ_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeZ");
  return nullptr;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeZ() :
      op->vtkImageThresholdConnectivity::GetSliceRangeZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageThresholdConnectivity::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageThresholdConnectivity::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

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
      op->SetNeighborhoodRadius(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetNeighborhoodRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodRadius(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetNeighborhoodRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNeighborhoodRadius");
  return nullptr;
}



static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNeighborhoodRadius() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodFraction(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetNeighborhoodFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFractionMinValue() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFractionMaxValue() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFraction() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageThresholdConnectivity::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNumberOfInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInVoxels() :
      op->vtkImageThresholdConnectivity::GetNumberOfInVoxels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageThresholdConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkImageThresholdConnectivity_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageThresholdConnectivity_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageThresholdConnectivity_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageThresholdConnectivity\nC++: static vtkImageThresholdConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageThresholdConnectivity_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageThresholdConnectivity\nC++: vtkImageThresholdConnectivity *NewInstance()\n\n"},
  {"SetSeedPoints", PyvtkImageThresholdConnectivity_SetSeedPoints, METH_VARARGS,
   "V.SetSeedPoints(vtkPoints)\nC++: void SetSeedPoints(vtkPoints *points)\n\nSet the seeds.  The seeds are in real data coordinates, not in\nvoxel index locations.\n"},
  {"GetSeedPoints", PyvtkImageThresholdConnectivity_GetSeedPoints, METH_VARARGS,
   "V.GetSeedPoints() -> vtkPoints\nC++: virtual vtkPoints *GetSeedPoints()\n\nSet the seeds.  The seeds are in real data coordinates, not in\nvoxel index locations.\n"},
  {"ThresholdByUpper", PyvtkImageThresholdConnectivity_ThresholdByUpper, METH_VARARGS,
   "V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double thresh)\n\nValues greater than or equal to this threshold will be filled.\n"},
  {"ThresholdByLower", PyvtkImageThresholdConnectivity_ThresholdByLower, METH_VARARGS,
   "V.ThresholdByLower(float)\nC++: void ThresholdByLower(double thresh)\n\nValues less than or equal to this threshold will be filled.\n"},
  {"ThresholdBetween", PyvtkImageThresholdConnectivity_ThresholdBetween, METH_VARARGS,
   "V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nValues within this range will be filled, where the range includes\nvalues that are exactly equal to the lower and upper thresholds.\n"},
  {"SetReplaceIn", PyvtkImageThresholdConnectivity_SetReplaceIn, METH_VARARGS,
   "V.SetReplaceIn(int)\nC++: virtual void SetReplaceIn(vtkTypeBool _arg)\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"GetReplaceIn", PyvtkImageThresholdConnectivity_GetReplaceIn, METH_VARARGS,
   "V.GetReplaceIn() -> int\nC++: virtual vtkTypeBool GetReplaceIn()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"ReplaceInOn", PyvtkImageThresholdConnectivity_ReplaceInOn, METH_VARARGS,
   "V.ReplaceInOn()\nC++: virtual void ReplaceInOn()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"ReplaceInOff", PyvtkImageThresholdConnectivity_ReplaceInOff, METH_VARARGS,
   "V.ReplaceInOff()\nC++: virtual void ReplaceInOff()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"SetInValue", PyvtkImageThresholdConnectivity_SetInValue, METH_VARARGS,
   "V.SetInValue(float)\nC++: void SetInValue(double val)\n\nIf ReplaceIn is set, the filled region will be replaced by this\nvalue.\n"},
  {"GetInValue", PyvtkImageThresholdConnectivity_GetInValue, METH_VARARGS,
   "V.GetInValue() -> float\nC++: virtual double GetInValue()\n\nIf ReplaceIn is set, the filled region will be replaced by this\nvalue.\n"},
  {"SetReplaceOut", PyvtkImageThresholdConnectivity_SetReplaceOut, METH_VARARGS,
   "V.SetReplaceOut(int)\nC++: virtual void SetReplaceOut(vtkTypeBool _arg)\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"GetReplaceOut", PyvtkImageThresholdConnectivity_GetReplaceOut, METH_VARARGS,
   "V.GetReplaceOut() -> int\nC++: virtual vtkTypeBool GetReplaceOut()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"ReplaceOutOn", PyvtkImageThresholdConnectivity_ReplaceOutOn, METH_VARARGS,
   "V.ReplaceOutOn()\nC++: virtual void ReplaceOutOn()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"ReplaceOutOff", PyvtkImageThresholdConnectivity_ReplaceOutOff, METH_VARARGS,
   "V.ReplaceOutOff()\nC++: virtual void ReplaceOutOff()\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"SetOutValue", PyvtkImageThresholdConnectivity_SetOutValue, METH_VARARGS,
   "V.SetOutValue(float)\nC++: void SetOutValue(double val)\n\nIf ReplaceOut is set, outside the fill will be replaced by this\nvalue.\n"},
  {"GetOutValue", PyvtkImageThresholdConnectivity_GetOutValue, METH_VARARGS,
   "V.GetOutValue() -> float\nC++: virtual double GetOutValue()\n\nIf ReplaceOut is set, outside the fill will be replaced by this\nvalue.\n"},
  {"GetUpperThreshold", PyvtkImageThresholdConnectivity_GetUpperThreshold, METH_VARARGS,
   "V.GetUpperThreshold() -> float\nC++: virtual double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"GetLowerThreshold", PyvtkImageThresholdConnectivity_GetLowerThreshold, METH_VARARGS,
   "V.GetLowerThreshold() -> float\nC++: virtual double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"SetSliceRangeX", PyvtkImageThresholdConnectivity_SetSliceRangeX, METH_VARARGS,
   "V.SetSliceRangeX(int, int)\nC++: void SetSliceRangeX(int, int)\nV.SetSliceRangeX((int, int))\nC++: void SetSliceRangeX(int a[2])\n\n"},
  {"GetSliceRangeX", PyvtkImageThresholdConnectivity_GetSliceRangeX, METH_VARARGS,
   "V.GetSliceRangeX() -> (int, int)\nC++: int *GetSliceRangeX()\n\n"},
  {"SetSliceRangeY", PyvtkImageThresholdConnectivity_SetSliceRangeY, METH_VARARGS,
   "V.SetSliceRangeY(int, int)\nC++: void SetSliceRangeY(int, int)\nV.SetSliceRangeY((int, int))\nC++: void SetSliceRangeY(int a[2])\n\n"},
  {"GetSliceRangeY", PyvtkImageThresholdConnectivity_GetSliceRangeY, METH_VARARGS,
   "V.GetSliceRangeY() -> (int, int)\nC++: int *GetSliceRangeY()\n\n"},
  {"SetSliceRangeZ", PyvtkImageThresholdConnectivity_SetSliceRangeZ, METH_VARARGS,
   "V.SetSliceRangeZ(int, int)\nC++: void SetSliceRangeZ(int, int)\nV.SetSliceRangeZ((int, int))\nC++: void SetSliceRangeZ(int a[2])\n\n"},
  {"GetSliceRangeZ", PyvtkImageThresholdConnectivity_GetSliceRangeZ, METH_VARARGS,
   "V.GetSliceRangeZ() -> (int, int)\nC++: int *GetSliceRangeZ()\n\n"},
  {"SetStencilData", PyvtkImageThresholdConnectivity_SetStencilData, METH_VARARGS,
   "V.SetStencilData(vtkImageStencilData)\nC++: virtual void SetStencilData(vtkImageStencilData *stencil)\n\nSpecify a stencil that will be used to limit the flood fill to an\narbitrarily-shaped region of the image.\n"},
  {"GetStencil", PyvtkImageThresholdConnectivity_GetStencil, METH_VARARGS,
   "V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nSpecify a stencil that will be used to limit the flood fill to an\narbitrarily-shaped region of the image.\n"},
  {"SetActiveComponent", PyvtkImageThresholdConnectivity_SetActiveComponent, METH_VARARGS,
   "V.SetActiveComponent(int)\nC++: virtual void SetActiveComponent(int _arg)\n\nFor multi-component images, you can set which component will be\nused for the threshold checks.\n"},
  {"GetActiveComponent", PyvtkImageThresholdConnectivity_GetActiveComponent, METH_VARARGS,
   "V.GetActiveComponent() -> int\nC++: virtual int GetActiveComponent()\n\nFor multi-component images, you can set which component will be\nused for the threshold checks.\n"},
  {"SetNeighborhoodRadius", PyvtkImageThresholdConnectivity_SetNeighborhoodRadius, METH_VARARGS,
   "V.SetNeighborhoodRadius(float, float, float)\nC++: void SetNeighborhoodRadius(double, double, double)\nV.SetNeighborhoodRadius((float, float, float))\nC++: void SetNeighborhoodRadius(double a[3])\n\n"},
  {"GetNeighborhoodRadius", PyvtkImageThresholdConnectivity_GetNeighborhoodRadius, METH_VARARGS,
   "V.GetNeighborhoodRadius() -> (float, float, float)\nC++: double *GetNeighborhoodRadius()\n\n"},
  {"SetNeighborhoodFraction", PyvtkImageThresholdConnectivity_SetNeighborhoodFraction, METH_VARARGS,
   "V.SetNeighborhoodFraction(float)\nC++: virtual void SetNeighborhoodFraction(double _arg)\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {"GetNeighborhoodFractionMinValue", PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMinValue, METH_VARARGS,
   "V.GetNeighborhoodFractionMinValue() -> float\nC++: virtual double GetNeighborhoodFractionMinValue()\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {"GetNeighborhoodFractionMaxValue", PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMaxValue, METH_VARARGS,
   "V.GetNeighborhoodFractionMaxValue() -> float\nC++: virtual double GetNeighborhoodFractionMaxValue()\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {"GetNeighborhoodFraction", PyvtkImageThresholdConnectivity_GetNeighborhoodFraction, METH_VARARGS,
   "V.GetNeighborhoodFraction() -> float\nC++: virtual double GetNeighborhoodFraction()\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {"GetMTime", PyvtkImageThresholdConnectivity_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the MTime to account for the seed points.\n"},
  {"GetNumberOfInVoxels", PyvtkImageThresholdConnectivity_GetNumberOfInVoxels, METH_VARARGS,
   "V.GetNumberOfInVoxels() -> int\nC++: virtual int GetNumberOfInVoxels()\n\nAfter the filter has executed, use GetNumberOfVoxels() to find\nout how many voxels were filled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageThresholdConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageThresholdConnectivity", // tp_name
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
  PyvtkImageThresholdConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageThresholdConnectivity_StaticNew()
{
  return vtkImageThresholdConnectivity::New();
}

PyObject *PyvtkImageThresholdConnectivity_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageThresholdConnectivity_Type, PyvtkImageThresholdConnectivity_Methods,
    "vtkImageThresholdConnectivity",
 &PyvtkImageThresholdConnectivity_StaticNew);

  PyTypeObject *pytype = &PyvtkImageThresholdConnectivity_Type;

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

void PyVTKAddFile_vtkImageThresholdConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageThresholdConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageThresholdConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

