// python wrapper for vtkStaticCleanPolyData
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
#include "vtkStaticCleanPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCleanPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStaticCleanPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkStaticCleanPolyData_Doc =
  "vtkStaticCleanPolyData - merge duplicate points, and/or remove unused\npoints and/or remove degenerate cells\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStaticCleanPolyData is a filter that takes polygonal data as input\n"
  "and generates polygonal data as output. vtkStaticCleanPolyData will\n"
  "merge duplicate points (within specified tolerance), and if enabled,\n"
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
  "Internally this class uses vtkStaticPointLocator, which is a\n"
  "threaded, and much faster locator than the incremental locators that\n"
  "vtkCleanPolyData uses. Note because of these and other differences,\n"
  "the output of this filter may be different than vtkCleanPolyData.\n\n"
  "Note that if you want to remove points that aren't used by any cells\n"
  "(i.e., disable point merging), then use vtkCleanPolyData.\n\n"
  "@warning\n"
  "Merging points can alter topology, including introducing non-manifold\n"
  "forms. The tolerance should be chosen carefully to avoid these\n"
  "problems. Large tolerances (of size > locator bin width) may generate\n"
  "poor results.\n\n"
  "@warning\n"
  "Merging close points with tolerance >0.0 is inherently an unstable\n"
  "problem because the results are order dependent (e.g., the order in\n"
  "which points are processed). When parallel computing, the order of\n"
  "processing points is unpredictable, hence the results may vary\n"
  "between runs.\n\n"
  "@warning\n"
  "If you wish to operate on a set of coordinates that has no cells, you\n"
  "must add a vtkPolyVertex cell with all of the points to the PolyData\n"
  "(or use a vtkVertexGlyphFilter) before using the\n"
  "vtkStaticCleanPolyData filter.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkCleanPolyData\n\n";


