// python wrapper for vtkExtractCTHPart
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
#include "vtkExtractCTHPart.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractCTHPart(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractCTHPart_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractCTHPart_Doc =
  "vtkExtractCTHPart - Generates surface of a CTH volume fraction.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExtractCTHPart is a filter that is specialized for creating\n"
  "visualizations for a CTH simulation. CTH datasets comprise of either\n"
  "vtkNonOverlappingAMR or a multiblock of non-overlapping rectilinear\n"
  "grids with cell-data. Certain cell-arrays in the dataset identify the\n"
  "fraction of a particular material present in a given cell. This goal\n"
  "with this filter is to extract a surface contour demarcating the\n"
  "surface where the volume fraction for a particular material is equal\n"
  "to the user chosen value.\n\n"
  "To achieve that, this filter first converts the cell-data to\n"
  "point-data and then simply apply vtkContourFilter filter to extract\n"
  "the contour.\n\n"
  "vtkExtractCTHPart also provides the user with an option to clip the\n"
  "resultant contour using a vtkPlane. Internally, it uses\n"
  "vtkClipClosedSurface to clip the contour using the vtkPlane provided.\n\n"
  "The output of this filter is a vtkMultiBlockDataSet with one block\n"
  "corresponding to each volume-fraction array requested. Each block\n"
  "itself is a vtkPolyData for the contour generated on the current\n"
  "process (which may be null, for processes where no contour is\n"
  "generated).\n\n";


