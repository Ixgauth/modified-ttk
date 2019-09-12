// python wrapper for vtkPVGeometryFilter
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
#include "vtkPVGeometryFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGeometryFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGeometryFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkPVGeometryFilter_Doc =
  "vtkPVGeometryFilter - Geometry filter that does outlines for volumes.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "This filter defaults to using the outline filter unless the input is\n"
  "a structured volume.\n\n";


static PyObject *
PyvtkPVGeometryFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGeometryFilter *tempr = vtkPVGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGeometryFilter::NewInstance());

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
PyvtkPVGeometryFilter_GetOutlineFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFlag() :
      op->vtkPVGeometryFilter::GetOutlineFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutline(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetUseOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOutline() :
      op->vtkPVGeometryFilter::GetUseOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetGenerateFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFeatureEdges(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetGenerateFeatureEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetGenerateFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateFeatureEdges() :
      op->vtkPVGeometryFilter::GetGenerateFeatureEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetBlockColorsDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColorsDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockColorsDistinctValues(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetBlockColorsDistinctValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetBlockColorsDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColorsDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockColorsDistinctValues() :
      op->vtkPVGeometryFilter::GetBlockColorsDistinctValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseStrips(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetUseStrips(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseStrips() :
      op->vtkPVGeometryFilter::GetUseStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseStripsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStripsOn();
    }
    else
    {
      op->vtkPVGeometryFilter::UseStripsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseStripsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStripsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStripsOff();
    }
    else
    {
      op->vtkPVGeometryFilter::UseStripsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetForceUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceUseStrips(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetForceUseStrips(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetForceUseStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceUseStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceUseStrips() :
      op->vtkPVGeometryFilter::GetForceUseStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_ForceUseStripsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUseStripsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceUseStripsOn();
    }
    else
    {
      op->vtkPVGeometryFilter::ForceUseStripsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_ForceUseStripsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUseStripsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceUseStripsOff();
    }
    else
    {
      op->vtkPVGeometryFilter::ForceUseStripsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellNormals(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetGenerateCellNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellNormals() :
      op->vtkPVGeometryFilter::GetGenerateCellNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateCellNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellNormalsOn();
    }
    else
    {
      op->vtkPVGeometryFilter::GenerateCellNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateCellNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellNormalsOff();
    }
    else
    {
      op->vtkPVGeometryFilter::GenerateCellNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulate(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetTriangulate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulate() :
      op->vtkPVGeometryFilter::GetTriangulate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_TriangulateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulateOn();
    }
    else
    {
      op->vtkPVGeometryFilter::TriangulateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_TriangulateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulateOff();
    }
    else
    {
      op->vtkPVGeometryFilter::TriangulateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonlinearSubdivisionLevel(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetNonlinearSubdivisionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonlinearSubdivisionLevel() :
      op->vtkPVGeometryFilter::GetNonlinearSubdivisionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVGeometryFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkPVGeometryFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkPVGeometryFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkPVGeometryFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughPointIds(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkPVGeometryFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkPVGeometryFilter::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkPVGeometryFilter::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateProcessIds(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetGenerateProcessIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateProcessIds() :
      op->vtkPVGeometryFilter::GetGenerateProcessIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateProcessIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateProcessIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateProcessIdsOn();
    }
    else
    {
      op->vtkPVGeometryFilter::GenerateProcessIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GenerateProcessIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateProcessIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateProcessIdsOff();
    }
    else
    {
      op->vtkPVGeometryFilter::GenerateProcessIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetHideInternalAMRFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideInternalAMRFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHideInternalAMRFaces(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetHideInternalAMRFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetHideInternalAMRFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideInternalAMRFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHideInternalAMRFaces() :
      op->vtkPVGeometryFilter::GetHideInternalAMRFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_HideInternalAMRFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideInternalAMRFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideInternalAMRFacesOn();
    }
    else
    {
      op->vtkPVGeometryFilter::HideInternalAMRFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_HideInternalAMRFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideInternalAMRFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideInternalAMRFacesOff();
    }
    else
    {
      op->vtkPVGeometryFilter::HideInternalAMRFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_SetUseNonOverlappingAMRMetaDataForOutlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNonOverlappingAMRMetaDataForOutlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNonOverlappingAMRMetaDataForOutlines(temp0);
    }
    else
    {
      op->vtkPVGeometryFilter::SetUseNonOverlappingAMRMetaDataForOutlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_GetUseNonOverlappingAMRMetaDataForOutlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNonOverlappingAMRMetaDataForOutlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseNonOverlappingAMRMetaDataForOutlines() :
      op->vtkPVGeometryFilter::GetUseNonOverlappingAMRMetaDataForOutlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonOverlappingAMRMetaDataForOutlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNonOverlappingAMRMetaDataForOutlinesOn();
    }
    else
    {
      op->vtkPVGeometryFilter::UseNonOverlappingAMRMetaDataForOutlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonOverlappingAMRMetaDataForOutlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeometryFilter *op = static_cast<vtkPVGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNonOverlappingAMRMetaDataForOutlinesOff();
    }
    else
    {
      op->vtkPVGeometryFilter::UseNonOverlappingAMRMetaDataForOutlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_POINT_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_OFFSETS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::POINT_OFFSETS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_VERTS_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VERTS_OFFSETS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::VERTS_OFFSETS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_LINES_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LINES_OFFSETS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::LINES_OFFSETS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_POLYS_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POLYS_OFFSETS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::POLYS_OFFSETS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeometryFilter_STRIPS_OFFSETS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "STRIPS_OFFSETS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkPVGeometryFilter::STRIPS_OFFSETS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkPVGeometryFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGeometryFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGeometryFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGeometryFilter\nC++: static vtkPVGeometryFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGeometryFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGeometryFilter\nC++: vtkPVGeometryFilter *NewInstance()\n\n"},
  {"GetOutlineFlag", PyvtkPVGeometryFilter_GetOutlineFlag, METH_VARARGS,
   "V.GetOutlineFlag() -> int\nC++: virtual int GetOutlineFlag()\n\nThis flag is set during the execute method.  It indicates that\nthe input was 3d and an outline representation was used.\n"},
  {"SetUseOutline", PyvtkPVGeometryFilter_SetUseOutline, METH_VARARGS,
   "V.SetUseOutline(int)\nC++: virtual void SetUseOutline(int _arg)\n\nSet/get whether to produce outline (vs. surface).\n"},
  {"GetUseOutline", PyvtkPVGeometryFilter_GetUseOutline, METH_VARARGS,
   "V.GetUseOutline() -> int\nC++: virtual int GetUseOutline()\n\nSet/get whether to produce outline (vs. surface).\n"},
  {"SetGenerateFeatureEdges", PyvtkPVGeometryFilter_SetGenerateFeatureEdges, METH_VARARGS,
   "V.SetGenerateFeatureEdges(bool)\nC++: virtual void SetGenerateFeatureEdges(bool _arg)\n\nSet/get whether to produce feature edges (vs. surface). If both\nthis and UseOutline are true, then an outline will be produced.\n"},
  {"GetGenerateFeatureEdges", PyvtkPVGeometryFilter_GetGenerateFeatureEdges, METH_VARARGS,
   "V.GetGenerateFeatureEdges() -> bool\nC++: virtual bool GetGenerateFeatureEdges()\n\nSet/get whether to produce feature edges (vs. surface). If both\nthis and UseOutline are true, then an outline will be produced.\n"},
  {"SetBlockColorsDistinctValues", PyvtkPVGeometryFilter_SetBlockColorsDistinctValues, METH_VARARGS,
   "V.SetBlockColorsDistinctValues(int)\nC++: virtual void SetBlockColorsDistinctValues(int _arg)\n\nDetermines the number of distinct values in vtkBlockColors\n"},
  {"GetBlockColorsDistinctValues", PyvtkPVGeometryFilter_GetBlockColorsDistinctValues, METH_VARARGS,
   "V.GetBlockColorsDistinctValues() -> int\nC++: virtual int GetBlockColorsDistinctValues()\n\nDetermines the number of distinct values in vtkBlockColors\n"},
  {"SetUseStrips", PyvtkPVGeometryFilter_SetUseStrips, METH_VARARGS,
   "V.SetUseStrips(int)\nC++: void SetUseStrips(int)\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"GetUseStrips", PyvtkPVGeometryFilter_GetUseStrips, METH_VARARGS,
   "V.GetUseStrips() -> int\nC++: virtual int GetUseStrips()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"UseStripsOn", PyvtkPVGeometryFilter_UseStripsOn, METH_VARARGS,
   "V.UseStripsOn()\nC++: virtual void UseStripsOn()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"UseStripsOff", PyvtkPVGeometryFilter_UseStripsOff, METH_VARARGS,
   "V.UseStripsOff()\nC++: virtual void UseStripsOff()\n\nWhen input is structured data, this flag will generate faces with\ntriangle strips.  This should render faster and use less memory,\nbut no cell data is copied.  By default, UseStrips is Off.\n"},
  {"SetForceUseStrips", PyvtkPVGeometryFilter_SetForceUseStrips, METH_VARARGS,
   "V.SetForceUseStrips(int)\nC++: void SetForceUseStrips(int)\n\nMakes set use strips call modified after it changes the setting.\n"},
  {"GetForceUseStrips", PyvtkPVGeometryFilter_GetForceUseStrips, METH_VARARGS,
   "V.GetForceUseStrips() -> int\nC++: virtual int GetForceUseStrips()\n\nMakes set use strips call modified after it changes the setting.\n"},
  {"ForceUseStripsOn", PyvtkPVGeometryFilter_ForceUseStripsOn, METH_VARARGS,
   "V.ForceUseStripsOn()\nC++: virtual void ForceUseStripsOn()\n\nMakes set use strips call modified after it changes the setting.\n"},
  {"ForceUseStripsOff", PyvtkPVGeometryFilter_ForceUseStripsOff, METH_VARARGS,
   "V.ForceUseStripsOff()\nC++: virtual void ForceUseStripsOff()\n\nMakes set use strips call modified after it changes the setting.\n"},
  {"SetGenerateCellNormals", PyvtkPVGeometryFilter_SetGenerateCellNormals, METH_VARARGS,
   "V.SetGenerateCellNormals(int)\nC++: virtual void SetGenerateCellNormals(int _arg)\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {"GetGenerateCellNormals", PyvtkPVGeometryFilter_GetGenerateCellNormals, METH_VARARGS,
   "V.GetGenerateCellNormals() -> int\nC++: virtual int GetGenerateCellNormals()\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {"GenerateCellNormalsOn", PyvtkPVGeometryFilter_GenerateCellNormalsOn, METH_VARARGS,
   "V.GenerateCellNormalsOn()\nC++: virtual void GenerateCellNormalsOn()\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {"GenerateCellNormalsOff", PyvtkPVGeometryFilter_GenerateCellNormalsOff, METH_VARARGS,
   "V.GenerateCellNormalsOff()\nC++: virtual void GenerateCellNormalsOff()\n\nWhether to generate cell normals.  They can only be used for poly\ncells now.  This option does nothing if the output contains\nlines, verts, or strips.\n"},
  {"SetTriangulate", PyvtkPVGeometryFilter_SetTriangulate, METH_VARARGS,
   "V.SetTriangulate(int)\nC++: virtual void SetTriangulate(int val)\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons. This option has no\neffect when using OpenGL2 rendering backend. OpenGL2 rendering\nalways triangulates polygonal meshes.\n"},
  {"GetTriangulate", PyvtkPVGeometryFilter_GetTriangulate, METH_VARARGS,
   "V.GetTriangulate() -> int\nC++: virtual int GetTriangulate()\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons. This option has no\neffect when using OpenGL2 rendering backend. OpenGL2 rendering\nalways triangulates polygonal meshes.\n"},
  {"TriangulateOn", PyvtkPVGeometryFilter_TriangulateOn, METH_VARARGS,
   "V.TriangulateOn()\nC++: virtual void TriangulateOn()\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons. This option has no\neffect when using OpenGL2 rendering backend. OpenGL2 rendering\nalways triangulates polygonal meshes.\n"},
  {"TriangulateOff", PyvtkPVGeometryFilter_TriangulateOff, METH_VARARGS,
   "V.TriangulateOff()\nC++: virtual void TriangulateOff()\n\nWhether to triangulate mesh for rendering. This parameter avoid\nrendering issues of non-convex polygons. This option has no\neffect when using OpenGL2 rendering backend. OpenGL2 rendering\nalways triangulates polygonal meshes.\n"},
  {"SetNonlinearSubdivisionLevel", PyvtkPVGeometryFilter_SetNonlinearSubdivisionLevel, METH_VARARGS,
   "V.SetNonlinearSubdivisionLevel(int)\nC++: virtual void SetNonlinearSubdivisionLevel(int)\n\nNonlinear faces are approximated with flat polygons.  This\nparameter controls how many times to subdivide nonlinear surface\ncells.  Higher subdivisions generate closer approximations but\ntake more memory and rendering time.  Subdivision is recursive,\nso the number of output polygons can grow exponentially with this\nparameter.\n"},
  {"GetNonlinearSubdivisionLevel", PyvtkPVGeometryFilter_GetNonlinearSubdivisionLevel, METH_VARARGS,
   "V.GetNonlinearSubdivisionLevel() -> int\nC++: virtual int GetNonlinearSubdivisionLevel()\n\nNonlinear faces are approximated with flat polygons.  This\nparameter controls how many times to subdivide nonlinear surface\ncells.  Higher subdivisions generate closer approximations but\ntake more memory and rendering time.  Subdivision is recursive,\nso the number of output polygons can grow exponentially with this\nparameter.\n"},
  {"SetController", PyvtkPVGeometryFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPVGeometryFilter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {"SetPassThroughCellIds", PyvtkPVGeometryFilter_SetPassThroughCellIds, METH_VARARGS,
   "V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {"GetPassThroughCellIds", PyvtkPVGeometryFilter_GetPassThroughCellIds, METH_VARARGS,
   "V.GetPassThroughCellIds() -> int\nC++: virtual int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {"PassThroughCellIdsOn", PyvtkPVGeometryFilter_PassThroughCellIdsOn, METH_VARARGS,
   "V.PassThroughCellIdsOn()\nC++: virtual void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {"PassThroughCellIdsOff", PyvtkPVGeometryFilter_PassThroughCellIdsOff, METH_VARARGS,
   "V.PassThroughCellIdsOff()\nC++: virtual void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking but it takes memory.\nThe default is on.\n"},
  {"SetPassThroughPointIds", PyvtkPVGeometryFilter_SetPassThroughPointIds, METH_VARARGS,
   "V.SetPassThroughPointIds(int)\nC++: void SetPassThroughPointIds(int)\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {"GetPassThroughPointIds", PyvtkPVGeometryFilter_GetPassThroughPointIds, METH_VARARGS,
   "V.GetPassThroughPointIds() -> int\nC++: virtual int GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {"PassThroughPointIdsOn", PyvtkPVGeometryFilter_PassThroughPointIdsOn, METH_VARARGS,
   "V.PassThroughPointIdsOn()\nC++: virtual void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {"PassThroughPointIdsOff", PyvtkPVGeometryFilter_PassThroughPointIdsOff, METH_VARARGS,
   "V.PassThroughPointIdsOff()\nC++: virtual void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking but it takes\nmemory. The default is on.\n"},
  {"SetGenerateProcessIds", PyvtkPVGeometryFilter_SetGenerateProcessIds, METH_VARARGS,
   "V.SetGenerateProcessIds(bool)\nC++: virtual void SetGenerateProcessIds(bool _arg)\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {"GetGenerateProcessIds", PyvtkPVGeometryFilter_GetGenerateProcessIds, METH_VARARGS,
   "V.GetGenerateProcessIds() -> bool\nC++: virtual bool GetGenerateProcessIds()\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {"GenerateProcessIdsOn", PyvtkPVGeometryFilter_GenerateProcessIdsOn, METH_VARARGS,
   "V.GenerateProcessIdsOn()\nC++: virtual void GenerateProcessIdsOn()\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {"GenerateProcessIdsOff", PyvtkPVGeometryFilter_GenerateProcessIdsOff, METH_VARARGS,
   "V.GenerateProcessIdsOff()\nC++: virtual void GenerateProcessIdsOff()\n\nIf on, point arrays named vtkProcessId is added.\n"},
  {"SetHideInternalAMRFaces", PyvtkPVGeometryFilter_SetHideInternalAMRFaces, METH_VARARGS,
   "V.SetHideInternalAMRFaces(bool)\nC++: virtual void SetHideInternalAMRFaces(bool _arg)\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {"GetHideInternalAMRFaces", PyvtkPVGeometryFilter_GetHideInternalAMRFaces, METH_VARARGS,
   "V.GetHideInternalAMRFaces() -> bool\nC++: virtual bool GetHideInternalAMRFaces()\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {"HideInternalAMRFacesOn", PyvtkPVGeometryFilter_HideInternalAMRFacesOn, METH_VARARGS,
   "V.HideInternalAMRFacesOn()\nC++: virtual void HideInternalAMRFacesOn()\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {"HideInternalAMRFacesOff", PyvtkPVGeometryFilter_HideInternalAMRFacesOff, METH_VARARGS,
   "V.HideInternalAMRFacesOff()\nC++: virtual void HideInternalAMRFacesOff()\n\nThis property affects the way AMR outlines and faces are\ngenerated. When set to true (default), internal data-set\nfaces/outlines for datasets within the AMR grids are hidden. Set\nit to false to see boxes for all the datasets in the AMR,\ninternal or otherwise.\n"},
  {"SetUseNonOverlappingAMRMetaDataForOutlines", PyvtkPVGeometryFilter_SetUseNonOverlappingAMRMetaDataForOutlines, METH_VARARGS,
   "V.SetUseNonOverlappingAMRMetaDataForOutlines(bool)\nC++: virtual void SetUseNonOverlappingAMRMetaDataForOutlines(\n    bool _arg)\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {"GetUseNonOverlappingAMRMetaDataForOutlines", PyvtkPVGeometryFilter_GetUseNonOverlappingAMRMetaDataForOutlines, METH_VARARGS,
   "V.GetUseNonOverlappingAMRMetaDataForOutlines() -> bool\nC++: virtual bool GetUseNonOverlappingAMRMetaDataForOutlines()\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {"UseNonOverlappingAMRMetaDataForOutlinesOn", PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOn, METH_VARARGS,
   "V.UseNonOverlappingAMRMetaDataForOutlinesOn()\nC++: virtual void UseNonOverlappingAMRMetaDataForOutlinesOn()\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {"UseNonOverlappingAMRMetaDataForOutlinesOff", PyvtkPVGeometryFilter_UseNonOverlappingAMRMetaDataForOutlinesOff, METH_VARARGS,
   "V.UseNonOverlappingAMRMetaDataForOutlinesOff()\nC++: virtual void UseNonOverlappingAMRMetaDataForOutlinesOff()\n\nFor overlapping AMR, this property controls affects the way AMR\noutlines are generated. When set to true (default), it uses the\noverlapping AMR meta-data to identify the blocks present in the\nAMR. Which implies that even if the input did not fill in the\nuniform grids for all datasets in the AMR, this filter can\ngenerate outlines using the metadata alone. When set to false,\nthe filter will only generate outlines for datasets that are\nactually present. Note, this only affects overlapping AMR.\n"},
  {"POINT_OFFSETS", PyvtkPVGeometryFilter_POINT_OFFSETS, METH_VARARGS,
   "V.POINT_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *POINT_OFFSETS()\n\n"},
  {"VERTS_OFFSETS", PyvtkPVGeometryFilter_VERTS_OFFSETS, METH_VARARGS,
   "V.VERTS_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *VERTS_OFFSETS()\n\n"},
  {"LINES_OFFSETS", PyvtkPVGeometryFilter_LINES_OFFSETS, METH_VARARGS,
   "V.LINES_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *LINES_OFFSETS()\n\n"},
  {"POLYS_OFFSETS", PyvtkPVGeometryFilter_POLYS_OFFSETS, METH_VARARGS,
   "V.POLYS_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *POLYS_OFFSETS()\n\n"},
  {"STRIPS_OFFSETS", PyvtkPVGeometryFilter_STRIPS_OFFSETS, METH_VARARGS,
   "V.STRIPS_OFFSETS() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *STRIPS_OFFSETS()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVGeometryFilter", // tp_name
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
  PyvtkPVGeometryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGeometryFilter_StaticNew()
{
  return vtkPVGeometryFilter::New();
}

PyObject *PyvtkPVGeometryFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGeometryFilter_Type, PyvtkPVGeometryFilter_Methods,
    "vtkPVGeometryFilter",
 &PyvtkPVGeometryFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGeometryFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

