// python wrapper for vtkTubeFilter
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
#include "vtkTubeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTubeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTubeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkTubeFilter_Doc =
  "vtkTubeFilter - filter that generates tubes around lines\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTubeFilter is a filter that generates a tube around each input\n"
  "line. The tubes are made up of triangle strips and rotate around the\n"
  "tube with the rotation of the line normals. (If no normals are\n"
  "present, they are computed automatically.) The radius of the tube can\n"
  "be set to vary with scalar or vector value. If the radius varies with\n"
  "scalar value the radius is linearly adjusted. If the radius varies\n"
  "with vector value, a mass flux preserving variation is used. The\n"
  "number of sides for the tube also can be specified. You can also\n"
  "specify which of the sides are visible. This is useful for generating\n"
  "interesting striping effects. Other options include the ability to\n"
  "cap the tube and generate texture coordinates. Texture coordinates\n"
  "can be used with an associated texture map to create interesting\n"
  "effects such as marking the tube with stripes corresponding to length\n"
  "or time.\n\n"
  "This filter is typically used to create thick or dramatic lines.\n"
  "Another common use is to combine this filter with vtkStreamTracer to\n"
  "generate streamtubes.\n\n"
  "@warning\n"
  "The number of tube sides must be greater than 3. If you wish to use\n"
  "fewer sides (i.e., a ribbon), use vtkRibbonFilter.\n\n"
  "@warning\n"
  "The input line must not have duplicate points, or normals at points\n"
  "that are parallel to the incoming/outgoing line segments. (Duplicate\n"
  "points can be removed with vtkCleanPolyData.) If a line does not meet\n"
  "this criteria, then that line is not tubed.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkStreamTracer\n\n"
  "@par Thanks: Michael Finch for absolute scalar radius\n\n";


