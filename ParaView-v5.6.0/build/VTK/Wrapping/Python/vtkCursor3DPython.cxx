// python wrapper for vtkCursor3D
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
#include "vtkCursor3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCursor3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCursor3D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCursor3D_Doc =
  "vtkCursor3D - generate a 3D cursor representation\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCursor3D is an object that generates a 3D representation of a\n"
  "cursor. The cursor consists of a wireframe bounding box, three\n"
  "intersecting axes lines that meet at the cursor focus, and \"shadows\"\n"
  "or projections of the axes against the sides of the bounding box.\n"
  "Each of these components can be turned on/off.\n\n"
  "This filter generates two output datasets. The first (Output) is just\n"
  "the geometric representation of the cursor. The second (Focus) is a\n"
  "single point at the focal point.\n\n";


static PyObject *
PyvtkCursor3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCursor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCursor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCursor3D *tempr = vtkCursor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCursor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCursor3D::NewInstance());

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
PyvtkCursor3D_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCursor3D::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCursor3D_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkCursor3D::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCursor3D_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCursor3D_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkCursor3D_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkCursor3D_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkCursor3D::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->SetFocalPoint(temp0);
    }
    else
    {
      op->vtkCursor3D::SetFocalPoint(temp0);
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
PyvtkCursor3D_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCursor3D::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCursor3D_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCursor3D_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkCursor3D_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}



