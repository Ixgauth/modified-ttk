// python wrapper for vtkExtractUnstructuredGrid
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
#include "vtkExtractUnstructuredGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractUnstructuredGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractUnstructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkExtractUnstructuredGrid_Doc =
  "vtkExtractUnstructuredGrid - extract subset of unstructured grid\ngeometry\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkExtractUnstructuredGrid is a general-purpose filter to extract\n"
  "geometry (and associated data) from an unstructured grid dataset. The\n"
  "extraction process is controlled by specifying a range of point ids,\n"
  "cell ids, or a bounding box (referred to as \"Extent\"). Those cells\n"
  "laying within these regions are sent to the output. The user has the\n"
  "choice of merging coincident points (Merging is on) or using the\n"
  "original point set (Merging is off).\n\n"
  "@warning\n"
  "If merging is off, the input points are copied through to the output.\n"
  "This means unused points may be present in the output data. If\n"
  "merging is on, then coincident points with different point attribute\n"
  "values are merged.\n\n"
  "@sa\n"
  "vtkImageDataGeometryFilter vtkStructuredGridGeometryFilter\n"
  "vtkRectilinearGridGeometryFilter vtkExtractGeometry vtkExtractVOI\n\n";


static PyObject *
PyvtkExtractUnstructuredGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractUnstructuredGrid *tempr = vtkExtractUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractUnstructuredGrid::NewInstance());

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
PyvtkExtractUnstructuredGrid_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetPointClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkExtractUnstructuredGrid::GetPointClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::PointClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::PointClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetCellClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkExtractUnstructuredGrid::GetCellClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::CellClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::CellClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetExtentClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkExtractUnstructuredGrid::GetExtentClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::ExtentClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::ExtentClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetPointMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkExtractUnstructuredGrid::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkExtractUnstructuredGrid::GetPointMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetPointMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkExtractUnstructuredGrid::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkExtractUnstructuredGrid::GetPointMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetCellMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkExtractUnstructuredGrid::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkExtractUnstructuredGrid::GetCellMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetCellMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkExtractUnstructuredGrid::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkExtractUnstructuredGrid::GetCellMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractUnstructuredGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetExtent(temp0);
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
PyvtkExtractUnstructuredGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractUnstructuredGrid_SetExtent_s1(self, args);
    case 1:
      return PyvtkExtractUnstructuredGrid_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}



