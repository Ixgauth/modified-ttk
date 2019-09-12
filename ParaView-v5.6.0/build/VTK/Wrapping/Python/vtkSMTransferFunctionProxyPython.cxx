// python wrapper for vtkSMTransferFunctionProxy
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
#include "vtkSMTransferFunctionProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTransferFunctionProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTransferFunctionProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMTransferFunctionProxy_Doc =
  "vtkSMTransferFunctionProxy - vtkSMTransferFunctionProxy is the proxy\nused for \"PVLookupTable\", \"ColorTransferFunction\" and\n\"PiecewiseFunction\".\n\n"
  "Superclass: vtkSMProxy\n\n"
  "It provides utility API to update lookup-table ranges, invert\n"
  "transfer function, etc. that can be used from C++ as well as Python\n"
  "layers.\n\n";


static PyObject *
PyvtkSMTransferFunctionProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTransferFunctionProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTransferFunctionProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTransferFunctionProxy *tempr = vtkSMTransferFunctionProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTransferFunctionProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTransferFunctionProxy::NewInstance());

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
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunction(temp0, temp1) :
      op->vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  double temp0;
  double temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunction(temp0, temp1, temp2) :
      op->vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunction");

  vtkSMProxy *temp0 = nullptr;
  double temp1;
  double temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunction");

  vtkSMProxy *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSMTransferFunctionProxy::RescaleTransferFunction(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_RescaleTransferFunction_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s1, METH_VARARGS,
   "@P|q *d"},
  {nullptr, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s2, METH_VARARGS,
   "@dd|q"},
  {nullptr, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s3, METH_VARARGS | METH_STATIC,
   "Vdd|q *vtkSMProxy"},
  {nullptr, PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s4, METH_VARARGS | METH_STATIC,
   "VP|q *vtkSMProxy *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunction(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_RescaleTransferFunction_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s1(self, args);
    case 4:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunction_s3(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunction");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescaleTransferFunctionToDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->RescaleTransferFunctionToDataRange(temp0) :
      op->vtkSMTransferFunctionProxy::RescaleTransferFunctionToDataRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RescaleTransferFunctionToDataRange");

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = vtkSMTransferFunctionProxy::RescaleTransferFunctionToDataRange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s1, METH_VARARGS,
   "@|q"},
  {nullptr, PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s2, METH_VARARGS | METH_STATIC,
   "V|q *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RescaleTransferFunctionToDataRange");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_InvertTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InvertTransferFunction() :
      op->vtkSMTransferFunctionProxy::InvertTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_InvertTransferFunction_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InvertTransferFunction");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = vtkSMTransferFunctionProxy::InvertTransferFunction(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_InvertTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMTransferFunctionProxy_InvertTransferFunction_s1(self, args);
    case 1:
      return PyvtkSMTransferFunctionProxy_InvertTransferFunction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InvertTransferFunction");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapControlPointsToLogSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->MapControlPointsToLogSpace(temp0) :
      op->vtkSMTransferFunctionProxy::MapControlPointsToLogSpace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapControlPointsToLogSpace");

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = vtkSMTransferFunctionProxy::MapControlPointsToLogSpace(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s1, METH_VARARGS,
   "@|q"},
  {nullptr, PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s2, METH_VARARGS | METH_STATIC,
   "V|q *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapControlPointsToLogSpace");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapControlPointsToLinearSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MapControlPointsToLinearSpace() :
      op->vtkSMTransferFunctionProxy::MapControlPointsToLinearSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapControlPointsToLinearSpace");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = vtkSMTransferFunctionProxy::MapControlPointsToLinearSpace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s1(self, args);
    case 1:
      return PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapControlPointsToLinearSpace");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ApplyPreset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->ApplyPreset(temp0, temp1) :
      op->vtkSMTransferFunctionProxy::ApplyPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyPreset_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyPreset");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSMTransferFunctionProxy::ApplyPreset(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_ApplyPreset_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_ApplyPreset_s1, METH_VARARGS,
   "@z|q"},
  {nullptr, PyvtkSMTransferFunctionProxy_ApplyPreset_s2, METH_VARARGS | METH_STATIC,
   "Vz|q *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyPreset(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_ApplyPreset_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_ApplyPreset_s1(self, args);
    case 3:
      return PyvtkSMTransferFunctionProxy_ApplyPreset_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ApplyPreset");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ApplyColorMap(temp0) :
      op->vtkSMTransferFunctionProxy::ApplyColorMap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->ApplyColorMap(temp0) :
      op->vtkSMTransferFunctionProxy::ApplyColorMap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyColorMap");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSMTransferFunctionProxy::ApplyColorMap(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyColorMap");

  vtkSMProxy *temp0 = nullptr;
  vtkPVXMLElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
  {
    bool tempr = vtkSMTransferFunctionProxy::ApplyColorMap(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_ApplyColorMap_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_ApplyColorMap_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMTransferFunctionProxy_ApplyColorMap_s2, METH_VARARGS,
   "@V *vtkPVXMLElement"},
  {nullptr, PyvtkSMTransferFunctionProxy_ApplyColorMap_s3, METH_VARARGS | METH_STATIC,
   "Vz *vtkSMProxy"},
  {nullptr, PyvtkSMTransferFunctionProxy_ApplyColorMap_s4, METH_VARARGS | METH_STATIC,
   "VV *vtkSMProxy *vtkPVXMLElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_ApplyColorMap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_ApplyColorMap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ApplyColorMap");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_SaveColorMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = (ap.IsBound() ?
      op->SaveColorMap(temp0) :
      op->vtkSMTransferFunctionProxy::SaveColorMap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_SaveColorMap_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SaveColorMap");

  vtkSMProxy *temp0 = nullptr;
  vtkPVXMLElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
  {
    bool tempr = vtkSMTransferFunctionProxy::SaveColorMap(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_SaveColorMap(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_SaveColorMap_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_SaveColorMap_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveColorMap");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarBarVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsScalarBarVisible(temp0) :
      op->vtkSMTransferFunctionProxy::IsScalarBarVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsScalarBarVisible");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMTransferFunctionProxy::IsScalarBarVisible(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_IsScalarBarVisible(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_IsScalarBarVisible_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsScalarBarVisible");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindScalarBarRepresentation(temp0) :
      op->vtkSMTransferFunctionProxy::FindScalarBarRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindScalarBarRepresentation");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    vtkSMProxy *tempr = vtkSMTransferFunctionProxy::FindScalarBarRepresentation(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindScalarBarRepresentation");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarBarsComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateScalarBarsComponentTitle(temp0) :
      op->vtkSMTransferFunctionProxy::UpdateScalarBarsComponentTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateScalarBarsComponentTitle");

  vtkSMProxy *temp0 = nullptr;
  vtkPVArrayInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVArrayInformation"))
  {
    bool tempr = vtkSMTransferFunctionProxy::UpdateScalarBarsComponentTitle(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateScalarBarsComponentTitle");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ComputeDataRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->ComputeDataRange(temp0) :
      op->vtkSMTransferFunctionProxy::ComputeDataRange(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ComputeDataRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeDataRange");

  vtkSMProxy *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = vtkSMTransferFunctionProxy::ComputeDataRange(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ComputeDataRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_ComputeDataRange_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_ComputeDataRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeDataRange");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAvailableAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->ComputeAvailableAnnotations(temp0) :
      op->vtkSMTransferFunctionProxy::ComputeAvailableAnnotations(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeAvailableAnnotations");

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = vtkSMTransferFunctionProxy::ComputeAvailableAnnotations(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_s1, METH_VARARGS,
   "@|q"},
  {nullptr, PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_s2, METH_VARARGS | METH_STATIC,
   "V|q *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeAvailableAnnotations");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResetPropertiesToDefaults(temp0, temp1);
    }
    else
    {
      op->vtkSMTransferFunctionProxy::ResetPropertiesToDefaults(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ResetPropertiesToDefaults");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkSMTransferFunctionProxy::ResetPropertiesToDefaults(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_Methods[] = {
  {nullptr, PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_s1, METH_VARARGS,
   "@zq"},
  {nullptr, PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_s2, METH_VARARGS | METH_STATIC,
   "Vz|q *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ResetPropertiesToDefaults");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ResetRescaleModeToGlobalSetting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetRescaleModeToGlobalSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetRescaleModeToGlobalSetting();
    }
    else
    {
      op->vtkSMTransferFunctionProxy::ResetRescaleModeToGlobalSetting();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_ConvertLegacyColorMapsToJSON(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertLegacyColorMapsToJSON");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSMTransferFunctionProxy::ConvertLegacyColorMapsToJSON(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionProxy_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetRange(temp0) :
      op->vtkSMTransferFunctionProxy::GetRange(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_GetRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRange");

  vtkSMProxy *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = vtkSMTransferFunctionProxy::GetRange(temp0, temp1);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMTransferFunctionProxy_GetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMTransferFunctionProxy_GetRange_s1(self, args);
    case 2:
      return PyvtkSMTransferFunctionProxy_GetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return nullptr;
}



static PyObject *
PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionProxy *op = static_cast<vtkSMTransferFunctionProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetPropertiesToXMLDefaults();
    }
    else
    {
      op->vtkSMTransferFunctionProxy::ResetPropertiesToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMTransferFunctionProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTransferFunctionProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTransferFunctionProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTransferFunctionProxy\nC++: static vtkSMTransferFunctionProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTransferFunctionProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTransferFunctionProxy\nC++: vtkSMTransferFunctionProxy *NewInstance()\n\n"},
  {"RescaleTransferFunction", PyvtkSMTransferFunctionProxy_RescaleTransferFunction, METH_VARARGS,
   "V.RescaleTransferFunction((float, float), bool) -> bool\nC++: virtual bool RescaleTransferFunction(const double range[2],\n    bool extend=false)\nV.RescaleTransferFunction(float, float, bool) -> bool\nC++: virtual bool RescaleTransferFunction(double rangeMin,\n    double rangeMax, bool extend=false)\nV.RescaleTransferFunction(vtkSMProxy, float, float, bool) -> bool\nC++: static bool RescaleTransferFunction(vtkSMProxy *proxy,\n    double rangeMin, double rangeMax, bool extend=false)\nV.RescaleTransferFunction(vtkSMProxy, (float, float), bool)\n    -> bool\nC++: static bool RescaleTransferFunction(vtkSMProxy *proxy,\n    const double range[2], bool extend=false)\n\nRescale the \"RGBPoints\" for the transfer function to match the\nnew range. Returns true if rescale was successful. If extend is\ntrue (false by default), the transfer function range will only be\nextended as needed to fit the data range.\n"},
  {"RescaleTransferFunctionToDataRange", PyvtkSMTransferFunctionProxy_RescaleTransferFunctionToDataRange, METH_VARARGS,
   "V.RescaleTransferFunctionToDataRange(bool) -> bool\nC++: virtual bool RescaleTransferFunctionToDataRange(\n    bool extend=false)\nV.RescaleTransferFunctionToDataRange(vtkSMProxy, bool) -> bool\nC++: static bool RescaleTransferFunctionToDataRange(\n    vtkSMProxy *proxy, bool extend=false)\n\nLocates all representations that are currently using this\ntransfer function and then rescales the transfer function scalar\nrange to exactly match the combined valid scalar ranges obtained\nfrom them all.\n"},
  {"InvertTransferFunction", PyvtkSMTransferFunctionProxy_InvertTransferFunction, METH_VARARGS,
   "V.InvertTransferFunction() -> bool\nC++: virtual bool InvertTransferFunction()\nV.InvertTransferFunction(vtkSMProxy) -> bool\nC++: static bool InvertTransferFunction(vtkSMProxy *)\n\nInvert the transfer function. Returns true if successful.\n"},
  {"MapControlPointsToLogSpace", PyvtkSMTransferFunctionProxy_MapControlPointsToLogSpace, METH_VARARGS,
   "V.MapControlPointsToLogSpace(bool) -> bool\nC++: virtual bool MapControlPointsToLogSpace(bool inverse=false)\nV.MapControlPointsToLogSpace(vtkSMProxy, bool) -> bool\nC++: static bool MapControlPointsToLogSpace(vtkSMProxy *proxy,\n    bool inverse=false)\n\nRemaps control points by normalizing in linear-space and then\ninterpolating in log-space. This is useful when converting the\ntransfer function from linear- to log-mode. If inverse is true,\nthe operation is reversed i.e. the control points are normalized\nin log-space and interpolated in linear-space, useful when\nconverting from log- to linear-mode.\n"},
  {"MapControlPointsToLinearSpace", PyvtkSMTransferFunctionProxy_MapControlPointsToLinearSpace, METH_VARARGS,
   "V.MapControlPointsToLinearSpace() -> bool\nC++: virtual bool MapControlPointsToLinearSpace()\nV.MapControlPointsToLinearSpace(vtkSMProxy) -> bool\nC++: static bool MapControlPointsToLinearSpace(vtkSMProxy *proxy)\n\n"},
  {"ApplyPreset", PyvtkSMTransferFunctionProxy_ApplyPreset, METH_VARARGS,
   "V.ApplyPreset(string, bool) -> bool\nC++: virtual bool ApplyPreset(const char *presetname,\n    bool rescale=true)\nV.ApplyPreset(vtkSMProxy, string, bool) -> bool\nC++: static bool ApplyPreset(vtkSMProxy *proxy,\n    const char *presetname, bool rescale=true)\n\n"},
  {"ApplyColorMap", PyvtkSMTransferFunctionProxy_ApplyColorMap, METH_VARARGS,
   "V.ApplyColorMap(string) -> bool\nC++: virtual bool ApplyColorMap(const char *text)\nV.ApplyColorMap(vtkPVXMLElement) -> bool\nC++: virtual bool ApplyColorMap(vtkPVXMLElement *xml)\nV.ApplyColorMap(vtkSMProxy, string) -> bool\nC++: static bool ApplyColorMap(vtkSMProxy *proxy,\n    const char *text)\nV.ApplyColorMap(vtkSMProxy, vtkPVXMLElement) -> bool\nC++: static bool ApplyColorMap(vtkSMProxy *proxy,\n    vtkPVXMLElement *xml)\n\nLoad a ColorMap XML. This will update a transfer function using\nthe ColorMap XML. Currently, this is only supported for color\ntransfer functions. Returns true on success.\n"},
  {"SaveColorMap", PyvtkSMTransferFunctionProxy_SaveColorMap, METH_VARARGS,
   "V.SaveColorMap(vtkPVXMLElement) -> bool\nC++: virtual bool SaveColorMap(vtkPVXMLElement *xml)\nV.SaveColorMap(vtkSMProxy, vtkPVXMLElement) -> bool\nC++: static bool SaveColorMap(vtkSMProxy *proxy,\n    vtkPVXMLElement *xml)\n\nSave to ColorMap XML. Currently, this is only supported for color\ntransfer functions. Returns true on success.\n"},
  {"IsScalarBarVisible", PyvtkSMTransferFunctionProxy_IsScalarBarVisible, METH_VARARGS,
   "V.IsScalarBarVisible(vtkSMProxy) -> bool\nC++: virtual bool IsScalarBarVisible(vtkSMProxy *view)\nV.IsScalarBarVisible(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool IsScalarBarVisible(vtkSMProxy *proxy,\n    vtkSMProxy *view)\n\nReturn true if the representation corresponding to the transfer\nfunction for the view is showing a Scalar-Bar (Color Legend). \nOtherwise return false.\n"},
  {"FindScalarBarRepresentation", PyvtkSMTransferFunctionProxy_FindScalarBarRepresentation, METH_VARARGS,
   "V.FindScalarBarRepresentation(vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindScalarBarRepresentation(\n    vtkSMProxy *view)\nV.FindScalarBarRepresentation(vtkSMProxy, vtkSMProxy)\n    -> vtkSMProxy\nC++: static vtkSMProxy *FindScalarBarRepresentation(\n    vtkSMProxy *proxy, vtkSMProxy *view)\n\nFind and return the Scalar-Bar (Color Legend) representation\ncorresponding to the transfer function for the view, if any. This\nreturns the proxy if one exists, it won't create a new one.\n"},
  {"UpdateScalarBarsComponentTitle", PyvtkSMTransferFunctionProxy_UpdateScalarBarsComponentTitle, METH_VARARGS,
   "V.UpdateScalarBarsComponentTitle(vtkPVArrayInformation) -> bool\nC++: virtual bool UpdateScalarBarsComponentTitle(\n    vtkPVArrayInformation *arrayInfo)\nV.UpdateScalarBarsComponentTitle(vtkSMProxy,\n    vtkPVArrayInformation) -> bool\nC++: static bool UpdateScalarBarsComponentTitle(vtkSMProxy *proxy,\n     vtkPVArrayInformation *arrayInfo)\n\nUpdate component titles for all scalar bars connected to this\ntransfer function proxy. The arrayInfo is used to determine\ncomponent names, if possible.\n"},
  {"ComputeDataRange", PyvtkSMTransferFunctionProxy_ComputeDataRange, METH_VARARGS,
   "V.ComputeDataRange([float, float]) -> bool\nC++: virtual bool ComputeDataRange(double range[2])\nV.ComputeDataRange(vtkSMProxy, [float, float]) -> bool\nC++: static bool ComputeDataRange(vtkSMProxy *proxy,\n    double range[2])\n\nHelper method used by RescaleTransferFunctionToDataRange() to\ncompute range from all visible representations using the transfer\nfunction. Returns true if a valid range was determined.\n"},
  {"ComputeAvailableAnnotations", PyvtkSMTransferFunctionProxy_ComputeAvailableAnnotations, METH_VARARGS,
   "V.ComputeAvailableAnnotations(bool) -> bool\nC++: virtual bool ComputeAvailableAnnotations(bool extend=false)\nV.ComputeAvailableAnnotations(vtkSMProxy, bool) -> bool\nC++: static bool ComputeAvailableAnnotations(vtkSMProxy *proxy,\n    bool extend=false)\n\n"},
  {"ResetPropertiesToDefaults", PyvtkSMTransferFunctionProxy_ResetPropertiesToDefaults, METH_VARARGS,
   "V.ResetPropertiesToDefaults(string, bool)\nC++: virtual void ResetPropertiesToDefaults(const char *arrayName,\n     bool preserve_range)\nV.ResetPropertiesToDefaults(vtkSMProxy, string, bool)\nC++: static void ResetPropertiesToDefaults(vtkSMProxy *proxy,\n    const char *arrayName, bool preserve_range=false)\n\nHelper method to reset a transfer function proxy to its defaults.\nBy passing in preserve_range, you can make this method preserve\nthe current transfer function range.\n"},
  {"ResetRescaleModeToGlobalSetting", PyvtkSMTransferFunctionProxy_ResetRescaleModeToGlobalSetting, METH_VARARGS,
   "V.ResetRescaleModeToGlobalSetting()\nC++: void ResetRescaleModeToGlobalSetting()\n\nReset the transfer function's AutomaticRescaleResetMode to the\nglobal TransferFunctionRresetMode setting.\n"},
  {"ConvertLegacyColorMapsToJSON", PyvtkSMTransferFunctionProxy_ConvertLegacyColorMapsToJSON, METH_VARARGS,
   "V.ConvertLegacyColorMapsToJSON(string, string) -> bool\nC++: static bool ConvertLegacyColorMapsToJSON(\n    const char *inxmlfile, const char *outjsonfile)\n\nConverts legacy xml file to json.\n"},
  {"GetRange", PyvtkSMTransferFunctionProxy_GetRange, METH_VARARGS,
   "V.GetRange([float, float]) -> bool\nC++: virtual bool GetRange(double range[2])\nV.GetRange(vtkSMProxy, [float, float]) -> bool\nC++: static bool GetRange(vtkSMProxy *proxy, double range[2])\n\nReturns current transfer function data range. Returns false is a\nvalid range could not be determined.\n"},
  {"ResetPropertiesToXMLDefaults", PyvtkSMTransferFunctionProxy_ResetPropertiesToXMLDefaults, METH_VARARGS,
   "V.ResetPropertiesToXMLDefaults()\nC++: virtual void ResetPropertiesToXMLDefaults()\n\nUse this method to set all properties on this proxy to their\ndefault values. This iterates over all properties on this proxy,\nthus if this proxy had subproxies, this method will iterate over\nonly the exposed properties and call\nvtkSMProperty::ResetToXMLDefaults().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTransferFunctionProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMTransferFunctionProxy", // tp_name
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
  PyvtkSMTransferFunctionProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTransferFunctionProxy_StaticNew()
{
  return vtkSMTransferFunctionProxy::New();
}

PyObject *PyvtkSMTransferFunctionProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTransferFunctionProxy_Type, PyvtkSMTransferFunctionProxy_Methods,
    "vtkSMTransferFunctionProxy",
 &PyvtkSMTransferFunctionProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTransferFunctionProxy_Type;

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

void PyVTKAddFile_vtkSMTransferFunctionProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTransferFunctionProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTransferFunctionProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

