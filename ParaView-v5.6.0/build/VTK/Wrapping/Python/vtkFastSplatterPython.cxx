// python wrapper for vtkFastSplatter
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
#include "vtkFastSplatter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFastSplatter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFastSplatter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkFastSplatter_Doc =
  "vtkFastSplatter - A splatter optimized for splatting single kernels.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkFastSplatter takes any vtkPointSet as input (of which vtkPolyData\n"
  "and vtkUnstructuredGrid inherit).  Each point in the data set is\n"
  "considered to be an impulse.  These impulses are convolved with a\n"
  "given splat image.  In other words, the splat image is added to the\n"
  "final image at every place where there is an input point.\n\n"
  "Note that point and cell data are thrown away.  If you want a\n"
  "sampling of unstructured points consider vtkGaussianSplatter or\n"
  "vtkShepardMethod.\n\n"
  "Use input port 0 for the impulse data (vtkPointSet), and input port 1\n"
  "for the splat image (vtkImageData)\n\n"
  "@bug Any point outside of the extents of the image is thrown away,\n"
  "even if it is close enough such that it's convolution with the splat\n"
  "image would overlap the extents.\n\n";


static PyObject *
PyvtkFastSplatter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFastSplatter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFastSplatter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFastSplatter *tempr = vtkFastSplatter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFastSplatter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFastSplatter::NewInstance());

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
PyvtkFastSplatter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

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
      op->vtkFastSplatter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

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
      op->vtkFastSplatter::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFastSplatter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkFastSplatter_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkFastSplatter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkFastSplatter::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetOutputDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

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
      op->SetOutputDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFastSplatter::SetOutputDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetOutputDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensions(temp0);
    }
    else
    {
      op->vtkFastSplatter::SetOutputDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetOutputDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkFastSplatter_SetOutputDimensions_s1(self, args);
    case 1:
      return PyvtkFastSplatter_SetOutputDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputDimensions");
  return nullptr;
}



