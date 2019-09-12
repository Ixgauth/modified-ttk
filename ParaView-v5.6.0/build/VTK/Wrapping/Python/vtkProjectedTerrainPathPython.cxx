// python wrapper for vtkProjectedTerrainPath
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
#include "vtkProjectedTerrainPath.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectedTerrainPath(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProjectedTerrainPath_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkProjectedTerrainPath_Doc =
  "vtkProjectedTerrainPath - project a polyline onto a terrain\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkProjectedTerrainPath projects an input polyline onto a terrain.\n"
  "(The terrain is defined by a 2D height image and is the second input\n"
  "to the filter.) The polyline projection is controlled via several\n"
  "modes as follows. 1) Simple mode projects the polyline points onto\n"
  "the terrain, taking into account the height offset instance variable.\n"
  "2) Non-occluded mode insures that no parts of the polyline are\n"
  "occluded by the terrain (e.g. a line passes through a mountain). This\n"
  "may require recursive subdivision of the polyline. 3) Hug mode\n"
  "insures that the polyine points remain within a constant distance\n"
  "from the surface. This may also require recursive subdivision of the\n"
  "polyline. Note that both non-occluded mode and hug mode also take\n"
  "into account the height offset, so it is possible to create paths\n"
  "that hug terrain a certain distance above it. To use this filter,\n"
  "define two inputs: 1) a polyline, and 2) an image whose scalar values\n"
  "represent a height field. Then specify the mode, and the height\n"
  "offset to use.\n\n"
  "An description of the algorithm is as follows. The filter begins by\n"
  "projecting the polyline points to the image (offset by the specified\n"
  "height offset).  If the mode is non-occluded or hug, then the maximum\n"
  "error along each line segment is computed and placed into a priority\n"
  "queue. Each line segment is then split at the point of maximum error,\n"
  "and the two new line segments are evaluated for maximum error. This\n"
  "process continues until the line is not occluded by the terrain\n"
  "(non-occluded mode) or satisfies the error on variation from the\n"
  "surface (hug mode). (Note this process is repeated for each polyline\n"
  "in the input. Also, the maximum error is computed in two parts: a\n"
  "maximum positive error and maximum negative error. If the polyline is\n"
  "above the terrain--i.e., the height offset is positive--in\n"
  "non-occluded or hug mode all negative errors are eliminated. If the\n"
  "polyline is below the terrain--i.e., the height offset is\n"
  "negative--in non-occluded or hug mode all positive errors are\n"
  "eliminated.)\n\n"
  "@warning\n"
  "This algorithm requires the entire input image to be in memory, hence\n"
  "it may not work for extremely large images.\n\n"
  "@warning\n"
  "The input height image is assumed to be positioned in the x-y plane\n"
  "so the scalar value is the z-coordinate, height value.\n\n"
  "@warning\n"
  "A priority queue is used so that the 1) the total number of line\n"
  "segments can be controlled, and 2) the algorithm can terminate when\n"
  "the errors in the queue are less than the specified error tolerance.\n\n"
  "@sa\n"
  "vtkGreedyTerrainDecimation\n\n";


