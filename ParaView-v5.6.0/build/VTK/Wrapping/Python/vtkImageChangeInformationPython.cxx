// python wrapper for vtkImageChangeInformation
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
#include "vtkImageChangeInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageChangeInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageChangeInformation_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageChangeInformation_Doc =
  "vtkImageChangeInformation - modify spacing, origin and extent.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageChangeInformation  modify the spacing, origin, or extent of\n"
  "the data without changing the data itself.  The data is not resampled\n"
  "by this filter, only the information accompanying the data is\n"
  "modified.\n\n";


static PyObject *
PyvtkImageChangeInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageChangeInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageChangeInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageChangeInformation *tempr = vtkImageChangeInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageChangeInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageChangeInformation::NewInstance());

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
PyvtkImageChangeInformation_SetInformationInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInformationInputData(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetInformationInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInformationInput() :
      op->vtkImageChangeInformation::GetInformationInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputExtentStart(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputExtentStart(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtentStart(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputExtentStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOutputExtentStart_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputExtentStart_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputExtentStart");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetOutputExtentStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputExtentStart() :
      op->vtkImageChangeInformation::GetOutputExtentStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageChangeInformation::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputOrigin(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputOrigin() :
      op->vtkImageChangeInformation::GetOutputOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterImage(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetCenterImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_CenterImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterImageOn();
    }
    else
    {
      op->vtkImageChangeInformation::CenterImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_CenterImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterImageOff();
    }
    else
    {
      op->vtkImageChangeInformation::CenterImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCenterImage() :
      op->vtkImageChangeInformation::GetCenterImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetExtentTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetExtentTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtentTranslation(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetExtentTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetExtentTranslation_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetExtentTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtentTranslation");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetExtentTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtentTranslation() :
      op->vtkImageChangeInformation::GetExtentTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetSpacingScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetSpacingScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetSpacingScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetSpacingScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacingScale(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetSpacingScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetSpacingScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetSpacingScale_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetSpacingScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacingScale");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetSpacingScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacingScale() :
      op->vtkImageChangeInformation::GetSpacingScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOriginTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOriginTranslation(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOriginTranslation_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOriginTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginTranslation");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginTranslation() :
      op->vtkImageChangeInformation::GetOriginTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOriginScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOriginScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOriginScale(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOriginScale_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOriginScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginScale");
  return nullptr;
}



static PyObject *
PyvtkImageChangeInformation_GetOriginScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginScale() :
      op->vtkImageChangeInformation::GetOriginScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageChangeInformation_Methods[] = {
  {"IsTypeOf", PyvtkImageChangeInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageChangeInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageChangeInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageChangeInformation\nC++: static vtkImageChangeInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageChangeInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageChangeInformation\nC++: vtkImageChangeInformation *NewInstance()\n\n"},
  {"SetInformationInputData", PyvtkImageChangeInformation_SetInformationInputData, METH_VARARGS,
   "V.SetInformationInputData(vtkImageData)\nC++: virtual void SetInformationInputData(vtkImageData *)\n\nCopy the information from another data set.  By default, the\ninformation is copied from the input.\n"},
  {"GetInformationInput", PyvtkImageChangeInformation_GetInformationInput, METH_VARARGS,
   "V.GetInformationInput() -> vtkImageData\nC++: virtual vtkImageData *GetInformationInput()\n\nCopy the information from another data set.  By default, the\ninformation is copied from the input.\n"},
  {"SetOutputExtentStart", PyvtkImageChangeInformation_SetOutputExtentStart, METH_VARARGS,
   "V.SetOutputExtentStart(int, int, int)\nC++: void SetOutputExtentStart(int, int, int)\nV.SetOutputExtentStart((int, int, int))\nC++: void SetOutputExtentStart(int a[3])\n\n"},
  {"GetOutputExtentStart", PyvtkImageChangeInformation_GetOutputExtentStart, METH_VARARGS,
   "V.GetOutputExtentStart() -> (int, int, int)\nC++: int *GetOutputExtentStart()\n\n"},
  {"SetOutputSpacing", PyvtkImageChangeInformation_SetOutputSpacing, METH_VARARGS,
   "V.SetOutputSpacing(float, float, float)\nC++: void SetOutputSpacing(double, double, double)\nV.SetOutputSpacing((float, float, float))\nC++: void SetOutputSpacing(double a[3])\n\n"},
  {"GetOutputSpacing", PyvtkImageChangeInformation_GetOutputSpacing, METH_VARARGS,
   "V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {"SetOutputOrigin", PyvtkImageChangeInformation_SetOutputOrigin, METH_VARARGS,
   "V.SetOutputOrigin(float, float, float)\nC++: void SetOutputOrigin(double, double, double)\nV.SetOutputOrigin((float, float, float))\nC++: void SetOutputOrigin(double a[3])\n\n"},
  {"GetOutputOrigin", PyvtkImageChangeInformation_GetOutputOrigin, METH_VARARGS,
   "V.GetOutputOrigin() -> (float, float, float)\nC++: double *GetOutputOrigin()\n\n"},
  {"SetCenterImage", PyvtkImageChangeInformation_SetCenterImage, METH_VARARGS,
   "V.SetCenterImage(int)\nC++: virtual void SetCenterImage(vtkTypeBool _arg)\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {"CenterImageOn", PyvtkImageChangeInformation_CenterImageOn, METH_VARARGS,
   "V.CenterImageOn()\nC++: virtual void CenterImageOn()\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {"CenterImageOff", PyvtkImageChangeInformation_CenterImageOff, METH_VARARGS,
   "V.CenterImageOff()\nC++: virtual void CenterImageOff()\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {"GetCenterImage", PyvtkImageChangeInformation_GetCenterImage, METH_VARARGS,
   "V.GetCenterImage() -> int\nC++: virtual vtkTypeBool GetCenterImage()\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {"SetExtentTranslation", PyvtkImageChangeInformation_SetExtentTranslation, METH_VARARGS,
   "V.SetExtentTranslation(int, int, int)\nC++: void SetExtentTranslation(int, int, int)\nV.SetExtentTranslation((int, int, int))\nC++: void SetExtentTranslation(int a[3])\n\n"},
  {"GetExtentTranslation", PyvtkImageChangeInformation_GetExtentTranslation, METH_VARARGS,
   "V.GetExtentTranslation() -> (int, int, int)\nC++: int *GetExtentTranslation()\n\n"},
  {"SetSpacingScale", PyvtkImageChangeInformation_SetSpacingScale, METH_VARARGS,
   "V.SetSpacingScale(float, float, float)\nC++: void SetSpacingScale(double, double, double)\nV.SetSpacingScale((float, float, float))\nC++: void SetSpacingScale(double a[3])\n\n"},
  {"GetSpacingScale", PyvtkImageChangeInformation_GetSpacingScale, METH_VARARGS,
   "V.GetSpacingScale() -> (float, float, float)\nC++: double *GetSpacingScale()\n\n"},
  {"SetOriginTranslation", PyvtkImageChangeInformation_SetOriginTranslation, METH_VARARGS,
   "V.SetOriginTranslation(float, float, float)\nC++: void SetOriginTranslation(double, double, double)\nV.SetOriginTranslation((float, float, float))\nC++: void SetOriginTranslation(double a[3])\n\n"},
  {"GetOriginTranslation", PyvtkImageChangeInformation_GetOriginTranslation, METH_VARARGS,
   "V.GetOriginTranslation() -> (float, float, float)\nC++: double *GetOriginTranslation()\n\n"},
  {"SetOriginScale", PyvtkImageChangeInformation_SetOriginScale, METH_VARARGS,
   "V.SetOriginScale(float, float, float)\nC++: void SetOriginScale(double, double, double)\nV.SetOriginScale((float, float, float))\nC++: void SetOriginScale(double a[3])\n\n"},
  {"GetOriginScale", PyvtkImageChangeInformation_GetOriginScale, METH_VARARGS,
   "V.GetOriginScale() -> (float, float, float)\nC++: double *GetOriginScale()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageChangeInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageChangeInformation", // tp_name
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
  PyvtkImageChangeInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageChangeInformation_StaticNew()
{
  return vtkImageChangeInformation::New();
}

PyObject *PyvtkImageChangeInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageChangeInformation_Type, PyvtkImageChangeInformation_Methods,
    "vtkImageChangeInformation",
 &PyvtkImageChangeInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkImageChangeInformation_Type;

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

void PyVTKAddFile_vtkImageChangeInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageChangeInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageChangeInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

