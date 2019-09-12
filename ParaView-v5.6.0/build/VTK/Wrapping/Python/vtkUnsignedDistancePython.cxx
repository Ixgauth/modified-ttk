// python wrapper for vtkUnsignedDistance
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
#include "vtkInformationVector.h"
#include "vtkUnsignedDistance.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnsignedDistance(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnsignedDistance_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkUnsignedDistance_Doc =
  "vtkUnsignedDistance - compute unsigned (i.e., non-negative) distances\nfrom an input point cloud\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkUnsignedDistance is a filter that computes non-negative (i.e.,\n"
  "unsigned) distances over a volume from an input point cloud. This\n"
  "filter is distinct from vtkSignedDistance in that it does not require\n"
  "point normals. However, isocontouring a zero-valued distance function\n"
  "(e.g., trying to fit a surface will produce unsatisfactory results).\n"
  "Rather this filter, when combined with an isocontouring filter such\n"
  "as vtkFlyingEdges3D, can produce an offset, bounding surface\n"
  "surrounding the input point cloud.\n\n"
  "To use this filter, specify the input vtkPolyData (which represents\n"
  "the point cloud); define the sampling volume; specify a radius (which\n"
  "limits the radius of influence of each point); and set an optional\n"
  "point locator (to accelerate proximity operations, a\n"
  "vtkStaticPointLocator is used by default). Note that large radius\n"
  "values may have significant impact on performance. The volume is\n"
  "defined by specifying dimensions in the x-y-z directions, as well as\n"
  "a domain bounds. By default the model bounds are defined from the\n"
  "input points, but the user can also manually specify them. Finally,\n"
  "because the radius data member limits the influence of the distance\n"
  "calculation, some voxels may receive no contribution. These voxel\n"
  "values are set to the CapValue.\n\n"
  "This filter has one other unusual capability: it is possible to\n"
  "append data in a sequence of operations to generate a single output.\n"
  "This is useful when you have multiple point clouds (e.g., possibly\n"
  "from multiple acqusition scans) and want to incrementally accumulate\n"
  "all the data. However, the user must be careful to either specify the\n"
  "Bounds or order the input such that the bounds of the first input\n"
  "completely contains all other input data.  This is because the\n"
  "geometry and topology of the output sampling volume cannot be changed\n"
  "after the initial Append operation.\n\n"
  "@warning\n"
  "Note that multiple, non-connected surfaces may be produced. For\n"
  "example, if the point cloud is from the surface of the sphere, it is\n"
  "possible to generate two surfaces (with isocontouring): one inside\n"
  "the sphere, one outside the sphere. It is sometimes possible to\n"
  "select the surface you want from the output of the contouring filter\n"
  "by using vtkPolyDataConnectivityFilter.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkSignedDistance vtkExtractSurface vtkImplicitModeller\n\n";


static PyObject *
PyvtkUnsignedDistance_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnsignedDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnsignedDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnsignedDistance *tempr = vtkUnsignedDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnsignedDistance::NewInstance());

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
PyvtkUnsignedDistance_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkUnsignedDistance::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnsignedDistance::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnsignedDistance_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkUnsignedDistance::SetDimensions(temp0);
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
PyvtkUnsignedDistance_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnsignedDistance_SetDimensions_s1(self, args);
    case 1:
      return PyvtkUnsignedDistance_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}



