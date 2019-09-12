// python wrapper for vtkSMPVRepresentationProxy
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
#include "vtkSMPVRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPVRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPVRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMRepresentationProxy_ClassNew
extern "C" { PyObject *PyvtkSMRepresentationProxy_ClassNew(); }
#define DECLARED_PyvtkSMRepresentationProxy_ClassNew
#endif

static const char *PyvtkSMPVRepresentationProxy_Doc =
  "vtkSMPVRepresentationProxy - representation for \"Render View\" like\nviews in ParaView.\n\n"
  "Superclass: vtkSMRepresentationProxy\n\n"
  "vtkSMPVRepresentationProxy combines surface representation and volume\n"
  "representation proxies typically used for displaying data. This class\n"
  "also takes over the selection obligations for all the internal\n"
  "representations, i.e. is disables showing of selection in all the\n"
  "internal representations, and manages it. This avoids duplicate\n"
  "execution of extract selection filter for each of the internal\n"
  "representations.\n\n"
  "vtkSMPVRepresentationProxy is used for pretty much all of the\n"
  "data-representations (i.e. representations showing input data) in the\n"
  "render views. It provides helper functions for controlling transfer\n"
  "functions, scalar coloring, etc.\n\n";


static PyObject *
PyvtkSMPVRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPVRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPVRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPVRepresentationProxy *tempr = vtkSMPVRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPVRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPVRepresentationProxy::NewInstance());

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
PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsingScalarColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsingScalarColoring() :
      op->vtkSMPVRepresentationProxy::GetUsingScalarColoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUsingScalarColoring");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = vtkSMPVRepresentationProxy::GetUsingScalarColoring(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetUsingScalarColoring(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s1(self, args);
    case 1:
      return PyvtkSMPVRepresentationProxy_GetUsingScalarColoring_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUsingScalarColoring");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetScalarColoring(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::SetScalarColoring(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetScalarColoring(temp0, temp1, temp2) :
      op->vtkSMPVRepresentationProxy::SetScalarColoring(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarColoring");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMPVRepresentationProxy::SetScalarColoring(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarColoring");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkSMPVRepresentationProxy::SetScalarColoring(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_SetScalarColoring_Methods[] = {
  {nullptr, PyvtkSMPVRepresentationProxy_SetScalarColoring_s2, METH_VARARGS,
   "@zii"},
  {nullptr, PyvtkSMPVRepresentationProxy_SetScalarColoring_s3, METH_VARARGS | METH_STATIC,
   "Vzi *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarColoring(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPVRepresentationProxy_SetScalarColoring_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMPVRepresentationProxy_SetScalarColoring_s1(self, args);
    case 4:
      return PyvtkSMPVRepresentationProxy_SetScalarColoring_s4(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarColoring");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  bool temp0 = false;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRange(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  bool temp2 = false;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRange(temp0, temp1, temp2, temp3) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRange");

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRange");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  bool temp3 = false;
  bool temp4 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRange(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_Methods[] = {
  {nullptr, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s1, METH_VARARGS,
   "@|qq"},
  {nullptr, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s2, METH_VARARGS,
   "@zi|qq"},
  {nullptr, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s3, METH_VARARGS | METH_STATIC,
   "V|qq *vtkSMProxy"},
  {nullptr, PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s4, METH_VARARGS | METH_STATIC,
   "Vzi|qq *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s1(self, args);
    case 5:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange_s4(self, args);
    case 1:
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToDataRange");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRangeOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRangeOverTime() :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRangeOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRangeOverTime(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRangeOverTime");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRangeOverTime");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToDataRangeOverTime(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s2(self, args);
    case 1:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s3(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToDataRangeOverTime");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToVisibleRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToVisibleRange(temp0) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToVisibleRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToVisibleRange(temp0, temp1, temp2) :
      op->vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToVisibleRange");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToVisibleRange");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  const char *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkSMPVRepresentationProxy::RescaleTransferFunctionToVisibleRange(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s1(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s2(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s3(self, args);
    case 4:
      return PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToVisibleRange");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetScalarBarVisibility(temp0, temp1) :
      op->vtkSMPVRepresentationProxy::SetScalarBarVisibility(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarBarVisibility");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSMPVRepresentationProxy::SetScalarBarVisibility(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_SetScalarBarVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s1(self, args);
    case 3:
      return PyvtkSMPVRepresentationProxy_SetScalarBarVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarBarVisibility");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideScalarBarIfNotNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->HideScalarBarIfNotNeeded(temp0) :
      op->vtkSMPVRepresentationProxy::HideScalarBarIfNotNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HideScalarBarIfNotNeeded");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMPVRepresentationProxy::HideScalarBarIfNotNeeded(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HideScalarBarIfNotNeeded");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarBarVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsScalarBarVisible(temp0) :
      op->vtkSMPVRepresentationProxy::IsScalarBarVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsScalarBarVisible");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMPVRepresentationProxy::IsScalarBarVisible(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_IsScalarBarVisible(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_IsScalarBarVisible_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsScalarBarVisible");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformationForColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformationForColorArray() :
      op->vtkSMPVRepresentationProxy::GetArrayInformationForColorArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetArrayInformationForColorArray");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    vtkPVArrayInformation *tempr = vtkSMPVRepresentationProxy::GetArrayInformationForColorArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s1(self, args);
    case 1:
      return PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArrayInformationForColorArray");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentValuesInformationForColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  double temp0 = 1e-6;
  double temp1 = 1e-3;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPVProminentValuesInformation *tempr = (ap.IsBound() ?
      op->GetProminentValuesInformationForColorArray(temp0, temp1, temp2) :
      op->vtkSMPVRepresentationProxy::GetProminentValuesInformationForColorArray(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProminentValuesInformationForColorArray");

  vtkSMProxy *temp0 = nullptr;
  double temp1 = 1e-6;
  double temp2 = 1e-3;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPVProminentValuesInformation *tempr = vtkSMPVRepresentationProxy::GetProminentValuesInformationForColorArray(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_Methods[] = {
  {nullptr, PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s1, METH_VARARGS,
   "@|ddq"},
  {nullptr, PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s2, METH_VARARGS | METH_STATIC,
   "V|ddq *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s1(self, args);
    case 4:
      return PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray_s2(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProminentValuesInformationForColorArray");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_GetEstimatedNumberOfAnnotationsOnScalarBar_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedNumberOfAnnotationsOnScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    int tempr = (ap.IsBound() ?
      op->GetEstimatedNumberOfAnnotationsOnScalarBar(temp0) :
      op->vtkSMPVRepresentationProxy::GetEstimatedNumberOfAnnotationsOnScalarBar(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetEstimatedNumberOfAnnotationsOnScalarBar_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEstimatedNumberOfAnnotationsOnScalarBar");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    int tempr = vtkSMPVRepresentationProxy::GetEstimatedNumberOfAnnotationsOnScalarBar(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPVRepresentationProxy_GetEstimatedNumberOfAnnotationsOnScalarBar(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMPVRepresentationProxy_GetEstimatedNumberOfAnnotationsOnScalarBar_s1(self, args);
    case 2:
      return PyvtkSMPVRepresentationProxy_GetEstimatedNumberOfAnnotationsOnScalarBar_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEstimatedNumberOfAnnotationsOnScalarBar");
  return nullptr;
}



static PyObject *
PyvtkSMPVRepresentationProxy_SetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetRepresentationType(temp0) :
      op->vtkSMPVRepresentationProxy::SetRepresentationType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPVRepresentationProxy_GetVolumeIndependentRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeIndependentRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPVRepresentationProxy *op = static_cast<vtkSMPVRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVolumeIndependentRanges() :
      op->vtkSMPVRepresentationProxy::GetVolumeIndependentRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPVRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMPVRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPVRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPVRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPVRepresentationProxy\nC++: static vtkSMPVRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPVRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPVRepresentationProxy\nC++: vtkSMPVRepresentationProxy *NewInstance()\n\n"},
  {"GetUsingScalarColoring", PyvtkSMPVRepresentationProxy_GetUsingScalarColoring, METH_VARARGS,
   "V.GetUsingScalarColoring() -> bool\nC++: virtual bool GetUsingScalarColoring()\nV.GetUsingScalarColoring(vtkSMProxy) -> bool\nC++: static bool GetUsingScalarColoring(vtkSMProxy *proxy)\n\nReturns true if scalar coloring is enabled. This checks whether a\nproperty named \"ColorArrayName\" exists and has a non-empty\nstring. This does not check for the validity of the array.\n"},
  {"SetScalarColoring", PyvtkSMPVRepresentationProxy_SetScalarColoring, METH_VARARGS,
   "V.SetScalarColoring(string, int) -> bool\nC++: virtual bool SetScalarColoring(const char *arrayname,\n    int attribute_type)\nV.SetScalarColoring(string, int, int) -> bool\nC++: virtual bool SetScalarColoring(const char *arrayname,\n    int attribute_type, int component)\nV.SetScalarColoring(vtkSMProxy, string, int) -> bool\nC++: static bool SetScalarColoring(vtkSMProxy *proxy,\n    const char *arrayname, int attribute_type)\nV.SetScalarColoring(vtkSMProxy, string, int, int) -> bool\nC++: static bool SetScalarColoring(vtkSMProxy *proxy,\n    const char *arrayname, int attribute_type, int component)\n\nEnable/disable scalar coloring using the specified array. This\nwill set up a color and opacity transfer functions using\nvtkSMTransferFunctionProxy instance. If arrayname is NULL, then\nscalar coloring is turned off.attribute_type must be one of\nvtkDataObject::AttributeTypes.\n"},
  {"RescaleTransferFunctionToDataRange", PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRange, METH_VARARGS,
   "V.RescaleTransferFunctionToDataRange(bool, bool) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRange(\n    bool extend=false, bool force=true)\nV.RescaleTransferFunctionToDataRange(string, int, bool, bool)\n    -> bool\nC++: virtual bool RescaleTransferFunctionToDataRange(\n    const char *arrayname, int attribute_type, bool extend=false,\n    bool force=true)\nV.RescaleTransferFunctionToDataRange(vtkSMProxy, bool, bool)\n    -> bool\nC++: static bool RescaleTransferFunctionToDataRange(\n    vtkSMProxy *proxy, bool extend=false, bool force=true)\nV.RescaleTransferFunctionToDataRange(vtkSMProxy, string, int,\n    bool, bool) -> bool\nC++: static bool RescaleTransferFunctionToDataRange(\n    vtkSMProxy *proxy, const char *arrayname, int attribute_type,\n    bool extend=false, bool force=true)\n\nRescales the color transfer function and opacity transfer\nfunction using the current data range. Returns true if rescale\nwas successful. If extend is true (false by default), the\ntransfer function range will only be extended as needed to fit\nthe data range. If force is false (true by default), then the\ntransfer function range is not changed if locked.\n@param[in] extend Extend existing range instead of clamping to\n    the new\nrange (default: false).\n@param[in] force Update transfer function even if the range is\n    locked\n(default: true).\n"},
  {"RescaleTransferFunctionToDataRangeOverTime", PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToDataRangeOverTime, METH_VARARGS,
   "V.RescaleTransferFunctionToDataRangeOverTime() -> bool\nC++: virtual bool RescaleTransferFunctionToDataRangeOverTime()\nV.RescaleTransferFunctionToDataRangeOverTime(string, int) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRangeOverTime(\n    const char *arrayname, int attribute_type)\nV.RescaleTransferFunctionToDataRangeOverTime(vtkSMProxy) -> bool\nC++: static bool RescaleTransferFunctionToDataRangeOverTime(\n    vtkSMProxy *proxy)\nV.RescaleTransferFunctionToDataRangeOverTime(vtkSMProxy, string,\n    int) -> bool\nC++: static bool RescaleTransferFunctionToDataRangeOverTime(\n    vtkSMProxy *proxy, const char *arrayname, int attribute_type)\n\nRescales the color transfer function and opacity transfer\nfunction using the current data range over time. Returns true if\nrescale was successful.\n"},
  {"RescaleTransferFunctionToVisibleRange", PyvtkSMPVRepresentationProxy_RescaleTransferFunctionToVisibleRange, METH_VARARGS,
   "V.RescaleTransferFunctionToVisibleRange(vtkSMProxy) -> bool\nC++: virtual bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *view)\nV.RescaleTransferFunctionToVisibleRange(vtkSMProxy, string, int)\n    -> bool\nC++: virtual bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *view, const char *arrayname, int attribute_type)\nV.RescaleTransferFunctionToVisibleRange(vtkSMProxy, vtkSMProxy)\n    -> bool\nC++: static bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *proxy, vtkSMProxy *view)\nV.RescaleTransferFunctionToVisibleRange(vtkSMProxy, vtkSMProxy,\n    string, int) -> bool\nC++: static bool RescaleTransferFunctionToVisibleRange(\n    vtkSMProxy *proxy, vtkSMProxy *view, const char *arrayname,\n    int attribute_type)\n\nRescales the color transfer function and the opacity transfer\nfunction using the current data range, limited to the currernt\nvisible elements.\n"},
  {"SetScalarBarVisibility", PyvtkSMPVRepresentationProxy_SetScalarBarVisibility, METH_VARARGS,
   "V.SetScalarBarVisibility(vtkSMProxy, bool) -> bool\nC++: virtual bool SetScalarBarVisibility(vtkSMProxy *view,\n    bool visible)\nV.SetScalarBarVisibility(vtkSMProxy, vtkSMProxy, bool) -> bool\nC++: static bool SetScalarBarVisibility(vtkSMProxy *proxy,\n    vtkSMProxy *view, bool visible)\n\nSet the scalar bar visibility. This will create a new scalar bar\nas needed. Scalar bar is only shown if scalar coloring is indeed\nbeing used.\n"},
  {"HideScalarBarIfNotNeeded", PyvtkSMPVRepresentationProxy_HideScalarBarIfNotNeeded, METH_VARARGS,
   "V.HideScalarBarIfNotNeeded(vtkSMProxy) -> bool\nC++: virtual bool HideScalarBarIfNotNeeded(vtkSMProxy *view)\nV.HideScalarBarIfNotNeeded(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool HideScalarBarIfNotNeeded(vtkSMProxy *repr,\n    vtkSMProxy *view)\n\nWhile SetScalarBarVisibility can be used to hide a scalar bar, it\nwill always simply hide the scalar bar even if its being used by\nsome other representation. Use this method instead to only hide\nthe scalar/color bar if no other visible representation in the\nview is mapping data using the scalar bar.\n"},
  {"IsScalarBarVisible", PyvtkSMPVRepresentationProxy_IsScalarBarVisible, METH_VARARGS,
   "V.IsScalarBarVisible(vtkSMProxy) -> bool\nC++: virtual bool IsScalarBarVisible(vtkSMProxy *view)\nV.IsScalarBarVisible(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool IsScalarBarVisible(vtkSMProxy *repr,\n    vtkSMProxy *view)\n\nCheck scalar bar visibility.  Return true if the scalar bar for\nthis representation and view is visible, return false otherwise.\n"},
  {"GetArrayInformationForColorArray", PyvtkSMPVRepresentationProxy_GetArrayInformationForColorArray, METH_VARARGS,
   "V.GetArrayInformationForColorArray() -> vtkPVArrayInformation\nC++: virtual vtkPVArrayInformation *GetArrayInformationForColorArray(\n    )\nV.GetArrayInformationForColorArray(vtkSMProxy)\n    -> vtkPVArrayInformation\nC++: static vtkPVArrayInformation *GetArrayInformationForColorArray(\n    vtkSMProxy *proxy)\n\nReturns the array information for the data array used for scalar\ncoloring, if any. Otherwise returns NULL.\n"},
  {"GetProminentValuesInformationForColorArray", PyvtkSMPVRepresentationProxy_GetProminentValuesInformationForColorArray, METH_VARARGS,
   "V.GetProminentValuesInformationForColorArray(float, float, bool)\n    -> vtkPVProminentValuesInformation\nC++: virtual vtkPVProminentValuesInformation *GetProminentValuesInformationForColorArray(\n    double uncertaintyAllowed=1e-6, double fraction=1e-3,\n    bool force=false)\nV.GetProminentValuesInformationForColorArray(vtkSMProxy, float,\n    float, bool) -> vtkPVProminentValuesInformation\nC++: static vtkPVProminentValuesInformation *GetProminentValuesInformationForColorArray(\n    vtkSMProxy *proxy, double uncertaintyAllowed=1e-6,\n    double fraction=1e-3, bool force=false)\n\nCall vtkSMRepresentationProxy::GetProminentValuesInformation()\nfor the array used for scalar color, if any. Otherwise returns\nNULL.\n"},
  {"GetEstimatedNumberOfAnnotationsOnScalarBar", PyvtkSMPVRepresentationProxy_GetEstimatedNumberOfAnnotationsOnScalarBar, METH_VARARGS,
   "V.GetEstimatedNumberOfAnnotationsOnScalarBar(vtkSMProxy) -> int\nC++: int GetEstimatedNumberOfAnnotationsOnScalarBar(\n    vtkSMProxy *view)\nV.GetEstimatedNumberOfAnnotationsOnScalarBar(vtkSMProxy,\n    vtkSMProxy) -> int\nC++: static int GetEstimatedNumberOfAnnotationsOnScalarBar(\n    vtkSMProxy *proxy, vtkSMProxy *view)\n\nGet an estimated number of annotation shown on this\nrepresentation scalar bar\n"},
  {"SetRepresentationType", PyvtkSMPVRepresentationProxy_SetRepresentationType, METH_VARARGS,
   "V.SetRepresentationType(string) -> bool\nC++: bool SetRepresentationType(const char *type) override;\n\nOverridden to ensure when picking representation types that\nrequire scalar colors, scalar coloring it setup properly.\nCurrently this is hard-coded for Volume and Slice representation\ntypes.\n"},
  {"GetVolumeIndependentRanges", PyvtkSMPVRepresentationProxy_GetVolumeIndependentRanges, METH_VARARGS,
   "V.GetVolumeIndependentRanges() -> bool\nC++: bool GetVolumeIndependentRanges()\n\nTrue if ranges have to be computed independently on component 0\nfor the color and 1 for the opacity on the Volume representation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPVRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMPVRepresentationProxy", // tp_name
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
  PyvtkSMPVRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPVRepresentationProxy_StaticNew()
{
  return vtkSMPVRepresentationProxy::New();
}

PyObject *PyvtkSMPVRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPVRepresentationProxy_Type, PyvtkSMPVRepresentationProxy_Methods,
    "vtkSMPVRepresentationProxy",
 &PyvtkSMPVRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPVRepresentationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRepresentationProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPVRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPVRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPVRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

