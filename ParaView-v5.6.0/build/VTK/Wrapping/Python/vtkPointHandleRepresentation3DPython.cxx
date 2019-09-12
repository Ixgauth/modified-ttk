// python wrapper for vtkPointHandleRepresentation3D
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
#include "vtkPointHandleRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointHandleRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointHandleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static const char *PyvtkPointHandleRepresentation3D_Doc =
  "vtkPointHandleRepresentation3D - represent the position of a point in\n3D space\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "This class is used to represent a vtkHandleWidget. It represents a\n"
  "position in 3D world coordinates using a x-y-z cursor. The cursor can\n"
  "be configured to show a bounding box and/or shadows.\n\n"
  "@sa\n"
  "vtkHandleRepresentation vtkHandleWidget vtkCursor3D\n\n";


static PyObject *
PyvtkPointHandleRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointHandleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointHandleRepresentation3D *tempr = vtkPointHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointHandleRepresentation3D::NewInstance());

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
PyvtkPointHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetWorldPosition(temp0);
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
PyvtkPointHandleRepresentation3D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetDisplayPosition(temp0);
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
PyvtkPointHandleRepresentation3D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkPointHandleRepresentation3D::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXShadows(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SetXShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXShadows() :
      op->vtkPointHandleRepresentation3D::GetXShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::XShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::XShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYShadows(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SetYShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYShadows() :
      op->vtkPointHandleRepresentation3D::GetYShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::YShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::YShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZShadows(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SetZShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZShadows() :
      op->vtkPointHandleRepresentation3D::GetZShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::ZShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::ZShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetTranslationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkPointHandleRepresentation3D::GetTranslationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::TranslationModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::TranslationModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::AllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::AllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetSelectedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointHandleRepresentation3D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointHandleRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetHotSpotSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetHotSpotSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMinValue() :
      op->vtkPointHandleRepresentation3D::GetHotSpotSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetHotSpotSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMaxValue() :
      op->vtkPointHandleRepresentation3D::GetHotSpotSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSize() :
      op->vtkPointHandleRepresentation3D::GetHotSpotSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::SetHandleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPointHandleRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::StartWidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::WidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation3D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::PlaceWidget(temp0);
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
PyvtkPointHandleRepresentation3D_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::StartComplexInteraction(temp0, temp1, temp2, temp3);
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
PyvtkPointHandleRepresentation3D_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ComplexInteraction(temp0, temp1, temp2, temp3);
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
PyvtkPointHandleRepresentation3D_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

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


static PyObject *
PyvtkPointHandleRepresentation3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPointHandleRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPointHandleRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPointHandleRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

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
      op->vtkPointHandleRepresentation3D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothMotion(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SetSmoothMotion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_GetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothMotion() :
      op->vtkPointHandleRepresentation3D::GetSmoothMotion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SmoothMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothMotionOn();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SmoothMotionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_SmoothMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothMotionOff();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::SmoothMotionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation3D_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation3D *op = static_cast<vtkPointHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkPointHandleRepresentation3D::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointHandleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkPointHandleRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkPointHandleRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkPointHandleRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointHandleRepresentation3D\nC++: static vtkPointHandleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkPointHandleRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetWorldPosition", PyvtkPointHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   "V.SetWorldPosition([float, float, float])\nC++: void SetWorldPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\nNote that if the position is set outside of the bounding box, it\nwill be clamped to the boundary of the bounding box. This method\noverloads the superclasses' SetWorldPosition() and\nSetDisplayPosition() in order to set the focal point of the\ncursor properly.\n"},
  {"SetDisplayPosition", PyvtkPointHandleRepresentation3D_SetDisplayPosition, METH_VARARGS,
   "V.SetDisplayPosition([float, float, float])\nC++: void SetDisplayPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\nNote that if the position is set outside of the bounding box, it\nwill be clamped to the boundary of the bounding box. This method\noverloads the superclasses' SetWorldPosition() and\nSetDisplayPosition() in order to set the focal point of the\ncursor properly.\n"},
  {"SetOutline", PyvtkPointHandleRepresentation3D_SetOutline, METH_VARARGS,
   "V.SetOutline(int)\nC++: void SetOutline(int o)\n\nTurn on/off the wireframe bounding box.\n"},
  {"GetOutline", PyvtkPointHandleRepresentation3D_GetOutline, METH_VARARGS,
   "V.GetOutline() -> int\nC++: int GetOutline()\n\n"},
  {"OutlineOn", PyvtkPointHandleRepresentation3D_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: void OutlineOn()\n\n"},
  {"OutlineOff", PyvtkPointHandleRepresentation3D_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: void OutlineOff()\n\n"},
  {"SetXShadows", PyvtkPointHandleRepresentation3D_SetXShadows, METH_VARARGS,
   "V.SetXShadows(int)\nC++: void SetXShadows(int o)\n\nTurn on/off the wireframe x-shadows.\n"},
  {"GetXShadows", PyvtkPointHandleRepresentation3D_GetXShadows, METH_VARARGS,
   "V.GetXShadows() -> int\nC++: int GetXShadows()\n\n"},
  {"XShadowsOn", PyvtkPointHandleRepresentation3D_XShadowsOn, METH_VARARGS,
   "V.XShadowsOn()\nC++: void XShadowsOn()\n\n"},
  {"XShadowsOff", PyvtkPointHandleRepresentation3D_XShadowsOff, METH_VARARGS,
   "V.XShadowsOff()\nC++: void XShadowsOff()\n\n"},
  {"SetYShadows", PyvtkPointHandleRepresentation3D_SetYShadows, METH_VARARGS,
   "V.SetYShadows(int)\nC++: void SetYShadows(int o)\n\nTurn on/off the wireframe y-shadows.\n"},
  {"GetYShadows", PyvtkPointHandleRepresentation3D_GetYShadows, METH_VARARGS,
   "V.GetYShadows() -> int\nC++: int GetYShadows()\n\n"},
  {"YShadowsOn", PyvtkPointHandleRepresentation3D_YShadowsOn, METH_VARARGS,
   "V.YShadowsOn()\nC++: void YShadowsOn()\n\n"},
  {"YShadowsOff", PyvtkPointHandleRepresentation3D_YShadowsOff, METH_VARARGS,
   "V.YShadowsOff()\nC++: void YShadowsOff()\n\n"},
  {"SetZShadows", PyvtkPointHandleRepresentation3D_SetZShadows, METH_VARARGS,
   "V.SetZShadows(int)\nC++: void SetZShadows(int o)\n\nTurn on/off the wireframe z-shadows.\n"},
  {"GetZShadows", PyvtkPointHandleRepresentation3D_GetZShadows, METH_VARARGS,
   "V.GetZShadows() -> int\nC++: int GetZShadows()\n\n"},
  {"ZShadowsOn", PyvtkPointHandleRepresentation3D_ZShadowsOn, METH_VARARGS,
   "V.ZShadowsOn()\nC++: void ZShadowsOn()\n\n"},
  {"ZShadowsOff", PyvtkPointHandleRepresentation3D_ZShadowsOff, METH_VARARGS,
   "V.ZShadowsOff()\nC++: void ZShadowsOff()\n\n"},
  {"SetTranslationMode", PyvtkPointHandleRepresentation3D_SetTranslationMode, METH_VARARGS,
   "V.SetTranslationMode(int)\nC++: void SetTranslationMode(vtkTypeBool mode)\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {"GetTranslationMode", PyvtkPointHandleRepresentation3D_GetTranslationMode, METH_VARARGS,
   "V.GetTranslationMode() -> int\nC++: virtual vtkTypeBool GetTranslationMode()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {"TranslationModeOn", PyvtkPointHandleRepresentation3D_TranslationModeOn, METH_VARARGS,
   "V.TranslationModeOn()\nC++: virtual void TranslationModeOn()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {"TranslationModeOff", PyvtkPointHandleRepresentation3D_TranslationModeOff, METH_VARARGS,
   "V.TranslationModeOff()\nC++: virtual void TranslationModeOff()\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated and sized\nsimultaneously as the point moves (i.e., the left and middle\nmouse buttons act the same). If translation mode is off, the\ncursor does not scale itself (based on the specified handle\nsize), and the bounding box and shadows do not move or size\nthemselves as the cursor focal point moves, which is constrained\nby the bounds of the point representation. (Note that the bounds\ncan be scaled up using the right mouse button, and the bounds can\nbe manually set with the SetBounds() method.)\n"},
  {"AllOn", PyvtkPointHandleRepresentation3D_AllOn, METH_VARARGS,
   "V.AllOn()\nC++: void AllOn()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {"AllOff", PyvtkPointHandleRepresentation3D_AllOff, METH_VARARGS,
   "V.AllOff()\nC++: void AllOff()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {"SetProperty", PyvtkPointHandleRepresentation3D_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetSelectedProperty", PyvtkPointHandleRepresentation3D_SetSelectedProperty, METH_VARARGS,
   "V.SetSelectedProperty(vtkProperty)\nC++: void SetSelectedProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetProperty", PyvtkPointHandleRepresentation3D_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetSelectedProperty", PyvtkPointHandleRepresentation3D_GetSelectedProperty, METH_VARARGS,
   "V.GetSelectedProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetHotSpotSize", PyvtkPointHandleRepresentation3D_SetHotSpotSize, METH_VARARGS,
   "V.SetHotSpotSize(float)\nC++: virtual void SetHotSpotSize(double _arg)\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMinValue", PyvtkPointHandleRepresentation3D_GetHotSpotSizeMinValue, METH_VARARGS,
   "V.GetHotSpotSizeMinValue() -> float\nC++: virtual double GetHotSpotSizeMinValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMaxValue", PyvtkPointHandleRepresentation3D_GetHotSpotSizeMaxValue, METH_VARARGS,
   "V.GetHotSpotSizeMaxValue() -> float\nC++: virtual double GetHotSpotSizeMaxValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSize", PyvtkPointHandleRepresentation3D_GetHotSpotSize, METH_VARARGS,
   "V.GetHotSpotSize() -> float\nC++: virtual double GetHotSpotSize()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"SetHandleSize", PyvtkPointHandleRepresentation3D_SetHandleSize, METH_VARARGS,
   "V.SetHandleSize(float)\nC++: void SetHandleSize(double size) override;\n\nOverload the superclasses SetHandleSize() method to update\ninternal variables.\n"},
  {"GetBounds", PyvtkPointHandleRepresentation3D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"BuildRepresentation", PyvtkPointHandleRepresentation3D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"StartWidgetInteraction", PyvtkPointHandleRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"WidgetInteraction", PyvtkPointHandleRepresentation3D_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ComputeInteractionState", PyvtkPointHandleRepresentation3D_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"PlaceWidget", PyvtkPointHandleRepresentation3D_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"StartComplexInteraction", PyvtkPointHandleRepresentation3D_StartComplexInteraction, METH_VARARGS,
   "V.StartComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ComplexInteraction", PyvtkPointHandleRepresentation3D_ComplexInteraction, METH_VARARGS,
   "V.ComplexInteraction(vtkRenderWindowInteractor, vtkAbstractWidget,\n     int, void)\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ComputeComplexInteractionState", PyvtkPointHandleRepresentation3D_ComputeComplexInteractionState, METH_VARARGS,
   "V.ComputeComplexInteractionState(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void, int) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ShallowCopy", PyvtkPointHandleRepresentation3D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"DeepCopy", PyvtkPointHandleRepresentation3D_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkProp)\nC++: void DeepCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetActors", PyvtkPointHandleRepresentation3D_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkPointHandleRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkPointHandleRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPointHandleRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPointHandleRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"Highlight", PyvtkPointHandleRepresentation3D_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int highlight) override;\n\n"},
  {"SetSmoothMotion", PyvtkPointHandleRepresentation3D_SetSmoothMotion, METH_VARARGS,
   "V.SetSmoothMotion(int)\nC++: virtual void SetSmoothMotion(vtkTypeBool _arg)\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"GetSmoothMotion", PyvtkPointHandleRepresentation3D_GetSmoothMotion, METH_VARARGS,
   "V.GetSmoothMotion() -> int\nC++: virtual vtkTypeBool GetSmoothMotion()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"SmoothMotionOn", PyvtkPointHandleRepresentation3D_SmoothMotionOn, METH_VARARGS,
   "V.SmoothMotionOn()\nC++: virtual void SmoothMotionOn()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"SmoothMotionOff", PyvtkPointHandleRepresentation3D_SmoothMotionOff, METH_VARARGS,
   "V.SmoothMotionOff()\nC++: virtual void SmoothMotionOff()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"RegisterPickers", PyvtkPointHandleRepresentation3D_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointHandleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPointHandleRepresentation3D", // tp_name
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
  PyvtkPointHandleRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointHandleRepresentation3D_StaticNew()
{
  return vtkPointHandleRepresentation3D::New();
}

PyObject *PyvtkPointHandleRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointHandleRepresentation3D_Type, PyvtkPointHandleRepresentation3D_Methods,
    "vtkPointHandleRepresentation3D",
 &PyvtkPointHandleRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkPointHandleRepresentation3D_Type;

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

void PyVTKAddFile_vtkPointHandleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointHandleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointHandleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

