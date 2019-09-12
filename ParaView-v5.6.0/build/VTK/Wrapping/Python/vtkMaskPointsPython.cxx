// python wrapper for vtkMaskPoints
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
#include "vtkMaskPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaskPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaskPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkMaskPoints_Doc =
  "vtkMaskPoints - selectively filter points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMaskPoints is a filter that passes through points and point\n"
  "attributes from input dataset. (Other geometry is not passed\n"
  "through.) It is possible to mask every nth point, and to specify an\n"
  "initial offset to begin masking from. It is possible to also generate\n"
  "different random selections (jittered strides, real random samples,\n"
  "and spatially stratified random samples) from the input data. The\n"
  "filter can also generate vertices (topological primitives) as well as\n"
  "points. This is useful because vertices are rendered while points are\n"
  "not.\n\n";


static PyObject *
PyvtkMaskPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMaskPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaskPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMaskPoints *tempr = vtkMaskPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMaskPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaskPoints::NewInstance());

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
PyvtkMaskPoints_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnRatio(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetOnRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkMaskPoints::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkMaskPoints::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkMaskPoints::GetOnRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPoints(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetMaximumNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMinValue() :
      op->vtkMaskPoints::GetMaximumNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMaxValue() :
      op->vtkMaskPoints::GetMaximumNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPoints() :
      op->vtkMaskPoints::GetMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkMaskPoints::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkMaskPoints::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkMaskPoints::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomMode(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetRandomMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkMaskPoints::GetRandomMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOn();
    }
    else
    {
      op->vtkMaskPoints::RandomModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOff();
    }
    else
    {
      op->vtkMaskPoints::RandomModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomModeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomModeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomModeType(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetRandomModeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeTypeMinValue() :
      op->vtkMaskPoints::GetRandomModeTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeTypeMaxValue() :
      op->vtkMaskPoints::GetRandomModeTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeType() :
      op->vtkMaskPoints::GetRandomModeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetProportionalMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProportionalMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProportionalMaximumNumberOfPoints(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetProportionalMaximumNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetProportionalMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProportionalMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProportionalMaximumNumberOfPoints() :
      op->vtkMaskPoints::GetProportionalMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalMaximumNumberOfPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalMaximumNumberOfPointsOn();
    }
    else
    {
      op->vtkMaskPoints::ProportionalMaximumNumberOfPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalMaximumNumberOfPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalMaximumNumberOfPointsOff();
    }
    else
    {
      op->vtkMaskPoints::ProportionalMaximumNumberOfPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertices(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetGenerateVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkMaskPoints::GetGenerateVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOn();
    }
    else
    {
      op->vtkMaskPoints::GenerateVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOff();
    }
    else
    {
      op->vtkMaskPoints::GenerateVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleVertexPerCell(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetSingleVertexPerCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSingleVertexPerCell() :
      op->vtkMaskPoints::GetSingleVertexPerCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleVertexPerCellOn();
    }
    else
    {
      op->vtkMaskPoints::SingleVertexPerCellOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleVertexPerCellOff();
    }
    else
    {
      op->vtkMaskPoints::SingleVertexPerCellOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

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
      op->vtkMaskPoints::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkMaskPoints::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskPoints_Methods[] = {
  {"IsTypeOf", PyvtkMaskPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMaskPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMaskPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMaskPoints\nC++: static vtkMaskPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMaskPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMaskPoints\nC++: vtkMaskPoints *NewInstance()\n\n"},
  {"SetOnRatio", PyvtkMaskPoints_SetOnRatio, METH_VARARGS,
   "V.SetOnRatio(int)\nC++: virtual void SetOnRatio(int _arg)\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {"GetOnRatioMinValue", PyvtkMaskPoints_GetOnRatioMinValue, METH_VARARGS,
   "V.GetOnRatioMinValue() -> int\nC++: virtual int GetOnRatioMinValue()\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {"GetOnRatioMaxValue", PyvtkMaskPoints_GetOnRatioMaxValue, METH_VARARGS,
   "V.GetOnRatioMaxValue() -> int\nC++: virtual int GetOnRatioMaxValue()\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {"GetOnRatio", PyvtkMaskPoints_GetOnRatio, METH_VARARGS,
   "V.GetOnRatio() -> int\nC++: virtual int GetOnRatio()\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {"SetMaximumNumberOfPoints", PyvtkMaskPoints_SetMaximumNumberOfPoints, METH_VARARGS,
   "V.SetMaximumNumberOfPoints(int)\nC++: virtual void SetMaximumNumberOfPoints(vtkIdType _arg)\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {"GetMaximumNumberOfPointsMinValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfPointsMinValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfPointsMinValue()\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {"GetMaximumNumberOfPointsMaxValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfPointsMaxValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfPointsMaxValue()\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {"GetMaximumNumberOfPoints", PyvtkMaskPoints_GetMaximumNumberOfPoints, METH_VARARGS,
   "V.GetMaximumNumberOfPoints() -> int\nC++: virtual vtkIdType GetMaximumNumberOfPoints()\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {"SetOffset", PyvtkMaskPoints_SetOffset, METH_VARARGS,
   "V.SetOffset(int)\nC++: virtual void SetOffset(vtkIdType _arg)\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {"GetOffsetMinValue", PyvtkMaskPoints_GetOffsetMinValue, METH_VARARGS,
   "V.GetOffsetMinValue() -> int\nC++: virtual vtkIdType GetOffsetMinValue()\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {"GetOffsetMaxValue", PyvtkMaskPoints_GetOffsetMaxValue, METH_VARARGS,
   "V.GetOffsetMaxValue() -> int\nC++: virtual vtkIdType GetOffsetMaxValue()\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {"GetOffset", PyvtkMaskPoints_GetOffset, METH_VARARGS,
   "V.GetOffset() -> int\nC++: virtual vtkIdType GetOffset()\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {"SetRandomMode", PyvtkMaskPoints_SetRandomMode, METH_VARARGS,
   "V.SetRandomMode(int)\nC++: virtual void SetRandomMode(vtkTypeBool _arg)\n\nSpecial flag causes randomization of point selection.\n"},
  {"GetRandomMode", PyvtkMaskPoints_GetRandomMode, METH_VARARGS,
   "V.GetRandomMode() -> int\nC++: virtual vtkTypeBool GetRandomMode()\n\nSpecial flag causes randomization of point selection.\n"},
  {"RandomModeOn", PyvtkMaskPoints_RandomModeOn, METH_VARARGS,
   "V.RandomModeOn()\nC++: virtual void RandomModeOn()\n\nSpecial flag causes randomization of point selection.\n"},
  {"RandomModeOff", PyvtkMaskPoints_RandomModeOff, METH_VARARGS,
   "V.RandomModeOff()\nC++: virtual void RandomModeOff()\n\nSpecial flag causes randomization of point selection.\n"},
  {"SetRandomModeType", PyvtkMaskPoints_SetRandomModeType, METH_VARARGS,
   "V.SetRandomModeType(int)\nC++: virtual void SetRandomModeType(int _arg)\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default); fairly certain that this is not a statistically random\nsample because the output depends on the order of the input and\nthe input points do not have an equal chance to appear in the\noutput (plus Vitter's incremental random algorithms are more\ncomplex than this, while not a proof it is good indication this\nisn't a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's incremental algorithm D without A described\nin Vitter \"Faster Mthods for Random Sampling\", Communications of\nthe ACM Volume 27, Issue 7, 1984 (OnRatio and Offset are ignored)\nO(sample size) 2 - spatially stratified random sample: create a\nspatially stratified random sample using the first method\ndescribed in Woodring et al. \"In-situ Sampling of a Large-Scale\nParticle Simulation for Interactive Visualization and Analysis\",\nComputer Graphics Forum, 2011 (EuroVis 2011). (OnRatio and Offset\nare ignored) O(N log N)\n"},
  {"GetRandomModeTypeMinValue", PyvtkMaskPoints_GetRandomModeTypeMinValue, METH_VARARGS,
   "V.GetRandomModeTypeMinValue() -> int\nC++: virtual int GetRandomModeTypeMinValue()\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default); fairly certain that this is not a statistically random\nsample because the output depends on the order of the input and\nthe input points do not have an equal chance to appear in the\noutput (plus Vitter's incremental random algorithms are more\ncomplex than this, while not a proof it is good indication this\nisn't a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's incremental algorithm D without A described\nin Vitter \"Faster Mthods for Random Sampling\", Communications of\nthe ACM Volume 27, Issue 7, 1984 (OnRatio and Offset are ignored)\nO(sample size) 2 - spatially stratified random sample: create a\nspatially stratified random sample using the first method\ndescribed in Woodring et al. \"In-situ Sampling of a Large-Scale\nParticle Simulation for Interactive Visualization and Analysis\",\nComputer Graphics Forum, 2011 (EuroVis 2011). (OnRatio and Offset\nare ignored) O(N log N)\n"},
  {"GetRandomModeTypeMaxValue", PyvtkMaskPoints_GetRandomModeTypeMaxValue, METH_VARARGS,
   "V.GetRandomModeTypeMaxValue() -> int\nC++: virtual int GetRandomModeTypeMaxValue()\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default); fairly certain that this is not a statistically random\nsample because the output depends on the order of the input and\nthe input points do not have an equal chance to appear in the\noutput (plus Vitter's incremental random algorithms are more\ncomplex than this, while not a proof it is good indication this\nisn't a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's incremental algorithm D without A described\nin Vitter \"Faster Mthods for Random Sampling\", Communications of\nthe ACM Volume 27, Issue 7, 1984 (OnRatio and Offset are ignored)\nO(sample size) 2 - spatially stratified random sample: create a\nspatially stratified random sample using the first method\ndescribed in Woodring et al. \"In-situ Sampling of a Large-Scale\nParticle Simulation for Interactive Visualization and Analysis\",\nComputer Graphics Forum, 2011 (EuroVis 2011). (OnRatio and Offset\nare ignored) O(N log N)\n"},
  {"GetRandomModeType", PyvtkMaskPoints_GetRandomModeType, METH_VARARGS,
   "V.GetRandomModeType() -> int\nC++: virtual int GetRandomModeType()\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default); fairly certain that this is not a statistically random\nsample because the output depends on the order of the input and\nthe input points do not have an equal chance to appear in the\noutput (plus Vitter's incremental random algorithms are more\ncomplex than this, while not a proof it is good indication this\nisn't a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's incremental algorithm D without A described\nin Vitter \"Faster Mthods for Random Sampling\", Communications of\nthe ACM Volume 27, Issue 7, 1984 (OnRatio and Offset are ignored)\nO(sample size) 2 - spatially stratified random sample: create a\nspatially stratified random sample using the first method\ndescribed in Woodring et al. \"In-situ Sampling of a Large-Scale\nParticle Simulation for Interactive Visualization and Analysis\",\nComputer Graphics Forum, 2011 (EuroVis 2011). (OnRatio and Offset\nare ignored) O(N log N)\n"},
  {"SetProportionalMaximumNumberOfPoints", PyvtkMaskPoints_SetProportionalMaximumNumberOfPoints, METH_VARARGS,
   "V.SetProportionalMaximumNumberOfPoints(int)\nC++: virtual void SetProportionalMaximumNumberOfPoints(\n    vtkTypeBool _arg)\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {"GetProportionalMaximumNumberOfPoints", PyvtkMaskPoints_GetProportionalMaximumNumberOfPoints, METH_VARARGS,
   "V.GetProportionalMaximumNumberOfPoints() -> int\nC++: virtual vtkTypeBool GetProportionalMaximumNumberOfPoints()\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {"ProportionalMaximumNumberOfPointsOn", PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOn, METH_VARARGS,
   "V.ProportionalMaximumNumberOfPointsOn()\nC++: virtual void ProportionalMaximumNumberOfPointsOn()\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {"ProportionalMaximumNumberOfPointsOff", PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOff, METH_VARARGS,
   "V.ProportionalMaximumNumberOfPointsOff()\nC++: virtual void ProportionalMaximumNumberOfPointsOff()\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {"SetGenerateVertices", PyvtkMaskPoints_SetGenerateVertices, METH_VARARGS,
   "V.SetGenerateVertices(int)\nC++: virtual void SetGenerateVertices(vtkTypeBool _arg)\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {"GetGenerateVertices", PyvtkMaskPoints_GetGenerateVertices, METH_VARARGS,
   "V.GetGenerateVertices() -> int\nC++: virtual vtkTypeBool GetGenerateVertices()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {"GenerateVerticesOn", PyvtkMaskPoints_GenerateVerticesOn, METH_VARARGS,
   "V.GenerateVerticesOn()\nC++: virtual void GenerateVerticesOn()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {"GenerateVerticesOff", PyvtkMaskPoints_GenerateVerticesOff, METH_VARARGS,
   "V.GenerateVerticesOff()\nC++: virtual void GenerateVerticesOff()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {"SetSingleVertexPerCell", PyvtkMaskPoints_SetSingleVertexPerCell, METH_VARARGS,
   "V.SetSingleVertexPerCell(int)\nC++: virtual void SetSingleVertexPerCell(vtkTypeBool _arg)\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {"GetSingleVertexPerCell", PyvtkMaskPoints_GetSingleVertexPerCell, METH_VARARGS,
   "V.GetSingleVertexPerCell() -> int\nC++: virtual vtkTypeBool GetSingleVertexPerCell()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {"SingleVertexPerCellOn", PyvtkMaskPoints_SingleVertexPerCellOn, METH_VARARGS,
   "V.SingleVertexPerCellOn()\nC++: virtual void SingleVertexPerCellOn()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {"SingleVertexPerCellOff", PyvtkMaskPoints_SingleVertexPerCellOff, METH_VARARGS,
   "V.SingleVertexPerCellOff()\nC++: virtual void SingleVertexPerCellOff()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {"SetOutputPointsPrecision", PyvtkMaskPoints_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkMaskPoints_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMaskPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMaskPoints", // tp_name
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
  PyvtkMaskPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMaskPoints_StaticNew()
{
  return vtkMaskPoints::New();
}

PyObject *PyvtkMaskPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMaskPoints_Type, PyvtkMaskPoints_Methods,
    "vtkMaskPoints",
 &PyvtkMaskPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkMaskPoints_Type;

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

void PyVTKAddFile_vtkMaskPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaskPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMaskPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

