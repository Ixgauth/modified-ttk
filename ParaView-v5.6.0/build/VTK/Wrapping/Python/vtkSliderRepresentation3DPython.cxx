// python wrapper for vtkSliderRepresentation3D
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
#include "vtkSliderRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSliderRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSliderRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkSliderRepresentation_ClassNew
extern "C" { PyObject *PyvtkSliderRepresentation_ClassNew(); }
#define DECLARED_PyvtkSliderRepresentation_ClassNew
#endif

static const char *PyvtkSliderRepresentation3D_Doc =
  "vtkSliderRepresentation3D - provide the representation for a\nvtkSliderWidget with a 3D skin\n\n"
  "Superclass: vtkSliderRepresentation\n\n"
  "This class is used to represent and render a vtkSliderWidget. To use\n"
  "this class, you must at a minimum specify the end points of the\n"
  "slider. Optional instance variable can be used to modify the\n"
  "appearance of the widget.\n\n"
  "@sa\n"
  "vtkSliderWidget\n\n";


static PyObject *
PyvtkSliderRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSliderRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliderRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSliderRepresentation3D *tempr = vtkSliderRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliderRepresentation3D::NewInstance());

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
PyvtkSliderRepresentation3D_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkSliderRepresentation3D::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetPoint1InWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1InWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->SetPoint1InWorldCoordinates(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSliderRepresentation3D::SetPoint1InWorldCoordinates(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkSliderRepresentation3D::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetPoint2InWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2InWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->SetPoint2InWorldCoordinates(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSliderRepresentation3D::SetPoint2InWorldCoordinates(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleText(temp0);
    }
    else
    {
      op->vtkSliderRepresentation3D::SetTitleText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTitleText() :
      op->vtkSliderRepresentation3D::GetTitleText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetSliderShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliderShape(temp0);
    }
    else
    {
      op->vtkSliderRepresentation3D::SetSliderShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliderShapeMinValue() :
      op->vtkSliderRepresentation3D::GetSliderShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliderShapeMaxValue() :
      op->vtkSliderRepresentation3D::GetSliderShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliderShape() :
      op->vtkSliderRepresentation3D::GetSliderShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetSliderShapeToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderShapeToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliderShapeToSphere();
    }
    else
    {
      op->vtkSliderRepresentation3D::SetSliderShapeToSphere();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetSliderShapeToCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderShapeToCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliderShapeToCylinder();
    }
    else
    {
      op->vtkSliderRepresentation3D::SetSliderShapeToCylinder();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotation(temp0);
    }
    else
    {
      op->vtkSliderRepresentation3D::SetRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotation() :
      op->vtkSliderRepresentation3D::GetRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSliderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSliderProperty() :
      op->vtkSliderRepresentation3D::GetSliderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetTubeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetTubeProperty() :
      op->vtkSliderRepresentation3D::GetTubeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetCapProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCapProperty() :
      op->vtkSliderRepresentation3D::GetCapProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkSliderRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkSliderRepresentation3D::PlaceWidget(temp0);
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
PyvtkSliderRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkSliderRepresentation3D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::StartWidgetInteraction(temp0);
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
PyvtkSliderRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::WidgetInteraction(temp0);
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
PyvtkSliderRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkSliderRepresentation3D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSliderRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

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
      op->vtkSliderRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSliderRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSliderRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSliderRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSliderRepresentation3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation3D_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation3D *op = static_cast<vtkSliderRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkSliderRepresentation3D::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSliderRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkSliderRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkSliderRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkSliderRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSliderRepresentation3D\nC++: static vtkSliderRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkSliderRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSliderRepresentation3D\nC++: vtkSliderRepresentation3D *NewInstance()\n\nStandard methods for the class.\n"},
  {"GetPoint1Coordinate", PyvtkSliderRepresentation3D_GetPoint1Coordinate, METH_VARARGS,
   "V.GetPoint1Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint1Coordinate()\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {"SetPoint1InWorldCoordinates", PyvtkSliderRepresentation3D_SetPoint1InWorldCoordinates, METH_VARARGS,
   "V.SetPoint1InWorldCoordinates(float, float, float)\nC++: void SetPoint1InWorldCoordinates(double x, double y,\n    double z)\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {"GetPoint2Coordinate", PyvtkSliderRepresentation3D_GetPoint2Coordinate, METH_VARARGS,
   "V.GetPoint2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPoint2Coordinate()\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {"SetPoint2InWorldCoordinates", PyvtkSliderRepresentation3D_SetPoint2InWorldCoordinates, METH_VARARGS,
   "V.SetPoint2InWorldCoordinates(float, float, float)\nC++: void SetPoint2InWorldCoordinates(double x, double y,\n    double z)\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {"SetTitleText", PyvtkSliderRepresentation3D_SetTitleText, METH_VARARGS,
   "V.SetTitleText(string)\nC++: void SetTitleText(const char *) override;\n\nSpecify the title text for this widget. If the value is not set,\nor set to the empty string \"\", then the title text is not\ndisplayed.\n"},
  {"GetTitleText", PyvtkSliderRepresentation3D_GetTitleText, METH_VARARGS,
   "V.GetTitleText() -> string\nC++: const char *GetTitleText() override;\n\nSpecify the title text for this widget. If the value is not set,\nor set to the empty string \"\", then the title text is not\ndisplayed.\n"},
  {"SetSliderShape", PyvtkSliderRepresentation3D_SetSliderShape, METH_VARARGS,
   "V.SetSliderShape(int)\nC++: virtual void SetSliderShape(int _arg)\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {"GetSliderShapeMinValue", PyvtkSliderRepresentation3D_GetSliderShapeMinValue, METH_VARARGS,
   "V.GetSliderShapeMinValue() -> int\nC++: virtual int GetSliderShapeMinValue()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {"GetSliderShapeMaxValue", PyvtkSliderRepresentation3D_GetSliderShapeMaxValue, METH_VARARGS,
   "V.GetSliderShapeMaxValue() -> int\nC++: virtual int GetSliderShapeMaxValue()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {"GetSliderShape", PyvtkSliderRepresentation3D_GetSliderShape, METH_VARARGS,
   "V.GetSliderShape() -> int\nC++: virtual int GetSliderShape()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {"SetSliderShapeToSphere", PyvtkSliderRepresentation3D_SetSliderShapeToSphere, METH_VARARGS,
   "V.SetSliderShapeToSphere()\nC++: void SetSliderShapeToSphere()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {"SetSliderShapeToCylinder", PyvtkSliderRepresentation3D_SetSliderShapeToCylinder, METH_VARARGS,
   "V.SetSliderShapeToCylinder()\nC++: void SetSliderShapeToCylinder()\n\nSpecify whether to use a sphere or cylinder slider shape. By\ndefault, a sphere shape is used.\n"},
  {"SetRotation", PyvtkSliderRepresentation3D_SetRotation, METH_VARARGS,
   "V.SetRotation(float)\nC++: virtual void SetRotation(double _arg)\n\nSet the rotation of the slider widget around the axis of the\nwidget. This is used to control which way the widget is initially\noriented. (This is especially important for the label and title.)\n"},
  {"GetRotation", PyvtkSliderRepresentation3D_GetRotation, METH_VARARGS,
   "V.GetRotation() -> float\nC++: virtual double GetRotation()\n\nSet the rotation of the slider widget around the axis of the\nwidget. This is used to control which way the widget is initially\noriented. (This is especially important for the label and title.)\n"},
  {"GetSliderProperty", PyvtkSliderRepresentation3D_GetSliderProperty, METH_VARARGS,
   "V.GetSliderProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSliderProperty()\n\nGet the slider properties. The properties of the slider when\nselected and unselected can be manipulated.\n"},
  {"GetTubeProperty", PyvtkSliderRepresentation3D_GetTubeProperty, METH_VARARGS,
   "V.GetTubeProperty() -> vtkProperty\nC++: virtual vtkProperty *GetTubeProperty()\n\nGet the properties for the tube and end caps.\n"},
  {"GetCapProperty", PyvtkSliderRepresentation3D_GetCapProperty, METH_VARARGS,
   "V.GetCapProperty() -> vtkProperty\nC++: virtual vtkProperty *GetCapProperty()\n\nGet the properties for the tube and end caps.\n"},
  {"GetSelectedProperty", PyvtkSliderRepresentation3D_GetSelectedProperty, METH_VARARGS,
   "V.GetSelectedProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nGet the selection property. This property is used to modify the\nappearance of selected objects (e.g., the slider).\n"},
  {"PlaceWidget", PyvtkSliderRepresentation3D_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nMethods to interface with the vtkSliderWidget.\n"},
  {"BuildRepresentation", PyvtkSliderRepresentation3D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethods to interface with the vtkSliderWidget.\n"},
  {"StartWidgetInteraction", PyvtkSliderRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nMethods to interface with the vtkSliderWidget.\n"},
  {"WidgetInteraction", PyvtkSliderRepresentation3D_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\nMethods to interface with the vtkSliderWidget.\n"},
  {"Highlight", PyvtkSliderRepresentation3D_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int) override;\n\nMethods to interface with the vtkSliderWidget.\n"},
  {"GetBounds", PyvtkSliderRepresentation3D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkSliderRepresentation3D_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods supporting the rendering process.\n"},
  {"ReleaseGraphicsResources", PyvtkSliderRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkSliderRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods supporting the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSliderRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods supporting the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSliderRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods supporting the rendering process.\n"},
  {"GetMTime", PyvtkSliderRepresentation3D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime to include point coordinates\n"},
  {"RegisterPickers", PyvtkSliderRepresentation3D_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSliderRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSliderRepresentation3D", // tp_name
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
  PyvtkSliderRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSliderRepresentation3D_StaticNew()
{
  return vtkSliderRepresentation3D::New();
}

PyObject *PyvtkSliderRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSliderRepresentation3D_Type, PyvtkSliderRepresentation3D_Methods,
    "vtkSliderRepresentation3D",
 &PyvtkSliderRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkSliderRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSliderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSliderRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSliderRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSliderRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

