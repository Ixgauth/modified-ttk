// python wrapper for vtkDistanceRepresentation
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
#include "vtkDistanceRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistanceRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDistanceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkDistanceRepresentation_Doc =
  "vtkDistanceRepresentation - represent the vtkDistanceWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkDistanceRepresentation is a superclass for various types of\n"
  "representations for the vtkDistanceWidget. Logically subclasses\n"
  "consist of an axis and two handles for placing/manipulating the end\n"
  "points.\n\n"
  "@sa\n"
  "vtkDistanceWidget vtkHandleRepresentation vtkDistanceRepresentation2D\n"
  "vtkDistanceRepresentation\n\n";


static PyObject *
PyvtkDistanceRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistanceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistanceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistanceRepresentation *tempr = vtkDistanceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistanceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistanceRepresentation::NewInstance());

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
PyvtkDistanceRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double tempr = op->GetDistance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPoint1WorldPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDistanceRepresentation_GetPoint1WorldPosition_s1(self, args);
    case 0:
      return PyvtkDistanceRepresentation_GetPoint1WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return nullptr;
}



static PyObject *
PyvtkDistanceRepresentation_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPoint2WorldPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDistanceRepresentation_GetPoint2WorldPosition_s1(self, args);
    case 0:
      return PyvtkDistanceRepresentation_GetPoint2WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return nullptr;
}



