// python wrapper for vtkEllipticalButtonSource
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
#include "vtkEllipticalButtonSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEllipticalButtonSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEllipticalButtonSource_ClassNew(); }

#ifndef DECLARED_PyvtkButtonSource_ClassNew
extern "C" { PyObject *PyvtkButtonSource_ClassNew(); }
#define DECLARED_PyvtkButtonSource_ClassNew
#endif

static const char *PyvtkEllipticalButtonSource_Doc =
  "vtkEllipticalButtonSource - create a ellipsoidal-shaped button\n\n"
  "Superclass: vtkButtonSource\n\n"
  "vtkEllipticalButtonSource creates a ellipsoidal shaped button with\n"
  "texture coordinates suitable for application of a texture map. This\n"
  "provides a way to make nice looking 3D buttons. The buttons are\n"
  "represented as vtkPolyData that includes texture coordinates and\n"
  "normals. The button lies in the x-y plane.\n\n"
  "To use this class you must define the major and minor axes lengths of\n"
  "an ellipsoid (expressed as width (x), height (y) and depth (z)). The\n"
  "button has a rectangular mesh region in the center with texture\n"
  "coordinates that range smoothly from (0,1). (This flat region is\n"
  "called the texture region.) The outer, curved portion of the button\n"
  "(called the shoulder) has texture coordinates set to a user specified\n"
  "value (by default (0,0). (This results in coloring the button curve\n"
  "the same color as the (s,t) location of the texture map.) The\n"
  "resolution in the radial direction, the texture region, and the\n"
  "shoulder region must also be set. The button can be moved by\n"
  "specifying an origin.\n\n"
  "@sa\n"
  "vtkButtonSource vtkRectangularButtonSource\n\n";


