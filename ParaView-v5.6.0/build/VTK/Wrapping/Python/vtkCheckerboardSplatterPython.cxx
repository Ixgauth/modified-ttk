// python wrapper for vtkCheckerboardSplatter
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
#include "vtkCheckerboardSplatter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCheckerboardSplatter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCheckerboardSplatter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkCheckerboardSplatter_Doc =
  "vtkCheckerboardSplatter - splat points into a volume with an\nelliptical, Gaussian distribution\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkCheckerboardSplatter is a filter that injects input points into a\n"
  "structured points (volume) dataset using a multithreaded 8-way\n"
  "checkerboard approach. It produces a scalar field of a specified\n"
  "type. As each point is injected, it \"splats\" or distributes values to\n"
  "nearby voxels. Data is distributed using an elliptical, Gaussian\n"
  "distribution function. The distribution function is modified using\n"
  "scalar values (expands distribution) or normals (creates ellipsoidal\n"
  "distribution rather than spherical). This algorithm is designed for\n"
  "scalability through multithreading.\n\n"
  "In general, the Gaussian distribution function f(x) around a given\n"
  "splat point p is given by\n\n\n"
  "    f(x) = ScaleFactor * exp( ExponentFactor*((r/Radius)**2) )\n\n"
  "where x is the current voxel sample point; r is the distance |x-p|\n"
  "ExponentFactor <= 0.0, and ScaleFactor can be multiplied by the\n"
  "scalar value of the point p that is currently being splatted.\n\n"
  "If point normals are present (and NormalWarping is on), then the\n"
  "splat function becomes elliptical (as compared to the spherical one\n"
  "described by the previous equation). The Gaussian distribution\n"
  "function then becomes:\n\n\n"
  "    f(x) = ScaleFactor *\n"
  "              exp( ExponentFactor*( ((rxy/E)**2 + z**2)/R**2) )\n\n"
  "where E is a user-defined eccentricity factor that controls the\n"
  "elliptical shape of the splat; z is the distance of the current voxel\n"
  "sample point along normal N; and rxy is the distance of x in the\n"
  "direction prependicular to N.\n\n"
  "This class is typically used to convert point-valued distributions\n"
  "into a volume representation. The volume is then usually iso-surfaced\n"
  "or volume rendered to generate a visualization. It can be used to\n"
  "create surfaces from point distributions, or to create structure\n"
  "(i.e., topology) when none exists.\n\n"
  "This class makes use of vtkSMPTools to implement a parallel,\n"
  "shared-memory implementation. Hence performance will be significantly\n"
  "improved if VTK is built with VTK_SMP_IMPLEMENTATION_TYPE set to\n"
  "something other than \"Sequential\" (typically TBB). For example, on a\n"
  "standard laptop with four threads it is common to see a >10x speedup\n"
  "as compared to the serial version of vtkGaussianSplatter.\n\n"
  "In summary, the algorithm operates by dividing the volume into a 3D\n"
  "checkerboard, where the squares of the checkerboard overlay voxels in\n"
  "the volume. The checkerboard overlay is designed as a function of the\n"
  "splat footprint, so that when splatting occurs in a group (or color)\n"
  "of checkerboard squares, the splat operation will not cause write\n"
  "contention as the splatting proceeds in parallel. There are eight\n"
  "colors in this checkerboard (like an octree) and parallel splatting\n"
  "occurs simultaneously in one of the eight colors (e.g., octants). A\n"
  "single splat operation (across the given 3D footprint) may also be\n"
  "parallelized if the splat is large enough.\n\n"
  "@warning\n"
  "The input to this filter is of type vtkPointSet. Currently only real\n"
  "types (e.g., float, double) are supported as input, but this could\n"
  "easily be extended to other types. The output type is limited to real\n"
  "types as well.\n\n"
  "@warning\n"
  "Some voxels may never receive a contribution during the splatting\n"
  "process. The final value of these points can be specified with the\n"
  "\"NullValue\" instance variable. Note that NullValue is also the\n"
  "initial value of the output voxel values and will affect the\n"
  "accumulation process.\n\n"
  "@warning\n"
  "While this class is very similar to vtkGaussianSplatter, it does\n"
  "produce slightly different output in most cases (due to the way the\n"
  "footprint is computed).\n\n"
  "@sa\n"
  "vtkShepardMethod vtkGaussianSplatter\n\n";


