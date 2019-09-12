// python wrapper for vtkScalarBarActor
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
#include "vtkScalarBarActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarBarActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarBarActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkScalarBarActor_Doc =
  "vtkScalarBarActor - Create a scalar bar with labels\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkScalarBarActor creates a scalar bar with tick marks. A scalar bar\n"
  "is a legend that indicates to the viewer the correspondence between\n"
  "color value and data value. The legend consists of a rectangular bar\n"
  "made of rectangular pieces each colored a constant value. Since\n"
  "vtkScalarBarActor is a subclass of vtkActor2D, it is drawn in the\n"
  "image plane (i.e., in the renderer's viewport) on top of the 3D\n"
  "graphics window.\n\n"
  "To use vtkScalarBarActor you must associate a vtkScalarsToColors (or\n"
  "subclass) with it. The lookup table defines the colors and the range\n"
  "of scalar values used to map scalar data.  Typically, the number of\n"
  "colors shown in the scalar bar is not equal to the number of colors\n"
  "in the lookup table, in which case sampling of the lookup table is\n"
  "performed.\n\n"
  "Other optional capabilities include specifying the fraction of the\n"
  "viewport size (both x and y directions) which will control the size\n"
  "of the scalar bar and the number of tick labels. The actual position\n"
  "of the scalar bar on the screen is controlled by using the\n"
  "vtkActor2D::SetPosition() method (by default the scalar bar is\n"
  "centered in the viewport).  Other features include the ability to\n"
  "orient the scalar bar horizontally of vertically and controlling the\n"
  "format (printf style) with which to print the labels on the scalar\n"
  "bar. Also, the vtkScalarBarActor's property is applied to the scalar\n"
  "bar and annotations (including layer, and compositing operator).\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated to this actor.\n\n"
  "@warning\n"
  "If a vtkLogLookupTable is specified as the lookup table to use, then\n"
  "the labels are created using a logarithmic scale.\n\n"
  "@sa\n"
  "vtkActor2D vtkTextProperty vtkTextMapper vtkPolyDataMapper2D\n\n";


