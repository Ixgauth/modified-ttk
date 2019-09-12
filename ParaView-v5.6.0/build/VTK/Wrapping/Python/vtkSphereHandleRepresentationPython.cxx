// python wrapper for vtkSphereHandleRepresentation
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
#include "vtkSphereHandleRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereHandleRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSphereHandleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static const char *PyvtkSphereHandleRepresentation_Doc =
  "vtkSphereHandleRepresentation - A spherical rendition of point in 3D\nspace\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "This class is a concrete implementation of vtkHandleRepresentation.\n"
  "It renders handles as spherical blobs in 3D space.\n\n"
  "@sa\n"
  "vtkHandleRepresentation vtkHandleWidget vtkSphereSource\n\n";


static PyObject *
PyvtkSphereHandleRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereHandleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereHandleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereHandleRepresentation *tempr = vtkSphereHandleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereHandleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereHandleRepresentation::NewInstance());

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
PyvtkSphereHandleRepresentation_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetWorldPosition(temp0);
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
PyvtkSphereHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkSphereHandleRepresentation_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationMode(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetTranslationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkSphereHandleRepresentation::GetTranslationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOn();
    }
    else
    {
      op->vtkSphereHandleRepresentation::TranslationModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOff();
    }
    else
    {
      op->vtkSphereHandleRepresentation::TranslationModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_SetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphereRadius(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetSphereRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadius() :
      op->vtkSphereHandleRepresentation::GetSphereRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedProperty(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetSelectedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSphereHandleRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkSphereHandleRepresentation::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_SetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHotSpotSize(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetHotSpotSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetHotSpotSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMinValue() :
      op->vtkSphereHandleRepresentation::GetHotSpotSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetHotSpotSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMaxValue() :
      op->vtkSphereHandleRepresentation::GetHotSpotSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSize() :
      op->vtkSphereHandleRepresentation::GetHotSpotSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleSize(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::SetHandleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSphereHandleRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkSphereHandleRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::StartWidgetInteraction(temp0);
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
PyvtkSphereHandleRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::WidgetInteraction(temp0);
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
PyvtkSphereHandleRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::PlaceWidget(temp0);
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
PyvtkSphereHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSphereHandleRepresentation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSphereHandleRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSphereHandleRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSphereHandleRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

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
      op->vtkSphereHandleRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereHandleRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereHandleRepresentation *op = static_cast<vtkSphereHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkSphereHandleRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereHandleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSphereHandleRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkSphereHandleRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkSphereHandleRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSphereHandleRepresentation\nC++: static vtkSphereHandleRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkSphereHandleRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSphereHandleRepresentation\nC++: vtkSphereHandleRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetWorldPosition", PyvtkSphereHandleRepresentation_SetWorldPosition, METH_VARARGS,
   "V.SetWorldPosition([float, float, float])\nC++: void SetWorldPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\nNote that if the position is set outside of the bounding box, it\nwill be clamped to the boundary of the bounding box. This method\noverloads the superclasses' SetWorldPosition() and\nSetDisplayPosition() in order to set the focal point of the\ncursor properly.\n"},
  {"SetDisplayPosition", PyvtkSphereHandleRepresentation_SetDisplayPosition, METH_VARARGS,
   "V.SetDisplayPosition([float, float, float])\nC++: void SetDisplayPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\nNote that if the position is set outside of the bounding box, it\nwill be clamped to the boundary of the bounding box. This method\noverloads the superclasses' SetWorldPosition() and\nSetDisplayPosition() in order to set the focal point of the\ncursor properly.\n"},
  {"SetTranslationMode", PyvtkSphereHandleRepresentation_SetTranslationMode, METH_VARARGS,
   "V.SetTranslationMode(int)\nC++: virtual void SetTranslationMode(vtkTypeBool _arg)\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves (i.e., the left and middle mouse buttons act the\nsame).  Otherwise, only the cursor focal point moves, which is\nconstrained by the bounds of the point representation. (Note that\nthe bounds can be scaled up using the right mouse button.)\n"},
  {"GetTranslationMode", PyvtkSphereHandleRepresentation_GetTranslationMode, METH_VARARGS,
   "V.GetTranslationMode() -> int\nC++: virtual vtkTypeBool GetTranslationMode()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves (i.e., the left and middle mouse buttons act the\nsame).  Otherwise, only the cursor focal point moves, which is\nconstrained by the bounds of the point representation. (Note that\nthe bounds can be scaled up using the right mouse button.)\n"},
  {"TranslationModeOn", PyvtkSphereHandleRepresentation_TranslationModeOn, METH_VARARGS,
   "V.TranslationModeOn()\nC++: virtual void TranslationModeOn()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves (i.e., the left and middle mouse buttons act the\nsame).  Otherwise, only the cursor focal point moves, which is\nconstrained by the bounds of the point representation. (Note that\nthe bounds can be scaled up using the right mouse button.)\n"},
  {"TranslationModeOff", PyvtkSphereHandleRepresentation_TranslationModeOff, METH_VARARGS,
   "V.TranslationModeOff()\nC++: virtual void TranslationModeOff()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves (i.e., the left and middle mouse buttons act the\nsame).  Otherwise, only the cursor focal point moves, which is\nconstrained by the bounds of the point representation. (Note that\nthe bounds can be scaled up using the right mouse button.)\n"},
  {"SetSphereRadius", PyvtkSphereHandleRepresentation_SetSphereRadius, METH_VARARGS,
   "V.SetSphereRadius(float)\nC++: void SetSphereRadius(double)\n\n"},
  {"GetSphereRadius", PyvtkSphereHandleRepresentation_GetSphereRadius, METH_VARARGS,
   "V.GetSphereRadius() -> float\nC++: double GetSphereRadius()\n\n"},
  {"SetProperty", PyvtkSphereHandleRepresentation_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetSelectedProperty", PyvtkSphereHandleRepresentation_SetSelectedProperty, METH_VARARGS,
   "V.SetSelectedProperty(vtkProperty)\nC++: void SetSelectedProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetProperty", PyvtkSphereHandleRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetSelectedProperty", PyvtkSphereHandleRepresentation_GetSelectedProperty, METH_VARARGS,
   "V.GetSelectedProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetHotSpotSize", PyvtkSphereHandleRepresentation_SetHotSpotSize, METH_VARARGS,
   "V.SetHotSpotSize(float)\nC++: virtual void SetHotSpotSize(double _arg)\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMinValue", PyvtkSphereHandleRepresentation_GetHotSpotSizeMinValue, METH_VARARGS,
   "V.GetHotSpotSizeMinValue() -> float\nC++: virtual double GetHotSpotSizeMinValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMaxValue", PyvtkSphereHandleRepresentation_GetHotSpotSizeMaxValue, METH_VARARGS,
   "V.GetHotSpotSizeMaxValue() -> float\nC++: virtual double GetHotSpotSizeMaxValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSize", PyvtkSphereHandleRepresentation_GetHotSpotSize, METH_VARARGS,
   "V.GetHotSpotSize() -> float\nC++: virtual double GetHotSpotSize()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"SetHandleSize", PyvtkSphereHandleRepresentation_SetHandleSize, METH_VARARGS,
   "V.SetHandleSize(float)\nC++: void SetHandleSize(double size) override;\n\nOverload the superclasses SetHandleSize() method to update\ninternal variables.\n"},
  {"GetBounds", PyvtkSphereHandleRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"BuildRepresentation", PyvtkSphereHandleRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"StartWidgetInteraction", PyvtkSphereHandleRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"WidgetInteraction", PyvtkSphereHandleRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ComputeInteractionState", PyvtkSphereHandleRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"PlaceWidget", PyvtkSphereHandleRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ShallowCopy", PyvtkSphereHandleRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"DeepCopy", PyvtkSphereHandleRepresentation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkProp)\nC++: void DeepCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetActors", PyvtkSphereHandleRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkSphereHandleRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkSphereHandleRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSphereHandleRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSphereHandleRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"Highlight", PyvtkSphereHandleRepresentation_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int highlight) override;\n\n"},
  {"RegisterPickers", PyvtkSphereHandleRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSphereHandleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSphereHandleRepresentation", // tp_name
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
  PyvtkSphereHandleRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereHandleRepresentation_StaticNew()
{
  return vtkSphereHandleRepresentation::New();
}

PyObject *PyvtkSphereHandleRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSphereHandleRepresentation_Type, PyvtkSphereHandleRepresentation_Methods,
    "vtkSphereHandleRepresentation",
 &PyvtkSphereHandleRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkSphereHandleRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHandleRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereHandleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereHandleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereHandleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