static PyObject *
PyvtkStaticCleanPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCleanPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCleanPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCleanPolyData *tempr = vtkStaticCleanPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCleanPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCleanPolyData::NewInstance());

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
PyvtkStaticCleanPolyData_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkStaticCleanPolyData::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkStaticCleanPolyData::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkStaticCleanPolyData::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkStaticCleanPolyData::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetAbsoluteTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMinValue() :
      op->vtkStaticCleanPolyData::GetAbsoluteToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMaxValue() :
      op->vtkStaticCleanPolyData::GetAbsoluteToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteTolerance() :
      op->vtkStaticCleanPolyData::GetAbsoluteTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetConvertLinesToPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertLinesToPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesToPointsOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertLinesToPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertLinesToPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesToPointsOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertLinesToPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertLinesToPoints() :
      op->vtkStaticCleanPolyData::GetConvertLinesToPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetConvertPolysToLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertPolysToLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPolysToLinesOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertPolysToLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertPolysToLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPolysToLinesOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertPolysToLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertPolysToLines() :
      op->vtkStaticCleanPolyData::GetConvertPolysToLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetConvertStripsToPolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertStripsToPolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertStripsToPolysOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertStripsToPolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertStripsToPolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertStripsToPolysOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertStripsToPolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConvertStripsToPolys() :
      op->vtkStaticCleanPolyData::GetConvertStripsToPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkStaticCleanPolyData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkStaticCleanPolyData::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkStaticCleanPolyData::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkStaticCleanPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCleanPolyData_Methods[] = {
  {"IsTypeOf", PyvtkStaticCleanPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods to instantiate, print, and provide type\ninformation.\n"},
  {"IsA", PyvtkStaticCleanPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods to instantiate, print, and provide type\ninformation.\n"},
  {"SafeDownCast", PyvtkStaticCleanPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStaticCleanPolyData\nC++: static vtkStaticCleanPolyData *SafeDownCast(vtkObjectBase *o)\n\nStandard methods to instantiate, print, and provide type\ninformation.\n"},
  {"NewInstance", PyvtkStaticCleanPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStaticCleanPolyData\nC++: vtkStaticCleanPolyData *NewInstance()\n\nStandard methods to instantiate, print, and provide type\ninformation.\n"},
  {"SetToleranceIsAbsolute", PyvtkStaticCleanPolyData_SetToleranceIsAbsolute, METH_VARARGS,
   "V.SetToleranceIsAbsolute(int)\nC++: virtual void SetToleranceIsAbsolute(vtkTypeBool _arg)\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"ToleranceIsAbsoluteOn", PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOn, METH_VARARGS,
   "V.ToleranceIsAbsoluteOn()\nC++: virtual void ToleranceIsAbsoluteOn()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"ToleranceIsAbsoluteOff", PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOff, METH_VARARGS,
   "V.ToleranceIsAbsoluteOff()\nC++: virtual void ToleranceIsAbsoluteOff()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"GetToleranceIsAbsolute", PyvtkStaticCleanPolyData_GetToleranceIsAbsolute, METH_VARARGS,
   "V.GetToleranceIsAbsolute() -> int\nC++: virtual vtkTypeBool GetToleranceIsAbsolute()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"SetTolerance", PyvtkStaticCleanPolyData_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify tolerance in terms of fraction of bounding box length. \nDefault is 0.0. This takes effect only if ToleranceIsAbsolute is\nfalse.\n"},
  {"GetToleranceMinValue", PyvtkStaticCleanPolyData_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSpecify tolerance in terms of fraction of bounding box length. \nDefault is 0.0. This takes effect only if ToleranceIsAbsolute is\nfalse.\n"},
  {"GetToleranceMaxValue", PyvtkStaticCleanPolyData_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSpecify tolerance in terms of fraction of bounding box length. \nDefault is 0.0. This takes effect only if ToleranceIsAbsolute is\nfalse.\n"},
  {"GetTolerance", PyvtkStaticCleanPolyData_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify tolerance in terms of fraction of bounding box length. \nDefault is 0.0. This takes effect only if ToleranceIsAbsolute is\nfalse.\n"},
  {"SetAbsoluteTolerance", PyvtkStaticCleanPolyData_SetAbsoluteTolerance, METH_VARARGS,
   "V.SetAbsoluteTolerance(float)\nC++: virtual void SetAbsoluteTolerance(double _arg)\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteToleranceMinValue", PyvtkStaticCleanPolyData_GetAbsoluteToleranceMinValue, METH_VARARGS,
   "V.GetAbsoluteToleranceMinValue() -> float\nC++: virtual double GetAbsoluteToleranceMinValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteToleranceMaxValue", PyvtkStaticCleanPolyData_GetAbsoluteToleranceMaxValue, METH_VARARGS,
   "V.GetAbsoluteToleranceMaxValue() -> float\nC++: virtual double GetAbsoluteToleranceMaxValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteTolerance", PyvtkStaticCleanPolyData_GetAbsoluteTolerance, METH_VARARGS,
   "V.GetAbsoluteTolerance() -> float\nC++: virtual double GetAbsoluteTolerance()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"SetConvertLinesToPoints", PyvtkStaticCleanPolyData_SetConvertLinesToPoints, METH_VARARGS,
   "V.SetConvertLinesToPoints(int)\nC++: virtual void SetConvertLinesToPoints(vtkTypeBool _arg)\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"ConvertLinesToPointsOn", PyvtkStaticCleanPolyData_ConvertLinesToPointsOn, METH_VARARGS,
   "V.ConvertLinesToPointsOn()\nC++: virtual void ConvertLinesToPointsOn()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"ConvertLinesToPointsOff", PyvtkStaticCleanPolyData_ConvertLinesToPointsOff, METH_VARARGS,
   "V.ConvertLinesToPointsOff()\nC++: virtual void ConvertLinesToPointsOff()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"GetConvertLinesToPoints", PyvtkStaticCleanPolyData_GetConvertLinesToPoints, METH_VARARGS,
   "V.GetConvertLinesToPoints() -> int\nC++: virtual vtkTypeBool GetConvertLinesToPoints()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {"SetConvertPolysToLines", PyvtkStaticCleanPolyData_SetConvertPolysToLines, METH_VARARGS,
   "V.SetConvertPolysToLines(int)\nC++: virtual void SetConvertPolysToLines(vtkTypeBool _arg)\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"ConvertPolysToLinesOn", PyvtkStaticCleanPolyData_ConvertPolysToLinesOn, METH_VARARGS,
   "V.ConvertPolysToLinesOn()\nC++: virtual void ConvertPolysToLinesOn()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"ConvertPolysToLinesOff", PyvtkStaticCleanPolyData_ConvertPolysToLinesOff, METH_VARARGS,
   "V.ConvertPolysToLinesOff()\nC++: virtual void ConvertPolysToLinesOff()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"GetConvertPolysToLines", PyvtkStaticCleanPolyData_GetConvertPolysToLines, METH_VARARGS,
   "V.GetConvertPolysToLines() -> int\nC++: virtual vtkTypeBool GetConvertPolysToLines()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {"SetConvertStripsToPolys", PyvtkStaticCleanPolyData_SetConvertStripsToPolys, METH_VARARGS,
   "V.SetConvertStripsToPolys(int)\nC++: virtual void SetConvertStripsToPolys(vtkTypeBool _arg)\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"ConvertStripsToPolysOn", PyvtkStaticCleanPolyData_ConvertStripsToPolysOn, METH_VARARGS,
   "V.ConvertStripsToPolysOn()\nC++: virtual void ConvertStripsToPolysOn()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"ConvertStripsToPolysOff", PyvtkStaticCleanPolyData_ConvertStripsToPolysOff, METH_VARARGS,
   "V.ConvertStripsToPolysOff()\nC++: virtual void ConvertStripsToPolysOff()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"GetConvertStripsToPolys", PyvtkStaticCleanPolyData_GetConvertStripsToPolys, METH_VARARGS,
   "V.GetConvertStripsToPolys() -> int\nC++: virtual vtkTypeBool GetConvertStripsToPolys()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {"SetPieceInvariant", PyvtkStaticCleanPolyData_SetPieceInvariant, METH_VARARGS,
   "V.SetPieceInvariant(int)\nC++: virtual void SetPieceInvariant(vtkTypeBool _arg)\n\n"},
  {"GetPieceInvariant", PyvtkStaticCleanPolyData_GetPieceInvariant, METH_VARARGS,
   "V.GetPieceInvariant() -> int\nC++: virtual vtkTypeBool GetPieceInvariant()\n\n"},
  {"PieceInvariantOn", PyvtkStaticCleanPolyData_PieceInvariantOn, METH_VARARGS,
   "V.PieceInvariantOn()\nC++: virtual void PieceInvariantOn()\n\n"},
  {"PieceInvariantOff", PyvtkStaticCleanPolyData_PieceInvariantOff, METH_VARARGS,
   "V.PieceInvariantOff()\nC++: virtual void PieceInvariantOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkStaticCleanPolyData_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkStaticCleanPolyData_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetLocator", PyvtkStaticCleanPolyData_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkStaticPointLocator\nC++: vtkStaticPointLocator *GetLocator()\n\nRetrieve the internal locator to manually configure it, for\nexample specifying the number of points per bucket. This method\nis generally used for debugging or testing purposes.\n"},
  {"GetMTime", PyvtkStaticCleanPolyData_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStaticCleanPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkStaticCleanPolyData", // tp_name
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
  PyvtkStaticCleanPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCleanPolyData_StaticNew()
{
  return vtkStaticCleanPolyData::New();
}

PyObject *PyvtkStaticCleanPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStaticCleanPolyData_Type, PyvtkStaticCleanPolyData_Methods,
    "vtkStaticCleanPolyData",
 &PyvtkStaticCleanPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkStaticCleanPolyData_Type;

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

void PyVTKAddFile_vtkStaticCleanPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCleanPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCleanPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

