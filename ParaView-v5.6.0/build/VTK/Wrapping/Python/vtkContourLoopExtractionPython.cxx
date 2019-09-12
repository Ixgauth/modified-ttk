// python wrapper for vtkContourLoopExtraction
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
#include "vtkContourLoopExtraction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourLoopExtraction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourLoopExtraction_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkContourLoopExtraction_Doc =
  "vtkContourLoopExtraction - extract closed loops (polygons) from lines\nand polylines\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter takes an input consisting of lines and polylines and\n"
  "constructs polygons (i.e., closed loops) from them. It combines some\n"
  "of the capability of connectivity filters and the line stripper to\n"
  "produce manifold loops that are suitable for geometric operations.\n"
  "For example, the vtkCookieCutter works well with this filter.\n\n"
  "Note that the input structure for this filter consists of points and\n"
  "line or polyline cells. All other topological types (verts, polygons,\n"
  "triangle strips) are ignored. The output of this filter is by default\n"
  "manifold polygons. Note however, that optionally polyline loops may\n"
  "also be output if requested.\n\n"
  "@warning\n"
  "Although the loops are constructed in 3-space, a normal vector must\n"
  "be supplied to help choose a turn direction when multiple choices are\n"
  "possible. By default the normal vector is n={0,0,1} but may be user\n"
  "specified. Note also that some filters require that the loops are\n"
  "located in the z=constant or z=0 plane. Hence a transform filter of\n"
  "some sort may be necesssary to project the loops to a plane.\n\n"
  "@warning\n"
  "Note that lines that do not close in on themselves can be optionally\n"
  "forced closed. This occurs when for example, 2D contours end and\n"
  "begin at the boundaries of data. By forcing closure, the last point\n"
  "is joined to the first point (with boundary points possibly added).\n"
  "Note that there are different closure modes: 1) do not close (and\n"
  "hence reject the polygon);\n"
  "2) close along the dataset boundaries (i.e., the bounding box of a\n"
  "   dataset used to generate the contour lines); and 3) close all open\n"
  "loops by connectiong the first and last point. If Option #2 is\n"
  "   chosen, only loops that start and end on either a horizontal or\n"
  "   vertical boundary are closed.\n\n"
  "@warning\n"
  "Scalar thresholding can be enabled. If enabled, then only those loops\n"
  "with\n"
  "*any\" scalar point data within the thresholded range are extracted.\n\n"
  "@warning\n"
  "Any detached lines forming degenerate loops of defined by two points\n"
  "or less are discarded. Non-manifold junctions are broken into\n"
  "separate, independent loops.\n\n"
  "@warning\n"
  "Boundary closure only works if the end points are both on a vertical\n"
  "boundary or horizontal boundary. Otherwise new points would have to\n"
  "be added which this filter does not (currently) do.\n\n"
  "@sa\n"
  "vtkCookieCutter vtkFlyingEdges2D vtkMarchingSquares vtkFeatureEdges\n"
  "vtkConnectivityFilter vtkPolyDataConnectivityFilter\n"
  "vtkDiscreteFlyingEdges2D vtkStripper\n\n";


