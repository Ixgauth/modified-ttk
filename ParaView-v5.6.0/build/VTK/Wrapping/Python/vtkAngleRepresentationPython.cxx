// python wrapper for vtkAngleRepresentation
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
#include "vtkAngleRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngleRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAngleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkAngleRepresentation_Doc =
  "vtkAngleRepresentation - represent the vtkAngleWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkAngleRepresentation is a superclass for classes representing\n"
  "the vtkAngleWidget. This representation consists of two rays and\n"
  "three vtkHandleRepresentations to place and manipulate the three\n"
  "points defining the angle representation. (Note: the three points are\n"
  "referred to as Point1, Center, and Point2, at the two end points\n"
  "(Point1 and Point2) and Center (around which the angle is measured).\n\n"
  "@sa\n"
  "vtkAngleWidget vtkHandleRepresentation vtkAngleRepresentation2D\n\n";


static PyObject *
PyvtkAngleRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngleRepresentation *tempr = vtkAngleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngleRepresentation::NewInstance());

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
PyvtkAngleRepresentation_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double tempr = op->GetAngle();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPoint1WorldPosition(temp0);

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
PyvtkAngleRepresentation_GetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetCenterWorldPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPoint2WorldPosition(temp0);

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
PyvtkAngleRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetPoint1DisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetCenterDisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetPoint2DisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPoint1DisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetCenterDisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPoint2DisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetHandleRepresentation(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InstantiateHandleRepresentation();
    }
    else
    {
      op->vtkAngleRepresentation::InstantiateHandleRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkAngleRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetCenterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetCenterRepresentation() :
      op->vtkAngleRepresentation::GetCenterRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkAngleRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAngleRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAngleRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAngleRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAngleRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetRay1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRay1Visibility(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetRay1Visibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetRay1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRay1Visibility() :
      op->vtkAngleRepresentation::GetRay1Visibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray1VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray1VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray1VisibilityOn();
    }
    else
    {
      op->vtkAngleRepresentation::Ray1VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray1VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray1VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray1VisibilityOff();
    }
    else
    {
      op->vtkAngleRepresentation::Ray1VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetRay2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRay2Visibility(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetRay2Visibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetRay2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRay2Visibility() :
      op->vtkAngleRepresentation::GetRay2Visibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray2VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray2VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray2VisibilityOn();
    }
    else
    {
      op->vtkAngleRepresentation::Ray2VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray2VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray2VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray2VisibilityOff();
    }
    else
    {
      op->vtkAngleRepresentation::Ray2VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetArcVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcVisibility(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetArcVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetArcVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArcVisibility() :
      op->vtkAngleRepresentation::GetArcVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ArcVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcVisibilityOn();
    }
    else
    {
      op->vtkAngleRepresentation::ArcVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ArcVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcVisibilityOff();
    }
    else
    {
      op->vtkAngleRepresentation::ArcVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAngleRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::StartWidgetInteraction(temp0);
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
PyvtkAngleRepresentation_CenterWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->CenterWidgetInteraction(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::CenterWidgetInteraction(temp0);
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
PyvtkAngleRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::WidgetInteraction(temp0);
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

static PyMethodDef PyvtkAngleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkAngleRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkAngleRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkAngleRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAngleRepresentation\nC++: static vtkAngleRepresentation *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkAngleRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAngleRepresentation\nC++: vtkAngleRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"GetAngle", PyvtkAngleRepresentation_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nThis representation and all subclasses must keep an angle (in\ndegrees) consistent with the state of the widget.\n"},
  {"GetPoint1WorldPosition", PyvtkAngleRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   "V.GetPoint1WorldPosition([float, float, float])\nC++: virtual void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetCenterWorldPosition", PyvtkAngleRepresentation_GetCenterWorldPosition, METH_VARARGS,
   "V.GetCenterWorldPosition([float, float, float])\nC++: virtual void GetCenterWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2WorldPosition", PyvtkAngleRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   "V.GetPoint2WorldPosition([float, float, float])\nC++: virtual void GetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1DisplayPosition", PyvtkAngleRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   "V.SetPoint1DisplayPosition([float, float, float])\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetCenterDisplayPosition", PyvtkAngleRepresentation_SetCenterDisplayPosition, METH_VARARGS,
   "V.SetCenterDisplayPosition([float, float, float])\nC++: virtual void SetCenterDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2DisplayPosition", PyvtkAngleRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   "V.SetPoint2DisplayPosition([float, float, float])\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint1DisplayPosition", PyvtkAngleRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   "V.GetPoint1DisplayPosition([float, float, float])\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetCenterDisplayPosition", PyvtkAngleRepresentation_GetCenterDisplayPosition, METH_VARARGS,
   "V.GetCenterDisplayPosition([float, float, float])\nC++: virtual void GetCenterDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2DisplayPosition", PyvtkAngleRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   "V.GetPoint2DisplayPosition([float, float, float])\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetHandleRepresentation", PyvtkAngleRepresentation_SetHandleRepresentation, METH_VARARGS,
   "V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkAngleRepresentation. To use this method, create a dummy\nvtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkAngleRepresentation uses this\ndummy to clone three vtkHandleRepresentations of the same type.\nMake sure you set the handle representation before the widget is\nenabled. (The method InstantiateHandleRepresentation() is invoked\nby the vtkAngle widget.)\n"},
  {"InstantiateHandleRepresentation", PyvtkAngleRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   "V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkAngleRepresentation. To use this method, create a dummy\nvtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkAngleRepresentation uses this\ndummy to clone three vtkHandleRepresentations of the same type.\nMake sure you set the handle representation before the widget is\nenabled. (The method InstantiateHandleRepresentation() is invoked\nby the vtkAngle widget.)\n"},
  {"GetPoint1Representation", PyvtkAngleRepresentation_GetPoint1Representation, METH_VARARGS,
   "V.GetPoint1Representation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {"GetCenterRepresentation", PyvtkAngleRepresentation_GetCenterRepresentation, METH_VARARGS,
   "V.GetCenterRepresentation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetCenterRepresentation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {"GetPoint2Representation", PyvtkAngleRepresentation_GetPoint2Representation, METH_VARARGS,
   "V.GetPoint2Representation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint2Representation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {"SetTolerance", PyvtkAngleRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {"GetToleranceMinValue", PyvtkAngleRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {"GetToleranceMaxValue", PyvtkAngleRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {"GetTolerance", PyvtkAngleRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {"SetLabelFormat", PyvtkAngleRepresentation_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSpecify the format to use for labeling the angle. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {"GetLabelFormat", PyvtkAngleRepresentation_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSpecify the format to use for labeling the angle. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {"SetRay1Visibility", PyvtkAngleRepresentation_SetRay1Visibility, METH_VARARGS,
   "V.SetRay1Visibility(int)\nC++: virtual void SetRay1Visibility(vtkTypeBool _arg)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"GetRay1Visibility", PyvtkAngleRepresentation_GetRay1Visibility, METH_VARARGS,
   "V.GetRay1Visibility() -> int\nC++: virtual vtkTypeBool GetRay1Visibility()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"Ray1VisibilityOn", PyvtkAngleRepresentation_Ray1VisibilityOn, METH_VARARGS,
   "V.Ray1VisibilityOn()\nC++: virtual void Ray1VisibilityOn()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"Ray1VisibilityOff", PyvtkAngleRepresentation_Ray1VisibilityOff, METH_VARARGS,
   "V.Ray1VisibilityOff()\nC++: virtual void Ray1VisibilityOff()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"SetRay2Visibility", PyvtkAngleRepresentation_SetRay2Visibility, METH_VARARGS,
   "V.SetRay2Visibility(int)\nC++: virtual void SetRay2Visibility(vtkTypeBool _arg)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"GetRay2Visibility", PyvtkAngleRepresentation_GetRay2Visibility, METH_VARARGS,
   "V.GetRay2Visibility() -> int\nC++: virtual vtkTypeBool GetRay2Visibility()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"Ray2VisibilityOn", PyvtkAngleRepresentation_Ray2VisibilityOn, METH_VARARGS,
   "V.Ray2VisibilityOn()\nC++: virtual void Ray2VisibilityOn()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"Ray2VisibilityOff", PyvtkAngleRepresentation_Ray2VisibilityOff, METH_VARARGS,
   "V.Ray2VisibilityOff()\nC++: virtual void Ray2VisibilityOff()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"SetArcVisibility", PyvtkAngleRepresentation_SetArcVisibility, METH_VARARGS,
   "V.SetArcVisibility(int)\nC++: virtual void SetArcVisibility(vtkTypeBool _arg)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"GetArcVisibility", PyvtkAngleRepresentation_GetArcVisibility, METH_VARARGS,
   "V.GetArcVisibility() -> int\nC++: virtual vtkTypeBool GetArcVisibility()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"ArcVisibilityOn", PyvtkAngleRepresentation_ArcVisibilityOn, METH_VARARGS,
   "V.ArcVisibilityOn()\nC++: virtual void ArcVisibilityOn()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"ArcVisibilityOff", PyvtkAngleRepresentation_ArcVisibilityOff, METH_VARARGS,
   "V.ArcVisibilityOff()\nC++: virtual void ArcVisibilityOff()\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"BuildRepresentation", PyvtkAngleRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkAngleRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkAngleRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"CenterWidgetInteraction", PyvtkAngleRepresentation_CenterWidgetInteraction, METH_VARARGS,
   "V.CenterWidgetInteraction([float, float])\nC++: virtual void CenterWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkAngleRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAngleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAngleRepresentation", // tp_name
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
  PyvtkAngleRepresentation_Doc, // tp_doc
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

PyObject *PyvtkAngleRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAngleRepresentation_Type, PyvtkAngleRepresentation_Methods,
    "vtkAngleRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkAngleRepresentation_Type;

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

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Outside", vtkAngleRepresentation::Outside },
        { "NearP1", vtkAngleRepresentation::NearP1 },
        { "NearCenter", vtkAngleRepresentation::NearCenter },
        { "NearP2", vtkAngleRepresentation::NearP2 },
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

void PyVTKAddFile_vtkAngleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

