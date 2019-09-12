// python wrapper for vtkSMComparativeAnimationCueProxy
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
#include "vtkSMComparativeAnimationCueProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMComparativeAnimationCueProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMComparativeAnimationCueProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMComparativeAnimationCueProxy_Doc =
  "vtkSMComparativeAnimationCueProxy - cue used for parameter animation\nby the comparative view.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMComparativeAnimationCueProxy is a animation cue used for\n"
  "parameter animation by the vtkSMComparativeViewProxy. It provides a\n"
  "non-conventional API i.e. without using properties to allow the user\n"
  "to setup parameter values over the comparative grid.\n\n";


static PyObject *
PyvtkSMComparativeAnimationCueProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMComparativeAnimationCueProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMComparativeAnimationCueProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMComparativeAnimationCueProxy *tempr = vtkSMComparativeAnimationCueProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMComparativeAnimationCueProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMComparativeAnimationCueProxy::NewInstance());

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
PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateXRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateXRange(temp0, temp1, temp2, temp3);
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
PyvtkSMComparativeAnimationCueProxy_UpdateXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s1(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateXRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateXRange");
  return nullptr;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateYRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateYRange(temp0, temp1, temp2, temp3);
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
PyvtkSMComparativeAnimationCueProxy_UpdateYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s1(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateYRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateYRange");
  return nullptr;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateWholeRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateWholeRange(temp0, temp1, temp2);
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
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateWholeRange(temp0, temp1, temp2, temp3);
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
PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s1(self, args);
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s2(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateWholeRange");
  return nullptr;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateValue(temp0, temp1, temp2, temp3);
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
PyvtkSMComparativeAnimationCueProxy_UpdateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMComparativeAnimationCueProxy_UpdateValue_s1(self, args);
    case 4:
      return PyvtkSMComparativeAnimationCueProxy_UpdateValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateValue");
  return nullptr;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::GetValues(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSMComparativeAnimationCueProxy_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::GetValue(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_UpdateAnimatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnimatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

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
      op->vtkSMComparativeAnimationCueProxy::UpdateAnimatedValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMComparativeAnimationCueProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMPropertyIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMComparativeAnimationCueProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMComparativeAnimationCueProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s1(self, args);
    case 2:
      return PyvtkSMComparativeAnimationCueProxy_SaveXMLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMComparativeAnimationCueProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeAnimationCueProxy *op = static_cast<vtkSMComparativeAnimationCueProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMComparativeAnimationCueProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMComparativeAnimationCueProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMComparativeAnimationCueProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMComparativeAnimationCueProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMComparativeAnimationCueProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMComparativeAnimationCueProxy\nC++: static vtkSMComparativeAnimationCueProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMComparativeAnimationCueProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMComparativeAnimationCueProxy\nC++: vtkSMComparativeAnimationCueProxy *NewInstance()\n\n"},
  {"UpdateXRange", PyvtkSMComparativeAnimationCueProxy_UpdateXRange, METH_VARARGS,
   "V.UpdateXRange(int, float, float)\nC++: void UpdateXRange(int y, double minx, double maxx)\nV.UpdateXRange(int, [float, ...], [float, ...], int)\nC++: void UpdateXRange(int y, double *minx, double *maxx,\n    unsigned int numvalues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"UpdateYRange", PyvtkSMComparativeAnimationCueProxy_UpdateYRange, METH_VARARGS,
   "V.UpdateYRange(int, float, float)\nC++: void UpdateYRange(int x, double miny, double maxy)\nV.UpdateYRange(int, [float, ...], [float, ...], int)\nC++: void UpdateYRange(int x, double *minx, double *maxx,\n    unsigned int numvalues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"UpdateWholeRange", PyvtkSMComparativeAnimationCueProxy_UpdateWholeRange, METH_VARARGS,
   "V.UpdateWholeRange(float, float)\nC++: void UpdateWholeRange(double mint, double maxt)\nV.UpdateWholeRange([float, ...], [float, ...], int)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues)\nV.UpdateWholeRange([float, ...], [float, ...], int, bool)\nC++: void UpdateWholeRange(double *mint, double *maxt,\n    unsigned int numValues, bool vertical_first)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"UpdateValue", PyvtkSMComparativeAnimationCueProxy_UpdateValue, METH_VARARGS,
   "V.UpdateValue(int, int, float)\nC++: void UpdateValue(int x, int y, double value)\nV.UpdateValue(int, int, [float, ...], int)\nC++: void UpdateValue(int x, int y, double *value,\n    unsigned int numValues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"GetValues", PyvtkSMComparativeAnimationCueProxy_GetValues, METH_VARARGS,
   "V.GetValues(int, int, int, int, int) -> (float, ...)\nC++: double *GetValues(int x, int y, int dx, int dy,\n    unsigned int &numValues)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"GetValue", PyvtkSMComparativeAnimationCueProxy_GetValue, METH_VARARGS,
   "V.GetValue(int, int, int, int) -> float\nC++: double GetValue(int x, int y, int dx, int dy)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"UpdateAnimatedValue", PyvtkSMComparativeAnimationCueProxy_UpdateAnimatedValue, METH_VARARGS,
   "V.UpdateAnimatedValue(int, int, int, int)\nC++: void UpdateAnimatedValue(int x, int y, int dx, int dy)\n\nMethods simply forwarded to vtkPVComparativeAnimationCue. Any of\nthese methods changing the state of the proxy, also call\nthis->MarkModified(this).\n"},
  {"SaveXMLState", PyvtkSMComparativeAnimationCueProxy_SaveXMLState, METH_VARARGS,
   "V.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\n    override;\nV.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter) override;\n\nSaves the state of the proxy. This state can be reloaded to\ncreate a new proxy that is identical the present state of this\nproxy. The resulting proxy's XML hieratchy is returned, in\naddition if the root argument is not NULL then it's also inserted\nas a nested element. This call saves all a proxy's properties,\nincluding exposed properties and sub-proxies. More control is\nprovided by the following overload.\n"},
  {"LoadXMLState", PyvtkSMComparativeAnimationCueProxy_LoadXMLState, METH_VARARGS,
   "V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator) override;\n\nLoads the proxy state from the XML element. Returns 0 on\nfailure.locator is used to locate other proxies that may be\nreferred to in the state XML (which happens in case of properties\nof type vtkSMProxyProperty or subclasses). If locator is NULL,\nthen such properties are left unchanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMComparativeAnimationCueProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMComparativeAnimationCueProxy", // tp_name
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
  PyvtkSMComparativeAnimationCueProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMComparativeAnimationCueProxy_StaticNew()
{
  return vtkSMComparativeAnimationCueProxy::New();
}

PyObject *PyvtkSMComparativeAnimationCueProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMComparativeAnimationCueProxy_Type, PyvtkSMComparativeAnimationCueProxy_Methods,
    "vtkSMComparativeAnimationCueProxy",
 &PyvtkSMComparativeAnimationCueProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMComparativeAnimationCueProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMComparativeAnimationCueProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMComparativeAnimationCueProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMComparativeAnimationCueProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