static PyObject *
PyvtkProjectedTerrainPath_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectedTerrainPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTerrainPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectedTerrainPath *tempr = vtkProjectedTerrainPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectedTerrainPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTerrainPath::NewInstance());

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
PyvtkProjectedTerrainPath_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkProjectedTerrainPath::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProjectedTerrainPath::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkProjectedTerrainPath::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionMode(temp0);
    }
    else
    {
      op->vtkProjectedTerrainPath::SetProjectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionModeMinValue() :
      op->vtkProjectedTerrainPath::GetProjectionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionModeMaxValue() :
      op->vtkProjectedTerrainPath::GetProjectionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionMode() :
      op->vtkProjectedTerrainPath::GetProjectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionModeToSimple();
    }
    else
    {
      op->vtkProjectedTerrainPath::SetProjectionModeToSimple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToNonOccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToNonOccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionModeToNonOccluded();
    }
    else
    {
      op->vtkProjectedTerrainPath::SetProjectionModeToNonOccluded();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToHug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToHug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionModeToHug();
    }
    else
    {
      op->vtkProjectedTerrainPath::SetProjectionModeToHug();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeightOffset(temp0);
    }
    else
    {
      op->vtkProjectedTerrainPath::SetHeightOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightOffset() :
      op->vtkProjectedTerrainPath::GetHeightOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetHeightTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeightTolerance(temp0);
    }
    else
    {
      op->vtkProjectedTerrainPath::SetHeightTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightToleranceMinValue() :
      op->vtkProjectedTerrainPath::GetHeightToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightToleranceMaxValue() :
      op->vtkProjectedTerrainPath::GetHeightToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightTolerance() :
      op->vtkProjectedTerrainPath::GetHeightTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetMaximumNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfLines(temp0);
    }
    else
    {
      op->vtkProjectedTerrainPath::SetMaximumNumberOfLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLinesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLinesMinValue() :
      op->vtkProjectedTerrainPath::GetMaximumNumberOfLinesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLinesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLinesMaxValue() :
      op->vtkProjectedTerrainPath::GetMaximumNumberOfLinesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLines() :
      op->vtkProjectedTerrainPath::GetMaximumNumberOfLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectedTerrainPath_Methods[] = {
  {"IsTypeOf", PyvtkProjectedTerrainPath_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for printing and determining type information.\n"},
  {"IsA", PyvtkProjectedTerrainPath_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for printing and determining type information.\n"},
  {"SafeDownCast", PyvtkProjectedTerrainPath_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProjectedTerrainPath\nC++: static vtkProjectedTerrainPath *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for printing and determining type information.\n"},
  {"NewInstance", PyvtkProjectedTerrainPath_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProjectedTerrainPath\nC++: vtkProjectedTerrainPath *NewInstance()\n\nStandard methods for printing and determining type information.\n"},
  {"SetSourceData", PyvtkProjectedTerrainPath_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkImageData)\nC++: void SetSourceData(vtkImageData *source)\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected. Note: This assigns a data object as the\ninput terrain. To establish a pipeline connection, use\nSetSourceConnection() method.\n"},
  {"GetSource", PyvtkProjectedTerrainPath_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkImageData\nC++: vtkImageData *GetSource()\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected. Note: This assigns a data object as the\ninput terrain. To establish a pipeline connection, use\nSetSourceConnection() method.\n"},
  {"SetSourceConnection", PyvtkProjectedTerrainPath_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected. Note: vtkImageData* is required\n"},
  {"SetProjectionMode", PyvtkProjectedTerrainPath_SetProjectionMode, METH_VARARGS,
   "V.SetProjectionMode(int)\nC++: virtual void SetProjectionMode(int _arg)\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"GetProjectionModeMinValue", PyvtkProjectedTerrainPath_GetProjectionModeMinValue, METH_VARARGS,
   "V.GetProjectionModeMinValue() -> int\nC++: virtual int GetProjectionModeMinValue()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"GetProjectionModeMaxValue", PyvtkProjectedTerrainPath_GetProjectionModeMaxValue, METH_VARARGS,
   "V.GetProjectionModeMaxValue() -> int\nC++: virtual int GetProjectionModeMaxValue()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"GetProjectionMode", PyvtkProjectedTerrainPath_GetProjectionMode, METH_VARARGS,
   "V.GetProjectionMode() -> int\nC++: virtual int GetProjectionMode()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"SetProjectionModeToSimple", PyvtkProjectedTerrainPath_SetProjectionModeToSimple, METH_VARARGS,
   "V.SetProjectionModeToSimple()\nC++: void SetProjectionModeToSimple()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"SetProjectionModeToNonOccluded", PyvtkProjectedTerrainPath_SetProjectionModeToNonOccluded, METH_VARARGS,
   "V.SetProjectionModeToNonOccluded()\nC++: void SetProjectionModeToNonOccluded()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"SetProjectionModeToHug", PyvtkProjectedTerrainPath_SetProjectionModeToHug, METH_VARARGS,
   "V.SetProjectionModeToHug()\nC++: void SetProjectionModeToHug()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {"SetHeightOffset", PyvtkProjectedTerrainPath_SetHeightOffset, METH_VARARGS,
   "V.SetHeightOffset(float)\nC++: virtual void SetHeightOffset(double _arg)\n\nThis is the height above (or below) the terrain that the\nprojected path should be. Positive values indicate distances\nabove the terrain; negative values indicate distances below the\nterrain.\n"},
  {"GetHeightOffset", PyvtkProjectedTerrainPath_GetHeightOffset, METH_VARARGS,
   "V.GetHeightOffset() -> float\nC++: virtual double GetHeightOffset()\n\nThis is the height above (or below) the terrain that the\nprojected path should be. Positive values indicate distances\nabove the terrain; negative values indicate distances below the\nterrain.\n"},
  {"SetHeightTolerance", PyvtkProjectedTerrainPath_SetHeightTolerance, METH_VARARGS,
   "V.SetHeightTolerance(float)\nC++: virtual void SetHeightTolerance(double _arg)\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {"GetHeightToleranceMinValue", PyvtkProjectedTerrainPath_GetHeightToleranceMinValue, METH_VARARGS,
   "V.GetHeightToleranceMinValue() -> float\nC++: virtual double GetHeightToleranceMinValue()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {"GetHeightToleranceMaxValue", PyvtkProjectedTerrainPath_GetHeightToleranceMaxValue, METH_VARARGS,
   "V.GetHeightToleranceMaxValue() -> float\nC++: virtual double GetHeightToleranceMaxValue()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {"GetHeightTolerance", PyvtkProjectedTerrainPath_GetHeightTolerance, METH_VARARGS,
   "V.GetHeightTolerance() -> float\nC++: virtual double GetHeightTolerance()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {"SetMaximumNumberOfLines", PyvtkProjectedTerrainPath_SetMaximumNumberOfLines, METH_VARARGS,
   "V.SetMaximumNumberOfLines(int)\nC++: virtual void SetMaximumNumberOfLines(vtkIdType _arg)\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {"GetMaximumNumberOfLinesMinValue", PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfLinesMinValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfLinesMinValue()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {"GetMaximumNumberOfLinesMaxValue", PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfLinesMaxValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfLinesMaxValue()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {"GetMaximumNumberOfLines", PyvtkProjectedTerrainPath_GetMaximumNumberOfLines, METH_VARARGS,
   "V.GetMaximumNumberOfLines() -> int\nC++: virtual vtkIdType GetMaximumNumberOfLines()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProjectedTerrainPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkProjectedTerrainPath", // tp_name
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
  PyvtkProjectedTerrainPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectedTerrainPath_StaticNew()
{
  return vtkProjectedTerrainPath::New();
}

PyObject *PyvtkProjectedTerrainPath_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProjectedTerrainPath_Type, PyvtkProjectedTerrainPath_Methods,
    "vtkProjectedTerrainPath",
 &PyvtkProjectedTerrainPath_StaticNew);

  PyTypeObject *pytype = &PyvtkProjectedTerrainPath_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SIMPLE_PROJECTION", vtkProjectedTerrainPath::SIMPLE_PROJECTION },
        { "NONOCCLUDED_PROJECTION", vtkProjectedTerrainPath::NONOCCLUDED_PROJECTION },
        { "HUG_PROJECTION", vtkProjectedTerrainPath::HUG_PROJECTION },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectedTerrainPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectedTerrainPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectedTerrainPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

