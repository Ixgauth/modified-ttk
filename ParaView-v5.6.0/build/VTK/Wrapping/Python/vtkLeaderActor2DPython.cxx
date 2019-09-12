// python wrapper for vtkLeaderActor2D
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
#include "vtkLeaderActor2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLeaderActor2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLeaderActor2D_ClassNew(); }

#ifndef DECLARED_PyvtkActor2D_ClassNew
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }
#define DECLARED_PyvtkActor2D_ClassNew
#endif

static const char *PyvtkLeaderActor2D_Doc =
  "vtkLeaderActor2D - create a leader with optional label and arrows\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkLeaderActor2D creates a leader with an optional label and arrows.\n"
  "(A leader is typically used to indicate distance between points.)\n"
  "vtkLeaderActor2D is a type of vtkActor2D; that is, it is drawn on the\n"
  "overlay plane and is not occluded by 3D geometry. To use this class,\n"
  "you typically specify two points defining the start and end points of\n"
  "the line (x-y definition using vtkCoordinate class), whether to place\n"
  "arrows on one or both end points, and whether to label the leader.\n"
  "Also, this class has a special feature that allows curved leaders to\n"
  "be created by specifying a radius.\n\n"
  "Use the vtkLeaderActor2D uses its superclass vtkActor2D instance\n"
  "variables Position and Position2 vtkCoordinates to place an instance\n"
  "of vtkLeaderActor2D (i.e., these two data members represent the start\n"
  "and end points of the leader).  Using these vtkCoordinates you can\n"
  "specify the position of the leader in a variety of coordinate\n"
  "systems.\n\n"
  "To control the appearance of the actor, use the superclasses\n"
  "vtkActor2D::vtkProperty2D and the vtkTextProperty objects associated\n"
  "with this actor.\n\n"
  "@sa\n"
  "vtkAxisActor2D vtkActor2D vtkCoordinate vtkTextProperty\n\n";


