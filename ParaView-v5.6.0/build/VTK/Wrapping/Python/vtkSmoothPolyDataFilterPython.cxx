// python wrapper for vtkSmoothPolyDataFilter
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
#include "vtkSmoothPolyDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmoothPolyDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSmoothPolyDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSmoothPolyDataFilter_Doc =
  "vtkSmoothPolyDataFilter - adjust point positions using Laplacian\nsmoothing\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSmoothPolyDataFilter is a filter that adjusts point coordinates\n"
  "using Laplacian smoothing. The effect is to \"relax\" the mesh, making\n"
  "the cells better shaped and the vertices more evenly distributed.\n"
  "Note that this filter operates on the lines, polygons, and triangle\n"
  "strips composing an instance of vtkPolyData. Vertex or poly-vertex\n"
  "cells are never modified.\n\n"
  "The algorithm proceeds as follows. For each vertex v, a topological\n"
  "and geometric analysis is performed to determine which vertices are\n"
  "connected to v, and which cells are connected to v. Then, a\n"
  "connectivity array is constructed for each vertex. (The connectivity\n"
  "array is a list of lists of vertices that directly attach to each\n"
  "vertex.) Next, an iteration phase begins over all vertices. For each\n"
  "vertex v, the coordinates of v are modified according to an average\n"
  "of the connected vertices.  (A relaxation factor is available to\n"
  "control the amount of displacement of v).  The process repeats for\n"
  "each vertex. This pass over the list of vertices is a single\n"
  "iteration. Many iterations (generally around 20 or so) are repeated\n"
  "until the desired result is obtained.\n\n"
  "There are some special instance variables used to control the\n"
  "execution of this filter. (These ivars basically control what\n"
  "vertices can be smoothed, and the creation of the connectivity\n"
  "array.) The BoundarySmoothing ivar enables/disables the smoothing\n"
  "operation on vertices that are on the \"boundary\" of the mesh. A\n"
  "boundary vertex is one that is surrounded by a semi-cycle of polygons\n"
  "(or used by a single line).\n\n"
  "Another important ivar is FeatureEdgeSmoothing. If this ivar is\n"
  "enabled, then interior vertices are classified as either \"simple\", \"interior\n"
  "edge\", or \"fixed\", and smoothed differently. (Interior vertices are\n"
  "manifold vertices surrounded by a cycle of polygons; or used by two\n"
  "line cells.) The classification is based on the number of feature\n"
  "edges attached to v. A feature edge occurs when the angle between the\n"
  "two surface normals of a polygon sharing an edge is greater than the\n"
  "FeatureAngle ivar. Then, vertices used by no feature edges are\n"
  "classified \"simple\", vertices used by exactly two feature edges are\n"
  "classified \"interior edge\", and all others are \"fixed\" vertices.\n\n"
  "Once the classification is known, the vertices are smoothed\n"
  "differently. Corner (i.e., fixed) vertices are not smoothed at all.\n"
  "Simple vertices are smoothed as before (i.e., average of connected\n"
  "vertex coordinates). Interior edge vertices are smoothed only along\n"
  "their two connected edges, and only if the angle between the edges is\n"
  "less than the EdgeAngle ivar.\n\n"
  "The total smoothing can be controlled by using two ivars. The\n"
  "NumberOfIterations is a cap on the maximum number of smoothing\n"
  "passes. The Convergence ivar is a limit on the maximum point motion.\n"
  "If the maximum motion during an iteration is less than Convergence,\n"
  "then the smoothing process terminates. (Convergence is expressed as a\n"
  "fraction of the diagonal of the bounding box.)\n\n"
  "There are two instance variables that control the generation of error\n"
  "data. If the ivar GenerateErrorScalars is on, then a scalar value\n"
  "indicating the distance of each vertex from its original position is\n"
  "computed. If the ivar GenerateErrorVectors is on, then a vector\n"
  "representing change in position is computed.\n\n"
  "Optionally you can further control the smoothing process by defining\n"
  "a second input: the Source. If defined, the input mesh is constrained\n"
  "to lie on the surface defined by the Source ivar.\n\n"
  "@warning\n"
  "The Laplacian operation reduces high frequency information in the\n"
  "geometry of the mesh. With excessive smoothing important details may\n"
  "be lost, and the surface may shrink towards the centroid. Enabling\n"
  "FeatureEdgeSmoothing helps reduce this effect, but cannot entirely\n"
  "eliminate it. You may also wish to try vtkWindowedSincPolyDataFilter.\n"
  "It does a better job of minimizing shrinkage.\n\n"
  "@sa\n"
  "vtkWindowedSincPolyDataFilter vtkDecimate vtkDecimatePro\n\n";