static PyObject *
PyvtkDistanceRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetPoint1WorldPosition(temp0);

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
PyvtkDistanceRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetPoint2WorldPosition(temp0);

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
PyvtkDistanceRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InstantiateHandleRepresentation();
    }
    else
    {
      op->vtkDistanceRepresentation::InstantiateHandleRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkDistanceRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkDistanceRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkDistanceRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkDistanceRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkDistanceRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkDistanceRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkDistanceRepresentation::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerMode(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetRulerMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRulerMode() :
      op->vtkDistanceRepresentation::GetRulerMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_RulerModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RulerModeOn();
    }
    else
    {
      op->vtkDistanceRepresentation::RulerModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_RulerModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RulerModeOff();
    }
    else
    {
      op->vtkDistanceRepresentation::RulerModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerDistance(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetRulerDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistanceMinValue() :
      op->vtkDistanceRepresentation::GetRulerDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistanceMaxValue() :
      op->vtkDistanceRepresentation::GetRulerDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistance() :
      op->vtkDistanceRepresentation::GetRulerDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRulerTicks(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetNumberOfRulerTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRulerTicksMinValue() :
      op->vtkDistanceRepresentation::GetNumberOfRulerTicksMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRulerTicksMaxValue() :
      op->vtkDistanceRepresentation::GetNumberOfRulerTicksMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRulerTicks() :
      op->vtkDistanceRepresentation::GetNumberOfRulerTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkDistanceRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::StartWidgetInteraction(temp0);
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
PyvtkDistanceRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::WidgetInteraction(temp0);
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
PyvtkDistanceRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDistanceRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDistanceRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDistanceRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}

static PyMethodDef PyvtkDistanceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkDistanceRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkDistanceRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkDistanceRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDistanceRepresentation\nC++: static vtkDistanceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkDistanceRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDistanceRepresentation\nC++: vtkDistanceRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"GetDistance", PyvtkDistanceRepresentation_GetDistance, METH_VARARGS,
   "V.GetDistance() -> float\nC++: virtual double GetDistance()\n\nThis representation and all subclasses must keep a distance\nconsistent with the state of the widget.\n"},
  {"GetPoint1WorldPosition", PyvtkDistanceRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   "V.GetPoint1WorldPosition([float, float, float])\nC++: virtual void GetPoint1WorldPosition(double pos[3])\nV.GetPoint1WorldPosition() -> (float, float, float)\nC++: virtual double *GetPoint1WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2WorldPosition", PyvtkDistanceRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   "V.GetPoint2WorldPosition([float, float, float])\nC++: virtual void GetPoint2WorldPosition(double pos[3])\nV.GetPoint2WorldPosition() -> (float, float, float)\nC++: virtual double *GetPoint2WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1DisplayPosition", PyvtkDistanceRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   "V.SetPoint1DisplayPosition([float, float, float])\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2DisplayPosition", PyvtkDistanceRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   "V.SetPoint2DisplayPosition([float, float, float])\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint1DisplayPosition", PyvtkDistanceRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   "V.GetPoint1DisplayPosition([float, float, float])\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2DisplayPosition", PyvtkDistanceRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   "V.GetPoint2DisplayPosition([float, float, float])\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1WorldPosition", PyvtkDistanceRepresentation_SetPoint1WorldPosition, METH_VARARGS,
   "V.SetPoint1WorldPosition([float, float, float])\nC++: virtual void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2WorldPosition", PyvtkDistanceRepresentation_SetPoint2WorldPosition, METH_VARARGS,
   "V.SetPoint2WorldPosition([float, float, float])\nC++: virtual void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetHandleRepresentation", PyvtkDistanceRepresentation_SetHandleRepresentation, METH_VARARGS,
   "V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the two internal vtkHandleWidgets within\nvtkDistanceWidget. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkDistanceRepresentation uses this dummy to\nclone two vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkDistance widget.)\n"},
  {"InstantiateHandleRepresentation", PyvtkDistanceRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   "V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the two internal vtkHandleWidgets within\nvtkDistanceWidget. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkDistanceRepresentation uses this dummy to\nclone two vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkDistance widget.)\n"},
  {"GetPoint1Representation", PyvtkDistanceRepresentation_GetPoint1Representation, METH_VARARGS,
   "V.GetPoint1Representation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the two handle representations used for the\nvtkDistanceWidget. (Note: properties can be set by grabbing these\nrepresentations and setting the properties appropriately.)\n"},
  {"GetPoint2Representation", PyvtkDistanceRepresentation_GetPoint2Representation, METH_VARARGS,
   "V.GetPoint2Representation() -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint2Representation()\n\nSet/Get the two handle representations used for the\nvtkDistanceWidget. (Note: properties can be set by grabbing these\nrepresentations and setting the properties appropriately.)\n"},
  {"SetTolerance", PyvtkDistanceRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetToleranceMinValue", PyvtkDistanceRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetToleranceMaxValue", PyvtkDistanceRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetTolerance", PyvtkDistanceRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"SetLabelFormat", PyvtkDistanceRepresentation_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {"GetLabelFormat", PyvtkDistanceRepresentation_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {"SetScale", PyvtkDistanceRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: virtual void SetScale(double _arg)\n\nSet the scale factor from VTK world coordinates. The ruler marks\nand label will be defined in terms of the scaled space. For\nexample, if the VTK world coordinates are assumed to be in\ninches, but the desired distance units should be defined in terms\nof centimeters, the scale factor should be set to 2.54. The ruler\nmarks will then be spaced in terms of centimeters, and the label\nwill show the measurement in centimeters.\n"},
  {"GetScale", PyvtkDistanceRepresentation_GetScale, METH_VARARGS,
   "V.GetScale() -> float\nC++: virtual double GetScale()\n\nSet the scale factor from VTK world coordinates. The ruler marks\nand label will be defined in terms of the scaled space. For\nexample, if the VTK world coordinates are assumed to be in\ninches, but the desired distance units should be defined in terms\nof centimeters, the scale factor should be set to 2.54. The ruler\nmarks will then be spaced in terms of centimeters, and the label\nwill show the measurement in centimeters.\n"},
  {"SetRulerMode", PyvtkDistanceRepresentation_SetRulerMode, METH_VARARGS,
   "V.SetRulerMode(int)\nC++: virtual void SetRulerMode(vtkTypeBool _arg)\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {"GetRulerMode", PyvtkDistanceRepresentation_GetRulerMode, METH_VARARGS,
   "V.GetRulerMode() -> int\nC++: virtual vtkTypeBool GetRulerMode()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {"RulerModeOn", PyvtkDistanceRepresentation_RulerModeOn, METH_VARARGS,
   "V.RulerModeOn()\nC++: virtual void RulerModeOn()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {"RulerModeOff", PyvtkDistanceRepresentation_RulerModeOff, METH_VARARGS,
   "V.RulerModeOff()\nC++: virtual void RulerModeOff()\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {"SetRulerDistance", PyvtkDistanceRepresentation_SetRulerDistance, METH_VARARGS,
   "V.SetRulerDistance(float)\nC++: virtual void SetRulerDistance(double _arg)\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {"GetRulerDistanceMinValue", PyvtkDistanceRepresentation_GetRulerDistanceMinValue, METH_VARARGS,
   "V.GetRulerDistanceMinValue() -> float\nC++: virtual double GetRulerDistanceMinValue()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {"GetRulerDistanceMaxValue", PyvtkDistanceRepresentation_GetRulerDistanceMaxValue, METH_VARARGS,
   "V.GetRulerDistanceMaxValue() -> float\nC++: virtual double GetRulerDistanceMaxValue()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {"GetRulerDistance", PyvtkDistanceRepresentation_GetRulerDistance, METH_VARARGS,
   "V.GetRulerDistance() -> float\nC++: virtual double GetRulerDistance()\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {"SetNumberOfRulerTicks", PyvtkDistanceRepresentation_SetNumberOfRulerTicks, METH_VARARGS,
   "V.SetNumberOfRulerTicks(int)\nC++: virtual void SetNumberOfRulerTicks(int _arg)\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number between the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {"GetNumberOfRulerTicksMinValue", PyvtkDistanceRepresentation_GetNumberOfRulerTicksMinValue, METH_VARARGS,
   "V.GetNumberOfRulerTicksMinValue() -> int\nC++: virtual int GetNumberOfRulerTicksMinValue()\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number between the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {"GetNumberOfRulerTicksMaxValue", PyvtkDistanceRepresentation_GetNumberOfRulerTicksMaxValue, METH_VARARGS,
   "V.GetNumberOfRulerTicksMaxValue() -> int\nC++: virtual int GetNumberOfRulerTicksMaxValue()\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number between the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {"GetNumberOfRulerTicks", PyvtkDistanceRepresentation_GetNumberOfRulerTicks, METH_VARARGS,
   "V.GetNumberOfRulerTicks() -> int\nC++: virtual int GetNumberOfRulerTicks()\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number between the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {"BuildRepresentation", PyvtkDistanceRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkDistanceRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkDistanceRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkDistanceRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartComplexInteraction", PyvtkDistanceRepresentation_StartComplexInteraction, METH_VARARGS,
   "V.StartComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComplexInteraction", PyvtkDistanceRepresentation_ComplexInteraction, METH_VARARGS,
   "V.ComplexInteraction(vtkRenderWindowInteractor, vtkAbstractWidget,\n     int, void)\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeComplexInteractionState", PyvtkDistanceRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "V.ComputeComplexInteractionState(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void, int) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDistanceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkDistanceRepresentation", // tp_name
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
  PyvtkDistanceRepresentation_Doc, // tp_doc
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

PyObject *PyvtkDistanceRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDistanceRepresentation_Type, PyvtkDistanceRepresentation_Methods,
    "vtkDistanceRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkDistanceRepresentation_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Outside", vtkDistanceRepresentation::Outside },
        { "NearP1", vtkDistanceRepresentation::NearP1 },
        { "NearP2", vtkDistanceRepresentation::NearP2 },
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

void PyVTKAddFile_vtkDistanceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistanceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistanceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

