// python wrapper for vtkCursor2D
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
#include "vtkCursor2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCursor2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCursor2D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCursor2D_Doc =
  "vtkCursor2D - generate a 2D cursor representation\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCursor2D is a class that generates a 2D cursor representation. The\n"
  "cursor consists of two intersection axes lines that meet at the\n"
  "cursor focus. Several optional features are available as well. An\n"
  "optional 2D bounding box may be enabled. An inner radius, centered at\n"
  "the focal point, can be set that erases the intersecting lines (e.g.,\n"
  "it leaves a clear area under the focal point so you can see what you\n"
  "are selecting). And finally, an optional point can be enabled located\n"
  "at the focal point. All of these features can be turned on and off\n"
  "independently.\n\n";


static PyObject *
PyvtkCursor2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCursor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCursor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCursor2D *tempr = vtkCursor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCursor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCursor2D::NewInstance());

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
PyvtkCursor2D_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCursor2D_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCursor2D_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCursor2D_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkCursor2D_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkCursor2D_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkCursor2D::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetFocalPoint(temp0);
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
PyvtkCursor2D_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCursor2D_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCursor2D_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkCursor2D_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}



static PyObject *
PyvtkCursor2D_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkCursor2D::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkCursor2D::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkCursor2D::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkCursor2D::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxes() :
      op->vtkCursor2D::GetAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_AxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxesOn();
    }
    else
    {
      op->vtkCursor2D::AxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_AxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxesOff();
    }
    else
    {
      op->vtkCursor2D::AxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkCursor2D::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkCursor2D::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkCursor2D::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0);
    }
    else
    {
      op->vtkCursor2D::SetPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkCursor2D::GetPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_PointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointOn();
    }
    else
    {
      op->vtkCursor2D::PointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_PointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointOff();
    }
    else
    {
      op->vtkCursor2D::PointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetTranslationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkCursor2D::GetTranslationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOn();
    }
    else
    {
      op->vtkCursor2D::TranslationModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOff();
    }
    else
    {
      op->vtkCursor2D::TranslationModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_SetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

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
      op->vtkCursor2D::SetWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_GetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrap() :
      op->vtkCursor2D::GetWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_WrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WrapOn();
    }
    else
    {
      op->vtkCursor2D::WrapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_WrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WrapOff();
    }
    else
    {
      op->vtkCursor2D::WrapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOn();
    }
    else
    {
      op->vtkCursor2D::AllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCursor2D_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCursor2D *op = static_cast<vtkCursor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOff();
    }
    else
    {
      op->vtkCursor2D::AllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCursor2D_Methods[] = {
  {"IsTypeOf", PyvtkCursor2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCursor2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCursor2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCursor2D\nC++: static vtkCursor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCursor2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCursor2D\nC++: vtkCursor2D *NewInstance()\n\n"},
  {"SetModelBounds", PyvtkCursor2D_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(const double bounds[6])\n\nSet / get the bounding box of the 2D cursor. This defines the\noutline of the cursor, and where the focal point should lie.\n"},
  {"GetModelBounds", PyvtkCursor2D_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the bounding box of the 2D cursor. This defines the\noutline of the cursor, and where the focal point should lie.\n"},
  {"SetFocalPoint", PyvtkCursor2D_SetFocalPoint, METH_VARARGS,
   "V.SetFocalPoint([float, float, float])\nC++: void SetFocalPoint(double x[3])\nV.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet/Get the position of cursor focus. If translation mode is on,\nthen the entire cursor (including bounding box, cursor, and\nshadows) is translated. Otherwise, the focal point will either be\nclamped to the bounding box, or wrapped, if Wrap is on. (Note:\nthis behavior requires that the bounding box is set prior to the\nfocal point.) Note that the method takes a 3D point but ignores\nthe z-coordinate value.\n"},
  {"GetFocalPoint", PyvtkCursor2D_GetFocalPoint, METH_VARARGS,
   "V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\nSet/Get the position of cursor focus. If translation mode is on,\nthen the entire cursor (including bounding box, cursor, and\nshadows) is translated. Otherwise, the focal point will either be\nclamped to the bounding box, or wrapped, if Wrap is on. (Note:\nthis behavior requires that the bounding box is set prior to the\nfocal point.) Note that the method takes a 3D point but ignores\nthe z-coordinate value.\n"},
  {"SetOutline", PyvtkCursor2D_SetOutline, METH_VARARGS,
   "V.SetOutline(int)\nC++: virtual void SetOutline(vtkTypeBool _arg)\n\nTurn on/off the wireframe bounding box.\n"},
  {"GetOutline", PyvtkCursor2D_GetOutline, METH_VARARGS,
   "V.GetOutline() -> int\nC++: virtual vtkTypeBool GetOutline()\n\nTurn on/off the wireframe bounding box.\n"},
  {"OutlineOn", PyvtkCursor2D_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: virtual void OutlineOn()\n\nTurn on/off the wireframe bounding box.\n"},
  {"OutlineOff", PyvtkCursor2D_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: virtual void OutlineOff()\n\nTurn on/off the wireframe bounding box.\n"},
  {"SetAxes", PyvtkCursor2D_SetAxes, METH_VARARGS,
   "V.SetAxes(int)\nC++: virtual void SetAxes(vtkTypeBool _arg)\n\nTurn on/off the wireframe axes.\n"},
  {"GetAxes", PyvtkCursor2D_GetAxes, METH_VARARGS,
   "V.GetAxes() -> int\nC++: virtual vtkTypeBool GetAxes()\n\nTurn on/off the wireframe axes.\n"},
  {"AxesOn", PyvtkCursor2D_AxesOn, METH_VARARGS,
   "V.AxesOn()\nC++: virtual void AxesOn()\n\nTurn on/off the wireframe axes.\n"},
  {"AxesOff", PyvtkCursor2D_AxesOff, METH_VARARGS,
   "V.AxesOff()\nC++: virtual void AxesOff()\n\nTurn on/off the wireframe axes.\n"},
  {"SetRadius", PyvtkCursor2D_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSpecify a radius for a circle. This erases the cursor lines\naround the focal point.\n"},
  {"GetRadiusMinValue", PyvtkCursor2D_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSpecify a radius for a circle. This erases the cursor lines\naround the focal point.\n"},
  {"GetRadiusMaxValue", PyvtkCursor2D_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSpecify a radius for a circle. This erases the cursor lines\naround the focal point.\n"},
  {"GetRadius", PyvtkCursor2D_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSpecify a radius for a circle. This erases the cursor lines\naround the focal point.\n"},
  {"SetPoint", PyvtkCursor2D_SetPoint, METH_VARARGS,
   "V.SetPoint(int)\nC++: virtual void SetPoint(vtkTypeBool _arg)\n\nTurn on/off the point located at the cursor focus.\n"},
  {"GetPoint", PyvtkCursor2D_GetPoint, METH_VARARGS,
   "V.GetPoint() -> int\nC++: virtual vtkTypeBool GetPoint()\n\nTurn on/off the point located at the cursor focus.\n"},
  {"PointOn", PyvtkCursor2D_PointOn, METH_VARARGS,
   "V.PointOn()\nC++: virtual void PointOn()\n\nTurn on/off the point located at the cursor focus.\n"},
  {"PointOff", PyvtkCursor2D_PointOff, METH_VARARGS,
   "V.PointOff()\nC++: virtual void PointOff()\n\nTurn on/off the point located at the cursor focus.\n"},
  {"SetTranslationMode", PyvtkCursor2D_SetTranslationMode, METH_VARARGS,
   "V.SetTranslationMode(int)\nC++: virtual void SetTranslationMode(vtkTypeBool _arg)\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"GetTranslationMode", PyvtkCursor2D_GetTranslationMode, METH_VARARGS,
   "V.GetTranslationMode() -> int\nC++: virtual vtkTypeBool GetTranslationMode()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"TranslationModeOn", PyvtkCursor2D_TranslationModeOn, METH_VARARGS,
   "V.TranslationModeOn()\nC++: virtual void TranslationModeOn()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"TranslationModeOff", PyvtkCursor2D_TranslationModeOff, METH_VARARGS,
   "V.TranslationModeOff()\nC++: virtual void TranslationModeOff()\n\nEnable/disable the translation mode. If on, changes in cursor\nposition cause the entire widget to translate along with the\ncursor. By default, translation mode is off.\n"},
  {"SetWrap", PyvtkCursor2D_SetWrap, METH_VARARGS,
   "V.SetWrap(int)\nC++: virtual void SetWrap(vtkTypeBool _arg)\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"GetWrap", PyvtkCursor2D_GetWrap, METH_VARARGS,
   "V.GetWrap() -> int\nC++: virtual vtkTypeBool GetWrap()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"WrapOn", PyvtkCursor2D_WrapOn, METH_VARARGS,
   "V.WrapOn()\nC++: virtual void WrapOn()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"WrapOff", PyvtkCursor2D_WrapOff, METH_VARARGS,
   "V.WrapOff()\nC++: virtual void WrapOff()\n\nTurn on/off cursor wrapping. If the cursor focus moves outside\nthe specified bounds, the cursor will either be restrained\nagainst the nearest \"wall\" (Wrap=off), or it will wrap around\n(Wrap=on).\n"},
  {"AllOn", PyvtkCursor2D_AllOn, METH_VARARGS,
   "V.AllOn()\nC++: void AllOn()\n\nTurn every part of the cursor on or off.\n"},
  {"AllOff", PyvtkCursor2D_AllOff, METH_VARARGS,
   "V.AllOff()\nC++: void AllOff()\n\nTurn every part of the cursor on or off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCursor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkCursor2D", // tp_name
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
  PyvtkCursor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCursor2D_StaticNew()
{
  return vtkCursor2D::New();
}

PyObject *PyvtkCursor2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCursor2D_Type, PyvtkCursor2D_Methods,
    "vtkCursor2D",
 &PyvtkCursor2D_StaticNew);

  PyTypeObject *pytype = &PyvtkCursor2D_Type;

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

void PyVTKAddFile_vtkCursor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCursor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCursor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

