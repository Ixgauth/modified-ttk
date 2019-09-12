// python wrapper for vtkRibbonFilter
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
#include "vtkRibbonFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRibbonFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRibbonFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkRibbonFilter_Doc =
  "vtkRibbonFilter - create oriented ribbons from lines defined in\npolygonal dataset\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRibbonFilter is a filter to create oriented ribbons from lines\n"
  "defined in polygonal dataset. The orientation of the ribbon is along\n"
  "the line segments and perpendicular to \"projected\" line normals.\n"
  "Projected line normals are the original line normals projected to be\n"
  "perpendicular to the local line segment. An offset angle can be\n"
  "specified to rotate the ribbon with respect to the normal.\n\n"
  "@warning\n"
  "The input line must not have duplicate points, or normals at points\n"
  "that are parallel to the incoming/outgoing line segments. (Duplicate\n"
  "points can be removed with vtkCleanPolyData.) If a line does not meet\n"
  "this criteria, then that line is not tubed.\n\n"
  "@sa\n"
  "vtkTubeFilter\n\n";


static PyObject *
PyvtkRibbonFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRibbonFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRibbonFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRibbonFilter *tempr = vtkRibbonFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRibbonFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRibbonFilter::NewInstance());

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
PyvtkRibbonFilter_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidth(temp0);
    }
    else
    {
      op->vtkRibbonFilter::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthMinValue() :
      op->vtkRibbonFilter::GetWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthMaxValue() :
      op->vtkRibbonFilter::GetWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkRibbonFilter::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkRibbonFilter::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkRibbonFilter::GetAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkRibbonFilter::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRibbonFilter::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetVaryWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVaryWidth(temp0);
    }
    else
    {
      op->vtkRibbonFilter::SetVaryWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetVaryWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryWidth() :
      op->vtkRibbonFilter::GetVaryWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_VaryWidthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VaryWidthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VaryWidthOn();
    }
    else
    {
      op->vtkRibbonFilter::VaryWidthOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_VaryWidthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VaryWidthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VaryWidthOff();
    }
    else
    {
      op->vtkRibbonFilter::VaryWidthOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidthFactor(temp0);
    }
    else
    {
      op->vtkRibbonFilter::SetWidthFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetWidthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthFactor() :
      op->vtkRibbonFilter::GetWidthFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->vtkRibbonFilter::SetDefaultNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRibbonFilter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->vtkRibbonFilter::SetDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRibbonFilter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRibbonFilter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkRibbonFilter_SetDefaultNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return nullptr;
}



