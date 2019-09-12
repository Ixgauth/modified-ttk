// python wrapper for vtkGlyphSource2D
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
#include "vtkGlyphSource2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlyphSource2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGlyphSource2D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGlyphSource2D_Doc =
  "vtkGlyphSource2D - create 2D glyphs represented by vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGlyphSource2D can generate a family of 2D glyphs each of which\n"
  "lies in the x-y plane (i.e., the z-coordinate is zero). The class is\n"
  "a helper class to be used with vtkGlyph2D and vtkXYPlotActor.\n\n"
  "To use this class, specify the glyph type to use and its attributes.\n"
  "Attributes include its position (i.e., center point), scale, color,\n"
  "and whether the symbol is filled or not (a polygon or closed line\n"
  "sequence). You can also put a short line through the glyph running\n"
  "from -x to +x (the glyph looks like it's on a line), or a cross.\n\n";


static PyObject *
PyvtkGlyphSource2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlyphSource2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyphSource2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlyphSource2D *tempr = vtkGlyphSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyphSource2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyphSource2D::NewInstance());

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
PyvtkGlyphSource2D_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyphSource2D::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGlyphSource2D_SetCenter_s1(self, args);
    case 1:
      return PyvtkGlyphSource2D_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkGlyphSource2D_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkGlyphSource2D::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->vtkGlyphSource2D::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleMinValue() :
      op->vtkGlyphSource2D::GetScaleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleMaxValue() :
      op->vtkGlyphSource2D::GetScaleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkGlyphSource2D::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale2(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetScale2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2MinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2MinValue() :
      op->vtkGlyphSource2D::GetScale2MinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2MaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2MaxValue() :
      op->vtkGlyphSource2D::GetScale2MaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2() :
      op->vtkGlyphSource2D::GetScale2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGlyphSource2D::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGlyphSource2D_SetColor_s1(self, args);
    case 1:
      return PyvtkGlyphSource2D_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkGlyphSource2D_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkGlyphSource2D::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilled(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetFilled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFilled() :
      op->vtkGlyphSource2D::GetFilled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOn();
    }
    else
    {
      op->vtkGlyphSource2D::FilledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOff();
    }
    else
    {
      op->vtkGlyphSource2D::FilledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDash(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetDash(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDash() :
      op->vtkGlyphSource2D::GetDash());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DashOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DashOn();
    }
    else
    {
      op->vtkGlyphSource2D::DashOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DashOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DashOff();
    }
    else
    {
      op->vtkGlyphSource2D::DashOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCross(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetCross(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCross() :
      op->vtkGlyphSource2D::GetCross());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_CrossOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CrossOn();
    }
    else
    {
      op->vtkGlyphSource2D::CrossOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_CrossOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CrossOff();
    }
    else
    {
      op->vtkGlyphSource2D::CrossOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAngle(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetRotationAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationAngle() :
      op->vtkGlyphSource2D::GetRotationAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkGlyphSource2D::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkGlyphSource2D::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkGlyphSource2D::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphTypeMinValue() :
      op->vtkGlyphSource2D::GetGlyphTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphTypeMaxValue() :
      op->vtkGlyphSource2D::GetGlyphTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkGlyphSource2D::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToNone();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToVertex();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToDash();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToDash();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCross();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToThickCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToThickCross();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToThickCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToTriangle();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToSquare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToSquare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToSquare();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToSquare();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCircle();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToCircle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToDiamond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDiamond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToDiamond();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToDiamond();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToThickArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToThickArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToThickArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToHookedArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToHookedArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToHookedArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToHookedArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToEdgeArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToEdgeArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToEdgeArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToEdgeArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkGlyphSource2D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyphSource2D_Methods[] = {
  {"IsTypeOf", PyvtkGlyphSource2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlyphSource2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlyphSource2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGlyphSource2D\nC++: static vtkGlyphSource2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlyphSource2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *NewInstance()\n\n"},
  {"SetCenter", PyvtkGlyphSource2D_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkGlyphSource2D_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the glyph. By default the center is (0,0,0).\n"},
  {"SetScale", PyvtkGlyphSource2D_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: virtual void SetScale(double _arg)\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {"GetScaleMinValue", PyvtkGlyphSource2D_GetScaleMinValue, METH_VARARGS,
   "V.GetScaleMinValue() -> float\nC++: virtual double GetScaleMinValue()\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {"GetScaleMaxValue", PyvtkGlyphSource2D_GetScaleMaxValue, METH_VARARGS,
   "V.GetScaleMaxValue() -> float\nC++: virtual double GetScaleMaxValue()\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {"GetScale", PyvtkGlyphSource2D_GetScale, METH_VARARGS,
   "V.GetScale() -> float\nC++: virtual double GetScale()\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {"SetScale2", PyvtkGlyphSource2D_SetScale2, METH_VARARGS,
   "V.SetScale2(float)\nC++: virtual void SetScale2(double _arg)\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {"GetScale2MinValue", PyvtkGlyphSource2D_GetScale2MinValue, METH_VARARGS,
   "V.GetScale2MinValue() -> float\nC++: virtual double GetScale2MinValue()\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {"GetScale2MaxValue", PyvtkGlyphSource2D_GetScale2MaxValue, METH_VARARGS,
   "V.GetScale2MaxValue() -> float\nC++: virtual double GetScale2MaxValue()\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {"GetScale2", PyvtkGlyphSource2D_GetScale2, METH_VARARGS,
   "V.GetScale2() -> float\nC++: virtual double GetScale2()\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {"SetColor", PyvtkGlyphSource2D_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {"GetColor", PyvtkGlyphSource2D_GetColor, METH_VARARGS,
   "V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\nSet the color of the glyph. The default color is white.\n"},
  {"SetFilled", PyvtkGlyphSource2D_SetFilled, METH_VARARGS,
   "V.SetFilled(int)\nC++: virtual void SetFilled(vtkTypeBool _arg)\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {"GetFilled", PyvtkGlyphSource2D_GetFilled, METH_VARARGS,
   "V.GetFilled() -> int\nC++: virtual vtkTypeBool GetFilled()\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {"FilledOn", PyvtkGlyphSource2D_FilledOn, METH_VARARGS,
   "V.FilledOn()\nC++: virtual void FilledOn()\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {"FilledOff", PyvtkGlyphSource2D_FilledOff, METH_VARARGS,
   "V.FilledOff()\nC++: virtual void FilledOff()\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {"SetDash", PyvtkGlyphSource2D_SetDash, METH_VARARGS,
   "V.SetDash(int)\nC++: virtual void SetDash(vtkTypeBool _arg)\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {"GetDash", PyvtkGlyphSource2D_GetDash, METH_VARARGS,
   "V.GetDash() -> int\nC++: virtual vtkTypeBool GetDash()\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {"DashOn", PyvtkGlyphSource2D_DashOn, METH_VARARGS,
   "V.DashOn()\nC++: virtual void DashOn()\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {"DashOff", PyvtkGlyphSource2D_DashOff, METH_VARARGS,
   "V.DashOff()\nC++: virtual void DashOff()\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {"SetCross", PyvtkGlyphSource2D_SetCross, METH_VARARGS,
   "V.SetCross(int)\nC++: virtual void SetCross(vtkTypeBool _arg)\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {"GetCross", PyvtkGlyphSource2D_GetCross, METH_VARARGS,
   "V.GetCross() -> int\nC++: virtual vtkTypeBool GetCross()\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {"CrossOn", PyvtkGlyphSource2D_CrossOn, METH_VARARGS,
   "V.CrossOn()\nC++: virtual void CrossOn()\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {"CrossOff", PyvtkGlyphSource2D_CrossOff, METH_VARARGS,
   "V.CrossOff()\nC++: virtual void CrossOff()\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {"SetRotationAngle", PyvtkGlyphSource2D_SetRotationAngle, METH_VARARGS,
   "V.SetRotationAngle(float)\nC++: virtual void SetRotationAngle(double _arg)\n\nSpecify an angle (in degrees) to rotate the glyph around the\nz-axis. Using this ivar, it is possible to generate rotated\nglyphs (e.g., crosses, arrows, etc.)\n"},
  {"GetRotationAngle", PyvtkGlyphSource2D_GetRotationAngle, METH_VARARGS,
   "V.GetRotationAngle() -> float\nC++: virtual double GetRotationAngle()\n\nSpecify an angle (in degrees) to rotate the glyph around the\nz-axis. Using this ivar, it is possible to generate rotated\nglyphs (e.g., crosses, arrows, etc.)\n"},
  {"SetResolution", PyvtkGlyphSource2D_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\nSpecify the number of points that form the circular glyph.\n"},
  {"GetResolutionMinValue", PyvtkGlyphSource2D_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual int GetResolutionMinValue()\n\nSpecify the number of points that form the circular glyph.\n"},
  {"GetResolutionMaxValue", PyvtkGlyphSource2D_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual int GetResolutionMaxValue()\n\nSpecify the number of points that form the circular glyph.\n"},
  {"GetResolution", PyvtkGlyphSource2D_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nSpecify the number of points that form the circular glyph.\n"},
  {"SetGlyphType", PyvtkGlyphSource2D_SetGlyphType, METH_VARARGS,
   "V.SetGlyphType(int)\nC++: virtual void SetGlyphType(int _arg)\n\nSpecify the type of glyph to generate.\n"},
  {"GetGlyphTypeMinValue", PyvtkGlyphSource2D_GetGlyphTypeMinValue, METH_VARARGS,
   "V.GetGlyphTypeMinValue() -> int\nC++: virtual int GetGlyphTypeMinValue()\n\nSpecify the type of glyph to generate.\n"},
  {"GetGlyphTypeMaxValue", PyvtkGlyphSource2D_GetGlyphTypeMaxValue, METH_VARARGS,
   "V.GetGlyphTypeMaxValue() -> int\nC++: virtual int GetGlyphTypeMaxValue()\n\nSpecify the type of glyph to generate.\n"},
  {"GetGlyphType", PyvtkGlyphSource2D_GetGlyphType, METH_VARARGS,
   "V.GetGlyphType() -> int\nC++: virtual int GetGlyphType()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToNone", PyvtkGlyphSource2D_SetGlyphTypeToNone, METH_VARARGS,
   "V.SetGlyphTypeToNone()\nC++: void SetGlyphTypeToNone()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToVertex", PyvtkGlyphSource2D_SetGlyphTypeToVertex, METH_VARARGS,
   "V.SetGlyphTypeToVertex()\nC++: void SetGlyphTypeToVertex()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToDash", PyvtkGlyphSource2D_SetGlyphTypeToDash, METH_VARARGS,
   "V.SetGlyphTypeToDash()\nC++: void SetGlyphTypeToDash()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToCross", PyvtkGlyphSource2D_SetGlyphTypeToCross, METH_VARARGS,
   "V.SetGlyphTypeToCross()\nC++: void SetGlyphTypeToCross()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToThickCross", PyvtkGlyphSource2D_SetGlyphTypeToThickCross, METH_VARARGS,
   "V.SetGlyphTypeToThickCross()\nC++: void SetGlyphTypeToThickCross()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToTriangle", PyvtkGlyphSource2D_SetGlyphTypeToTriangle, METH_VARARGS,
   "V.SetGlyphTypeToTriangle()\nC++: void SetGlyphTypeToTriangle()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToSquare", PyvtkGlyphSource2D_SetGlyphTypeToSquare, METH_VARARGS,
   "V.SetGlyphTypeToSquare()\nC++: void SetGlyphTypeToSquare()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToCircle", PyvtkGlyphSource2D_SetGlyphTypeToCircle, METH_VARARGS,
   "V.SetGlyphTypeToCircle()\nC++: void SetGlyphTypeToCircle()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToDiamond", PyvtkGlyphSource2D_SetGlyphTypeToDiamond, METH_VARARGS,
   "V.SetGlyphTypeToDiamond()\nC++: void SetGlyphTypeToDiamond()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToArrow", PyvtkGlyphSource2D_SetGlyphTypeToArrow, METH_VARARGS,
   "V.SetGlyphTypeToArrow()\nC++: void SetGlyphTypeToArrow()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToThickArrow", PyvtkGlyphSource2D_SetGlyphTypeToThickArrow, METH_VARARGS,
   "V.SetGlyphTypeToThickArrow()\nC++: void SetGlyphTypeToThickArrow()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToHookedArrow", PyvtkGlyphSource2D_SetGlyphTypeToHookedArrow, METH_VARARGS,
   "V.SetGlyphTypeToHookedArrow()\nC++: void SetGlyphTypeToHookedArrow()\n\nSpecify the type of glyph to generate.\n"},
  {"SetGlyphTypeToEdgeArrow", PyvtkGlyphSource2D_SetGlyphTypeToEdgeArrow, METH_VARARGS,
   "V.SetGlyphTypeToEdgeArrow()\nC++: void SetGlyphTypeToEdgeArrow()\n\nSpecify the type of glyph to generate.\n"},
  {"SetOutputPointsPrecision", PyvtkGlyphSource2D_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkGlyphSource2D_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGlyphSource2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkGlyphSource2D", // tp_name
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
  PyvtkGlyphSource2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlyphSource2D_StaticNew()
{
  return vtkGlyphSource2D::New();
}

PyObject *PyvtkGlyphSource2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGlyphSource2D_Type, PyvtkGlyphSource2D_Methods,
    "vtkGlyphSource2D",
 &PyvtkGlyphSource2D_StaticNew);

  PyTypeObject *pytype = &PyvtkGlyphSource2D_Type;

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

void PyVTKAddFile_vtkGlyphSource2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlyphSource2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlyphSource2D", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 14; c++)
  {
    static const struct { const char *name; int value; }
      constants[14] = {
        { "VTK_NO_GLYPH", 0 },
        { "VTK_VERTEX_GLYPH", 1 },
        { "VTK_DASH_GLYPH", 2 },
        { "VTK_CROSS_GLYPH", 3 },
        { "VTK_THICKCROSS_GLYPH", 4 },
        { "VTK_TRIANGLE_GLYPH", 5 },
        { "VTK_SQUARE_GLYPH", 6 },
        { "VTK_CIRCLE_GLYPH", 7 },
        { "VTK_DIAMOND_GLYPH", 8 },
        { "VTK_ARROW_GLYPH", 9 },
        { "VTK_THICKARROW_GLYPH", 10 },
        { "VTK_HOOKEDARROW_GLYPH", 11 },
        { "VTK_EDGEARROW_GLYPH", 12 },
        { "VTK_MAX_CIRCLE_RESOLUTION", 1024 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

