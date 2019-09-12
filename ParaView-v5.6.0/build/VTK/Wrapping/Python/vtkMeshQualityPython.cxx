// python wrapper for vtkMeshQuality
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
#include "vtkMeshQuality.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMeshQuality(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMeshQuality_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMeshQuality_Doc =
  "vtkMeshQuality - Calculate functions of quality of the elements\n of a mesh\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMeshQuality computes one or more functions of (geometric) quality\n"
  "for each 2-D and 3-D cell (triangle, quadrilateral, tetrahedron, or\n"
  "hexahedron) of a mesh. These functions of quality are then averaged\n"
  "over the entire mesh. The minimum, average, maximum, and unbiased\n"
  "variance of quality for each type of cell is stored in the output\n"
  "mesh's FieldData. The FieldData arrays are named \"Mesh Triangle\n"
  "Quality,\" \"Mesh Quadrilateral Quality,\" \"Mesh Tetrahedron Quality,\"\n"
  "and \"Mesh Hexahedron Quality.\" Each array has a single tuple with 5\n"
  "components. The first 4 components are the quality statistics\n"
  "mentioned above; the final value is the number of cells of the given\n"
  "type. This final component makes aggregation of statistics for\n"
  "distributed mesh data possible.\n\n"
  "By default, the per-cell quality is added to the mesh's cell data, in\n"
  "an array named \"Quality.\" Cell types not supported by this filter\n"
  "will have an entry of 0. Use SaveCellQualityOff() to store only the\n"
  "final statistics.\n\n"
  "This version of the filter written by Philippe Pebay and David\n"
  "Thompson overtakes an older version written by Leila Baghdadi, Hanif\n"
  "Ladak, and David Steinman at the Imaging Research Labs, Robarts\n"
  "Research Institute. That version only supported tetrahedral radius\n"
  "ratio. See the CompatibilityModeOn() member for information on how to\n"
  "make this filter behave like the previous implementation. For more\n"
  "information on the triangle quality functions of this class, cf.\n"
  "Pebay & Baker 2003, Analysis of triangle quality measures, Math Comp\n"
  "72:244. For more information on the quadrangle quality functions of\n"
  "this class, cf. Pebay 2004, Planar Quadrangle Quality Measures, Eng\n"
  "Comp 20:2.\n\n"
  "@warning\n"
  "While more general than before, this class does not address many cell\n"
  "types, including wedges and pyramids in 3D and triangle strips and\n"
  "fans in 2D (among others). Most quadrilateral quality functions are\n"
  "intended for planar quadrilaterals only. The minimal angle is not,\n"
  "strictly speaking, a quality function, but it is provided because of\n"
  "its usage by many authors.\n\n";