static PyObject *
PyvtkSmoothPolyDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSmoothPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmoothPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmoothPolyDataFilter *tempr = vtkSmoothPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmoothPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmoothPolyDataFilter::NewInstance());

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
PyvtkSmoothPolyDataFilter_SetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvergence(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetConvergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMinValue() :
      op->vtkSmoothPolyDataFilter::GetConvergenceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMaxValue() :
      op->vtkSmoothPolyDataFilter::GetConvergenceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergence() :
      op->vtkSmoothPolyDataFilter::GetConvergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkSmoothPolyDataFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkSmoothPolyDataFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkSmoothPolyDataFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelaxationFactor(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetRelaxationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactor() :
      op->vtkSmoothPolyDataFilter::GetRelaxationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureEdgeSmoothing(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetFeatureEdgeSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdgeSmoothing() :
      op->vtkSmoothPolyDataFilter::GetFeatureEdgeSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureAngle(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkSmoothPolyDataFilter::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkSmoothPolyDataFilter::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkSmoothPolyDataFilter::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeAngle(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetEdgeAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMinValue() :
      op->vtkSmoothPolyDataFilter::GetEdgeAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMaxValue() :
      op->vtkSmoothPolyDataFilter::GetEdgeAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngle() :
      op->vtkSmoothPolyDataFilter::GetEdgeAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundarySmoothing(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetBoundarySmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundarySmoothing() :
      op->vtkSmoothPolyDataFilter::GetBoundarySmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_BoundarySmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::BoundarySmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_BoundarySmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::BoundarySmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorScalars(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetGenerateErrorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorScalars() :
      op->vtkSmoothPolyDataFilter::GetGenerateErrorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorVectors(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetGenerateErrorVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorVectors() :
      op->vtkSmoothPolyDataFilter::GetGenerateErrorVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkSmoothPolyDataFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSmoothPolyDataFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSmoothPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkSmoothPolyDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSmoothPolyDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSmoothPolyDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSmoothPolyDataFilter\nC++: static vtkSmoothPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSmoothPolyDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSmoothPolyDataFilter\nC++: vtkSmoothPolyDataFilter *NewInstance()\n\n"},
  {"SetConvergence", PyvtkSmoothPolyDataFilter_SetConvergence, METH_VARARGS,
   "V.SetConvergence(float)\nC++: virtual void SetConvergence(double _arg)\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {"GetConvergenceMinValue", PyvtkSmoothPolyDataFilter_GetConvergenceMinValue, METH_VARARGS,
   "V.GetConvergenceMinValue() -> float\nC++: virtual double GetConvergenceMinValue()\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {"GetConvergenceMaxValue", PyvtkSmoothPolyDataFilter_GetConvergenceMaxValue, METH_VARARGS,
   "V.GetConvergenceMaxValue() -> float\nC++: virtual double GetConvergenceMaxValue()\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {"GetConvergence", PyvtkSmoothPolyDataFilter_GetConvergence, METH_VARARGS,
   "V.GetConvergence() -> float\nC++: virtual double GetConvergence()\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {"SetNumberOfIterations", PyvtkSmoothPolyDataFilter_SetNumberOfIterations, METH_VARARGS,
   "V.SetNumberOfIterations(int)\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {"GetNumberOfIterationsMinValue", PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "V.GetNumberOfIterationsMinValue() -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "V.GetNumberOfIterationsMaxValue() -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {"GetNumberOfIterations", PyvtkSmoothPolyDataFilter_GetNumberOfIterations, METH_VARARGS,
   "V.GetNumberOfIterations() -> int\nC++: virtual int GetNumberOfIterations()\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {"SetRelaxationFactor", PyvtkSmoothPolyDataFilter_SetRelaxationFactor, METH_VARARGS,
   "V.SetRelaxationFactor(float)\nC++: virtual void SetRelaxationFactor(double _arg)\n\nSpecify the relaxation factor for Laplacian smoothing. As in all\niterative methods, the stability of the process is sensitive to\nthis parameter. In general, small relaxation factors and large\nnumbers of iterations are more stable than larger relaxation\nfactors and smaller numbers of iterations.\n"},
  {"GetRelaxationFactor", PyvtkSmoothPolyDataFilter_GetRelaxationFactor, METH_VARARGS,
   "V.GetRelaxationFactor() -> float\nC++: virtual double GetRelaxationFactor()\n\nSpecify the relaxation factor for Laplacian smoothing. As in all\niterative methods, the stability of the process is sensitive to\nthis parameter. In general, small relaxation factors and large\nnumbers of iterations are more stable than larger relaxation\nfactors and smaller numbers of iterations.\n"},
  {"SetFeatureEdgeSmoothing", PyvtkSmoothPolyDataFilter_SetFeatureEdgeSmoothing, METH_VARARGS,
   "V.SetFeatureEdgeSmoothing(int)\nC++: virtual void SetFeatureEdgeSmoothing(vtkTypeBool _arg)\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"GetFeatureEdgeSmoothing", PyvtkSmoothPolyDataFilter_GetFeatureEdgeSmoothing, METH_VARARGS,
   "V.GetFeatureEdgeSmoothing() -> int\nC++: virtual vtkTypeBool GetFeatureEdgeSmoothing()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"FeatureEdgeSmoothingOn", PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOn, METH_VARARGS,
   "V.FeatureEdgeSmoothingOn()\nC++: virtual void FeatureEdgeSmoothingOn()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"FeatureEdgeSmoothingOff", PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOff, METH_VARARGS,
   "V.FeatureEdgeSmoothingOff()\nC++: virtual void FeatureEdgeSmoothingOff()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"SetFeatureAngle", PyvtkSmoothPolyDataFilter_SetFeatureAngle, METH_VARARGS,
   "V.SetFeatureAngle(float)\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngleMinValue", PyvtkSmoothPolyDataFilter_GetFeatureAngleMinValue, METH_VARARGS,
   "V.GetFeatureAngleMinValue() -> float\nC++: virtual double GetFeatureAngleMinValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngleMaxValue", PyvtkSmoothPolyDataFilter_GetFeatureAngleMaxValue, METH_VARARGS,
   "V.GetFeatureAngleMaxValue() -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngle", PyvtkSmoothPolyDataFilter_GetFeatureAngle, METH_VARARGS,
   "V.GetFeatureAngle() -> float\nC++: virtual double GetFeatureAngle()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"SetEdgeAngle", PyvtkSmoothPolyDataFilter_SetEdgeAngle, METH_VARARGS,
   "V.SetEdgeAngle(float)\nC++: virtual void SetEdgeAngle(double _arg)\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngleMinValue", PyvtkSmoothPolyDataFilter_GetEdgeAngleMinValue, METH_VARARGS,
   "V.GetEdgeAngleMinValue() -> float\nC++: virtual double GetEdgeAngleMinValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngleMaxValue", PyvtkSmoothPolyDataFilter_GetEdgeAngleMaxValue, METH_VARARGS,
   "V.GetEdgeAngleMaxValue() -> float\nC++: virtual double GetEdgeAngleMaxValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngle", PyvtkSmoothPolyDataFilter_GetEdgeAngle, METH_VARARGS,
   "V.GetEdgeAngle() -> float\nC++: virtual double GetEdgeAngle()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"SetBoundarySmoothing", PyvtkSmoothPolyDataFilter_SetBoundarySmoothing, METH_VARARGS,
   "V.SetBoundarySmoothing(int)\nC++: virtual void SetBoundarySmoothing(vtkTypeBool _arg)\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"GetBoundarySmoothing", PyvtkSmoothPolyDataFilter_GetBoundarySmoothing, METH_VARARGS,
   "V.GetBoundarySmoothing() -> int\nC++: virtual vtkTypeBool GetBoundarySmoothing()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"BoundarySmoothingOn", PyvtkSmoothPolyDataFilter_BoundarySmoothingOn, METH_VARARGS,
   "V.BoundarySmoothingOn()\nC++: virtual void BoundarySmoothingOn()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"BoundarySmoothingOff", PyvtkSmoothPolyDataFilter_BoundarySmoothingOff, METH_VARARGS,
   "V.BoundarySmoothingOff()\nC++: virtual void BoundarySmoothingOff()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"SetGenerateErrorScalars", PyvtkSmoothPolyDataFilter_SetGenerateErrorScalars, METH_VARARGS,
   "V.SetGenerateErrorScalars(int)\nC++: virtual void SetGenerateErrorScalars(vtkTypeBool _arg)\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GetGenerateErrorScalars", PyvtkSmoothPolyDataFilter_GetGenerateErrorScalars, METH_VARARGS,
   "V.GetGenerateErrorScalars() -> int\nC++: virtual vtkTypeBool GetGenerateErrorScalars()\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GenerateErrorScalarsOn", PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOn, METH_VARARGS,
   "V.GenerateErrorScalarsOn()\nC++: virtual void GenerateErrorScalarsOn()\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GenerateErrorScalarsOff", PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOff, METH_VARARGS,
   "V.GenerateErrorScalarsOff()\nC++: virtual void GenerateErrorScalarsOff()\n\nTurn on/off the generation of scalar distance values.\n"},
  {"SetGenerateErrorVectors", PyvtkSmoothPolyDataFilter_SetGenerateErrorVectors, METH_VARARGS,
   "V.SetGenerateErrorVectors(int)\nC++: virtual void SetGenerateErrorVectors(vtkTypeBool _arg)\n\nTurn on/off the generation of error vectors.\n"},
  {"GetGenerateErrorVectors", PyvtkSmoothPolyDataFilter_GetGenerateErrorVectors, METH_VARARGS,
   "V.GetGenerateErrorVectors() -> int\nC++: virtual vtkTypeBool GetGenerateErrorVectors()\n\nTurn on/off the generation of error vectors.\n"},
  {"GenerateErrorVectorsOn", PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOn, METH_VARARGS,
   "V.GenerateErrorVectorsOn()\nC++: virtual void GenerateErrorVectorsOn()\n\nTurn on/off the generation of error vectors.\n"},
  {"GenerateErrorVectorsOff", PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOff, METH_VARARGS,
   "V.GenerateErrorVectorsOff()\nC++: virtual void GenerateErrorVectorsOff()\n\nTurn on/off the generation of error vectors.\n"},
  {"SetSourceData", PyvtkSmoothPolyDataFilter_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *source)\n\nSpecify the source object which is used to constrain smoothing.\nThe source defines a surface that the input (as it is smoothed)\nis constrained to lie upon.\n"},
  {"GetSource", PyvtkSmoothPolyDataFilter_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nSpecify the source object which is used to constrain smoothing.\nThe source defines a surface that the input (as it is smoothed)\nis constrained to lie upon.\n"},
  {"SetOutputPointsPrecision", PyvtkSmoothPolyDataFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkSmoothPolyDataFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSmoothPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkSmoothPolyDataFilter", // tp_name
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
  PyvtkSmoothPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSmoothPolyDataFilter_StaticNew()
{
  return vtkSmoothPolyDataFilter::New();
}

PyObject *PyvtkSmoothPolyDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSmoothPolyDataFilter_Type, PyvtkSmoothPolyDataFilter_Methods,
    "vtkSmoothPolyDataFilter",
 &PyvtkSmoothPolyDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkSmoothPolyDataFilter_Type;

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

void PyVTKAddFile_vtkSmoothPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmoothPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSmoothPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