static PyObject *
PyvtkUnsignedDistance_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkUnsignedDistance::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnsignedDistance_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkUnsignedDistance::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnsignedDistance_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkUnsignedDistance_SetBounds_s1(self, args);
    case 1:
      return PyvtkUnsignedDistance_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkUnsignedDistance_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkUnsignedDistance::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetAdjustBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustBounds(temp0);
    }
    else
    {
      op->vtkUnsignedDistance::SetAdjustBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetAdjustBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustBounds() :
      op->vtkUnsignedDistance::GetAdjustBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_AdjustBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustBoundsOn();
    }
    else
    {
      op->vtkUnsignedDistance::AdjustBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_AdjustBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustBoundsOff();
    }
    else
    {
      op->vtkUnsignedDistance::AdjustBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustDistance(temp0);
    }
    else
    {
      op->vtkUnsignedDistance::SetAdjustDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetAdjustDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMinValue() :
      op->vtkUnsignedDistance::GetAdjustDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetAdjustDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMaxValue() :
      op->vtkUnsignedDistance::GetAdjustDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistance() :
      op->vtkUnsignedDistance::GetAdjustDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->vtkUnsignedDistance::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkUnsignedDistance::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkUnsignedDistance::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkUnsignedDistance::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkUnsignedDistance::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkUnsignedDistance::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->vtkUnsignedDistance::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkUnsignedDistance::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkUnsignedDistance::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkUnsignedDistance::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->vtkUnsignedDistance::SetCapValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCapValue() :
      op->vtkUnsignedDistance::GetCapValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

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
      op->vtkUnsignedDistance::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkUnsignedDistance::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkUnsignedDistance::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkUnsignedDistance::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_StartAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartAppend();
    }
    else
    {
      op->vtkUnsignedDistance::StartAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0);
    }
    else
    {
      op->vtkUnsignedDistance::Append(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnsignedDistance_EndAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnsignedDistance *op = static_cast<vtkUnsignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndAppend();
    }
    else
    {
      op->vtkUnsignedDistance::EndAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnsignedDistance_Methods[] = {
  {"IsTypeOf", PyvtkUnsignedDistance_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"IsA", PyvtkUnsignedDistance_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"SafeDownCast", PyvtkUnsignedDistance_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUnsignedDistance\nC++: static vtkUnsignedDistance *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"NewInstance", PyvtkUnsignedDistance_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnsignedDistance\nC++: vtkUnsignedDistance *NewInstance()\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"GetDimensions", PyvtkUnsignedDistance_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> (int, int, int)\nC++: int *GetDimensions()\n\nSet/Get the i-j-k dimensions on which to computer the distance\nfunction.\n"},
  {"SetDimensions", PyvtkUnsignedDistance_SetDimensions, METH_VARARGS,
   "V.SetDimensions(int, int, int)\nC++: void SetDimensions(int i, int j, int k)\nV.SetDimensions([int, int, int])\nC++: void SetDimensions(int dim[3])\n\nSet/Get the i-j-k dimensions on which to computer the distance\nfunction.\n"},
  {"SetBounds", PyvtkUnsignedDistance_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkUnsignedDistance_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSet / get the region in space in which to perform the sampling.\nIf not specified, it will be computed automatically.\n"},
  {"SetAdjustBounds", PyvtkUnsignedDistance_SetAdjustBounds, METH_VARARGS,
   "V.SetAdjustBounds(int)\nC++: virtual void SetAdjustBounds(vtkTypeBool _arg)\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {"GetAdjustBounds", PyvtkUnsignedDistance_GetAdjustBounds, METH_VARARGS,
   "V.GetAdjustBounds() -> int\nC++: virtual vtkTypeBool GetAdjustBounds()\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {"AdjustBoundsOn", PyvtkUnsignedDistance_AdjustBoundsOn, METH_VARARGS,
   "V.AdjustBoundsOn()\nC++: virtual void AdjustBoundsOn()\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {"AdjustBoundsOff", PyvtkUnsignedDistance_AdjustBoundsOff, METH_VARARGS,
   "V.AdjustBoundsOff()\nC++: virtual void AdjustBoundsOff()\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {"SetAdjustDistance", PyvtkUnsignedDistance_SetAdjustDistance, METH_VARARGS,
   "V.SetAdjustDistance(float)\nC++: virtual void SetAdjustDistance(double _arg)\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {"GetAdjustDistanceMinValue", PyvtkUnsignedDistance_GetAdjustDistanceMinValue, METH_VARARGS,
   "V.GetAdjustDistanceMinValue() -> float\nC++: virtual double GetAdjustDistanceMinValue()\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {"GetAdjustDistanceMaxValue", PyvtkUnsignedDistance_GetAdjustDistanceMaxValue, METH_VARARGS,
   "V.GetAdjustDistanceMaxValue() -> float\nC++: virtual double GetAdjustDistanceMaxValue()\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {"GetAdjustDistance", PyvtkUnsignedDistance_GetAdjustDistance, METH_VARARGS,
   "V.GetAdjustDistance() -> float\nC++: virtual double GetAdjustDistance()\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {"SetRadius", PyvtkUnsignedDistance_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly.\n"},
  {"GetRadiusMinValue", PyvtkUnsignedDistance_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly.\n"},
  {"GetRadiusMaxValue", PyvtkUnsignedDistance_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly.\n"},
  {"GetRadius", PyvtkUnsignedDistance_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly.\n"},
  {"SetLocator", PyvtkUnsignedDistance_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\nsurrounding a voxel (within the specified radius).\n"},
  {"GetLocator", PyvtkUnsignedDistance_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\nsurrounding a voxel (within the specified radius).\n"},
  {"SetCapping", PyvtkUnsignedDistance_SetCapping, METH_VARARGS,
   "V.SetCapping(int)\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nThe outer boundary of the volume can be assigned a particular\nvalue after distances are computed. This can be used to close or\n\"cap\" all surfaces during isocontouring.\n"},
  {"GetCapping", PyvtkUnsignedDistance_GetCapping, METH_VARARGS,
   "V.GetCapping() -> int\nC++: virtual vtkTypeBool GetCapping()\n\nThe outer boundary of the volume can be assigned a particular\nvalue after distances are computed. This can be used to close or\n\"cap\" all surfaces during isocontouring.\n"},
  {"CappingOn", PyvtkUnsignedDistance_CappingOn, METH_VARARGS,
   "V.CappingOn()\nC++: virtual void CappingOn()\n\nThe outer boundary of the volume can be assigned a particular\nvalue after distances are computed. This can be used to close or\n\"cap\" all surfaces during isocontouring.\n"},
  {"CappingOff", PyvtkUnsignedDistance_CappingOff, METH_VARARGS,
   "V.CappingOff()\nC++: virtual void CappingOff()\n\nThe outer boundary of the volume can be assigned a particular\nvalue after distances are computed. This can be used to close or\n\"cap\" all surfaces during isocontouring.\n"},
  {"SetCapValue", PyvtkUnsignedDistance_SetCapValue, METH_VARARGS,
   "V.SetCapValue(float)\nC++: virtual void SetCapValue(double _arg)\n\nSpecify the capping value to use. The CapValue is also used as an\ninitial distance value at each point in the dataset. By default,\nthe CapValue is VTK_FLOAT_MAX;\n"},
  {"GetCapValue", PyvtkUnsignedDistance_GetCapValue, METH_VARARGS,
   "V.GetCapValue() -> float\nC++: virtual double GetCapValue()\n\nSpecify the capping value to use. The CapValue is also used as an\ninitial distance value at each point in the dataset. By default,\nthe CapValue is VTK_FLOAT_MAX;\n"},
  {"SetOutputScalarType", PyvtkUnsignedDistance_SetOutputScalarType, METH_VARARGS,
   "V.SetOutputScalarType(int)\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet the desired output scalar type. Currently only real types are\nsupported. By default, VTK_FLOAT scalars are created.\n"},
  {"GetOutputScalarType", PyvtkUnsignedDistance_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet the desired output scalar type. Currently only real types are\nsupported. By default, VTK_FLOAT scalars are created.\n"},
  {"SetOutputScalarTypeToFloat", PyvtkUnsignedDistance_SetOutputScalarTypeToFloat, METH_VARARGS,
   "V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type. Currently only real types are\nsupported. By default, VTK_FLOAT scalars are created.\n"},
  {"SetOutputScalarTypeToDouble", PyvtkUnsignedDistance_SetOutputScalarTypeToDouble, METH_VARARGS,
   "V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type. Currently only real types are\nsupported. By default, VTK_FLOAT scalars are created.\n"},
  {"StartAppend", PyvtkUnsignedDistance_StartAppend, METH_VARARGS,
   "V.StartAppend()\nC++: void StartAppend()\n\nInitialize the filter for appending data. You must invoke the\nStartAppend() method before doing successive Appends(). It's also\na good idea to manually specify the model bounds; otherwise the\ninput bounds for the data will be used.\n"},
  {"Append", PyvtkUnsignedDistance_Append, METH_VARARGS,
   "V.Append(vtkPolyData)\nC++: void Append(vtkPolyData *input)\n\nAppend a data set to the existing output. To use this function,\nyou'll have to invoke the StartAppend() method before doing\nsuccessive appends. It's also a good idea to specify the model\nbounds; otherwise the input model bounds is used. When you've\nfinished appending, use the EndAppend() method.\n"},
  {"EndAppend", PyvtkUnsignedDistance_EndAppend, METH_VARARGS,
   "V.EndAppend()\nC++: void EndAppend()\n\nMethod completes the append process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnsignedDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkUnsignedDistance", // tp_name
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
  PyvtkUnsignedDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnsignedDistance_StaticNew()
{
  return vtkUnsignedDistance::New();
}

PyObject *PyvtkUnsignedDistance_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnsignedDistance_Type, PyvtkUnsignedDistance_Methods,
    "vtkUnsignedDistance",
 &PyvtkUnsignedDistance_StaticNew);

  PyTypeObject *pytype = &PyvtkUnsignedDistance_Type;

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

void PyVTKAddFile_vtkUnsignedDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnsignedDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnsignedDistance", o) != 0)
  {
    Py_DECREF(o);
  }

}

