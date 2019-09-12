// python wrapper for vtkTextProperty
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
#include "vtkTextProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextProperty_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTextProperty_Doc =
  "vtkTextProperty - represent text properties.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextProperty is an object that represents text properties. The\n"
  "primary properties that can be set are color, opacity, font size,\n"
  "font family horizontal and vertical justification, bold/italic/shadow\n"
  "styles.\n"
  "@sa\n"
  "vtkTextMapper vtkTextActor vtkLegendBoxActor vtkCaptionActor2D\n\n";


static PyObject *
PyvtkTextProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextProperty *tempr = vtkTextProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextProperty::NewInstance());

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
PyvtkTextProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkTextProperty_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkTextProperty::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkTextProperty::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkTextProperty::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkTextProperty::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkTextProperty::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}



static PyObject *
PyvtkTextProperty_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkTextProperty::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundOpacity(temp0);
    }
    else
    {
      op->vtkTextProperty::SetBackgroundOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMinValue() :
      op->vtkTextProperty::GetBackgroundOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMaxValue() :
      op->vtkTextProperty::GetBackgroundOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacity() :
      op->vtkTextProperty::GetBackgroundOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFrameColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->SetFrameColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextProperty::SetFrameColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetFrameColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFrameColor(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFrameColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetFrameColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetFrameColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetFrameColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFrameColor");
  return nullptr;
}



static PyObject *
PyvtkTextProperty_GetFrameColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFrameColor() :
      op->vtkTextProperty::GetFrameColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrame(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrame() :
      op->vtkTextProperty::GetFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_FrameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrameOn();
    }
    else
    {
      op->vtkTextProperty::FrameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_FrameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrameOff();
    }
    else
    {
      op->vtkTextProperty::FrameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFrameWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameWidth(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFrameWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrameWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameWidthMinValue() :
      op->vtkTextProperty::GetFrameWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrameWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameWidthMaxValue() :
      op->vtkTextProperty::GetFrameWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrameWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameWidth() :
      op->vtkTextProperty::GetFrameWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamilyAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFontFamilyAsString() :
      op->vtkTextProperty::GetFontFamilyAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_GetFontFamilyAsString_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontFamilyAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkTextProperty::GetFontFamilyAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_GetFontFamilyAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextProperty_GetFontFamilyAsString_s1(self, args);
    case 1:
      return PyvtkTextProperty_GetFontFamilyAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFontFamilyAsString");
  return nullptr;
}



static PyObject *
PyvtkTextProperty_SetFontFamilyAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyAsString(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyAsString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamily(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontFamily() :
      op->vtkTextProperty::GetFontFamily());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamilyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontFamilyMinValue() :
      op->vtkTextProperty::GetFontFamilyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToArial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToArial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyToArial();
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyToArial();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToCourier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToCourier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyToCourier();
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyToCourier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToTimes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToTimes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyToTimes();
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyToTimes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontFamilyFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextProperty::GetFontFamilyFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFontFile() :
      op->vtkTextProperty::GetFontFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFile(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontSize(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSizeMinValue() :
      op->vtkTextProperty::GetFontSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSizeMaxValue() :
      op->vtkTextProperty::GetFontSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSize() :
      op->vtkTextProperty::GetFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBold(temp0);
    }
    else
    {
      op->vtkTextProperty::SetBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBold() :
      op->vtkTextProperty::GetBold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_BoldOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoldOn();
    }
    else
    {
      op->vtkTextProperty::BoldOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_BoldOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoldOff();
    }
    else
    {
      op->vtkTextProperty::BoldOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetItalic(temp0);
    }
    else
    {
      op->vtkTextProperty::SetItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetItalic() :
      op->vtkTextProperty::GetItalic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ItalicOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItalicOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ItalicOn();
    }
    else
    {
      op->vtkTextProperty::ItalicOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ItalicOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItalicOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ItalicOff();
    }
    else
    {
      op->vtkTextProperty::ItalicOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShadow(temp0);
    }
    else
    {
      op->vtkTextProperty::SetShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShadow() :
      op->vtkTextProperty::GetShadow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ShadowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowOn();
    }
    else
    {
      op->vtkTextProperty::ShadowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ShadowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowOff();
    }
    else
    {
      op->vtkTextProperty::ShadowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetShadowOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShadowOffset(temp0, temp1);
    }
    else
    {
      op->vtkTextProperty::SetShadowOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetShadowOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetShadowOffset(temp0);
    }
    else
    {
      op->vtkTextProperty::SetShadowOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetShadowOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextProperty_SetShadowOffset_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetShadowOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShadowOffset");
  return nullptr;
}



static PyObject *
PyvtkTextProperty_GetShadowOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetShadowOffset() :
      op->vtkTextProperty::GetShadowOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetShadowColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->GetShadowColor(temp0);
    }
    else
    {
      op->vtkTextProperty::GetShadowColor(temp0);
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
PyvtkTextProperty_SetJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJustification(temp0);
    }
    else
    {
      op->vtkTextProperty::SetJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJustificationMinValue() :
      op->vtkTextProperty::GetJustificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJustificationMaxValue() :
      op->vtkTextProperty::GetJustificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJustification() :
      op->vtkTextProperty::GetJustification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJustificationToLeft();
    }
    else
    {
      op->vtkTextProperty::SetJustificationToLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJustificationToCentered();
    }
    else
    {
      op->vtkTextProperty::SetJustificationToCentered();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJustificationToRight();
    }
    else
    {
      op->vtkTextProperty::SetJustificationToRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetJustificationAsString() :
      op->vtkTextProperty::GetJustificationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustification(temp0);
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustificationMinValue() :
      op->vtkTextProperty::GetVerticalJustificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustificationMaxValue() :
      op->vtkTextProperty::GetVerticalJustificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustification() :
      op->vtkTextProperty::GetVerticalJustification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustificationToBottom();
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustificationToBottom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustificationToCentered();
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustificationToCentered();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustificationToTop();
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustificationToTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVerticalJustificationAsString() :
      op->vtkTextProperty::GetVerticalJustificationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetUseTightBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTightBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTightBoundingBox(temp0);
    }
    else
    {
      op->vtkTextProperty::SetUseTightBoundingBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetUseTightBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTightBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTightBoundingBox() :
      op->vtkTextProperty::GetUseTightBoundingBox());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_UseTightBoundingBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTightBoundingBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTightBoundingBoxOn();
    }
    else
    {
      op->vtkTextProperty::UseTightBoundingBoxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_UseTightBoundingBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTightBoundingBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTightBoundingBoxOff();
    }
    else
    {
      op->vtkTextProperty::UseTightBoundingBoxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkTextProperty::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTextProperty::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetLineSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineSpacing(temp0);
    }
    else
    {
      op->vtkTextProperty::SetLineSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetLineSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineSpacing() :
      op->vtkTextProperty::GetLineSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineOffset(temp0);
    }
    else
    {
      op->vtkTextProperty::SetLineOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineOffset() :
      op->vtkTextProperty::GetLineOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkTextProperty::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextProperty_Methods[] = {
  {"IsTypeOf", PyvtkTextProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextProperty\nC++: static vtkTextProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextProperty\nC++: vtkTextProperty *NewInstance()\n\n"},
  {"SetColor", PyvtkTextProperty_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {"GetColor", PyvtkTextProperty_GetColor, METH_VARARGS,
   "V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\n"},
  {"SetOpacity", PyvtkTextProperty_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double _arg)\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacityMinValue", PyvtkTextProperty_GetOpacityMinValue, METH_VARARGS,
   "V.GetOpacityMinValue() -> float\nC++: virtual double GetOpacityMinValue()\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacityMaxValue", PyvtkTextProperty_GetOpacityMaxValue, METH_VARARGS,
   "V.GetOpacityMaxValue() -> float\nC++: virtual double GetOpacityMaxValue()\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacity", PyvtkTextProperty_GetOpacity, METH_VARARGS,
   "V.GetOpacity() -> float\nC++: virtual double GetOpacity()\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"SetBackgroundColor", PyvtkTextProperty_SetBackgroundColor, METH_VARARGS,
   "V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {"GetBackgroundColor", PyvtkTextProperty_GetBackgroundColor, METH_VARARGS,
   "V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {"SetBackgroundOpacity", PyvtkTextProperty_SetBackgroundOpacity, METH_VARARGS,
   "V.SetBackgroundOpacity(float)\nC++: virtual void SetBackgroundOpacity(double _arg)\n\nThe background opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetBackgroundOpacityMinValue", PyvtkTextProperty_GetBackgroundOpacityMinValue, METH_VARARGS,
   "V.GetBackgroundOpacityMinValue() -> float\nC++: virtual double GetBackgroundOpacityMinValue()\n\nThe background opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetBackgroundOpacityMaxValue", PyvtkTextProperty_GetBackgroundOpacityMaxValue, METH_VARARGS,
   "V.GetBackgroundOpacityMaxValue() -> float\nC++: virtual double GetBackgroundOpacityMaxValue()\n\nThe background opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetBackgroundOpacity", PyvtkTextProperty_GetBackgroundOpacity, METH_VARARGS,
   "V.GetBackgroundOpacity() -> float\nC++: virtual double GetBackgroundOpacity()\n\nThe background opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"SetFrameColor", PyvtkTextProperty_SetFrameColor, METH_VARARGS,
   "V.SetFrameColor(float, float, float)\nC++: void SetFrameColor(double, double, double)\nV.SetFrameColor((float, float, float))\nC++: void SetFrameColor(double a[3])\n\n"},
  {"GetFrameColor", PyvtkTextProperty_GetFrameColor, METH_VARARGS,
   "V.GetFrameColor() -> (float, float, float)\nC++: double *GetFrameColor()\n\n"},
  {"SetFrame", PyvtkTextProperty_SetFrame, METH_VARARGS,
   "V.SetFrame(int)\nC++: virtual void SetFrame(vtkTypeBool _arg)\n\nEnable/disable text frame.\n"},
  {"GetFrame", PyvtkTextProperty_GetFrame, METH_VARARGS,
   "V.GetFrame() -> int\nC++: virtual vtkTypeBool GetFrame()\n\nEnable/disable text frame.\n"},
  {"FrameOn", PyvtkTextProperty_FrameOn, METH_VARARGS,
   "V.FrameOn()\nC++: virtual void FrameOn()\n\nEnable/disable text frame.\n"},
  {"FrameOff", PyvtkTextProperty_FrameOff, METH_VARARGS,
   "V.FrameOff()\nC++: virtual void FrameOff()\n\nEnable/disable text frame.\n"},
  {"SetFrameWidth", PyvtkTextProperty_SetFrameWidth, METH_VARARGS,
   "V.SetFrameWidth(int)\nC++: virtual void SetFrameWidth(int _arg)\n\nSet/Get the width of the frame. The width is expressed in pixels.\nThe default is 1 pixel.\n"},
  {"GetFrameWidthMinValue", PyvtkTextProperty_GetFrameWidthMinValue, METH_VARARGS,
   "V.GetFrameWidthMinValue() -> int\nC++: virtual int GetFrameWidthMinValue()\n\nSet/Get the width of the frame. The width is expressed in pixels.\nThe default is 1 pixel.\n"},
  {"GetFrameWidthMaxValue", PyvtkTextProperty_GetFrameWidthMaxValue, METH_VARARGS,
   "V.GetFrameWidthMaxValue() -> int\nC++: virtual int GetFrameWidthMaxValue()\n\nSet/Get the width of the frame. The width is expressed in pixels.\nThe default is 1 pixel.\n"},
  {"GetFrameWidth", PyvtkTextProperty_GetFrameWidth, METH_VARARGS,
   "V.GetFrameWidth() -> int\nC++: virtual int GetFrameWidth()\n\nSet/Get the width of the frame. The width is expressed in pixels.\nThe default is 1 pixel.\n"},
  {"GetFontFamilyAsString", PyvtkTextProperty_GetFontFamilyAsString, METH_VARARGS,
   "V.GetFontFamilyAsString() -> string\nC++: virtual char *GetFontFamilyAsString()\nV.GetFontFamilyAsString(int) -> string\nC++: static const char *GetFontFamilyAsString(int f)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"SetFontFamilyAsString", PyvtkTextProperty_SetFontFamilyAsString, METH_VARARGS,
   "V.SetFontFamilyAsString(string)\nC++: virtual void SetFontFamilyAsString(const char *_arg)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"SetFontFamily", PyvtkTextProperty_SetFontFamily, METH_VARARGS,
   "V.SetFontFamily(int)\nC++: void SetFontFamily(int t)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"GetFontFamily", PyvtkTextProperty_GetFontFamily, METH_VARARGS,
   "V.GetFontFamily() -> int\nC++: int GetFontFamily()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"GetFontFamilyMinValue", PyvtkTextProperty_GetFontFamilyMinValue, METH_VARARGS,
   "V.GetFontFamilyMinValue() -> int\nC++: int GetFontFamilyMinValue()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"SetFontFamilyToArial", PyvtkTextProperty_SetFontFamilyToArial, METH_VARARGS,
   "V.SetFontFamilyToArial()\nC++: void SetFontFamilyToArial()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"SetFontFamilyToCourier", PyvtkTextProperty_SetFontFamilyToCourier, METH_VARARGS,
   "V.SetFontFamilyToCourier()\nC++: void SetFontFamilyToCourier()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"SetFontFamilyToTimes", PyvtkTextProperty_SetFontFamilyToTimes, METH_VARARGS,
   "V.SetFontFamilyToTimes()\nC++: void SetFontFamilyToTimes()\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"GetFontFamilyFromString", PyvtkTextProperty_GetFontFamilyFromString, METH_VARARGS,
   "V.GetFontFamilyFromString(string) -> int\nC++: static int GetFontFamilyFromString(const char *f)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"GetFontFile", PyvtkTextProperty_GetFontFile, METH_VARARGS,
   "V.GetFontFile() -> string\nC++: virtual char *GetFontFile()\n\nThe absolute filepath to a local file containing a\nfreetype-readable font if GetFontFamily() return VTK_FONT_FILE.\nThe result is undefined for other values of GetFontFamily().\n"},
  {"SetFontFile", PyvtkTextProperty_SetFontFile, METH_VARARGS,
   "V.SetFontFile(string)\nC++: virtual void SetFontFile(const char *_arg)\n\nThe absolute filepath to a local file containing a\nfreetype-readable font if GetFontFamily() return VTK_FONT_FILE.\nThe result is undefined for other values of GetFontFamily().\n"},
  {"SetFontSize", PyvtkTextProperty_SetFontSize, METH_VARARGS,
   "V.SetFontSize(int)\nC++: virtual void SetFontSize(int _arg)\n\nSet/Get the font size (in points).\n"},
  {"GetFontSizeMinValue", PyvtkTextProperty_GetFontSizeMinValue, METH_VARARGS,
   "V.GetFontSizeMinValue() -> int\nC++: virtual int GetFontSizeMinValue()\n\nSet/Get the font size (in points).\n"},
  {"GetFontSizeMaxValue", PyvtkTextProperty_GetFontSizeMaxValue, METH_VARARGS,
   "V.GetFontSizeMaxValue() -> int\nC++: virtual int GetFontSizeMaxValue()\n\nSet/Get the font size (in points).\n"},
  {"GetFontSize", PyvtkTextProperty_GetFontSize, METH_VARARGS,
   "V.GetFontSize() -> int\nC++: virtual int GetFontSize()\n\nSet/Get the font size (in points).\n"},
  {"SetBold", PyvtkTextProperty_SetBold, METH_VARARGS,
   "V.SetBold(int)\nC++: virtual void SetBold(vtkTypeBool _arg)\n\nEnable/disable text bolding.\n"},
  {"GetBold", PyvtkTextProperty_GetBold, METH_VARARGS,
   "V.GetBold() -> int\nC++: virtual vtkTypeBool GetBold()\n\nEnable/disable text bolding.\n"},
  {"BoldOn", PyvtkTextProperty_BoldOn, METH_VARARGS,
   "V.BoldOn()\nC++: virtual void BoldOn()\n\nEnable/disable text bolding.\n"},
  {"BoldOff", PyvtkTextProperty_BoldOff, METH_VARARGS,
   "V.BoldOff()\nC++: virtual void BoldOff()\n\nEnable/disable text bolding.\n"},
  {"SetItalic", PyvtkTextProperty_SetItalic, METH_VARARGS,
   "V.SetItalic(int)\nC++: virtual void SetItalic(vtkTypeBool _arg)\n\nEnable/disable text italic.\n"},
  {"GetItalic", PyvtkTextProperty_GetItalic, METH_VARARGS,
   "V.GetItalic() -> int\nC++: virtual vtkTypeBool GetItalic()\n\nEnable/disable text italic.\n"},
  {"ItalicOn", PyvtkTextProperty_ItalicOn, METH_VARARGS,
   "V.ItalicOn()\nC++: virtual void ItalicOn()\n\nEnable/disable text italic.\n"},
  {"ItalicOff", PyvtkTextProperty_ItalicOff, METH_VARARGS,
   "V.ItalicOff()\nC++: virtual void ItalicOff()\n\nEnable/disable text italic.\n"},
  {"SetShadow", PyvtkTextProperty_SetShadow, METH_VARARGS,
   "V.SetShadow(int)\nC++: virtual void SetShadow(vtkTypeBool _arg)\n\nEnable/disable text shadow.\n"},
  {"GetShadow", PyvtkTextProperty_GetShadow, METH_VARARGS,
   "V.GetShadow() -> int\nC++: virtual vtkTypeBool GetShadow()\n\nEnable/disable text shadow.\n"},
  {"ShadowOn", PyvtkTextProperty_ShadowOn, METH_VARARGS,
   "V.ShadowOn()\nC++: virtual void ShadowOn()\n\nEnable/disable text shadow.\n"},
  {"ShadowOff", PyvtkTextProperty_ShadowOff, METH_VARARGS,
   "V.ShadowOff()\nC++: virtual void ShadowOff()\n\nEnable/disable text shadow.\n"},
  {"SetShadowOffset", PyvtkTextProperty_SetShadowOffset, METH_VARARGS,
   "V.SetShadowOffset(int, int)\nC++: void SetShadowOffset(int, int)\nV.SetShadowOffset((int, int))\nC++: void SetShadowOffset(int a[2])\n\n"},
  {"GetShadowOffset", PyvtkTextProperty_GetShadowOffset, METH_VARARGS,
   "V.GetShadowOffset() -> (int, int)\nC++: int *GetShadowOffset()\n\nSet/Get the shadow offset, i.e. the distance from the text to its\nshadow, in the same unit as FontSize.\n"},
  {"GetShadowColor", PyvtkTextProperty_GetShadowColor, METH_VARARGS,
   "V.GetShadowColor([float, float, float])\nC++: void GetShadowColor(double color[3])\n\nGet the shadow color. It is computed from the Color ivar\n"},
  {"SetJustification", PyvtkTextProperty_SetJustification, METH_VARARGS,
   "V.SetJustification(int)\nC++: virtual void SetJustification(int _arg)\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"GetJustificationMinValue", PyvtkTextProperty_GetJustificationMinValue, METH_VARARGS,
   "V.GetJustificationMinValue() -> int\nC++: virtual int GetJustificationMinValue()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"GetJustificationMaxValue", PyvtkTextProperty_GetJustificationMaxValue, METH_VARARGS,
   "V.GetJustificationMaxValue() -> int\nC++: virtual int GetJustificationMaxValue()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"GetJustification", PyvtkTextProperty_GetJustification, METH_VARARGS,
   "V.GetJustification() -> int\nC++: virtual int GetJustification()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"SetJustificationToLeft", PyvtkTextProperty_SetJustificationToLeft, METH_VARARGS,
   "V.SetJustificationToLeft()\nC++: void SetJustificationToLeft()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"SetJustificationToCentered", PyvtkTextProperty_SetJustificationToCentered, METH_VARARGS,
   "V.SetJustificationToCentered()\nC++: void SetJustificationToCentered()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"SetJustificationToRight", PyvtkTextProperty_SetJustificationToRight, METH_VARARGS,
   "V.SetJustificationToRight()\nC++: void SetJustificationToRight()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"GetJustificationAsString", PyvtkTextProperty_GetJustificationAsString, METH_VARARGS,
   "V.GetJustificationAsString() -> string\nC++: const char *GetJustificationAsString()\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"SetVerticalJustification", PyvtkTextProperty_SetVerticalJustification, METH_VARARGS,
   "V.SetVerticalJustification(int)\nC++: virtual void SetVerticalJustification(int _arg)\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"GetVerticalJustificationMinValue", PyvtkTextProperty_GetVerticalJustificationMinValue, METH_VARARGS,
   "V.GetVerticalJustificationMinValue() -> int\nC++: virtual int GetVerticalJustificationMinValue()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"GetVerticalJustificationMaxValue", PyvtkTextProperty_GetVerticalJustificationMaxValue, METH_VARARGS,
   "V.GetVerticalJustificationMaxValue() -> int\nC++: virtual int GetVerticalJustificationMaxValue()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"GetVerticalJustification", PyvtkTextProperty_GetVerticalJustification, METH_VARARGS,
   "V.GetVerticalJustification() -> int\nC++: virtual int GetVerticalJustification()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"SetVerticalJustificationToBottom", PyvtkTextProperty_SetVerticalJustificationToBottom, METH_VARARGS,
   "V.SetVerticalJustificationToBottom()\nC++: void SetVerticalJustificationToBottom()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"SetVerticalJustificationToCentered", PyvtkTextProperty_SetVerticalJustificationToCentered, METH_VARARGS,
   "V.SetVerticalJustificationToCentered()\nC++: void SetVerticalJustificationToCentered()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"SetVerticalJustificationToTop", PyvtkTextProperty_SetVerticalJustificationToTop, METH_VARARGS,
   "V.SetVerticalJustificationToTop()\nC++: void SetVerticalJustificationToTop()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"GetVerticalJustificationAsString", PyvtkTextProperty_GetVerticalJustificationAsString, METH_VARARGS,
   "V.GetVerticalJustificationAsString() -> string\nC++: const char *GetVerticalJustificationAsString()\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"SetUseTightBoundingBox", PyvtkTextProperty_SetUseTightBoundingBox, METH_VARARGS,
   "V.SetUseTightBoundingBox(int)\nC++: virtual void SetUseTightBoundingBox(vtkTypeBool _arg)\n\nIf this property is on, text is aligned to drawn pixels not to\nfont metrix. If the text does not include descents, the bounding\nbox will not extend below the baseline. This option can be used\nto get centered labels. It does not work well if the string\nchanges as the string position will move around.\n"},
  {"GetUseTightBoundingBox", PyvtkTextProperty_GetUseTightBoundingBox, METH_VARARGS,
   "V.GetUseTightBoundingBox() -> int\nC++: virtual vtkTypeBool GetUseTightBoundingBox()\n\nIf this property is on, text is aligned to drawn pixels not to\nfont metrix. If the text does not include descents, the bounding\nbox will not extend below the baseline. This option can be used\nto get centered labels. It does not work well if the string\nchanges as the string position will move around.\n"},
  {"UseTightBoundingBoxOn", PyvtkTextProperty_UseTightBoundingBoxOn, METH_VARARGS,
   "V.UseTightBoundingBoxOn()\nC++: virtual void UseTightBoundingBoxOn()\n\nIf this property is on, text is aligned to drawn pixels not to\nfont metrix. If the text does not include descents, the bounding\nbox will not extend below the baseline. This option can be used\nto get centered labels. It does not work well if the string\nchanges as the string position will move around.\n"},
  {"UseTightBoundingBoxOff", PyvtkTextProperty_UseTightBoundingBoxOff, METH_VARARGS,
   "V.UseTightBoundingBoxOff()\nC++: virtual void UseTightBoundingBoxOff()\n\nIf this property is on, text is aligned to drawn pixels not to\nfont metrix. If the text does not include descents, the bounding\nbox will not extend below the baseline. This option can be used\nto get centered labels. It does not work well if the string\nchanges as the string position will move around.\n"},
  {"SetOrientation", PyvtkTextProperty_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float)\nC++: virtual void SetOrientation(double _arg)\n\nSet/Get the text's orientation (in degrees).\n"},
  {"GetOrientation", PyvtkTextProperty_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> float\nC++: virtual double GetOrientation()\n\nSet/Get the text's orientation (in degrees).\n"},
  {"SetLineSpacing", PyvtkTextProperty_SetLineSpacing, METH_VARARGS,
   "V.SetLineSpacing(float)\nC++: virtual void SetLineSpacing(double _arg)\n\nSet/Get the (extra) spacing between lines, expressed as a text\nheight multiplication factor.\n"},
  {"GetLineSpacing", PyvtkTextProperty_GetLineSpacing, METH_VARARGS,
   "V.GetLineSpacing() -> float\nC++: virtual double GetLineSpacing()\n\nSet/Get the (extra) spacing between lines, expressed as a text\nheight multiplication factor.\n"},
  {"SetLineOffset", PyvtkTextProperty_SetLineOffset, METH_VARARGS,
   "V.SetLineOffset(float)\nC++: virtual void SetLineOffset(double _arg)\n\nSet/Get the vertical offset (measured in pixels).\n"},
  {"GetLineOffset", PyvtkTextProperty_GetLineOffset, METH_VARARGS,
   "V.GetLineOffset() -> float\nC++: virtual double GetLineOffset()\n\nSet/Get the vertical offset (measured in pixels).\n"},
  {"ShallowCopy", PyvtkTextProperty_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkTextProperty)\nC++: void ShallowCopy(vtkTextProperty *tprop)\n\nShallow copy of a text property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTextProperty", // tp_name
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
  PyvtkTextProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextProperty_StaticNew()
{
  return vtkTextProperty::New();
}

PyObject *PyvtkTextProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextProperty_Type, PyvtkTextProperty_Methods,
    "vtkTextProperty",
 &PyvtkTextProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkTextProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