static PyObject *
PyvtkMeshQuality_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMeshQuality::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMeshQuality::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMeshQuality *tempr = vtkMeshQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMeshQuality *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMeshQuality::NewInstance());

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
PyvtkMeshQuality_SetSaveCellQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveCellQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveCellQuality(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetSaveCellQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetSaveCellQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveCellQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSaveCellQuality() :
      op->vtkMeshQuality::GetSaveCellQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SaveCellQualityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCellQualityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveCellQualityOn();
    }
    else
    {
      op->vtkMeshQuality::SaveCellQualityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SaveCellQualityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCellQualityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveCellQualityOff();
    }
    else
    {
      op->vtkMeshQuality::SaveCellQualityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetTriangleQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangleQualityMeasure() :
      op->vtkMeshQuality::GetTriangleQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToArea();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToMaxAngle();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToMaxAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetQuadQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuadQualityMeasure() :
      op->vtkMeshQuality::GetQuadQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMedAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMedAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatios(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxEdgeRatios");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMaxEdgeRatios();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxEdgeRatios();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToSkew();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToTaper();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToTaper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToWarpage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToWarpage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToWarpage();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToWarpage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToArea();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToStretch();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMaxAngle();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToOddy();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToOddy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShear();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShearAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShearAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetTetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTetQualityMeasure() :
      op->vtkMeshQuality::GetTetQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToCollapseRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToCollapseRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToCollapseRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToCollapseRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectBeta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectBeta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectBeta();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectBeta();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectGamma();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectGamma();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToVolume();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetHexQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHexQualityMeasure() :
      op->vtkMeshQuality::GetHexQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToMedAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToMedAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatios(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMaxEdgeRatios");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToMaxEdgeRatios();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToMaxEdgeRatios();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToSkew();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToTaper();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToTaper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToVolume();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToStretch();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToDiagonal();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToDiagonal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToDimension();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToDimension();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToOddy();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToOddy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShear();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShearAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShearAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleArea(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleArea");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleArea(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleAspectRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleAspectRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleAspectRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleRadiusRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleRadiusRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleMinAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleMinAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleMinAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleMaxAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleMaxAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleMaxAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleShapeAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadAspectRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadAspectRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadAspectRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadRadiusRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadRadiusRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMedAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMedAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMedAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMinAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMinAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMinAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxEdgeRatios(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxEdgeRatios");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMaxEdgeRatios(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadSkew(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadTaper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadTaper");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadTaper(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadWarpage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadWarpage");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadWarpage(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadArea(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadArea");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadArea(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadStretch(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadStretch");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadStretch(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMaxAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadOddy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadOddy");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadOddy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShear");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShapeAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShearAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShearAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShearAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetRadiusRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetRadiusRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetMinAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetMinAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetMinAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetCollapseRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetCollapseRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetCollapseRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectBeta(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectBeta");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectBeta(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectGamma(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectGamma");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectGamma(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetVolume(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetVolume");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetShapeandSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetShapeandSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetShapeandSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMedAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMedAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexMedAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMaxAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMaxAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMaxEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMaxEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexMaxEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexSkew(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexTaper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexTaper");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexTaper(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexVolume(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexVolume");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexStretch(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexStretch");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexStretch(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDiagonal(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDiagonal");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexDiagonal(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDimension(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDimension");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexOddy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexOddy");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexOddy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShear");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShapeAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShearAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShearAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShearAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
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
      op->vtkMeshQuality::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRatio() :
      op->vtkMeshQuality::GetRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_RatioOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RatioOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RatioOn();
    }
    else
    {
      op->vtkMeshQuality::RatioOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_RatioOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RatioOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RatioOff();
    }
    else
    {
      op->vtkMeshQuality::RatioOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolume(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkMeshQuality::GetVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_VolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumeOn();
    }
    else
    {
      op->vtkMeshQuality::VolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_VolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumeOff();
    }
    else
    {
      op->vtkMeshQuality::VolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetCompatibilityMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompatibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompatibilityMode(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetCompatibilityMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetCompatibilityMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompatibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompatibilityMode() :
      op->vtkMeshQuality::GetCompatibilityMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_CompatibilityModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompatibilityModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompatibilityModeOn();
    }
    else
    {
      op->vtkMeshQuality::CompatibilityModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_CompatibilityModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompatibilityModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompatibilityModeOff();
    }
    else
    {
      op->vtkMeshQuality::CompatibilityModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_Methods[] = {
  {"IsTypeOf", PyvtkMeshQuality_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMeshQuality_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMeshQuality_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMeshQuality\nC++: static vtkMeshQuality *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMeshQuality_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMeshQuality\nC++: vtkMeshQuality *NewInstance()\n\n"},
  {"SetSaveCellQuality", PyvtkMeshQuality_SetSaveCellQuality, METH_VARARGS,
   "V.SetSaveCellQuality(int)\nC++: virtual void SetSaveCellQuality(vtkTypeBool _arg)\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {"GetSaveCellQuality", PyvtkMeshQuality_GetSaveCellQuality, METH_VARARGS,
   "V.GetSaveCellQuality() -> int\nC++: virtual vtkTypeBool GetSaveCellQuality()\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {"SaveCellQualityOn", PyvtkMeshQuality_SaveCellQualityOn, METH_VARARGS,
   "V.SaveCellQualityOn()\nC++: virtual void SaveCellQualityOn()\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {"SaveCellQualityOff", PyvtkMeshQuality_SaveCellQualityOff, METH_VARARGS,
   "V.SaveCellQualityOff()\nC++: virtual void SaveCellQualityOff()\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {"SetTriangleQualityMeasure", PyvtkMeshQuality_SetTriangleQualityMeasure, METH_VARARGS,
   "V.SetTriangleQualityMeasure(int)\nC++: virtual void SetTriangleQualityMeasure(int _arg)\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"GetTriangleQualityMeasure", PyvtkMeshQuality_GetTriangleQualityMeasure, METH_VARARGS,
   "V.GetTriangleQualityMeasure() -> int\nC++: virtual int GetTriangleQualityMeasure()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToArea", PyvtkMeshQuality_SetTriangleQualityMeasureToArea, METH_VARARGS,
   "V.SetTriangleQualityMeasureToArea()\nC++: void SetTriangleQualityMeasureToArea()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio, METH_VARARGS,
   "V.SetTriangleQualityMeasureToEdgeRatio()\nC++: void SetTriangleQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToAspectRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToAspectRatio, METH_VARARGS,
   "V.SetTriangleQualityMeasureToAspectRatio()\nC++: void SetTriangleQualityMeasureToAspectRatio()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio, METH_VARARGS,
   "V.SetTriangleQualityMeasureToRadiusRatio()\nC++: void SetTriangleQualityMeasureToRadiusRatio()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToAspectFrobenius", PyvtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius, METH_VARARGS,
   "V.SetTriangleQualityMeasureToAspectFrobenius()\nC++: void SetTriangleQualityMeasureToAspectFrobenius()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToMinAngle", PyvtkMeshQuality_SetTriangleQualityMeasureToMinAngle, METH_VARARGS,
   "V.SetTriangleQualityMeasureToMinAngle()\nC++: void SetTriangleQualityMeasureToMinAngle()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToMaxAngle", PyvtkMeshQuality_SetTriangleQualityMeasureToMaxAngle, METH_VARARGS,
   "V.SetTriangleQualityMeasureToMaxAngle()\nC++: void SetTriangleQualityMeasureToMaxAngle()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToCondition", PyvtkMeshQuality_SetTriangleQualityMeasureToCondition, METH_VARARGS,
   "V.SetTriangleQualityMeasureToCondition()\nC++: void SetTriangleQualityMeasureToCondition()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian, METH_VARARGS,
   "V.SetTriangleQualityMeasureToScaledJacobian()\nC++: void SetTriangleQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "V.SetTriangleQualityMeasureToRelativeSizeSquared()\nC++: void SetTriangleQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToShape", PyvtkMeshQuality_SetTriangleQualityMeasureToShape, METH_VARARGS,
   "V.SetTriangleQualityMeasureToShape()\nC++: void SetTriangleQualityMeasureToShape()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize, METH_VARARGS,
   "V.SetTriangleQualityMeasureToShapeAndSize()\nC++: void SetTriangleQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetTriangleQualityMeasureToDistortion", PyvtkMeshQuality_SetTriangleQualityMeasureToDistortion, METH_VARARGS,
   "V.SetTriangleQualityMeasureToDistortion()\nC++: void SetTriangleQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {"SetQuadQualityMeasure", PyvtkMeshQuality_SetQuadQualityMeasure, METH_VARARGS,
   "V.SetQuadQualityMeasure(int)\nC++: virtual void SetQuadQualityMeasure(int _arg)\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"GetQuadQualityMeasure", PyvtkMeshQuality_GetQuadQualityMeasure, METH_VARARGS,
   "V.GetQuadQualityMeasure() -> int\nC++: virtual int GetQuadQualityMeasure()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetQuadQualityMeasureToEdgeRatio, METH_VARARGS,
   "V.SetQuadQualityMeasureToEdgeRatio()\nC++: void SetQuadQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToAspectRatio", PyvtkMeshQuality_SetQuadQualityMeasureToAspectRatio, METH_VARARGS,
   "V.SetQuadQualityMeasureToAspectRatio()\nC++: void SetQuadQualityMeasureToAspectRatio()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetQuadQualityMeasureToRadiusRatio, METH_VARARGS,
   "V.SetQuadQualityMeasureToRadiusRatio()\nC++: void SetQuadQualityMeasureToRadiusRatio()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToMedAspectFrobenius", PyvtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   "V.SetQuadQualityMeasureToMedAspectFrobenius()\nC++: void SetQuadQualityMeasureToMedAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "V.SetQuadQualityMeasureToMaxAspectFrobenius()\nC++: void SetQuadQualityMeasureToMaxAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToMaxEdgeRatios", PyvtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatios, METH_VARARGS,
   "V.SetQuadQualityMeasureToMaxEdgeRatios()\nC++: void SetQuadQualityMeasureToMaxEdgeRatios()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToSkew", PyvtkMeshQuality_SetQuadQualityMeasureToSkew, METH_VARARGS,
   "V.SetQuadQualityMeasureToSkew()\nC++: void SetQuadQualityMeasureToSkew()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToTaper", PyvtkMeshQuality_SetQuadQualityMeasureToTaper, METH_VARARGS,
   "V.SetQuadQualityMeasureToTaper()\nC++: void SetQuadQualityMeasureToTaper()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToWarpage", PyvtkMeshQuality_SetQuadQualityMeasureToWarpage, METH_VARARGS,
   "V.SetQuadQualityMeasureToWarpage()\nC++: void SetQuadQualityMeasureToWarpage()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToArea", PyvtkMeshQuality_SetQuadQualityMeasureToArea, METH_VARARGS,
   "V.SetQuadQualityMeasureToArea()\nC++: void SetQuadQualityMeasureToArea()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToStretch", PyvtkMeshQuality_SetQuadQualityMeasureToStretch, METH_VARARGS,
   "V.SetQuadQualityMeasureToStretch()\nC++: void SetQuadQualityMeasureToStretch()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToMinAngle", PyvtkMeshQuality_SetQuadQualityMeasureToMinAngle, METH_VARARGS,
   "V.SetQuadQualityMeasureToMinAngle()\nC++: void SetQuadQualityMeasureToMinAngle()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToMaxAngle", PyvtkMeshQuality_SetQuadQualityMeasureToMaxAngle, METH_VARARGS,
   "V.SetQuadQualityMeasureToMaxAngle()\nC++: void SetQuadQualityMeasureToMaxAngle()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToOddy", PyvtkMeshQuality_SetQuadQualityMeasureToOddy, METH_VARARGS,
   "V.SetQuadQualityMeasureToOddy()\nC++: void SetQuadQualityMeasureToOddy()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToCondition", PyvtkMeshQuality_SetQuadQualityMeasureToCondition, METH_VARARGS,
   "V.SetQuadQualityMeasureToCondition()\nC++: void SetQuadQualityMeasureToCondition()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToJacobian", PyvtkMeshQuality_SetQuadQualityMeasureToJacobian, METH_VARARGS,
   "V.SetQuadQualityMeasureToJacobian()\nC++: void SetQuadQualityMeasureToJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetQuadQualityMeasureToScaledJacobian, METH_VARARGS,
   "V.SetQuadQualityMeasureToScaledJacobian()\nC++: void SetQuadQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToShear", PyvtkMeshQuality_SetQuadQualityMeasureToShear, METH_VARARGS,
   "V.SetQuadQualityMeasureToShear()\nC++: void SetQuadQualityMeasureToShear()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToShape", PyvtkMeshQuality_SetQuadQualityMeasureToShape, METH_VARARGS,
   "V.SetQuadQualityMeasureToShape()\nC++: void SetQuadQualityMeasureToShape()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "V.SetQuadQualityMeasureToRelativeSizeSquared()\nC++: void SetQuadQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetQuadQualityMeasureToShapeAndSize, METH_VARARGS,
   "V.SetQuadQualityMeasureToShapeAndSize()\nC++: void SetQuadQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToShearAndSize", PyvtkMeshQuality_SetQuadQualityMeasureToShearAndSize, METH_VARARGS,
   "V.SetQuadQualityMeasureToShearAndSize()\nC++: void SetQuadQualityMeasureToShearAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetQuadQualityMeasureToDistortion", PyvtkMeshQuality_SetQuadQualityMeasureToDistortion, METH_VARARGS,
   "V.SetQuadQualityMeasureToDistortion()\nC++: void SetQuadQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\n* Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\n  intended for planar\n* quadrilaterals only; use at your own risk if you really want to\nassess non-planar\n* quadrilateral quality with those.\n"},
  {"SetTetQualityMeasure", PyvtkMeshQuality_SetTetQualityMeasure, METH_VARARGS,
   "V.SetTetQualityMeasure(int)\nC++: virtual void SetTetQualityMeasure(int _arg)\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"GetTetQualityMeasure", PyvtkMeshQuality_GetTetQualityMeasure, METH_VARARGS,
   "V.GetTetQualityMeasure() -> int\nC++: virtual int GetTetQualityMeasure()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetTetQualityMeasureToEdgeRatio, METH_VARARGS,
   "V.SetTetQualityMeasureToEdgeRatio()\nC++: void SetTetQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToAspectRatio", PyvtkMeshQuality_SetTetQualityMeasureToAspectRatio, METH_VARARGS,
   "V.SetTetQualityMeasureToAspectRatio()\nC++: void SetTetQualityMeasureToAspectRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetTetQualityMeasureToRadiusRatio, METH_VARARGS,
   "V.SetTetQualityMeasureToRadiusRatio()\nC++: void SetTetQualityMeasureToRadiusRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToAspectFrobenius", PyvtkMeshQuality_SetTetQualityMeasureToAspectFrobenius, METH_VARARGS,
   "V.SetTetQualityMeasureToAspectFrobenius()\nC++: void SetTetQualityMeasureToAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToMinAngle", PyvtkMeshQuality_SetTetQualityMeasureToMinAngle, METH_VARARGS,
   "V.SetTetQualityMeasureToMinAngle()\nC++: void SetTetQualityMeasureToMinAngle()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToCollapseRatio", PyvtkMeshQuality_SetTetQualityMeasureToCollapseRatio, METH_VARARGS,
   "V.SetTetQualityMeasureToCollapseRatio()\nC++: void SetTetQualityMeasureToCollapseRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToAspectBeta", PyvtkMeshQuality_SetTetQualityMeasureToAspectBeta, METH_VARARGS,
   "V.SetTetQualityMeasureToAspectBeta()\nC++: void SetTetQualityMeasureToAspectBeta()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToAspectGamma", PyvtkMeshQuality_SetTetQualityMeasureToAspectGamma, METH_VARARGS,
   "V.SetTetQualityMeasureToAspectGamma()\nC++: void SetTetQualityMeasureToAspectGamma()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToVolume", PyvtkMeshQuality_SetTetQualityMeasureToVolume, METH_VARARGS,
   "V.SetTetQualityMeasureToVolume()\nC++: void SetTetQualityMeasureToVolume()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToCondition", PyvtkMeshQuality_SetTetQualityMeasureToCondition, METH_VARARGS,
   "V.SetTetQualityMeasureToCondition()\nC++: void SetTetQualityMeasureToCondition()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToJacobian", PyvtkMeshQuality_SetTetQualityMeasureToJacobian, METH_VARARGS,
   "V.SetTetQualityMeasureToJacobian()\nC++: void SetTetQualityMeasureToJacobian()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetTetQualityMeasureToScaledJacobian, METH_VARARGS,
   "V.SetTetQualityMeasureToScaledJacobian()\nC++: void SetTetQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToShape", PyvtkMeshQuality_SetTetQualityMeasureToShape, METH_VARARGS,
   "V.SetTetQualityMeasureToShape()\nC++: void SetTetQualityMeasureToShape()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "V.SetTetQualityMeasureToRelativeSizeSquared()\nC++: void SetTetQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetTetQualityMeasureToShapeAndSize, METH_VARARGS,
   "V.SetTetQualityMeasureToShapeAndSize()\nC++: void SetTetQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetTetQualityMeasureToDistortion", PyvtkMeshQuality_SetTetQualityMeasureToDistortion, METH_VARARGS,
   "V.SetTetQualityMeasureToDistortion()\nC++: void SetTetQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasure", PyvtkMeshQuality_SetHexQualityMeasure, METH_VARARGS,
   "V.SetHexQualityMeasure(int)\nC++: virtual void SetHexQualityMeasure(int _arg)\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"GetHexQualityMeasure", PyvtkMeshQuality_GetHexQualityMeasure, METH_VARARGS,
   "V.GetHexQualityMeasure() -> int\nC++: virtual int GetHexQualityMeasure()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetHexQualityMeasureToEdgeRatio, METH_VARARGS,
   "V.SetHexQualityMeasureToEdgeRatio()\nC++: void SetHexQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToMedAspectFrobenius", PyvtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   "V.SetHexQualityMeasureToMedAspectFrobenius()\nC++: void SetHexQualityMeasureToMedAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "V.SetHexQualityMeasureToMaxAspectFrobenius()\nC++: void SetHexQualityMeasureToMaxAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToMaxEdgeRatios", PyvtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatios, METH_VARARGS,
   "V.SetHexQualityMeasureToMaxEdgeRatios()\nC++: void SetHexQualityMeasureToMaxEdgeRatios()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToSkew", PyvtkMeshQuality_SetHexQualityMeasureToSkew, METH_VARARGS,
   "V.SetHexQualityMeasureToSkew()\nC++: void SetHexQualityMeasureToSkew()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToTaper", PyvtkMeshQuality_SetHexQualityMeasureToTaper, METH_VARARGS,
   "V.SetHexQualityMeasureToTaper()\nC++: void SetHexQualityMeasureToTaper()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToVolume", PyvtkMeshQuality_SetHexQualityMeasureToVolume, METH_VARARGS,
   "V.SetHexQualityMeasureToVolume()\nC++: void SetHexQualityMeasureToVolume()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToStretch", PyvtkMeshQuality_SetHexQualityMeasureToStretch, METH_VARARGS,
   "V.SetHexQualityMeasureToStretch()\nC++: void SetHexQualityMeasureToStretch()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToDiagonal", PyvtkMeshQuality_SetHexQualityMeasureToDiagonal, METH_VARARGS,
   "V.SetHexQualityMeasureToDiagonal()\nC++: void SetHexQualityMeasureToDiagonal()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToDimension", PyvtkMeshQuality_SetHexQualityMeasureToDimension, METH_VARARGS,
   "V.SetHexQualityMeasureToDimension()\nC++: void SetHexQualityMeasureToDimension()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToOddy", PyvtkMeshQuality_SetHexQualityMeasureToOddy, METH_VARARGS,
   "V.SetHexQualityMeasureToOddy()\nC++: void SetHexQualityMeasureToOddy()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToCondition", PyvtkMeshQuality_SetHexQualityMeasureToCondition, METH_VARARGS,
   "V.SetHexQualityMeasureToCondition()\nC++: void SetHexQualityMeasureToCondition()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToJacobian", PyvtkMeshQuality_SetHexQualityMeasureToJacobian, METH_VARARGS,
   "V.SetHexQualityMeasureToJacobian()\nC++: void SetHexQualityMeasureToJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetHexQualityMeasureToScaledJacobian, METH_VARARGS,
   "V.SetHexQualityMeasureToScaledJacobian()\nC++: void SetHexQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToShear", PyvtkMeshQuality_SetHexQualityMeasureToShear, METH_VARARGS,
   "V.SetHexQualityMeasureToShear()\nC++: void SetHexQualityMeasureToShear()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToShape", PyvtkMeshQuality_SetHexQualityMeasureToShape, METH_VARARGS,
   "V.SetHexQualityMeasureToShape()\nC++: void SetHexQualityMeasureToShape()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "V.SetHexQualityMeasureToRelativeSizeSquared()\nC++: void SetHexQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetHexQualityMeasureToShapeAndSize, METH_VARARGS,
   "V.SetHexQualityMeasureToShapeAndSize()\nC++: void SetHexQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToShearAndSize", PyvtkMeshQuality_SetHexQualityMeasureToShearAndSize, METH_VARARGS,
   "V.SetHexQualityMeasureToShearAndSize()\nC++: void SetHexQualityMeasureToShearAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"SetHexQualityMeasureToDistortion", PyvtkMeshQuality_SetHexQualityMeasureToDistortion, METH_VARARGS,
   "V.SetHexQualityMeasureToDistortion()\nC++: void SetHexQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {"TriangleArea", PyvtkMeshQuality_TriangleArea, METH_VARARGS,
   "V.TriangleArea(vtkCell) -> float\nC++: static double TriangleArea(vtkCell *cell)\n\nThis is a static function used to calculate the area of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"TriangleEdgeRatio", PyvtkMeshQuality_TriangleEdgeRatio, METH_VARARGS,
   "V.TriangleEdgeRatio(vtkCell) -> float\nC++: static double TriangleEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function. The edge ratio of a\ntriangle $t $ is:$\\frac{|t|_\\infty}{|t|_0} $, where $|t|_\\infty $\nand $|t|_0 $ respectively denote the greatest and the smallest\nedge lengths of $t $.\n"},
  {"TriangleAspectRatio", PyvtkMeshQuality_TriangleAspectRatio, METH_VARARGS,
   "V.TriangleAspectRatio(vtkCell) -> float\nC++: static double TriangleAspectRatio(vtkCell *cell)\n\nThis is a static function used to calculate the aspect ratio of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function. The aspect ratio of\na triangle $t $ is:$\\frac{|t|_\\infty}{2\\sqrt{3}r} $, where\n$|t|_\\infty $ and $r $ respectively denote the greatest edge\nlength and the inradius of $t $.\n"},
  {"TriangleRadiusRatio", PyvtkMeshQuality_TriangleRadiusRatio, METH_VARARGS,
   "V.TriangleRadiusRatio(vtkCell) -> float\nC++: static double TriangleRadiusRatio(vtkCell *cell)\n\nThis is a static function used to calculate the radius ratio of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function. The radius ratio of\na triangle $t $ is:$\\frac{R}{2r} $, where $R $ and $r $\nrespectively denote the circumradius and the inradius of $t $.\n"},
  {"TriangleAspectFrobenius", PyvtkMeshQuality_TriangleAspectFrobenius, METH_VARARGS,
   "V.TriangleAspectFrobenius(vtkCell) -> float\nC++: static double TriangleAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the Frobenius\ncondition number of the transformation matrix from an equilateral\ntriangle to a triangle. It assumes that you pass the correct type\nof cell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. The\nFrobenius aspect of a triangle $t $, when the reference element\nis equilateral, is:$\\frac{|t|^2_2}{2\\sqrt{3}{\\cal A}} $, where\n$|t|^2_2 $ and $\\cal A $ respectively denote the sum of the\nsquared edge lengths and the area of $t $.\n"},
  {"TriangleMinAngle", PyvtkMeshQuality_TriangleMinAngle, METH_VARARGS,
   "V.TriangleMinAngle(vtkCell) -> float\nC++: static double TriangleMinAngle(vtkCell *cell)\n\nThis is a static function used to calculate the minimal\n(nonoriented) angle of a triangle, expressed in degrees. It\nassumes that you pass the correct type of cell -- no type\nchecking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"TriangleMaxAngle", PyvtkMeshQuality_TriangleMaxAngle, METH_VARARGS,
   "V.TriangleMaxAngle(vtkCell) -> float\nC++: static double TriangleMaxAngle(vtkCell *cell)\n\nThis is a static function used to calculate the maximal\n(nonoriented) angle of a triangle, expressed in degrees. It\nassumes that you pass the correct type of cell -- no type\nchecking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"TriangleCondition", PyvtkMeshQuality_TriangleCondition, METH_VARARGS,
   "V.TriangleCondition(vtkCell) -> float\nC++: static double TriangleCondition(vtkCell *cell)\n\nThis is a static function used to calculate the condition number\nof a triangle. It assumes that you pass the correct type of cell\n-- no type checking is performed because this method is called\nfrom the inner loop of the Execute() member function.\n"},
  {"TriangleScaledJacobian", PyvtkMeshQuality_TriangleScaledJacobian, METH_VARARGS,
   "V.TriangleScaledJacobian(vtkCell) -> float\nC++: static double TriangleScaledJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the scaled Jacobian\nof a triangle. It assumes that you pass the correct type of cell\n-- no type checking is performed because this method is called\nfrom the inner loop of the Execute() member function.\n"},
  {"TriangleRelativeSizeSquared", PyvtkMeshQuality_TriangleRelativeSizeSquared, METH_VARARGS,
   "V.TriangleRelativeSizeSquared(vtkCell) -> float\nC++: static double TriangleRelativeSizeSquared(vtkCell *cell)\n\nThis is a static function used to calculate the square of the\nrelative size of a triangle. It assumes that you pass the correct\ntype of cell -- no type checking is performed because this method\nis called from the inner loop of the Execute() member function.\n"},
  {"TriangleShape", PyvtkMeshQuality_TriangleShape, METH_VARARGS,
   "V.TriangleShape(vtkCell) -> float\nC++: static double TriangleShape(vtkCell *cell)\n\nThis is a static function used to calculate the shape of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"TriangleShapeAndSize", PyvtkMeshQuality_TriangleShapeAndSize, METH_VARARGS,
   "V.TriangleShapeAndSize(vtkCell) -> float\nC++: static double TriangleShapeAndSize(vtkCell *cell)\n\nThis is a static function used to calculate the product of shape\nand relative size of a triangle. It assumes that you pass the\ncorrect type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TriangleDistortion", PyvtkMeshQuality_TriangleDistortion, METH_VARARGS,
   "V.TriangleDistortion(vtkCell) -> float\nC++: static double TriangleDistortion(vtkCell *cell)\n\nThis is a static function used to calculate the distortion of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"QuadEdgeRatio", PyvtkMeshQuality_QuadEdgeRatio, METH_VARARGS,
   "V.QuadEdgeRatio(vtkCell) -> float\nC++: static double QuadEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\nquadrilateral. It assumes that you pass the correct type of cell\n-- no type checking is performed because this method is called\nfrom the inner loop of the Execute() member function. The edge\nratio of a quadrilateral $q $ is:$\\frac{|q|_\\infty}{|q|_0} $,\nwhere $|q|_\\infty $ and $|q|_0 $ respectively denote the greatest\nand the smallest edge lengths of $q $.\n"},
  {"QuadAspectRatio", PyvtkMeshQuality_QuadAspectRatio, METH_VARARGS,
   "V.QuadAspectRatio(vtkCell) -> float\nC++: static double QuadAspectRatio(vtkCell *cell)\n\nThis is a static function used to calculate the aspect ratio of a\nplanar quadrilateral. It assumes that you pass the correct type\nof cell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. Use\nat your own risk with nonplanar quadrilaterals. The aspect ratio\nof a planar quadrilateral $q $ is:$\\frac{|q|_1|q|_\\infty}{4{\\cal\nA}} $, where $|q|_1 $, $|q|_\\infty $ and ${\\cal A} $ respectively\ndenote the perimeter, the greatest edge length and the area of $q\n$.\n"},
  {"QuadRadiusRatio", PyvtkMeshQuality_QuadRadiusRatio, METH_VARARGS,
   "V.QuadRadiusRatio(vtkCell) -> float\nC++: static double QuadRadiusRatio(vtkCell *cell)\n\nThis is a static function used to calculate the radius ratio of a\nplanar quadrilateral. The name is only used by analogy with the\ntriangle radius ratio, because in general a quadrilateral does\nnot have a circumcircle nor an incircle. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction. Use at your own risk with nonplanar quadrilaterals. The\nradius ratio of a planar quadrilateral $q $\nis:$\\frac{|q|_2h_{\\max}}{\\min_i{\\cal A}_i} $, where $|q|_2 $,\n$h_{\\max} $ and $\\min{\\cal A}_i $ respectively denote the sum of\nthe squared edge lengths, the greatest amongst diagonal and edge\nlengths and the smallest area of the 4 triangles extractable from\n$q $.\n"},
  {"QuadMedAspectFrobenius", PyvtkMeshQuality_QuadMedAspectFrobenius, METH_VARARGS,
   "V.QuadMedAspectFrobenius(vtkCell) -> float\nC++: static double QuadMedAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the average Frobenius\naspect of the 4 corner triangles of a planar quadrilateral, when\nthe reference triangle elements are right isosceles at the\nquadrangle vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. Use\nat your own risk with nonplanar quadrilaterals. The Frobenius\naspect of a triangle $t $, when the reference element is right\nisosceles at vertex $V $, is:$\\frac{f^2+g^2}{4{\\cal A}} $, where\n$f^2+g^2 $ and $\\cal A $ respectively denote the sum of the\nsquared lengths of the edges attached to $V $ and the area of $t\n$.\n"},
  {"QuadMaxAspectFrobenius", PyvtkMeshQuality_QuadMaxAspectFrobenius, METH_VARARGS,
   "V.QuadMaxAspectFrobenius(vtkCell) -> float\nC++: static double QuadMaxAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 4 corner triangles of a planar quadrilateral, when\nthe reference triangle elements are right isosceles at the\nquadrangle vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. Use\nat your own risk with nonplanar quadrilaterals. The Frobenius\naspect of a triangle $t $, when the reference element is right\nisosceles at vertex $V $, is:$\\frac{f^2+g^2}{4{\\cal A}} $, where\n$f^2+g^2 $ and $\\cal A $ respectively denote the sum of the\nsquared lengths of the edges attached to $V $ and the area of $t\n$.\n"},
  {"QuadMinAngle", PyvtkMeshQuality_QuadMinAngle, METH_VARARGS,
   "V.QuadMinAngle(vtkCell) -> float\nC++: static double QuadMinAngle(vtkCell *cell)\n\nThis is a static function used to calculate the minimal\n(nonoriented) angle of a quadrilateral, expressed in degrees. It\nassumes that you pass the correct type of cell -- no type\nchecking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"QuadMaxEdgeRatios", PyvtkMeshQuality_QuadMaxEdgeRatios, METH_VARARGS,
   "V.QuadMaxEdgeRatios(vtkCell) -> float\nC++: static double QuadMaxEdgeRatios(vtkCell *cell)\n\n"},
  {"QuadSkew", PyvtkMeshQuality_QuadSkew, METH_VARARGS,
   "V.QuadSkew(vtkCell) -> float\nC++: static double QuadSkew(vtkCell *cell)\n\n"},
  {"QuadTaper", PyvtkMeshQuality_QuadTaper, METH_VARARGS,
   "V.QuadTaper(vtkCell) -> float\nC++: static double QuadTaper(vtkCell *cell)\n\n"},
  {"QuadWarpage", PyvtkMeshQuality_QuadWarpage, METH_VARARGS,
   "V.QuadWarpage(vtkCell) -> float\nC++: static double QuadWarpage(vtkCell *cell)\n\n"},
  {"QuadArea", PyvtkMeshQuality_QuadArea, METH_VARARGS,
   "V.QuadArea(vtkCell) -> float\nC++: static double QuadArea(vtkCell *cell)\n\n"},
  {"QuadStretch", PyvtkMeshQuality_QuadStretch, METH_VARARGS,
   "V.QuadStretch(vtkCell) -> float\nC++: static double QuadStretch(vtkCell *cell)\n\n"},
  {"QuadMaxAngle", PyvtkMeshQuality_QuadMaxAngle, METH_VARARGS,
   "V.QuadMaxAngle(vtkCell) -> float\nC++: static double QuadMaxAngle(vtkCell *cell)\n\n"},
  {"QuadOddy", PyvtkMeshQuality_QuadOddy, METH_VARARGS,
   "V.QuadOddy(vtkCell) -> float\nC++: static double QuadOddy(vtkCell *cell)\n\n"},
  {"QuadCondition", PyvtkMeshQuality_QuadCondition, METH_VARARGS,
   "V.QuadCondition(vtkCell) -> float\nC++: static double QuadCondition(vtkCell *cell)\n\n"},
  {"QuadJacobian", PyvtkMeshQuality_QuadJacobian, METH_VARARGS,
   "V.QuadJacobian(vtkCell) -> float\nC++: static double QuadJacobian(vtkCell *cell)\n\n"},
  {"QuadScaledJacobian", PyvtkMeshQuality_QuadScaledJacobian, METH_VARARGS,
   "V.QuadScaledJacobian(vtkCell) -> float\nC++: static double QuadScaledJacobian(vtkCell *cell)\n\n"},
  {"QuadShear", PyvtkMeshQuality_QuadShear, METH_VARARGS,
   "V.QuadShear(vtkCell) -> float\nC++: static double QuadShear(vtkCell *cell)\n\n"},
  {"QuadShape", PyvtkMeshQuality_QuadShape, METH_VARARGS,
   "V.QuadShape(vtkCell) -> float\nC++: static double QuadShape(vtkCell *cell)\n\n"},
  {"QuadRelativeSizeSquared", PyvtkMeshQuality_QuadRelativeSizeSquared, METH_VARARGS,
   "V.QuadRelativeSizeSquared(vtkCell) -> float\nC++: static double QuadRelativeSizeSquared(vtkCell *cell)\n\n"},
  {"QuadShapeAndSize", PyvtkMeshQuality_QuadShapeAndSize, METH_VARARGS,
   "V.QuadShapeAndSize(vtkCell) -> float\nC++: static double QuadShapeAndSize(vtkCell *cell)\n\n"},
  {"QuadShearAndSize", PyvtkMeshQuality_QuadShearAndSize, METH_VARARGS,
   "V.QuadShearAndSize(vtkCell) -> float\nC++: static double QuadShearAndSize(vtkCell *cell)\n\n"},
  {"QuadDistortion", PyvtkMeshQuality_QuadDistortion, METH_VARARGS,
   "V.QuadDistortion(vtkCell) -> float\nC++: static double QuadDistortion(vtkCell *cell)\n\n"},
  {"TetEdgeRatio", PyvtkMeshQuality_TetEdgeRatio, METH_VARARGS,
   "V.TetEdgeRatio(vtkCell) -> float\nC++: static double TetEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\ntetrahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The edge ratio\nof a tetrahedron $K $ is:$\\frac{|K|_\\infty}{|K|_0} $, where\n$|K|_\\infty $ and $|K|_0 $ respectively denote the greatest and\nthe smallest edge lengths of $K $.\n"},
  {"TetAspectRatio", PyvtkMeshQuality_TetAspectRatio, METH_VARARGS,
   "V.TetAspectRatio(vtkCell) -> float\nC++: static double TetAspectRatio(vtkCell *cell)\n\nThis is a static function used to calculate the aspect ratio of a\ntetrahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The aspect ratio\nof a tetrahedron $K $ is:$\\frac{|K|_\\infty}{2\\sqrt{6}r} $, where\n$|K|_\\infty $ and $r $ respectively denote the greatest edge\nlength and the inradius of $K $.\n"},
  {"TetRadiusRatio", PyvtkMeshQuality_TetRadiusRatio, METH_VARARGS,
   "V.TetRadiusRatio(vtkCell) -> float\nC++: static double TetRadiusRatio(vtkCell *cell)\n\nThis is a static function used to calculate the radius ratio of a\ntetrahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The radius ratio\nof a tetrahedron $K $ is:$\\frac{R}{3r} $, where $R $ and $r $\nrespectively denote the circumradius and the inradius of $K $.\n"},
  {"TetAspectFrobenius", PyvtkMeshQuality_TetAspectFrobenius, METH_VARARGS,
   "V.TetAspectFrobenius(vtkCell) -> float\nC++: static double TetAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the Frobenius\ncondition number of the transformation matrix from a regular\ntetrahedron to a tetrahedron. It assumes that you pass the\ncorrect type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction. The Frobenius aspect of a tetrahedron $K $, when the\nreference element is regular,\nis:$\\frac{\\frac{3}{2}(l_{11}+l_{22}+l_{33}) -\n(l_{12}+l_{13}+l_{23})} {3(\\sqrt{2}\\det{T})^\\frac{2}{3}} $, where\n$T $ and $l_{ij} $ respectively denote the edge matrix of $K $\nand the entries of $L=T^t\\,T $.\n"},
  {"TetMinAngle", PyvtkMeshQuality_TetMinAngle, METH_VARARGS,
   "V.TetMinAngle(vtkCell) -> float\nC++: static double TetMinAngle(vtkCell *cell)\n\nThis is a static function used to calculate the minimal\n(nonoriented) dihedral angle of a tetrahedron, expressed in\ndegrees. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {"TetCollapseRatio", PyvtkMeshQuality_TetCollapseRatio, METH_VARARGS,
   "V.TetCollapseRatio(vtkCell) -> float\nC++: static double TetCollapseRatio(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetAspectBeta", PyvtkMeshQuality_TetAspectBeta, METH_VARARGS,
   "V.TetAspectBeta(vtkCell) -> float\nC++: static double TetAspectBeta(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetAspectGamma", PyvtkMeshQuality_TetAspectGamma, METH_VARARGS,
   "V.TetAspectGamma(vtkCell) -> float\nC++: static double TetAspectGamma(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetVolume", PyvtkMeshQuality_TetVolume, METH_VARARGS,
   "V.TetVolume(vtkCell) -> float\nC++: static double TetVolume(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetCondition", PyvtkMeshQuality_TetCondition, METH_VARARGS,
   "V.TetCondition(vtkCell) -> float\nC++: static double TetCondition(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetJacobian", PyvtkMeshQuality_TetJacobian, METH_VARARGS,
   "V.TetJacobian(vtkCell) -> float\nC++: static double TetJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetScaledJacobian", PyvtkMeshQuality_TetScaledJacobian, METH_VARARGS,
   "V.TetScaledJacobian(vtkCell) -> float\nC++: static double TetScaledJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetShape", PyvtkMeshQuality_TetShape, METH_VARARGS,
   "V.TetShape(vtkCell) -> float\nC++: static double TetShape(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetRelativeSizeSquared", PyvtkMeshQuality_TetRelativeSizeSquared, METH_VARARGS,
   "V.TetRelativeSizeSquared(vtkCell) -> float\nC++: static double TetRelativeSizeSquared(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetShapeandSize", PyvtkMeshQuality_TetShapeandSize, METH_VARARGS,
   "V.TetShapeandSize(vtkCell) -> float\nC++: static double TetShapeandSize(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"TetDistortion", PyvtkMeshQuality_TetDistortion, METH_VARARGS,
   "V.TetDistortion(vtkCell) -> float\nC++: static double TetDistortion(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {"HexEdgeRatio", PyvtkMeshQuality_HexEdgeRatio, METH_VARARGS,
   "V.HexEdgeRatio(vtkCell) -> float\nC++: static double HexEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\nhexahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The edge ratio\nof a hexahedron $H $ is:$\\frac{|H|_\\infty}{|H|_0} $, where\n$|H|_\\infty $ and $|H|_0 $ respectively denote the greatest and\nthe smallest edge lengths of $H $.\n"},
  {"HexMedAspectFrobenius", PyvtkMeshQuality_HexMedAspectFrobenius, METH_VARARGS,
   "V.HexMedAspectFrobenius(vtkCell) -> float\nC++: static double HexMedAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the average Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexMaxAspectFrobenius", PyvtkMeshQuality_HexMaxAspectFrobenius, METH_VARARGS,
   "V.HexMaxAspectFrobenius(vtkCell) -> float\nC++: static double HexMaxAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexMaxEdgeRatio", PyvtkMeshQuality_HexMaxEdgeRatio, METH_VARARGS,
   "V.HexMaxEdgeRatio(vtkCell) -> float\nC++: static double HexMaxEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexSkew", PyvtkMeshQuality_HexSkew, METH_VARARGS,
   "V.HexSkew(vtkCell) -> float\nC++: static double HexSkew(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexTaper", PyvtkMeshQuality_HexTaper, METH_VARARGS,
   "V.HexTaper(vtkCell) -> float\nC++: static double HexTaper(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexVolume", PyvtkMeshQuality_HexVolume, METH_VARARGS,
   "V.HexVolume(vtkCell) -> float\nC++: static double HexVolume(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexStretch", PyvtkMeshQuality_HexStretch, METH_VARARGS,
   "V.HexStretch(vtkCell) -> float\nC++: static double HexStretch(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexDiagonal", PyvtkMeshQuality_HexDiagonal, METH_VARARGS,
   "V.HexDiagonal(vtkCell) -> float\nC++: static double HexDiagonal(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexDimension", PyvtkMeshQuality_HexDimension, METH_VARARGS,
   "V.HexDimension(vtkCell) -> float\nC++: static double HexDimension(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexOddy", PyvtkMeshQuality_HexOddy, METH_VARARGS,
   "V.HexOddy(vtkCell) -> float\nC++: static double HexOddy(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexCondition", PyvtkMeshQuality_HexCondition, METH_VARARGS,
   "V.HexCondition(vtkCell) -> float\nC++: static double HexCondition(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexJacobian", PyvtkMeshQuality_HexJacobian, METH_VARARGS,
   "V.HexJacobian(vtkCell) -> float\nC++: static double HexJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexScaledJacobian", PyvtkMeshQuality_HexScaledJacobian, METH_VARARGS,
   "V.HexScaledJacobian(vtkCell) -> float\nC++: static double HexScaledJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexShear", PyvtkMeshQuality_HexShear, METH_VARARGS,
   "V.HexShear(vtkCell) -> float\nC++: static double HexShear(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexShape", PyvtkMeshQuality_HexShape, METH_VARARGS,
   "V.HexShape(vtkCell) -> float\nC++: static double HexShape(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexRelativeSizeSquared", PyvtkMeshQuality_HexRelativeSizeSquared, METH_VARARGS,
   "V.HexRelativeSizeSquared(vtkCell) -> float\nC++: static double HexRelativeSizeSquared(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexShapeAndSize", PyvtkMeshQuality_HexShapeAndSize, METH_VARARGS,
   "V.HexShapeAndSize(vtkCell) -> float\nC++: static double HexShapeAndSize(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexShearAndSize", PyvtkMeshQuality_HexShearAndSize, METH_VARARGS,
   "V.HexShearAndSize(vtkCell) -> float\nC++: static double HexShearAndSize(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"HexDistortion", PyvtkMeshQuality_HexDistortion, METH_VARARGS,
   "V.HexDistortion(vtkCell) -> float\nC++: static double HexDistortion(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {"SetRatio", PyvtkMeshQuality_SetRatio, METH_VARARGS,
   "V.SetRatio(int)\nC++: virtual void SetRatio(vtkTypeBool r)\n\nThese methods are deprecated. Use Get/SetSaveCellQuality()\ninstead.\n\n* Formerly, SetRatio could be used to disable computation\n* of the tetrahedral radius ratio so that volume alone could be\n  computed.\n* Now, cell quality is always computed, but you may decide not\n* to store the result for each cell.\n* This allows average cell quality of a mesh to be\n* calculated without requiring per-cell storage.\n"},
  {"GetRatio", PyvtkMeshQuality_GetRatio, METH_VARARGS,
   "V.GetRatio() -> int\nC++: vtkTypeBool GetRatio()\n\n"},
  {"RatioOn", PyvtkMeshQuality_RatioOn, METH_VARARGS,
   "V.RatioOn()\nC++: virtual void RatioOn()\n\n"},
  {"RatioOff", PyvtkMeshQuality_RatioOff, METH_VARARGS,
   "V.RatioOff()\nC++: virtual void RatioOff()\n\n"},
  {"SetVolume", PyvtkMeshQuality_SetVolume, METH_VARARGS,
   "V.SetVolume(int)\nC++: virtual void SetVolume(vtkTypeBool cv)\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\n* For now, turning on the volume computation will put this\n* filter into \"compatibility mode,\" where tetrahedral cell\n* volume is stored in first component of each output tuple and\n* the radius ratio is stored in the second component. You may\n* also use CompatibilityModeOn()/Off() to enter this mode.\n* In this mode, cells other than tetrahedra will have report\n* a volume of 0.0 (if volume computation is enabled).\n\n* By default, volume computation is disabled and compatibility\n* mode is off, since it does not make a lot of sense for\n* meshes with non-tetrahedral cells.\n"},
  {"GetVolume", PyvtkMeshQuality_GetVolume, METH_VARARGS,
   "V.GetVolume() -> int\nC++: vtkTypeBool GetVolume()\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\n* For now, turning on the volume computation will put this\n* filter into \"compatibility mode,\" where tetrahedral cell\n* volume is stored in first component of each output tuple and\n* the radius ratio is stored in the second component. You may\n* also use CompatibilityModeOn()/Off() to enter this mode.\n* In this mode, cells other than tetrahedra will have report\n* a volume of 0.0 (if volume computation is enabled).\n\n* By default, volume computation is disabled and compatibility\n* mode is off, since it does not make a lot of sense for\n* meshes with non-tetrahedral cells.\n"},
  {"VolumeOn", PyvtkMeshQuality_VolumeOn, METH_VARARGS,
   "V.VolumeOn()\nC++: virtual void VolumeOn()\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\n* For now, turning on the volume computation will put this\n* filter into \"compatibility mode,\" where tetrahedral cell\n* volume is stored in first component of each output tuple and\n* the radius ratio is stored in the second component. You may\n* also use CompatibilityModeOn()/Off() to enter this mode.\n* In this mode, cells other than tetrahedra will have report\n* a volume of 0.0 (if volume computation is enabled).\n\n* By default, volume computation is disabled and compatibility\n* mode is off, since it does not make a lot of sense for\n* meshes with non-tetrahedral cells.\n"},
  {"VolumeOff", PyvtkMeshQuality_VolumeOff, METH_VARARGS,
   "V.VolumeOff()\nC++: virtual void VolumeOff()\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\n* For now, turning on the volume computation will put this\n* filter into \"compatibility mode,\" where tetrahedral cell\n* volume is stored in first component of each output tuple and\n* the radius ratio is stored in the second component. You may\n* also use CompatibilityModeOn()/Off() to enter this mode.\n* In this mode, cells other than tetrahedra will have report\n* a volume of 0.0 (if volume computation is enabled).\n\n* By default, volume computation is disabled and compatibility\n* mode is off, since it does not make a lot of sense for\n* meshes with non-tetrahedral cells.\n"},
  {"SetCompatibilityMode", PyvtkMeshQuality_SetCompatibilityMode, METH_VARARGS,
   "V.SetCompatibilityMode(int)\nC++: virtual void SetCompatibilityMode(vtkTypeBool cm)\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\n* Enabling CompatibilityMode changes the default tetrahedral\n* quality function to VTK_QUALITY_RADIUS_RATIO and turns volume\n* computation on. (This matches the default behavior of the\n* initial implementation of vtkMeshQuality.) You may change\n* quality function and volume computation without leaving\n* compatibility mode.\n\n* Disabling compatibility mode does not affect the current\n* volume computation or tetrahedral quality function settings.\n\n* The final caveat to CompatibilityMode is that regardless of\n* its setting, the resulting array will be of type vtkDoubleArray\n* rather than the original vtkFloatArray.\n* This is a safety function to keep the authors from\n* diving off of the Combinatorial Coding Cliff into\n* Certain Insanity.\n"},
  {"GetCompatibilityMode", PyvtkMeshQuality_GetCompatibilityMode, METH_VARARGS,
   "V.GetCompatibilityMode() -> int\nC++: virtual vtkTypeBool GetCompatibilityMode()\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\n* Enabling CompatibilityMode changes the default tetrahedral\n* quality function to VTK_QUALITY_RADIUS_RATIO and turns volume\n* computation on. (This matches the default behavior of the\n* initial implementation of vtkMeshQuality.) You may change\n* quality function and volume computation without leaving\n* compatibility mode.\n\n* Disabling compatibility mode does not affect the current\n* volume computation or tetrahedral quality function settings.\n\n* The final caveat to CompatibilityMode is that regardless of\n* its setting, the resulting array will be of type vtkDoubleArray\n* rather than the original vtkFloatArray.\n* This is a safety function to keep the authors from\n* diving off of the Combinatorial Coding Cliff into\n* Certain Insanity.\n"},
  {"CompatibilityModeOn", PyvtkMeshQuality_CompatibilityModeOn, METH_VARARGS,
   "V.CompatibilityModeOn()\nC++: virtual void CompatibilityModeOn()\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\n* Enabling CompatibilityMode changes the default tetrahedral\n* quality function to VTK_QUALITY_RADIUS_RATIO and turns volume\n* computation on. (This matches the default behavior of the\n* initial implementation of vtkMeshQuality.) You may change\n* quality function and volume computation without leaving\n* compatibility mode.\n\n* Disabling compatibility mode does not affect the current\n* volume computation or tetrahedral quality function settings.\n\n* The final caveat to CompatibilityMode is that regardless of\n* its setting, the resulting array will be of type vtkDoubleArray\n* rather than the original vtkFloatArray.\n* This is a safety function to keep the authors from\n* diving off of the Combinatorial Coding Cliff into\n* Certain Insanity.\n"},
  {"CompatibilityModeOff", PyvtkMeshQuality_CompatibilityModeOff, METH_VARARGS,
   "V.CompatibilityModeOff()\nC++: virtual void CompatibilityModeOff()\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\n* Enabling CompatibilityMode changes the default tetrahedral\n* quality function to VTK_QUALITY_RADIUS_RATIO and turns volume\n* computation on. (This matches the default behavior of the\n* initial implementation of vtkMeshQuality.) You may change\n* quality function and volume computation without leaving\n* compatibility mode.\n\n* Disabling compatibility mode does not affect the current\n* volume computation or tetrahedral quality function settings.\n\n* The final caveat to CompatibilityMode is that regardless of\n* its setting, the resulting array will be of type vtkDoubleArray\n* rather than the original vtkFloatArray.\n* This is a safety function to keep the authors from\n* diving off of the Combinatorial Coding Cliff into\n* Certain Insanity.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMeshQuality_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersVerdictPython.vtkMeshQuality", // tp_name
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
  PyvtkMeshQuality_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMeshQuality_StaticNew()
{
  return vtkMeshQuality::New();
}

PyObject *PyvtkMeshQuality_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMeshQuality_Type, PyvtkMeshQuality_Methods,
    "vtkMeshQuality",
 &PyvtkMeshQuality_StaticNew);

  PyTypeObject *pytype = &PyvtkMeshQuality_Type;

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

void PyVTKAddFile_vtkMeshQuality(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMeshQuality_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMeshQuality", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 30; c++)
  {
    static const struct { const char *name; int value; }
      constants[30] = {
        { "VTK_QUALITY_EDGE_RATIO", 0 },
        { "VTK_QUALITY_ASPECT_RATIO", 1 },
        { "VTK_QUALITY_RADIUS_RATIO", 2 },
        { "VTK_QUALITY_ASPECT_FROBENIUS", 3 },
        { "VTK_QUALITY_MED_ASPECT_FROBENIUS", 4 },
        { "VTK_QUALITY_MAX_ASPECT_FROBENIUS", 5 },
        { "VTK_QUALITY_MIN_ANGLE", 6 },
        { "VTK_QUALITY_COLLAPSE_RATIO", 7 },
        { "VTK_QUALITY_MAX_ANGLE", 8 },
        { "VTK_QUALITY_CONDITION", 9 },
        { "VTK_QUALITY_SCALED_JACOBIAN", 10 },
        { "VTK_QUALITY_SHEAR", 11 },
        { "VTK_QUALITY_RELATIVE_SIZE_SQUARED", 12 },
        { "VTK_QUALITY_SHAPE", 13 },
        { "VTK_QUALITY_SHAPE_AND_SIZE", 14 },
        { "VTK_QUALITY_DISTORTION", 15 },
        { "VTK_QUALITY_MAX_EDGE_RATIO", 16 },
        { "VTK_QUALITY_SKEW", 17 },
        { "VTK_QUALITY_TAPER", 18 },
        { "VTK_QUALITY_VOLUME", 19 },
        { "VTK_QUALITY_STRETCH", 20 },
        { "VTK_QUALITY_DIAGONAL", 21 },
        { "VTK_QUALITY_DIMENSION", 22 },
        { "VTK_QUALITY_ODDY", 23 },
        { "VTK_QUALITY_SHEAR_AND_SIZE", 24 },
        { "VTK_QUALITY_JACOBIAN", 25 },
        { "VTK_QUALITY_WARPAGE", 26 },
        { "VTK_QUALITY_ASPECT_GAMMA", 27 },
        { "VTK_QUALITY_AREA", 28 },
        { "VTK_QUALITY_ASPECT_BETA", 29 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

