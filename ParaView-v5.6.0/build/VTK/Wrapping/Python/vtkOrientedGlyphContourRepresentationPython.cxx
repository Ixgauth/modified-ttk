// python wrapper for vtkOrientedGlyphContourRepresentation
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
#include "vtkOrientedGlyphContourRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedGlyphContourRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOrientedGlyphContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkContourRepresentation_ClassNew
extern "C" { PyObject *PyvtkContourRepresentation_ClassNew(); }
#define DECLARED_PyvtkContourRepresentation_ClassNew
#endif

static const char *PyvtkOrientedGlyphContourRepresentation_Doc =
  "vtkOrientedGlyphContourRepresentation - Default representation for\nthe contour widget\n\n"
  "Superclass: vtkContourRepresentation\n\n"
  "This class provides the default concrete representation for the\n"
  "vtkContourWidget. It works in conjunction with the\n"
  "vtkContourLineInterpolator and vtkPointPlacer. See vtkContourWidget\n"
  "for details.\n"
  "@sa\n"
  "vtkContourRepresentation vtkContourWidget vtkPointPlacer\n"
  "vtkContourLineInterpolator\n\n";


static PyObject *
PyvtkOrientedGlyphContourRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedGlyphContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedGlyphContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedGlyphContourRepresentation *tempr = vtkOrientedGlyphContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedGlyphContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedGlyphContourRepresentation::NewInstance());

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
PyvtkOrientedGlyphContourRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetCursorShape(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkOrientedGlyphContourRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetActiveCursorShape(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetActiveCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkOrientedGlyphContourRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLinesProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientedGlyphContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientedGlyphContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkOrientedGlyphContourRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientedGlyphContourRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourRepresentationAsPolyData() :
      op->vtkOrientedGlyphContourRepresentation::GetContourRepresentationAsPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlwaysOnTop(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetAlwaysOnTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlwaysOnTop() :
      op->vtkOrientedGlyphContourRepresentation::GetAlwaysOnTop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlwaysOnTopOn();
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::AlwaysOnTopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlwaysOnTopOff();
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::AlwaysOnTopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetLineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSelectedNodes(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetShowSelectedNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOrientedGlyphContourRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedGlyphContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkOrientedGlyphContourRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkOrientedGlyphContourRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkOrientedGlyphContourRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkOrientedGlyphContourRepresentation\nC++: static vtkOrientedGlyphContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkOrientedGlyphContourRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOrientedGlyphContourRepresentation\nC++: vtkOrientedGlyphContourRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetCursorShape", PyvtkOrientedGlyphContourRepresentation_SetCursorShape, METH_VARARGS,
   "V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"GetCursorShape", PyvtkOrientedGlyphContourRepresentation_GetCursorShape, METH_VARARGS,
   "V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"SetActiveCursorShape", PyvtkOrientedGlyphContourRepresentation_SetActiveCursorShape, METH_VARARGS,
   "V.SetActiveCursorShape(vtkPolyData)\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetActiveCursorShape", PyvtkOrientedGlyphContourRepresentation_GetActiveCursorShape, METH_VARARGS,
   "V.GetActiveCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetProperty", PyvtkOrientedGlyphContourRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {"GetActiveProperty", PyvtkOrientedGlyphContourRepresentation_GetActiveProperty, METH_VARARGS,
   "V.GetActiveProperty() -> vtkProperty\nC++: virtual vtkProperty *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {"GetLinesProperty", PyvtkOrientedGlyphContourRepresentation_GetLinesProperty, METH_VARARGS,
   "V.GetLinesProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLinesProperty()\n\nThis is the property used by the lines.\n"},
  {"SetRenderer", PyvtkOrientedGlyphContourRepresentation_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkOrientedGlyphContourRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"StartWidgetInteraction", PyvtkOrientedGlyphContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"WidgetInteraction", PyvtkOrientedGlyphContourRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"ComputeInteractionState", PyvtkOrientedGlyphContourRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modified=0)\n    override;\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"GetActors", PyvtkOrientedGlyphContourRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkOrientedGlyphContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkOrientedGlyphContourRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkOrientedGlyphContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkOrientedGlyphContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkOrientedGlyphContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetContourRepresentationAsPolyData", PyvtkOrientedGlyphContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   "V.GetContourRepresentationAsPolyData() -> vtkPolyData\nC++: vtkPolyData *GetContourRepresentationAsPolyData() override;\n\nGet the points in this contour as a vtkPolyData.\n"},
  {"SetAlwaysOnTop", PyvtkOrientedGlyphContourRepresentation_SetAlwaysOnTop, METH_VARARGS,
   "V.SetAlwaysOnTop(int)\nC++: virtual void SetAlwaysOnTop(vtkTypeBool _arg)\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {"GetAlwaysOnTop", PyvtkOrientedGlyphContourRepresentation_GetAlwaysOnTop, METH_VARARGS,
   "V.GetAlwaysOnTop() -> int\nC++: virtual vtkTypeBool GetAlwaysOnTop()\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {"AlwaysOnTopOn", PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOn, METH_VARARGS,
   "V.AlwaysOnTopOn()\nC++: virtual void AlwaysOnTopOn()\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {"AlwaysOnTopOff", PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOff, METH_VARARGS,
   "V.AlwaysOnTopOff()\nC++: virtual void AlwaysOnTopOff()\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {"SetLineColor", PyvtkOrientedGlyphContourRepresentation_SetLineColor, METH_VARARGS,
   "V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLinesProperty()->SetColor().\n"},
  {"SetShowSelectedNodes", PyvtkOrientedGlyphContourRepresentation_SetShowSelectedNodes, METH_VARARGS,
   "V.SetShowSelectedNodes(int)\nC++: void SetShowSelectedNodes(vtkTypeBool) override;\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"GetBounds", PyvtkOrientedGlyphContourRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturn the bounds of the representation\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOrientedGlyphContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkOrientedGlyphContourRepresentation", // tp_name
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
  PyvtkOrientedGlyphContourRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedGlyphContourRepresentation_StaticNew()
{
  return vtkOrientedGlyphContourRepresentation::New();
}

PyObject *PyvtkOrientedGlyphContourRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOrientedGlyphContourRepresentation_Type, PyvtkOrientedGlyphContourRepresentation_Methods,
    "vtkOrientedGlyphContourRepresentation",
 &PyvtkOrientedGlyphContourRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkOrientedGlyphContourRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContourRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientedGlyphContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedGlyphContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedGlyphContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