static PyObject *
PyvtkCursor3D_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkCursor3D::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->vtkCursor3D::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkCursor3D::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkCursor3D::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkCursor3D::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxes(temp0);
    }
    else
    {
      op->vtkCursor3D::SetAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxes() :
      op->vtkCursor3D::GetAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_AxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxesOn();
    }
    else
    {
      op->vtkCursor3D::AxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_AxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxesOff();
    }
    else
    {
      op->vtkCursor3D::AxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->vtkCursor3D::SetXShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXShadows() :
      op->vtkCursor3D::GetXShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOn();
    }
    else
    {
      op->vtkCursor3D::XShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOff();
    }
    else
    {
      op->vtkCursor3D::XShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->vtkCursor3D::SetYShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYShadows() :
      op->vtkCursor3D::GetYShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOn();
    }
    else
    {
      op->vtkCursor3D::YShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOff();
    }
    else
    {
      op->vtkCursor3D::YShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->vtkCursor3D::SetZShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZShadows() :
      op->vtkCursor3D::GetZShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOn();
    }
    else
    {
      op->vtkCursor3D::ZShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOff();
    }
    else
    {
      op->vtkCursor3D::ZShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

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
      op->vtkCursor3D::SetTranslationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkCursor3D::GetTranslationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOn();
    }
    else
    {
      op->vtkCursor3D::TranslationModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOff();
    }
    else
    {
      op->vtkCursor3D::TranslationModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_SetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrap(temp0);
    }
    else
    {
      op->vtkCursor3D::SetWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrap() :
      op->vtkCursor3D::GetWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_WrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WrapOn();
    }
    else
    {
      op->vtkCursor3D::WrapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_WrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WrapOff();
    }
    else
    {
      op->vtkCursor3D::WrapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_GetFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetFocus() :
      op->vtkCursor3D::GetFocus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOn();
    }
    else
    {
      op->vtkCursor3D::AllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor3D_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor3D *op = static_cast<vtkCursor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOff();
    }
    else
    {
      op->vtkCursor3D::AllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCursor3D_Methods[] = {
  {"IsTypeOf", PyvtkCursor3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCursor3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCursor3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCursor3D\nC++: static vtkCursor3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCursor3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCursor3D\nC++: vtkCursor3D *NewInstance()\n\n"},
  {"SetModelBounds", PyvtkCursor3D_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(const double bounds[6])\n\nSet / get the boundary of the 3D cursor.\n"},
  {"GetModelBounds", PyvtkCursor3D_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the boundary of the 3D cursor.\n"},
  {"SetFocalPoint", PyvtkCursor3D_SetFocalPoint, METH_VARARGS,
   "V.SetFocalPoint([float, float, float])\nC++: void SetFocalPoint(double x[3])\nV.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet/Get the position of cursor focus. If translation mode is on,\nthen the entire cursor (including bounding box, cursor, and\nshadows) is translated. Otherwise, the focal point will either be\nclamped to the bounding box, or wrapped, if Wrap is on. (Note:\nthis behavior requires that the bounding box is set prior to the\nfocal point.)\n"},
  {"GetFocalPoint", PyvtkCursor3D_GetFocalPoint, METH_VARARGS,
   "V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\nSet/Get the position of cursor focus. If translation mode is on,\nthen the entire cursor (including bounding box, cursor, and\nshadows) is translated. Otherwise, the focal point will either be\nclamped to the bounding box, or wrapped, if Wrap is on. (Note:\nthis behavior requires that the bounding box is set prior to the\nfocal point.)\n"},
  {"SetOutline", PyvtkCursor3D_SetOutline, METH_VARARGS,
   "V.SetOutline(int)\nC++: virtual void SetOutline(vtkTypeBool _arg)\n\nTurn on/off the wireframe bounding box.\n"},
  {"GetOutline", PyvtkCursor3D_GetOutline, METH_VARARGS,
   "V.GetOutline() -> int\nC++: virtual vtkTypeBool GetOutline()\n\nTurn on/off the wireframe bounding box.\n"},
  {"OutlineOn", PyvtkCursor3D_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: virtual void OutlineOn()\n\nTurn on/off the wireframe bounding box.\n"},
  {"OutlineOff", PyvtkCursor3D_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: virtual void OutlineOff()\n\nTurn on/off the wireframe bounding box.\n"},
  {"SetAxes", PyvtkCursor3D_SetAxes, METH_VARARGS,
   "V.SetAxes(int)\nC++: virtual void SetAxes(vtkTypeBool _arg)\n\nTurn on/off the wireframe axes.\n"},
  {"GetAxes", PyvtkCursor3D_GetAxes, METH_VARARGS,
   "V.GetAxes() -> int\nC++: virtual vtkTypeBool GetAxes()\n\nTurn on/off the wireframe axes.\n"},
  {"AxesOn", PyvtkCursor3D_AxesOn, METH_VARARGS,
   "V.AxesOn()\nC++: virtual void AxesOn()\n\nTurn on/off the wireframe axes.\n"},
  {"AxesOff", PyvtkCursor3D_AxesOff, METH_VARARGS,
   "V.AxesOff()\nC++: virtual void AxesOff()\n\nTurn on/off the wireframe axes.\n"},
  {"SetXShadows", PyvtkCursor3D_SetXShadows, METH_VARARGS,
   "V.SetXShadows(int)\nC++: virtual void SetXShadows(vtkTypeBool _arg)\n\nTurn on/off the wireframe x-shadows.\n"},
  {"GetXShadows", PyvtkCursor3D_GetXShadows, METH_VARARGS,
   "V.GetXShadows() -> int\nC++: virtual vtkTypeBool GetXShadows()\n\nTurn on/off the wireframe x-shadows.\n"},
  {"XShadowsOn", PyvtkCursor3D_XShadowsOn, METH_VARARGS,
   "V.XShadowsOn()\nC++: virtual void XShadowsOn()\n\nTurn on/off the wireframe x-shadows.\n"},
  {"XShadowsOff", PyvtkCursor3D_XShadowsOff, METH_VARARGS,
   "V.XShadowsOff()\nC++: virtual void XShadowsOff()\n\nTurn on/off the wireframe x-shadows.\n"},
  {"SetYShadows", PyvtkCursor3D_SetYShadows, METH_VARARGS,
   "V.SetYShadows(int)\nC++: virtual void SetYShadows(vtkTypeBool _arg)\n\nTurn on/off the wireframe y-shadows.\n"},
  {"GetYShadows", PyvtkCursor3D_GetYShadows, METH_VARARGS,
   "V.GetYShadows() -> int\nC++: virtual vtkTypeBool GetYShadows()\n\nTurn on/off the wireframe y-shadows.\n"},
  {"YShadowsOn", PyvtkCursor3D_YShadowsOn, METH_VARARGS,
   "V.YShadowsOn()\nC++: virtual void YShadowsOn()\n\nTurn on/off the wireframe y-shadows.\n"},
  {"YShadowsOff", PyvtkCursor3D_YShadowsOff, METH_VARARGS,
   "V.YShadowsOff()\nC++: virtual void YShadowsOff()\n\nTurn on/off the wireframe y-shadows.\n"},
  {"SetZShadows", PyvtkCursor3D_SetZShadows, METH_VARARGS,
   "V.SetZShadows(int)\nC++: virtual void SetZShadows(vtkTypeBool _arg)\n\nTurn on/off the wireframe z-shadows.\n"},
  {"GetZShadows", PyvtkCursor3D_GetZShadows, METH_VARARGS,
   "V.GetZShadows() -> int\nC++: virtual vtkTypeBool GetZShadows()\n\nTurn on/off the wireframe z-shadows.\n"},
  {"ZShadowsOn", PyvtkCursor3D_ZShadowsOn, METH_VARARGS,
   "V.ZShadowsOn()\nC++: virtual void ZShadowsOn()\n\nTurn on/off the wireframe z-shadows.\n"},
  {"ZShadowsOff", PyvtkCursor3D_ZShadowsOff, METH_VARARGS,
   "V.ZShadowsOff()\nC++: virtual void ZShadowsOff()\n\nTurn on/off the wireframe z-shadows.\n"},
  {"SetTranslationMode", PyvtkCursor3D_SetTranslationMode, METH_VARARGS,
   "V.SetTranslationMode(int)\nC++: virtual void SetTranslationMode(vtkTypeBool _arg)\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"GetTranslationMode", PyvtkCursor3D_GetTranslationMode, METH_VARARGS,
   "V.GetTranslationMode() -> int\nC++: virtual vtkTypeBool GetTranslationMode()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"TranslationModeOn", PyvtkCursor3D_TranslationModeOn, METH_VARARGS,
   "V.TranslationModeOn()\nC++: virtual void TranslationModeOn()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"TranslationModeOff", PyvtkCursor3D_TranslationModeOff, METH_VARARGS,
   "V.TranslationModeOff()\nC++: virtual void TranslationModeOff()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"SetWrap", PyvtkCursor3D_SetWrap, METH_VARARGS,
   "V.SetWrap(int)\nC++: virtual void SetWrap(vtkTypeBool _arg)\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"GetWrap", PyvtkCursor3D_GetWrap, METH_VARARGS,
   "V.GetWrap() -> int\nC++: virtual vtkTypeBool GetWrap()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"WrapOn", PyvtkCursor3D_WrapOn, METH_VARARGS,
   "V.WrapOn()\nC++: virtual void WrapOn()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"WrapOff", PyvtkCursor3D_WrapOff, METH_VARARGS,
   "V.WrapOff()\nC++: virtual void WrapOff()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"GetFocus", PyvtkCursor3D_GetFocus, METH_VARARGS,
   "V.GetFocus() -> vtkPolyData\nC++: vtkPolyData *GetFocus()\n\nGet the focus for this filter.\n"},
  {"AllOn", PyvtkCursor3D_AllOn, METH_VARARGS,
   "V.AllOn()\nC++: void AllOn()\n\nTurn every part of the 3D cursor on or off.\n"},
  {"AllOff", PyvtkCursor3D_AllOff, METH_VARARGS,
   "V.AllOff()\nC++: void AllOff()\n\nTurn every part of the 3D cursor on or off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCursor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkCursor3D", // tp_name
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
  PyvtkCursor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCursor3D_StaticNew()
{
  return vtkCursor3D::New();
}

PyObject *PyvtkCursor3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCursor3D_Type, PyvtkCursor3D_Methods,
    "vtkCursor3D",
 &PyvtkCursor3D_StaticNew);

  PyTypeObject *pytype = &PyvtkCursor3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCursor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCursor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCursor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