static PyObject *
PyvtkFastSplatter_GetOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputDimensions() :
      op->vtkFastSplatter::GetOutputDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLimitMode(temp0);
    }
    else
    {
      op->vtkFastSplatter::SetLimitMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetLimitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLimitMode() :
      op->vtkFastSplatter::GetLimitMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLimitModeToNone();
    }
    else
    {
      op->vtkFastSplatter::SetLimitModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLimitModeToClamp();
    }
    else
    {
      op->vtkFastSplatter::SetLimitModeToClamp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLimitModeToScale();
    }
    else
    {
      op->vtkFastSplatter::SetLimitModeToScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToFreezeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToFreezeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLimitModeToFreezeScale();
    }
    else
    {
      op->vtkFastSplatter::SetLimitModeToFreezeScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinValue(temp0);
    }
    else
    {
      op->vtkFastSplatter::SetMinValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinValue() :
      op->vtkFastSplatter::GetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxValue(temp0);
    }
    else
    {
      op->vtkFastSplatter::SetMaxValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxValue() :
      op->vtkFastSplatter::GetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetNumberOfPointsSplatted(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsSplatted");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsSplatted() :
      op->vtkFastSplatter::GetNumberOfPointsSplatted());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetSplatConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplatConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSplatConnection(temp0);
    }
    else
    {
      op->vtkFastSplatter::SetSplatConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFastSplatter_Methods[] = {
  {"IsTypeOf", PyvtkFastSplatter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFastSplatter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFastSplatter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFastSplatter\nC++: static vtkFastSplatter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFastSplatter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFastSplatter\nC++: vtkFastSplatter *NewInstance()\n\n"},
  {"SetModelBounds", PyvtkFastSplatter_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {"GetModelBounds", PyvtkFastSplatter_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {"SetOutputDimensions", PyvtkFastSplatter_SetOutputDimensions, METH_VARARGS,
   "V.SetOutputDimensions(int, int, int)\nC++: void SetOutputDimensions(int, int, int)\nV.SetOutputDimensions((int, int, int))\nC++: void SetOutputDimensions(int a[3])\n\n"},
  {"GetOutputDimensions", PyvtkFastSplatter_GetOutputDimensions, METH_VARARGS,
   "V.GetOutputDimensions() -> (int, int, int)\nC++: int *GetOutputDimensions()\n\n"},
  {"SetLimitMode", PyvtkFastSplatter_SetLimitMode, METH_VARARGS,
   "V.SetLimitMode(int)\nC++: virtual void SetLimitMode(int _arg)\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {"GetLimitMode", PyvtkFastSplatter_GetLimitMode, METH_VARARGS,
   "V.GetLimitMode() -> int\nC++: virtual int GetLimitMode()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {"SetLimitModeToNone", PyvtkFastSplatter_SetLimitModeToNone, METH_VARARGS,
   "V.SetLimitModeToNone()\nC++: void SetLimitModeToNone()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {"SetLimitModeToClamp", PyvtkFastSplatter_SetLimitModeToClamp, METH_VARARGS,
   "V.SetLimitModeToClamp()\nC++: void SetLimitModeToClamp()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {"SetLimitModeToScale", PyvtkFastSplatter_SetLimitModeToScale, METH_VARARGS,
   "V.SetLimitModeToScale()\nC++: void SetLimitModeToScale()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {"SetLimitModeToFreezeScale", PyvtkFastSplatter_SetLimitModeToFreezeScale, METH_VARARGS,
   "V.SetLimitModeToFreezeScale()\nC++: void SetLimitModeToFreezeScale()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {"SetMinValue", PyvtkFastSplatter_SetMinValue, METH_VARARGS,
   "V.SetMinValue(float)\nC++: virtual void SetMinValue(double _arg)\n\nSee the LimitMode method.\n"},
  {"GetMinValue", PyvtkFastSplatter_GetMinValue, METH_VARARGS,
   "V.GetMinValue() -> float\nC++: virtual double GetMinValue()\n\nSee the LimitMode method.\n"},
  {"SetMaxValue", PyvtkFastSplatter_SetMaxValue, METH_VARARGS,
   "V.SetMaxValue(float)\nC++: virtual void SetMaxValue(double _arg)\n\nSee the LimitMode method.\n"},
  {"GetMaxValue", PyvtkFastSplatter_GetMaxValue, METH_VARARGS,
   "V.GetMaxValue() -> float\nC++: virtual double GetMaxValue()\n\nSee the LimitMode method.\n"},
  {"GetNumberOfPointsSplatted", PyvtkFastSplatter_GetNumberOfPointsSplatted, METH_VARARGS,
   "V.GetNumberOfPointsSplatted() -> int\nC++: virtual int GetNumberOfPointsSplatted()\n\nThis returns the number of points splatted (as opposed to\ndiscarded for being outside the image) during the previous pass.\n"},
  {"SetSplatConnection", PyvtkFastSplatter_SetSplatConnection, METH_VARARGS,
   "V.SetSplatConnection(vtkAlgorithmOutput)\nC++: void SetSplatConnection(vtkAlgorithmOutput *)\n\nConvenience function for connecting the splat algorithm source.\nThis is provided mainly for convenience using the filter with\nParaView, VTK users should prefer SetInputConnection(1, splat)\ninstead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFastSplatter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkFastSplatter", // tp_name
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
  PyvtkFastSplatter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFastSplatter_StaticNew()
{
  return vtkFastSplatter::New();
}

PyObject *PyvtkFastSplatter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFastSplatter_Type, PyvtkFastSplatter_Methods,
    "vtkFastSplatter",
 &PyvtkFastSplatter_StaticNew);

  PyTypeObject *pytype = &PyvtkFastSplatter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "NoneLimit", vtkFastSplatter::NoneLimit },
        { "ClampLimit", vtkFastSplatter::ClampLimit },
        { "ScaleLimit", vtkFastSplatter::ScaleLimit },
        { "FreezeScaleLimit", vtkFastSplatter::FreezeScaleLimit },
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

void PyVTKAddFile_vtkFastSplatter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFastSplatter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFastSplatter", o) != 0)
  {
    Py_DECREF(o);
  }

}

