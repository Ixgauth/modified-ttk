// python wrapper for vtkIntersectionPolyDataFilter
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
#include "vtkIntersectionPolyDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIntersectionPolyDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIntersectionPolyDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkIntersectionPolyDataFilter_Doc =
  "vtkIntersectionPolyDataFilter - vtkIntersectionPolyDataFilter\ncomputes the intersection between two vtkPolyData objects.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The first output is a set of lines that marks the intersection of the\n"
  "input vtkPolyData objects. This contains five different attached data\n"
  "arrays:\n\n"
  "SurfaceID: Point data array that contains information about the\n"
  "origin surface of each point\n\n"
  "Input0CellID: Cell data array that contains the original cell ID\n"
  "number on the first input mesh\n\n"
  "Input1CellID: Cell data array that contains the original cell ID\n"
  "number on the second input mesh\n\n"
  "NewCell0ID: Cell data array that contains information about which\n"
  "cells of the remeshed first input surface it touches (If split)\n\n"
  "NewCell1ID: Cell data array that contains information about which\n"
  "cells on the remeshed second input surface it touches (If split)\n\n"
  "The second and third outputs are the first and second input\n"
  "vtkPolyData, respectively. Optionally, the two output vtkPolyData can\n"
  "be split along the intersection lines by remeshing. Optionally, the\n"
  "surface can be cleaned and checked at the end of the remeshing. If\n"
  "the meshes are split, The output vtkPolyDatas contain three possible\n"
  "data arrays:\n\n"
  "IntersectionPoint: This is a boolean indicating whether or not the\n"
  "point is on the boundary of the two input objects\n\n"
  "BadTriangle: If the surface is cleaned and checked, this is a cell\n"
  "data array indicating whether or not the cell has edges with multiple\n"
  "neighbors A manifold surface will have 0 everywhere for this array!\n\n"
  "FreeEdge: If the surface is cleaned and checked, this is a cell data\n"
  "array indicating if the cell has any free edges. A watertight surface\n"
  "will have 0 everywhere for this array!\n\n"
  "Author: Adam Updegrove updega2@gmail.com\n\n";