static PyObject *
PyvtkExtractUnstructuredGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkExtractUnstructuredGrid::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkExtractUnstructuredGrid::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->vtkExtractUnstructuredGrid::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkExtractUnstructuredGrid::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractUnstructuredGrid::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractUnstructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkExtractUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractUnstructuredGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractUnstructuredGrid\nC++: static vtkExtractUnstructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractUnstructuredGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractUnstructuredGrid\nC++: vtkExtractUnstructuredGrid *NewInstance()\n\n"},
  {"SetPointClipping", PyvtkExtractUnstructuredGrid_SetPointClipping, METH_VARARGS,
   "V.SetPointClipping(int)\nC++: virtual void SetPointClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by point id.\n"},
  {"GetPointClipping", PyvtkExtractUnstructuredGrid_GetPointClipping, METH_VARARGS,
   "V.GetPointClipping() -> int\nC++: virtual vtkTypeBool GetPointClipping()\n\nTurn on/off selection of geometry by point id.\n"},
  {"PointClippingOn", PyvtkExtractUnstructuredGrid_PointClippingOn, METH_VARARGS,
   "V.PointClippingOn()\nC++: virtual void PointClippingOn()\n\nTurn on/off selection of geometry by point id.\n"},
  {"PointClippingOff", PyvtkExtractUnstructuredGrid_PointClippingOff, METH_VARARGS,
   "V.PointClippingOff()\nC++: virtual void PointClippingOff()\n\nTurn on/off selection of geometry by point id.\n"},
  {"SetCellClipping", PyvtkExtractUnstructuredGrid_SetCellClipping, METH_VARARGS,
   "V.SetCellClipping(int)\nC++: virtual void SetCellClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by cell id.\n"},
  {"GetCellClipping", PyvtkExtractUnstructuredGrid_GetCellClipping, METH_VARARGS,
   "V.GetCellClipping() -> int\nC++: virtual vtkTypeBool GetCellClipping()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"CellClippingOn", PyvtkExtractUnstructuredGrid_CellClippingOn, METH_VARARGS,
   "V.CellClippingOn()\nC++: virtual void CellClippingOn()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"CellClippingOff", PyvtkExtractUnstructuredGrid_CellClippingOff, METH_VARARGS,
   "V.CellClippingOff()\nC++: virtual void CellClippingOff()\n\nTurn on/off selection of geometry by cell id.\n"},
  {"SetExtentClipping", PyvtkExtractUnstructuredGrid_SetExtentClipping, METH_VARARGS,
   "V.SetExtentClipping(int)\nC++: virtual void SetExtentClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"GetExtentClipping", PyvtkExtractUnstructuredGrid_GetExtentClipping, METH_VARARGS,
   "V.GetExtentClipping() -> int\nC++: virtual vtkTypeBool GetExtentClipping()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"ExtentClippingOn", PyvtkExtractUnstructuredGrid_ExtentClippingOn, METH_VARARGS,
   "V.ExtentClippingOn()\nC++: virtual void ExtentClippingOn()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"ExtentClippingOff", PyvtkExtractUnstructuredGrid_ExtentClippingOff, METH_VARARGS,
   "V.ExtentClippingOff()\nC++: virtual void ExtentClippingOff()\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"SetPointMinimum", PyvtkExtractUnstructuredGrid_SetPointMinimum, METH_VARARGS,
   "V.SetPointMinimum(int)\nC++: virtual void SetPointMinimum(vtkIdType _arg)\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMinValue", PyvtkExtractUnstructuredGrid_GetPointMinimumMinValue, METH_VARARGS,
   "V.GetPointMinimumMinValue() -> int\nC++: virtual vtkIdType GetPointMinimumMinValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMaxValue", PyvtkExtractUnstructuredGrid_GetPointMinimumMaxValue, METH_VARARGS,
   "V.GetPointMinimumMaxValue() -> int\nC++: virtual vtkIdType GetPointMinimumMaxValue()\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimum", PyvtkExtractUnstructuredGrid_GetPointMinimum, METH_VARARGS,
   "V.GetPointMinimum() -> int\nC++: virtual vtkIdType GetPointMinimum()\n\nSpecify the minimum point id for point id selection.\n"},
  {"SetPointMaximum", PyvtkExtractUnstructuredGrid_SetPointMaximum, METH_VARARGS,
   "V.SetPointMaximum(int)\nC++: virtual void SetPointMaximum(vtkIdType _arg)\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMinValue", PyvtkExtractUnstructuredGrid_GetPointMaximumMinValue, METH_VARARGS,
   "V.GetPointMaximumMinValue() -> int\nC++: virtual vtkIdType GetPointMaximumMinValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMaxValue", PyvtkExtractUnstructuredGrid_GetPointMaximumMaxValue, METH_VARARGS,
   "V.GetPointMaximumMaxValue() -> int\nC++: virtual vtkIdType GetPointMaximumMaxValue()\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximum", PyvtkExtractUnstructuredGrid_GetPointMaximum, METH_VARARGS,
   "V.GetPointMaximum() -> int\nC++: virtual vtkIdType GetPointMaximum()\n\nSpecify the maximum point id for point id selection.\n"},
  {"SetCellMinimum", PyvtkExtractUnstructuredGrid_SetCellMinimum, METH_VARARGS,
   "V.SetCellMinimum(int)\nC++: virtual void SetCellMinimum(vtkIdType _arg)\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMinValue", PyvtkExtractUnstructuredGrid_GetCellMinimumMinValue, METH_VARARGS,
   "V.GetCellMinimumMinValue() -> int\nC++: virtual vtkIdType GetCellMinimumMinValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMaxValue", PyvtkExtractUnstructuredGrid_GetCellMinimumMaxValue, METH_VARARGS,
   "V.GetCellMinimumMaxValue() -> int\nC++: virtual vtkIdType GetCellMinimumMaxValue()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimum", PyvtkExtractUnstructuredGrid_GetCellMinimum, METH_VARARGS,
   "V.GetCellMinimum() -> int\nC++: virtual vtkIdType GetCellMinimum()\n\nSpecify the minimum cell id for point id selection.\n"},
  {"SetCellMaximum", PyvtkExtractUnstructuredGrid_SetCellMaximum, METH_VARARGS,
   "V.SetCellMaximum(int)\nC++: virtual void SetCellMaximum(vtkIdType _arg)\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMinValue", PyvtkExtractUnstructuredGrid_GetCellMaximumMinValue, METH_VARARGS,
   "V.GetCellMaximumMinValue() -> int\nC++: virtual vtkIdType GetCellMaximumMinValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMaxValue", PyvtkExtractUnstructuredGrid_GetCellMaximumMaxValue, METH_VARARGS,
   "V.GetCellMaximumMaxValue() -> int\nC++: virtual vtkIdType GetCellMaximumMaxValue()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximum", PyvtkExtractUnstructuredGrid_GetCellMaximum, METH_VARARGS,
   "V.GetCellMaximum() -> int\nC++: virtual vtkIdType GetCellMaximum()\n\nSpecify the maximum cell id for point id selection.\n"},
  {"SetExtent", PyvtkExtractUnstructuredGrid_SetExtent, METH_VARARGS,
   "V.SetExtent(float, float, float, float, float, float)\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetExtent([float, float, float, float, float, float])\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {"GetExtent", PyvtkExtractUnstructuredGrid_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (float, float, float, float, float, float)\nC++: double *GetExtent()\n\nSet / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to\nclip data.\n"},
  {"SetMerging", PyvtkExtractUnstructuredGrid_SetMerging, METH_VARARGS,
   "V.SetMerging(int)\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkExtractUnstructuredGrid_GetMerging, METH_VARARGS,
   "V.GetMerging() -> int\nC++: virtual vtkTypeBool GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOn", PyvtkExtractUnstructuredGrid_MergingOn, METH_VARARGS,
   "V.MergingOn()\nC++: virtual void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOff", PyvtkExtractUnstructuredGrid_MergingOff, METH_VARARGS,
   "V.MergingOff()\nC++: virtual void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"SetLocator", PyvtkExtractUnstructuredGrid_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkExtractUnstructuredGrid_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkExtractUnstructuredGrid_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkExtractUnstructuredGrid_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractUnstructuredGrid", // tp_name
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
  PyvtkExtractUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractUnstructuredGrid_StaticNew()
{
  return vtkExtractUnstructuredGrid::New();
}

PyObject *PyvtkExtractUnstructuredGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractUnstructuredGrid_Type, PyvtkExtractUnstructuredGrid_Methods,
    "vtkExtractUnstructuredGrid",
 &PyvtkExtractUnstructuredGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractUnstructuredGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

