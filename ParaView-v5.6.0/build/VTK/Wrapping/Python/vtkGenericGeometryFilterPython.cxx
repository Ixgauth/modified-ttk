// python wrapper for vtkGenericGeometryFilter
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
#include "vtkGenericGeometryFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericGeometryFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericGeometryFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGenericGeometryFilter_Doc =
  "vtkGenericGeometryFilter - extract geometry from data (or convert\ndata to polygonal type)\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGenericGeometryFilter is a general-purpose filter to extract\n"
  "geometry (and associated data) from any type of dataset. Geometry is\n"
  "obtained as follows: all 0D, 1D, and 2D cells are extracted. All 2D\n"
  "faces that are used by only one 3D cell (i.e., boundary faces) are\n"
  "extracted. It also is possible to specify conditions on point ids,\n"
  "cell ids, and on bounding box (referred to as \"Extent\") to control\n"
  "the extraction process.\n\n"
  "This filter also may be used to convert any type of data to polygonal\n"
  "type. The conversion process may be less than satisfactory for some\n"
  "3D datasets. For example, this filter will extract the outer surface\n"
  "of a volume or structured grid dataset. (For structured data you may\n"
  "want to use vtkImageDataGeometryFilter,\n"
  "vtkStructuredGridGeometryFilter, vtkExtractUnstructuredGrid,\n"
  "vtkRectilinearGridGeometryFilter, or vtkExtractVOI.)\n\n"
  "@warning\n"
  "When vtkGenericGeometryFilter extracts cells (or boundaries of cells)\n"
  "it will (by default) merge duplicate vertices. This may cause\n"
  "problems in some cases. For example, if you've run vtkPolyDataNormals\n"
  "to generate normals, which may split meshes and create duplicate\n"
  "vertices, vtkGenericGeometryFilter will merge these points back\n"
  "together. Turn merging off to prevent this from occurring.\n\n"
  "@sa\n"
  "vtkImageDataGeometryFilter vtkStructuredGridGeometryFilter\n"
  "vtkExtractGeometry vtkExtractVOI\n\n";


static PyObject *
PyvtkGenericGeometryFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericGeometryFilter *tempr = vtkGenericGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericGeometryFilter::NewInstance());

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
PyvtkGenericGeometryFilter_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetPointClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkGenericGeometryFilter::GetPointClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOn();
    }
    else
    {
      op->vtkGenericGeometryFilter::PointClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOff();
    }
    else
    {
      op->vtkGenericGeometryFilter::PointClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetCellClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkGenericGeometryFilter::GetCellClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOn();
    }
    else
    {
      op->vtkGenericGeometryFilter::CellClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOff();
    }
    else
    {
      op->vtkGenericGeometryFilter::CellClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetExtentClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkGenericGeometryFilter::GetExtentClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOn();
    }
    else
    {
      op->vtkGenericGeometryFilter::ExtentClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOff();
    }
    else
    {
      op->vtkGenericGeometryFilter::ExtentClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetPointMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkGenericGeometryFilter::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkGenericGeometryFilter::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkGenericGeometryFilter::GetPointMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetPointMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkGenericGeometryFilter::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkGenericGeometryFilter::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkGenericGeometryFilter::GetPointMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetCellMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkGenericGeometryFilter::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkGenericGeometryFilter::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkGenericGeometryFilter::GetCellMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetCellMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkGenericGeometryFilter::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkGenericGeometryFilter::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkGenericGeometryFilter::GetCellMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetExtent(temp0);
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
PyvtkGenericGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGenericGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkGenericGeometryFilter_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}