static PyObject *
PyvtkExtractCTHPart_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractCTHPart::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractCTHPart::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractCTHPart *tempr = vtkExtractCTHPart::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractCTHPart *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractCTHPart::NewInstance());

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
PyvtkExtractCTHPart_AddVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddVolumeArrayName(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::AddVolumeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveVolumeArrayNames();
    }
    else
    {
      op->vtkExtractCTHPart::RemoveVolumeArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetNumberOfVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVolumeArrayNames() :
      op->vtkExtractCTHPart::GetNumberOfVolumeArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVolumeArrayName(temp0) :
      op->vtkExtractCTHPart::GetVolumeArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

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
      op->vtkExtractCTHPart::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkExtractCTHPart::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkExtractCTHPart::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkExtractCTHPart::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkExtractCTHPart::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTriangles(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::SetGenerateTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkExtractCTHPart::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOn();
    }
    else
    {
      op->vtkExtractCTHPart::GenerateTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOff();
    }
    else
    {
      op->vtkExtractCTHPart::GenerateTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetGenerateSolidGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateSolidGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateSolidGeometry(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::SetGenerateSolidGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetGenerateSolidGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateSolidGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateSolidGeometry() :
      op->vtkExtractCTHPart::GetGenerateSolidGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GenerateSolidGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSolidGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateSolidGeometryOn();
    }
    else
    {
      op->vtkExtractCTHPart::GenerateSolidGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GenerateSolidGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSolidGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateSolidGeometryOff();
    }
    else
    {
      op->vtkExtractCTHPart::GenerateSolidGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetRemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveGhostCells(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::SetRemoveGhostCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetRemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveGhostCells() :
      op->vtkExtractCTHPart::GetRemoveGhostCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostCellsOn();
    }
    else
    {
      op->vtkExtractCTHPart::RemoveGhostCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostCellsOff();
    }
    else
    {
      op->vtkExtractCTHPart::RemoveGhostCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetClipPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetClipPlane(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::SetClipPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetClipPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetClipPlane() :
      op->vtkExtractCTHPart::GetClipPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractCTHPart::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeFractionSurfaceValue(temp0);
    }
    else
    {
      op->vtkExtractCTHPart::SetVolumeFractionSurfaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMinValue() :
      op->vtkExtractCTHPart::GetVolumeFractionSurfaceValueMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValueMaxValue() :
      op->vtkExtractCTHPart::GetVolumeFractionSurfaceValueMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkExtractCTHPart::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractCTHPart_Methods[] = {
  {"IsTypeOf", PyvtkExtractCTHPart_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractCTHPart_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractCTHPart_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractCTHPart\nC++: static vtkExtractCTHPart *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractCTHPart_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractCTHPart\nC++: vtkExtractCTHPart *NewInstance()\n\n"},
  {"AddVolumeArrayName", PyvtkExtractCTHPart_AddVolumeArrayName, METH_VARARGS,
   "V.AddVolumeArrayName(string)\nC++: void AddVolumeArrayName(const char *)\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {"RemoveVolumeArrayNames", PyvtkExtractCTHPart_RemoveVolumeArrayNames, METH_VARARGS,
   "V.RemoveVolumeArrayNames()\nC++: void RemoveVolumeArrayNames()\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {"GetNumberOfVolumeArrayNames", PyvtkExtractCTHPart_GetNumberOfVolumeArrayNames, METH_VARARGS,
   "V.GetNumberOfVolumeArrayNames() -> int\nC++: int GetNumberOfVolumeArrayNames()\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {"GetVolumeArrayName", PyvtkExtractCTHPart_GetVolumeArrayName, METH_VARARGS,
   "V.GetVolumeArrayName(int) -> string\nC++: const char *GetVolumeArrayName(int idx)\n\nSelect cell-data arrays (volume-fraction arrays) to contour with.\n"},
  {"SetController", PyvtkExtractCTHPart_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the parallel controller. By default, the value returned\nby vtkMultiBlockDataSetAlgorithm::GetGlobalController() when the\nobject is instantiated is used.\n"},
  {"GetController", PyvtkExtractCTHPart_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the parallel controller. By default, the value returned\nby vtkMultiBlockDataSetAlgorithm::GetGlobalController() when the\nobject is instantiated is used.\n"},
  {"SetCapping", PyvtkExtractCTHPart_SetCapping, METH_VARARGS,
   "V.SetCapping(bool)\nC++: virtual void SetCapping(bool _arg)\n\nOn by default, enables logic to cap the material volume.\n"},
  {"GetCapping", PyvtkExtractCTHPart_GetCapping, METH_VARARGS,
   "V.GetCapping() -> bool\nC++: virtual bool GetCapping()\n\nOn by default, enables logic to cap the material volume.\n"},
  {"CappingOn", PyvtkExtractCTHPart_CappingOn, METH_VARARGS,
   "V.CappingOn()\nC++: virtual void CappingOn()\n\nOn by default, enables logic to cap the material volume.\n"},
  {"CappingOff", PyvtkExtractCTHPart_CappingOff, METH_VARARGS,
   "V.CappingOff()\nC++: virtual void CappingOff()\n\nOn by default, enables logic to cap the material volume.\n"},
  {"SetGenerateTriangles", PyvtkExtractCTHPart_SetGenerateTriangles, METH_VARARGS,
   "V.SetGenerateTriangles(bool)\nC++: virtual void SetGenerateTriangles(bool _arg)\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {"GetGenerateTriangles", PyvtkExtractCTHPart_GetGenerateTriangles, METH_VARARGS,
   "V.GetGenerateTriangles() -> bool\nC++: virtual bool GetGenerateTriangles()\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {"GenerateTrianglesOn", PyvtkExtractCTHPart_GenerateTrianglesOn, METH_VARARGS,
   "V.GenerateTrianglesOn()\nC++: virtual void GenerateTrianglesOn()\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {"GenerateTrianglesOff", PyvtkExtractCTHPart_GenerateTrianglesOff, METH_VARARGS,
   "V.GenerateTrianglesOff()\nC++: virtual void GenerateTrianglesOff()\n\nTriangulate results. When set to false, the internal cut and\ncontour filters are told not to triangulate results if possible.\ntrue by default.\n"},
  {"SetGenerateSolidGeometry", PyvtkExtractCTHPart_SetGenerateSolidGeometry, METH_VARARGS,
   "V.SetGenerateSolidGeometry(bool)\nC++: virtual void SetGenerateSolidGeometry(bool _arg)\n\nGenerate solid geometry as results instead of 2D contours. When\nset to true, GenerateTriangles flag will be ignored. False by\ndefault.\n"},
  {"GetGenerateSolidGeometry", PyvtkExtractCTHPart_GetGenerateSolidGeometry, METH_VARARGS,
   "V.GetGenerateSolidGeometry() -> bool\nC++: virtual bool GetGenerateSolidGeometry()\n\nGenerate solid geometry as results instead of 2D contours. When\nset to true, GenerateTriangles flag will be ignored. False by\ndefault.\n"},
  {"GenerateSolidGeometryOn", PyvtkExtractCTHPart_GenerateSolidGeometryOn, METH_VARARGS,
   "V.GenerateSolidGeometryOn()\nC++: virtual void GenerateSolidGeometryOn()\n\nGenerate solid geometry as results instead of 2D contours. When\nset to true, GenerateTriangles flag will be ignored. False by\ndefault.\n"},
  {"GenerateSolidGeometryOff", PyvtkExtractCTHPart_GenerateSolidGeometryOff, METH_VARARGS,
   "V.GenerateSolidGeometryOff()\nC++: virtual void GenerateSolidGeometryOff()\n\nGenerate solid geometry as results instead of 2D contours. When\nset to true, GenerateTriangles flag will be ignored. False by\ndefault.\n"},
  {"SetRemoveGhostCells", PyvtkExtractCTHPart_SetRemoveGhostCells, METH_VARARGS,
   "V.SetRemoveGhostCells(bool)\nC++: virtual void SetRemoveGhostCells(bool _arg)\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {"GetRemoveGhostCells", PyvtkExtractCTHPart_GetRemoveGhostCells, METH_VARARGS,
   "V.GetRemoveGhostCells() -> bool\nC++: virtual bool GetRemoveGhostCells()\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {"RemoveGhostCellsOn", PyvtkExtractCTHPart_RemoveGhostCellsOn, METH_VARARGS,
   "V.RemoveGhostCellsOn()\nC++: virtual void RemoveGhostCellsOn()\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {"RemoveGhostCellsOff", PyvtkExtractCTHPart_RemoveGhostCellsOff, METH_VARARGS,
   "V.RemoveGhostCellsOff()\nC++: virtual void RemoveGhostCellsOff()\n\nWhen set to false, the output surfaces will not hide contours\nextracted from ghost cells. This results in overlapping contours\nbut overcomes holes. Default is set to true.\n"},
  {"SetClipPlane", PyvtkExtractCTHPart_SetClipPlane, METH_VARARGS,
   "V.SetClipPlane(vtkPlane)\nC++: void SetClipPlane(vtkPlane *clipPlane)\n\nSet, get or manipulate the implicit clipping plane.\n"},
  {"GetClipPlane", PyvtkExtractCTHPart_GetClipPlane, METH_VARARGS,
   "V.GetClipPlane() -> vtkPlane\nC++: virtual vtkPlane *GetClipPlane()\n\nSet, get or manipulate the implicit clipping plane.\n"},
  {"GetMTime", PyvtkExtractCTHPart_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nLook at clip plane to compute MTime.\n"},
  {"SetVolumeFractionSurfaceValue", PyvtkExtractCTHPart_SetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.SetVolumeFractionSurfaceValue(float)\nC++: virtual void SetVolumeFractionSurfaceValue(double _arg)\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {"GetVolumeFractionSurfaceValueMinValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMinValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValueMinValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValueMinValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {"GetVolumeFractionSurfaceValueMaxValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMaxValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValueMaxValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValueMaxValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {"GetVolumeFractionSurfaceValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractCTHPart_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkExtractCTHPart", // tp_name
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
  PyvtkExtractCTHPart_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractCTHPart_StaticNew()
{
  return vtkExtractCTHPart::New();
}

PyObject *PyvtkExtractCTHPart_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractCTHPart_Type, PyvtkExtractCTHPart_Methods,
    "vtkExtractCTHPart",
 &PyvtkExtractCTHPart_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractCTHPart_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractCTHPart(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractCTHPart_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractCTHPart", o) != 0)
  {
    Py_DECREF(o);
  }

}

