// python wrapper for vtkOrientedGlyphFocalPlaneContourRepresentation
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
#include "vtkOrientedGlyphFocalPlaneContourRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedGlyphFocalPlaneContourRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOrientedGlyphFocalPlaneContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkFocalPlaneContourRepresentation_ClassNew
extern "C" { PyObject *PyvtkFocalPlaneContourRepresentation_ClassNew(); }
#define DECLARED_PyvtkFocalPlaneContourRepresentation_ClassNew
#endif

static const char *PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc =
  "vtkOrientedGlyphFocalPlaneContourRepresentation - Contours\nconstrained to a focal plane.\n\n"
  "Superclass: vtkFocalPlaneContourRepresentation\n\n"
  "This class is used to represent a contour drawn on the focal plane\n"
  "(usually overlaid on top of an image or volume widget). The class was\n"
  "written in order to be able to draw contours on a volume widget and\n"
  "have the contours overlaid on the focal plane in order to do contour\n"
  "segmentation.\n\n"
  "@sa\n"
  "vtkOrientedGlyphContourRepresentation\n\n";


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedGlyphFocalPlaneContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedGlyphFocalPlaneContourRepresentation *tempr = vtkOrientedGlyphFocalPlaneContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedGlyphFocalPlaneContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::NewInstance());

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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetActiveCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetLinesProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourRepresentationAsPolyData() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourRepresentationAsPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourPlaneDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourPlaneDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetContourPlaneDirectionCosines(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourPlaneDirectionCosines(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedGlyphFocalPlaneContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkOrientedGlyphFocalPlaneContourRepresentation\nC++: static vtkOrientedGlyphFocalPlaneContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkOrientedGlyphFocalPlaneContourRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOrientedGlyphFocalPlaneContourRepresentation\nC++: vtkOrientedGlyphFocalPlaneContourRepresentation *NewInstance(\n    )\n\nStandard methods for instances of this class.\n"},
  {"SetCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetCursorShape, METH_VARARGS,
   "V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"GetCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetCursorShape, METH_VARARGS,
   "V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"SetActiveCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetActiveCursorShape, METH_VARARGS,
   "V.SetActiveCursorShape(vtkPolyData)\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetActiveCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveCursorShape, METH_VARARGS,
   "V.GetActiveCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {"GetActiveProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveProperty, METH_VARARGS,
   "V.GetActiveProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {"GetLinesProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetLinesProperty, METH_VARARGS,
   "V.GetLinesProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetLinesProperty()\n\nThis is the property used by the lines.\n"},
  {"SetRenderer", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkOrientedGlyphFocalPlaneContourRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {"StartWidgetInteraction", PyvtkOrientedGlyphFocalPlaneContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {"WidgetInteraction", PyvtkOrientedGlyphFocalPlaneContourRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {"ComputeInteractionState", PyvtkOrientedGlyphFocalPlaneContourRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modified=0)\n    override;\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {"GetActors2D", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkOrientedGlyphFocalPlaneContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetContourRepresentationAsPolyData", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   "V.GetContourRepresentationAsPolyData() -> vtkPolyData\nC++: vtkPolyData *GetContourRepresentationAsPolyData() override;\n\nGet the points in this contour as a vtkPolyData.\n"},
  {"GetContourPlaneDirectionCosines", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourPlaneDirectionCosines, METH_VARARGS,
   "V.GetContourPlaneDirectionCosines((float, float, float))\n    -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetContourPlaneDirectionCosines(\n    const double origin[3])\n\nDirection cosines of the plane on which the contour lies on in\nworld co-ordinates. This would be the same matrix that would be\nset in vtkImageReslice or vtkImagePlaneWidget if there were a\nplane passing through the contour points. The origin must be the\norigin of the data under the contour.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOrientedGlyphFocalPlaneContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkOrientedGlyphFocalPlaneContourRepresentation", // tp_name
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
  PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedGlyphFocalPlaneContourRepresentation_StaticNew()
{
  return vtkOrientedGlyphFocalPlaneContourRepresentation::New();
}

PyObject *PyvtkOrientedGlyphFocalPlaneContourRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOrientedGlyphFocalPlaneContourRepresentation_Type, PyvtkOrientedGlyphFocalPlaneContourRepresentation_Methods,
    "vtkOrientedGlyphFocalPlaneContourRepresentation",
 &PyvtkOrientedGlyphFocalPlaneContourRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkOrientedGlyphFocalPlaneContourRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFocalPlaneContourRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientedGlyphFocalPlaneContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedGlyphFocalPlaneContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedGlyphFocalPlaneContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

