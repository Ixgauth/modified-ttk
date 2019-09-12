// python wrapper for vtkCleanPolyData
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
#include "vtkCleanPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCleanPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCleanPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCleanPolyData_Doc =
  "vtkCleanPolyData - merge duplicate points, and/or remove unused\npoints and/or remove degenerate cells\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCleanPolyData is a filter that takes polygonal data as input and\n"
  "generates polygonal data as output. vtkCleanPolyData will merge\n"
  "duplicate points (within specified tolerance and if enabled),\n"
  "eliminate points that are not used in any cell, and if enabled,\n"
  "transform degenerate cells into appropriate forms (for example, a\n"
  "triangle is converted into a line if two points of triangle are\n"
  "merged).\n\n"
  "Conversion of degenerate cells is controlled by the flags\n"
  "ConvertLinesToPoints, ConvertPolysToLines, ConvertStripsToPolys which\n"
  "act cumulatively such that a degenerate strip may become a poly. The\n"
  "full set is Line with 1 points -> Vert (if ConvertLinesToPoints) Poly\n"
  "with 2 points -> Line (if ConvertPolysToLines) Poly with 1 points ->\n"
  "Vert (if ConvertPolysToLines && ConvertLinesToPoints) Strp with 3\n"
  "points -> Poly (if ConvertStripsToPolys) Strp with 2 points -> Line\n"
  "(if ConvertStripsToPolys && ConvertPolysToLines) Strp with 1 points\n"
  "-> Vert (if ConvertStripsToPolys && ConvertPolysToLines\n"
  "  && ConvertLinesToPoints)\n\n"
  "If tolerance is specified precisely=0.0, then vtkCleanPolyData will\n"
  "use the vtkMergePoints object to merge points (which is faster).\n"
  "Otherwise the slower vtkIncrementalPointLocator is used.  Before\n"
  "inserting points into the point locator, this class calls a function\n"
  "OperateOnPoint which can be used (in subclasses) to further refine\n"
  "the cleaning process. See vtkQuantizePolyDataPoints.\n\n"
  "Note that merging of points can be disabled. In this case, a point\n"
  "locator will not be used, and points that are not used by any cells\n"
  "will be eliminated, but never merged.\n\n"
  "@warning\n"
  "Merging points can alter topology, including introducing non-manifold\n"
  "forms. The tolerance should be chosen carefully to avoid these\n"
  "problems. Subclasses should handle OperateOnBounds as well as\n"
  "OperateOnPoint to ensure that the locator is correctly initialized\n"
  "(i.e. all modified points must lie inside modified bounds).\n\n"
  "@warning\n"
  "If you wish to operate on a set of coordinates that has no cells, you\n"
  "must add a vtkPolyVertex cell with all of the points to the PolyData\n"
  "(or use a vtkVertexGlyphFilter) before using the vtkCleanPolyData\n"
  "filter.\n\n"
  "@sa\n"
  "vtkQuantizePolyDataPoints\n\n";