static PyObject *
PyvtkTubeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTubeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTubeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTubeFilter *tempr = vtkTubeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTubeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTubeFilter::NewInstance());

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
PyvtkTubeFilter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkTubeFilter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkTubeFilter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkTubeFilter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadius(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryRadiusMinValue() :
      op->vtkTubeFilter::GetVaryRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryRadiusMaxValue() :
      op->vtkTubeFilter::GetVaryRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryRadius() :
      op->vtkTubeFilter::GetVaryRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusOff();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByScalar();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByVector();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByAbsoluteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByAbsoluteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByAbsoluteScalar();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByAbsoluteScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVaryRadiusAsString() :
      op->vtkTubeFilter::GetVaryRadiusAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSides(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetNumberOfSides(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMinValue() :
      op->vtkTubeFilter::GetNumberOfSidesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMaxValue() :
      op->vtkTubeFilter::GetNumberOfSidesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSides() :
      op->vtkTubeFilter::GetNumberOfSides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactor(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetRadiusFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusFactor() :
      op->vtkTubeFilter::GetRadiusFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->SetDefaultNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTubeFilter::SetDefaultNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTubeFilter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormal(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTubeFilter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTubeFilter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkTubeFilter_SetDefaultNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return nullptr;
}



static PyObject *
PyvtkTubeFilter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultNormal() :
      op->vtkTubeFilter::GetDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDefaultNormal(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetUseDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultNormal() :
      op->vtkTubeFilter::GetUseDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOn();
    }
    else
    {
      op->vtkTubeFilter::UseDefaultNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOff();
    }
    else
    {
      op->vtkTubeFilter::UseDefaultNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetSidesShareVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSidesShareVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSidesShareVertices(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetSidesShareVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetSidesShareVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSidesShareVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSidesShareVertices() :
      op->vtkTubeFilter::GetSidesShareVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SidesShareVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SidesShareVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SidesShareVerticesOn();
    }
    else
    {
      op->vtkTubeFilter::SidesShareVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SidesShareVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SidesShareVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SidesShareVerticesOff();
    }
    else
    {
      op->vtkTubeFilter::SidesShareVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkTubeFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkTubeFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkTubeFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnRatio(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetOnRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkTubeFilter::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkTubeFilter::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkTubeFilter::GetOnRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkTubeFilter::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkTubeFilter::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkTubeFilter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoords(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkTubeFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkTubeFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkTubeFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToOff();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToNormalizedLength();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToNormalizedLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseLength();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToUseLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseScalars();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToUseScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkTubeFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureLength(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetTextureLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkTubeFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkTubeFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkTubeFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTubeFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTubeFilter_Methods[] = {
  {"IsTypeOf", PyvtkTubeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTubeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTubeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTubeFilter\nC++: static vtkTubeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTubeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTubeFilter\nC++: vtkTubeFilter *NewInstance()\n\n"},
  {"SetRadius", PyvtkTubeFilter_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {"GetRadiusMinValue", PyvtkTubeFilter_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {"GetRadiusMaxValue", PyvtkTubeFilter_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {"GetRadius", PyvtkTubeFilter_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {"SetVaryRadius", PyvtkTubeFilter_SetVaryRadius, METH_VARARGS,
   "V.SetVaryRadius(int)\nC++: virtual void SetVaryRadius(int _arg)\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"GetVaryRadiusMinValue", PyvtkTubeFilter_GetVaryRadiusMinValue, METH_VARARGS,
   "V.GetVaryRadiusMinValue() -> int\nC++: virtual int GetVaryRadiusMinValue()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"GetVaryRadiusMaxValue", PyvtkTubeFilter_GetVaryRadiusMaxValue, METH_VARARGS,
   "V.GetVaryRadiusMaxValue() -> int\nC++: virtual int GetVaryRadiusMaxValue()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"GetVaryRadius", PyvtkTubeFilter_GetVaryRadius, METH_VARARGS,
   "V.GetVaryRadius() -> int\nC++: virtual int GetVaryRadius()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"SetVaryRadiusToVaryRadiusOff", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusOff, METH_VARARGS,
   "V.SetVaryRadiusToVaryRadiusOff()\nC++: void SetVaryRadiusToVaryRadiusOff()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"SetVaryRadiusToVaryRadiusByScalar", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByScalar, METH_VARARGS,
   "V.SetVaryRadiusToVaryRadiusByScalar()\nC++: void SetVaryRadiusToVaryRadiusByScalar()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"SetVaryRadiusToVaryRadiusByVector", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVector, METH_VARARGS,
   "V.SetVaryRadiusToVaryRadiusByVector()\nC++: void SetVaryRadiusToVaryRadiusByVector()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"SetVaryRadiusToVaryRadiusByAbsoluteScalar", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByAbsoluteScalar, METH_VARARGS,
   "V.SetVaryRadiusToVaryRadiusByAbsoluteScalar()\nC++: void SetVaryRadiusToVaryRadiusByAbsoluteScalar()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"GetVaryRadiusAsString", PyvtkTubeFilter_GetVaryRadiusAsString, METH_VARARGS,
   "V.GetVaryRadiusAsString() -> string\nC++: const char *GetVaryRadiusAsString()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"SetNumberOfSides", PyvtkTubeFilter_SetNumberOfSides, METH_VARARGS,
   "V.SetNumberOfSides(int)\nC++: virtual void SetNumberOfSides(int _arg)\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {"GetNumberOfSidesMinValue", PyvtkTubeFilter_GetNumberOfSidesMinValue, METH_VARARGS,
   "V.GetNumberOfSidesMinValue() -> int\nC++: virtual int GetNumberOfSidesMinValue()\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {"GetNumberOfSidesMaxValue", PyvtkTubeFilter_GetNumberOfSidesMaxValue, METH_VARARGS,
   "V.GetNumberOfSidesMaxValue() -> int\nC++: virtual int GetNumberOfSidesMaxValue()\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {"GetNumberOfSides", PyvtkTubeFilter_GetNumberOfSides, METH_VARARGS,
   "V.GetNumberOfSides() -> int\nC++: virtual int GetNumberOfSides()\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {"SetRadiusFactor", PyvtkTubeFilter_SetRadiusFactor, METH_VARARGS,
   "V.SetRadiusFactor(float)\nC++: virtual void SetRadiusFactor(double _arg)\n\nSet the maximum tube radius in terms of a multiple of the minimum\nradius.\n"},
  {"GetRadiusFactor", PyvtkTubeFilter_GetRadiusFactor, METH_VARARGS,
   "V.GetRadiusFactor() -> float\nC++: virtual double GetRadiusFactor()\n\nSet the maximum tube radius in terms of a multiple of the minimum\nradius.\n"},
  {"SetDefaultNormal", PyvtkTubeFilter_SetDefaultNormal, METH_VARARGS,
   "V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(double, double, double)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(double a[3])\n\n"},
  {"GetDefaultNormal", PyvtkTubeFilter_GetDefaultNormal, METH_VARARGS,
   "V.GetDefaultNormal() -> (float, float, float)\nC++: double *GetDefaultNormal()\n\nSet the default normal to use if no normals are supplied, and the\nDefaultNormalOn is set.\n"},
  {"SetUseDefaultNormal", PyvtkTubeFilter_SetUseDefaultNormal, METH_VARARGS,
   "V.SetUseDefaultNormal(int)\nC++: virtual void SetUseDefaultNormal(vtkTypeBool _arg)\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {"GetUseDefaultNormal", PyvtkTubeFilter_GetUseDefaultNormal, METH_VARARGS,
   "V.GetUseDefaultNormal() -> int\nC++: virtual vtkTypeBool GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {"UseDefaultNormalOn", PyvtkTubeFilter_UseDefaultNormalOn, METH_VARARGS,
   "V.UseDefaultNormalOn()\nC++: virtual void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {"UseDefaultNormalOff", PyvtkTubeFilter_UseDefaultNormalOff, METH_VARARGS,
   "V.UseDefaultNormalOff()\nC++: virtual void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {"SetSidesShareVertices", PyvtkTubeFilter_SetSidesShareVertices, METH_VARARGS,
   "V.SetSidesShareVertices(int)\nC++: virtual void SetSidesShareVertices(vtkTypeBool _arg)\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {"GetSidesShareVertices", PyvtkTubeFilter_GetSidesShareVertices, METH_VARARGS,
   "V.GetSidesShareVertices() -> int\nC++: virtual vtkTypeBool GetSidesShareVertices()\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {"SidesShareVerticesOn", PyvtkTubeFilter_SidesShareVerticesOn, METH_VARARGS,
   "V.SidesShareVerticesOn()\nC++: virtual void SidesShareVerticesOn()\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {"SidesShareVerticesOff", PyvtkTubeFilter_SidesShareVerticesOff, METH_VARARGS,
   "V.SidesShareVerticesOff()\nC++: virtual void SidesShareVerticesOff()\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {"SetCapping", PyvtkTubeFilter_SetCapping, METH_VARARGS,
   "V.SetCapping(int)\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off whether to cap the ends with polygons. Initial value\nis off.\n"},
  {"GetCapping", PyvtkTubeFilter_GetCapping, METH_VARARGS,
   "V.GetCapping() -> int\nC++: virtual vtkTypeBool GetCapping()\n\nTurn on/off whether to cap the ends with polygons. Initial value\nis off.\n"},
  {"CappingOn", PyvtkTubeFilter_CappingOn, METH_VARARGS,
   "V.CappingOn()\nC++: virtual void CappingOn()\n\nTurn on/off whether to cap the ends with polygons. Initial value\nis off.\n"},
  {"CappingOff", PyvtkTubeFilter_CappingOff, METH_VARARGS,
   "V.CappingOff()\nC++: virtual void CappingOff()\n\nTurn on/off whether to cap the ends with polygons. Initial value\nis off.\n"},
  {"SetOnRatio", PyvtkTubeFilter_SetOnRatio, METH_VARARGS,
   "V.SetOnRatio(int)\nC++: virtual void SetOnRatio(int _arg)\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {"GetOnRatioMinValue", PyvtkTubeFilter_GetOnRatioMinValue, METH_VARARGS,
   "V.GetOnRatioMinValue() -> int\nC++: virtual int GetOnRatioMinValue()\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {"GetOnRatioMaxValue", PyvtkTubeFilter_GetOnRatioMaxValue, METH_VARARGS,
   "V.GetOnRatioMaxValue() -> int\nC++: virtual int GetOnRatioMaxValue()\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {"GetOnRatio", PyvtkTubeFilter_GetOnRatio, METH_VARARGS,
   "V.GetOnRatio() -> int\nC++: virtual int GetOnRatio()\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {"SetOffset", PyvtkTubeFilter_SetOffset, METH_VARARGS,
   "V.SetOffset(int)\nC++: virtual void SetOffset(int _arg)\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {"GetOffsetMinValue", PyvtkTubeFilter_GetOffsetMinValue, METH_VARARGS,
   "V.GetOffsetMinValue() -> int\nC++: virtual int GetOffsetMinValue()\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {"GetOffsetMaxValue", PyvtkTubeFilter_GetOffsetMaxValue, METH_VARARGS,
   "V.GetOffsetMaxValue() -> int\nC++: virtual int GetOffsetMaxValue()\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {"GetOffset", PyvtkTubeFilter_GetOffset, METH_VARARGS,
   "V.GetOffset() -> int\nC++: virtual int GetOffset()\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {"SetGenerateTCoords", PyvtkTubeFilter_SetGenerateTCoords, METH_VARARGS,
   "V.SetGenerateTCoords(int)\nC++: virtual void SetGenerateTCoords(int _arg)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"GetGenerateTCoordsMinValue", PyvtkTubeFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   "V.GetGenerateTCoordsMinValue() -> int\nC++: virtual int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"GetGenerateTCoordsMaxValue", PyvtkTubeFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   "V.GetGenerateTCoordsMaxValue() -> int\nC++: virtual int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"GetGenerateTCoords", PyvtkTubeFilter_GetGenerateTCoords, METH_VARARGS,
   "V.GetGenerateTCoords() -> int\nC++: virtual int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"SetGenerateTCoordsToOff", PyvtkTubeFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   "V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"SetGenerateTCoordsToNormalizedLength", PyvtkTubeFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   "V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"SetGenerateTCoordsToUseLength", PyvtkTubeFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   "V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"SetGenerateTCoordsToUseScalars", PyvtkTubeFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   "V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"GetGenerateTCoordsAsString", PyvtkTubeFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   "V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"SetTextureLength", PyvtkTubeFilter_SetTextureLength, METH_VARARGS,
   "V.SetTextureLength(float)\nC++: virtual void SetTextureLength(double _arg)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLengthMinValue", PyvtkTubeFilter_GetTextureLengthMinValue, METH_VARARGS,
   "V.GetTextureLengthMinValue() -> float\nC++: virtual double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLengthMaxValue", PyvtkTubeFilter_GetTextureLengthMaxValue, METH_VARARGS,
   "V.GetTextureLengthMaxValue() -> float\nC++: virtual double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLength", PyvtkTubeFilter_GetTextureLength, METH_VARARGS,
   "V.GetTextureLength() -> float\nC++: virtual double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"SetOutputPointsPrecision", PyvtkTubeFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkTubeFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTubeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkTubeFilter", // tp_name
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
  PyvtkTubeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTubeFilter_StaticNew()
{
  return vtkTubeFilter::New();
}

PyObject *PyvtkTubeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTubeFilter_Type, PyvtkTubeFilter_Methods,
    "vtkTubeFilter",
 &PyvtkTubeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkTubeFilter_Type;

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

void PyVTKAddFile_vtkTubeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTubeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTubeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_VARY_RADIUS_OFF", 0 },
        { "VTK_VARY_RADIUS_BY_SCALAR", 1 },
        { "VTK_VARY_RADIUS_BY_VECTOR", 2 },
        { "VTK_VARY_RADIUS_BY_ABSOLUTE_SCALAR", 3 },
        { "VTK_TCOORDS_OFF", 0 },
        { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
        { "VTK_TCOORDS_FROM_LENGTH", 2 },
        { "VTK_TCOORDS_FROM_SCALARS", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

