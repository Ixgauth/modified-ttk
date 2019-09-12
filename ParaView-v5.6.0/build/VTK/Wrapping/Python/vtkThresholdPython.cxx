// python wrapper for vtkThreshold
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
#include "vtkThreshold.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreshold(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThreshold_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkThreshold_Doc =
  "vtkThreshold - extracts cells where scalar value in cell satisfies\nthreshold criterion\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkThreshold is a filter that extracts cells from any dataset type\n"
  "that satisfy a threshold criterion. A cell satisfies the criterion if\n"
  "the scalar value of (every or any) point satisfies the criterion. The\n"
  "criterion can take three forms: 1) greater than a particular value;\n"
  "2) less than a particular value; or 3) between two values. The output\n"
  "of this filter is an unstructured grid.\n\n"
  "Note that scalar values are available from the point and cell\n"
  "attribute data.  By default, point data is used to obtain scalars,\n"
  "but you can control this behavior. See the AttributeMode ivar below.\n\n"
  "By default only the first scalar value is used in the decision. Use\n"
  "the ComponentMode and SelectedComponent ivars to control this\n"
  "behavior.\n\n"
  "@sa\n"
  "vtkThresholdPoints vtkThresholdTextureCoords\n\n";


static PyObject *
PyvtkThreshold_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreshold *tempr = vtkThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreshold::NewInstance());

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
PyvtkThreshold_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::ThresholdByLower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::ThresholdByUpper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeMode(temp0);
    }
    else
    {
      op->vtkThreshold::SetAttributeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkThreshold::GetAttributeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToDefault();
    }
    else
    {
      op->vtkThreshold::SetAttributeModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUsePointData();
    }
    else
    {
      op->vtkThreshold::SetAttributeModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUseCellData();
    }
    else
    {
      op->vtkThreshold::SetAttributeModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeModeAsString() :
      op->vtkThreshold::GetAttributeModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentMode(temp0);
    }
    else
    {
      op->vtkThreshold::SetComponentMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMinValue() :
      op->vtkThreshold::GetComponentModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMaxValue() :
      op->vtkThreshold::GetComponentModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMode() :
      op->vtkThreshold::GetComponentMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseSelected();
    }
    else
    {
      op->vtkThreshold::SetComponentModeToUseSelected();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseAll();
    }
    else
    {
      op->vtkThreshold::SetComponentModeToUseAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAny(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAny");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseAny();
    }
    else
    {
      op->vtkThreshold::SetComponentModeToUseAny();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentModeAsString() :
      op->vtkThreshold::GetComponentModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedComponent(temp0);
    }
    else
    {
      op->vtkThreshold::SetSelectedComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMinValue() :
      op->vtkThreshold::GetSelectedComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMaxValue() :
      op->vtkThreshold::GetSelectedComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponent() :
      op->vtkThreshold::GetSelectedComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllScalars(temp0);
    }
    else
    {
      op->vtkThreshold::SetAllScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllScalars() :
      op->vtkThreshold::GetAllScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllScalarsOn();
    }
    else
    {
      op->vtkThreshold::AllScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllScalarsOff();
    }
    else
    {
      op->vtkThreshold::AllScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetUseContinuousCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseContinuousCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseContinuousCellRange(temp0);
    }
    else
    {
      op->vtkThreshold::SetUseContinuousCellRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetUseContinuousCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseContinuousCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseContinuousCellRange() :
      op->vtkThreshold::GetUseContinuousCellRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_UseContinuousCellRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCellRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCellRangeOn();
    }
    else
    {
      op->vtkThreshold::UseContinuousCellRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_UseContinuousCellRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCellRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCellRangeOff();
    }
    else
    {
      op->vtkThreshold::UseContinuousCellRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointsDataTypeToDouble();
    }
    else
    {
      op->vtkThreshold::SetPointsDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointsDataTypeToFloat();
    }
    else
    {
      op->vtkThreshold::SetPointsDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointsDataType(temp0);
    }
    else
    {
      op->vtkThreshold::SetPointsDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetPointsDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointsDataType() :
      op->vtkThreshold::GetPointsDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

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
      op->vtkThreshold::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkThreshold::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkThreshold_Methods[] = {
  {"IsTypeOf", PyvtkThreshold_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreshold_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreshold_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThreshold\nC++: static vtkThreshold *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreshold_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThreshold\nC++: vtkThreshold *NewInstance()\n\n"},
  {"ThresholdByLower", PyvtkThreshold_ThresholdByLower, METH_VARARGS,
   "V.ThresholdByLower(float)\nC++: void ThresholdByLower(double lower)\n\nCriterion is cells whose scalars are less or equal to lower\nthreshold.\n"},
  {"ThresholdByUpper", PyvtkThreshold_ThresholdByUpper, METH_VARARGS,
   "V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double upper)\n\nCriterion is cells whose scalars are greater or equal to upper\nthreshold.\n"},
  {"ThresholdBetween", PyvtkThreshold_ThresholdBetween, METH_VARARGS,
   "V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {"GetUpperThreshold", PyvtkThreshold_GetUpperThreshold, METH_VARARGS,
   "V.GetUpperThreshold() -> float\nC++: virtual double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"GetLowerThreshold", PyvtkThreshold_GetLowerThreshold, METH_VARARGS,
   "V.GetLowerThreshold() -> float\nC++: virtual double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"SetAttributeMode", PyvtkThreshold_SetAttributeMode, METH_VARARGS,
   "V.SetAttributeMode(int)\nC++: virtual void SetAttributeMode(int _arg)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"GetAttributeMode", PyvtkThreshold_GetAttributeMode, METH_VARARGS,
   "V.GetAttributeMode() -> int\nC++: virtual int GetAttributeMode()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"SetAttributeModeToDefault", PyvtkThreshold_SetAttributeModeToDefault, METH_VARARGS,
   "V.SetAttributeModeToDefault()\nC++: void SetAttributeModeToDefault()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"SetAttributeModeToUsePointData", PyvtkThreshold_SetAttributeModeToUsePointData, METH_VARARGS,
   "V.SetAttributeModeToUsePointData()\nC++: void SetAttributeModeToUsePointData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"SetAttributeModeToUseCellData", PyvtkThreshold_SetAttributeModeToUseCellData, METH_VARARGS,
   "V.SetAttributeModeToUseCellData()\nC++: void SetAttributeModeToUseCellData()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"GetAttributeModeAsString", PyvtkThreshold_GetAttributeModeAsString, METH_VARARGS,
   "V.GetAttributeModeAsString() -> string\nC++: const char *GetAttributeModeAsString()\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"SetComponentMode", PyvtkThreshold_SetComponentMode, METH_VARARGS,
   "V.SetComponentMode(int)\nC++: virtual void SetComponentMode(int _arg)\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"GetComponentModeMinValue", PyvtkThreshold_GetComponentModeMinValue, METH_VARARGS,
   "V.GetComponentModeMinValue() -> int\nC++: virtual int GetComponentModeMinValue()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"GetComponentModeMaxValue", PyvtkThreshold_GetComponentModeMaxValue, METH_VARARGS,
   "V.GetComponentModeMaxValue() -> int\nC++: virtual int GetComponentModeMaxValue()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"GetComponentMode", PyvtkThreshold_GetComponentMode, METH_VARARGS,
   "V.GetComponentMode() -> int\nC++: virtual int GetComponentMode()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"SetComponentModeToUseSelected", PyvtkThreshold_SetComponentModeToUseSelected, METH_VARARGS,
   "V.SetComponentModeToUseSelected()\nC++: void SetComponentModeToUseSelected()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"SetComponentModeToUseAll", PyvtkThreshold_SetComponentModeToUseAll, METH_VARARGS,
   "V.SetComponentModeToUseAll()\nC++: void SetComponentModeToUseAll()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"SetComponentModeToUseAny", PyvtkThreshold_SetComponentModeToUseAny, METH_VARARGS,
   "V.SetComponentModeToUseAny()\nC++: void SetComponentModeToUseAny()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"GetComponentModeAsString", PyvtkThreshold_GetComponentModeAsString, METH_VARARGS,
   "V.GetComponentModeAsString() -> string\nC++: const char *GetComponentModeAsString()\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"SetSelectedComponent", PyvtkThreshold_SetSelectedComponent, METH_VARARGS,
   "V.SetSelectedComponent(int)\nC++: virtual void SetSelectedComponent(int _arg)\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {"GetSelectedComponentMinValue", PyvtkThreshold_GetSelectedComponentMinValue, METH_VARARGS,
   "V.GetSelectedComponentMinValue() -> int\nC++: virtual int GetSelectedComponentMinValue()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {"GetSelectedComponentMaxValue", PyvtkThreshold_GetSelectedComponentMaxValue, METH_VARARGS,
   "V.GetSelectedComponentMaxValue() -> int\nC++: virtual int GetSelectedComponentMaxValue()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {"GetSelectedComponent", PyvtkThreshold_GetSelectedComponent, METH_VARARGS,
   "V.GetSelectedComponent() -> int\nC++: virtual int GetSelectedComponent()\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {"SetAllScalars", PyvtkThreshold_SetAllScalars, METH_VARARGS,
   "V.SetAllScalars(int)\nC++: virtual void SetAllScalars(vtkTypeBool _arg)\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {"GetAllScalars", PyvtkThreshold_GetAllScalars, METH_VARARGS,
   "V.GetAllScalars() -> int\nC++: virtual vtkTypeBool GetAllScalars()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {"AllScalarsOn", PyvtkThreshold_AllScalarsOn, METH_VARARGS,
   "V.AllScalarsOn()\nC++: virtual void AllScalarsOn()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {"AllScalarsOff", PyvtkThreshold_AllScalarsOff, METH_VARARGS,
   "V.AllScalarsOff()\nC++: virtual void AllScalarsOff()\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {"SetUseContinuousCellRange", PyvtkThreshold_SetUseContinuousCellRange, METH_VARARGS,
   "V.SetUseContinuousCellRange(int)\nC++: virtual void SetUseContinuousCellRange(vtkTypeBool _arg)\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {"GetUseContinuousCellRange", PyvtkThreshold_GetUseContinuousCellRange, METH_VARARGS,
   "V.GetUseContinuousCellRange() -> int\nC++: virtual vtkTypeBool GetUseContinuousCellRange()\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {"UseContinuousCellRangeOn", PyvtkThreshold_UseContinuousCellRangeOn, METH_VARARGS,
   "V.UseContinuousCellRangeOn()\nC++: virtual void UseContinuousCellRangeOn()\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {"UseContinuousCellRangeOff", PyvtkThreshold_UseContinuousCellRangeOff, METH_VARARGS,
   "V.UseContinuousCellRangeOff()\nC++: virtual void UseContinuousCellRangeOff()\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maxmimum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {"SetPointsDataTypeToDouble", PyvtkThreshold_SetPointsDataTypeToDouble, METH_VARARGS,
   "V.SetPointsDataTypeToDouble()\nC++: void SetPointsDataTypeToDouble()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\n* These methods are deprecated. Please use the\n  SetOutputPointsPrecision()\n* and GetOutputPointsPrecision() methods instead.\n"},
  {"SetPointsDataTypeToFloat", PyvtkThreshold_SetPointsDataTypeToFloat, METH_VARARGS,
   "V.SetPointsDataTypeToFloat()\nC++: void SetPointsDataTypeToFloat()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\n* These methods are deprecated. Please use the\n  SetOutputPointsPrecision()\n* and GetOutputPointsPrecision() methods instead.\n"},
  {"SetPointsDataType", PyvtkThreshold_SetPointsDataType, METH_VARARGS,
   "V.SetPointsDataType(int)\nC++: void SetPointsDataType(int type)\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\n* These methods are deprecated. Please use the\n  SetOutputPointsPrecision()\n* and GetOutputPointsPrecision() methods instead.\n"},
  {"GetPointsDataType", PyvtkThreshold_GetPointsDataType, METH_VARARGS,
   "V.GetPointsDataType() -> int\nC++: int GetPointsDataType()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\n* These methods are deprecated. Please use the\n  SetOutputPointsPrecision()\n* and GetOutputPointsPrecision() methods instead.\n"},
  {"SetOutputPointsPrecision", PyvtkThreshold_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int precision)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkThreshold_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkThreshold", // tp_name
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
  PyvtkThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThreshold_StaticNew()
{
  return vtkThreshold::New();
}

PyObject *PyvtkThreshold_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThreshold_Type, PyvtkThreshold_Methods,
    "vtkThreshold",
 &PyvtkThreshold_StaticNew);

  PyTypeObject *pytype = &PyvtkThreshold_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
        { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
        { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
        { "VTK_COMPONENT_MODE_USE_SELECTED", 0 },
        { "VTK_COMPONENT_MODE_USE_ALL", 1 },
        { "VTK_COMPONENT_MODE_USE_ANY", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

