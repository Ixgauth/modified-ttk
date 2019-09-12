// python wrapper for vtkResliceCursorRepresentation
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
#include "vtkResliceCursorRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceCursorRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkResliceCursorRepresentation_Doc =
  "vtkResliceCursorRepresentation - represent the vtkResliceCursorWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is the base class for the reslice cursor representation\n"
  "subclasses. It represents a cursor that may be interactively\n"
  "translated, rotated through an image and perform thick / thick\n"
  "reformats.\n"
  "@sa\n"
  "vtkResliceCursorLineRepresentation\n"
  "vtkResliceCursorThickLineRepresentation vtkResliceCursorWidget\n"
  "vtkResliceCursor\n\n";


static PyObject *
PyvtkResliceCursorRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorRepresentation *tempr = vtkResliceCursorRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorRepresentation::NewInstance());

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
PyvtkResliceCursorRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
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
      op->vtkResliceCursorRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkResliceCursorRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkResliceCursorRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkResliceCursorRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetShowReslicedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReslicedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowReslicedImage(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetShowReslicedImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetShowReslicedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReslicedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowReslicedImage() :
      op->vtkResliceCursorRepresentation::GetShowReslicedImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ShowReslicedImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReslicedImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowReslicedImageOn();
    }
    else
    {
      op->vtkResliceCursorRepresentation::ShowReslicedImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ShowReslicedImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReslicedImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowReslicedImageOff();
    }
    else
    {
      op->vtkResliceCursorRepresentation::ShowReslicedImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestrictPlaneToVolume(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetRestrictPlaneToVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictPlaneToVolume() :
      op->vtkResliceCursorRepresentation::GetRestrictPlaneToVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPlaneToVolumeOn();
    }
    else
    {
      op->vtkResliceCursorRepresentation::RestrictPlaneToVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPlaneToVolumeOff();
    }
    else
    {
      op->vtkResliceCursorRepresentation::RestrictPlaneToVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetThicknessLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThicknessLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThicknessLabelFormat(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetThicknessLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetThicknessLabelFormat() :
      op->vtkResliceCursorRepresentation::GetThicknessLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetThicknessLabelText() :
      op->vtkResliceCursorRepresentation::GetThicknessLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetThicknessLabelPosition() :
      op->vtkResliceCursorRepresentation::GetThicknessLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetThicknessLabelPosition(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::GetThicknessLabelPosition(temp0);
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
PyvtkResliceCursorRepresentation_GetThicknessLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s1(self, args);
    case 1:
      return PyvtkResliceCursorRepresentation_GetThicknessLabelPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetThicknessLabelPosition");
  return nullptr;
}



static PyObject *
PyvtkResliceCursorRepresentation_GetWorldThicknessLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldThicknessLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetWorldThicknessLabelPosition(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::GetWorldThicknessLabelPosition(temp0);
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
PyvtkResliceCursorRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkResliceCursorRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetResliceAxes() :
      op->vtkResliceCursorRepresentation::GetResliceAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageAlgorithm *tempr = (ap.IsBound() ?
      op->GetReslice() :
      op->vtkResliceCursorRepresentation::GetReslice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkResliceCursorRepresentation::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkResliceCursorRepresentation::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkResliceCursorRepresentation::GetColorMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  vtkImageMapToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToColors"))
  {
    if (ap.IsBound())
    {
      op->SetColorMap(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  double temp0;
  double temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetWindowLevel(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

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
      op->GetWindowLevel(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::GetWindowLevel(temp0);
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
PyvtkResliceCursorRepresentation_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkResliceCursorRepresentation::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkResliceCursorRepresentation::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkResliceCursor *tempr = op->GetResliceCursor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayText(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetDisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayText() :
      op->vtkResliceCursorRepresentation::GetDisplayText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOn();
    }
    else
    {
      op->vtkResliceCursorRepresentation::DisplayTextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOff();
    }
    else
    {
      op->vtkResliceCursorRepresentation::DisplayTextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkResliceCursorRepresentation::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetUseImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseImageActor(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetUseImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetUseImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseImageActor() :
      op->vtkResliceCursorRepresentation::GetUseImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_UseImageActorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseImageActorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseImageActorOn();
    }
    else
    {
      op->vtkResliceCursorRepresentation::UseImageActorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_UseImageActorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseImageActorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseImageActorOff();
    }
    else
    {
      op->vtkResliceCursorRepresentation::UseImageActorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_SetManipulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManipulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManipulationMode(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::SetManipulationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetManipulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManipulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetManipulationMode() :
      op->vtkResliceCursorRepresentation::GetManipulationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ActivateText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ActivateText(temp0);
    }
    else
    {
      op->vtkResliceCursorRepresentation::ActivateText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ManageTextDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManageTextDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManageTextDisplay();
    }
    else
    {
      op->vtkResliceCursorRepresentation::ManageTextDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_InitializeReslicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeReslicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeReslicePlane();
    }
    else
    {
      op->vtkResliceCursorRepresentation::InitializeReslicePlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCamera();
    }
    else
    {
      op->vtkResliceCursorRepresentation::ResetCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = op->GetCursorAlgorithm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorRepresentation_GetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorRepresentation *op = static_cast<vtkResliceCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneSource *tempr = (ap.IsBound() ?
      op->GetPlaneSource() :
      op->vtkResliceCursorRepresentation::GetPlaneSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkResliceCursorRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkResliceCursorRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResliceCursorRepresentation\nC++: static vtkResliceCursorRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkResliceCursorRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceCursorRepresentation\nC++: vtkResliceCursorRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"SetTolerance", PyvtkResliceCursorRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {"GetToleranceMinValue", PyvtkResliceCursorRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {"GetToleranceMaxValue", PyvtkResliceCursorRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {"GetTolerance", PyvtkResliceCursorRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the\nrepresentation to be active.\n"},
  {"SetShowReslicedImage", PyvtkResliceCursorRepresentation_SetShowReslicedImage, METH_VARARGS,
   "V.SetShowReslicedImage(int)\nC++: virtual void SetShowReslicedImage(vtkTypeBool _arg)\n\nShow the resliced image ?\n"},
  {"GetShowReslicedImage", PyvtkResliceCursorRepresentation_GetShowReslicedImage, METH_VARARGS,
   "V.GetShowReslicedImage() -> int\nC++: virtual vtkTypeBool GetShowReslicedImage()\n\nShow the resliced image ?\n"},
  {"ShowReslicedImageOn", PyvtkResliceCursorRepresentation_ShowReslicedImageOn, METH_VARARGS,
   "V.ShowReslicedImageOn()\nC++: virtual void ShowReslicedImageOn()\n\nShow the resliced image ?\n"},
  {"ShowReslicedImageOff", PyvtkResliceCursorRepresentation_ShowReslicedImageOff, METH_VARARGS,
   "V.ShowReslicedImageOff()\nC++: virtual void ShowReslicedImageOff()\n\nShow the resliced image ?\n"},
  {"SetRestrictPlaneToVolume", PyvtkResliceCursorRepresentation_SetRestrictPlaneToVolume, METH_VARARGS,
   "V.SetRestrictPlaneToVolume(int)\nC++: virtual void SetRestrictPlaneToVolume(vtkTypeBool _arg)\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {"GetRestrictPlaneToVolume", PyvtkResliceCursorRepresentation_GetRestrictPlaneToVolume, METH_VARARGS,
   "V.GetRestrictPlaneToVolume() -> int\nC++: virtual vtkTypeBool GetRestrictPlaneToVolume()\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {"RestrictPlaneToVolumeOn", PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOn, METH_VARARGS,
   "V.RestrictPlaneToVolumeOn()\nC++: virtual void RestrictPlaneToVolumeOn()\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {"RestrictPlaneToVolumeOff", PyvtkResliceCursorRepresentation_RestrictPlaneToVolumeOff, METH_VARARGS,
   "V.RestrictPlaneToVolumeOff()\nC++: virtual void RestrictPlaneToVolumeOff()\n\nMake sure that the resliced image remains within the volume.\nDefault is On.\n"},
  {"SetThicknessLabelFormat", PyvtkResliceCursorRepresentation_SetThicknessLabelFormat, METH_VARARGS,
   "V.SetThicknessLabelFormat(string)\nC++: virtual void SetThicknessLabelFormat(const char *_arg)\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the thickness value.\n"},
  {"GetThicknessLabelFormat", PyvtkResliceCursorRepresentation_GetThicknessLabelFormat, METH_VARARGS,
   "V.GetThicknessLabelFormat() -> string\nC++: virtual char *GetThicknessLabelFormat()\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the thickness value.\n"},
  {"GetThicknessLabelText", PyvtkResliceCursorRepresentation_GetThicknessLabelText, METH_VARARGS,
   "V.GetThicknessLabelText() -> string\nC++: virtual char *GetThicknessLabelText()\n\nGet the text shown in the widget's label.\n"},
  {"GetThicknessLabelPosition", PyvtkResliceCursorRepresentation_GetThicknessLabelPosition, METH_VARARGS,
   "V.GetThicknessLabelPosition() -> (float, ...)\nC++: virtual double *GetThicknessLabelPosition()\nV.GetThicknessLabelPosition([float, float, float])\nC++: virtual void GetThicknessLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {"GetWorldThicknessLabelPosition", PyvtkResliceCursorRepresentation_GetWorldThicknessLabelPosition, METH_VARARGS,
   "V.GetWorldThicknessLabelPosition([float, float, float])\nC++: virtual void GetWorldThicknessLabelPosition(double pos[3])\n\nGet the position of the widget's label in display coordinates.\n"},
  {"BuildRepresentation", PyvtkResliceCursorRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"GetResliceAxes", PyvtkResliceCursorRepresentation_GetResliceAxes, METH_VARARGS,
   "V.GetResliceAxes() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetResliceAxes()\n\nGet the current reslice class and reslice axes\n"},
  {"GetReslice", PyvtkResliceCursorRepresentation_GetReslice, METH_VARARGS,
   "V.GetReslice() -> vtkImageAlgorithm\nC++: virtual vtkImageAlgorithm *GetReslice()\n\nGet the current reslice class and reslice axes\n"},
  {"GetImageActor", PyvtkResliceCursorRepresentation_GetImageActor, METH_VARARGS,
   "V.GetImageActor() -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\nGet the displayed image actor\n"},
  {"SetLookupTable", PyvtkResliceCursorRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another Reslice cusror\nwidget.  In this way, a set of three orthogonal planes can share\nthe same lut so that window-levelling is performed uniformly\namong planes.  The default internal lut can be re- set/allocated\nby setting to 0 (nullptr).\n"},
  {"GetLookupTable", PyvtkResliceCursorRepresentation_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another Reslice cusror\nwidget.  In this way, a set of three orthogonal planes can share\nthe same lut so that window-levelling is performed uniformly\namong planes.  The default internal lut can be re- set/allocated\nby setting to 0 (nullptr).\n"},
  {"GetColorMap", PyvtkResliceCursorRepresentation_GetColorMap, METH_VARARGS,
   "V.GetColorMap() -> vtkImageMapToColors\nC++: virtual vtkImageMapToColors *GetColorMap()\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {"SetColorMap", PyvtkResliceCursorRepresentation_SetColorMap, METH_VARARGS,
   "V.SetColorMap(vtkImageMapToColors)\nC++: virtual void SetColorMap(vtkImageMapToColors *)\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {"SetWindowLevel", PyvtkResliceCursorRepresentation_SetWindowLevel, METH_VARARGS,
   "V.SetWindowLevel(float, float, int)\nC++: void SetWindowLevel(double window, double level, int copy=0)\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetWindowLevel", PyvtkResliceCursorRepresentation_GetWindowLevel, METH_VARARGS,
   "V.GetWindowLevel([float, float])\nC++: void GetWindowLevel(double wl[2])\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetWindow", PyvtkResliceCursorRepresentation_GetWindow, METH_VARARGS,
   "V.GetWindow() -> float\nC++: double GetWindow()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetLevel", PyvtkResliceCursorRepresentation_GetLevel, METH_VARARGS,
   "V.GetLevel() -> float\nC++: double GetLevel()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetResliceCursor", PyvtkResliceCursorRepresentation_GetResliceCursor, METH_VARARGS,
   "V.GetResliceCursor() -> vtkResliceCursor\nC++: virtual vtkResliceCursor *GetResliceCursor()\n\n"},
  {"SetDisplayText", PyvtkResliceCursorRepresentation_SetDisplayText, METH_VARARGS,
   "V.SetDisplayText(int)\nC++: virtual void SetDisplayText(vtkTypeBool _arg)\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"GetDisplayText", PyvtkResliceCursorRepresentation_GetDisplayText, METH_VARARGS,
   "V.GetDisplayText() -> int\nC++: virtual vtkTypeBool GetDisplayText()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"DisplayTextOn", PyvtkResliceCursorRepresentation_DisplayTextOn, METH_VARARGS,
   "V.DisplayTextOn()\nC++: virtual void DisplayTextOn()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"DisplayTextOff", PyvtkResliceCursorRepresentation_DisplayTextOff, METH_VARARGS,
   "V.DisplayTextOff()\nC++: virtual void DisplayTextOff()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"SetTextProperty", PyvtkResliceCursorRepresentation_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {"GetTextProperty", PyvtkResliceCursorRepresentation_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {"SetUseImageActor", PyvtkResliceCursorRepresentation_SetUseImageActor, METH_VARARGS,
   "V.SetUseImageActor(int)\nC++: virtual void SetUseImageActor(vtkTypeBool _arg)\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {"GetUseImageActor", PyvtkResliceCursorRepresentation_GetUseImageActor, METH_VARARGS,
   "V.GetUseImageActor() -> int\nC++: virtual vtkTypeBool GetUseImageActor()\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {"UseImageActorOn", PyvtkResliceCursorRepresentation_UseImageActorOn, METH_VARARGS,
   "V.UseImageActorOn()\nC++: virtual void UseImageActorOn()\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {"UseImageActorOff", PyvtkResliceCursorRepresentation_UseImageActorOff, METH_VARARGS,
   "V.UseImageActorOff()\nC++: virtual void UseImageActorOff()\n\nRender as a 2D image, or render as a plane with a texture in\nphysical space.\n"},
  {"SetManipulationMode", PyvtkResliceCursorRepresentation_SetManipulationMode, METH_VARARGS,
   "V.SetManipulationMode(int)\nC++: void SetManipulationMode(int m)\n\nINTERNAL - Do not use Set the manipulation mode. This is done by\nthe widget\n"},
  {"GetManipulationMode", PyvtkResliceCursorRepresentation_GetManipulationMode, METH_VARARGS,
   "V.GetManipulationMode() -> int\nC++: virtual int GetManipulationMode()\n\nINTERNAL - Do not use Set the manipulation mode. This is done by\nthe widget\n"},
  {"ActivateText", PyvtkResliceCursorRepresentation_ActivateText, METH_VARARGS,
   "V.ActivateText(int)\nC++: void ActivateText(int)\n\nINTERNAL - Do not use. Internal methods used by the widget to\nmanage text displays for annotations.\n"},
  {"ManageTextDisplay", PyvtkResliceCursorRepresentation_ManageTextDisplay, METH_VARARGS,
   "V.ManageTextDisplay()\nC++: void ManageTextDisplay()\n\nINTERNAL - Do not use. Internal methods used by the widget to\nmanage text displays for annotations.\n"},
  {"InitializeReslicePlane", PyvtkResliceCursorRepresentation_InitializeReslicePlane, METH_VARARGS,
   "V.InitializeReslicePlane()\nC++: virtual void InitializeReslicePlane()\n\nInitialize the reslice planes and the camera center. This is done\nautomatically, the first time we render.\n"},
  {"ResetCamera", PyvtkResliceCursorRepresentation_ResetCamera, METH_VARARGS,
   "V.ResetCamera()\nC++: virtual void ResetCamera()\n\nInitialize the reslice planes and the camera center. This is done\nautomatically, the first time we render.\n"},
  {"GetCursorAlgorithm", PyvtkResliceCursorRepresentation_GetCursorAlgorithm, METH_VARARGS,
   "V.GetCursorAlgorithm() -> vtkResliceCursorPolyDataAlgorithm\nC++: virtual vtkResliceCursorPolyDataAlgorithm *GetCursorAlgorithm(\n    )\n\nGet the underlying cursor source.\n"},
  {"GetPlaneSource", PyvtkResliceCursorRepresentation_GetPlaneSource, METH_VARARGS,
   "V.GetPlaneSource() -> vtkPlaneSource\nC++: virtual vtkPlaneSource *GetPlaneSource()\n\nGet the plane source on which the texture (the thin/thick\nresliced image is displayed)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceCursorRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkResliceCursorRepresentation", // tp_name
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
  PyvtkResliceCursorRepresentation_Doc, // tp_doc
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

PyObject *PyvtkResliceCursorRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceCursorRepresentation_Type, PyvtkResliceCursorRepresentation_Methods,
    "vtkResliceCursorRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkResliceCursorRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 12; c++)
  {
    static const struct { const char *name; int value; }
      constants[12] = {
        { "Outside", vtkResliceCursorRepresentation::Outside },
        { "NearCenter", vtkResliceCursorRepresentation::NearCenter },
        { "NearAxis1", vtkResliceCursorRepresentation::NearAxis1 },
        { "NearAxis2", vtkResliceCursorRepresentation::NearAxis2 },
        { "OnCenter", vtkResliceCursorRepresentation::OnCenter },
        { "OnAxis1", vtkResliceCursorRepresentation::OnAxis1 },
        { "OnAxis2", vtkResliceCursorRepresentation::OnAxis2 },
        { "None", vtkResliceCursorRepresentation::None },
        { "PanAndRotate", vtkResliceCursorRepresentation::PanAndRotate },
        { "RotateBothAxes", vtkResliceCursorRepresentation::RotateBothAxes },
        { "ResizeThickness", vtkResliceCursorRepresentation::ResizeThickness },
        { "WindowLevelling", vtkResliceCursorRepresentation::WindowLevelling },
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

void PyVTKAddFile_vtkResliceCursorRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(128);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_RESLICE_CURSOR_REPRESENTATION_MAX_TEXTBUFF", o);
    Py_DECREF(o);
  }
}