static PyObject *
PyvtkIntersectionPolyDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIntersectionPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIntersectionPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIntersectionPolyDataFilter *tempr = vtkIntersectionPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntersectionPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIntersectionPolyDataFilter::NewInstance());

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
PyvtkIntersectionPolyDataFilter_GetNumberOfIntersectionPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntersectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntersectionPoints() :
      op->vtkIntersectionPolyDataFilter::GetNumberOfIntersectionPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetNumberOfIntersectionLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntersectionLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntersectionLines() :
      op->vtkIntersectionPolyDataFilter::GetNumberOfIntersectionLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetSplitFirstOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFirstOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitFirstOutput() :
      op->vtkIntersectionPolyDataFilter::GetSplitFirstOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetSplitFirstOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitFirstOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitFirstOutput(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetSplitFirstOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitFirstOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitFirstOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplitFirstOutputOn();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SplitFirstOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitFirstOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitFirstOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplitFirstOutputOff();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SplitFirstOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetSplitSecondOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitSecondOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitSecondOutput() :
      op->vtkIntersectionPolyDataFilter::GetSplitSecondOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetSplitSecondOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitSecondOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitSecondOutput(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetSplitSecondOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitSecondOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitSecondOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplitSecondOutputOn();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SplitSecondOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SplitSecondOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitSecondOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplitSecondOutputOff();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SplitSecondOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetComputeIntersectionPointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeIntersectionPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeIntersectionPointArray() :
      op->vtkIntersectionPolyDataFilter::GetComputeIntersectionPointArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetComputeIntersectionPointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeIntersectionPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeIntersectionPointArray(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetComputeIntersectionPointArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_ComputeIntersectionPointArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionPointArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeIntersectionPointArrayOn();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::ComputeIntersectionPointArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_ComputeIntersectionPointArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionPointArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeIntersectionPointArrayOff();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::ComputeIntersectionPointArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetCheckInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckInput() :
      op->vtkIntersectionPolyDataFilter::GetCheckInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetCheckInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckInput(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetCheckInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_CheckInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckInputOn();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::CheckInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_CheckInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckInputOff();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::CheckInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetCheckMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckMesh() :
      op->vtkIntersectionPolyDataFilter::GetCheckMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetCheckMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckMesh(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetCheckMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_CheckMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckMeshOn();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::CheckMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_CheckMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckMeshOff();
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::CheckMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatus() :
      op->vtkIntersectionPolyDataFilter::GetStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkIntersectionPolyDataFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_GetRelativeSubtriangleArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeSubtriangleArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeSubtriangleArea() :
      op->vtkIntersectionPolyDataFilter::GetRelativeSubtriangleArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_SetRelativeSubtriangleArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeSubtriangleArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIntersectionPolyDataFilter *op = static_cast<vtkIntersectionPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeSubtriangleArea(temp0);
    }
    else
    {
      op->vtkIntersectionPolyDataFilter::SetRelativeSubtriangleArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_TriangleTriangleIntersection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleTriangleIntersection");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  const size_t size7 = 3;
  double temp7[3];
  double save7[3];
  const size_t size8 = 3;
  double temp8[3];
  double save8[3];
  const size_t size9 = 2;
  double temp9[2];
  double save9[2];
  double temp10;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(11) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8) &&
      ap.GetArray(temp9, size9) &&
      ap.GetValue(temp10))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp7, save7, size7);
    ap.Save(temp8, save8, size8);
    ap.Save(temp9, save9, size9);

    int tempr = vtkIntersectionPolyDataFilter::TriangleTriangleIntersection(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (ap.HasChanged(temp8, save8, size8) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(8, temp8, size8);
    }

    if (ap.HasChanged(temp9, save9, size9) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(9, temp9, size9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_CleanAndCheckSurface(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CleanAndCheckSurface");

  vtkPolyData *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    vtkIntersectionPolyDataFilter::CleanAndCheckSurface(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIntersectionPolyDataFilter_CleanAndCheckInput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CleanAndCheckInput");

  vtkPolyData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1))
  {
    vtkIntersectionPolyDataFilter::CleanAndCheckInput(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkIntersectionPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkIntersectionPolyDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIntersectionPolyDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIntersectionPolyDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIntersectionPolyDataFilter\nC++: static vtkIntersectionPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIntersectionPolyDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIntersectionPolyDataFilter\nC++: vtkIntersectionPolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfIntersectionPoints", PyvtkIntersectionPolyDataFilter_GetNumberOfIntersectionPoints, METH_VARARGS,
   "V.GetNumberOfIntersectionPoints() -> int\nC++: virtual int GetNumberOfIntersectionPoints()\n\nInteger describing the number of intersection points and lines\n"},
  {"GetNumberOfIntersectionLines", PyvtkIntersectionPolyDataFilter_GetNumberOfIntersectionLines, METH_VARARGS,
   "V.GetNumberOfIntersectionLines() -> int\nC++: virtual int GetNumberOfIntersectionLines()\n\nInteger describing the number of intersection points and lines\n"},
  {"GetSplitFirstOutput", PyvtkIntersectionPolyDataFilter_GetSplitFirstOutput, METH_VARARGS,
   "V.GetSplitFirstOutput() -> int\nC++: virtual vtkTypeBool GetSplitFirstOutput()\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {"SetSplitFirstOutput", PyvtkIntersectionPolyDataFilter_SetSplitFirstOutput, METH_VARARGS,
   "V.SetSplitFirstOutput(int)\nC++: virtual void SetSplitFirstOutput(vtkTypeBool _arg)\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {"SplitFirstOutputOn", PyvtkIntersectionPolyDataFilter_SplitFirstOutputOn, METH_VARARGS,
   "V.SplitFirstOutputOn()\nC++: virtual void SplitFirstOutputOn()\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {"SplitFirstOutputOff", PyvtkIntersectionPolyDataFilter_SplitFirstOutputOff, METH_VARARGS,
   "V.SplitFirstOutputOff()\nC++: virtual void SplitFirstOutputOff()\n\nIf on, the second output will be the first input mesh split by\nthe intersection with the second input mesh. Defaults to on.\n"},
  {"GetSplitSecondOutput", PyvtkIntersectionPolyDataFilter_GetSplitSecondOutput, METH_VARARGS,
   "V.GetSplitSecondOutput() -> int\nC++: virtual vtkTypeBool GetSplitSecondOutput()\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {"SetSplitSecondOutput", PyvtkIntersectionPolyDataFilter_SetSplitSecondOutput, METH_VARARGS,
   "V.SetSplitSecondOutput(int)\nC++: virtual void SetSplitSecondOutput(vtkTypeBool _arg)\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {"SplitSecondOutputOn", PyvtkIntersectionPolyDataFilter_SplitSecondOutputOn, METH_VARARGS,
   "V.SplitSecondOutputOn()\nC++: virtual void SplitSecondOutputOn()\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {"SplitSecondOutputOff", PyvtkIntersectionPolyDataFilter_SplitSecondOutputOff, METH_VARARGS,
   "V.SplitSecondOutputOff()\nC++: virtual void SplitSecondOutputOff()\n\nIf on, the third output will be the second input mesh split by\nthe intersection with the first input mesh. Defaults to on.\n"},
  {"GetComputeIntersectionPointArray", PyvtkIntersectionPolyDataFilter_GetComputeIntersectionPointArray, METH_VARARGS,
   "V.GetComputeIntersectionPointArray() -> int\nC++: virtual vtkTypeBool GetComputeIntersectionPointArray()\n\nIf on, the output split surfaces will contain information about\nwhich points are on the intersection of the two inputs. Default:\nON\n"},
  {"SetComputeIntersectionPointArray", PyvtkIntersectionPolyDataFilter_SetComputeIntersectionPointArray, METH_VARARGS,
   "V.SetComputeIntersectionPointArray(int)\nC++: virtual void SetComputeIntersectionPointArray(\n    vtkTypeBool _arg)\n\nIf on, the output split surfaces will contain information about\nwhich points are on the intersection of the two inputs. Default:\nON\n"},
  {"ComputeIntersectionPointArrayOn", PyvtkIntersectionPolyDataFilter_ComputeIntersectionPointArrayOn, METH_VARARGS,
   "V.ComputeIntersectionPointArrayOn()\nC++: virtual void ComputeIntersectionPointArrayOn()\n\nIf on, the output split surfaces will contain information about\nwhich points are on the intersection of the two inputs. Default:\nON\n"},
  {"ComputeIntersectionPointArrayOff", PyvtkIntersectionPolyDataFilter_ComputeIntersectionPointArrayOff, METH_VARARGS,
   "V.ComputeIntersectionPointArrayOff()\nC++: virtual void ComputeIntersectionPointArrayOff()\n\nIf on, the output split surfaces will contain information about\nwhich points are on the intersection of the two inputs. Default:\nON\n"},
  {"GetCheckInput", PyvtkIntersectionPolyDataFilter_GetCheckInput, METH_VARARGS,
   "V.GetCheckInput() -> int\nC++: virtual vtkTypeBool GetCheckInput()\n\nIf on, the normals of the input will be checked. Default: OFF\n"},
  {"SetCheckInput", PyvtkIntersectionPolyDataFilter_SetCheckInput, METH_VARARGS,
   "V.SetCheckInput(int)\nC++: virtual void SetCheckInput(vtkTypeBool _arg)\n\nIf on, the normals of the input will be checked. Default: OFF\n"},
  {"CheckInputOn", PyvtkIntersectionPolyDataFilter_CheckInputOn, METH_VARARGS,
   "V.CheckInputOn()\nC++: virtual void CheckInputOn()\n\nIf on, the normals of the input will be checked. Default: OFF\n"},
  {"CheckInputOff", PyvtkIntersectionPolyDataFilter_CheckInputOff, METH_VARARGS,
   "V.CheckInputOff()\nC++: virtual void CheckInputOff()\n\nIf on, the normals of the input will be checked. Default: OFF\n"},
  {"GetCheckMesh", PyvtkIntersectionPolyDataFilter_GetCheckMesh, METH_VARARGS,
   "V.GetCheckMesh() -> int\nC++: virtual vtkTypeBool GetCheckMesh()\n\nIf on, the output remeshed surfaces will be checked for bad cells\nand free edges. Default: ON\n"},
  {"SetCheckMesh", PyvtkIntersectionPolyDataFilter_SetCheckMesh, METH_VARARGS,
   "V.SetCheckMesh(int)\nC++: virtual void SetCheckMesh(vtkTypeBool _arg)\n\nIf on, the output remeshed surfaces will be checked for bad cells\nand free edges. Default: ON\n"},
  {"CheckMeshOn", PyvtkIntersectionPolyDataFilter_CheckMeshOn, METH_VARARGS,
   "V.CheckMeshOn()\nC++: virtual void CheckMeshOn()\n\nIf on, the output remeshed surfaces will be checked for bad cells\nand free edges. Default: ON\n"},
  {"CheckMeshOff", PyvtkIntersectionPolyDataFilter_CheckMeshOff, METH_VARARGS,
   "V.CheckMeshOff()\nC++: virtual void CheckMeshOff()\n\nIf on, the output remeshed surfaces will be checked for bad cells\nand free edges. Default: ON\n"},
  {"GetStatus", PyvtkIntersectionPolyDataFilter_GetStatus, METH_VARARGS,
   "V.GetStatus() -> int\nC++: virtual int GetStatus()\n\nCheck the status of the filter after update. If the status is\nzero, there was an error in the operation. If status is one,\neverything went smoothly\n"},
  {"GetTolerance", PyvtkIntersectionPolyDataFilter_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nThe tolerance for geometric tests in the filter\n"},
  {"SetTolerance", PyvtkIntersectionPolyDataFilter_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nThe tolerance for geometric tests in the filter\n"},
  {"GetRelativeSubtriangleArea", PyvtkIntersectionPolyDataFilter_GetRelativeSubtriangleArea, METH_VARARGS,
   "V.GetRelativeSubtriangleArea() -> float\nC++: virtual double GetRelativeSubtriangleArea()\n\nWhen discretizing polygons, the minimum ratio of the smallest\nacceptable triangle area w.r.t. the area of the polygon\n"},
  {"SetRelativeSubtriangleArea", PyvtkIntersectionPolyDataFilter_SetRelativeSubtriangleArea, METH_VARARGS,
   "V.SetRelativeSubtriangleArea(float)\nC++: virtual void SetRelativeSubtriangleArea(double _arg)\n\nWhen discretizing polygons, the minimum ratio of the smallest\nacceptable triangle area w.r.t. the area of the polygon\n"},
  {"TriangleTriangleIntersection", PyvtkIntersectionPolyDataFilter_TriangleTriangleIntersection, METH_VARARGS,
   "V.TriangleTriangleIntersection([float, float, float], [float,\n    float, float], [float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], int, [float,\n    float, float], [float, float, float], [float, float], float)\n    -> int\nC++: static int TriangleTriangleIntersection(double p1[3],\n    double q1[3], double r1[3], double p2[3], double q2[3],\n    double r2[3], int &coplanar, double pt1[3], double pt2[3],\n    double surfaceid[2], double tolerance)\n\nGiven two triangles defined by points (p1, q1, r1) and (p2, q2,\nr2), returns whether the two triangles intersect. If they do, the\nendpoints of the line forming the intersection are returned in\npt1 and pt2. The parameter coplanar is set to 1 if the triangles\nare coplanar and 0 otherwise. The surfaceid array is filled with\nthe surface on which the first and second intersection points\nresides, respectively. A geometric tolerance can be specified in\nthe last argument.\n"},
  {"CleanAndCheckSurface", PyvtkIntersectionPolyDataFilter_CleanAndCheckSurface, METH_VARARGS,
   "V.CleanAndCheckSurface(vtkPolyData, [float, float], float)\nC++: static void CleanAndCheckSurface(vtkPolyData *pd,\n    double stats[2], double tolerance)\n\nFunction to clean and check the output surfaces for bad triangles\nand free edges\n"},
  {"CleanAndCheckInput", PyvtkIntersectionPolyDataFilter_CleanAndCheckInput, METH_VARARGS,
   "V.CleanAndCheckInput(vtkPolyData, float)\nC++: static void CleanAndCheckInput(vtkPolyData *pd,\n    double tolerance)\n\nFunction to clean and check the inputs\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIntersectionPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkIntersectionPolyDataFilter", // tp_name
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
  PyvtkIntersectionPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIntersectionPolyDataFilter_StaticNew()
{
  return vtkIntersectionPolyDataFilter::New();
}

PyObject *PyvtkIntersectionPolyDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIntersectionPolyDataFilter_Type, PyvtkIntersectionPolyDataFilter_Methods,
    "vtkIntersectionPolyDataFilter",
 &PyvtkIntersectionPolyDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkIntersectionPolyDataFilter_Type;

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

void PyVTKAddFile_vtkIntersectionPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIntersectionPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIntersectionPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

