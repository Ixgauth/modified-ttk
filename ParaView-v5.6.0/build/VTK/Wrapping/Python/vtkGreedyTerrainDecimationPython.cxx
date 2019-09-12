// python wrapper for vtkGreedyTerrainDecimation
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
#include "vtkGreedyTerrainDecimation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGreedyTerrainDecimation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGreedyTerrainDecimation_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGreedyTerrainDecimation_Doc =
  "vtkGreedyTerrainDecimation - reduce height field (represented as\nimage) to reduced TIN\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGreedyTerrainDecimation approximates a height field with a\n"
  "triangle mesh (triangulated irregular network - TIN) using a greedy\n"
  "insertion algorithm similar to that described by Garland and Heckbert\n"
  "in their paper \"Fast Polygonal Approximations of Terrain and Height\n"
  "Fields\" (Technical Report CMU-CS-95-181).  The input to the filter is\n"
  "a height field (represented by a image whose scalar values are\n"
  "height) and the output of the filter is polygonal data consisting of\n"
  "triangles. The number of triangles in the output is reduced in number\n"
  "as compared to a naive tessellation of the input height field. This\n"
  "filter copies point data from the input to the output for those\n"
  "points present in the output.\n\n"
  "An brief description of the algorithm is as follows. The algorithm\n"
  "uses a top-down decimation approach that initially represents the\n"
  "height field with two triangles (whose vertices are at the four\n"
  "corners of the image). These two triangles form a Delaunay\n"
  "triangulation. In an iterative fashion, the point in the image with\n"
  "the greatest error (as compared to the original height field) is\n"
  "injected into the triangulation. (Note that the single point with the\n"
  "greatest error per triangle is identified and placed into a priority\n"
  "queue. As the triangulation is modified, the errors from the deleted\n"
  "triangles are removed from the queue, error values from the new\n"
  "triangles are added.) The point whose error is at the top of the\n"
  "queue is added to the triangulaion modifying it using the standard\n"
  "incremental Delaunay point insertion (see vtkDelaunay2D) algorithm.\n"
  "Points are repeatedly inserted until the appropriate (user-specified)\n"
  "error criterion is met.\n\n"
  "To use this filter, set the input and specify the error measure to be\n"
  "used.  The error measure options are 1) the absolute number of\n"
  "triangles to be produced; 2) a fractional reduction of the mesh\n"
  "(numTris/maxTris) where maxTris is the largest possible number of\n"
  "triangles 2*(dims[0]-1)*(dims[1]-1); 3) an absolute measure on error\n"
  "(maximum difference in height field to reduced TIN); and 4) relative\n"
  "error (the absolute error is normalized by the diagonal of the\n"
  "bounding box of the height field).\n\n"
  "@warning\n"
  "This algorithm requires the entire input dataset to be in memory,\n"
  "hence it may not work for extremely large images. Invoking\n"
  "BoundaryVertexDeletionOff will allow you to stitch together images\n"
  "with matching boundaries.\n\n"
  "@warning\n"
  "The input height image is assumed to be positioned in the x-y plane\n"
  "so the scalar value is the z-coordinate, height value.\n\n"
  "@sa\n"
  "vtkDecimatePro vtkQuadricDecimation vtkQuadricClustering\n\n";