static PyObject *
PyvtkGenericGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkGenericGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkGenericGeometryFilter::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkGenericGeometryFilter::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkGenericGeometryFilter::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkGenericGeometryFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkGenericGeometryFilter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericGeometryFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

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
      op->vtkGenericGeometryFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkGenericGeometryFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkGenericGeometryFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGeometryFilter *op = static_cast<vtkGenericGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkGenericGeometryFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkGenericGeometryFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericGeometryFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericGeometryFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericGeometryFilter\nC++: static vtkGenericGeometryFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericGeometryFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericGeometryFilter\nC++: vtkGenericGeometryFilter *NewInstance()\n\n"},
  {"SetPointClipping", PyvtkGenericGeometryFilter_SetPointClipping, METH_VARARGS,
   "V.SetPointClipping(int)\nC++: virtual void SetPointClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by point id.\n"},
  {"GetPointClipping", PyvtkGenericGeometryFilter_GetPointClipping, METH_VARARGS,
   "V.GetPointClipping() -> int\nC++: virtual vtkTypeBool GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {"PointClippingOn", PyvtkGenericGeometryFilter_PointClippingOn, METH_VARARGS,
   "V.PointClippingOn()\nC++: virtual void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {"PointClippingOff", PyvtkGenericGeometryFilter_PointClippingOff, METH_VARARGS,
   "V.PointClippingOff()\nC++: virtual void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {"SetCellClipping", PyvtkGenericGeometryFilter_SetCellClipping, METH_VARARGS,
   "V.SetCellClipping(int)\nC++: virtual void SetCellClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by cell id.\n"},
  {"GetCellClipping", PyvtkGenericGeometryFilter_GetCellClipping, METH_VARARGS,
   "V.GetCellClipping() -> int\nC++: virtual vtkTypeBool GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"CellClippingOn", PyvtkGenericGeometryFilter_CellClippingOn, METH_VARARGS,
   "V.CellClippingOn()\nC++: virtual void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"CellClippingOff", PyvtkGenericGeometryFilter_CellClippingOff, METH_VARARGS,
   "V.CellClippingOff()\nC++: virtual void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"SetExtentClipping", PyvtkGenericGeometryFilter_SetExtentClipping, METH_VARARGS,
   "V.SetExtentClipping(int)\nC++: virtual void SetExtentClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"GetExtentClipping", PyvtkGenericGeometryFilter_GetExtentClipping, METH_VARARGS,
   "V.GetExtentClipping() -> int\nC++: virtual vtkTypeBool GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"ExtentClippingOn", PyvtkGenericGeometryFilter_ExtentClippingOn, METH_VARARGS,
   "V.ExtentClippingOn()\nC++: virtual void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"ExtentClippingOff", PyvtkGenericGeometryFilter_ExtentClippingOff, METH_VARARGS,
   "V.ExtentClippingOff()\nC++: virtual void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"SetPointMinimum", PyvtkGenericGeometryFilter_SetPointMinimum, METH_VARARGS,
   "V.SetPointMinimum(int)\nC++: virtual void SetPointMinimum(vtkIdType _arg)\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMinValue", PyvtkGenericGeometryFilter_GetPointMinimumMinValue, METH_VARARGS,
   "V.GetPointMinimumMinValue() -> int\nC++: virtual vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMaxValue", PyvtkGenericGeometryFilter_GetPointMinimumMaxValue, METH_VARARGS,
   "V.GetPointMinimumMaxValue() -> int\nC++: virtual vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimum", PyvtkGenericGeometryFilter_GetPointMinimum, METH_VARARGS,
   "V.GetPointMinimum() -> int\nC++: virtual vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {"SetPointMaximum", PyvtkGenericGeometryFilter_SetPointMaximum, METH_VARARGS,
   "V.SetPointMaximum(int)\nC++: virtual void SetPointMaximum(vtkIdType _arg)\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMinValue", PyvtkGenericGeometryFilter_GetPointMaximumMinValue, METH_VARARGS,
   "V.GetPointMaximumMinValue() -> int\nC++: virtual vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMaxValue", PyvtkGenericGeometryFilter_GetPointMaximumMaxValue, METH_VARARGS,
   "V.GetPointMaximumMaxValue() -> int\nC++: virtual vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximum", PyvtkGenericGeometryFilter_GetPointMaximum, METH_VARARGS,
   "V.GetPointMaximum() -> int\nC++: virtual vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {"SetCellMinimum", PyvtkGenericGeometryFilter_SetCellMinimum, METH_VARARGS,
   "V.SetCellMinimum(int)\nC++: virtual void SetCellMinimum(vtkIdType _arg)\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMinValue", PyvtkGenericGeometryFilter_GetCellMinimumMinValue, METH_VARARGS,
   "V.GetCellMinimumMinValue() -> int\nC++: virtual vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMaxValue", PyvtkGenericGeometryFilter_GetCellMinimumMaxValue, METH_VARARGS,
   "V.GetCellMinimumMaxValue() -> int\nC++: virtual vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimum", PyvtkGenericGeometryFilter_GetCellMinimum, METH_VARARGS,
   "V.GetCellMinimum() -> int\nC++: virtual vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"SetCellMaximum", PyvtkGenericGeometryFilter_SetCellMaximum, METH_VARARGS,
   "V.SetCellMaximum(int)\nC++: virtual void SetCellMaximum(vtkIdType _arg)\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMinValue", PyvtkGenericGeometryFilter_GetCellMaximumMinValue, METH_VARARGS,
   "V.GetCellMaximumMinValue() -> int\nC++: virtual vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMaxValue", PyvtkGenericGeometryFilter_GetCellMaximumMaxValue, METH_VARARGS,
   "V.GetCellMaximumMaxValue() -> int\nC++: virtual vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximum", PyvtkGenericGeometryFilter_GetCellMaximum, METH_VARARGS,
   "V.GetCellMaximum() -> int\nC++: virtual vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"SetExtent", PyvtkGenericGeometryFilter_SetExtent, METH_VARARGS,
   "V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {"GetExtent", PyvtkGenericGeometryFilter_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (float, ...)\nC++: double *GetExtent()\n\nSet / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to\nclip data.\n"},
  {"SetMerging", PyvtkGenericGeometryFilter_SetMerging, METH_VARARGS,
   "V.SetMerging(int)\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkGenericGeometryFilter_GetMerging, METH_VARARGS,
   "V.GetMerging() -> int\nC++: virtual vtkTypeBool GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOn", PyvtkGenericGeometryFilter_MergingOn, METH_VARARGS,
   "V.MergingOn()\nC++: virtual void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOff", PyvtkGenericGeometryFilter_MergingOff, METH_VARARGS,
   "V.MergingOff()\nC++: virtual void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"SetLocator", PyvtkGenericGeometryFilter_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkGenericGeometryFilter_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkGenericGeometryFilter_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkGenericGeometryFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {"SetPassThroughCellIds", PyvtkGenericGeometryFilter_SetPassThroughCellIds, METH_VARARGS,
   "V.SetPassThroughCellIds(int)\nC++: virtual void SetPassThroughCellIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {"GetPassThroughCellIds", PyvtkGenericGeometryFilter_GetPassThroughCellIds, METH_VARARGS,
   "V.GetPassThroughCellIds() -> int\nC++: virtual vtkTypeBool GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {"PassThroughCellIdsOn", PyvtkGenericGeometryFilter_PassThroughCellIdsOn, METH_VARARGS,
   "V.PassThroughCellIdsOn()\nC++: virtual void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {"PassThroughCellIdsOff", PyvtkGenericGeometryFilter_PassThroughCellIdsOff, METH_VARARGS,
   "V.PassThroughCellIdsOff()\nC++: virtual void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericGeometryFilter", // tp_name
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
  PyvtkGenericGeometryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericGeometryFilter_StaticNew()
{
  return vtkGenericGeometryFilter::New();
}

PyObject *PyvtkGenericGeometryFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericGeometryFilter_Type, PyvtkGenericGeometryFilter_Methods,
    "vtkGenericGeometryFilter",
 &PyvtkGenericGeometryFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericGeometryFilter_Type;

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

void PyVTKAddFile_vtkGenericGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

