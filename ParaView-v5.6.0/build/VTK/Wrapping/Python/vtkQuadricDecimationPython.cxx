// python wrapper for vtkQuadricDecimation
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
#include "vtkQuadricDecimation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadricDecimation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuadricDecimation_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkQuadricDecimation_Doc =
  "vtkQuadricDecimation - reduce the number of triangles in a mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkQuadricDecimation is a filter to reduce the number of triangles in\n"
  "a triangle mesh, forming a good approximation to the original\n"
  "geometry. The input to vtkQuadricDecimation is a vtkPolyData object,\n"
  "and only triangles are treated. If you desire to decimate polygonal\n"
  "meshes, first triangulate the polygons with vtkTriangleFilter.\n\n"
  "The algorithm is based on repeated edge collapses until the requested\n"
  "mesh reduction is achieved. Edges are placed in a priority queue\n"
  "based on the \"cost\" to delete the edge. The cost is an approximate\n"
  "measure of error (distance to the original surface)--described by the\n"
  "so-called quadric error measure. The quadric error measure is\n"
  "associated with each vertex of the mesh and represents a matrix of\n"
  "planes incident on that vertex. The distance of the planes to the\n"
  "vertex is the error in the position of the vertex (originally the\n"
  "vertex error iz zero). As edges are deleted, the quadric error\n"
  "measure associated with the two end points of the edge are summed\n"
  "(this combines the plane equations) and an optimal collapse point can\n"
  "be computed. Edges connected to the collapse point are then\n"
  "reinserted into the queue after computing the new cost to delete\n"
  "them. The process continues until the desired reduction level is\n"
  "reached or topological constraints prevent further reduction. Note\n"
  "that this basic algorithm can be extended to higher dimensions by\n"
  "taking into account variation in attributes (i.e., scalars, vectors,\n"
  "and so on).\n\n"
  "This paper is based on the work of Garland and Heckbert who first\n"
  "presented the quadric error measure at Siggraph '97 \"Surface\n"
  "Simplification Using Quadric Error Metrics\". For details of the\n"
  "algorithm Michael Garland's Ph.D. thesis is also recommended. Hughues\n"
  "Hoppe's Vis '99 paper, \"New Quadric Metric for Simplifying Meshes\n"
  "with Appearance Attributes\" is also a good take on the subject\n"
  "especially as it pertains to the error metric applied to attributes.\n\n"
  "@par Thanks: Thanks to Bradley Lowekamp of the National Library of\n"
  "Medicine/NIH for contributing this class.\n\n";


