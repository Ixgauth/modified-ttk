// python wrapper for vtkCellQuality
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
#include "vtkCellQuality.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellQuality(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellQuality_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCellQuality_Doc =
  "vtkCellQuality - Calculate functions of quality of the elements\n of a mesh\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellQuality computes one or more functions of (geometric) quality\n"
  "for each cell of a mesh.  The per-cell quality is added to the mesh's\n"
  "cell data, in an array named \"CellQuality.\" Cell types not supported\n"
  "by this filter or undefined quality of supported cell types will have\n"
  "an entry of -1.\n\n"
  "@warning\n"
  "Most quadrilateral quality functions are intended for planar\n"
  "quadrilaterals only.  The minimal angle is not, strictly speaking, a\n"
  "quality function, but it is provided because of its usage by many\n"
  "authors.\n\n";


static PyObject *
PyvtkCellQuality_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellQuality::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellQuality::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellQuality *tempr = vtkCellQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellQuality *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellQuality::NewInstance());

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
PyvtkCellQuality_SetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasure(temp0);
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_GetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMeasure() :
      op->vtkCellQuality::GetQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToArea();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectBeta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectBeta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectBeta();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectBeta();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectFrobenius();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectGamma();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectGamma();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToCollapseRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToCollapseRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToCollapseRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToCollapseRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToCondition();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToDiagonal();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToDiagonal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToDimension();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToDimension();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToDistortion();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToJacobian();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMaxAngle();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMaxAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMaxEdgeRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMaxEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMedAspectFrobenius();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMedAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToOddy();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToOddy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShape();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShearAndSize();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShearAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShear();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToSkew();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToStretch();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToTaper();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToTaper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToVolume();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToWarpage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToWarpage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToWarpage();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToWarpage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetUnsupportedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnsupportedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnsupportedGeometry(temp0);
    }
    else
    {
      op->vtkCellQuality::SetUnsupportedGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_GetUnsupportedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnsupportedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnsupportedGeometry() :
      op->vtkCellQuality::GetUnsupportedGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetUndefinedQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndefinedQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUndefinedQuality(temp0);
    }
    else
    {
      op->vtkCellQuality::SetUndefinedQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_GetUndefinedQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndefinedQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUndefinedQuality() :
      op->vtkCellQuality::GetUndefinedQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_TriangleStripArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangleStripArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = (ap.IsBound() ?
      op->TriangleStripArea(temp0) :
      op->vtkCellQuality::TriangleStripArea(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_PixelArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PixelArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = (ap.IsBound() ?
      op->PixelArea(temp0) :
      op->vtkCellQuality::PixelArea(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_PolygonArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = (ap.IsBound() ?
      op->PolygonArea(temp0) :
      op->vtkCellQuality::PolygonArea(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellQuality_Methods[] = {
  {"IsTypeOf", PyvtkCellQuality_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellQuality_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellQuality_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellQuality\nC++: static vtkCellQuality *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellQuality_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellQuality\nC++: vtkCellQuality *NewInstance()\n\n"},
  {"SetQualityMeasure", PyvtkCellQuality_SetQualityMeasure, METH_VARARGS,
   "V.SetQualityMeasure(int)\nC++: virtual void SetQualityMeasure(int _arg)\n\nSet/Get the particular estimator used to function the quality of\nall supported geometries. For qualities that are not defined for\ncertain geometries, later program logic ensures that\nCellQualityNone static function will be used so that a predefined\nvalue is returned for the request. There is no default value for\nthis call and valid values include all possible qualities\nsupported by this class.\n"},
  {"GetQualityMeasure", PyvtkCellQuality_GetQualityMeasure, METH_VARARGS,
   "V.GetQualityMeasure() -> int\nC++: virtual int GetQualityMeasure()\n\nSet/Get the particular estimator used to function the quality of\nall supported geometries. For qualities that are not defined for\ncertain geometries, later program logic ensures that\nCellQualityNone static function will be used so that a predefined\nvalue is returned for the request. There is no default value for\nthis call and valid values include all possible qualities\nsupported by this class.\n"},
  {"SetQualityMeasureToArea", PyvtkCellQuality_SetQualityMeasureToArea, METH_VARARGS,
   "V.SetQualityMeasureToArea()\nC++: void SetQualityMeasureToArea()\n\n"},
  {"SetQualityMeasureToAspectBeta", PyvtkCellQuality_SetQualityMeasureToAspectBeta, METH_VARARGS,
   "V.SetQualityMeasureToAspectBeta()\nC++: void SetQualityMeasureToAspectBeta()\n\n"},
  {"SetQualityMeasureToAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToAspectFrobenius, METH_VARARGS,
   "V.SetQualityMeasureToAspectFrobenius()\nC++: void SetQualityMeasureToAspectFrobenius()\n\n"},
  {"SetQualityMeasureToAspectGamma", PyvtkCellQuality_SetQualityMeasureToAspectGamma, METH_VARARGS,
   "V.SetQualityMeasureToAspectGamma()\nC++: void SetQualityMeasureToAspectGamma()\n\n"},
  {"SetQualityMeasureToAspectRatio", PyvtkCellQuality_SetQualityMeasureToAspectRatio, METH_VARARGS,
   "V.SetQualityMeasureToAspectRatio()\nC++: void SetQualityMeasureToAspectRatio()\n\n"},
  {"SetQualityMeasureToCollapseRatio", PyvtkCellQuality_SetQualityMeasureToCollapseRatio, METH_VARARGS,
   "V.SetQualityMeasureToCollapseRatio()\nC++: void SetQualityMeasureToCollapseRatio()\n\n"},
  {"SetQualityMeasureToCondition", PyvtkCellQuality_SetQualityMeasureToCondition, METH_VARARGS,
   "V.SetQualityMeasureToCondition()\nC++: void SetQualityMeasureToCondition()\n\n"},
  {"SetQualityMeasureToDiagonal", PyvtkCellQuality_SetQualityMeasureToDiagonal, METH_VARARGS,
   "V.SetQualityMeasureToDiagonal()\nC++: void SetQualityMeasureToDiagonal()\n\n"},
  {"SetQualityMeasureToDimension", PyvtkCellQuality_SetQualityMeasureToDimension, METH_VARARGS,
   "V.SetQualityMeasureToDimension()\nC++: void SetQualityMeasureToDimension()\n\n"},
  {"SetQualityMeasureToDistortion", PyvtkCellQuality_SetQualityMeasureToDistortion, METH_VARARGS,
   "V.SetQualityMeasureToDistortion()\nC++: void SetQualityMeasureToDistortion()\n\n"},
  {"SetQualityMeasureToJacobian", PyvtkCellQuality_SetQualityMeasureToJacobian, METH_VARARGS,
   "V.SetQualityMeasureToJacobian()\nC++: void SetQualityMeasureToJacobian()\n\n"},
  {"SetQualityMeasureToMaxAngle", PyvtkCellQuality_SetQualityMeasureToMaxAngle, METH_VARARGS,
   "V.SetQualityMeasureToMaxAngle()\nC++: void SetQualityMeasureToMaxAngle()\n\n"},
  {"SetQualityMeasureToMaxAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "V.SetQualityMeasureToMaxAspectFrobenius()\nC++: void SetQualityMeasureToMaxAspectFrobenius()\n\n"},
  {"SetQualityMeasureToMaxEdgeRatio", PyvtkCellQuality_SetQualityMeasureToMaxEdgeRatio, METH_VARARGS,
   "V.SetQualityMeasureToMaxEdgeRatio()\nC++: void SetQualityMeasureToMaxEdgeRatio()\n\n"},
  {"SetQualityMeasureToMedAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   "V.SetQualityMeasureToMedAspectFrobenius()\nC++: void SetQualityMeasureToMedAspectFrobenius()\n\n"},
  {"SetQualityMeasureToMinAngle", PyvtkCellQuality_SetQualityMeasureToMinAngle, METH_VARARGS,
   "V.SetQualityMeasureToMinAngle()\nC++: void SetQualityMeasureToMinAngle()\n\n"},
  {"SetQualityMeasureToOddy", PyvtkCellQuality_SetQualityMeasureToOddy, METH_VARARGS,
   "V.SetQualityMeasureToOddy()\nC++: void SetQualityMeasureToOddy()\n\n"},
  {"SetQualityMeasureToRadiusRatio", PyvtkCellQuality_SetQualityMeasureToRadiusRatio, METH_VARARGS,
   "V.SetQualityMeasureToRadiusRatio()\nC++: void SetQualityMeasureToRadiusRatio()\n\n"},
  {"SetQualityMeasureToRelativeSizeSquared", PyvtkCellQuality_SetQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "V.SetQualityMeasureToRelativeSizeSquared()\nC++: void SetQualityMeasureToRelativeSizeSquared()\n\n"},
  {"SetQualityMeasureToScaledJacobian", PyvtkCellQuality_SetQualityMeasureToScaledJacobian, METH_VARARGS,
   "V.SetQualityMeasureToScaledJacobian()\nC++: void SetQualityMeasureToScaledJacobian()\n\n"},
  {"SetQualityMeasureToShapeAndSize", PyvtkCellQuality_SetQualityMeasureToShapeAndSize, METH_VARARGS,
   "V.SetQualityMeasureToShapeAndSize()\nC++: void SetQualityMeasureToShapeAndSize()\n\n"},
  {"SetQualityMeasureToShape", PyvtkCellQuality_SetQualityMeasureToShape, METH_VARARGS,
   "V.SetQualityMeasureToShape()\nC++: void SetQualityMeasureToShape()\n\n"},
  {"SetQualityMeasureToShearAndSize", PyvtkCellQuality_SetQualityMeasureToShearAndSize, METH_VARARGS,
   "V.SetQualityMeasureToShearAndSize()\nC++: void SetQualityMeasureToShearAndSize()\n\n"},
  {"SetQualityMeasureToShear", PyvtkCellQuality_SetQualityMeasureToShear, METH_VARARGS,
   "V.SetQualityMeasureToShear()\nC++: void SetQualityMeasureToShear()\n\n"},
  {"SetQualityMeasureToSkew", PyvtkCellQuality_SetQualityMeasureToSkew, METH_VARARGS,
   "V.SetQualityMeasureToSkew()\nC++: void SetQualityMeasureToSkew()\n\n"},
  {"SetQualityMeasureToStretch", PyvtkCellQuality_SetQualityMeasureToStretch, METH_VARARGS,
   "V.SetQualityMeasureToStretch()\nC++: void SetQualityMeasureToStretch()\n\n"},
  {"SetQualityMeasureToTaper", PyvtkCellQuality_SetQualityMeasureToTaper, METH_VARARGS,
   "V.SetQualityMeasureToTaper()\nC++: void SetQualityMeasureToTaper()\n\n"},
  {"SetQualityMeasureToVolume", PyvtkCellQuality_SetQualityMeasureToVolume, METH_VARARGS,
   "V.SetQualityMeasureToVolume()\nC++: void SetQualityMeasureToVolume()\n\n"},
  {"SetQualityMeasureToWarpage", PyvtkCellQuality_SetQualityMeasureToWarpage, METH_VARARGS,
   "V.SetQualityMeasureToWarpage()\nC++: void SetQualityMeasureToWarpage()\n\n"},
  {"SetUnsupportedGeometry", PyvtkCellQuality_SetUnsupportedGeometry, METH_VARARGS,
   "V.SetUnsupportedGeometry(float)\nC++: virtual void SetUnsupportedGeometry(double _arg)\n\nSet/Get the return value for unsupported geometry. Unsupported\ngeometry are geometries that are not supported by this filter\ncurrently, future implementation might include support for them.\nThe default value for UnsupportedGeometry is -1.\n"},
  {"GetUnsupportedGeometry", PyvtkCellQuality_GetUnsupportedGeometry, METH_VARARGS,
   "V.GetUnsupportedGeometry() -> float\nC++: virtual double GetUnsupportedGeometry()\n\nSet/Get the return value for unsupported geometry. Unsupported\ngeometry are geometries that are not supported by this filter\ncurrently, future implementation might include support for them.\nThe default value for UnsupportedGeometry is -1.\n"},
  {"SetUndefinedQuality", PyvtkCellQuality_SetUndefinedQuality, METH_VARARGS,
   "V.SetUndefinedQuality(float)\nC++: virtual void SetUndefinedQuality(double _arg)\n\nSet/Get the return value for undefined quality. Undefined quality\nare qualities that could be addressed by this filter but is not\nwell defined for the particular geometry of cell in question,\ne.g. a volume query for a triangle. Undefined quality will always\nbe undefined. The default value for UndefinedQuality is -1.\n"},
  {"GetUndefinedQuality", PyvtkCellQuality_GetUndefinedQuality, METH_VARARGS,
   "V.GetUndefinedQuality() -> float\nC++: virtual double GetUndefinedQuality()\n\nSet/Get the return value for undefined quality. Undefined quality\nare qualities that could be addressed by this filter but is not\nwell defined for the particular geometry of cell in question,\ne.g. a volume query for a triangle. Undefined quality will always\nbe undefined. The default value for UndefinedQuality is -1.\n"},
  {"TriangleStripArea", PyvtkCellQuality_TriangleStripArea, METH_VARARGS,
   "V.TriangleStripArea(vtkCell) -> float\nC++: double TriangleStripArea(vtkCell *)\n\n"},
  {"PixelArea", PyvtkCellQuality_PixelArea, METH_VARARGS,
   "V.PixelArea(vtkCell) -> float\nC++: double PixelArea(vtkCell *)\n\n"},
  {"PolygonArea", PyvtkCellQuality_PolygonArea, METH_VARARGS,
   "V.PolygonArea(vtkCell) -> float\nC++: double PolygonArea(vtkCell *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellQuality_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersVerdictPython.vtkCellQuality", // tp_name
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
  PyvtkCellQuality_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellQuality_StaticNew()
{
  return vtkCellQuality::New();
}

PyObject *PyvtkCellQuality_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellQuality_Type, PyvtkCellQuality_Methods,
    "vtkCellQuality",
 &PyvtkCellQuality_StaticNew);

  PyTypeObject *pytype = &PyvtkCellQuality_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellQuality(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellQuality_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellQuality", o) != 0)
  {
    Py_DECREF(o);
  }

}