static PyObject *
PyvtkContourLoopExtraction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourLoopExtraction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourLoopExtraction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourLoopExtraction *tempr = vtkContourLoopExtraction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourLoopExtraction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourLoopExtraction::NewInstance());

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
PyvtkContourLoopExtraction_SetLoopClosure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosure(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoopClosureMinValue() :
      op->vtkContourLoopExtraction::GetLoopClosureMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoopClosureMaxValue() :
      op->vtkContourLoopExtraction::GetLoopClosureMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoopClosure() :
      op->vtkContourLoopExtraction::GetLoopClosure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosureToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosureToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosureToOff();
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosureToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosureToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosureToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosureToBoundary();
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosureToBoundary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosureToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosureToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosureToAll();
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosureToAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosureAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosureAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLoopClosureAsString() :
      op->vtkContourLoopExtraction::GetLoopClosureAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetScalarThresholding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarThresholding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarThresholding(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetScalarThresholding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetScalarThresholding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarThresholding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarThresholding() :
      op->vtkContourLoopExtraction::GetScalarThresholding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_ScalarThresholdingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarThresholdingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarThresholdingOn();
    }
    else
    {
      op->vtkContourLoopExtraction::ScalarThresholdingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_ScalarThresholdingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarThresholdingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarThresholdingOff();
    }
    else
    {
      op->vtkContourLoopExtraction::ScalarThresholdingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkContourLoopExtraction::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourLoopExtraction_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkContourLoopExtraction_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkContourLoopExtraction_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkContourLoopExtraction::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContourLoopExtraction::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContourLoopExtraction_SetNormal_s1(self, args);
    case 1:
      return PyvtkContourLoopExtraction_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkContourLoopExtraction_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkContourLoopExtraction::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputMode(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputModeMinValue() :
      op->vtkContourLoopExtraction::GetOutputModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputModeMaxValue() :
      op->vtkContourLoopExtraction::GetOutputModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputMode() :
      op->vtkContourLoopExtraction::GetOutputMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputModeToPolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputModeToPolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputModeToPolygons();
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputModeToPolygons();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputModeToPolylines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputModeToPolylines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputModeToPolylines();
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputModeToPolylines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputModeToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputModeToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputModeToBoth();
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputModeToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputModeAsString() :
      op->vtkContourLoopExtraction::GetOutputModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourLoopExtraction_Methods[] = {
  {"IsTypeOf", PyvtkContourLoopExtraction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"IsA", PyvtkContourLoopExtraction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"SafeDownCast", PyvtkContourLoopExtraction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContourLoopExtraction\nC++: static vtkContourLoopExtraction *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"NewInstance", PyvtkContourLoopExtraction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContourLoopExtraction\nC++: vtkContourLoopExtraction *NewInstance()\n\nStandard methods to instantiate, print and provide type\ninformation.\n"},
  {"SetLoopClosure", PyvtkContourLoopExtraction_SetLoopClosure, METH_VARARGS,
   "V.SetLoopClosure(int)\nC++: virtual void SetLoopClosure(int _arg)\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"GetLoopClosureMinValue", PyvtkContourLoopExtraction_GetLoopClosureMinValue, METH_VARARGS,
   "V.GetLoopClosureMinValue() -> int\nC++: virtual int GetLoopClosureMinValue()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"GetLoopClosureMaxValue", PyvtkContourLoopExtraction_GetLoopClosureMaxValue, METH_VARARGS,
   "V.GetLoopClosureMaxValue() -> int\nC++: virtual int GetLoopClosureMaxValue()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"GetLoopClosure", PyvtkContourLoopExtraction_GetLoopClosure, METH_VARARGS,
   "V.GetLoopClosure() -> int\nC++: virtual int GetLoopClosure()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"SetLoopClosureToOff", PyvtkContourLoopExtraction_SetLoopClosureToOff, METH_VARARGS,
   "V.SetLoopClosureToOff()\nC++: void SetLoopClosureToOff()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"SetLoopClosureToBoundary", PyvtkContourLoopExtraction_SetLoopClosureToBoundary, METH_VARARGS,
   "V.SetLoopClosureToBoundary()\nC++: void SetLoopClosureToBoundary()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"SetLoopClosureToAll", PyvtkContourLoopExtraction_SetLoopClosureToAll, METH_VARARGS,
   "V.SetLoopClosureToAll()\nC++: void SetLoopClosureToAll()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"GetLoopClosureAsString", PyvtkContourLoopExtraction_GetLoopClosureAsString, METH_VARARGS,
   "V.GetLoopClosureAsString() -> string\nC++: const char *GetLoopClosureAsString()\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"SetScalarThresholding", PyvtkContourLoopExtraction_SetScalarThresholding, METH_VARARGS,
   "V.SetScalarThresholding(bool)\nC++: virtual void SetScalarThresholding(bool _arg)\n\nTurn on/off the extraction of loops based on scalar thresholding.\n Loops with scalar values in a specified range can be extracted.\nIf no scalars are available from the input than this data member\nis ignored.\n"},
  {"GetScalarThresholding", PyvtkContourLoopExtraction_GetScalarThresholding, METH_VARARGS,
   "V.GetScalarThresholding() -> bool\nC++: virtual bool GetScalarThresholding()\n\nTurn on/off the extraction of loops based on scalar thresholding.\n Loops with scalar values in a specified range can be extracted.\nIf no scalars are available from the input than this data member\nis ignored.\n"},
  {"ScalarThresholdingOn", PyvtkContourLoopExtraction_ScalarThresholdingOn, METH_VARARGS,
   "V.ScalarThresholdingOn()\nC++: virtual void ScalarThresholdingOn()\n\nTurn on/off the extraction of loops based on scalar thresholding.\n Loops with scalar values in a specified range can be extracted.\nIf no scalars are available from the input than this data member\nis ignored.\n"},
  {"ScalarThresholdingOff", PyvtkContourLoopExtraction_ScalarThresholdingOff, METH_VARARGS,
   "V.ScalarThresholdingOff()\nC++: virtual void ScalarThresholdingOff()\n\nTurn on/off the extraction of loops based on scalar thresholding.\n Loops with scalar values in a specified range can be extracted.\nIf no scalars are available from the input than this data member\nis ignored.\n"},
  {"SetScalarRange", PyvtkContourLoopExtraction_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkContourLoopExtraction_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {"SetNormal", PyvtkContourLoopExtraction_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkContourLoopExtraction_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {"SetOutputMode", PyvtkContourLoopExtraction_SetOutputMode, METH_VARARGS,
   "V.SetOutputMode(int)\nC++: virtual void SetOutputMode(int _arg)\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"GetOutputModeMinValue", PyvtkContourLoopExtraction_GetOutputModeMinValue, METH_VARARGS,
   "V.GetOutputModeMinValue() -> int\nC++: virtual int GetOutputModeMinValue()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"GetOutputModeMaxValue", PyvtkContourLoopExtraction_GetOutputModeMaxValue, METH_VARARGS,
   "V.GetOutputModeMaxValue() -> int\nC++: virtual int GetOutputModeMaxValue()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"GetOutputMode", PyvtkContourLoopExtraction_GetOutputMode, METH_VARARGS,
   "V.GetOutputMode() -> int\nC++: virtual int GetOutputMode()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"SetOutputModeToPolygons", PyvtkContourLoopExtraction_SetOutputModeToPolygons, METH_VARARGS,
   "V.SetOutputModeToPolygons()\nC++: void SetOutputModeToPolygons()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"SetOutputModeToPolylines", PyvtkContourLoopExtraction_SetOutputModeToPolylines, METH_VARARGS,
   "V.SetOutputModeToPolylines()\nC++: void SetOutputModeToPolylines()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"SetOutputModeToBoth", PyvtkContourLoopExtraction_SetOutputModeToBoth, METH_VARARGS,
   "V.SetOutputModeToBoth()\nC++: void SetOutputModeToBoth()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"GetOutputModeAsString", PyvtkContourLoopExtraction_GetOutputModeAsString, METH_VARARGS,
   "V.GetOutputModeAsString() -> string\nC++: const char *GetOutputModeAsString()\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContourLoopExtraction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkContourLoopExtraction", // tp_name
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
  PyvtkContourLoopExtraction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContourLoopExtraction_StaticNew()
{
  return vtkContourLoopExtraction::New();
}

PyObject *PyvtkContourLoopExtraction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContourLoopExtraction_Type, PyvtkContourLoopExtraction_Methods,
    "vtkContourLoopExtraction",
 &PyvtkContourLoopExtraction_StaticNew);

  PyTypeObject *pytype = &PyvtkContourLoopExtraction_Type;

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

void PyVTKAddFile_vtkContourLoopExtraction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourLoopExtraction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourLoopExtraction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_LOOP_CLOSURE_OFF", 0 },
        { "VTK_LOOP_CLOSURE_BOUNDARY", 1 },
        { "VTK_LOOP_CLOSURE_ALL", 2 },
        { "VTK_OUTPUT_POLYGONS", 0 },
        { "VTK_OUTPUT_POLYLINES", 1 },
        { "VTK_OUTPUT_BOTH", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

