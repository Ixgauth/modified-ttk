// python wrapper for vtkViewTheme
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
#include "vtkViewTheme.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkViewTheme(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkViewTheme_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkViewTheme_Doc =
  "vtkViewTheme - Sets theme colors for a graphical view.\n\n"
  "Superclass: vtkObject\n\n"
  "This may be set on any subclass of vtkView.  The view class will\n"
  "attempt to use the values set in the theme to customize the view. \n"
  "Views will not generally use every aspect of the theme. NOTICE: This\n"
  "class will be deprecated in favor of a more robust solution based on\n"
  "style sheets.  Do not become overly-dependent on the functionality of\n"
  "themes.\n\n";


static PyObject *
PyvtkViewTheme_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkViewTheme::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewTheme::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkViewTheme *tempr = vtkViewTheme::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewTheme::NewInstance());

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
PyvtkViewTheme_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkViewTheme::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkViewTheme::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkViewTheme::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPointColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetPointColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointColor() :
      op->vtkViewTheme::GetPointColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointOpacity() :
      op->vtkViewTheme::GetPointOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointHueRange(temp0);
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
PyvtkViewTheme_SetPointHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointHueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointHueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetPointHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointHueRange() :
      op->vtkViewTheme::GetPointHueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointHueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointHueRange(temp0);
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
PyvtkViewTheme_GetPointHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointHueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointHueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointHueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointHueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetPointSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointSaturationRange(temp0);
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
PyvtkViewTheme_SetPointSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointSaturationRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointSaturationRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointSaturationRange() :
      op->vtkViewTheme::GetPointSaturationRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointSaturationRange(temp0);
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
PyvtkViewTheme_GetPointSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointSaturationRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointSaturationRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointSaturationRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointSaturationRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetPointValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointValueRange(temp0);
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
PyvtkViewTheme_SetPointValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointValueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetPointValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointValueRange() :
      op->vtkViewTheme::GetPointValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointValueRange(temp0);
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
PyvtkViewTheme_GetPointValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointValueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointValueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointValueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointValueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetPointAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointAlphaRange(temp0);
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
PyvtkViewTheme_SetPointAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointAlphaRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointAlphaRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointAlphaRange() :
      op->vtkViewTheme::GetPointAlphaRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointAlphaRange(temp0);
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
PyvtkViewTheme_GetPointAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointAlphaRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointAlphaRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointAlphaRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointAlphaRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetPointLookupTable() :
      op->vtkViewTheme::GetPointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetPointLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalePointLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetScalePointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalePointLookupTable() :
      op->vtkViewTheme::GetScalePointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScalePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalePointLookupTableOn();
    }
    else
    {
      op->vtkViewTheme::ScalePointLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScalePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalePointLookupTableOff();
    }
    else
    {
      op->vtkViewTheme::ScalePointLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetCellColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCellColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetCellColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellColor() :
      op->vtkViewTheme::GetCellColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellOpacity() :
      op->vtkViewTheme::GetCellOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellHueRange(temp0);
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
PyvtkViewTheme_SetCellHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellHueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellHueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetCellHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellHueRange() :
      op->vtkViewTheme::GetCellHueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellHueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellHueRange(temp0);
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
PyvtkViewTheme_GetCellHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellHueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellHueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellHueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellHueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetCellSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellSaturationRange(temp0);
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
PyvtkViewTheme_SetCellSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellSaturationRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellSaturationRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellSaturationRange() :
      op->vtkViewTheme::GetCellSaturationRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellSaturationRange(temp0);
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
PyvtkViewTheme_GetCellSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellSaturationRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellSaturationRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellSaturationRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellSaturationRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetCellValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellValueRange(temp0);
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
PyvtkViewTheme_SetCellValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellValueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetCellValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellValueRange() :
      op->vtkViewTheme::GetCellValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellValueRange(temp0);
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
PyvtkViewTheme_GetCellValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellValueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellValueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellValueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellValueRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetCellAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellAlphaRange(temp0);
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
PyvtkViewTheme_SetCellAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellAlphaRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellAlphaRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellAlphaRange() :
      op->vtkViewTheme::GetCellAlphaRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellAlphaRange(temp0);
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
PyvtkViewTheme_GetCellAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellAlphaRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellAlphaRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellAlphaRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAlphaRange");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetCellLookupTable() :
      op->vtkViewTheme::GetCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetCellLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleCellLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetScaleCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleCellLookupTable() :
      op->vtkViewTheme::GetScaleCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScaleCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleCellLookupTableOn();
    }
    else
    {
      op->vtkViewTheme::ScaleCellLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScaleCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleCellLookupTableOff();
    }
    else
    {
      op->vtkViewTheme::ScaleCellLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetOutlineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetOutlineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetOutlineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetOutlineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetOutlineColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetOutlineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetOutlineColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetOutlineColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutlineColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutlineColor() :
      op->vtkViewTheme::GetOutlineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetSelectedPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetSelectedPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPointColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetSelectedPointColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetSelectedPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedPointColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetSelectedPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedPointColor() :
      op->vtkViewTheme::GetSelectedPointColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPointOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedPointOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedPointOpacity() :
      op->vtkViewTheme::GetSelectedPointOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetSelectedCellColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetSelectedCellColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedCellColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedCellColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetSelectedCellColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetSelectedCellColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedCellColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetSelectedCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedCellColor() :
      op->vtkViewTheme::GetSelectedCellColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedCellOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedCellOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedCellOpacity() :
      op->vtkViewTheme::GetSelectedCellOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->vtkViewTheme::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->vtkViewTheme::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkViewTheme::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetBackgroundColor2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetBackgroundColor2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetBackgroundColor2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor2(temp0);
    }
    else
    {
      op->vtkViewTheme::SetBackgroundColor2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetBackgroundColor2_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetBackgroundColor2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor2");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetBackgroundColor2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor2() :
      op->vtkViewTheme::GetBackgroundColor2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPointTextProperty(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetPointTextProperty() :
      op->vtkViewTheme::GetPointTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetCellTextProperty(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetCellTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetCellTextProperty() :
      op->vtkViewTheme::GetCellTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetVertexLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetVertexLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetVertexLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetVertexLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetVertexLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetVertexLabelColor(temp0);
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
PyvtkViewTheme_SetVertexLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetVertexLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetVertexLabelColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVertexLabelColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVertexLabelColor() :
      op->vtkViewTheme::GetVertexLabelColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetVertexLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::GetVertexLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetVertexLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::GetVertexLabelColor(temp0);
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
PyvtkViewTheme_GetVertexLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetVertexLabelColor_s1(self, args);
    case 3:
      return PyvtkViewTheme_GetVertexLabelColor_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetVertexLabelColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVertexLabelColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_SetEdgeLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetEdgeLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetEdgeLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetEdgeLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetEdgeLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetEdgeLabelColor(temp0);
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
PyvtkViewTheme_SetEdgeLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetEdgeLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetEdgeLabelColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeLabelColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgeLabelColor() :
      op->vtkViewTheme::GetEdgeLabelColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetEdgeLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::GetEdgeLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetEdgeLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::GetEdgeLabelColor(temp0);
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
PyvtkViewTheme_GetEdgeLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetEdgeLabelColor_s1(self, args);
    case 3:
      return PyvtkViewTheme_GetEdgeLabelColor_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetEdgeLabelColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEdgeLabelColor");
  return nullptr;
}



static PyObject *
PyvtkViewTheme_CreateOceanTheme(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOceanTheme");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = vtkViewTheme::CreateOceanTheme();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_CreateMellowTheme(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateMellowTheme");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = vtkViewTheme::CreateMellowTheme();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_CreateNeonTheme(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateNeonTheme");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = vtkViewTheme::CreateNeonTheme();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_LookupMatchesPointTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupMatchesPointTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    bool tempr = (ap.IsBound() ?
      op->LookupMatchesPointTheme(temp0) :
      op->vtkViewTheme::LookupMatchesPointTheme(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_LookupMatchesCellTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupMatchesCellTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    bool tempr = (ap.IsBound() ?
      op->LookupMatchesCellTheme(temp0) :
      op->vtkViewTheme::LookupMatchesCellTheme(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkViewTheme_Methods[] = {
  {"IsTypeOf", PyvtkViewTheme_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkViewTheme_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkViewTheme_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkViewTheme\nC++: static vtkViewTheme *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkViewTheme_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkViewTheme\nC++: vtkViewTheme *NewInstance()\n\n"},
  {"SetPointSize", PyvtkViewTheme_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: virtual void SetPointSize(double _arg)\n\nThe size of points or vertices\n"},
  {"GetPointSize", PyvtkViewTheme_GetPointSize, METH_VARARGS,
   "V.GetPointSize() -> float\nC++: virtual double GetPointSize()\n\nThe size of points or vertices\n"},
  {"SetLineWidth", PyvtkViewTheme_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: virtual void SetLineWidth(double _arg)\n\nThe width of lines or edges\n"},
  {"GetLineWidth", PyvtkViewTheme_GetLineWidth, METH_VARARGS,
   "V.GetLineWidth() -> float\nC++: virtual double GetLineWidth()\n\nThe width of lines or edges\n"},
  {"SetPointColor", PyvtkViewTheme_SetPointColor, METH_VARARGS,
   "V.SetPointColor(float, float, float)\nC++: void SetPointColor(double, double, double)\nV.SetPointColor((float, float, float))\nC++: void SetPointColor(double a[3])\n\n"},
  {"GetPointColor", PyvtkViewTheme_GetPointColor, METH_VARARGS,
   "V.GetPointColor() -> (float, float, float)\nC++: double *GetPointColor()\n\n"},
  {"SetPointOpacity", PyvtkViewTheme_SetPointOpacity, METH_VARARGS,
   "V.SetPointOpacity(float)\nC++: virtual void SetPointOpacity(double _arg)\n\nThe color and opacity of points or vertices when not mapped\nthrough a lookup table.\n"},
  {"GetPointOpacity", PyvtkViewTheme_GetPointOpacity, METH_VARARGS,
   "V.GetPointOpacity() -> float\nC++: virtual double GetPointOpacity()\n\nThe color and opacity of points or vertices when not mapped\nthrough a lookup table.\n"},
  {"SetPointHueRange", PyvtkViewTheme_SetPointHueRange, METH_VARARGS,
   "V.SetPointHueRange(float, float)\nC++: virtual void SetPointHueRange(double mn, double mx)\nV.SetPointHueRange([float, float])\nC++: virtual void SetPointHueRange(double rng[2])\n\nThe ranges to use in the point lookup table. You may also do this\nby accessing the point lookup table directly with\nGetPointLookupTable() and calling these methods.\n"},
  {"GetPointHueRange", PyvtkViewTheme_GetPointHueRange, METH_VARARGS,
   "V.GetPointHueRange() -> (float, ...)\nC++: virtual double *GetPointHueRange()\nV.GetPointHueRange(float, float)\nC++: virtual void GetPointHueRange(double &mn, double &mx)\nV.GetPointHueRange([float, float])\nC++: virtual void GetPointHueRange(double rng[2])\n\nThe ranges to use in the point lookup table. You may also do this\nby accessing the point lookup table directly with\nGetPointLookupTable() and calling these methods.\n"},
  {"SetPointSaturationRange", PyvtkViewTheme_SetPointSaturationRange, METH_VARARGS,
   "V.SetPointSaturationRange(float, float)\nC++: virtual void SetPointSaturationRange(double mn, double mx)\nV.SetPointSaturationRange([float, float])\nC++: virtual void SetPointSaturationRange(double rng[2])\n\n"},
  {"GetPointSaturationRange", PyvtkViewTheme_GetPointSaturationRange, METH_VARARGS,
   "V.GetPointSaturationRange() -> (float, ...)\nC++: virtual double *GetPointSaturationRange()\nV.GetPointSaturationRange(float, float)\nC++: virtual void GetPointSaturationRange(double &mn, double &mx)\nV.GetPointSaturationRange([float, float])\nC++: virtual void GetPointSaturationRange(double rng[2])\n\n"},
  {"SetPointValueRange", PyvtkViewTheme_SetPointValueRange, METH_VARARGS,
   "V.SetPointValueRange(float, float)\nC++: virtual void SetPointValueRange(double mn, double mx)\nV.SetPointValueRange([float, float])\nC++: virtual void SetPointValueRange(double rng[2])\n\n"},
  {"GetPointValueRange", PyvtkViewTheme_GetPointValueRange, METH_VARARGS,
   "V.GetPointValueRange() -> (float, ...)\nC++: virtual double *GetPointValueRange()\nV.GetPointValueRange(float, float)\nC++: virtual void GetPointValueRange(double &mn, double &mx)\nV.GetPointValueRange([float, float])\nC++: virtual void GetPointValueRange(double rng[2])\n\n"},
  {"SetPointAlphaRange", PyvtkViewTheme_SetPointAlphaRange, METH_VARARGS,
   "V.SetPointAlphaRange(float, float)\nC++: virtual void SetPointAlphaRange(double mn, double mx)\nV.SetPointAlphaRange([float, float])\nC++: virtual void SetPointAlphaRange(double rng[2])\n\n"},
  {"GetPointAlphaRange", PyvtkViewTheme_GetPointAlphaRange, METH_VARARGS,
   "V.GetPointAlphaRange() -> (float, ...)\nC++: virtual double *GetPointAlphaRange()\nV.GetPointAlphaRange(float, float)\nC++: virtual void GetPointAlphaRange(double &mn, double &mx)\nV.GetPointAlphaRange([float, float])\nC++: virtual void GetPointAlphaRange(double rng[2])\n\n"},
  {"GetPointLookupTable", PyvtkViewTheme_GetPointLookupTable, METH_VARARGS,
   "V.GetPointLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetPointLookupTable()\n\nSet/Get the point lookup table.\n"},
  {"SetPointLookupTable", PyvtkViewTheme_SetPointLookupTable, METH_VARARGS,
   "V.SetPointLookupTable(vtkScalarsToColors)\nC++: virtual void SetPointLookupTable(vtkScalarsToColors *lut)\n\nSet/Get the point lookup table.\n"},
  {"SetScalePointLookupTable", PyvtkViewTheme_SetScalePointLookupTable, METH_VARARGS,
   "V.SetScalePointLookupTable(bool)\nC++: virtual void SetScalePointLookupTable(bool _arg)\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"GetScalePointLookupTable", PyvtkViewTheme_GetScalePointLookupTable, METH_VARARGS,
   "V.GetScalePointLookupTable() -> bool\nC++: virtual bool GetScalePointLookupTable()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"ScalePointLookupTableOn", PyvtkViewTheme_ScalePointLookupTableOn, METH_VARARGS,
   "V.ScalePointLookupTableOn()\nC++: virtual void ScalePointLookupTableOn()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"ScalePointLookupTableOff", PyvtkViewTheme_ScalePointLookupTableOff, METH_VARARGS,
   "V.ScalePointLookupTableOff()\nC++: virtual void ScalePointLookupTableOff()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"SetCellColor", PyvtkViewTheme_SetCellColor, METH_VARARGS,
   "V.SetCellColor(float, float, float)\nC++: void SetCellColor(double, double, double)\nV.SetCellColor((float, float, float))\nC++: void SetCellColor(double a[3])\n\n"},
  {"GetCellColor", PyvtkViewTheme_GetCellColor, METH_VARARGS,
   "V.GetCellColor() -> (float, float, float)\nC++: double *GetCellColor()\n\n"},
  {"SetCellOpacity", PyvtkViewTheme_SetCellOpacity, METH_VARARGS,
   "V.SetCellOpacity(float)\nC++: virtual void SetCellOpacity(double _arg)\n\nThe color and opacity of cells or edges when not mapped through a\nlookup table.\n"},
  {"GetCellOpacity", PyvtkViewTheme_GetCellOpacity, METH_VARARGS,
   "V.GetCellOpacity() -> float\nC++: virtual double GetCellOpacity()\n\nThe color and opacity of cells or edges when not mapped through a\nlookup table.\n"},
  {"SetCellHueRange", PyvtkViewTheme_SetCellHueRange, METH_VARARGS,
   "V.SetCellHueRange(float, float)\nC++: virtual void SetCellHueRange(double mn, double mx)\nV.SetCellHueRange([float, float])\nC++: virtual void SetCellHueRange(double rng[2])\n\nThe ranges to use in the cell lookup table. You may also do this\nby accessing the cell lookup table directly with\nGetCellLookupTable() and calling these methods.\n"},
  {"GetCellHueRange", PyvtkViewTheme_GetCellHueRange, METH_VARARGS,
   "V.GetCellHueRange() -> (float, ...)\nC++: virtual double *GetCellHueRange()\nV.GetCellHueRange(float, float)\nC++: virtual void GetCellHueRange(double &mn, double &mx)\nV.GetCellHueRange([float, float])\nC++: virtual void GetCellHueRange(double rng[2])\n\nThe ranges to use in the cell lookup table. You may also do this\nby accessing the cell lookup table directly with\nGetCellLookupTable() and calling these methods.\n"},
  {"SetCellSaturationRange", PyvtkViewTheme_SetCellSaturationRange, METH_VARARGS,
   "V.SetCellSaturationRange(float, float)\nC++: virtual void SetCellSaturationRange(double mn, double mx)\nV.SetCellSaturationRange([float, float])\nC++: virtual void SetCellSaturationRange(double rng[2])\n\n"},
  {"GetCellSaturationRange", PyvtkViewTheme_GetCellSaturationRange, METH_VARARGS,
   "V.GetCellSaturationRange() -> (float, ...)\nC++: virtual double *GetCellSaturationRange()\nV.GetCellSaturationRange(float, float)\nC++: virtual void GetCellSaturationRange(double &mn, double &mx)\nV.GetCellSaturationRange([float, float])\nC++: virtual void GetCellSaturationRange(double rng[2])\n\n"},
  {"SetCellValueRange", PyvtkViewTheme_SetCellValueRange, METH_VARARGS,
   "V.SetCellValueRange(float, float)\nC++: virtual void SetCellValueRange(double mn, double mx)\nV.SetCellValueRange([float, float])\nC++: virtual void SetCellValueRange(double rng[2])\n\n"},
  {"GetCellValueRange", PyvtkViewTheme_GetCellValueRange, METH_VARARGS,
   "V.GetCellValueRange() -> (float, ...)\nC++: virtual double *GetCellValueRange()\nV.GetCellValueRange(float, float)\nC++: virtual void GetCellValueRange(double &mn, double &mx)\nV.GetCellValueRange([float, float])\nC++: virtual void GetCellValueRange(double rng[2])\n\n"},
  {"SetCellAlphaRange", PyvtkViewTheme_SetCellAlphaRange, METH_VARARGS,
   "V.SetCellAlphaRange(float, float)\nC++: virtual void SetCellAlphaRange(double mn, double mx)\nV.SetCellAlphaRange([float, float])\nC++: virtual void SetCellAlphaRange(double rng[2])\n\n"},
  {"GetCellAlphaRange", PyvtkViewTheme_GetCellAlphaRange, METH_VARARGS,
   "V.GetCellAlphaRange() -> (float, ...)\nC++: virtual double *GetCellAlphaRange()\nV.GetCellAlphaRange(float, float)\nC++: virtual void GetCellAlphaRange(double &mn, double &mx)\nV.GetCellAlphaRange([float, float])\nC++: virtual void GetCellAlphaRange(double rng[2])\n\n"},
  {"GetCellLookupTable", PyvtkViewTheme_GetCellLookupTable, METH_VARARGS,
   "V.GetCellLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetCellLookupTable()\n\nSet/Get the cell lookup table.\n"},
  {"SetCellLookupTable", PyvtkViewTheme_SetCellLookupTable, METH_VARARGS,
   "V.SetCellLookupTable(vtkScalarsToColors)\nC++: virtual void SetCellLookupTable(vtkScalarsToColors *lut)\n\nSet/Get the cell lookup table.\n"},
  {"SetScaleCellLookupTable", PyvtkViewTheme_SetScaleCellLookupTable, METH_VARARGS,
   "V.SetScaleCellLookupTable(bool)\nC++: virtual void SetScaleCellLookupTable(bool _arg)\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"GetScaleCellLookupTable", PyvtkViewTheme_GetScaleCellLookupTable, METH_VARARGS,
   "V.GetScaleCellLookupTable() -> bool\nC++: virtual bool GetScaleCellLookupTable()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"ScaleCellLookupTableOn", PyvtkViewTheme_ScaleCellLookupTableOn, METH_VARARGS,
   "V.ScaleCellLookupTableOn()\nC++: virtual void ScaleCellLookupTableOn()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"ScaleCellLookupTableOff", PyvtkViewTheme_ScaleCellLookupTableOff, METH_VARARGS,
   "V.ScaleCellLookupTableOff()\nC++: virtual void ScaleCellLookupTableOff()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"SetOutlineColor", PyvtkViewTheme_SetOutlineColor, METH_VARARGS,
   "V.SetOutlineColor(float, float, float)\nC++: void SetOutlineColor(double, double, double)\nV.SetOutlineColor((float, float, float))\nC++: void SetOutlineColor(double a[3])\n\n"},
  {"GetOutlineColor", PyvtkViewTheme_GetOutlineColor, METH_VARARGS,
   "V.GetOutlineColor() -> (float, float, float)\nC++: double *GetOutlineColor()\n\n"},
  {"SetSelectedPointColor", PyvtkViewTheme_SetSelectedPointColor, METH_VARARGS,
   "V.SetSelectedPointColor(float, float, float)\nC++: void SetSelectedPointColor(double, double, double)\nV.SetSelectedPointColor((float, float, float))\nC++: void SetSelectedPointColor(double a[3])\n\n"},
  {"GetSelectedPointColor", PyvtkViewTheme_GetSelectedPointColor, METH_VARARGS,
   "V.GetSelectedPointColor() -> (float, float, float)\nC++: double *GetSelectedPointColor()\n\n"},
  {"SetSelectedPointOpacity", PyvtkViewTheme_SetSelectedPointOpacity, METH_VARARGS,
   "V.SetSelectedPointOpacity(float)\nC++: virtual void SetSelectedPointOpacity(double _arg)\n\nThe color of selected points or vertices.\n"},
  {"GetSelectedPointOpacity", PyvtkViewTheme_GetSelectedPointOpacity, METH_VARARGS,
   "V.GetSelectedPointOpacity() -> float\nC++: virtual double GetSelectedPointOpacity()\n\nThe color of selected points or vertices.\n"},
  {"SetSelectedCellColor", PyvtkViewTheme_SetSelectedCellColor, METH_VARARGS,
   "V.SetSelectedCellColor(float, float, float)\nC++: void SetSelectedCellColor(double, double, double)\nV.SetSelectedCellColor((float, float, float))\nC++: void SetSelectedCellColor(double a[3])\n\n"},
  {"GetSelectedCellColor", PyvtkViewTheme_GetSelectedCellColor, METH_VARARGS,
   "V.GetSelectedCellColor() -> (float, float, float)\nC++: double *GetSelectedCellColor()\n\n"},
  {"SetSelectedCellOpacity", PyvtkViewTheme_SetSelectedCellOpacity, METH_VARARGS,
   "V.SetSelectedCellOpacity(float)\nC++: virtual void SetSelectedCellOpacity(double _arg)\n\nThe color of selected cells or edges.\n"},
  {"GetSelectedCellOpacity", PyvtkViewTheme_GetSelectedCellOpacity, METH_VARARGS,
   "V.GetSelectedCellOpacity() -> float\nC++: virtual double GetSelectedCellOpacity()\n\nThe color of selected cells or edges.\n"},
  {"SetBackgroundColor", PyvtkViewTheme_SetBackgroundColor, METH_VARARGS,
   "V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {"GetBackgroundColor", PyvtkViewTheme_GetBackgroundColor, METH_VARARGS,
   "V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {"SetBackgroundColor2", PyvtkViewTheme_SetBackgroundColor2, METH_VARARGS,
   "V.SetBackgroundColor2(float, float, float)\nC++: void SetBackgroundColor2(double, double, double)\nV.SetBackgroundColor2((float, float, float))\nC++: void SetBackgroundColor2(double a[3])\n\n"},
  {"GetBackgroundColor2", PyvtkViewTheme_GetBackgroundColor2, METH_VARARGS,
   "V.GetBackgroundColor2() -> (float, float, float)\nC++: double *GetBackgroundColor2()\n\n"},
  {"SetPointTextProperty", PyvtkViewTheme_SetPointTextProperty, METH_VARARGS,
   "V.SetPointTextProperty(vtkTextProperty)\nC++: virtual void SetPointTextProperty(vtkTextProperty *tprop)\n\nThe text property to use for labeling points/vertices.\n"},
  {"GetPointTextProperty", PyvtkViewTheme_GetPointTextProperty, METH_VARARGS,
   "V.GetPointTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetPointTextProperty()\n\nThe text property to use for labeling points/vertices.\n"},
  {"SetCellTextProperty", PyvtkViewTheme_SetCellTextProperty, METH_VARARGS,
   "V.SetCellTextProperty(vtkTextProperty)\nC++: virtual void SetCellTextProperty(vtkTextProperty *tprop)\n\nThe text property to use for labeling edges/cells.\n"},
  {"GetCellTextProperty", PyvtkViewTheme_GetCellTextProperty, METH_VARARGS,
   "V.GetCellTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetCellTextProperty()\n\nThe text property to use for labeling edges/cells.\n"},
  {"SetVertexLabelColor", PyvtkViewTheme_SetVertexLabelColor, METH_VARARGS,
   "V.SetVertexLabelColor(float, float, float)\nC++: virtual void SetVertexLabelColor(double r, double g,\n    double b)\nV.SetVertexLabelColor([float, float, float])\nC++: virtual void SetVertexLabelColor(double c[3])\n\nThe color to use for labeling graph vertices. This is deprecated.\nUse GetPointTextProperty()->SetColor() instead.\n"},
  {"GetVertexLabelColor", PyvtkViewTheme_GetVertexLabelColor, METH_VARARGS,
   "V.GetVertexLabelColor() -> (float, ...)\nC++: virtual double *GetVertexLabelColor()\nV.GetVertexLabelColor(float, float, float)\nC++: virtual void GetVertexLabelColor(double &r, double &g,\n    double &b)\nV.GetVertexLabelColor([float, float, float])\nC++: virtual void GetVertexLabelColor(double c[3])\n\nThe color to use for labeling graph vertices. This is deprecated.\nUse GetPointTextProperty()->SetColor() instead.\n"},
  {"SetEdgeLabelColor", PyvtkViewTheme_SetEdgeLabelColor, METH_VARARGS,
   "V.SetEdgeLabelColor(float, float, float)\nC++: virtual void SetEdgeLabelColor(double r, double g, double b)\nV.SetEdgeLabelColor([float, float, float])\nC++: virtual void SetEdgeLabelColor(double c[3])\n\nThe color to use for labeling graph edges. This is deprecated.\nUse GetCellTextProperty()->SetColor() instead.\n"},
  {"GetEdgeLabelColor", PyvtkViewTheme_GetEdgeLabelColor, METH_VARARGS,
   "V.GetEdgeLabelColor() -> (float, ...)\nC++: virtual double *GetEdgeLabelColor()\nV.GetEdgeLabelColor(float, float, float)\nC++: virtual void GetEdgeLabelColor(double &r, double &g,\n    double &b)\nV.GetEdgeLabelColor([float, float, float])\nC++: virtual void GetEdgeLabelColor(double c[3])\n\nThe color to use for labeling graph edges. This is deprecated.\nUse GetCellTextProperty()->SetColor() instead.\n"},
  {"CreateOceanTheme", PyvtkViewTheme_CreateOceanTheme, METH_VARARGS,
   "V.CreateOceanTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateOceanTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {"CreateMellowTheme", PyvtkViewTheme_CreateMellowTheme, METH_VARARGS,
   "V.CreateMellowTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateMellowTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {"CreateNeonTheme", PyvtkViewTheme_CreateNeonTheme, METH_VARARGS,
   "V.CreateNeonTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateNeonTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {"LookupMatchesPointTheme", PyvtkViewTheme_LookupMatchesPointTheme, METH_VARARGS,
   "V.LookupMatchesPointTheme(vtkScalarsToColors) -> bool\nC++: bool LookupMatchesPointTheme(vtkScalarsToColors *s2c)\n\nWhether a given lookup table matches the point or cell theme of\nthis theme.\n"},
  {"LookupMatchesCellTheme", PyvtkViewTheme_LookupMatchesCellTheme, METH_VARARGS,
   "V.LookupMatchesCellTheme(vtkScalarsToColors) -> bool\nC++: bool LookupMatchesCellTheme(vtkScalarsToColors *s2c)\n\nWhether a given lookup table matches the point or cell theme of\nthis theme.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkViewTheme_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkViewsCorePython.vtkViewTheme", // tp_name
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
  PyvtkViewTheme_Doc, // tp_doc
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

static vtkObjectBase *PyvtkViewTheme_StaticNew()
{
  return vtkViewTheme::New();
}

PyObject *PyvtkViewTheme_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkViewTheme_Type, PyvtkViewTheme_Methods,
    "vtkViewTheme",
 &PyvtkViewTheme_StaticNew);

  PyTypeObject *pytype = &PyvtkViewTheme_Type;

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

void PyVTKAddFile_vtkViewTheme(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkViewTheme_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkViewTheme", o) != 0)
  {
    Py_DECREF(o);
  }

}

