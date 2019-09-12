// python wrapper for vtkProgressBarRepresentation
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
#include "vtkProgressBarRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgressBarRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProgressBarRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static const char *PyvtkProgressBarRepresentation_Doc =
  "vtkProgressBarRepresentation - represent a vtkProgressBarWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class is used to represent a vtkProgressBarWidget.\n\n"
  "@sa\n"
  "vtkProgressBarWidget\n\n";


static PyObject *
PyvtkProgressBarRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgressBarRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgressBarRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgressBarRepresentation *tempr = vtkProgressBarRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgressBarRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgressBarRepresentation::NewInstance());

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
PyvtkProgressBarRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkProgressBarRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetProgressRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgressRate(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetProgressRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressRateMinValue() :
      op->vtkProgressBarRepresentation::GetProgressRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressRateMaxValue() :
      op->vtkProgressBarRepresentation::GetProgressRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressRate() :
      op->vtkProgressBarRepresentation::GetProgressRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetProgressBarColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->SetProgressBarColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetProgressBarColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetProgressBarColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetProgressBarColor(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetProgressBarColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetProgressBarColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProgressBarRepresentation_SetProgressBarColor_s1(self, args);
    case 1:
      return PyvtkProgressBarRepresentation_SetProgressBarColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProgressBarColor");
  return nullptr;
}



static PyObject *
PyvtkProgressBarRepresentation_GetProgressBarColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetProgressBarColor() :
      op->vtkProgressBarRepresentation::GetProgressBarColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProgressBarRepresentation_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkProgressBarRepresentation_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}



static PyObject *
PyvtkProgressBarRepresentation_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkProgressBarRepresentation::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBackground(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetDrawBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkProgressBarRepresentation::GetDrawBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOn();
    }
    else
    {
      op->vtkProgressBarRepresentation::DrawBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOff();
    }
    else
    {
      op->vtkProgressBarRepresentation::DrawBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkProgressBarRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::GetSize(temp0);
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
PyvtkProgressBarRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->vtkProgressBarRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkProgressBarRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProgressBarRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProgressBarRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkProgressBarRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProgressBarRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkProgressBarRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkProgressBarRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkProgressBarRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProgressBarRepresentation\nC++: static vtkProgressBarRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkProgressBarRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProgressBarRepresentation\nC++: vtkProgressBarRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {"GetProperty", PyvtkProgressBarRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {"SetProgressRate", PyvtkProgressBarRepresentation_SetProgressRate, METH_VARARGS,
   "V.SetProgressRate(float)\nC++: virtual void SetProgressRate(double _arg)\n\nSet/Get the progress rate of the progress bar, between 0 and 1\ndefault is 0\n"},
  {"GetProgressRateMinValue", PyvtkProgressBarRepresentation_GetProgressRateMinValue, METH_VARARGS,
   "V.GetProgressRateMinValue() -> float\nC++: virtual double GetProgressRateMinValue()\n\nSet/Get the progress rate of the progress bar, between 0 and 1\ndefault is 0\n"},
  {"GetProgressRateMaxValue", PyvtkProgressBarRepresentation_GetProgressRateMaxValue, METH_VARARGS,
   "V.GetProgressRateMaxValue() -> float\nC++: virtual double GetProgressRateMaxValue()\n\nSet/Get the progress rate of the progress bar, between 0 and 1\ndefault is 0\n"},
  {"GetProgressRate", PyvtkProgressBarRepresentation_GetProgressRate, METH_VARARGS,
   "V.GetProgressRate() -> float\nC++: virtual double GetProgressRate()\n\nSet/Get the progress rate of the progress bar, between 0 and 1\ndefault is 0\n"},
  {"SetProgressBarColor", PyvtkProgressBarRepresentation_SetProgressBarColor, METH_VARARGS,
   "V.SetProgressBarColor(float, float, float)\nC++: void SetProgressBarColor(double, double, double)\nV.SetProgressBarColor((float, float, float))\nC++: void SetProgressBarColor(double a[3])\n\n"},
  {"GetProgressBarColor", PyvtkProgressBarRepresentation_GetProgressBarColor, METH_VARARGS,
   "V.GetProgressBarColor() -> (float, float, float)\nC++: double *GetProgressBarColor()\n\n"},
  {"SetBackgroundColor", PyvtkProgressBarRepresentation_SetBackgroundColor, METH_VARARGS,
   "V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {"GetBackgroundColor", PyvtkProgressBarRepresentation_GetBackgroundColor, METH_VARARGS,
   "V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {"SetDrawBackground", PyvtkProgressBarRepresentation_SetDrawBackground, METH_VARARGS,
   "V.SetDrawBackground(bool)\nC++: virtual void SetDrawBackground(bool _arg)\n\nSet/Get background visibility Default is off\n"},
  {"GetDrawBackground", PyvtkProgressBarRepresentation_GetDrawBackground, METH_VARARGS,
   "V.GetDrawBackground() -> bool\nC++: virtual bool GetDrawBackground()\n\nSet/Get background visibility Default is off\n"},
  {"DrawBackgroundOn", PyvtkProgressBarRepresentation_DrawBackgroundOn, METH_VARARGS,
   "V.DrawBackgroundOn()\nC++: virtual void DrawBackgroundOn()\n\nSet/Get background visibility Default is off\n"},
  {"DrawBackgroundOff", PyvtkProgressBarRepresentation_DrawBackgroundOff, METH_VARARGS,
   "V.DrawBackgroundOff()\nC++: virtual void DrawBackgroundOff()\n\nSet/Get background visibility Default is off\n"},
  {"BuildRepresentation", PyvtkProgressBarRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses' API.\n"},
  {"GetSize", PyvtkProgressBarRepresentation_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: void GetSize(double size[2]) override;\n\nSatisfy the superclasses' API.\n"},
  {"GetActors2D", PyvtkProgressBarRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkProgressBarRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkProgressBarRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkProgressBarRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkProgressBarRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkProgressBarRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProgressBarRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkProgressBarRepresentation", // tp_name
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
  PyvtkProgressBarRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgressBarRepresentation_StaticNew()
{
  return vtkProgressBarRepresentation::New();
}

PyObject *PyvtkProgressBarRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProgressBarRepresentation_Type, PyvtkProgressBarRepresentation_Methods,
    "vtkProgressBarRepresentation",
 &PyvtkProgressBarRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkProgressBarRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgressBarRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgressBarRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgressBarRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