static PyObject *
PyvtkCleanPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCleanPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCleanPolyData *tempr = vtkCleanPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCleanPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanPolyData::NewInstance());

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
PyvtkCleanPolyData_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToleranceIsAbsolute(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkCleanPolyData::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkCleanPolyData::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkCleanPolyData::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      op->vtkCleanPolyData::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkCleanPolyData::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkCleanPolyData::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkCleanPolyData::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteTolerance(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetAbsoluteTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMinValue() :
      op->vtkCleanPolyData::GetAbsoluteToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMaxValue() :
      op->vtkCleanPolyData::GetAbsoluteToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteTolerance() :
      op->vtkCleanPolyData::GetAbsoluteTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertLinesToPoints(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetConvertLinesToPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertLinesToPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesToPointsOn();
    }
    else
    {
      op->vtkCleanPolyData::ConvertLinesToPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertLinesToPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesToPointsOff();
    }
    else
    {
      op->vtkCleanPolyData::ConvertLinesToPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertLinesToPoints() :
      op->vtkCleanPolyData::GetConvertLinesToPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertPolysToLines(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetConvertPolysToLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertPolysToLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPolysToLinesOn();
    }
    else
    {
      op->vtkCleanPolyData::ConvertPolysToLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertPolysToLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPolysToLinesOff();
    }
    else
    {
      op->vtkCleanPolyData::ConvertPolysToLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertPolysToLines() :
      op->vtkCleanPolyData::GetConvertPolysToLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertStripsToPolys(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetConvertStripsToPolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertStripsToPolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertStripsToPolysOn();
    }
    else
    {
      op->vtkCleanPolyData::ConvertStripsToPolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertStripsToPolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertStripsToPolysOff();
    }
    else
    {
      op->vtkCleanPolyData::ConvertStripsToPolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertStripsToPolys() :
      op->vtkCleanPolyData::GetConvertStripsToPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetPointMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMerging(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetPointMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetPointMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointMerging() :
      op->vtkCleanPolyData::GetPointMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PointMergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointMergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointMergingOn();
    }
    else
    {
      op->vtkCleanPolyData::PointMergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PointMergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointMergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointMergingOff();
    }
    else
    {
      op->vtkCleanPolyData::PointMergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      op->vtkCleanPolyData::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCleanPolyData::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkPolyData")))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator(temp0);
    }
    else
    {
      op->vtkCleanPolyData::CreateDefaultLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ReleaseLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseLocator();
    }
    else
    {
      op->vtkCleanPolyData::ReleaseLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCleanPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->OperateOnPoint(temp0, temp1);
    }
    else
    {
      op->vtkCleanPolyData::OperateOnPoint(temp0, temp1);
    }

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->OperateOnBounds(temp0, temp1);
    }
    else
    {
      op->vtkCleanPolyData::OperateOnBounds(temp0, temp1);
    }

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkCleanPolyData::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkCleanPolyData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkCleanPolyData::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkCleanPolyData::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      op->vtkCleanPolyData::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCleanPolyData::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCleanPolyData_Methods[] = {
  {"IsTypeOf", PyvtkCleanPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCleanPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCleanPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCleanPolyData\nC++: static vtkCleanPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCleanPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCleanPolyData\nC++: vtkCleanPolyData *NewInstance()\n\n"},
  {"SetToleranceIsAbsolute", PyvtkCleanPolyData_SetToleranceIsAbsolute, METH_VARARGS,
   "V.SetToleranceIsAbsolute(int)\nC++: virtual void SetToleranceIsAbsolute(vtkTypeBool _arg)\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"ToleranceIsAbsoluteOn", PyvtkCleanPolyData_ToleranceIsAbsoluteOn, METH_VARARGS,
   "V.ToleranceIsAbsoluteOn()\nC++: virtual void ToleranceIsAbsoluteOn()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"ToleranceIsAbsoluteOff", PyvtkCleanPolyData_ToleranceIsAbsoluteOff, METH_VARARGS,
   "V.ToleranceIsAbsoluteOff()\nC++: virtual void ToleranceIsAbsoluteOff()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"GetToleranceIsAbsolute", PyvtkCleanPolyData_GetToleranceIsAbsolute, METH_VARARGS,
   "V.GetToleranceIsAbsolute() -> int\nC++: virtual vtkTypeBool GetToleranceIsAbsolute()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"SetTolerance", PyvtkCleanPolyData_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {"GetToleranceMinValue", PyvtkCleanPolyData_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {"GetToleranceMaxValue", PyvtkCleanPolyData_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {"GetTolerance", PyvtkCleanPolyData_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {"SetAbsoluteTolerance", PyvtkCleanPolyData_SetAbsoluteTolerance, METH_VARARGS,
   "V.SetAbsoluteTolerance(float)\nC++: virtual void SetAbsoluteTolerance(double _arg)\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteToleranceMinValue", PyvtkCleanPolyData_GetAbsoluteToleranceMinValue, METH_VARARGS,
   "V.GetAbsoluteToleranceMinValue() -> float\nC++: virtual double GetAbsoluteToleranceMinValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteToleranceMaxValue", PyvtkCleanPolyData_GetAbsoluteToleranceMaxValue, METH_VARARGS,
   "V.GetAbsoluteToleranceMaxValue() -> float\nC++: virtual double GetAbsoluteToleranceMaxValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteTolerance", PyvtkCleanPolyData_GetAbsoluteTolerance, METH_VARARGS,
   "V.GetAbsoluteTolerance() -> float\nC++: virtual double GetAbsoluteTolerance()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"SetConvertLinesToPoints", PyvtkCleanPolyData_SetConvertLinesToPoints, METH_VARARGS,
   "V.SetConvertLinesToPoints(int)\nC++: virtual void SetConvertLinesToPoints(vtkTypeBool _arg)\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"ConvertLinesToPointsOn", PyvtkCleanPolyData_ConvertLinesToPointsOn, METH_VARARGS,
   "V.ConvertLinesToPointsOn()\nC++: virtual void ConvertLinesToPointsOn()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"ConvertLinesToPointsOff", PyvtkCleanPolyData_ConvertLinesToPointsOff, METH_VARARGS,
   "V.ConvertLinesToPointsOff()\nC++: virtual void ConvertLinesToPointsOff()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"GetConvertLinesToPoints", PyvtkCleanPolyData_GetConvertLinesToPoints, METH_VARARGS,
   "V.GetConvertLinesToPoints() -> int\nC++: virtual vtkTypeBool GetConvertLinesToPoints()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"SetConvertPolysToLines", PyvtkCleanPolyData_SetConvertPolysToLines, METH_VARARGS,
   "V.SetConvertPolysToLines(int)\nC++: virtual void SetConvertPolysToLines(vtkTypeBool _arg)\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"ConvertPolysToLinesOn", PyvtkCleanPolyData_ConvertPolysToLinesOn, METH_VARARGS,
   "V.ConvertPolysToLinesOn()\nC++: virtual void ConvertPolysToLinesOn()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"ConvertPolysToLinesOff", PyvtkCleanPolyData_ConvertPolysToLinesOff, METH_VARARGS,
   "V.ConvertPolysToLinesOff()\nC++: virtual void ConvertPolysToLinesOff()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"GetConvertPolysToLines", PyvtkCleanPolyData_GetConvertPolysToLines, METH_VARARGS,
   "V.GetConvertPolysToLines() -> int\nC++: virtual vtkTypeBool GetConvertPolysToLines()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"SetConvertStripsToPolys", PyvtkCleanPolyData_SetConvertStripsToPolys, METH_VARARGS,
   "V.SetConvertStripsToPolys(int)\nC++: virtual void SetConvertStripsToPolys(vtkTypeBool _arg)\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"ConvertStripsToPolysOn", PyvtkCleanPolyData_ConvertStripsToPolysOn, METH_VARARGS,
   "V.ConvertStripsToPolysOn()\nC++: virtual void ConvertStripsToPolysOn()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"ConvertStripsToPolysOff", PyvtkCleanPolyData_ConvertStripsToPolysOff, METH_VARARGS,
   "V.ConvertStripsToPolysOff()\nC++: virtual void ConvertStripsToPolysOff()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"GetConvertStripsToPolys", PyvtkCleanPolyData_GetConvertStripsToPolys, METH_VARARGS,
   "V.GetConvertStripsToPolys() -> int\nC++: virtual vtkTypeBool GetConvertStripsToPolys()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"SetPointMerging", PyvtkCleanPolyData_SetPointMerging, METH_VARARGS,
   "V.SetPointMerging(int)\nC++: virtual void SetPointMerging(vtkTypeBool _arg)\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {"GetPointMerging", PyvtkCleanPolyData_GetPointMerging, METH_VARARGS,
   "V.GetPointMerging() -> int\nC++: virtual vtkTypeBool GetPointMerging()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {"PointMergingOn", PyvtkCleanPolyData_PointMergingOn, METH_VARARGS,
   "V.PointMergingOn()\nC++: virtual void PointMergingOn()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {"PointMergingOff", PyvtkCleanPolyData_PointMergingOff, METH_VARARGS,
   "V.PointMergingOff()\nC++: virtual void PointMergingOff()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {"SetLocator", PyvtkCleanPolyData_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: virtual void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkCleanPolyData_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkCleanPolyData_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator(vtkPolyData)\nC++: void CreateDefaultLocator(vtkPolyData *input=nullptr)\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"ReleaseLocator", PyvtkCleanPolyData_ReleaseLocator, METH_VARARGS,
   "V.ReleaseLocator()\nC++: void ReleaseLocator()\n\nRelease locator\n"},
  {"GetMTime", PyvtkCleanPolyData_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator.\n"},
  {"OperateOnPoint", PyvtkCleanPolyData_OperateOnPoint, METH_VARARGS,
   "V.OperateOnPoint([float, float, float], [float, float, float])\nC++: virtual void OperateOnPoint(double in[3], double out[3])\n\nPerform operation on a point\n"},
  {"OperateOnBounds", PyvtkCleanPolyData_OperateOnBounds, METH_VARARGS,
   "V.OperateOnBounds([float, float, float, float, float, float],\n    [float, float, float, float, float, float])\nC++: virtual void OperateOnBounds(double in[6], double out[6])\n\nPerform operation on bounds\n"},
  {"SetPieceInvariant", PyvtkCleanPolyData_SetPieceInvariant, METH_VARARGS,
   "V.SetPieceInvariant(int)\nC++: virtual void SetPieceInvariant(vtkTypeBool _arg)\n\n"},
  {"GetPieceInvariant", PyvtkCleanPolyData_GetPieceInvariant, METH_VARARGS,
   "V.GetPieceInvariant() -> int\nC++: virtual vtkTypeBool GetPieceInvariant()\n\n"},
  {"PieceInvariantOn", PyvtkCleanPolyData_PieceInvariantOn, METH_VARARGS,
   "V.PieceInvariantOn()\nC++: virtual void PieceInvariantOn()\n\n"},
  {"PieceInvariantOff", PyvtkCleanPolyData_PieceInvariantOff, METH_VARARGS,
   "V.PieceInvariantOff()\nC++: virtual void PieceInvariantOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkCleanPolyData_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkCleanPolyData_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCleanPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkCleanPolyData", // tp_name
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
  PyvtkCleanPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCleanPolyData_StaticNew()
{
  return vtkCleanPolyData::New();
}

PyObject *PyvtkCleanPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCleanPolyData_Type, PyvtkCleanPolyData_Methods,
    "vtkCleanPolyData",
 &PyvtkCleanPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkCleanPolyData_Type;

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

void PyVTKAddFile_vtkCleanPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCleanPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCleanPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

