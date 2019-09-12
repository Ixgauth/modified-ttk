// python wrapper for vtkPVGeneralSettings
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
#include "vtkPVGeneralSettings.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGeneralSettings(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGeneralSettings_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVGeneralSettings_Doc =
  "vtkPVGeneralSettings - object for general options.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVGeneralSettings keeps track of general options in a ParaView\n"
  "application. This is a singleton. All calls to\n"
  "vtkPVGeneralSettings::New() return a pointer to the same global\n"
  "instance (with reference count incremented as expected).\n\n";


static PyObject *
PyvtkPVGeneralSettings_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGeneralSettings::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGeneralSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGeneralSettings *tempr = vtkPVGeneralSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGeneralSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGeneralSettings::NewInstance());

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
PyvtkPVGeneralSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVGeneralSettings *tempr = vtkPVGeneralSettings::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoConvertProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoConvertProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoConvertProperties(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAutoConvertProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoConvertProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoConvertProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoConvertProperties() :
      op->vtkPVGeneralSettings::GetAutoConvertProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetBlockColorsDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColorsDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockColorsDistinctValues() :
      op->vtkPVGeneralSettings::GetBlockColorsDistinctValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetBlockColorsDistinctValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColorsDistinctValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockColorsDistinctValues(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetBlockColorsDistinctValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoApply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoApply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoApply() :
      op->vtkPVGeneralSettings::GetAutoApply());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoApply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoApply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoApply(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAutoApply(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoApplyActiveOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoApplyActiveOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoApplyActiveOnly() :
      op->vtkPVGeneralSettings::GetAutoApplyActiveOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoApplyActiveOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoApplyActiveOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoApplyActiveOnly(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAutoApplyActiveOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetEnableAutoMPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAutoMPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAutoMPI(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetEnableAutoMPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetEnableAutoMPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAutoMPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableAutoMPI() :
      op->vtkPVGeneralSettings::GetEnableAutoMPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAutoMPILimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoMPILimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoMPILimit(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAutoMPILimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAutoMPILimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoMPILimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoMPILimit() :
      op->vtkPVGeneralSettings::GetAutoMPILimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetDefaultViewType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultViewType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDefaultViewType() :
      op->vtkPVGeneralSettings::GetDefaultViewType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetDefaultViewType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultViewType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultViewType(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetDefaultViewType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetTransferFunctionResetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionResetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferFunctionResetMode() :
      op->vtkPVGeneralSettings::GetTransferFunctionResetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetTransferFunctionResetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionResetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunctionResetMode(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetTransferFunctionResetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetScalarBarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarBarMode() :
      op->vtkPVGeneralSettings::GetScalarBarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetScalarBarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarBarMode(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetScalarBarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetCacheGeometryForAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheGeometryForAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheGeometryForAnimation(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetCacheGeometryForAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetCacheGeometryForAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheGeometryForAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheGeometryForAnimation() :
      op->vtkPVGeneralSettings::GetCacheGeometryForAnimation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAnimationGeometryCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationGeometryCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationGeometryCacheLimit(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAnimationGeometryCacheLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAnimationGeometryCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationGeometryCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetAnimationGeometryCacheLimit() :
      op->vtkPVGeneralSettings::GetAnimationGeometryCacheLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAnimationTimePrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTimePrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationTimePrecision(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAnimationTimePrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAnimationTimePrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTimePrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationTimePrecisionMinValue() :
      op->vtkPVGeneralSettings::GetAnimationTimePrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAnimationTimePrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTimePrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationTimePrecisionMaxValue() :
      op->vtkPVGeneralSettings::GetAnimationTimePrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetAnimationTimePrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTimePrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationTimePrecision() :
      op->vtkPVGeneralSettings::GetAnimationTimePrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetAnimationTimeNotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTimeNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationTimeNotation(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAnimationTimeNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGeneralSettings_SetAnimationTimeNotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTimeNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationTimeNotation(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetAnimationTimeNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGeneralSettings_SetAnimationTimeNotation_Methods[] = {
  {nullptr, PyvtkPVGeneralSettings_SetAnimationTimeNotation_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkPVGeneralSettings_SetAnimationTimeNotation_s2, METH_VARARGS,
   "@c"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVGeneralSettings_SetAnimationTimeNotation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVGeneralSettings_SetAnimationTimeNotation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAnimationTimeNotation");
  return nullptr;
}



static PyObject *
PyvtkPVGeneralSettings_GetAnimationTimeNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTimeNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetAnimationTimeNotation() :
      op->vtkPVGeneralSettings::GetAnimationTimeNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetShowAnimationShortcuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowAnimationShortcuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowAnimationShortcuts(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetShowAnimationShortcuts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetShowAnimationShortcuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowAnimationShortcuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowAnimationShortcuts() :
      op->vtkPVGeneralSettings::GetShowAnimationShortcuts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_ShowAnimationShortcutsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowAnimationShortcutsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowAnimationShortcutsOn();
    }
    else
    {
      op->vtkPVGeneralSettings::ShowAnimationShortcutsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_ShowAnimationShortcutsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowAnimationShortcutsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowAnimationShortcutsOff();
    }
    else
    {
      op->vtkPVGeneralSettings::ShowAnimationShortcutsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetResetDisplayEmptyViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResetDisplayEmptyViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResetDisplayEmptyViews(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetResetDisplayEmptyViews(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetResetDisplayEmptyViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResetDisplayEmptyViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetResetDisplayEmptyViews() :
      op->vtkPVGeneralSettings::GetResetDisplayEmptyViews());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_ResetDisplayEmptyViewsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetDisplayEmptyViewsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetDisplayEmptyViewsOn();
    }
    else
    {
      op->vtkPVGeneralSettings::ResetDisplayEmptyViewsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_ResetDisplayEmptyViewsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetDisplayEmptyViewsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetDisplayEmptyViewsOff();
    }
    else
    {
      op->vtkPVGeneralSettings::ResetDisplayEmptyViewsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetRealNumberDisplayedNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRealNumberDisplayedNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRealNumberDisplayedNotation(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetRealNumberDisplayedNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetRealNumberDisplayedNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRealNumberDisplayedNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRealNumberDisplayedNotation() :
      op->vtkPVGeneralSettings::GetRealNumberDisplayedNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetRealNumberDisplayedPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRealNumberDisplayedPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRealNumberDisplayedPrecision(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetRealNumberDisplayedPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetRealNumberDisplayedPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRealNumberDisplayedPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRealNumberDisplayedPrecision() :
      op->vtkPVGeneralSettings::GetRealNumberDisplayedPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetInheritRepresentationProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInheritRepresentationProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInheritRepresentationProperties(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetInheritRepresentationProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetIgnoreNegativeLogAxisWarning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreNegativeLogAxisWarning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreNegativeLogAxisWarning(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetIgnoreNegativeLogAxisWarning(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetIgnoreNegativeLogAxisWarning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreNegativeLogAxisWarning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreNegativeLogAxisWarning() :
      op->vtkPVGeneralSettings::GetIgnoreNegativeLogAxisWarning());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetPropertiesPanelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertiesPanelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropertiesPanelMode(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetPropertiesPanelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetPropertiesPanelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesPanelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPropertiesPanelMode() :
      op->vtkPVGeneralSettings::GetPropertiesPanelMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetLockPanels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockPanels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockPanels(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetLockPanels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetLockPanels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockPanels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLockPanels() :
      op->vtkPVGeneralSettings::GetLockPanels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetLoadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadAllVariables(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetLoadAllVariables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetLoadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoadAllVariables() :
      op->vtkPVGeneralSettings::GetLoadAllVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetLoadNoChartVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadNoChartVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadNoChartVariables(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetLoadNoChartVariables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetLoadNoChartVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadNoChartVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoadNoChartVariables() :
      op->vtkPVGeneralSettings::GetLoadNoChartVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetGUIFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGUIFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGUIFontSize(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetGUIFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetGUIFontSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIFontSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGUIFontSizeMinValue() :
      op->vtkPVGeneralSettings::GetGUIFontSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetGUIFontSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIFontSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGUIFontSizeMaxValue() :
      op->vtkPVGeneralSettings::GetGUIFontSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetGUIFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGUIFontSize() :
      op->vtkPVGeneralSettings::GetGUIFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetGUIOverrideFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGUIOverrideFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGUIOverrideFont(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetGUIOverrideFont(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetGUIOverrideFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIOverrideFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGUIOverrideFont() :
      op->vtkPVGeneralSettings::GetGUIOverrideFont());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetConsoleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsoleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConsoleFontSize(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetConsoleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetConsoleFontSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsoleFontSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConsoleFontSizeMinValue() :
      op->vtkPVGeneralSettings::GetConsoleFontSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetConsoleFontSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsoleFontSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConsoleFontSizeMaxValue() :
      op->vtkPVGeneralSettings::GetConsoleFontSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetConsoleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsoleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConsoleFontSize() :
      op->vtkPVGeneralSettings::GetConsoleFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_SetColorByBlockColorsOnApply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorByBlockColorsOnApply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorByBlockColorsOnApply(temp0);
    }
    else
    {
      op->vtkPVGeneralSettings::SetColorByBlockColorsOnApply(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGeneralSettings_GetColorByBlockColorsOnApply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorByBlockColorsOnApply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGeneralSettings *op = static_cast<vtkPVGeneralSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorByBlockColorsOnApply() :
      op->vtkPVGeneralSettings::GetColorByBlockColorsOnApply());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGeneralSettings_Methods[] = {
  {"IsTypeOf", PyvtkPVGeneralSettings_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGeneralSettings_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGeneralSettings_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGeneralSettings\nC++: static vtkPVGeneralSettings *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGeneralSettings_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGeneralSettings\nC++: vtkPVGeneralSettings *NewInstance()\n\n"},
  {"GetInstance", PyvtkPVGeneralSettings_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkPVGeneralSettings\nC++: static vtkPVGeneralSettings *GetInstance()\n\nAccess the singleton.\n"},
  {"SetAutoConvertProperties", PyvtkPVGeneralSettings_SetAutoConvertProperties, METH_VARARGS,
   "V.SetAutoConvertProperties(bool)\nC++: void SetAutoConvertProperties(bool val)\n\nAutomatically convert data arrays as needed by filters including\nconverting cell arrays to point arrays, or vice versa, and\nextracting single components from multi-component arrays.\nForwards the call to\nvtkSMInputArrayDomain::SetAutomaticPropertyConversion.\n"},
  {"GetAutoConvertProperties", PyvtkPVGeneralSettings_GetAutoConvertProperties, METH_VARARGS,
   "V.GetAutoConvertProperties() -> bool\nC++: bool GetAutoConvertProperties()\n\nAutomatically convert data arrays as needed by filters including\nconverting cell arrays to point arrays, or vice versa, and\nextracting single components from multi-component arrays.\nForwards the call to\nvtkSMInputArrayDomain::SetAutomaticPropertyConversion.\n"},
  {"GetBlockColorsDistinctValues", PyvtkPVGeneralSettings_GetBlockColorsDistinctValues, METH_VARARGS,
   "V.GetBlockColorsDistinctValues() -> int\nC++: virtual int GetBlockColorsDistinctValues()\n\nDetermines the number of distinct values in vtkBlockColors. This\narray is added to each block if the dataset is a composite\ndataset. The array has one value set to (blockIndex %\nBlockColorsDistinctValues)\n"},
  {"SetBlockColorsDistinctValues", PyvtkPVGeneralSettings_SetBlockColorsDistinctValues, METH_VARARGS,
   "V.SetBlockColorsDistinctValues(int)\nC++: virtual void SetBlockColorsDistinctValues(int _arg)\n\nDetermines the number of distinct values in vtkBlockColors. This\narray is added to each block if the dataset is a composite\ndataset. The array has one value set to (blockIndex %\nBlockColorsDistinctValues)\n"},
  {"GetAutoApply", PyvtkPVGeneralSettings_GetAutoApply, METH_VARARGS,
   "V.GetAutoApply() -> bool\nC++: virtual bool GetAutoApply()\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {"SetAutoApply", PyvtkPVGeneralSettings_SetAutoApply, METH_VARARGS,
   "V.SetAutoApply(bool)\nC++: virtual void SetAutoApply(bool _arg)\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {"GetAutoApplyActiveOnly", PyvtkPVGeneralSettings_GetAutoApplyActiveOnly, METH_VARARGS,
   "V.GetAutoApplyActiveOnly() -> bool\nC++: virtual bool GetAutoApplyActiveOnly()\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {"SetAutoApplyActiveOnly", PyvtkPVGeneralSettings_SetAutoApplyActiveOnly, METH_VARARGS,
   "V.SetAutoApplyActiveOnly(bool)\nC++: virtual void SetAutoApplyActiveOnly(bool _arg)\n\nAutomatically apply changes in the 'Properties' panel.\n"},
  {"SetEnableAutoMPI", PyvtkPVGeneralSettings_SetEnableAutoMPI, METH_VARARGS,
   "V.SetEnableAutoMPI(bool)\nC++: void SetEnableAutoMPI(bool)\n\nEnable auto-mpi. Forwarded to vtkProcessModuleAutoMPI.\n"},
  {"GetEnableAutoMPI", PyvtkPVGeneralSettings_GetEnableAutoMPI, METH_VARARGS,
   "V.GetEnableAutoMPI() -> bool\nC++: bool GetEnableAutoMPI()\n\nEnable auto-mpi. Forwarded to vtkProcessModuleAutoMPI.\n"},
  {"SetAutoMPILimit", PyvtkPVGeneralSettings_SetAutoMPILimit, METH_VARARGS,
   "V.SetAutoMPILimit(int)\nC++: void SetAutoMPILimit(int val)\n\nSet the core limit for auto-mpi.\n"},
  {"GetAutoMPILimit", PyvtkPVGeneralSettings_GetAutoMPILimit, METH_VARARGS,
   "V.GetAutoMPILimit() -> int\nC++: int GetAutoMPILimit()\n\nSet the core limit for auto-mpi.\n"},
  {"GetDefaultViewType", PyvtkPVGeneralSettings_GetDefaultViewType, METH_VARARGS,
   "V.GetDefaultViewType() -> string\nC++: virtual char *GetDefaultViewType()\n\nGet/Set the default view type.\n"},
  {"SetDefaultViewType", PyvtkPVGeneralSettings_SetDefaultViewType, METH_VARARGS,
   "V.SetDefaultViewType(string)\nC++: virtual void SetDefaultViewType(const char *_arg)\n\nGet/Set the default view type.\n"},
  {"GetTransferFunctionResetMode", PyvtkPVGeneralSettings_GetTransferFunctionResetMode, METH_VARARGS,
   "V.GetTransferFunctionResetMode() -> int\nC++: virtual int GetTransferFunctionResetMode()\n\nGet/Set the transfer function reset mode.\n"},
  {"SetTransferFunctionResetMode", PyvtkPVGeneralSettings_SetTransferFunctionResetMode, METH_VARARGS,
   "V.SetTransferFunctionResetMode(int)\nC++: virtual void SetTransferFunctionResetMode(int _arg)\n\nGet/Set the transfer function reset mode.\n"},
  {"GetScalarBarMode", PyvtkPVGeneralSettings_GetScalarBarMode, METH_VARARGS,
   "V.GetScalarBarMode() -> int\nC++: virtual int GetScalarBarMode()\n\nEnum for ScalarBarMode.\n"},
  {"SetScalarBarMode", PyvtkPVGeneralSettings_SetScalarBarMode, METH_VARARGS,
   "V.SetScalarBarMode(int)\nC++: void SetScalarBarMode(int)\n\nEnum for ScalarBarMode.\n"},
  {"SetCacheGeometryForAnimation", PyvtkPVGeneralSettings_SetCacheGeometryForAnimation, METH_VARARGS,
   "V.SetCacheGeometryForAnimation(bool)\nC++: void SetCacheGeometryForAnimation(bool val)\n\nSet when animation geometry caching is enabled.\n"},
  {"GetCacheGeometryForAnimation", PyvtkPVGeneralSettings_GetCacheGeometryForAnimation, METH_VARARGS,
   "V.GetCacheGeometryForAnimation() -> bool\nC++: virtual bool GetCacheGeometryForAnimation()\n\nSet when animation geometry caching is enabled.\n"},
  {"SetAnimationGeometryCacheLimit", PyvtkPVGeneralSettings_SetAnimationGeometryCacheLimit, METH_VARARGS,
   "V.SetAnimationGeometryCacheLimit(int)\nC++: void SetAnimationGeometryCacheLimit(unsigned long val)\n\nSet the animation cache limit in KBs.\n"},
  {"GetAnimationGeometryCacheLimit", PyvtkPVGeneralSettings_GetAnimationGeometryCacheLimit, METH_VARARGS,
   "V.GetAnimationGeometryCacheLimit() -> int\nC++: virtual unsigned long GetAnimationGeometryCacheLimit()\n\nSet the animation cache limit in KBs.\n"},
  {"SetAnimationTimePrecision", PyvtkPVGeneralSettings_SetAnimationTimePrecision, METH_VARARGS,
   "V.SetAnimationTimePrecision(int)\nC++: virtual void SetAnimationTimePrecision(int _arg)\n\nSet the precision of the animation time toolbar.\n"},
  {"GetAnimationTimePrecisionMinValue", PyvtkPVGeneralSettings_GetAnimationTimePrecisionMinValue, METH_VARARGS,
   "V.GetAnimationTimePrecisionMinValue() -> int\nC++: virtual int GetAnimationTimePrecisionMinValue()\n\nSet the precision of the animation time toolbar.\n"},
  {"GetAnimationTimePrecisionMaxValue", PyvtkPVGeneralSettings_GetAnimationTimePrecisionMaxValue, METH_VARARGS,
   "V.GetAnimationTimePrecisionMaxValue() -> int\nC++: virtual int GetAnimationTimePrecisionMaxValue()\n\nSet the precision of the animation time toolbar.\n"},
  {"GetAnimationTimePrecision", PyvtkPVGeneralSettings_GetAnimationTimePrecision, METH_VARARGS,
   "V.GetAnimationTimePrecision() -> int\nC++: virtual int GetAnimationTimePrecision()\n\nSet the precision of the animation time toolbar.\n"},
  {"SetAnimationTimeNotation", PyvtkPVGeneralSettings_SetAnimationTimeNotation, METH_VARARGS,
   "V.SetAnimationTimeNotation(int)\nC++: void SetAnimationTimeNotation(int notation)\nV.SetAnimationTimeNotation(char)\nC++: virtual void SetAnimationTimeNotation(char _arg)\n\nSet the notation for the animation time toolbar.\n"},
  {"GetAnimationTimeNotation", PyvtkPVGeneralSettings_GetAnimationTimeNotation, METH_VARARGS,
   "V.GetAnimationTimeNotation() -> char\nC++: virtual char GetAnimationTimeNotation()\n\nSet the notation for the animation time toolbar.\n"},
  {"SetShowAnimationShortcuts", PyvtkPVGeneralSettings_SetShowAnimationShortcuts, METH_VARARGS,
   "V.SetShowAnimationShortcuts(bool)\nC++: virtual void SetShowAnimationShortcuts(bool _arg)\n\nSet when animation shortcuts are shown.\n"},
  {"GetShowAnimationShortcuts", PyvtkPVGeneralSettings_GetShowAnimationShortcuts, METH_VARARGS,
   "V.GetShowAnimationShortcuts() -> bool\nC++: virtual bool GetShowAnimationShortcuts()\n\nSet when animation shortcuts are shown.\n"},
  {"ShowAnimationShortcutsOn", PyvtkPVGeneralSettings_ShowAnimationShortcutsOn, METH_VARARGS,
   "V.ShowAnimationShortcutsOn()\nC++: virtual void ShowAnimationShortcutsOn()\n\nSet when animation shortcuts are shown.\n"},
  {"ShowAnimationShortcutsOff", PyvtkPVGeneralSettings_ShowAnimationShortcutsOff, METH_VARARGS,
   "V.ShowAnimationShortcutsOff()\nC++: virtual void ShowAnimationShortcutsOff()\n\nSet when animation shortcuts are shown.\n"},
  {"SetResetDisplayEmptyViews", PyvtkPVGeneralSettings_SetResetDisplayEmptyViews, METH_VARARGS,
   "V.SetResetDisplayEmptyViews(bool)\nC++: virtual void SetResetDisplayEmptyViews(bool _arg)\n\nSet whether to reset display when showing a representation in an\nempty view.\n"},
  {"GetResetDisplayEmptyViews", PyvtkPVGeneralSettings_GetResetDisplayEmptyViews, METH_VARARGS,
   "V.GetResetDisplayEmptyViews() -> bool\nC++: virtual bool GetResetDisplayEmptyViews()\n\nSet whether to reset display when showing a representation in an\nempty view.\n"},
  {"ResetDisplayEmptyViewsOn", PyvtkPVGeneralSettings_ResetDisplayEmptyViewsOn, METH_VARARGS,
   "V.ResetDisplayEmptyViewsOn()\nC++: virtual void ResetDisplayEmptyViewsOn()\n\nSet whether to reset display when showing a representation in an\nempty view.\n"},
  {"ResetDisplayEmptyViewsOff", PyvtkPVGeneralSettings_ResetDisplayEmptyViewsOff, METH_VARARGS,
   "V.ResetDisplayEmptyViewsOff()\nC++: virtual void ResetDisplayEmptyViewsOff()\n\nSet whether to reset display when showing a representation in an\nempty view.\n"},
  {"SetRealNumberDisplayedNotation", PyvtkPVGeneralSettings_SetRealNumberDisplayedNotation, METH_VARARGS,
   "V.SetRealNumberDisplayedNotation(int)\nC++: virtual void SetRealNumberDisplayedNotation(int _arg)\n\nGet/Set the notation of real number displayed in widgets or\nviews.\n"},
  {"GetRealNumberDisplayedNotation", PyvtkPVGeneralSettings_GetRealNumberDisplayedNotation, METH_VARARGS,
   "V.GetRealNumberDisplayedNotation() -> int\nC++: virtual int GetRealNumberDisplayedNotation()\n\nGet/Set the notation of real number displayed in widgets or\nviews.\n"},
  {"SetRealNumberDisplayedPrecision", PyvtkPVGeneralSettings_SetRealNumberDisplayedPrecision, METH_VARARGS,
   "V.SetRealNumberDisplayedPrecision(int)\nC++: virtual void SetRealNumberDisplayedPrecision(int _arg)\n\nGet/Set the precision of real number displayed in widgets or\nviews.\n"},
  {"GetRealNumberDisplayedPrecision", PyvtkPVGeneralSettings_GetRealNumberDisplayedPrecision, METH_VARARGS,
   "V.GetRealNumberDisplayedPrecision() -> int\nC++: virtual int GetRealNumberDisplayedPrecision()\n\nGet/Set the precision of real number displayed in widgets or\nviews.\n"},
  {"SetInheritRepresentationProperties", PyvtkPVGeneralSettings_SetInheritRepresentationProperties, METH_VARARGS,
   "V.SetInheritRepresentationProperties(bool)\nC++: void SetInheritRepresentationProperties(bool val)\n\nForwarded for vtkSMParaViewPipelineControllerWithRendering.\n"},
  {"SetIgnoreNegativeLogAxisWarning", PyvtkPVGeneralSettings_SetIgnoreNegativeLogAxisWarning, METH_VARARGS,
   "V.SetIgnoreNegativeLogAxisWarning(bool)\nC++: void SetIgnoreNegativeLogAxisWarning(bool val)\n\nWhen plotting data with nonpositive values, ignore the standard\nwarning and draw only the data with positive values.\n"},
  {"GetIgnoreNegativeLogAxisWarning", PyvtkPVGeneralSettings_GetIgnoreNegativeLogAxisWarning, METH_VARARGS,
   "V.GetIgnoreNegativeLogAxisWarning() -> bool\nC++: bool GetIgnoreNegativeLogAxisWarning()\n\nWhen plotting data with nonpositive values, ignore the standard\nwarning and draw only the data with positive values.\n"},
  {"SetPropertiesPanelMode", PyvtkPVGeneralSettings_SetPropertiesPanelMode, METH_VARARGS,
   "V.SetPropertiesPanelMode(int)\nC++: virtual void SetPropertiesPanelMode(int _arg)\n\nProperties panel configuration.\n"},
  {"GetPropertiesPanelMode", PyvtkPVGeneralSettings_GetPropertiesPanelMode, METH_VARARGS,
   "V.GetPropertiesPanelMode() -> int\nC++: virtual int GetPropertiesPanelMode()\n\nProperties panel configuration.\n"},
  {"SetLockPanels", PyvtkPVGeneralSettings_SetLockPanels, METH_VARARGS,
   "V.SetLockPanels(bool)\nC++: virtual void SetLockPanels(bool _arg)\n\nSet whether to dock widgets into place.\n"},
  {"GetLockPanels", PyvtkPVGeneralSettings_GetLockPanels, METH_VARARGS,
   "V.GetLockPanels() -> bool\nC++: virtual bool GetLockPanels()\n\nSet whether to dock widgets into place.\n"},
  {"SetLoadAllVariables", PyvtkPVGeneralSettings_SetLoadAllVariables, METH_VARARGS,
   "V.SetLoadAllVariables(bool)\nC++: void SetLoadAllVariables(bool val)\n\nLoad all variables when loading a data set.\n"},
  {"GetLoadAllVariables", PyvtkPVGeneralSettings_GetLoadAllVariables, METH_VARARGS,
   "V.GetLoadAllVariables() -> bool\nC++: bool GetLoadAllVariables()\n\nLoad all variables when loading a data set.\n"},
  {"SetLoadNoChartVariables", PyvtkPVGeneralSettings_SetLoadNoChartVariables, METH_VARARGS,
   "V.SetLoadNoChartVariables(bool)\nC++: void SetLoadNoChartVariables(bool val)\n\nLoad no variables when showing a 2D chart.\n"},
  {"GetLoadNoChartVariables", PyvtkPVGeneralSettings_GetLoadNoChartVariables, METH_VARARGS,
   "V.GetLoadNoChartVariables() -> bool\nC++: bool GetLoadNoChartVariables()\n\nLoad no variables when showing a 2D chart.\n"},
  {"SetGUIFontSize", PyvtkPVGeneralSettings_SetGUIFontSize, METH_VARARGS,
   "V.SetGUIFontSize(int)\nC++: virtual void SetGUIFontSize(int _arg)\n\nGet/Set the GUI font size. This is used only if GUIOverrideFont\nis true.\n"},
  {"GetGUIFontSizeMinValue", PyvtkPVGeneralSettings_GetGUIFontSizeMinValue, METH_VARARGS,
   "V.GetGUIFontSizeMinValue() -> int\nC++: virtual int GetGUIFontSizeMinValue()\n\nGet/Set the GUI font size. This is used only if GUIOverrideFont\nis true.\n"},
  {"GetGUIFontSizeMaxValue", PyvtkPVGeneralSettings_GetGUIFontSizeMaxValue, METH_VARARGS,
   "V.GetGUIFontSizeMaxValue() -> int\nC++: virtual int GetGUIFontSizeMaxValue()\n\nGet/Set the GUI font size. This is used only if GUIOverrideFont\nis true.\n"},
  {"GetGUIFontSize", PyvtkPVGeneralSettings_GetGUIFontSize, METH_VARARGS,
   "V.GetGUIFontSize() -> int\nC++: virtual int GetGUIFontSize()\n\nGet/Set the GUI font size. This is used only if GUIOverrideFont\nis true.\n"},
  {"SetGUIOverrideFont", PyvtkPVGeneralSettings_SetGUIOverrideFont, METH_VARARGS,
   "V.SetGUIOverrideFont(bool)\nC++: virtual void SetGUIOverrideFont(bool _arg)\n\nGet/Set whether the GUIFontSize should be used.\n"},
  {"GetGUIOverrideFont", PyvtkPVGeneralSettings_GetGUIOverrideFont, METH_VARARGS,
   "V.GetGUIOverrideFont() -> bool\nC++: virtual bool GetGUIOverrideFont()\n\nGet/Set whether the GUIFontSize should be used.\n"},
  {"SetConsoleFontSize", PyvtkPVGeneralSettings_SetConsoleFontSize, METH_VARARGS,
   "V.SetConsoleFontSize(int)\nC++: virtual void SetConsoleFontSize(int _arg)\n\nConsole font size.\n"},
  {"GetConsoleFontSizeMinValue", PyvtkPVGeneralSettings_GetConsoleFontSizeMinValue, METH_VARARGS,
   "V.GetConsoleFontSizeMinValue() -> int\nC++: virtual int GetConsoleFontSizeMinValue()\n\nConsole font size.\n"},
  {"GetConsoleFontSizeMaxValue", PyvtkPVGeneralSettings_GetConsoleFontSizeMaxValue, METH_VARARGS,
   "V.GetConsoleFontSizeMaxValue() -> int\nC++: virtual int GetConsoleFontSizeMaxValue()\n\nConsole font size.\n"},
  {"GetConsoleFontSize", PyvtkPVGeneralSettings_GetConsoleFontSize, METH_VARARGS,
   "V.GetConsoleFontSize() -> int\nC++: virtual int GetConsoleFontSize()\n\nConsole font size.\n"},
  {"SetColorByBlockColorsOnApply", PyvtkPVGeneralSettings_SetColorByBlockColorsOnApply, METH_VARARGS,
   "V.SetColorByBlockColorsOnApply(bool)\nC++: virtual void SetColorByBlockColorsOnApply(bool _arg)\n\nAutomatically color by **vtkBlockColors** if array is present on\n`Apply`.\n"},
  {"GetColorByBlockColorsOnApply", PyvtkPVGeneralSettings_GetColorByBlockColorsOnApply, METH_VARARGS,
   "V.GetColorByBlockColorsOnApply() -> bool\nC++: virtual bool GetColorByBlockColorsOnApply()\n\nAutomatically color by **vtkBlockColors** if array is present on\n`Apply`.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGeneralSettings_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkPVGeneralSettings", // tp_name
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
  PyvtkPVGeneralSettings_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGeneralSettings_StaticNew()
{
  return vtkPVGeneralSettings::New();
}

PyObject *PyvtkPVGeneralSettings_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGeneralSettings_Type, PyvtkPVGeneralSettings_Methods,
    "vtkPVGeneralSettings",
 &PyvtkPVGeneralSettings_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGeneralSettings_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 15; c++)
  {
    static const struct { const char *name; int value; }
      constants[15] = {
        { "DEFAULT_TIME_STEP_UNCHANGED", vtkPVGeneralSettings::DEFAULT_TIME_STEP_UNCHANGED },
        { "DEFAULT_TIME_STEP_FIRST", vtkPVGeneralSettings::DEFAULT_TIME_STEP_FIRST },
        { "DEFAULT_TIME_STEP_LAST", vtkPVGeneralSettings::DEFAULT_TIME_STEP_LAST },
        { "AUTOMATICALLY_SHOW_AND_HIDE_SCALAR_BARS", vtkPVGeneralSettings::AUTOMATICALLY_SHOW_AND_HIDE_SCALAR_BARS },
        { "AUTOMATICALLY_HIDE_SCALAR_BARS", vtkPVGeneralSettings::AUTOMATICALLY_HIDE_SCALAR_BARS },
        { "MANUAL_SCALAR_BARS", vtkPVGeneralSettings::MANUAL_SCALAR_BARS },
        { "MIXED", vtkPVGeneralSettings::MIXED },
        { "SCIENTIFIC", vtkPVGeneralSettings::SCIENTIFIC },
        { "FIXED", vtkPVGeneralSettings::FIXED },
        { "DISPLAY_REALNUMBERS_USING_SCIENTIFIC_NOTATION", vtkPVGeneralSettings::DISPLAY_REALNUMBERS_USING_SCIENTIFIC_NOTATION },
        { "DISPLAY_REALNUMBERS_USING_FIXED_NOTATION", vtkPVGeneralSettings::DISPLAY_REALNUMBERS_USING_FIXED_NOTATION },
        { "ALL_IN_ONE", vtkPVGeneralSettings::ALL_IN_ONE },
        { "SEPARATE_DISPLAY_PROPERTIES", vtkPVGeneralSettings::SEPARATE_DISPLAY_PROPERTIES },
        { "SEPARATE_VIEW_PROPERTIES", vtkPVGeneralSettings::SEPARATE_VIEW_PROPERTIES },
        { "ALL_SEPARATE", vtkPVGeneralSettings::ALL_SEPARATE },
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

void PyVTKAddFile_vtkPVGeneralSettings(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGeneralSettings_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGeneralSettings", o) != 0)
  {
    Py_DECREF(o);
  }

}

