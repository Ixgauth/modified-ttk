// python wrapper for vtkUnstructuredGridGeometryFilter
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
#include "vtkUnstructuredGridGeometryFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridGeometryFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridGeometryFilter_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridBaseAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridBaseAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridBaseAlgorithm_ClassNew
#endif

static const char *PyvtkUnstructuredGridGeometryFilter_Doc =
  "vtkUnstructuredGridGeometryFilter - extract geometry from an\nunstructured grid\n\n"
  "Superclass: vtkUnstructuredGridBaseAlgorithm\n\n"
  "vtkUnstructuredGridGeometryFilter is a filter that extracts geometry\n"
  "(and associated data) from an unstructured grid. It differs from\n"
  "vtkGeometryFilter by not tessellating higher order faces: 2D faces of\n"
  "quadratic 3D cells will be quadratic. A quadratic edge is extracted\n"
  "as a quadratic edge. For that purpose, the output of this filter is\n"
  "an unstructured grid, not a polydata. Also, the face of a voxel is a\n"
  "pixel, not a quad. Geometry is obtained as follows: all 0D, 1D, and\n"
  "2D cells are extracted. All 2D faces that are used by only one 3D\n"
  "cell (i.e., boundary faces) are extracted. It also is possible to\n"
  "specify conditions on point ids, cell ids, and on bounding box\n"
  "(referred to as \"Extent\") to control the extraction process.\n\n"
  "@warning\n"
  "When vtkUnstructuredGridGeometryFilter extracts cells (or boundaries\n"
  "of cells) it will (by default) merge duplicate vertices. This may\n"
  "cause problems in some cases. Turn merging off to prevent this from\n"
  "occurring.\n\n"
  "@sa\n"
  "vtkGeometryFilter\n\n";


