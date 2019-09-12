// python wrapper for vtkPVComparativeAnimationCue
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
#include "vtkPVComparativeAnimationCue.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVComparativeAnimationCue(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVComparativeAnimationCue_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVComparativeAnimationCue_Doc =
  "vtkPVComparativeAnimationCue - cue used for parameter animation by\nthe comparative view.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVComparativeAnimationCue is a animation cue used for parameter\n"
  "animation by the ComparativeView. It provides a non-conventional API\n"
  "i.e. without using properties to allow the user to setup parameter\n"
  "values over the comparative grid.\n\n";


static PyObject *
PyvtkPVComparativeAnimationCue_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVComparativeAnimationCue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVComparativeAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVComparativeAnimationCue *tempr = vtkPVComparativeAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVComparativeAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVComparativeAnimationCue::NewInstance());

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
PyvtkPVComparativeAnimationCue_SetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedProxy(temp0);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::SetAnimatedProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetAnimatedProxy() :
      op->vtkPVComparativeAnimationCue::GetAnimatedProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_RemoveAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAnimatedProxy();
    }
    else
    {
      op->vtkPVComparativeAnimationCue::RemoveAnimatedProxy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedPropertyName(temp0);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::SetAnimatedPropertyName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedPropertyName() :
      op->vtkPVComparativeAnimationCue::GetAnimatedPropertyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedDomainName(temp0);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::SetAnimatedDomainName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedDomainName() :
      op->vtkPVComparativeAnimationCue::GetAnimatedDomainName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedElement(temp0);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::SetAnimatedElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimatedElement() :
      op->vtkPVComparativeAnimationCue::GetAnimatedElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVComparativeAnimationCue::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPVComparativeAnimationCue::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPVComparativeAnimationCue::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_UpdateXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
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
      op->UpdateXRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateXRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->UpdateXRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateXRange(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateXRange_s1(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateXRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateXRange");
  return nullptr;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
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
      op->UpdateYRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateYRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->UpdateYRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateYRange(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateYRange_s1(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateYRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateYRange");
  return nullptr;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateWholeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateWholeRange(temp0, temp1);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateWholeRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateWholeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->UpdateWholeRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateWholeRange(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateWholeRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  unsigned int temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->UpdateWholeRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateWholeRange(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateWholeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVComparativeAnimationCue_UpdateWholeRange_s1(self, args);
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateWholeRange_s2(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateWholeRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateWholeRange");
  return nullptr;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->UpdateValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->UpdateValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateValue(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVComparativeAnimationCue_UpdateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVComparativeAnimationCue_UpdateValue_s1(self, args);
    case 4:
      return PyvtkPVComparativeAnimationCue_UpdateValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateValue");
  return nullptr;
}



static PyObject *
PyvtkPVComparativeAnimationCue_UpdateAnimatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnimatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->UpdateAnimatedValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVComparativeAnimationCue::UpdateAnimatedValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1, temp2, temp3) :
      op->vtkPVComparativeAnimationCue::GetValue(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  unsigned int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPVComparativeAnimationCue::GetValues(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_AppendCommandInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendCommandInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->AppendCommandInfo(temp0) :
      op->vtkPVComparativeAnimationCue::AppendCommandInfo(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVComparativeAnimationCue_LoadCommandInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCommandInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVComparativeAnimationCue *op = static_cast<vtkPVComparativeAnimationCue *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    int tempr = (ap.IsBound() ?
      op->LoadCommandInfo(temp0) :
      op->vtkPVComparativeAnimationCue::LoadCommandInfo(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVComparativeAnimationCue_Methods[] = {
  {"IsTypeOf", PyvtkPVComparativeAnimationCue_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVComparativeAnimationCue_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVComparativeAnimationCue_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVComparativeAnimationCue\nC++: static vtkPVComparativeAnimationCue *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVComparativeAnimationCue_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVComparativeAnimationCue\nC++: vtkPVComparativeAnimationCue *NewInstance()\n\n"},
  {"SetAnimatedProxy", PyvtkPVComparativeAnimationCue_SetAnimatedProxy, METH_VARARGS,
   "V.SetAnimatedProxy(vtkSMProxy)\nC++: void SetAnimatedProxy(vtkSMProxy *)\n\nSet/Get the animated proxy.\n"},
  {"GetAnimatedProxy", PyvtkPVComparativeAnimationCue_GetAnimatedProxy, METH_VARARGS,
   "V.GetAnimatedProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetAnimatedProxy()\n\nSet/Get the animated proxy.\n"},
  {"RemoveAnimatedProxy", PyvtkPVComparativeAnimationCue_RemoveAnimatedProxy, METH_VARARGS,
   "V.RemoveAnimatedProxy()\nC++: void RemoveAnimatedProxy()\n\nSet/Get the animated proxy.\n"},
  {"SetAnimatedPropertyName", PyvtkPVComparativeAnimationCue_SetAnimatedPropertyName, METH_VARARGS,
   "V.SetAnimatedPropertyName(string)\nC++: virtual void SetAnimatedPropertyName(const char *_arg)\n\nSet/Get the animated property name.\n"},
  {"GetAnimatedPropertyName", PyvtkPVComparativeAnimationCue_GetAnimatedPropertyName, METH_VARARGS,
   "V.GetAnimatedPropertyName() -> string\nC++: virtual char *GetAnimatedPropertyName()\n\nSet/Get the animated property name.\n"},
  {"SetAnimatedDomainName", PyvtkPVComparativeAnimationCue_SetAnimatedDomainName, METH_VARARGS,
   "V.SetAnimatedDomainName(string)\nC++: virtual void SetAnimatedDomainName(const char *_arg)\n\nSet/Get the animated domain name.\n"},
  {"GetAnimatedDomainName", PyvtkPVComparativeAnimationCue_GetAnimatedDomainName, METH_VARARGS,
   "V.GetAnimatedDomainName() -> string\nC++: virtual char *GetAnimatedDomainName()\n\nSet/Get the animated domain name.\n"},
  {"SetAnimatedElement", PyvtkPVComparativeAnimationCue_SetAnimatedElement, METH_VARARGS,
   "V.SetAnimatedElement(int)\nC++: virtual void SetAnimatedElement(int _arg)\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {"GetAnimatedElement", PyvtkPVComparativeAnimationCue_GetAnimatedElement, METH_VARARGS,
   "V.GetAnimatedElement() -> int\nC++: virtual int GetAnimatedElement()\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {"SetEnabled", PyvtkPVComparativeAnimationCue_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool _arg)\n\nEnable/Disable the cue.\n"},
  {"GetEnabled", PyvtkPVComparativeAnimationCue_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nEnable/Disable the cue.\n"},
  {"EnabledOn", PyvtkPVComparativeAnimationCue_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nEnable/Disable the cue.\n"},
  {"EnabledOff", PyvtkPVComparativeAnimationCue_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nEnable/Disable the cue.\n"},
  {"UpdateXRange", PyvtkPVComparativeAnimationCue_UpdateXRange, METH_VARARGS,
   "V.UpdateXRange(int, float, float)\nC++: void UpdateXRange(int y, double minx, double maxx)\nV.UpdateXRange(int, [float, ...], [float, ...], int)\nC++: void UpdateXRange(int y, double *minx, double *maxx,\n    unsigned int numvalues)\n\nMethods use to fill up the values for the parameter over the\ncomparative grid. These are order dependent methods i.e. the\nresult of calling UpdateXRange() and then UpdateYRange() are\ndifferent from calling UpdateYRange() and then UpdateXRange().\nThese methods are convenience methods when the value can only be\na single value.\n"},
  {"UpdateYRange", PyvtkPVComparativeAnimationCue_UpdateYRange, METH_VARARGS,
   "V.UpdateYRange(int, float, float)\nC++: void UpdateYRange(int x, double miny, double maxy)\nV.UpdateYRange(int, [float, ...], [float, ...], int)\nC++: void UpdateYRange(int x, double *minx, double *maxx,\n    unsigned int numvalues)\n\n"},
  {"UpdateWholeRange", PyvtkPVComparativeAnimationCue_UpdateWholeRange, METH_VARARGS,
   "V.UpdateWholeRange(float, float)\nC++: void UpdateWholeRange(double mint, double maxt)\nV.UpdateWholeRange([float, ...], [float, ...], int)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues)\nV.UpdateWholeRange([float, ...], [float, ...], int, bool)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues, bool vertical_first)\n\n"},
  {"UpdateValue", PyvtkPVComparativeAnimationCue_UpdateValue, METH_VARARGS,
   "V.UpdateValue(int, int, float)\nC++: void UpdateValue(int x, int y, double value)\nV.UpdateValue(int, int, [float, ...], int)\nC++: void UpdateValue(int x, int y, double *value,\n    unsigned int numValues)\n\n"},
  {"UpdateAnimatedValue", PyvtkPVComparativeAnimationCue_UpdateAnimatedValue, METH_VARARGS,
   "V.UpdateAnimatedValue(int, int, int, int)\nC++: void UpdateAnimatedValue(int x, int y, int dx, int dy)\n\nUpdate the animated property's value based on those specified\nusing the Update.* methods. (x,y) is the location in the\ncomparative grid, while (dx, dy) are the dimensions of the\ncomparative grid.\n"},
  {"GetValue", PyvtkPVComparativeAnimationCue_GetValue, METH_VARARGS,
   "V.GetValue(int, int, int, int) -> float\nC++: double GetValue(int x, int y, int dx, int dy)\n\nComputes the value for a particular location in the comparative\ngrid. (x,y) is the location in the comparative grid, while (dx,\ndy) are the dimensions of the comparative grid.\n"},
  {"GetValues", PyvtkPVComparativeAnimationCue_GetValues, METH_VARARGS,
   "V.GetValues(int, int, int, int, int) -> (float, ...)\nC++: double *GetValues(int x, int y, int dx, int dy,\n    unsigned int &numValues)\n\nNOTE: Returned values is only valid until the next call to this\nmethod. Return value is only valid when numValues > 0.\n"},
  {"AppendCommandInfo", PyvtkPVComparativeAnimationCue_AppendCommandInfo, METH_VARARGS,
   "V.AppendCommandInfo(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *AppendCommandInfo(\n    vtkPVXMLElement *proxyElem)\n\n"},
  {"LoadCommandInfo", PyvtkPVComparativeAnimationCue_LoadCommandInfo, METH_VARARGS,
   "V.LoadCommandInfo(vtkPVXMLElement) -> int\nC++: int LoadCommandInfo(vtkPVXMLElement *proxyElement)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVComparativeAnimationCue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkPVComparativeAnimationCue", // tp_name
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
  PyvtkPVComparativeAnimationCue_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVComparativeAnimationCue_StaticNew()
{
  return vtkPVComparativeAnimationCue::New();
}

PyObject *PyvtkPVComparativeAnimationCue_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVComparativeAnimationCue_Type, PyvtkPVComparativeAnimationCue_Methods,
    "vtkPVComparativeAnimationCue",
 &PyvtkPVComparativeAnimationCue_StaticNew);

  PyTypeObject *pytype = &PyvtkPVComparativeAnimationCue_Type;

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

void PyVTKAddFile_vtkPVComparativeAnimationCue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVComparativeAnimationCue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVComparativeAnimationCue", o) != 0)
  {
    Py_DECREF(o);
  }

}

