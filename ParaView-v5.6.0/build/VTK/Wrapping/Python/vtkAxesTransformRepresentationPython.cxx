// python wrapper for vtkAxesTransformRepresentation
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
#include "vtkAxesTransformRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxesTransformRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAxesTransformRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkAxesTransformRepresentation_Doc =
  "vtkAxesTransformRepresentation - represent the vtkAxesTransformWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkAxesTransformRepresentation is a representation for the\n"
  "vtkAxesTransformWidget. This representation consists of a origin\n"
  "sphere with three tubed axes with cones at the end of the axes. In\n"
  "addition an optional label provides delta values of motion. Note that\n"
  "this particular widget draws its representation in 3D space, so the\n"
  "widget can be occluded.\n"
  "@sa\n"
  "vtkDistanceWidget vtkDistanceRepresentation\n"
  "vtkDistanceRepresentation2D\n\n";


static PyObject *
PyvtkAxesTransformRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxesTransformRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxesTransformRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxesTransformRepresentation *tempr = vtkAxesTransformRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxesTransformRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxesTransformRepresentation::NewInstance());

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
PyvtkAxesTransformRepresentation_GetOriginRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetOriginRepresentation() :
      op->vtkAxesTransformRepresentation::GetOriginRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetSelectionRepresentation() :
      op->vtkAxesTransformRepresentation::GetSelectionRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetOriginWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginWorldPosition() :
      op->vtkAxesTransformRepresentation::GetOriginWorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAxesTransformRepresentation_GetOriginWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->GetOriginWorldPosition(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::GetOriginWorldPosition(temp0);
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
PyvtkAxesTransformRepresentation_GetOriginWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAxesTransformRepresentation_GetOriginWorldPosition_s1(self, args);
    case 1:
      return PyvtkAxesTransformRepresentation_GetOriginWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOriginWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkAxesTransformRepresentation_SetOriginWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->SetOriginWorldPosition(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::SetOriginWorldPosition(temp0);
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
PyvtkAxesTransformRepresentation_SetOriginDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->SetOriginDisplayPosition(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::SetOriginDisplayPosition(temp0);
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
PyvtkAxesTransformRepresentation_GetOriginDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->GetOriginDisplayPosition(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::GetOriginDisplayPosition(temp0);
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
PyvtkAxesTransformRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAxesTransformRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAxesTransformRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAxesTransformRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxesTransformRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkAxesTransformRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkAxesTransformRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAxesTransformRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::StartWidgetInteraction(temp0);
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
PyvtkAxesTransformRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::WidgetInteraction(temp0);
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
PyvtkAxesTransformRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAxesTransformRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->vtkAxesTransformRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxesTransformRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxesTransformRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->SetLabelScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxesTransformRepresentation::SetLabelScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxesTransformRepresentation_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

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
      op->SetLabelScale(temp0);
    }
    else
    {
      op->vtkAxesTransformRepresentation::SetLabelScale(temp0);
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
PyvtkAxesTransformRepresentation_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxesTransformRepresentation_SetLabelScale_s1(self, args);
    case 1:
      return PyvtkAxesTransformRepresentation_SetLabelScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return nullptr;
}



static PyObject *
PyvtkAxesTransformRepresentation_GetLabelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabelScale() :
      op->vtkAxesTransformRepresentation::GetLabelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformRepresentation_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformRepresentation *op = static_cast<vtkAxesTransformRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperty() :
      op->vtkAxesTransformRepresentation::GetLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAxesTransformRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkAxesTransformRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkAxesTransformRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkAxesTransformRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAxesTransformRepresentation\nC++: static vtkAxesTransformRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkAxesTransformRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAxesTransformRepresentation\nC++: vtkAxesTransformRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"GetOriginRepresentation", PyvtkAxesTransformRepresentation_GetOriginRepresentation, METH_VARARGS,
   "V.GetOriginRepresentation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetOriginRepresentation()\n\nSet/Get the two handle representations used for the\nvtkAxesTransformWidget. (Note: properties can be set by grabbing\nthese representations and setting the properties appropriately.)\n"},
  {"GetSelectionRepresentation", PyvtkAxesTransformRepresentation_GetSelectionRepresentation, METH_VARARGS,
   "V.GetSelectionRepresentation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetSelectionRepresentation()\n\nSet/Get the two handle representations used for the\nvtkAxesTransformWidget. (Note: properties can be set by grabbing\nthese representations and setting the properties appropriately.)\n"},
  {"GetOriginWorldPosition", PyvtkAxesTransformRepresentation_GetOriginWorldPosition, METH_VARARGS,
   "V.GetOriginWorldPosition() -> (float, ...)\nC++: double *GetOriginWorldPosition()\nV.GetOriginWorldPosition([float, float, float])\nC++: void GetOriginWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetOriginWorldPosition", PyvtkAxesTransformRepresentation_SetOriginWorldPosition, METH_VARARGS,
   "V.SetOriginWorldPosition([float, float, float])\nC++: void SetOriginWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetOriginDisplayPosition", PyvtkAxesTransformRepresentation_SetOriginDisplayPosition, METH_VARARGS,
   "V.SetOriginDisplayPosition([float, float, float])\nC++: void SetOriginDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetOriginDisplayPosition", PyvtkAxesTransformRepresentation_GetOriginDisplayPosition, METH_VARARGS,
   "V.GetOriginDisplayPosition([float, float, float])\nC++: void GetOriginDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetTolerance", PyvtkAxesTransformRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetToleranceMinValue", PyvtkAxesTransformRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetToleranceMaxValue", PyvtkAxesTransformRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetTolerance", PyvtkAxesTransformRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"SetLabelFormat", PyvtkAxesTransformRepresentation_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSpecify the format to use for labelling information during\ntransformation. Note that an empty string results in no label, or\na format string without a \"%\" character will not print numeric\nvalues.\n"},
  {"GetLabelFormat", PyvtkAxesTransformRepresentation_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSpecify the format to use for labelling information during\ntransformation. Note that an empty string results in no label, or\na format string without a \"%\" character will not print numeric\nvalues.\n"},
  {"SetInteractionState", PyvtkAxesTransformRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkAxesTransformRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "V.GetInteractionStateMinValue() -> int\nC++: virtual int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMaxValue", PyvtkAxesTransformRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "V.GetInteractionStateMaxValue() -> int\nC++: virtual int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"BuildRepresentation", PyvtkAxesTransformRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethod to satisfy superclasses' API.\n"},
  {"ComputeInteractionState", PyvtkAxesTransformRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethod to satisfy superclasses' API.\n"},
  {"StartWidgetInteraction", PyvtkAxesTransformRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nMethod to satisfy superclasses' API.\n"},
  {"WidgetInteraction", PyvtkAxesTransformRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nMethod to satisfy superclasses' API.\n"},
  {"GetBounds", PyvtkAxesTransformRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethod to satisfy superclasses' API.\n"},
  {"ReleaseGraphicsResources", PyvtkAxesTransformRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOpaqueGeometry", PyvtkAxesTransformRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAxesTransformRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods required by vtkProp superclass.\n"},
  {"SetLabelScale", PyvtkAxesTransformRepresentation_SetLabelScale, METH_VARARGS,
   "V.SetLabelScale(float, float, float)\nC++: void SetLabelScale(double x, double y, double z)\nV.SetLabelScale([float, float, float])\nC++: virtual void SetLabelScale(double scale[3])\n\nScale text (font size along each dimension). This helps control\nthe appearance of the 3D text.\n"},
  {"GetLabelScale", PyvtkAxesTransformRepresentation_GetLabelScale, METH_VARARGS,
   "V.GetLabelScale() -> (float, ...)\nC++: virtual double *GetLabelScale()\n\nScale text (font size along each dimension). This helps control\nthe appearance of the 3D text.\n"},
  {"GetLabelProperty", PyvtkAxesTransformRepresentation_GetLabelProperty, METH_VARARGS,
   "V.GetLabelProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLabelProperty()\n\nGet the distance annotation property\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAxesTransformRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAxesTransformRepresentation", // tp_name
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
  PyvtkAxesTransformRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxesTransformRepresentation_StaticNew()
{
  return vtkAxesTransformRepresentation::New();
}

PyObject *PyvtkAxesTransformRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAxesTransformRepresentation_Type, PyvtkAxesTransformRepresentation_Methods,
    "vtkAxesTransformRepresentation",
 &PyvtkAxesTransformRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkAxesTransformRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "Outside", vtkAxesTransformRepresentation::Outside },
        { "OnOrigin", vtkAxesTransformRepresentation::OnOrigin },
        { "OnX", vtkAxesTransformRepresentation::OnX },
        { "OnY", vtkAxesTransformRepresentation::OnY },
        { "OnZ", vtkAxesTransformRepresentation::OnZ },
        { "OnXEnd", vtkAxesTransformRepresentation::OnXEnd },
        { "OnYEnd", vtkAxesTransformRepresentation::OnYEnd },
        { "OnZEnd", vtkAxesTransformRepresentation::OnZEnd },
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

void PyVTKAddFile_vtkAxesTransformRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxesTransformRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxesTransformRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