static PyObject *
PyvtkLeaderActor2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLeaderActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLeaderActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLeaderActor2D *tempr = vtkLeaderActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLeaderActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLeaderActor2D::NewInstance());

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
PyvtkLeaderActor2D_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkLeaderActor2D::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkLeaderActor2D::GetLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkLeaderActor2D::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFactor(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetLabelFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactorMinValue() :
      op->vtkLeaderActor2D::GetLabelFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactorMaxValue() :
      op->vtkLeaderActor2D::GetLabelFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactor() :
      op->vtkLeaderActor2D::GetLabelFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowPlacement(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowPlacement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowPlacementMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowPlacementMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrowPlacementMinValue() :
      op->vtkLeaderActor2D::GetArrowPlacementMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowPlacementMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowPlacementMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrowPlacementMaxValue() :
      op->vtkLeaderActor2D::GetArrowPlacementMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrowPlacement() :
      op->vtkLeaderActor2D::GetArrowPlacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowPlacementToNone();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowPlacementToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowPlacementToPoint1();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowPlacementToPoint1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowPlacementToPoint2();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowPlacementToPoint2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowPlacementToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowPlacementToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowPlacementToBoth();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowPlacementToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowStyle(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrowStyleMinValue() :
      op->vtkLeaderActor2D::GetArrowStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrowStyleMaxValue() :
      op->vtkLeaderActor2D::GetArrowStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrowStyle() :
      op->vtkLeaderActor2D::GetArrowStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyleToFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyleToFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowStyleToFilled();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowStyleToFilled();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyleToOpen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyleToOpen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowStyleToOpen();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowStyleToOpen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowStyleToHollow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowStyleToHollow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowStyleToHollow();
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowStyleToHollow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowLength(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowLengthMinValue() :
      op->vtkLeaderActor2D::GetArrowLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowLengthMaxValue() :
      op->vtkLeaderActor2D::GetArrowLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowLength() :
      op->vtkLeaderActor2D::GetArrowLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetArrowWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowWidth(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetArrowWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowWidthMinValue() :
      op->vtkLeaderActor2D::GetArrowWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowWidthMaxValue() :
      op->vtkLeaderActor2D::GetArrowWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetArrowWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowWidth() :
      op->vtkLeaderActor2D::GetArrowWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetMinimumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumArrowSize(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetMinimumArrowSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMinimumArrowSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumArrowSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumArrowSizeMinValue() :
      op->vtkLeaderActor2D::GetMinimumArrowSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMinimumArrowSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumArrowSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumArrowSizeMaxValue() :
      op->vtkLeaderActor2D::GetMinimumArrowSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMinimumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumArrowSize() :
      op->vtkLeaderActor2D::GetMinimumArrowSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetMaximumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumArrowSize(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetMaximumArrowSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMaximumArrowSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumArrowSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumArrowSizeMinValue() :
      op->vtkLeaderActor2D::GetMaximumArrowSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMaximumArrowSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumArrowSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumArrowSizeMaxValue() :
      op->vtkLeaderActor2D::GetMaximumArrowSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetMaximumArrowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumArrowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumArrowSize() :
      op->vtkLeaderActor2D::GetMaximumArrowSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetAutoLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoLabel(temp0);
    }
    else
    {
      op->vtkLeaderActor2D::SetAutoLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetAutoLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoLabel() :
      op->vtkLeaderActor2D::GetAutoLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_AutoLabelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoLabelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoLabelOn();
    }
    else
    {
      op->vtkLeaderActor2D::AutoLabelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_AutoLabelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoLabelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoLabelOff();
    }
    else
    {
      op->vtkLeaderActor2D::AutoLabelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkLeaderActor2D::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkLeaderActor2D::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkLeaderActor2D::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLeaderActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLeaderActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLeaderActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLeaderActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLeaderActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLeaderActor2D *op = static_cast<vtkLeaderActor2D *>(vp);

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
      op->vtkLeaderActor2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLeaderActor2D_Methods[] = {
  {"IsTypeOf", PyvtkLeaderActor2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLeaderActor2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLeaderActor2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLeaderActor2D\nC++: static vtkLeaderActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLeaderActor2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLeaderActor2D\nC++: vtkLeaderActor2D *NewInstance()\n\n"},
  {"SetRadius", PyvtkLeaderActor2D_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet/Get a radius which can be used to curve the leader.  If a\nradius is specified whose absolute value is greater than one half\nthe distance between the two points defined by the superclasses'\nPosition and Position2 ivars, then the leader will be curved. A\npositive radius will produce a curve such that the center is to\nthe right of the line from Position and Position2; a negative\nradius will produce a curve in the opposite sense. By default,\nthe radius is set to zero and thus there is no curvature. Note\nthat the radius is expresses as a multiple of the distance\nbetween (Position,Position2); this avoids issues relative to\ncoordinate system transformations.\n"},
  {"GetRadius", PyvtkLeaderActor2D_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet/Get a radius which can be used to curve the leader.  If a\nradius is specified whose absolute value is greater than one half\nthe distance between the two points defined by the superclasses'\nPosition and Position2 ivars, then the leader will be curved. A\npositive radius will produce a curve such that the center is to\nthe right of the line from Position and Position2; a negative\nradius will produce a curve in the opposite sense. By default,\nthe radius is set to zero and thus there is no curvature. Note\nthat the radius is expresses as a multiple of the distance\nbetween (Position,Position2); this avoids issues relative to\ncoordinate system transformations.\n"},
  {"SetLabel", PyvtkLeaderActor2D_SetLabel, METH_VARARGS,
   "V.SetLabel(string)\nC++: virtual void SetLabel(const char *_arg)\n\nSet/Get the label for the leader. If the label is an empty\nstring, then it will not be drawn.\n"},
  {"GetLabel", PyvtkLeaderActor2D_GetLabel, METH_VARARGS,
   "V.GetLabel() -> string\nC++: virtual char *GetLabel()\n\nSet/Get the label for the leader. If the label is an empty\nstring, then it will not be drawn.\n"},
  {"SetLabelTextProperty", PyvtkLeaderActor2D_SetLabelTextProperty, METH_VARARGS,
   "V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the text property of the label.\n"},
  {"GetLabelTextProperty", PyvtkLeaderActor2D_GetLabelTextProperty, METH_VARARGS,
   "V.GetLabelTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the text property of the label.\n"},
  {"SetLabelFactor", PyvtkLeaderActor2D_SetLabelFactor, METH_VARARGS,
   "V.SetLabelFactor(float)\nC++: virtual void SetLabelFactor(double _arg)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {"GetLabelFactorMinValue", PyvtkLeaderActor2D_GetLabelFactorMinValue, METH_VARARGS,
   "V.GetLabelFactorMinValue() -> float\nC++: virtual double GetLabelFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {"GetLabelFactorMaxValue", PyvtkLeaderActor2D_GetLabelFactorMaxValue, METH_VARARGS,
   "V.GetLabelFactorMaxValue() -> float\nC++: virtual double GetLabelFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {"GetLabelFactor", PyvtkLeaderActor2D_GetLabelFactor, METH_VARARGS,
   "V.GetLabelFactor() -> float\nC++: virtual double GetLabelFactor()\n\nSet/Get the factor that controls the overall size of the fonts\nused to label the leader.\n"},
  {"SetArrowPlacement", PyvtkLeaderActor2D_SetArrowPlacement, METH_VARARGS,
   "V.SetArrowPlacement(int)\nC++: virtual void SetArrowPlacement(int _arg)\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"GetArrowPlacementMinValue", PyvtkLeaderActor2D_GetArrowPlacementMinValue, METH_VARARGS,
   "V.GetArrowPlacementMinValue() -> int\nC++: virtual int GetArrowPlacementMinValue()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"GetArrowPlacementMaxValue", PyvtkLeaderActor2D_GetArrowPlacementMaxValue, METH_VARARGS,
   "V.GetArrowPlacementMaxValue() -> int\nC++: virtual int GetArrowPlacementMaxValue()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"GetArrowPlacement", PyvtkLeaderActor2D_GetArrowPlacement, METH_VARARGS,
   "V.GetArrowPlacement() -> int\nC++: virtual int GetArrowPlacement()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"SetArrowPlacementToNone", PyvtkLeaderActor2D_SetArrowPlacementToNone, METH_VARARGS,
   "V.SetArrowPlacementToNone()\nC++: void SetArrowPlacementToNone()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"SetArrowPlacementToPoint1", PyvtkLeaderActor2D_SetArrowPlacementToPoint1, METH_VARARGS,
   "V.SetArrowPlacementToPoint1()\nC++: void SetArrowPlacementToPoint1()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"SetArrowPlacementToPoint2", PyvtkLeaderActor2D_SetArrowPlacementToPoint2, METH_VARARGS,
   "V.SetArrowPlacementToPoint2()\nC++: void SetArrowPlacementToPoint2()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"SetArrowPlacementToBoth", PyvtkLeaderActor2D_SetArrowPlacementToBoth, METH_VARARGS,
   "V.SetArrowPlacementToBoth()\nC++: void SetArrowPlacementToBoth()\n\nControl whether arrow heads are drawn on the leader. Arrows may\nbe drawn on one end, both ends, or not at all.\n"},
  {"SetArrowStyle", PyvtkLeaderActor2D_SetArrowStyle, METH_VARARGS,
   "V.SetArrowStyle(int)\nC++: virtual void SetArrowStyle(int _arg)\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"GetArrowStyleMinValue", PyvtkLeaderActor2D_GetArrowStyleMinValue, METH_VARARGS,
   "V.GetArrowStyleMinValue() -> int\nC++: virtual int GetArrowStyleMinValue()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"GetArrowStyleMaxValue", PyvtkLeaderActor2D_GetArrowStyleMaxValue, METH_VARARGS,
   "V.GetArrowStyleMaxValue() -> int\nC++: virtual int GetArrowStyleMaxValue()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"GetArrowStyle", PyvtkLeaderActor2D_GetArrowStyle, METH_VARARGS,
   "V.GetArrowStyle() -> int\nC++: virtual int GetArrowStyle()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"SetArrowStyleToFilled", PyvtkLeaderActor2D_SetArrowStyleToFilled, METH_VARARGS,
   "V.SetArrowStyleToFilled()\nC++: void SetArrowStyleToFilled()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"SetArrowStyleToOpen", PyvtkLeaderActor2D_SetArrowStyleToOpen, METH_VARARGS,
   "V.SetArrowStyleToOpen()\nC++: void SetArrowStyleToOpen()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"SetArrowStyleToHollow", PyvtkLeaderActor2D_SetArrowStyleToHollow, METH_VARARGS,
   "V.SetArrowStyleToHollow()\nC++: void SetArrowStyleToHollow()\n\nControl the appearance of the arrow heads. A solid arrow head is\na filled triangle; a open arrow looks like a \"V\"; and a hollow\narrow looks like a non-filled triangle.\n"},
  {"SetArrowLength", PyvtkLeaderActor2D_SetArrowLength, METH_VARARGS,
   "V.SetArrowLength(float)\nC++: virtual void SetArrowLength(double _arg)\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"GetArrowLengthMinValue", PyvtkLeaderActor2D_GetArrowLengthMinValue, METH_VARARGS,
   "V.GetArrowLengthMinValue() -> float\nC++: virtual double GetArrowLengthMinValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"GetArrowLengthMaxValue", PyvtkLeaderActor2D_GetArrowLengthMaxValue, METH_VARARGS,
   "V.GetArrowLengthMaxValue() -> float\nC++: virtual double GetArrowLengthMaxValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"GetArrowLength", PyvtkLeaderActor2D_GetArrowLength, METH_VARARGS,
   "V.GetArrowLength() -> float\nC++: virtual double GetArrowLength()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"SetArrowWidth", PyvtkLeaderActor2D_SetArrowWidth, METH_VARARGS,
   "V.SetArrowWidth(float)\nC++: virtual void SetArrowWidth(double _arg)\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"GetArrowWidthMinValue", PyvtkLeaderActor2D_GetArrowWidthMinValue, METH_VARARGS,
   "V.GetArrowWidthMinValue() -> float\nC++: virtual double GetArrowWidthMinValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"GetArrowWidthMaxValue", PyvtkLeaderActor2D_GetArrowWidthMaxValue, METH_VARARGS,
   "V.GetArrowWidthMaxValue() -> float\nC++: virtual double GetArrowWidthMaxValue()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"GetArrowWidth", PyvtkLeaderActor2D_GetArrowWidth, METH_VARARGS,
   "V.GetArrowWidth() -> float\nC++: virtual double GetArrowWidth()\n\nSpecify the arrow length and base width (in normalized viewport\ncoordinates).\n"},
  {"SetMinimumArrowSize", PyvtkLeaderActor2D_SetMinimumArrowSize, METH_VARARGS,
   "V.SetMinimumArrowSize(float)\nC++: virtual void SetMinimumArrowSize(double _arg)\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"GetMinimumArrowSizeMinValue", PyvtkLeaderActor2D_GetMinimumArrowSizeMinValue, METH_VARARGS,
   "V.GetMinimumArrowSizeMinValue() -> float\nC++: virtual double GetMinimumArrowSizeMinValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"GetMinimumArrowSizeMaxValue", PyvtkLeaderActor2D_GetMinimumArrowSizeMaxValue, METH_VARARGS,
   "V.GetMinimumArrowSizeMaxValue() -> float\nC++: virtual double GetMinimumArrowSizeMaxValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"GetMinimumArrowSize", PyvtkLeaderActor2D_GetMinimumArrowSize, METH_VARARGS,
   "V.GetMinimumArrowSize() -> float\nC++: virtual double GetMinimumArrowSize()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"SetMaximumArrowSize", PyvtkLeaderActor2D_SetMaximumArrowSize, METH_VARARGS,
   "V.SetMaximumArrowSize(float)\nC++: virtual void SetMaximumArrowSize(double _arg)\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"GetMaximumArrowSizeMinValue", PyvtkLeaderActor2D_GetMaximumArrowSizeMinValue, METH_VARARGS,
   "V.GetMaximumArrowSizeMinValue() -> float\nC++: virtual double GetMaximumArrowSizeMinValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"GetMaximumArrowSizeMaxValue", PyvtkLeaderActor2D_GetMaximumArrowSizeMaxValue, METH_VARARGS,
   "V.GetMaximumArrowSizeMaxValue() -> float\nC++: virtual double GetMaximumArrowSizeMaxValue()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"GetMaximumArrowSize", PyvtkLeaderActor2D_GetMaximumArrowSize, METH_VARARGS,
   "V.GetMaximumArrowSize() -> float\nC++: virtual double GetMaximumArrowSize()\n\nLimit the minimum and maximum size of the arrows. These values\nare expressed in pixels and clamp the minimum/maximum possible\nsize for the width/length of the arrow head. (When clamped, the\nratio between length and width is preserved.)\n"},
  {"SetAutoLabel", PyvtkLeaderActor2D_SetAutoLabel, METH_VARARGS,
   "V.SetAutoLabel(int)\nC++: virtual void SetAutoLabel(vtkTypeBool _arg)\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {"GetAutoLabel", PyvtkLeaderActor2D_GetAutoLabel, METH_VARARGS,
   "V.GetAutoLabel() -> int\nC++: virtual vtkTypeBool GetAutoLabel()\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {"AutoLabelOn", PyvtkLeaderActor2D_AutoLabelOn, METH_VARARGS,
   "V.AutoLabelOn()\nC++: virtual void AutoLabelOn()\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {"AutoLabelOff", PyvtkLeaderActor2D_AutoLabelOff, METH_VARARGS,
   "V.AutoLabelOff()\nC++: virtual void AutoLabelOff()\n\nEnable auto-labelling. In this mode, the label is automatically\nupdated based on distance (in world coordinates) between the two\nend points; or if a curved leader is being generated, the angle\nin degrees between the two points.\n"},
  {"SetLabelFormat", PyvtkLeaderActor2D_SetLabelFormat, METH_VARARGS,
   "V.SetLabelFormat(string)\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSpecify the format to use for auto-labelling.\n"},
  {"GetLabelFormat", PyvtkLeaderActor2D_GetLabelFormat, METH_VARARGS,
   "V.GetLabelFormat() -> string\nC++: virtual char *GetLabelFormat()\n\nSpecify the format to use for auto-labelling.\n"},
  {"GetLength", PyvtkLeaderActor2D_GetLength, METH_VARARGS,
   "V.GetLength() -> float\nC++: virtual double GetLength()\n\nObtain the length of the leader if the leader is not curved,\notherwise obtain the angle that the leader circumscribes.\n"},
  {"GetAngle", PyvtkLeaderActor2D_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nObtain the length of the leader if the leader is not curved,\notherwise obtain the angle that the leader circumscribes.\n"},
  {"RenderOverlay", PyvtkLeaderActor2D_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods required by vtkProp and vtkActor2D superclasses.\n"},
  {"RenderOpaqueGeometry", PyvtkLeaderActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods required by vtkProp and vtkActor2D superclasses.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkLeaderActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods required by vtkProp and vtkActor2D superclasses.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkLeaderActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkLeaderActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"ShallowCopy", PyvtkLeaderActor2D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkActor2D. Overloads the virtual vtkProp\nmethod.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLeaderActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkLeaderActor2D", // tp_name
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
  PyvtkLeaderActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLeaderActor2D_StaticNew()
{
  return vtkLeaderActor2D::New();
}

PyObject *PyvtkLeaderActor2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLeaderActor2D_Type, PyvtkLeaderActor2D_Methods,
    "vtkLeaderActor2D",
 &PyvtkLeaderActor2D_StaticNew);

  PyTypeObject *pytype = &PyvtkLeaderActor2D_Type;

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

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_ARROW_NONE", vtkLeaderActor2D::VTK_ARROW_NONE },
        { "VTK_ARROW_POINT1", vtkLeaderActor2D::VTK_ARROW_POINT1 },
        { "VTK_ARROW_POINT2", vtkLeaderActor2D::VTK_ARROW_POINT2 },
        { "VTK_ARROW_BOTH", vtkLeaderActor2D::VTK_ARROW_BOTH },
        { "VTK_ARROW_FILLED", vtkLeaderActor2D::VTK_ARROW_FILLED },
        { "VTK_ARROW_OPEN", vtkLeaderActor2D::VTK_ARROW_OPEN },
        { "VTK_ARROW_HOLLOW", vtkLeaderActor2D::VTK_ARROW_HOLLOW },
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

void PyVTKAddFile_vtkLeaderActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLeaderActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLeaderActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