static PyObject *
PyvtkCheckerboardSplatter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCheckerboardSplatter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCheckerboardSplatter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCheckerboardSplatter *tempr = vtkCheckerboardSplatter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCheckerboardSplatter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCheckerboardSplatter::NewInstance());

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
PyvtkCheckerboardSplatter_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCheckerboardSplatter_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetSampleDimensions(temp0);
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
PyvtkCheckerboardSplatter_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCheckerboardSplatter_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkCheckerboardSplatter_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}



static PyObject *
PyvtkCheckerboardSplatter_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkCheckerboardSplatter::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCheckerboardSplatter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCheckerboardSplatter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCheckerboardSplatter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkCheckerboardSplatter_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkCheckerboardSplatter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkCheckerboardSplatter::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetFootprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFootprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFootprint(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetFootprint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetFootprintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFootprintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFootprintMinValue() :
      op->vtkCheckerboardSplatter::GetFootprintMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetFootprintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFootprintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFootprintMaxValue() :
      op->vtkCheckerboardSplatter::GetFootprintMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetFootprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFootprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFootprint() :
      op->vtkCheckerboardSplatter::GetFootprint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkCheckerboardSplatter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkCheckerboardSplatter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkCheckerboardSplatter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetScaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMinValue() :
      op->vtkCheckerboardSplatter::GetScaleFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetScaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMaxValue() :
      op->vtkCheckerboardSplatter::GetScaleFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkCheckerboardSplatter::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetExponentFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentFactor(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetExponentFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetExponentFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponentFactor() :
      op->vtkCheckerboardSplatter::GetExponentFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetScalarWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarWarping(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetScalarWarping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetScalarWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarWarping() :
      op->vtkCheckerboardSplatter::GetScalarWarping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_ScalarWarpingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWarpingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarWarpingOn();
    }
    else
    {
      op->vtkCheckerboardSplatter::ScalarWarpingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_ScalarWarpingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWarpingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarWarpingOff();
    }
    else
    {
      op->vtkCheckerboardSplatter::ScalarWarpingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetNormalWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalWarping(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetNormalWarping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetNormalWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalWarping() :
      op->vtkCheckerboardSplatter::GetNormalWarping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_NormalWarpingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalWarpingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalWarpingOn();
    }
    else
    {
      op->vtkCheckerboardSplatter::NormalWarpingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_NormalWarpingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalWarpingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalWarpingOff();
    }
    else
    {
      op->vtkCheckerboardSplatter::NormalWarpingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEccentricity(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetEccentricity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetEccentricityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricityMinValue() :
      op->vtkCheckerboardSplatter::GetEccentricityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetEccentricityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricityMaxValue() :
      op->vtkCheckerboardSplatter::GetEccentricityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricity() :
      op->vtkCheckerboardSplatter::GetEccentricity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetAccumulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationMode(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetAccumulationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetAccumulationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulationModeMinValue() :
      op->vtkCheckerboardSplatter::GetAccumulationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetAccumulationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulationModeMaxValue() :
      op->vtkCheckerboardSplatter::GetAccumulationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetAccumulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulationMode() :
      op->vtkCheckerboardSplatter::GetAccumulationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetAccumulationModeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationModeToMin();
    }
    else
    {
      op->vtkCheckerboardSplatter::SetAccumulationModeToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetAccumulationModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationModeToMax();
    }
    else
    {
      op->vtkCheckerboardSplatter::SetAccumulationModeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetAccumulationModeToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationModeToSum();
    }
    else
    {
      op->vtkCheckerboardSplatter::SetAccumulationModeToSum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetAccumulationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAccumulationModeAsString() :
      op->vtkCheckerboardSplatter::GetAccumulationModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkCheckerboardSplatter::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkCheckerboardSplatter::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkCheckerboardSplatter::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
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
      op->vtkCheckerboardSplatter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkCheckerboardSplatter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkCheckerboardSplatter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkCheckerboardSplatter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapValue(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetCapValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCapValue() :
      op->vtkCheckerboardSplatter::GetCapValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNullValue() :
      op->vtkCheckerboardSplatter::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetMaximumDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDimension(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetMaximumDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetMaximumDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDimensionMinValue() :
      op->vtkCheckerboardSplatter::GetMaximumDimensionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetMaximumDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDimensionMaxValue() :
      op->vtkCheckerboardSplatter::GetMaximumDimensionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetMaximumDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumDimension() :
      op->vtkCheckerboardSplatter::GetMaximumDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_SetParallelSplatCrossover(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelSplatCrossover");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelSplatCrossover(temp0);
    }
    else
    {
      op->vtkCheckerboardSplatter::SetParallelSplatCrossover(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetParallelSplatCrossoverMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelSplatCrossoverMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelSplatCrossoverMinValue() :
      op->vtkCheckerboardSplatter::GetParallelSplatCrossoverMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetParallelSplatCrossoverMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelSplatCrossoverMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelSplatCrossoverMaxValue() :
      op->vtkCheckerboardSplatter::GetParallelSplatCrossoverMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_GetParallelSplatCrossover(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelSplatCrossover");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelSplatCrossover() :
      op->vtkCheckerboardSplatter::GetParallelSplatCrossover());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardSplatter_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardSplatter *op = static_cast<vtkCheckerboardSplatter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ComputeModelBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCheckerboardSplatter::ComputeModelBounds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCheckerboardSplatter_Methods[] = {
  {"IsTypeOf", PyvtkCheckerboardSplatter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCheckerboardSplatter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCheckerboardSplatter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCheckerboardSplatter\nC++: static vtkCheckerboardSplatter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCheckerboardSplatter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCheckerboardSplatter\nC++: vtkCheckerboardSplatter *NewInstance()\n\n"},
  {"SetSampleDimensions", PyvtkCheckerboardSplatter_SetSampleDimensions, METH_VARARGS,
   "V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet / get the dimensions of the sampling structured point set.\nHigher values produce better results but may be much slower.\n"},
  {"GetSampleDimensions", PyvtkCheckerboardSplatter_GetSampleDimensions, METH_VARARGS,
   "V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSet / get the dimensions of the sampling structured point set.\nHigher values produce better results but may be much slower.\n"},
  {"SetModelBounds", PyvtkCheckerboardSplatter_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {"GetModelBounds", PyvtkCheckerboardSplatter_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {"SetFootprint", PyvtkCheckerboardSplatter_SetFootprint, METH_VARARGS,
   "V.SetFootprint(int)\nC++: virtual void SetFootprint(int _arg)\n\nControl the footprint size of the splat in terms of propagation\nacross a voxel neighborhood. The Footprint value simply indicates\nthe number of neigboring voxels in the i-j-k directions to extend\nthe splat. A value of zero means that only the voxel containing\nthe splat point is affected. A value of one means the immediate\nneighbors touching the affected voxel are affected as well.\nLarger numbers increase the splat footprint and significantly\nincrease processing time. Note that the footprint is always 3D\nrectangular.\n"},
  {"GetFootprintMinValue", PyvtkCheckerboardSplatter_GetFootprintMinValue, METH_VARARGS,
   "V.GetFootprintMinValue() -> int\nC++: virtual int GetFootprintMinValue()\n\nControl the footprint size of the splat in terms of propagation\nacross a voxel neighborhood. The Footprint value simply indicates\nthe number of neigboring voxels in the i-j-k directions to extend\nthe splat. A value of zero means that only the voxel containing\nthe splat point is affected. A value of one means the immediate\nneighbors touching the affected voxel are affected as well.\nLarger numbers increase the splat footprint and significantly\nincrease processing time. Note that the footprint is always 3D\nrectangular.\n"},
  {"GetFootprintMaxValue", PyvtkCheckerboardSplatter_GetFootprintMaxValue, METH_VARARGS,
   "V.GetFootprintMaxValue() -> int\nC++: virtual int GetFootprintMaxValue()\n\nControl the footprint size of the splat in terms of propagation\nacross a voxel neighborhood. The Footprint value simply indicates\nthe number of neigboring voxels in the i-j-k directions to extend\nthe splat. A value of zero means that only the voxel containing\nthe splat point is affected. A value of one means the immediate\nneighbors touching the affected voxel are affected as well.\nLarger numbers increase the splat footprint and significantly\nincrease processing time. Note that the footprint is always 3D\nrectangular.\n"},
  {"GetFootprint", PyvtkCheckerboardSplatter_GetFootprint, METH_VARARGS,
   "V.GetFootprint() -> int\nC++: virtual int GetFootprint()\n\nControl the footprint size of the splat in terms of propagation\nacross a voxel neighborhood. The Footprint value simply indicates\nthe number of neigboring voxels in the i-j-k directions to extend\nthe splat. A value of zero means that only the voxel containing\nthe splat point is affected. A value of one means the immediate\nneighbors touching the affected voxel are affected as well.\nLarger numbers increase the splat footprint and significantly\nincrease processing time. Note that the footprint is always 3D\nrectangular.\n"},
  {"SetRadius", PyvtkCheckerboardSplatter_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet / get the radius variable that controls the Gaussian\nexponential function (see equation above). If set to zero, it is\nautomatically set to the radius of the circumsphere bounding a\nsingle voxel. (By default, the Radius is set to zero and is\nautomatically computed.)\n"},
  {"GetRadiusMinValue", PyvtkCheckerboardSplatter_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet / get the radius variable that controls the Gaussian\nexponential function (see equation above). If set to zero, it is\nautomatically set to the radius of the circumsphere bounding a\nsingle voxel. (By default, the Radius is set to zero and is\nautomatically computed.)\n"},
  {"GetRadiusMaxValue", PyvtkCheckerboardSplatter_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet / get the radius variable that controls the Gaussian\nexponential function (see equation above). If set to zero, it is\nautomatically set to the radius of the circumsphere bounding a\nsingle voxel. (By default, the Radius is set to zero and is\nautomatically computed.)\n"},
  {"GetRadius", PyvtkCheckerboardSplatter_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet / get the radius variable that controls the Gaussian\nexponential function (see equation above). If set to zero, it is\nautomatically set to the radius of the circumsphere bounding a\nsingle voxel. (By default, the Radius is set to zero and is\nautomatically computed.)\n"},
  {"SetScaleFactor", PyvtkCheckerboardSplatter_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {"GetScaleFactorMinValue", PyvtkCheckerboardSplatter_GetScaleFactorMinValue, METH_VARARGS,
   "V.GetScaleFactorMinValue() -> float\nC++: virtual double GetScaleFactorMinValue()\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {"GetScaleFactorMaxValue", PyvtkCheckerboardSplatter_GetScaleFactorMaxValue, METH_VARARGS,
   "V.GetScaleFactorMaxValue() -> float\nC++: virtual double GetScaleFactorMaxValue()\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {"GetScaleFactor", PyvtkCheckerboardSplatter_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {"SetExponentFactor", PyvtkCheckerboardSplatter_SetExponentFactor, METH_VARARGS,
   "V.SetExponentFactor(float)\nC++: virtual void SetExponentFactor(double _arg)\n\nSet / get the sharpness of decay of the splats. This is the\nexponent constant in the Gaussian equation described above.\nNormally this is a negative value.\n"},
  {"GetExponentFactor", PyvtkCheckerboardSplatter_GetExponentFactor, METH_VARARGS,
   "V.GetExponentFactor() -> float\nC++: virtual double GetExponentFactor()\n\nSet / get the sharpness of decay of the splats. This is the\nexponent constant in the Gaussian equation described above.\nNormally this is a negative value.\n"},
  {"SetScalarWarping", PyvtkCheckerboardSplatter_SetScalarWarping, METH_VARARGS,
   "V.SetScalarWarping(int)\nC++: virtual void SetScalarWarping(vtkTypeBool _arg)\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {"GetScalarWarping", PyvtkCheckerboardSplatter_GetScalarWarping, METH_VARARGS,
   "V.GetScalarWarping() -> int\nC++: virtual vtkTypeBool GetScalarWarping()\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {"ScalarWarpingOn", PyvtkCheckerboardSplatter_ScalarWarpingOn, METH_VARARGS,
   "V.ScalarWarpingOn()\nC++: virtual void ScalarWarpingOn()\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {"ScalarWarpingOff", PyvtkCheckerboardSplatter_ScalarWarpingOff, METH_VARARGS,
   "V.ScalarWarpingOff()\nC++: virtual void ScalarWarpingOff()\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {"SetNormalWarping", PyvtkCheckerboardSplatter_SetNormalWarping, METH_VARARGS,
   "V.SetNormalWarping(int)\nC++: virtual void SetNormalWarping(vtkTypeBool _arg)\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {"GetNormalWarping", PyvtkCheckerboardSplatter_GetNormalWarping, METH_VARARGS,
   "V.GetNormalWarping() -> int\nC++: virtual vtkTypeBool GetNormalWarping()\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {"NormalWarpingOn", PyvtkCheckerboardSplatter_NormalWarpingOn, METH_VARARGS,
   "V.NormalWarpingOn()\nC++: virtual void NormalWarpingOn()\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {"NormalWarpingOff", PyvtkCheckerboardSplatter_NormalWarpingOff, METH_VARARGS,
   "V.NormalWarpingOff()\nC++: virtual void NormalWarpingOff()\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {"SetEccentricity", PyvtkCheckerboardSplatter_SetEccentricity, METH_VARARGS,
   "V.SetEccentricity(float)\nC++: virtual void SetEccentricity(double _arg)\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {"GetEccentricityMinValue", PyvtkCheckerboardSplatter_GetEccentricityMinValue, METH_VARARGS,
   "V.GetEccentricityMinValue() -> float\nC++: virtual double GetEccentricityMinValue()\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {"GetEccentricityMaxValue", PyvtkCheckerboardSplatter_GetEccentricityMaxValue, METH_VARARGS,
   "V.GetEccentricityMaxValue() -> float\nC++: virtual double GetEccentricityMaxValue()\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {"GetEccentricity", PyvtkCheckerboardSplatter_GetEccentricity, METH_VARARGS,
   "V.GetEccentricity() -> float\nC++: virtual double GetEccentricity()\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {"SetAccumulationMode", PyvtkCheckerboardSplatter_SetAccumulationMode, METH_VARARGS,
   "V.SetAccumulationMode(int)\nC++: virtual void SetAccumulationMode(int _arg)\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"GetAccumulationModeMinValue", PyvtkCheckerboardSplatter_GetAccumulationModeMinValue, METH_VARARGS,
   "V.GetAccumulationModeMinValue() -> int\nC++: virtual int GetAccumulationModeMinValue()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"GetAccumulationModeMaxValue", PyvtkCheckerboardSplatter_GetAccumulationModeMaxValue, METH_VARARGS,
   "V.GetAccumulationModeMaxValue() -> int\nC++: virtual int GetAccumulationModeMaxValue()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"GetAccumulationMode", PyvtkCheckerboardSplatter_GetAccumulationMode, METH_VARARGS,
   "V.GetAccumulationMode() -> int\nC++: virtual int GetAccumulationMode()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"SetAccumulationModeToMin", PyvtkCheckerboardSplatter_SetAccumulationModeToMin, METH_VARARGS,
   "V.SetAccumulationModeToMin()\nC++: void SetAccumulationModeToMin()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"SetAccumulationModeToMax", PyvtkCheckerboardSplatter_SetAccumulationModeToMax, METH_VARARGS,
   "V.SetAccumulationModeToMax()\nC++: void SetAccumulationModeToMax()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"SetAccumulationModeToSum", PyvtkCheckerboardSplatter_SetAccumulationModeToSum, METH_VARARGS,
   "V.SetAccumulationModeToSum()\nC++: void SetAccumulationModeToSum()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"GetAccumulationModeAsString", PyvtkCheckerboardSplatter_GetAccumulationModeAsString, METH_VARARGS,
   "V.GetAccumulationModeAsString() -> string\nC++: const char *GetAccumulationModeAsString()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats overlap one another. The\nMax mode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird (and can potentially cause accumulation overflow in\nextreme cases). Note that the NullValue must be set consistent\nwith the accumulation operation.\n"},
  {"SetOutputScalarType", PyvtkCheckerboardSplatter_SetOutputScalarType, METH_VARARGS,
   "V.SetOutputScalarType(int)\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet what type of scalar data this source should generate. Only\ndouble and float types are supported currently due to precision\nrequirements during accumulation. By default, float scalars are\nproduced.\n"},
  {"GetOutputScalarType", PyvtkCheckerboardSplatter_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet what type of scalar data this source should generate. Only\ndouble and float types are supported currently due to precision\nrequirements during accumulation. By default, float scalars are\nproduced.\n"},
  {"SetOutputScalarTypeToDouble", PyvtkCheckerboardSplatter_SetOutputScalarTypeToDouble, METH_VARARGS,
   "V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet what type of scalar data this source should generate. Only\ndouble and float types are supported currently due to precision\nrequirements during accumulation. By default, float scalars are\nproduced.\n"},
  {"SetOutputScalarTypeToFloat", PyvtkCheckerboardSplatter_SetOutputScalarTypeToFloat, METH_VARARGS,
   "V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet what type of scalar data this source should generate. Only\ndouble and float types are supported currently due to precision\nrequirements during accumulation. By default, float scalars are\nproduced.\n"},
  {"SetCapping", PyvtkCheckerboardSplatter_SetCapping, METH_VARARGS,
   "V.SetCapping(int)\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {"GetCapping", PyvtkCheckerboardSplatter_GetCapping, METH_VARARGS,
   "V.GetCapping() -> int\nC++: virtual vtkTypeBool GetCapping()\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {"CappingOn", PyvtkCheckerboardSplatter_CappingOn, METH_VARARGS,
   "V.CappingOn()\nC++: virtual void CappingOn()\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {"CappingOff", PyvtkCheckerboardSplatter_CappingOff, METH_VARARGS,
   "V.CappingOff()\nC++: virtual void CappingOff()\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {"SetCapValue", PyvtkCheckerboardSplatter_SetCapValue, METH_VARARGS,
   "V.SetCapValue(float)\nC++: virtual void SetCapValue(double _arg)\n\nSpecify the cap value to use. (This instance variable only has\neffect if the ivar Capping is on.)\n"},
  {"GetCapValue", PyvtkCheckerboardSplatter_GetCapValue, METH_VARARGS,
   "V.GetCapValue() -> float\nC++: virtual double GetCapValue()\n\nSpecify the cap value to use. (This instance variable only has\neffect if the ivar Capping is on.)\n"},
  {"SetNullValue", PyvtkCheckerboardSplatter_SetNullValue, METH_VARARGS,
   "V.SetNullValue(float)\nC++: virtual void SetNullValue(double _arg)\n\nSet the Null value for output points not receiving a contribution\nfrom the input points. (This is the initial value of the voxel\nsamples, by default it is set to zero.) Note that the value\nshould be consistent with the output dataset type. The NullValue\nalso provides the initial value on which the accumulations\nprocess operates.\n"},
  {"GetNullValue", PyvtkCheckerboardSplatter_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> float\nC++: virtual double GetNullValue()\n\nSet the Null value for output points not receiving a contribution\nfrom the input points. (This is the initial value of the voxel\nsamples, by default it is set to zero.) Note that the value\nshould be consistent with the output dataset type. The NullValue\nalso provides the initial value on which the accumulations\nprocess operates.\n"},
  {"SetMaximumDimension", PyvtkCheckerboardSplatter_SetMaximumDimension, METH_VARARGS,
   "V.SetMaximumDimension(int)\nC++: virtual void SetMaximumDimension(int _arg)\n\nSet/Get the maximum dimension of the checkerboard (i.e., the\nnumber of squares in any of the i, j, or k directions). This\nnumber also impacts the granularity of the parallel threading\n(since each checker square is processed separaely). Because of\nthe internal addressing, the maximum dimension is limited to 255\n(maximum value of an unsigned char).\n"},
  {"GetMaximumDimensionMinValue", PyvtkCheckerboardSplatter_GetMaximumDimensionMinValue, METH_VARARGS,
   "V.GetMaximumDimensionMinValue() -> int\nC++: virtual int GetMaximumDimensionMinValue()\n\nSet/Get the maximum dimension of the checkerboard (i.e., the\nnumber of squares in any of the i, j, or k directions). This\nnumber also impacts the granularity of the parallel threading\n(since each checker square is processed separaely). Because of\nthe internal addressing, the maximum dimension is limited to 255\n(maximum value of an unsigned char).\n"},
  {"GetMaximumDimensionMaxValue", PyvtkCheckerboardSplatter_GetMaximumDimensionMaxValue, METH_VARARGS,
   "V.GetMaximumDimensionMaxValue() -> int\nC++: virtual int GetMaximumDimensionMaxValue()\n\nSet/Get the maximum dimension of the checkerboard (i.e., the\nnumber of squares in any of the i, j, or k directions). This\nnumber also impacts the granularity of the parallel threading\n(since each checker square is processed separaely). Because of\nthe internal addressing, the maximum dimension is limited to 255\n(maximum value of an unsigned char).\n"},
  {"GetMaximumDimension", PyvtkCheckerboardSplatter_GetMaximumDimension, METH_VARARGS,
   "V.GetMaximumDimension() -> int\nC++: virtual int GetMaximumDimension()\n\nSet/Get the maximum dimension of the checkerboard (i.e., the\nnumber of squares in any of the i, j, or k directions). This\nnumber also impacts the granularity of the parallel threading\n(since each checker square is processed separaely). Because of\nthe internal addressing, the maximum dimension is limited to 255\n(maximum value of an unsigned char).\n"},
  {"SetParallelSplatCrossover", PyvtkCheckerboardSplatter_SetParallelSplatCrossover, METH_VARARGS,
   "V.SetParallelSplatCrossover(int)\nC++: virtual void SetParallelSplatCrossover(int _arg)\n\nSet/get the crossover point expressed in footprint size where the\nsplatting operation is parallelized (through vtkSMPTools). By\ndefault the parallel crossover point is for splat footprints of\nsize two or greater (i.e., at footprint=2 then splat is 5x5x5 and\nparallel splatting occurs). This is really meant for experimental\npurposes.\n"},
  {"GetParallelSplatCrossoverMinValue", PyvtkCheckerboardSplatter_GetParallelSplatCrossoverMinValue, METH_VARARGS,
   "V.GetParallelSplatCrossoverMinValue() -> int\nC++: virtual int GetParallelSplatCrossoverMinValue()\n\nSet/get the crossover point expressed in footprint size where the\nsplatting operation is parallelized (through vtkSMPTools). By\ndefault the parallel crossover point is for splat footprints of\nsize two or greater (i.e., at footprint=2 then splat is 5x5x5 and\nparallel splatting occurs). This is really meant for experimental\npurposes.\n"},
  {"GetParallelSplatCrossoverMaxValue", PyvtkCheckerboardSplatter_GetParallelSplatCrossoverMaxValue, METH_VARARGS,
   "V.GetParallelSplatCrossoverMaxValue() -> int\nC++: virtual int GetParallelSplatCrossoverMaxValue()\n\nSet/get the crossover point expressed in footprint size where the\nsplatting operation is parallelized (through vtkSMPTools). By\ndefault the parallel crossover point is for splat footprints of\nsize two or greater (i.e., at footprint=2 then splat is 5x5x5 and\nparallel splatting occurs). This is really meant for experimental\npurposes.\n"},
  {"GetParallelSplatCrossover", PyvtkCheckerboardSplatter_GetParallelSplatCrossover, METH_VARARGS,
   "V.GetParallelSplatCrossover() -> int\nC++: virtual int GetParallelSplatCrossover()\n\nSet/get the crossover point expressed in footprint size where the\nsplatting operation is parallelized (through vtkSMPTools). By\ndefault the parallel crossover point is for splat footprints of\nsize two or greater (i.e., at footprint=2 then splat is 5x5x5 and\nparallel splatting occurs). This is really meant for experimental\npurposes.\n"},
  {"ComputeModelBounds", PyvtkCheckerboardSplatter_ComputeModelBounds, METH_VARARGS,
   "V.ComputeModelBounds(vtkDataSet, vtkImageData, vtkInformation)\nC++: void ComputeModelBounds(vtkDataSet *input,\n    vtkImageData *output, vtkInformation *outInfo)\n\nCompute the size of the sample bounding box automatically from\nthe input data. This is an internal helper function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCheckerboardSplatter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkCheckerboardSplatter", // tp_name
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
  PyvtkCheckerboardSplatter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCheckerboardSplatter_StaticNew()
{
  return vtkCheckerboardSplatter::New();
}

PyObject *PyvtkCheckerboardSplatter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCheckerboardSplatter_Type, PyvtkCheckerboardSplatter_Methods,
    "vtkCheckerboardSplatter",
 &PyvtkCheckerboardSplatter_StaticNew);

  PyTypeObject *pytype = &PyvtkCheckerboardSplatter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCheckerboardSplatter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCheckerboardSplatter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCheckerboardSplatter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_ACCUMULATION_MODE_MIN", 0 },
        { "VTK_ACCUMULATION_MODE_MAX", 1 },
        { "VTK_ACCUMULATION_MODE_SUM", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