static PyObject *
PyvtkGreedyTerrainDecimation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGreedyTerrainDecimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGreedyTerrainDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGreedyTerrainDecimation *tempr = vtkGreedyTerrainDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGreedyTerrainDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGreedyTerrainDecimation::NewInstance());

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
PyvtkGreedyTerrainDecimation_SetErrorMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErrorMeasure(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetErrorMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetErrorMeasureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMeasureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErrorMeasureMinValue() :
      op->vtkGreedyTerrainDecimation::GetErrorMeasureMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetErrorMeasureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMeasureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErrorMeasureMaxValue() :
      op->vtkGreedyTerrainDecimation::GetErrorMeasureMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetErrorMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErrorMeasure() :
      op->vtkGreedyTerrainDecimation::GetErrorMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetErrorMeasureToNumberOfTriangles();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToNumberOfTriangles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToSpecifiedReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToSpecifiedReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetErrorMeasureToSpecifiedReduction();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToSpecifiedReduction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetErrorMeasureToAbsoluteError();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToAbsoluteError();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetErrorMeasureToRelativeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMeasureToRelativeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetErrorMeasureToRelativeError();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetErrorMeasureToRelativeError();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTriangles(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetNumberOfTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrianglesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTrianglesMinValue() :
      op->vtkGreedyTerrainDecimation::GetNumberOfTrianglesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrianglesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTrianglesMaxValue() :
      op->vtkGreedyTerrainDecimation::GetNumberOfTrianglesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTriangles() :
      op->vtkGreedyTerrainDecimation::GetNumberOfTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReduction(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReductionMinValue() :
      op->vtkGreedyTerrainDecimation::GetReductionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReductionMaxValue() :
      op->vtkGreedyTerrainDecimation::GetReductionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReduction() :
      op->vtkGreedyTerrainDecimation::GetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteError(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetAbsoluteError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteErrorMinValue() :
      op->vtkGreedyTerrainDecimation::GetAbsoluteErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteErrorMaxValue() :
      op->vtkGreedyTerrainDecimation::GetAbsoluteErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteError() :
      op->vtkGreedyTerrainDecimation::GetAbsoluteError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetRelativeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeError(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetRelativeError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetRelativeErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeErrorMinValue() :
      op->vtkGreedyTerrainDecimation::GetRelativeErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetRelativeErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeErrorMaxValue() :
      op->vtkGreedyTerrainDecimation::GetRelativeErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetRelativeError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeError() :
      op->vtkGreedyTerrainDecimation::GetRelativeError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryVertexDeletion(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetBoundaryVertexDeletion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryVertexDeletion() :
      op->vtkGreedyTerrainDecimation::GetBoundaryVertexDeletion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryVertexDeletionOn();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::BoundaryVertexDeletionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryVertexDeletionOff();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::BoundaryVertexDeletionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkGreedyTerrainDecimation::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkGreedyTerrainDecimation::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGreedyTerrainDecimation_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGreedyTerrainDecimation *op = static_cast<vtkGreedyTerrainDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkGreedyTerrainDecimation::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGreedyTerrainDecimation_Methods[] = {
  {"IsTypeOf", PyvtkGreedyTerrainDecimation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGreedyTerrainDecimation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGreedyTerrainDecimation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGreedyTerrainDecimation\nC++: static vtkGreedyTerrainDecimation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGreedyTerrainDecimation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGreedyTerrainDecimation\nC++: vtkGreedyTerrainDecimation *NewInstance()\n\n"},
  {"SetErrorMeasure", PyvtkGreedyTerrainDecimation_SetErrorMeasure, METH_VARARGS,
   "V.SetErrorMeasure(int)\nC++: virtual void SetErrorMeasure(int _arg)\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"GetErrorMeasureMinValue", PyvtkGreedyTerrainDecimation_GetErrorMeasureMinValue, METH_VARARGS,
   "V.GetErrorMeasureMinValue() -> int\nC++: virtual int GetErrorMeasureMinValue()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"GetErrorMeasureMaxValue", PyvtkGreedyTerrainDecimation_GetErrorMeasureMaxValue, METH_VARARGS,
   "V.GetErrorMeasureMaxValue() -> int\nC++: virtual int GetErrorMeasureMaxValue()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"GetErrorMeasure", PyvtkGreedyTerrainDecimation_GetErrorMeasure, METH_VARARGS,
   "V.GetErrorMeasure() -> int\nC++: virtual int GetErrorMeasure()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"SetErrorMeasureToNumberOfTriangles", PyvtkGreedyTerrainDecimation_SetErrorMeasureToNumberOfTriangles, METH_VARARGS,
   "V.SetErrorMeasureToNumberOfTriangles()\nC++: void SetErrorMeasureToNumberOfTriangles()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"SetErrorMeasureToSpecifiedReduction", PyvtkGreedyTerrainDecimation_SetErrorMeasureToSpecifiedReduction, METH_VARARGS,
   "V.SetErrorMeasureToSpecifiedReduction()\nC++: void SetErrorMeasureToSpecifiedReduction()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"SetErrorMeasureToAbsoluteError", PyvtkGreedyTerrainDecimation_SetErrorMeasureToAbsoluteError, METH_VARARGS,
   "V.SetErrorMeasureToAbsoluteError()\nC++: void SetErrorMeasureToAbsoluteError()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"SetErrorMeasureToRelativeError", PyvtkGreedyTerrainDecimation_SetErrorMeasureToRelativeError, METH_VARARGS,
   "V.SetErrorMeasureToRelativeError()\nC++: void SetErrorMeasureToRelativeError()\n\nSpecify how to terminate the algorithm: either as an absolute\nnumber of triangles, a relative number of triangles (normalized\nby the full resolution mesh), an absolute error (in the height\nfield), or relative error (normalized by the length of the\ndiagonal of the image).\n"},
  {"SetNumberOfTriangles", PyvtkGreedyTerrainDecimation_SetNumberOfTriangles, METH_VARARGS,
   "V.SetNumberOfTriangles(int)\nC++: virtual void SetNumberOfTriangles(vtkIdType _arg)\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {"GetNumberOfTrianglesMinValue", PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMinValue, METH_VARARGS,
   "V.GetNumberOfTrianglesMinValue() -> int\nC++: virtual vtkIdType GetNumberOfTrianglesMinValue()\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {"GetNumberOfTrianglesMaxValue", PyvtkGreedyTerrainDecimation_GetNumberOfTrianglesMaxValue, METH_VARARGS,
   "V.GetNumberOfTrianglesMaxValue() -> int\nC++: virtual vtkIdType GetNumberOfTrianglesMaxValue()\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {"GetNumberOfTriangles", PyvtkGreedyTerrainDecimation_GetNumberOfTriangles, METH_VARARGS,
   "V.GetNumberOfTriangles() -> int\nC++: virtual vtkIdType GetNumberOfTriangles()\n\nSpecify the number of triangles to produce on output. (It is a\ngood idea to make sure this is less than a tessellated mesh at\nfull resolution.) You need to set this value only when the error\nmeasure is set to NumberOfTriangles.\n"},
  {"SetReduction", PyvtkGreedyTerrainDecimation_SetReduction, METH_VARARGS,
   "V.SetReduction(float)\nC++: virtual void SetReduction(double _arg)\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {"GetReductionMinValue", PyvtkGreedyTerrainDecimation_GetReductionMinValue, METH_VARARGS,
   "V.GetReductionMinValue() -> float\nC++: virtual double GetReductionMinValue()\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {"GetReductionMaxValue", PyvtkGreedyTerrainDecimation_GetReductionMaxValue, METH_VARARGS,
   "V.GetReductionMaxValue() -> float\nC++: virtual double GetReductionMaxValue()\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {"GetReduction", PyvtkGreedyTerrainDecimation_GetReduction, METH_VARARGS,
   "V.GetReduction() -> float\nC++: virtual double GetReduction()\n\nSpecify the reduction of the mesh (represented as a fraction). \nNote that a value of 0.10 means a 10% reduction.  You need to set\nthis value only when the error measure is set to\nSpecifiedReduction.\n"},
  {"SetAbsoluteError", PyvtkGreedyTerrainDecimation_SetAbsoluteError, METH_VARARGS,
   "V.SetAbsoluteError(float)\nC++: virtual void SetAbsoluteError(double _arg)\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {"GetAbsoluteErrorMinValue", PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMinValue, METH_VARARGS,
   "V.GetAbsoluteErrorMinValue() -> float\nC++: virtual double GetAbsoluteErrorMinValue()\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {"GetAbsoluteErrorMaxValue", PyvtkGreedyTerrainDecimation_GetAbsoluteErrorMaxValue, METH_VARARGS,
   "V.GetAbsoluteErrorMaxValue() -> float\nC++: virtual double GetAbsoluteErrorMaxValue()\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {"GetAbsoluteError", PyvtkGreedyTerrainDecimation_GetAbsoluteError, METH_VARARGS,
   "V.GetAbsoluteError() -> float\nC++: virtual double GetAbsoluteError()\n\nSpecify the absolute error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field. \nYou need to set this value only when the error measure is set to\nAbsoluteError.\n"},
  {"SetRelativeError", PyvtkGreedyTerrainDecimation_SetRelativeError, METH_VARARGS,
   "V.SetRelativeError(float)\nC++: virtual void SetRelativeError(double _arg)\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {"GetRelativeErrorMinValue", PyvtkGreedyTerrainDecimation_GetRelativeErrorMinValue, METH_VARARGS,
   "V.GetRelativeErrorMinValue() -> float\nC++: virtual double GetRelativeErrorMinValue()\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {"GetRelativeErrorMaxValue", PyvtkGreedyTerrainDecimation_GetRelativeErrorMaxValue, METH_VARARGS,
   "V.GetRelativeErrorMaxValue() -> float\nC++: virtual double GetRelativeErrorMaxValue()\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {"GetRelativeError", PyvtkGreedyTerrainDecimation_GetRelativeError, METH_VARARGS,
   "V.GetRelativeError() -> float\nC++: virtual double GetRelativeError()\n\nSpecify the relative error of the mesh; that is, the error in\nheight between the decimated mesh and the original height field\nnormalized by the diagonal of the image.  You need to set this\nvalue only when the error measure is set to RelativeError.\n"},
  {"SetBoundaryVertexDeletion", PyvtkGreedyTerrainDecimation_SetBoundaryVertexDeletion, METH_VARARGS,
   "V.SetBoundaryVertexDeletion(int)\nC++: virtual void SetBoundaryVertexDeletion(vtkTypeBool _arg)\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {"GetBoundaryVertexDeletion", PyvtkGreedyTerrainDecimation_GetBoundaryVertexDeletion, METH_VARARGS,
   "V.GetBoundaryVertexDeletion() -> int\nC++: virtual vtkTypeBool GetBoundaryVertexDeletion()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {"BoundaryVertexDeletionOn", PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOn, METH_VARARGS,
   "V.BoundaryVertexDeletionOn()\nC++: virtual void BoundaryVertexDeletionOn()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {"BoundaryVertexDeletionOff", PyvtkGreedyTerrainDecimation_BoundaryVertexDeletionOff, METH_VARARGS,
   "V.BoundaryVertexDeletionOff()\nC++: virtual void BoundaryVertexDeletionOff()\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {"SetComputeNormals", PyvtkGreedyTerrainDecimation_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nCompute normals based on the input image. Off by default.\n"},
  {"GetComputeNormals", PyvtkGreedyTerrainDecimation_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\nCompute normals based on the input image. Off by default.\n"},
  {"ComputeNormalsOn", PyvtkGreedyTerrainDecimation_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nCompute normals based on the input image. Off by default.\n"},
  {"ComputeNormalsOff", PyvtkGreedyTerrainDecimation_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nCompute normals based on the input image. Off by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGreedyTerrainDecimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkGreedyTerrainDecimation", // tp_name
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
  PyvtkGreedyTerrainDecimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGreedyTerrainDecimation_StaticNew()
{
  return vtkGreedyTerrainDecimation::New();
}

PyObject *PyvtkGreedyTerrainDecimation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGreedyTerrainDecimation_Type, PyvtkGreedyTerrainDecimation_Methods,
    "vtkGreedyTerrainDecimation",
 &PyvtkGreedyTerrainDecimation_StaticNew);

  PyTypeObject *pytype = &PyvtkGreedyTerrainDecimation_Type;

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

void PyVTKAddFile_vtkGreedyTerrainDecimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGreedyTerrainDecimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGreedyTerrainDecimation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_ERROR_NUMBER_OF_TRIANGLES", 0 },
        { "VTK_ERROR_SPECIFIED_REDUCTION", 1 },
        { "VTK_ERROR_ABSOLUTE", 2 },
        { "VTK_ERROR_RELATIVE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