static PyObject *
PyvtkEllipticalButtonSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEllipticalButtonSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEllipticalButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEllipticalButtonSource *tempr = vtkEllipticalButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEllipticalButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEllipticalButtonSource::NewInstance());

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
PyvtkEllipticalButtonSource_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

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
      op->vtkEllipticalButtonSource::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthMinValue() :
      op->vtkEllipticalButtonSource::GetWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthMaxValue() :
      op->vtkEllipticalButtonSource::GetWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkEllipticalButtonSource::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkEllipticalButtonSource::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkEllipticalButtonSource::GetHeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkEllipticalButtonSource::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkEllipticalButtonSource::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepth(temp0);
    }
    else
    {
      op->vtkEllipticalButtonSource::SetDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDepthMinValue() :
      op->vtkEllipticalButtonSource::GetDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDepthMaxValue() :
      op->vtkEllipticalButtonSource::GetDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkEllipticalButtonSource::GetDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCircumferentialResolution(temp0);
    }
    else
    {
      op->vtkEllipticalButtonSource::SetCircumferentialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMinValue() :
      op->vtkEllipticalButtonSource::GetCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMaxValue() :
      op->vtkEllipticalButtonSource::GetCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolution() :
      op->vtkEllipticalButtonSource::GetCircumferentialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetTextureResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureResolution(temp0);
    }
    else
    {
      op->vtkEllipticalButtonSource::SetTextureResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureResolutionMinValue() :
      op->vtkEllipticalButtonSource::GetTextureResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureResolutionMaxValue() :
      op->vtkEllipticalButtonSource::GetTextureResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetTextureResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureResolution() :
      op->vtkEllipticalButtonSource::GetTextureResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetShoulderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShoulderResolution(temp0);
    }
    else
    {
      op->vtkEllipticalButtonSource::SetShoulderResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShoulderResolutionMinValue() :
      op->vtkEllipticalButtonSource::GetShoulderResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShoulderResolutionMaxValue() :
      op->vtkEllipticalButtonSource::GetShoulderResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetShoulderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShoulderResolution() :
      op->vtkEllipticalButtonSource::GetShoulderResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetRadialRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialRatio(temp0);
    }
    else
    {
      op->vtkEllipticalButtonSource::SetRadialRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadialRatioMinValue() :
      op->vtkEllipticalButtonSource::GetRadialRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadialRatioMaxValue() :
      op->vtkEllipticalButtonSource::GetRadialRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetRadialRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadialRatio() :
      op->vtkEllipticalButtonSource::GetRadialRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

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
      op->vtkEllipticalButtonSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipticalButtonSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipticalButtonSource *op = static_cast<vtkEllipticalButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkEllipticalButtonSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEllipticalButtonSource_Methods[] = {
  {"IsTypeOf", PyvtkEllipticalButtonSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEllipticalButtonSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEllipticalButtonSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEllipticalButtonSource\nC++: static vtkEllipticalButtonSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEllipticalButtonSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEllipticalButtonSource\nC++: vtkEllipticalButtonSource *NewInstance()\n\n"},
  {"SetWidth", PyvtkEllipticalButtonSource_SetWidth, METH_VARARGS,
   "V.SetWidth(float)\nC++: virtual void SetWidth(double _arg)\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {"GetWidthMinValue", PyvtkEllipticalButtonSource_GetWidthMinValue, METH_VARARGS,
   "V.GetWidthMinValue() -> float\nC++: virtual double GetWidthMinValue()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {"GetWidthMaxValue", PyvtkEllipticalButtonSource_GetWidthMaxValue, METH_VARARGS,
   "V.GetWidthMaxValue() -> float\nC++: virtual double GetWidthMaxValue()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {"GetWidth", PyvtkEllipticalButtonSource_GetWidth, METH_VARARGS,
   "V.GetWidth() -> float\nC++: virtual double GetWidth()\n\nSet/Get the width of the button (the x-ellipsoid axis length *\n2).\n"},
  {"SetHeight", PyvtkEllipticalButtonSource_SetHeight, METH_VARARGS,
   "V.SetHeight(float)\nC++: virtual void SetHeight(double _arg)\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {"GetHeightMinValue", PyvtkEllipticalButtonSource_GetHeightMinValue, METH_VARARGS,
   "V.GetHeightMinValue() -> float\nC++: virtual double GetHeightMinValue()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {"GetHeightMaxValue", PyvtkEllipticalButtonSource_GetHeightMaxValue, METH_VARARGS,
   "V.GetHeightMaxValue() -> float\nC++: virtual double GetHeightMaxValue()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {"GetHeight", PyvtkEllipticalButtonSource_GetHeight, METH_VARARGS,
   "V.GetHeight() -> float\nC++: virtual double GetHeight()\n\nSet/Get the height of the button (the y-ellipsoid axis length *\n2).\n"},
  {"SetDepth", PyvtkEllipticalButtonSource_SetDepth, METH_VARARGS,
   "V.SetDepth(float)\nC++: virtual void SetDepth(double _arg)\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {"GetDepthMinValue", PyvtkEllipticalButtonSource_GetDepthMinValue, METH_VARARGS,
   "V.GetDepthMinValue() -> float\nC++: virtual double GetDepthMinValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {"GetDepthMaxValue", PyvtkEllipticalButtonSource_GetDepthMaxValue, METH_VARARGS,
   "V.GetDepthMaxValue() -> float\nC++: virtual double GetDepthMaxValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {"GetDepth", PyvtkEllipticalButtonSource_GetDepth, METH_VARARGS,
   "V.GetDepth() -> float\nC++: virtual double GetDepth()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {"SetCircumferentialResolution", PyvtkEllipticalButtonSource_SetCircumferentialResolution, METH_VARARGS,
   "V.SetCircumferentialResolution(int)\nC++: virtual void SetCircumferentialResolution(int _arg)\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {"GetCircumferentialResolutionMinValue", PyvtkEllipticalButtonSource_GetCircumferentialResolutionMinValue, METH_VARARGS,
   "V.GetCircumferentialResolutionMinValue() -> int\nC++: virtual int GetCircumferentialResolutionMinValue()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {"GetCircumferentialResolutionMaxValue", PyvtkEllipticalButtonSource_GetCircumferentialResolutionMaxValue, METH_VARARGS,
   "V.GetCircumferentialResolutionMaxValue() -> int\nC++: virtual int GetCircumferentialResolutionMaxValue()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {"GetCircumferentialResolution", PyvtkEllipticalButtonSource_GetCircumferentialResolution, METH_VARARGS,
   "V.GetCircumferentialResolution() -> int\nC++: virtual int GetCircumferentialResolution()\n\nSpecify the resolution of the button in the circumferential\ndirection.\n"},
  {"SetTextureResolution", PyvtkEllipticalButtonSource_SetTextureResolution, METH_VARARGS,
   "V.SetTextureResolution(int)\nC++: virtual void SetTextureResolution(int _arg)\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {"GetTextureResolutionMinValue", PyvtkEllipticalButtonSource_GetTextureResolutionMinValue, METH_VARARGS,
   "V.GetTextureResolutionMinValue() -> int\nC++: virtual int GetTextureResolutionMinValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {"GetTextureResolutionMaxValue", PyvtkEllipticalButtonSource_GetTextureResolutionMaxValue, METH_VARARGS,
   "V.GetTextureResolutionMaxValue() -> int\nC++: virtual int GetTextureResolutionMaxValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {"GetTextureResolution", PyvtkEllipticalButtonSource_GetTextureResolution, METH_VARARGS,
   "V.GetTextureResolution() -> int\nC++: virtual int GetTextureResolution()\n\nSpecify the resolution of the texture in the radial direction in\nthe texture region.\n"},
  {"SetShoulderResolution", PyvtkEllipticalButtonSource_SetShoulderResolution, METH_VARARGS,
   "V.SetShoulderResolution(int)\nC++: virtual void SetShoulderResolution(int _arg)\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {"GetShoulderResolutionMinValue", PyvtkEllipticalButtonSource_GetShoulderResolutionMinValue, METH_VARARGS,
   "V.GetShoulderResolutionMinValue() -> int\nC++: virtual int GetShoulderResolutionMinValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {"GetShoulderResolutionMaxValue", PyvtkEllipticalButtonSource_GetShoulderResolutionMaxValue, METH_VARARGS,
   "V.GetShoulderResolutionMaxValue() -> int\nC++: virtual int GetShoulderResolutionMaxValue()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {"GetShoulderResolution", PyvtkEllipticalButtonSource_GetShoulderResolution, METH_VARARGS,
   "V.GetShoulderResolution() -> int\nC++: virtual int GetShoulderResolution()\n\nSpecify the resolution of the texture in the radial direction in\nthe shoulder region.\n"},
  {"SetRadialRatio", PyvtkEllipticalButtonSource_SetRadialRatio, METH_VARARGS,
   "V.SetRadialRatio(float)\nC++: virtual void SetRadialRatio(double _arg)\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {"GetRadialRatioMinValue", PyvtkEllipticalButtonSource_GetRadialRatioMinValue, METH_VARARGS,
   "V.GetRadialRatioMinValue() -> float\nC++: virtual double GetRadialRatioMinValue()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {"GetRadialRatioMaxValue", PyvtkEllipticalButtonSource_GetRadialRatioMaxValue, METH_VARARGS,
   "V.GetRadialRatioMaxValue() -> float\nC++: virtual double GetRadialRatioMaxValue()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {"GetRadialRatio", PyvtkEllipticalButtonSource_GetRadialRatio, METH_VARARGS,
   "V.GetRadialRatio() -> float\nC++: virtual double GetRadialRatio()\n\nSet/Get the radial ratio. This is the measure of the radius of\nthe outer ellipsoid to the inner ellipsoid of the button. The\nouter ellipsoid is the boundary of the button defined by the\nheight and width. The inner ellipsoid circumscribes the texture\nregion. Larger RadialRatio's cause the button to be more rounded\n(and the texture region to be smaller); smaller ratios produce\nsharply curved shoulders with a larger texture region.\n"},
  {"SetOutputPointsPrecision", PyvtkEllipticalButtonSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkEllipticalButtonSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEllipticalButtonSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkEllipticalButtonSource", // tp_name
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
  PyvtkEllipticalButtonSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEllipticalButtonSource_StaticNew()
{
  return vtkEllipticalButtonSource::New();
}

PyObject *PyvtkEllipticalButtonSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEllipticalButtonSource_Type, PyvtkEllipticalButtonSource_Methods,
    "vtkEllipticalButtonSource",
 &PyvtkEllipticalButtonSource_StaticNew);

  PyTypeObject *pytype = &PyvtkEllipticalButtonSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkButtonSource_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEllipticalButtonSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEllipticalButtonSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEllipticalButtonSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