static PyObject *
PyvtkUnstructuredGridGeometryFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridGeometryFilter *tempr = vtkUnstructuredGridGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridGeometryFilter::NewInstance());

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
PyvtkUnstructuredGridGeometryFilter_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointClipping(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetPointClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkUnstructuredGridGeometryFilter::GetPointClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::PointClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::PointClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellClipping(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetCellClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkUnstructuredGridGeometryFilter::GetCellClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::CellClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::CellClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtentClipping(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetExtentClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkUnstructuredGridGeometryFilter::GetExtentClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::ExtentClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::ExtentClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetDuplicateGhostCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateGhostCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuplicateGhostCellClipping(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetDuplicateGhostCellClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetDuplicateGhostCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateGhostCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateGhostCellClipping() :
      op->vtkUnstructuredGridGeometryFilter::GetDuplicateGhostCellClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_DuplicateGhostCellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateGhostCellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateGhostCellClippingOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::DuplicateGhostCellClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_DuplicateGhostCellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateGhostCellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateGhostCellClippingOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::DuplicateGhostCellClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMinimum(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetPointMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkUnstructuredGridGeometryFilter::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkUnstructuredGridGeometryFilter::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkUnstructuredGridGeometryFilter::GetPointMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMaximum(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetPointMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkUnstructuredGridGeometryFilter::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkUnstructuredGridGeometryFilter::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkUnstructuredGridGeometryFilter::GetPointMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellMinimum(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetCellMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkUnstructuredGridGeometryFilter::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkUnstructuredGridGeometryFilter::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkUnstructuredGridGeometryFilter::GetCellMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellMaximum(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetCellMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkUnstructuredGridGeometryFilter::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkUnstructuredGridGeometryFilter::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkUnstructuredGridGeometryFilter::GetCellMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetExtent(temp0);
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
PyvtkUnstructuredGridGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkUnstructuredGridGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridGeometryFilter_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkUnstructuredGridGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMerging(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkUnstructuredGridGeometryFilter::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkUnstructuredGridGeometryFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

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
      op->vtkUnstructuredGridGeometryFilter::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkUnstructuredGridGeometryFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalCellIdsName(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetOriginalCellIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalCellIdsName() :
      op->vtkUnstructuredGridGeometryFilter::GetOriginalCellIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalPointIdsName(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetOriginalPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalPointIdsName() :
      op->vtkUnstructuredGridGeometryFilter::GetOriginalPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkUnstructuredGridGeometryFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkUnstructuredGridGeometryFilter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGeometryFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGeometryFilter *op = static_cast<vtkUnstructuredGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkUnstructuredGridGeometryFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridGeometryFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridGeometryFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridGeometryFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUnstructuredGridGeometryFilter\nC++: static vtkUnstructuredGridGeometryFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridGeometryFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridGeometryFilter\nC++: vtkUnstructuredGridGeometryFilter *NewInstance()\n\n"},
  {"SetPointClipping", PyvtkUnstructuredGridGeometryFilter_SetPointClipping, METH_VARARGS,
   "V.SetPointClipping(int)\nC++: virtual void SetPointClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by point id.\n"},
  {"GetPointClipping", PyvtkUnstructuredGridGeometryFilter_GetPointClipping, METH_VARARGS,
   "V.GetPointClipping() -> int\nC++: virtual vtkTypeBool GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {"PointClippingOn", PyvtkUnstructuredGridGeometryFilter_PointClippingOn, METH_VARARGS,
   "V.PointClippingOn()\nC++: virtual void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {"PointClippingOff", PyvtkUnstructuredGridGeometryFilter_PointClippingOff, METH_VARARGS,
   "V.PointClippingOff()\nC++: virtual void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {"SetCellClipping", PyvtkUnstructuredGridGeometryFilter_SetCellClipping, METH_VARARGS,
   "V.SetCellClipping(int)\nC++: virtual void SetCellClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by cell id.\n"},
  {"GetCellClipping", PyvtkUnstructuredGridGeometryFilter_GetCellClipping, METH_VARARGS,
   "V.GetCellClipping() -> int\nC++: virtual vtkTypeBool GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"CellClippingOn", PyvtkUnstructuredGridGeometryFilter_CellClippingOn, METH_VARARGS,
   "V.CellClippingOn()\nC++: virtual void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"CellClippingOff", PyvtkUnstructuredGridGeometryFilter_CellClippingOff, METH_VARARGS,
   "V.CellClippingOff()\nC++: virtual void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"SetExtentClipping", PyvtkUnstructuredGridGeometryFilter_SetExtentClipping, METH_VARARGS,
   "V.SetExtentClipping(int)\nC++: virtual void SetExtentClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"GetExtentClipping", PyvtkUnstructuredGridGeometryFilter_GetExtentClipping, METH_VARARGS,
   "V.GetExtentClipping() -> int\nC++: virtual vtkTypeBool GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"ExtentClippingOn", PyvtkUnstructuredGridGeometryFilter_ExtentClippingOn, METH_VARARGS,
   "V.ExtentClippingOn()\nC++: virtual void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"ExtentClippingOff", PyvtkUnstructuredGridGeometryFilter_ExtentClippingOff, METH_VARARGS,
   "V.ExtentClippingOff()\nC++: virtual void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"SetDuplicateGhostCellClipping", PyvtkUnstructuredGridGeometryFilter_SetDuplicateGhostCellClipping, METH_VARARGS,
   "V.SetDuplicateGhostCellClipping(int)\nC++: virtual void SetDuplicateGhostCellClipping(vtkTypeBool _arg)\n\nTurn on/off clipping of ghost cells with type\nvtkDataSetAttributes::DUPLICATECELL. Defaults to on.\n"},
  {"GetDuplicateGhostCellClipping", PyvtkUnstructuredGridGeometryFilter_GetDuplicateGhostCellClipping, METH_VARARGS,
   "V.GetDuplicateGhostCellClipping() -> int\nC++: virtual vtkTypeBool GetDuplicateGhostCellClipping()\n\nTurn on/off clipping of ghost cells with type\nvtkDataSetAttributes::DUPLICATECELL. Defaults to on.\n"},
  {"DuplicateGhostCellClippingOn", PyvtkUnstructuredGridGeometryFilter_DuplicateGhostCellClippingOn, METH_VARARGS,
   "V.DuplicateGhostCellClippingOn()\nC++: virtual void DuplicateGhostCellClippingOn()\n\nTurn on/off clipping of ghost cells with type\nvtkDataSetAttributes::DUPLICATECELL. Defaults to on.\n"},
  {"DuplicateGhostCellClippingOff", PyvtkUnstructuredGridGeometryFilter_DuplicateGhostCellClippingOff, METH_VARARGS,
   "V.DuplicateGhostCellClippingOff()\nC++: virtual void DuplicateGhostCellClippingOff()\n\nTurn on/off clipping of ghost cells with type\nvtkDataSetAttributes::DUPLICATECELL. Defaults to on.\n"},
  {"SetPointMinimum", PyvtkUnstructuredGridGeometryFilter_SetPointMinimum, METH_VARARGS,
   "V.SetPointMinimum(int)\nC++: virtual void SetPointMinimum(vtkIdType _arg)\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMinValue", PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMinValue, METH_VARARGS,
   "V.GetPointMinimumMinValue() -> int\nC++: virtual vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetPointMinimumMaxValue, METH_VARARGS,
   "V.GetPointMinimumMaxValue() -> int\nC++: virtual vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimum", PyvtkUnstructuredGridGeometryFilter_GetPointMinimum, METH_VARARGS,
   "V.GetPointMinimum() -> int\nC++: virtual vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {"SetPointMaximum", PyvtkUnstructuredGridGeometryFilter_SetPointMaximum, METH_VARARGS,
   "V.SetPointMaximum(int)\nC++: virtual void SetPointMaximum(vtkIdType _arg)\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMinValue", PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMinValue, METH_VARARGS,
   "V.GetPointMaximumMinValue() -> int\nC++: virtual vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetPointMaximumMaxValue, METH_VARARGS,
   "V.GetPointMaximumMaxValue() -> int\nC++: virtual vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximum", PyvtkUnstructuredGridGeometryFilter_GetPointMaximum, METH_VARARGS,
   "V.GetPointMaximum() -> int\nC++: virtual vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {"SetCellMinimum", PyvtkUnstructuredGridGeometryFilter_SetCellMinimum, METH_VARARGS,
   "V.SetCellMinimum(int)\nC++: virtual void SetCellMinimum(vtkIdType _arg)\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMinValue", PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMinValue, METH_VARARGS,
   "V.GetCellMinimumMinValue() -> int\nC++: virtual vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetCellMinimumMaxValue, METH_VARARGS,
   "V.GetCellMinimumMaxValue() -> int\nC++: virtual vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimum", PyvtkUnstructuredGridGeometryFilter_GetCellMinimum, METH_VARARGS,
   "V.GetCellMinimum() -> int\nC++: virtual vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"SetCellMaximum", PyvtkUnstructuredGridGeometryFilter_SetCellMaximum, METH_VARARGS,
   "V.SetCellMaximum(int)\nC++: virtual void SetCellMaximum(vtkIdType _arg)\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMinValue", PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMinValue, METH_VARARGS,
   "V.GetCellMaximumMinValue() -> int\nC++: virtual vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMaxValue", PyvtkUnstructuredGridGeometryFilter_GetCellMaximumMaxValue, METH_VARARGS,
   "V.GetCellMaximumMaxValue() -> int\nC++: virtual vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximum", PyvtkUnstructuredGridGeometryFilter_GetCellMaximum, METH_VARARGS,
   "V.GetCellMaximum() -> int\nC++: virtual vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"SetExtent", PyvtkUnstructuredGridGeometryFilter_SetExtent, METH_VARARGS,
   "V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {"GetExtent", PyvtkUnstructuredGridGeometryFilter_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (float, ...)\nC++: double *GetExtent()\n\nSet / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to\nclip data.\n"},
  {"SetMerging", PyvtkUnstructuredGridGeometryFilter_SetMerging, METH_VARARGS,
   "V.SetMerging(int)\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkUnstructuredGridGeometryFilter_GetMerging, METH_VARARGS,
   "V.GetMerging() -> int\nC++: virtual vtkTypeBool GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOn", PyvtkUnstructuredGridGeometryFilter_MergingOn, METH_VARARGS,
   "V.MergingOn()\nC++: virtual void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOff", PyvtkUnstructuredGridGeometryFilter_MergingOff, METH_VARARGS,
   "V.MergingOff()\nC++: virtual void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"SetPassThroughCellIds", PyvtkUnstructuredGridGeometryFilter_SetPassThroughCellIds, METH_VARARGS,
   "V.SetPassThroughCellIds(int)\nC++: virtual void SetPassThroughCellIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"GetPassThroughCellIds", PyvtkUnstructuredGridGeometryFilter_GetPassThroughCellIds, METH_VARARGS,
   "V.GetPassThroughCellIds() -> int\nC++: virtual vtkTypeBool GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughCellIdsOn", PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOn, METH_VARARGS,
   "V.PassThroughCellIdsOn()\nC++: virtual void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughCellIdsOff", PyvtkUnstructuredGridGeometryFilter_PassThroughCellIdsOff, METH_VARARGS,
   "V.PassThroughCellIdsOff()\nC++: virtual void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"SetPassThroughPointIds", PyvtkUnstructuredGridGeometryFilter_SetPassThroughPointIds, METH_VARARGS,
   "V.SetPassThroughPointIds(int)\nC++: virtual void SetPassThroughPointIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"GetPassThroughPointIds", PyvtkUnstructuredGridGeometryFilter_GetPassThroughPointIds, METH_VARARGS,
   "V.GetPassThroughPointIds() -> int\nC++: virtual vtkTypeBool GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughPointIdsOn", PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOn, METH_VARARGS,
   "V.PassThroughPointIdsOn()\nC++: virtual void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"PassThroughPointIdsOff", PyvtkUnstructuredGridGeometryFilter_PassThroughPointIdsOff, METH_VARARGS,
   "V.PassThroughPointIdsOff()\nC++: virtual void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory. Note that PassThroughCellIds will be\nignored if UseStrips is on, since in that case each tringle strip\ncan represent more than on of the input cells.\n"},
  {"SetOriginalCellIdsName", PyvtkUnstructuredGridGeometryFilter_SetOriginalCellIdsName, METH_VARARGS,
   "V.SetOriginalCellIdsName(string)\nC++: virtual void SetOriginalCellIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalCellIdsName", PyvtkUnstructuredGridGeometryFilter_GetOriginalCellIdsName, METH_VARARGS,
   "V.GetOriginalCellIdsName() -> string\nC++: virtual const char *GetOriginalCellIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"SetOriginalPointIdsName", PyvtkUnstructuredGridGeometryFilter_SetOriginalPointIdsName, METH_VARARGS,
   "V.SetOriginalPointIdsName(string)\nC++: virtual void SetOriginalPointIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalPointIdsName", PyvtkUnstructuredGridGeometryFilter_GetOriginalPointIdsName, METH_VARARGS,
   "V.GetOriginalPointIdsName() -> string\nC++: virtual const char *GetOriginalPointIdsName()\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"SetLocator", PyvtkUnstructuredGridGeometryFilter_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkUnstructuredGridGeometryFilter_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkUnstructuredGridGeometryFilter_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkUnstructuredGridGeometryFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkUnstructuredGridGeometryFilter", // tp_name
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
  PyvtkUnstructuredGridGeometryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridGeometryFilter_StaticNew()
{
  return vtkUnstructuredGridGeometryFilter::New();
}

PyObject *PyvtkUnstructuredGridGeometryFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridGeometryFilter_Type, PyvtkUnstructuredGridGeometryFilter_Methods,
    "vtkUnstructuredGridGeometryFilter",
 &PyvtkUnstructuredGridGeometryFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridGeometryFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridBaseAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

