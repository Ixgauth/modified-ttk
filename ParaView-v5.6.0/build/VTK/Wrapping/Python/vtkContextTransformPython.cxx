// python wrapper for vtkContextTransform
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
#include "vtkVector.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextTransform.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextTransform(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextTransform_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractContextItem_ClassNew
extern "C" { PyObject *PyvtkAbstractContextItem_ClassNew(); }
#define DECLARED_PyvtkAbstractContextItem_ClassNew
#endif

static const char *PyvtkContextTransform_Doc =
  "vtkContextTransform - all children of this item are transformed by\nthe vtkTransform2D of this item.\n\n"
  "Superclass: vtkAbstractContextItem\n\n"
  "This class can be used to transform all child items of this class.\n"
  "The default transform is the identity.\n\n";


static PyObject *
PyvtkContextTransform_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextTransform *tempr = vtkContextTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextTransform::NewInstance());

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
PyvtkContextTransform_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkContextTransform::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContextTransform::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkContextTransform::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_Translate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0, temp1);
    }
    else
    {
      op->vtkContextTransform::Translate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Scale(temp0, temp1);
    }
    else
    {
      op->vtkContextTransform::Scale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Rotate(temp0);
    }
    else
    {
      op->vtkContextTransform::Rotate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContextTransform::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_MapToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapToParent(*temp0) :
      op->vtkContextTransform::MapToParent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_MapFromParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapFromParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->MapFromParent(*temp0) :
      op->vtkContextTransform::MapFromParent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_SetPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanMouseButton(temp0);
    }
    else
    {
      op->vtkContextTransform::SetPanMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPanMouseButton() :
      op->vtkContextTransform::GetPanMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanModifier(temp0);
    }
    else
    {
      op->vtkContextTransform::SetPanModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPanModifier() :
      op->vtkContextTransform::GetPanModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryPanMouseButton(temp0);
    }
    else
    {
      op->vtkContextTransform::SetSecondaryPanMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryPanMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPanMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryPanMouseButton() :
      op->vtkContextTransform::GetSecondaryPanMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryPanModifier(temp0);
    }
    else
    {
      op->vtkContextTransform::SetSecondaryPanModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryPanModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPanModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryPanModifier() :
      op->vtkContextTransform::GetSecondaryPanModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZoomMouseButton(temp0);
    }
    else
    {
      op->vtkContextTransform::SetZoomMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZoomMouseButton() :
      op->vtkContextTransform::GetZoomMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZoomModifier(temp0);
    }
    else
    {
      op->vtkContextTransform::SetZoomModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZoomModifier() :
      op->vtkContextTransform::GetZoomModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryZoomMouseButton(temp0);
    }
    else
    {
      op->vtkContextTransform::SetSecondaryZoomMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryZoomMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryZoomMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryZoomMouseButton() :
      op->vtkContextTransform::GetSecondaryZoomMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetSecondaryZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryZoomModifier(temp0);
    }
    else
    {
      op->vtkContextTransform::SetSecondaryZoomModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetSecondaryZoomModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryZoomModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondaryZoomModifier() :
      op->vtkContextTransform::GetSecondaryZoomModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetZoomOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZoomOnMouseWheel(temp0);
    }
    else
    {
      op->vtkContextTransform::SetZoomOnMouseWheel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetZoomOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZoomOnMouseWheel() :
      op->vtkContextTransform::GetZoomOnMouseWheel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_ZoomOnMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomOnMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomOnMouseWheelOn();
    }
    else
    {
      op->vtkContextTransform::ZoomOnMouseWheelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_ZoomOnMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomOnMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomOnMouseWheelOff();
    }
    else
    {
      op->vtkContextTransform::ZoomOnMouseWheelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_SetPanYOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanYOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanYOnMouseWheel(temp0);
    }
    else
    {
      op->vtkContextTransform::SetPanYOnMouseWheel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_GetPanYOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanYOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPanYOnMouseWheel() :
      op->vtkContextTransform::GetPanYOnMouseWheel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_PanYOnMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PanYOnMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PanYOnMouseWheelOn();
    }
    else
    {
      op->vtkContextTransform::PanYOnMouseWheelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_PanYOnMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PanYOnMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PanYOnMouseWheelOff();
    }
    else
    {
      op->vtkContextTransform::PanYOnMouseWheelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextTransform_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkContextTransform::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkContextTransform::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkContextTransform::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextTransform_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextTransform *op = static_cast<vtkContextTransform *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseWheelEvent(*temp0, temp1) :
      op->vtkContextTransform::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContextTransform_Methods[] = {
  {"IsTypeOf", PyvtkContextTransform_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextTransform_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextTransform_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextTransform\nC++: static vtkContextTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextTransform_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextTransform\nC++: vtkContextTransform *NewInstance()\n\n"},
  {"Update", PyvtkContextTransform_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkContextTransform_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {"Identity", PyvtkContextTransform_Identity, METH_VARARGS,
   "V.Identity()\nC++: virtual void Identity()\n\nReset the transform to the identity transformation.\n"},
  {"Translate", PyvtkContextTransform_Translate, METH_VARARGS,
   "V.Translate(float, float)\nC++: virtual void Translate(float dx, float dy)\n\nTranslate the item by the specified amounts dx and dy in the x\nand y directions.\n"},
  {"Scale", PyvtkContextTransform_Scale, METH_VARARGS,
   "V.Scale(float, float)\nC++: virtual void Scale(float dx, float dy)\n\nScale the item by the specified amounts dx and dy in the x and y\ndirections.\n"},
  {"Rotate", PyvtkContextTransform_Rotate, METH_VARARGS,
   "V.Rotate(float)\nC++: virtual void Rotate(float angle)\n\nRotate the item by the specified angle.\n"},
  {"GetTransform", PyvtkContextTransform_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkTransform2D\nC++: virtual vtkTransform2D *GetTransform()\n\nAccess the vtkTransform2D that controls object transformation.\n"},
  {"MapToParent", PyvtkContextTransform_MapToParent, METH_VARARGS,
   "V.MapToParent(vtkVector2f) -> vtkVector2f\nC++: vtkVector2f MapToParent(const vtkVector2f &point) override;\n\nTransforms a point to the parent coordinate system.\n"},
  {"MapFromParent", PyvtkContextTransform_MapFromParent, METH_VARARGS,
   "V.MapFromParent(vtkVector2f) -> vtkVector2f\nC++: vtkVector2f MapFromParent(const vtkVector2f &point) override;\n\nTransforms a point from the parent coordinate system.\n"},
  {"SetPanMouseButton", PyvtkContextTransform_SetPanMouseButton, METH_VARARGS,
   "V.SetPanMouseButton(int)\nC++: virtual void SetPanMouseButton(int _arg)\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {"GetPanMouseButton", PyvtkContextTransform_GetPanMouseButton, METH_VARARGS,
   "V.GetPanMouseButton() -> int\nC++: virtual int GetPanMouseButton()\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {"SetPanModifier", PyvtkContextTransform_SetPanModifier, METH_VARARGS,
   "V.SetPanModifier(int)\nC++: virtual void SetPanModifier(int _arg)\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {"GetPanModifier", PyvtkContextTransform_GetPanModifier, METH_VARARGS,
   "V.GetPanModifier() -> int\nC++: virtual int GetPanModifier()\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {"SetSecondaryPanMouseButton", PyvtkContextTransform_SetSecondaryPanMouseButton, METH_VARARGS,
   "V.SetSecondaryPanMouseButton(int)\nC++: virtual void SetSecondaryPanMouseButton(int _arg)\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_BUTTON (disabled).\n"},
  {"GetSecondaryPanMouseButton", PyvtkContextTransform_GetSecondaryPanMouseButton, METH_VARARGS,
   "V.GetSecondaryPanMouseButton() -> int\nC++: virtual int GetSecondaryPanMouseButton()\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_BUTTON (disabled).\n"},
  {"SetSecondaryPanModifier", PyvtkContextTransform_SetSecondaryPanModifier, METH_VARARGS,
   "V.SetSecondaryPanModifier(int)\nC++: virtual void SetSecondaryPanModifier(int _arg)\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {"GetSecondaryPanModifier", PyvtkContextTransform_GetSecondaryPanModifier, METH_VARARGS,
   "V.GetSecondaryPanModifier() -> int\nC++: virtual int GetSecondaryPanModifier()\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {"SetZoomMouseButton", PyvtkContextTransform_SetZoomMouseButton, METH_VARARGS,
   "V.SetZoomMouseButton(int)\nC++: virtual void SetZoomMouseButton(int _arg)\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::RIGHT_BUTTON.\n"},
  {"GetZoomMouseButton", PyvtkContextTransform_GetZoomMouseButton, METH_VARARGS,
   "V.GetZoomMouseButton() -> int\nC++: virtual int GetZoomMouseButton()\n\nThe mouse button from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::RIGHT_BUTTON.\n"},
  {"SetZoomModifier", PyvtkContextTransform_SetZoomModifier, METH_VARARGS,
   "V.SetZoomModifier(int)\nC++: virtual void SetZoomModifier(int _arg)\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {"GetZoomModifier", PyvtkContextTransform_GetZoomModifier, METH_VARARGS,
   "V.GetZoomModifier() -> int\nC++: virtual int GetZoomModifier()\n\nThe modifier from vtkContextMouseEvent to use for panning.\nDefault is vtkContextMouseEvent::NO_MODIFIER.\n"},
  {"SetSecondaryZoomMouseButton", PyvtkContextTransform_SetSecondaryZoomMouseButton, METH_VARARGS,
   "V.SetSecondaryZoomMouseButton(int)\nC++: virtual void SetSecondaryZoomMouseButton(int _arg)\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {"GetSecondaryZoomMouseButton", PyvtkContextTransform_GetSecondaryZoomMouseButton, METH_VARARGS,
   "V.GetSecondaryZoomMouseButton() -> int\nC++: virtual int GetSecondaryZoomMouseButton()\n\nA secondary mouse button from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::LEFT_BUTTON.\n"},
  {"SetSecondaryZoomModifier", PyvtkContextTransform_SetSecondaryZoomModifier, METH_VARARGS,
   "V.SetSecondaryZoomModifier(int)\nC++: virtual void SetSecondaryZoomModifier(int _arg)\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::SHIFT_MODIFIER.\n"},
  {"GetSecondaryZoomModifier", PyvtkContextTransform_GetSecondaryZoomModifier, METH_VARARGS,
   "V.GetSecondaryZoomModifier() -> int\nC++: virtual int GetSecondaryZoomModifier()\n\nA secondary modifier from vtkContextMouseEvent to use for\npanning. Default is vtkContextMouseEvent::SHIFT_MODIFIER.\n"},
  {"SetZoomOnMouseWheel", PyvtkContextTransform_SetZoomOnMouseWheel, METH_VARARGS,
   "V.SetZoomOnMouseWheel(bool)\nC++: virtual void SetZoomOnMouseWheel(bool _arg)\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {"GetZoomOnMouseWheel", PyvtkContextTransform_GetZoomOnMouseWheel, METH_VARARGS,
   "V.GetZoomOnMouseWheel() -> bool\nC++: virtual bool GetZoomOnMouseWheel()\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {"ZoomOnMouseWheelOn", PyvtkContextTransform_ZoomOnMouseWheelOn, METH_VARARGS,
   "V.ZoomOnMouseWheelOn()\nC++: virtual void ZoomOnMouseWheelOn()\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {"ZoomOnMouseWheelOff", PyvtkContextTransform_ZoomOnMouseWheelOff, METH_VARARGS,
   "V.ZoomOnMouseWheelOff()\nC++: virtual void ZoomOnMouseWheelOff()\n\nWhether to zoom on mouse wheels. Default is true.\n"},
  {"SetPanYOnMouseWheel", PyvtkContextTransform_SetPanYOnMouseWheel, METH_VARARGS,
   "V.SetPanYOnMouseWheel(bool)\nC++: virtual void SetPanYOnMouseWheel(bool _arg)\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {"GetPanYOnMouseWheel", PyvtkContextTransform_GetPanYOnMouseWheel, METH_VARARGS,
   "V.GetPanYOnMouseWheel() -> bool\nC++: virtual bool GetPanYOnMouseWheel()\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {"PanYOnMouseWheelOn", PyvtkContextTransform_PanYOnMouseWheelOn, METH_VARARGS,
   "V.PanYOnMouseWheelOn()\nC++: virtual void PanYOnMouseWheelOn()\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {"PanYOnMouseWheelOff", PyvtkContextTransform_PanYOnMouseWheelOff, METH_VARARGS,
   "V.PanYOnMouseWheelOff()\nC++: virtual void PanYOnMouseWheelOff()\n\nWhether to pan in the Y direction on mouse wheels. Default is\nfalse.\n"},
  {"Hit", PyvtkContextTransform_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the transform is interactive, false otherwise.\n"},
  {"MouseButtonPressEvent", PyvtkContextTransform_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse press event. Keep track of zoom anchor position.\n"},
  {"MouseMoveEvent", PyvtkContextTransform_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event. Perform pan or zoom as specified by the mouse\nbindings.\n"},
  {"MouseWheelEvent", PyvtkContextTransform_MouseWheelEvent, METH_VARARGS,
   "V.MouseWheelEvent(vtkContextMouseEvent, int) -> bool\nC++: bool MouseWheelEvent(const vtkContextMouseEvent &mouse,\n    int delta) override;\n\nMouse wheel event. Perform pan or zoom as specified by mouse\nbindings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextTransform", // tp_name
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
  PyvtkContextTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextTransform_StaticNew()
{
  return vtkContextTransform::New();
}

PyObject *PyvtkContextTransform_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextTransform_Type, PyvtkContextTransform_Methods,
    "vtkContextTransform",
 &PyvtkContextTransform_StaticNew);

  PyTypeObject *pytype = &PyvtkContextTransform_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractContextItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