static PyObject *
PyvtkScalarBarActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarBarActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarBarActor *tempr = vtkScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarActor::NewInstance());

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
PyvtkScalarBarActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkScalarBarActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkScalarBarActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkScalarBarActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkScalarBarActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkScalarBarActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetScalarBarRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetScalarBarRect(temp0, temp1);
    }
    else
    {
      op->vtkScalarBarActor::GetScalarBarRect(temp0, temp1);
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
PyvtkScalarBarActor_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkScalarBarActor::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOpacity(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetUseOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOpacity() :
      op->vtkScalarBarActor::GetUseOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOpacityOn();
    }
    else
    {
      op->vtkScalarBarActor::UseOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOpacityOff();
    }
    else
    {
      op->vtkScalarBarActor::UseOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfColors(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetMaximumNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColorsMinValue() :
      op->vtkScalarBarActor::GetMaximumNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColorsMaxValue() :
      op->vtkScalarBarActor::GetMaximumNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColors() :
      op->vtkScalarBarActor::GetMaximumNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkScalarBarActor::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkScalarBarActor::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkScalarBarActor::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkScalarBarActor::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkScalarBarActor::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkScalarBarActor::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToHorizontal();
    }
    else
    {
      op->vtkScalarBarActor::SetOrientationToHorizontal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToVertical();
    }
    else
    {
      op->vtkScalarBarActor::SetOrientationToVertical();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkScalarBarActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkScalarBarActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationTextProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAnnotationTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAnnotationTextProperty() :
      op->vtkScalarBarActor::GetAnnotationTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkScalarBarActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkScalarBarActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentTitle(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetComponentTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComponentTitle() :
      op->vtkScalarBarActor::GetComponentTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkScalarBarActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureGridWidth(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTextureGridWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureGridWidth() :
      op->vtkScalarBarActor::GetTextureGridWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexturedActor2D *tempr = (ap.IsBound() ?
      op->GetTextureActor() :
      op->vtkScalarBarActor::GetTextureActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextPosition(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTextPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPositionMinValue() :
      op->vtkScalarBarActor::GetTextPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPositionMaxValue() :
      op->vtkScalarBarActor::GetTextPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPosition() :
      op->vtkScalarBarActor::GetTextPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToPrecedeScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextPositionToPrecedeScalarBar();
    }
    else
    {
      op->vtkScalarBarActor::SetTextPositionToPrecedeScalarBar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToSucceedScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextPositionToSucceedScalarBar();
    }
    else
    {
      op->vtkScalarBarActor::SetTextPositionToSucceedScalarBar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumWidthInPixels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetMaximumWidthInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumWidthInPixels() :
      op->vtkScalarBarActor::GetMaximumWidthInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumHeightInPixels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetMaximumHeightInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumHeightInPixels() :
      op->vtkScalarBarActor::GetMaximumHeightInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationLeaderPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLeaderPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLeaderPadding(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAnnotationLeaderPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationLeaderPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLeaderPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnnotationLeaderPadding() :
      op->vtkScalarBarActor::GetAnnotationLeaderPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAnnotations(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawAnnotations() :
      op->vtkScalarBarActor::GetDrawAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAnnotationsOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAnnotationsOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawNanAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawNanAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawNanAnnotation() :
      op->vtkScalarBarActor::GetDrawNanAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawNanAnnotationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawNanAnnotationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawNanAnnotationOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawNanAnnotationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawNanAnnotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawNanAnnotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawNanAnnotationOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawNanAnnotationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawBelowRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBelowRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBelowRangeSwatch(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawBelowRangeSwatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawBelowRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBelowRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBelowRangeSwatch() :
      op->vtkScalarBarActor::GetDrawBelowRangeSwatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBelowRangeSwatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBelowRangeSwatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBelowRangeSwatchOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawBelowRangeSwatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBelowRangeSwatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBelowRangeSwatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBelowRangeSwatchOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawBelowRangeSwatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBelowRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBelowRangeAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetBelowRangeAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBelowRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBelowRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBelowRangeAnnotation() :
      op->vtkScalarBarActor::GetBelowRangeAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawAboveRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAboveRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAboveRangeSwatch(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawAboveRangeSwatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawAboveRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAboveRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawAboveRangeSwatch() :
      op->vtkScalarBarActor::GetDrawAboveRangeSwatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAboveRangeSwatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAboveRangeSwatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAboveRangeSwatchOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawAboveRangeSwatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAboveRangeSwatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAboveRangeSwatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAboveRangeSwatchOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawAboveRangeSwatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAboveRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAboveRangeAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAboveRangeAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAboveRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAboveRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAboveRangeAnnotation() :
      op->vtkScalarBarActor::GetAboveRangeAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetFixedAnnotationLeaderLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedAnnotationLeaderLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedAnnotationLeaderLineColor(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetFixedAnnotationLeaderLineColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetFixedAnnotationLeaderLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAnnotationLeaderLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixedAnnotationLeaderLineColor() :
      op->vtkScalarBarActor::GetFixedAnnotationLeaderLineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedAnnotationLeaderLineColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixedAnnotationLeaderLineColorOn();
    }
    else
    {
      op->vtkScalarBarActor::FixedAnnotationLeaderLineColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedAnnotationLeaderLineColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixedAnnotationLeaderLineColorOff();
    }
    else
    {
      op->vtkScalarBarActor::FixedAnnotationLeaderLineColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNanAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetNanAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNanAnnotation() :
      op->vtkScalarBarActor::GetNanAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationTextScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationTextScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationTextScaling(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAnnotationTextScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationTextScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationTextScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnnotationTextScaling() :
      op->vtkScalarBarActor::GetAnnotationTextScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_AnnotationTextScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnnotationTextScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnnotationTextScalingOn();
    }
    else
    {
      op->vtkScalarBarActor::AnnotationTextScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_AnnotationTextScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnnotationTextScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnnotationTextScalingOff();
    }
    else
    {
      op->vtkScalarBarActor::AnnotationTextScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBackground(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkScalarBarActor::GetDrawBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawFrame(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawFrame() :
      op->vtkScalarBarActor::GetDrawFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawFrameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrameOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawFrameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawFrameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrameOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawFrameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawColorBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColorBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawColorBar(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawColorBar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawColorBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawColorBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawColorBar() :
      op->vtkScalarBarActor::GetDrawColorBar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawColorBarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColorBarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawColorBarOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawColorBarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawColorBarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColorBarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawColorBarOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawColorBarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawTickLabels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawTickLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawTickLabels() :
      op->vtkScalarBarActor::GetDrawTickLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawTickLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawTickLabelsOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawTickLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawTickLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawTickLabelsOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawTickLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBackgroundProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetBackgroundProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBackgroundProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBackgroundProperty() :
      op->vtkScalarBarActor::GetBackgroundProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetFrameProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetFrameProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetFrameProperty() :
      op->vtkScalarBarActor::GetFrameProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPad() :
      op->vtkScalarBarActor::GetTextPad());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextPad(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTextPad(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetVerticalTitleSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalTitleSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalTitleSeparation() :
      op->vtkScalarBarActor::GetVerticalTitleSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetVerticalTitleSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalTitleSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalTitleSeparation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetVerticalTitleSeparation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBarRatio() :
      op->vtkScalarBarActor::GetBarRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBarRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBarRatio(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetBarRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBarRatioMinValue() :
      op->vtkScalarBarActor::GetBarRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBarRatioMaxValue() :
      op->vtkScalarBarActor::GetBarRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatio() :
      op->vtkScalarBarActor::GetTitleRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleRatio(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTitleRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatioMinValue() :
      op->vtkScalarBarActor::GetTitleRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatioMaxValue() :
      op->vtkScalarBarActor::GetTitleRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUnconstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnconstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnconstrainedFontSize(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetUnconstrainedFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUnconstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnconstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUnconstrainedFontSize() :
      op->vtkScalarBarActor::GetUnconstrainedFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UnconstrainedFontSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnconstrainedFontSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnconstrainedFontSizeOn();
    }
    else
    {
      op->vtkScalarBarActor::UnconstrainedFontSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UnconstrainedFontSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnconstrainedFontSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnconstrainedFontSizeOff();
    }
    else
    {
      op->vtkScalarBarActor::UnconstrainedFontSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarBarActor_Methods[] = {
  {"IsTypeOf", PyvtkScalarBarActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarBarActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarBarActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarBarActor\nC++: static vtkScalarBarActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarBarActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarBarActor\nC++: vtkScalarBarActor *NewInstance()\n\n"},
  {"RenderOpaqueGeometry", PyvtkScalarBarActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"RenderOverlay", PyvtkScalarBarActor_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkScalarBarActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkScalarBarActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetScalarBarRect", PyvtkScalarBarActor_GetScalarBarRect, METH_VARARGS,
   "V.GetScalarBarRect([int, int, int, int], vtkViewport)\nC++: virtual void GetScalarBarRect(int rect[4],\n    vtkViewport *viewport)\n\nFills rect with the dimensions of the scalar bar in viewport\ncoordinates. Only the color bar is considered -- text labels are\nnot considered. rect is {xmin, xmax, width, height}\n"},
  {"SetLookupTable", PyvtkScalarBarActor_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the lookup table to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), the\nscalar range, and any annotated values. Annotated values are\nrendered using vtkTextActor.\n"},
  {"GetLookupTable", PyvtkScalarBarActor_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\nSet/Get the lookup table to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), the\nscalar range, and any annotated values. Annotated values are\nrendered using vtkTextActor.\n"},
  {"SetUseOpacity", PyvtkScalarBarActor_SetUseOpacity, METH_VARARGS,
   "V.SetUseOpacity(int)\nC++: virtual void SetUseOpacity(vtkTypeBool _arg)\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {"GetUseOpacity", PyvtkScalarBarActor_GetUseOpacity, METH_VARARGS,
   "V.GetUseOpacity() -> int\nC++: virtual vtkTypeBool GetUseOpacity()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {"UseOpacityOn", PyvtkScalarBarActor_UseOpacityOn, METH_VARARGS,
   "V.UseOpacityOn()\nC++: virtual void UseOpacityOn()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {"UseOpacityOff", PyvtkScalarBarActor_UseOpacityOff, METH_VARARGS,
   "V.UseOpacityOff()\nC++: virtual void UseOpacityOff()\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {"SetMaximumNumberOfColors", PyvtkScalarBarActor_SetMaximumNumberOfColors, METH_VARARGS,
   "V.SetMaximumNumberOfColors(int)\nC++: virtual void SetMaximumNumberOfColors(int _arg)\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {"GetMaximumNumberOfColorsMinValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfColorsMinValue() -> int\nC++: virtual int GetMaximumNumberOfColorsMinValue()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {"GetMaximumNumberOfColorsMaxValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfColorsMaxValue() -> int\nC++: virtual int GetMaximumNumberOfColorsMaxValue()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {"GetMaximumNumberOfColors", PyvtkScalarBarActor_GetMaximumNumberOfColors, METH_VARARGS,
   "V.GetMaximumNumberOfColors() -> int\nC++: virtual int GetMaximumNumberOfColors()\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {"SetNumberOfLabels", PyvtkScalarBarActor_SetNumberOfLabels, METH_VARARGS,
   "V.SetNumberOfLabels(int)\nC++: virtual void SetNumberOfLabels(int _arg)\n\nSet/Get the number of tick labels to show.\n"},
  {"GetNumberOfLabelsMinValue", PyvtkScalarBarActor_GetNumberOfLabelsMinValue, METH_VARARGS,
   "V.GetNumberOfLabelsMinValue() -> int\nC++: virtual int GetNumberOfLabelsMinValue()\n\nSet/Get the number of tick labels to show.\n"},
  {"GetNumberOfLabelsMaxValue", PyvtkScalarBarActor_GetNumberOfLabelsMaxValue, METH_VARARGS,
   "V.GetNumberOfLabelsMaxValue() -> int\nC++: virtual int GetNumberOfLabelsMaxValue()\n\nSet/Get the number of tick labels to show.\n"},
  {"GetNumberOfLabels", PyvtkScalarBarActor_GetNumberOfLabels, METH_VARARGS,
   "V.GetNumberOfLabels() -> int\nC++: virtual int GetNumberOfLabels()\n\nSet/Get the number of tick labels to show.\n"},
  {"SetOrientation", PyvtkScalarBarActor_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(int _arg)\n\nControl the orientation of the scalar bar.\n"},
  {"GetOrientationMinValue", PyvtkScalarBarActor_GetOrientationMinValue, METH_VARARGS,
   "V.GetOrientationMinValue() -> int\nC++: virtual int GetOrientationMinValue()\n\nControl the orientation of the scalar bar.\n"},
  {"GetOrientationMaxValue", PyvtkScalarBarActor_GetOrientationMaxValue, METH_VARARGS,
   "V.GetOrientationMaxValue() -> int\nC++: virtual int GetOrientationMaxValue()\n\nControl the orientation of the scalar bar.\n"},
  {"GetOrientation", PyvtkScalarBarActor_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual int GetOrientation()\n\nControl the orientation of the scalar bar.\n"},
  {"SetOrientationToHorizontal", PyvtkScalarBarActor_SetOrientationToHorizontal, METH_VARARGS,
   "V.SetOrientationToHorizontal()\nC++: void SetOrientationToHorizontal()\n\nControl the orientation of the scalar bar.\n"},
  {"SetOrientationToVertical", PyvtkScalarBarActor_SetOrientationToVertical, METH_VARARGS,
   "V.SetOrientationToVertical()\nC++: void SetOrientationToVertical()\n\nControl the orientation of the scalar bar.\n"},
  {"SetTitleTextProperty", PyvtkScalarBarActor_SetTitleTextProperty, METH_VARARGS,
   "V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {"GetTitleTextProperty", PyvtkScalarBarActor_GetTitleTextProperty, METH_VARARGS,
   "V.GetTitleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property.\n"},
  {"SetLabelTextProperty", PyvtkScalarBarActor_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {"GetLabelTextProperty", PyvtkScalarBarActor_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property.\n"},
  {"SetAnnotationTextProperty", PyvtkScalarBarActor_SetAnnotationTextProperty, METH_VARARGS,
   "V.SetAnnotationTextProperty(vtkTextProperty)\nC++: virtual void SetAnnotationTextProperty(vtkTextProperty *p)\n\nSet/Get the annotation text property.\n"},
  {"GetAnnotationTextProperty", PyvtkScalarBarActor_GetAnnotationTextProperty, METH_VARARGS,
   "V.GetAnnotationTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAnnotationTextProperty()\n\nSet/Get the annotation text property.\n"},
  {"SetLabelFormat", PyvtkScalarBarActor_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {"GetLabelFormat", PyvtkScalarBarActor_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {"SetTitle", PyvtkScalarBarActor_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the scalar bar actor,\n"},
  {"GetTitle", PyvtkScalarBarActor_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: virtual char *GetTitle()\n\nSet/Get the title of the scalar bar actor,\n"},
  {"SetComponentTitle", PyvtkScalarBarActor_SetComponentTitle, METH_VARARGS,
   "V.SetComponentTitle(string)\nC++: virtual void SetComponentTitle(const char *_arg)\n\nSet/Get the title for the component that is selected,\n"},
  {"GetComponentTitle", PyvtkScalarBarActor_GetComponentTitle, METH_VARARGS,
   "V.GetComponentTitle() -> string\nC++: virtual char *GetComponentTitle()\n\nSet/Get the title for the component that is selected,\n"},
  {"ShallowCopy", PyvtkScalarBarActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of a scalar bar actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"SetTextureGridWidth", PyvtkScalarBarActor_SetTextureGridWidth, METH_VARARGS,
   "V.SetTextureGridWidth(float)\nC++: virtual void SetTextureGridWidth(double _arg)\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {"GetTextureGridWidth", PyvtkScalarBarActor_GetTextureGridWidth, METH_VARARGS,
   "V.GetTextureGridWidth() -> float\nC++: virtual double GetTextureGridWidth()\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {"GetTextureActor", PyvtkScalarBarActor_GetTextureActor, METH_VARARGS,
   "V.GetTextureActor() -> vtkTexturedActor2D\nC++: virtual vtkTexturedActor2D *GetTextureActor()\n\nGet the texture actor.. you may want to change some properties on\nit\n"},
  {"SetTextPosition", PyvtkScalarBarActor_SetTextPosition, METH_VARARGS,
   "V.SetTextPosition(int)\nC++: virtual void SetTextPosition(int _arg)\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"GetTextPositionMinValue", PyvtkScalarBarActor_GetTextPositionMinValue, METH_VARARGS,
   "V.GetTextPositionMinValue() -> int\nC++: virtual int GetTextPositionMinValue()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"GetTextPositionMaxValue", PyvtkScalarBarActor_GetTextPositionMaxValue, METH_VARARGS,
   "V.GetTextPositionMaxValue() -> int\nC++: virtual int GetTextPositionMaxValue()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"GetTextPosition", PyvtkScalarBarActor_GetTextPosition, METH_VARARGS,
   "V.GetTextPosition() -> int\nC++: virtual int GetTextPosition()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"SetTextPositionToPrecedeScalarBar", PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar, METH_VARARGS,
   "V.SetTextPositionToPrecedeScalarBar()\nC++: virtual void SetTextPositionToPrecedeScalarBar()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"SetTextPositionToSucceedScalarBar", PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar, METH_VARARGS,
   "V.SetTextPositionToSucceedScalarBar()\nC++: virtual void SetTextPositionToSucceedScalarBar()\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"SetMaximumWidthInPixels", PyvtkScalarBarActor_SetMaximumWidthInPixels, METH_VARARGS,
   "V.SetMaximumWidthInPixels(int)\nC++: virtual void SetMaximumWidthInPixels(int _arg)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {"GetMaximumWidthInPixels", PyvtkScalarBarActor_GetMaximumWidthInPixels, METH_VARARGS,
   "V.GetMaximumWidthInPixels() -> int\nC++: virtual int GetMaximumWidthInPixels()\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {"SetMaximumHeightInPixels", PyvtkScalarBarActor_SetMaximumHeightInPixels, METH_VARARGS,
   "V.SetMaximumHeightInPixels(int)\nC++: virtual void SetMaximumHeightInPixels(int _arg)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {"GetMaximumHeightInPixels", PyvtkScalarBarActor_GetMaximumHeightInPixels, METH_VARARGS,
   "V.GetMaximumHeightInPixels() -> int\nC++: virtual int GetMaximumHeightInPixels()\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {"SetAnnotationLeaderPadding", PyvtkScalarBarActor_SetAnnotationLeaderPadding, METH_VARARGS,
   "V.SetAnnotationLeaderPadding(float)\nC++: virtual void SetAnnotationLeaderPadding(double _arg)\n\nSet/get the padding between the scalar bar and the text\nannotations. This space is used to draw leader lines. The default\nis 8 pixels.\n"},
  {"GetAnnotationLeaderPadding", PyvtkScalarBarActor_GetAnnotationLeaderPadding, METH_VARARGS,
   "V.GetAnnotationLeaderPadding() -> float\nC++: virtual double GetAnnotationLeaderPadding()\n\nSet/get the padding between the scalar bar and the text\nannotations. This space is used to draw leader lines. The default\nis 8 pixels.\n"},
  {"SetDrawAnnotations", PyvtkScalarBarActor_SetDrawAnnotations, METH_VARARGS,
   "V.SetDrawAnnotations(int)\nC++: virtual void SetDrawAnnotations(vtkTypeBool _arg)\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {"GetDrawAnnotations", PyvtkScalarBarActor_GetDrawAnnotations, METH_VARARGS,
   "V.GetDrawAnnotations() -> int\nC++: virtual vtkTypeBool GetDrawAnnotations()\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {"DrawAnnotationsOn", PyvtkScalarBarActor_DrawAnnotationsOn, METH_VARARGS,
   "V.DrawAnnotationsOn()\nC++: virtual void DrawAnnotationsOn()\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {"DrawAnnotationsOff", PyvtkScalarBarActor_DrawAnnotationsOff, METH_VARARGS,
   "V.DrawAnnotationsOff()\nC++: virtual void DrawAnnotationsOff()\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {"SetDrawNanAnnotation", PyvtkScalarBarActor_SetDrawNanAnnotation, METH_VARARGS,
   "V.SetDrawNanAnnotation(int)\nC++: virtual void SetDrawNanAnnotation(vtkTypeBool _arg)\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"GetDrawNanAnnotation", PyvtkScalarBarActor_GetDrawNanAnnotation, METH_VARARGS,
   "V.GetDrawNanAnnotation() -> int\nC++: virtual vtkTypeBool GetDrawNanAnnotation()\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"DrawNanAnnotationOn", PyvtkScalarBarActor_DrawNanAnnotationOn, METH_VARARGS,
   "V.DrawNanAnnotationOn()\nC++: virtual void DrawNanAnnotationOn()\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"DrawNanAnnotationOff", PyvtkScalarBarActor_DrawNanAnnotationOff, METH_VARARGS,
   "V.DrawNanAnnotationOff()\nC++: virtual void DrawNanAnnotationOff()\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"SetDrawBelowRangeSwatch", PyvtkScalarBarActor_SetDrawBelowRangeSwatch, METH_VARARGS,
   "V.SetDrawBelowRangeSwatch(bool)\nC++: virtual void SetDrawBelowRangeSwatch(bool _arg)\n\nSet/get whether the Below range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"GetDrawBelowRangeSwatch", PyvtkScalarBarActor_GetDrawBelowRangeSwatch, METH_VARARGS,
   "V.GetDrawBelowRangeSwatch() -> bool\nC++: virtual bool GetDrawBelowRangeSwatch()\n\nSet/get whether the Below range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"DrawBelowRangeSwatchOn", PyvtkScalarBarActor_DrawBelowRangeSwatchOn, METH_VARARGS,
   "V.DrawBelowRangeSwatchOn()\nC++: virtual void DrawBelowRangeSwatchOn()\n\nSet/get whether the Below range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"DrawBelowRangeSwatchOff", PyvtkScalarBarActor_DrawBelowRangeSwatchOff, METH_VARARGS,
   "V.DrawBelowRangeSwatchOff()\nC++: virtual void DrawBelowRangeSwatchOff()\n\nSet/get whether the Below range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"SetBelowRangeAnnotation", PyvtkScalarBarActor_SetBelowRangeAnnotation, METH_VARARGS,
   "V.SetBelowRangeAnnotation(string)\nC++: virtual void SetBelowRangeAnnotation(const char *_arg)\n\nSet/get the annotation text for \"Below Range\" values.\n"},
  {"GetBelowRangeAnnotation", PyvtkScalarBarActor_GetBelowRangeAnnotation, METH_VARARGS,
   "V.GetBelowRangeAnnotation() -> string\nC++: virtual char *GetBelowRangeAnnotation()\n\nSet/get the annotation text for \"Below Range\" values.\n"},
  {"SetDrawAboveRangeSwatch", PyvtkScalarBarActor_SetDrawAboveRangeSwatch, METH_VARARGS,
   "V.SetDrawAboveRangeSwatch(bool)\nC++: virtual void SetDrawAboveRangeSwatch(bool _arg)\n\nSet/get whether the Above range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"GetDrawAboveRangeSwatch", PyvtkScalarBarActor_GetDrawAboveRangeSwatch, METH_VARARGS,
   "V.GetDrawAboveRangeSwatch() -> bool\nC++: virtual bool GetDrawAboveRangeSwatch()\n\nSet/get whether the Above range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"DrawAboveRangeSwatchOn", PyvtkScalarBarActor_DrawAboveRangeSwatchOn, METH_VARARGS,
   "V.DrawAboveRangeSwatchOn()\nC++: virtual void DrawAboveRangeSwatchOn()\n\nSet/get whether the Above range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"DrawAboveRangeSwatchOff", PyvtkScalarBarActor_DrawAboveRangeSwatchOff, METH_VARARGS,
   "V.DrawAboveRangeSwatchOff()\nC++: virtual void DrawAboveRangeSwatchOff()\n\nSet/get whether the Above range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"SetAboveRangeAnnotation", PyvtkScalarBarActor_SetAboveRangeAnnotation, METH_VARARGS,
   "V.SetAboveRangeAnnotation(string)\nC++: virtual void SetAboveRangeAnnotation(const char *_arg)\n\nSet/get the annotation text for \"Above Range Swatch\" values.\n"},
  {"GetAboveRangeAnnotation", PyvtkScalarBarActor_GetAboveRangeAnnotation, METH_VARARGS,
   "V.GetAboveRangeAnnotation() -> string\nC++: virtual char *GetAboveRangeAnnotation()\n\nSet/get the annotation text for \"Above Range Swatch\" values.\n"},
  {"SetFixedAnnotationLeaderLineColor", PyvtkScalarBarActor_SetFixedAnnotationLeaderLineColor, METH_VARARGS,
   "V.SetFixedAnnotationLeaderLineColor(int)\nC++: virtual void SetFixedAnnotationLeaderLineColor(\n    vtkTypeBool _arg)\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\n* When true, leader lines are all the same color (and match the\n  LabelTextProperty color).\n* When false, leader lines take on the color of the value they\n  correspond to.\n* This only affects rendering when DrawAnnotations is true.\n* The default is false.\n"},
  {"GetFixedAnnotationLeaderLineColor", PyvtkScalarBarActor_GetFixedAnnotationLeaderLineColor, METH_VARARGS,
   "V.GetFixedAnnotationLeaderLineColor() -> int\nC++: virtual vtkTypeBool GetFixedAnnotationLeaderLineColor()\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\n* When true, leader lines are all the same color (and match the\n  LabelTextProperty color).\n* When false, leader lines take on the color of the value they\n  correspond to.\n* This only affects rendering when DrawAnnotations is true.\n* The default is false.\n"},
  {"FixedAnnotationLeaderLineColorOn", PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOn, METH_VARARGS,
   "V.FixedAnnotationLeaderLineColorOn()\nC++: virtual void FixedAnnotationLeaderLineColorOn()\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\n* When true, leader lines are all the same color (and match the\n  LabelTextProperty color).\n* When false, leader lines take on the color of the value they\n  correspond to.\n* This only affects rendering when DrawAnnotations is true.\n* The default is false.\n"},
  {"FixedAnnotationLeaderLineColorOff", PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOff, METH_VARARGS,
   "V.FixedAnnotationLeaderLineColorOff()\nC++: virtual void FixedAnnotationLeaderLineColorOff()\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\n* When true, leader lines are all the same color (and match the\n  LabelTextProperty color).\n* When false, leader lines take on the color of the value they\n  correspond to.\n* This only affects rendering when DrawAnnotations is true.\n* The default is false.\n"},
  {"SetNanAnnotation", PyvtkScalarBarActor_SetNanAnnotation, METH_VARARGS,
   "V.SetNanAnnotation(string)\nC++: virtual void SetNanAnnotation(const char *_arg)\n\nSet/get the annotation text for \"NaN\" values.\n"},
  {"GetNanAnnotation", PyvtkScalarBarActor_GetNanAnnotation, METH_VARARGS,
   "V.GetNanAnnotation() -> string\nC++: virtual char *GetNanAnnotation()\n\nSet/get the annotation text for \"NaN\" values.\n"},
  {"SetAnnotationTextScaling", PyvtkScalarBarActor_SetAnnotationTextScaling, METH_VARARGS,
   "V.SetAnnotationTextScaling(int)\nC++: virtual void SetAnnotationTextScaling(vtkTypeBool _arg)\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\n* The default value is 0 (no scaling).\n* If non-zero, the vtkTextActor instances used to render\n  annotation\n* labels will have their TextScaleMode set to viewport-based\n  scaling,\n* which nonlinearly scales font size with the viewport size.\n"},
  {"GetAnnotationTextScaling", PyvtkScalarBarActor_GetAnnotationTextScaling, METH_VARARGS,
   "V.GetAnnotationTextScaling() -> int\nC++: virtual vtkTypeBool GetAnnotationTextScaling()\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\n* The default value is 0 (no scaling).\n* If non-zero, the vtkTextActor instances used to render\n  annotation\n* labels will have their TextScaleMode set to viewport-based\n  scaling,\n* which nonlinearly scales font size with the viewport size.\n"},
  {"AnnotationTextScalingOn", PyvtkScalarBarActor_AnnotationTextScalingOn, METH_VARARGS,
   "V.AnnotationTextScalingOn()\nC++: virtual void AnnotationTextScalingOn()\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\n* The default value is 0 (no scaling).\n* If non-zero, the vtkTextActor instances used to render\n  annotation\n* labels will have their TextScaleMode set to viewport-based\n  scaling,\n* which nonlinearly scales font size with the viewport size.\n"},
  {"AnnotationTextScalingOff", PyvtkScalarBarActor_AnnotationTextScalingOff, METH_VARARGS,
   "V.AnnotationTextScalingOff()\nC++: virtual void AnnotationTextScalingOff()\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\n* The default value is 0 (no scaling).\n* If non-zero, the vtkTextActor instances used to render\n  annotation\n* labels will have their TextScaleMode set to viewport-based\n  scaling,\n* which nonlinearly scales font size with the viewport size.\n"},
  {"SetDrawBackground", PyvtkScalarBarActor_SetDrawBackground, METH_VARARGS,
   "V.SetDrawBackground(int)\nC++: virtual void SetDrawBackground(vtkTypeBool _arg)\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {"GetDrawBackground", PyvtkScalarBarActor_GetDrawBackground, METH_VARARGS,
   "V.GetDrawBackground() -> int\nC++: virtual vtkTypeBool GetDrawBackground()\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {"DrawBackgroundOn", PyvtkScalarBarActor_DrawBackgroundOn, METH_VARARGS,
   "V.DrawBackgroundOn()\nC++: virtual void DrawBackgroundOn()\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {"DrawBackgroundOff", PyvtkScalarBarActor_DrawBackgroundOff, METH_VARARGS,
   "V.DrawBackgroundOff()\nC++: virtual void DrawBackgroundOff()\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {"SetDrawFrame", PyvtkScalarBarActor_SetDrawFrame, METH_VARARGS,
   "V.SetDrawFrame(int)\nC++: virtual void SetDrawFrame(vtkTypeBool _arg)\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {"GetDrawFrame", PyvtkScalarBarActor_GetDrawFrame, METH_VARARGS,
   "V.GetDrawFrame() -> int\nC++: virtual vtkTypeBool GetDrawFrame()\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {"DrawFrameOn", PyvtkScalarBarActor_DrawFrameOn, METH_VARARGS,
   "V.DrawFrameOn()\nC++: virtual void DrawFrameOn()\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {"DrawFrameOff", PyvtkScalarBarActor_DrawFrameOff, METH_VARARGS,
   "V.DrawFrameOff()\nC++: virtual void DrawFrameOff()\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {"SetDrawColorBar", PyvtkScalarBarActor_SetDrawColorBar, METH_VARARGS,
   "V.SetDrawColorBar(int)\nC++: virtual void SetDrawColorBar(vtkTypeBool _arg)\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {"GetDrawColorBar", PyvtkScalarBarActor_GetDrawColorBar, METH_VARARGS,
   "V.GetDrawColorBar() -> int\nC++: virtual vtkTypeBool GetDrawColorBar()\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {"DrawColorBarOn", PyvtkScalarBarActor_DrawColorBarOn, METH_VARARGS,
   "V.DrawColorBarOn()\nC++: virtual void DrawColorBarOn()\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {"DrawColorBarOff", PyvtkScalarBarActor_DrawColorBarOff, METH_VARARGS,
   "V.DrawColorBarOff()\nC++: virtual void DrawColorBarOff()\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {"SetDrawTickLabels", PyvtkScalarBarActor_SetDrawTickLabels, METH_VARARGS,
   "V.SetDrawTickLabels(int)\nC++: virtual void SetDrawTickLabels(vtkTypeBool _arg)\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {"GetDrawTickLabels", PyvtkScalarBarActor_GetDrawTickLabels, METH_VARARGS,
   "V.GetDrawTickLabels() -> int\nC++: virtual vtkTypeBool GetDrawTickLabels()\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {"DrawTickLabelsOn", PyvtkScalarBarActor_DrawTickLabelsOn, METH_VARARGS,
   "V.DrawTickLabelsOn()\nC++: virtual void DrawTickLabelsOn()\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {"DrawTickLabelsOff", PyvtkScalarBarActor_DrawTickLabelsOff, METH_VARARGS,
   "V.DrawTickLabelsOff()\nC++: virtual void DrawTickLabelsOff()\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {"SetBackgroundProperty", PyvtkScalarBarActor_SetBackgroundProperty, METH_VARARGS,
   "V.SetBackgroundProperty(vtkProperty2D)\nC++: virtual void SetBackgroundProperty(vtkProperty2D *p)\n\nSet/Get the background property.\n"},
  {"GetBackgroundProperty", PyvtkScalarBarActor_GetBackgroundProperty, METH_VARARGS,
   "V.GetBackgroundProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetBackgroundProperty()\n\nSet/Get the background property.\n"},
  {"SetFrameProperty", PyvtkScalarBarActor_SetFrameProperty, METH_VARARGS,
   "V.SetFrameProperty(vtkProperty2D)\nC++: virtual void SetFrameProperty(vtkProperty2D *p)\n\nSet/Get the frame property.\n"},
  {"GetFrameProperty", PyvtkScalarBarActor_GetFrameProperty, METH_VARARGS,
   "V.GetFrameProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetFrameProperty()\n\nSet/Get the frame property.\n"},
  {"GetTextPad", PyvtkScalarBarActor_GetTextPad, METH_VARARGS,
   "V.GetTextPad() -> int\nC++: virtual int GetTextPad()\n\nSet/get the amount of padding around text boxes. The default is 1\npixel.\n"},
  {"SetTextPad", PyvtkScalarBarActor_SetTextPad, METH_VARARGS,
   "V.SetTextPad(int)\nC++: virtual void SetTextPad(int _arg)\n\nSet/get the amount of padding around text boxes. The default is 1\npixel.\n"},
  {"GetVerticalTitleSeparation", PyvtkScalarBarActor_GetVerticalTitleSeparation, METH_VARARGS,
   "V.GetVerticalTitleSeparation() -> int\nC++: virtual int GetVerticalTitleSeparation()\n\nSet/get the margin in pixels, between the title and the bar, when\nthe Orientation is vertical. The default is 0 pixels.\n"},
  {"SetVerticalTitleSeparation", PyvtkScalarBarActor_SetVerticalTitleSeparation, METH_VARARGS,
   "V.SetVerticalTitleSeparation(int)\nC++: virtual void SetVerticalTitleSeparation(int _arg)\n\nSet/get the margin in pixels, between the title and the bar, when\nthe Orientation is vertical. The default is 0 pixels.\n"},
  {"GetBarRatio", PyvtkScalarBarActor_GetBarRatio, METH_VARARGS,
   "V.GetBarRatio() -> float\nC++: virtual double GetBarRatio()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {"SetBarRatio", PyvtkScalarBarActor_SetBarRatio, METH_VARARGS,
   "V.SetBarRatio(float)\nC++: virtual void SetBarRatio(double _arg)\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {"GetBarRatioMinValue", PyvtkScalarBarActor_GetBarRatioMinValue, METH_VARARGS,
   "V.GetBarRatioMinValue() -> float\nC++: virtual double GetBarRatioMinValue()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {"GetBarRatioMaxValue", PyvtkScalarBarActor_GetBarRatioMaxValue, METH_VARARGS,
   "V.GetBarRatioMaxValue() -> float\nC++: virtual double GetBarRatioMaxValue()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {"GetTitleRatio", PyvtkScalarBarActor_GetTitleRatio, METH_VARARGS,
   "V.GetTitleRatio() -> float\nC++: virtual double GetTitleRatio()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {"SetTitleRatio", PyvtkScalarBarActor_SetTitleRatio, METH_VARARGS,
   "V.SetTitleRatio(float)\nC++: virtual void SetTitleRatio(double _arg)\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {"GetTitleRatioMinValue", PyvtkScalarBarActor_GetTitleRatioMinValue, METH_VARARGS,
   "V.GetTitleRatioMinValue() -> float\nC++: virtual double GetTitleRatioMinValue()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {"GetTitleRatioMaxValue", PyvtkScalarBarActor_GetTitleRatioMaxValue, METH_VARARGS,
   "V.GetTitleRatioMaxValue() -> float\nC++: virtual double GetTitleRatioMaxValue()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {"SetUnconstrainedFontSize", PyvtkScalarBarActor_SetUnconstrainedFontSize, METH_VARARGS,
   "V.SetUnconstrainedFontSize(bool)\nC++: virtual void SetUnconstrainedFontSize(bool _arg)\n\nSet/Get whether the font size of title and labels is\nunconstrained. Default is off. When it is constrained, the size\nof the scalar bar will constrained the font size When it is not,\nthe size of the font will always be respected\n"},
  {"GetUnconstrainedFontSize", PyvtkScalarBarActor_GetUnconstrainedFontSize, METH_VARARGS,
   "V.GetUnconstrainedFontSize() -> bool\nC++: virtual bool GetUnconstrainedFontSize()\n\nSet/Get whether the font size of title and labels is\nunconstrained. Default is off. When it is constrained, the size\nof the scalar bar will constrained the font size When it is not,\nthe size of the font will always be respected\n"},
  {"UnconstrainedFontSizeOn", PyvtkScalarBarActor_UnconstrainedFontSizeOn, METH_VARARGS,
   "V.UnconstrainedFontSizeOn()\nC++: virtual void UnconstrainedFontSizeOn()\n\nSet/Get whether the font size of title and labels is\nunconstrained. Default is off. When it is constrained, the size\nof the scalar bar will constrained the font size When it is not,\nthe size of the font will always be respected\n"},
  {"UnconstrainedFontSizeOff", PyvtkScalarBarActor_UnconstrainedFontSizeOff, METH_VARARGS,
   "V.UnconstrainedFontSizeOff()\nC++: virtual void UnconstrainedFontSizeOff()\n\nSet/Get whether the font size of title and labels is\nunconstrained. Default is off. When it is constrained, the size\nof the scalar bar will constrained the font size When it is not,\nthe size of the font will always be respected\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarBarActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkScalarBarActor", // tp_name
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
  PyvtkScalarBarActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarBarActor_StaticNew()
{
  return vtkScalarBarActor::New();
}

PyObject *PyvtkScalarBarActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarBarActor_Type, PyvtkScalarBarActor_Methods,
    "vtkScalarBarActor",
 &PyvtkScalarBarActor_StaticNew);

  PyTypeObject *pytype = &PyvtkScalarBarActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor2D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "PrecedeScalarBar", vtkScalarBarActor::PrecedeScalarBar },
        { "SucceedScalarBar", vtkScalarBarActor::SucceedScalarBar },
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

void PyVTKAddFile_vtkScalarBarActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarBarActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarBarActor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ORIENT_HORIZONTAL", 0 },
        { "VTK_ORIENT_VERTICAL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