static PyObject *
PyvtkQuadricDecimation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadricDecimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadricDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadricDecimation *tempr = vtkQuadricDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadricDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadricDecimation::NewInstance());

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
PyvtkQuadricDecimation_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkQuadricDecimation::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkQuadricDecimation::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkQuadricDecimation::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetAttributeErrorMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeErrorMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeErrorMetric(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetAttributeErrorMetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetAttributeErrorMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeErrorMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeErrorMetric() :
      op->vtkQuadricDecimation::GetAttributeErrorMetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_AttributeErrorMetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributeErrorMetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttributeErrorMetricOn();
    }
    else
    {
      op->vtkQuadricDecimation::AttributeErrorMetricOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_AttributeErrorMetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributeErrorMetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttributeErrorMetricOff();
    }
    else
    {
      op->vtkQuadricDecimation::AttributeErrorMetricOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVolumePreservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumePreservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumePreservation(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetVolumePreservation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVolumePreservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumePreservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolumePreservation() :
      op->vtkQuadricDecimation::GetVolumePreservation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VolumePreservationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumePreservationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumePreservationOn();
    }
    else
    {
      op->vtkQuadricDecimation::VolumePreservationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VolumePreservationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumePreservationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumePreservationOff();
    }
    else
    {
      op->vtkQuadricDecimation::VolumePreservationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetScalarsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetScalarsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetScalarsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarsAttribute() :
      op->vtkQuadricDecimation::GetScalarsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_ScalarsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::ScalarsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_ScalarsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::ScalarsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVectorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetVectorsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVectorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorsAttribute() :
      op->vtkQuadricDecimation::GetVectorsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VectorsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VectorsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::VectorsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VectorsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VectorsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::VectorsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetNormalsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetNormalsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNormalsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalsAttribute() :
      op->vtkQuadricDecimation::GetNormalsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NormalsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::NormalsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NormalsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::NormalsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTCoordsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTCoordsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTCoordsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordsAttribute() :
      op->vtkQuadricDecimation::GetTCoordsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TCoordsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TCoordsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TCoordsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::TCoordsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TCoordsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TCoordsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TCoordsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::TCoordsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTensorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTensorsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTensorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorsAttribute() :
      op->vtkQuadricDecimation::GetTensorsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TensorsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::TensorsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TensorsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::TensorsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetScalarsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetScalarsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVectorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetVectorsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetNormalsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetNormalsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTCoordsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTCoordsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTensorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTensorsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetScalarsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarsWeight() :
      op->vtkQuadricDecimation::GetScalarsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVectorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVectorsWeight() :
      op->vtkQuadricDecimation::GetVectorsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNormalsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalsWeight() :
      op->vtkQuadricDecimation::GetNormalsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTCoordsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTCoordsWeight() :
      op->vtkQuadricDecimation::GetTCoordsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTensorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTensorsWeight() :
      op->vtkQuadricDecimation::GetTensorsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetActualReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetActualReduction() :
      op->vtkQuadricDecimation::GetActualReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadricDecimation_Methods[] = {
  {"IsTypeOf", PyvtkQuadricDecimation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuadricDecimation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuadricDecimation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuadricDecimation\nC++: static vtkQuadricDecimation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuadricDecimation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuadricDecimation\nC++: vtkQuadricDecimation *NewInstance()\n\n"},
  {"SetTargetReduction", PyvtkQuadricDecimation_SetTargetReduction, METH_VARARGS,
   "V.SetTargetReduction(float)\nC++: virtual void SetTargetReduction(double _arg)\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {"GetTargetReductionMinValue", PyvtkQuadricDecimation_GetTargetReductionMinValue, METH_VARARGS,
   "V.GetTargetReductionMinValue() -> float\nC++: virtual double GetTargetReductionMinValue()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {"GetTargetReductionMaxValue", PyvtkQuadricDecimation_GetTargetReductionMaxValue, METH_VARARGS,
   "V.GetTargetReductionMaxValue() -> float\nC++: virtual double GetTargetReductionMaxValue()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {"GetTargetReduction", PyvtkQuadricDecimation_GetTargetReduction, METH_VARARGS,
   "V.GetTargetReduction() -> float\nC++: virtual double GetTargetReduction()\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {"SetAttributeErrorMetric", PyvtkQuadricDecimation_SetAttributeErrorMetric, METH_VARARGS,
   "V.SetAttributeErrorMetric(int)\nC++: virtual void SetAttributeErrorMetric(vtkTypeBool _arg)\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {"GetAttributeErrorMetric", PyvtkQuadricDecimation_GetAttributeErrorMetric, METH_VARARGS,
   "V.GetAttributeErrorMetric() -> int\nC++: virtual vtkTypeBool GetAttributeErrorMetric()\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {"AttributeErrorMetricOn", PyvtkQuadricDecimation_AttributeErrorMetricOn, METH_VARARGS,
   "V.AttributeErrorMetricOn()\nC++: virtual void AttributeErrorMetricOn()\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {"AttributeErrorMetricOff", PyvtkQuadricDecimation_AttributeErrorMetricOff, METH_VARARGS,
   "V.AttributeErrorMetricOff()\nC++: virtual void AttributeErrorMetricOff()\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {"SetVolumePreservation", PyvtkQuadricDecimation_SetVolumePreservation, METH_VARARGS,
   "V.SetVolumePreservation(int)\nC++: virtual void SetVolumePreservation(vtkTypeBool _arg)\n\nDecide whether to activate volume preservation which greatly\nreduces errors in triangle normal direction. If off, volume\npreservation is disabled and if AttributeErrorMetric is active,\nthese errors can be large. By default VolumePreservation is off\nthe attribute errors are off.\n"},
  {"GetVolumePreservation", PyvtkQuadricDecimation_GetVolumePreservation, METH_VARARGS,
   "V.GetVolumePreservation() -> int\nC++: virtual vtkTypeBool GetVolumePreservation()\n\nDecide whether to activate volume preservation which greatly\nreduces errors in triangle normal direction. If off, volume\npreservation is disabled and if AttributeErrorMetric is active,\nthese errors can be large. By default VolumePreservation is off\nthe attribute errors are off.\n"},
  {"VolumePreservationOn", PyvtkQuadricDecimation_VolumePreservationOn, METH_VARARGS,
   "V.VolumePreservationOn()\nC++: virtual void VolumePreservationOn()\n\nDecide whether to activate volume preservation which greatly\nreduces errors in triangle normal direction. If off, volume\npreservation is disabled and if AttributeErrorMetric is active,\nthese errors can be large. By default VolumePreservation is off\nthe attribute errors are off.\n"},
  {"VolumePreservationOff", PyvtkQuadricDecimation_VolumePreservationOff, METH_VARARGS,
   "V.VolumePreservationOff()\nC++: virtual void VolumePreservationOff()\n\nDecide whether to activate volume preservation which greatly\nreduces errors in triangle normal direction. If off, volume\npreservation is disabled and if AttributeErrorMetric is active,\nthese errors can be large. By default VolumePreservation is off\nthe attribute errors are off.\n"},
  {"SetScalarsAttribute", PyvtkQuadricDecimation_SetScalarsAttribute, METH_VARARGS,
   "V.SetScalarsAttribute(int)\nC++: virtual void SetScalarsAttribute(vtkTypeBool _arg)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"GetScalarsAttribute", PyvtkQuadricDecimation_GetScalarsAttribute, METH_VARARGS,
   "V.GetScalarsAttribute() -> int\nC++: virtual vtkTypeBool GetScalarsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"ScalarsAttributeOn", PyvtkQuadricDecimation_ScalarsAttributeOn, METH_VARARGS,
   "V.ScalarsAttributeOn()\nC++: virtual void ScalarsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"ScalarsAttributeOff", PyvtkQuadricDecimation_ScalarsAttributeOff, METH_VARARGS,
   "V.ScalarsAttributeOff()\nC++: virtual void ScalarsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"SetVectorsAttribute", PyvtkQuadricDecimation_SetVectorsAttribute, METH_VARARGS,
   "V.SetVectorsAttribute(int)\nC++: virtual void SetVectorsAttribute(vtkTypeBool _arg)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"GetVectorsAttribute", PyvtkQuadricDecimation_GetVectorsAttribute, METH_VARARGS,
   "V.GetVectorsAttribute() -> int\nC++: virtual vtkTypeBool GetVectorsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"VectorsAttributeOn", PyvtkQuadricDecimation_VectorsAttributeOn, METH_VARARGS,
   "V.VectorsAttributeOn()\nC++: virtual void VectorsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"VectorsAttributeOff", PyvtkQuadricDecimation_VectorsAttributeOff, METH_VARARGS,
   "V.VectorsAttributeOff()\nC++: virtual void VectorsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"SetNormalsAttribute", PyvtkQuadricDecimation_SetNormalsAttribute, METH_VARARGS,
   "V.SetNormalsAttribute(int)\nC++: virtual void SetNormalsAttribute(vtkTypeBool _arg)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"GetNormalsAttribute", PyvtkQuadricDecimation_GetNormalsAttribute, METH_VARARGS,
   "V.GetNormalsAttribute() -> int\nC++: virtual vtkTypeBool GetNormalsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"NormalsAttributeOn", PyvtkQuadricDecimation_NormalsAttributeOn, METH_VARARGS,
   "V.NormalsAttributeOn()\nC++: virtual void NormalsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"NormalsAttributeOff", PyvtkQuadricDecimation_NormalsAttributeOff, METH_VARARGS,
   "V.NormalsAttributeOff()\nC++: virtual void NormalsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"SetTCoordsAttribute", PyvtkQuadricDecimation_SetTCoordsAttribute, METH_VARARGS,
   "V.SetTCoordsAttribute(int)\nC++: virtual void SetTCoordsAttribute(vtkTypeBool _arg)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"GetTCoordsAttribute", PyvtkQuadricDecimation_GetTCoordsAttribute, METH_VARARGS,
   "V.GetTCoordsAttribute() -> int\nC++: virtual vtkTypeBool GetTCoordsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"TCoordsAttributeOn", PyvtkQuadricDecimation_TCoordsAttributeOn, METH_VARARGS,
   "V.TCoordsAttributeOn()\nC++: virtual void TCoordsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"TCoordsAttributeOff", PyvtkQuadricDecimation_TCoordsAttributeOff, METH_VARARGS,
   "V.TCoordsAttributeOff()\nC++: virtual void TCoordsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"SetTensorsAttribute", PyvtkQuadricDecimation_SetTensorsAttribute, METH_VARARGS,
   "V.SetTensorsAttribute(int)\nC++: virtual void SetTensorsAttribute(vtkTypeBool _arg)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"GetTensorsAttribute", PyvtkQuadricDecimation_GetTensorsAttribute, METH_VARARGS,
   "V.GetTensorsAttribute() -> int\nC++: virtual vtkTypeBool GetTensorsAttribute()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"TensorsAttributeOn", PyvtkQuadricDecimation_TensorsAttributeOn, METH_VARARGS,
   "V.TensorsAttributeOn()\nC++: virtual void TensorsAttributeOn()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"TensorsAttributeOff", PyvtkQuadricDecimation_TensorsAttributeOff, METH_VARARGS,
   "V.TensorsAttributeOff()\nC++: virtual void TensorsAttributeOff()\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"SetScalarsWeight", PyvtkQuadricDecimation_SetScalarsWeight, METH_VARARGS,
   "V.SetScalarsWeight(float)\nC++: virtual void SetScalarsWeight(double _arg)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"SetVectorsWeight", PyvtkQuadricDecimation_SetVectorsWeight, METH_VARARGS,
   "V.SetVectorsWeight(float)\nC++: virtual void SetVectorsWeight(double _arg)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"SetNormalsWeight", PyvtkQuadricDecimation_SetNormalsWeight, METH_VARARGS,
   "V.SetNormalsWeight(float)\nC++: virtual void SetNormalsWeight(double _arg)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"SetTCoordsWeight", PyvtkQuadricDecimation_SetTCoordsWeight, METH_VARARGS,
   "V.SetTCoordsWeight(float)\nC++: virtual void SetTCoordsWeight(double _arg)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"SetTensorsWeight", PyvtkQuadricDecimation_SetTensorsWeight, METH_VARARGS,
   "V.SetTensorsWeight(float)\nC++: virtual void SetTensorsWeight(double _arg)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"GetScalarsWeight", PyvtkQuadricDecimation_GetScalarsWeight, METH_VARARGS,
   "V.GetScalarsWeight() -> float\nC++: virtual double GetScalarsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"GetVectorsWeight", PyvtkQuadricDecimation_GetVectorsWeight, METH_VARARGS,
   "V.GetVectorsWeight() -> float\nC++: virtual double GetVectorsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"GetNormalsWeight", PyvtkQuadricDecimation_GetNormalsWeight, METH_VARARGS,
   "V.GetNormalsWeight() -> float\nC++: virtual double GetNormalsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"GetTCoordsWeight", PyvtkQuadricDecimation_GetTCoordsWeight, METH_VARARGS,
   "V.GetTCoordsWeight() -> float\nC++: virtual double GetTCoordsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"GetTensorsWeight", PyvtkQuadricDecimation_GetTensorsWeight, METH_VARARGS,
   "V.GetTensorsWeight() -> float\nC++: virtual double GetTensorsWeight()\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"GetActualReduction", PyvtkQuadricDecimation_GetActualReduction, METH_VARARGS,
   "V.GetActualReduction() -> float\nC++: virtual double GetActualReduction()\n\nGet the actual reduction. This value is only valid after the\nfilter has executed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuadricDecimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkQuadricDecimation", // tp_name
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
  PyvtkQuadricDecimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadricDecimation_StaticNew()
{
  return vtkQuadricDecimation::New();
}

PyObject *PyvtkQuadricDecimation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuadricDecimation_Type, PyvtkQuadricDecimation_Methods,
    "vtkQuadricDecimation",
 &PyvtkQuadricDecimation_StaticNew);

  PyTypeObject *pytype = &PyvtkQuadricDecimation_Type;

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

void PyVTKAddFile_vtkQuadricDecimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadricDecimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadricDecimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