static PyObject *
PyvtkRibbonFilter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultNormal() :
      op->vtkRibbonFilter::GetDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->vtkRibbonFilter::SetUseDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultNormal() :
      op->vtkRibbonFilter::GetUseDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOn();
    }
    else
    {
      op->vtkRibbonFilter::UseDefaultNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOff();
    }
    else
    {
      op->vtkRibbonFilter::UseDefaultNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->vtkRibbonFilter::SetGenerateTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkRibbonFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkRibbonFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkRibbonFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToOff();
    }
    else
    {
      op->vtkRibbonFilter::SetGenerateTCoordsToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToNormalizedLength();
    }
    else
    {
      op->vtkRibbonFilter::SetGenerateTCoordsToNormalizedLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseLength();
    }
    else
    {
      op->vtkRibbonFilter::SetGenerateTCoordsToUseLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseScalars();
    }
    else
    {
      op->vtkRibbonFilter::SetGenerateTCoordsToUseScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkRibbonFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

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
      op->vtkRibbonFilter::SetTextureLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkRibbonFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkRibbonFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRibbonFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRibbonFilter *op = static_cast<vtkRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkRibbonFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRibbonFilter_Methods[] = {
  {"IsTypeOf", PyvtkRibbonFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRibbonFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRibbonFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRibbonFilter\nC++: static vtkRibbonFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRibbonFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRibbonFilter\nC++: vtkRibbonFilter *NewInstance()\n\n"},
  {"SetWidth", PyvtkRibbonFilter_SetWidth, METH_VARARGS,
   "V.SetWidth(float)\nC++: virtual void SetWidth(double _arg)\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {"GetWidthMinValue", PyvtkRibbonFilter_GetWidthMinValue, METH_VARARGS,
   "V.GetWidthMinValue() -> float\nC++: virtual double GetWidthMinValue()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {"GetWidthMaxValue", PyvtkRibbonFilter_GetWidthMaxValue, METH_VARARGS,
   "V.GetWidthMaxValue() -> float\nC++: virtual double GetWidthMaxValue()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {"GetWidth", PyvtkRibbonFilter_GetWidth, METH_VARARGS,
   "V.GetWidth() -> float\nC++: virtual double GetWidth()\n\nSet the \"half\" width of the ribbon. If the width is allowed to\nvary, this is the minimum width. The default is 0.5\n"},
  {"SetAngle", PyvtkRibbonFilter_SetAngle, METH_VARARGS,
   "V.SetAngle(float)\nC++: virtual void SetAngle(double _arg)\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {"GetAngleMinValue", PyvtkRibbonFilter_GetAngleMinValue, METH_VARARGS,
   "V.GetAngleMinValue() -> float\nC++: virtual double GetAngleMinValue()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {"GetAngleMaxValue", PyvtkRibbonFilter_GetAngleMaxValue, METH_VARARGS,
   "V.GetAngleMaxValue() -> float\nC++: virtual double GetAngleMaxValue()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {"GetAngle", PyvtkRibbonFilter_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nSet the offset angle of the ribbon from the line normal. (The\nangle is expressed in degrees.) The default is 0.0\n"},
  {"SetVaryWidth", PyvtkRibbonFilter_SetVaryWidth, METH_VARARGS,
   "V.SetVaryWidth(int)\nC++: virtual void SetVaryWidth(vtkTypeBool _arg)\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {"GetVaryWidth", PyvtkRibbonFilter_GetVaryWidth, METH_VARARGS,
   "V.GetVaryWidth() -> int\nC++: virtual vtkTypeBool GetVaryWidth()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {"VaryWidthOn", PyvtkRibbonFilter_VaryWidthOn, METH_VARARGS,
   "V.VaryWidthOn()\nC++: virtual void VaryWidthOn()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {"VaryWidthOff", PyvtkRibbonFilter_VaryWidthOff, METH_VARARGS,
   "V.VaryWidthOff()\nC++: virtual void VaryWidthOff()\n\nTurn on/off the variation of ribbon width with scalar value. The\ndefault is Off\n"},
  {"SetWidthFactor", PyvtkRibbonFilter_SetWidthFactor, METH_VARARGS,
   "V.SetWidthFactor(float)\nC++: virtual void SetWidthFactor(double _arg)\n\nSet the maximum ribbon width in terms of a multiple of the\nminimum width. The default is 2.0\n"},
  {"GetWidthFactor", PyvtkRibbonFilter_GetWidthFactor, METH_VARARGS,
   "V.GetWidthFactor() -> float\nC++: virtual double GetWidthFactor()\n\nSet the maximum ribbon width in terms of a multiple of the\nminimum width. The default is 2.0\n"},
  {"SetDefaultNormal", PyvtkRibbonFilter_SetDefaultNormal, METH_VARARGS,
   "V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(double, double, double)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(double a[3])\n\n"},
  {"GetDefaultNormal", PyvtkRibbonFilter_GetDefaultNormal, METH_VARARGS,
   "V.GetDefaultNormal() -> (float, float, float)\nC++: double *GetDefaultNormal()\n\nSet the default normal to use if no normals are supplied, and\nDefaultNormalOn is set. The default is (0,0,1)\n"},
  {"SetUseDefaultNormal", PyvtkRibbonFilter_SetUseDefaultNormal, METH_VARARGS,
   "V.SetUseDefaultNormal(int)\nC++: virtual void SetUseDefaultNormal(vtkTypeBool _arg)\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {"GetUseDefaultNormal", PyvtkRibbonFilter_GetUseDefaultNormal, METH_VARARGS,
   "V.GetUseDefaultNormal() -> int\nC++: virtual vtkTypeBool GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {"UseDefaultNormalOn", PyvtkRibbonFilter_UseDefaultNormalOn, METH_VARARGS,
   "V.UseDefaultNormalOn()\nC++: virtual void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {"UseDefaultNormalOff", PyvtkRibbonFilter_UseDefaultNormalOff, METH_VARARGS,
   "V.UseDefaultNormalOff()\nC++: virtual void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals. The\ndefault is Off\n"},
  {"SetGenerateTCoords", PyvtkRibbonFilter_SetGenerateTCoords, METH_VARARGS,
   "V.SetGenerateTCoords(int)\nC++: virtual void SetGenerateTCoords(int _arg)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"GetGenerateTCoordsMinValue", PyvtkRibbonFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   "V.GetGenerateTCoordsMinValue() -> int\nC++: virtual int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"GetGenerateTCoordsMaxValue", PyvtkRibbonFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   "V.GetGenerateTCoordsMaxValue() -> int\nC++: virtual int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"GetGenerateTCoords", PyvtkRibbonFilter_GetGenerateTCoords, METH_VARARGS,
   "V.GetGenerateTCoords() -> int\nC++: virtual int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"SetGenerateTCoordsToOff", PyvtkRibbonFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   "V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"SetGenerateTCoordsToNormalizedLength", PyvtkRibbonFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   "V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"SetGenerateTCoordsToUseLength", PyvtkRibbonFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   "V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"SetGenerateTCoordsToUseScalars", PyvtkRibbonFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   "V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"GetGenerateTCoordsAsString", PyvtkRibbonFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   "V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the ribbon with time textures, etc.\n"},
  {"SetTextureLength", PyvtkRibbonFilter_SetTextureLength, METH_VARARGS,
   "V.SetTextureLength(float)\nC++: virtual void SetTextureLength(double _arg)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {"GetTextureLengthMinValue", PyvtkRibbonFilter_GetTextureLengthMinValue, METH_VARARGS,
   "V.GetTextureLengthMinValue() -> float\nC++: virtual double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {"GetTextureLengthMaxValue", PyvtkRibbonFilter_GetTextureLengthMaxValue, METH_VARARGS,
   "V.GetTextureLengthMaxValue() -> float\nC++: virtual double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {"GetTextureLength", PyvtkRibbonFilter_GetTextureLength, METH_VARARGS,
   "V.GetTextureLength() -> float\nC++: virtual double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace. The default is 1.0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRibbonFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkRibbonFilter", // tp_name
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
  PyvtkRibbonFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRibbonFilter_StaticNew()
{
  return vtkRibbonFilter::New();
}

PyObject *PyvtkRibbonFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRibbonFilter_Type, PyvtkRibbonFilter_Methods,
    "vtkRibbonFilter",
 &PyvtkRibbonFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkRibbonFilter_Type;

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

void PyVTKAddFile_vtkRibbonFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRibbonFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRibbonFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
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

