// python wrapper for vtkPVServerInformation
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
#include "vtkPVServerInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVServerInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVServerInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVServerInformation_Doc =
  "vtkPVServerInformation - Gets features of the server.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This objects is used by the client to get the features supported by\n"
  "the server. At the moment, server information is only on the root.\n\n";


static PyObject *
PyvtkPVServerInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVServerInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVServerInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVServerInformation *tempr = vtkPVServerInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVServerInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVServerInformation::NewInstance());

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
PyvtkPVServerInformation_SetRemoteRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoteRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoteRendering(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetRemoteRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetRemoteRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRemoteRendering() :
      op->vtkPVServerInformation::GetRemoteRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  vtkPVServerInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVServerInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPVServerInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVServerInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVServerInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileDimensions(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetTileDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileDimensions(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetTileDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVServerInformation_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkPVServerInformation_SetTileDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return nullptr;
}



static PyObject *
PyvtkPVServerInformation_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkPVServerInformation::GetTileDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileMullions(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetTileMullions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileMullions(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetTileMullions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVServerInformation_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVServerInformation_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkPVServerInformation_SetTileMullions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return nullptr;
}



static PyObject *
PyvtkPVServerInformation_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkPVServerInformation::GetTileMullions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetUseIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIceT(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetUseIceT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetUseIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseIceT() :
      op->vtkPVServerInformation::GetUseIceT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVServerInformation_SetOGVSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOGVSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOGVSupport(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetOGVSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVServerInformation_GetOGVSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOGVSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOGVSupport() :
      op->vtkPVServerInformation::GetOGVSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVServerInformation_SetAVISupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAVISupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAVISupport(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetAVISupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVServerInformation_GetAVISupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAVISupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAVISupport() :
      op->vtkPVServerInformation::GetAVISupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkPVServerInformation_SetNVPipeSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNVPipeSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNVPipeSupport(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetNVPipeSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetNVPipeSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNVPipeSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNVPipeSupport() :
      op->vtkPVServerInformation::GetNVPipeSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeout(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetTimeout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeout() :
      op->vtkPVServerInformation::GetTimeout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEyeSeparation(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetEyeSeparation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEyeSeparation() :
      op->vtkPVServerInformation::GetEyeSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetNumberOfMachines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMachines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfMachines(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetNumberOfMachines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetNumberOfMachines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMachines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMachines() :
      op->vtkPVServerInformation::GetNumberOfMachines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetEnvironment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnvironment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEnvironment(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetEnvironment(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetEnvironment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnvironment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEnvironment(temp0) :
      op->vtkPVServerInformation::GetEnvironment(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  const size_t size1 = 4;
  int temp1[4];
  int save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetGeometry(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetGeometry(temp0, temp1);
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
PyvtkPVServerInformation_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry(temp0) :
      op->vtkPVServerInformation::GetGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFullScreen(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetFullScreen(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFullScreen(temp0) :
      op->vtkPVServerInformation::GetFullScreen(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetShowBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShowBorders(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetShowBorders(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetShowBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowBorders(temp0) :
      op->vtkPVServerInformation::GetShowBorders(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoType(temp0) :
      op->vtkPVServerInformation::GetStereoType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStereoType(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetStereoType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetLowerLeft(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetLowerLeft(temp0, temp1);
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
PyvtkPVServerInformation_GetLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLowerLeft(temp0) :
      op->vtkPVServerInformation::GetLowerLeft(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetLowerRight(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetLowerRight(temp0, temp1);
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
PyvtkPVServerInformation_GetLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLowerRight(temp0) :
      op->vtkPVServerInformation::GetLowerRight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetUpperRight(temp0, temp1);
    }
    else
    {
      op->vtkPVServerInformation::SetUpperRight(temp0, temp1);
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
PyvtkPVServerInformation_GetUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUpperRight(temp0) :
      op->vtkPVServerInformation::GetUpperRight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkPVServerInformation::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized() :
      op->vtkPVServerInformation::IsMPIInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetMultiClientsEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiClientsEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiClientsEnable() :
      op->vtkPVServerInformation::GetMultiClientsEnable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetClientId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClientId() :
      op->vtkPVServerInformation::GetClientId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_SetIdTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdTypeSize(temp0);
    }
    else
    {
      op->vtkPVServerInformation::SetIdTypeSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerInformation_GetIdTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerInformation *op = static_cast<vtkPVServerInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIdTypeSize() :
      op->vtkPVServerInformation::GetIdTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVServerInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVServerInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVServerInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVServerInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVServerInformation\nC++: static vtkPVServerInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVServerInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVServerInformation\nC++: vtkPVServerInformation *NewInstance()\n\n"},
  {"SetRemoteRendering", PyvtkPVServerInformation_SetRemoteRendering, METH_VARARGS,
   "V.SetRemoteRendering(int)\nC++: virtual void SetRemoteRendering(int _arg)\n\nThis flag indicates whether the server can render remotely. If it\nis off, all rendering has to be on the client. This is only off\nwhen the user starts the server with the --disable-composite\ncommand line option.\n"},
  {"GetRemoteRendering", PyvtkPVServerInformation_GetRemoteRendering, METH_VARARGS,
   "V.GetRemoteRendering() -> int\nC++: virtual int GetRemoteRendering()\n\nThis flag indicates whether the server can render remotely. If it\nis off, all rendering has to be on the client. This is only off\nwhen the user starts the server with the --disable-composite\ncommand line option.\n"},
  {"DeepCopy", PyvtkPVServerInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPVServerInformation)\nC++: void DeepCopy(vtkPVServerInformation *info)\n\n"},
  {"CopyFromObject", PyvtkPVServerInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVServerInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"SetTileDimensions", PyvtkPVServerInformation_SetTileDimensions, METH_VARARGS,
   "V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {"GetTileDimensions", PyvtkPVServerInformation_GetTileDimensions, METH_VARARGS,
   "V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {"SetTileMullions", PyvtkPVServerInformation_SetTileMullions, METH_VARARGS,
   "V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {"GetTileMullions", PyvtkPVServerInformation_GetTileMullions, METH_VARARGS,
   "V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {"SetUseIceT", PyvtkPVServerInformation_SetUseIceT, METH_VARARGS,
   "V.SetUseIceT(int)\nC++: virtual void SetUseIceT(int _arg)\n\nReturns 1 if IceT is available.\n"},
  {"GetUseIceT", PyvtkPVServerInformation_GetUseIceT, METH_VARARGS,
   "V.GetUseIceT() -> int\nC++: virtual int GetUseIceT()\n\nReturns 1 if IceT is available.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"SetOGVSupport", PyvtkPVServerInformation_SetOGVSupport, METH_VARARGS,
   "V.SetOGVSupport(int)\nC++: void SetOGVSupport(int)\n\nGet/Set if the server supports saving OGVs.@deprecated in\nParaView 5.5\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetOGVSupport", PyvtkPVServerInformation_GetOGVSupport, METH_VARARGS,
   "V.GetOGVSupport() -> int\nC++: int GetOGVSupport()\n\nGet/Set if the server supports saving OGVs.@deprecated in\nParaView 5.5\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetAVISupport", PyvtkPVServerInformation_SetAVISupport, METH_VARARGS,
   "V.SetAVISupport(int)\nC++: void SetAVISupport(int)\n\nGet/Set if the server supports saving AVIs.@deprecated in\nParaView 5.5\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetAVISupport", PyvtkPVServerInformation_GetAVISupport, METH_VARARGS,
   "V.GetAVISupport() -> int\nC++: int GetAVISupport()\n\nGet/Set if the server supports saving AVIs.@deprecated in\nParaView 5.5\n"},
#endif
  {"SetNVPipeSupport", PyvtkPVServerInformation_SetNVPipeSupport, METH_VARARGS,
   "V.SetNVPipeSupport(bool)\nC++: virtual void SetNVPipeSupport(bool _arg)\n\n"},
  {"GetNVPipeSupport", PyvtkPVServerInformation_GetNVPipeSupport, METH_VARARGS,
   "V.GetNVPipeSupport() -> bool\nC++: virtual bool GetNVPipeSupport()\n\n"},
  {"SetTimeout", PyvtkPVServerInformation_SetTimeout, METH_VARARGS,
   "V.SetTimeout(int)\nC++: virtual void SetTimeout(int _arg)\n\nGet/Set the time after which the server timesout.\n"},
  {"GetTimeout", PyvtkPVServerInformation_GetTimeout, METH_VARARGS,
   "V.GetTimeout() -> int\nC++: virtual int GetTimeout()\n\nGet/Set the time after which the server timesout.\n"},
  {"SetEyeSeparation", PyvtkPVServerInformation_SetEyeSeparation, METH_VARARGS,
   "V.SetEyeSeparation(float)\nC++: void SetEyeSeparation(double value)\n\nSet/Get the EyeSeparation on server\n"},
  {"GetEyeSeparation", PyvtkPVServerInformation_GetEyeSeparation, METH_VARARGS,
   "V.GetEyeSeparation() -> float\nC++: double GetEyeSeparation()\n\nSet/Get the EyeSeparation on server\n"},
  {"SetNumberOfMachines", PyvtkPVServerInformation_SetNumberOfMachines, METH_VARARGS,
   "V.SetNumberOfMachines(int)\nC++: void SetNumberOfMachines(unsigned int num)\n\nNumber of machines to use in data or render server Setting the\nnumber of machines has the side effect of wiping out any machine\nparameters previously set.\n"},
  {"GetNumberOfMachines", PyvtkPVServerInformation_GetNumberOfMachines, METH_VARARGS,
   "V.GetNumberOfMachines() -> int\nC++: unsigned int GetNumberOfMachines()\n\nNumber of machines to use in data or render server Setting the\nnumber of machines has the side effect of wiping out any machine\nparameters previously set.\n"},
  {"SetEnvironment", PyvtkPVServerInformation_SetEnvironment, METH_VARARGS,
   "V.SetEnvironment(int, string)\nC++: void SetEnvironment(unsigned int idx, const char *name)\n\nValue of DISPLAY environment variable for this cave node\n"},
  {"GetEnvironment", PyvtkPVServerInformation_GetEnvironment, METH_VARARGS,
   "V.GetEnvironment(int) -> string\nC++: const char *GetEnvironment(unsigned int idx)\n\nValue of DISPLAY environment variable for this cave node\n"},
  {"SetGeometry", PyvtkPVServerInformation_SetGeometry, METH_VARARGS,
   "V.SetGeometry(int, [int, int, int, int])\nC++: void SetGeometry(unsigned int idx, int geo[4])\n\nWindow geometry for server, specified as x, y, width, height.\nThis is only used if FullScreen is false.\n"},
  {"GetGeometry", PyvtkPVServerInformation_GetGeometry, METH_VARARGS,
   "V.GetGeometry(int) -> (int, ...)\nC++: int *GetGeometry(unsigned int idx)\n\nWindow geometry for server, specified as x, y, width, height.\nThis is only used if FullScreen is false.\n"},
  {"SetFullScreen", PyvtkPVServerInformation_SetFullScreen, METH_VARARGS,
   "V.SetFullScreen(int, bool)\nC++: void SetFullScreen(unsigned int idx, bool fullscreen)\n\nWhether to show the server window as fullscreen.\n"},
  {"GetFullScreen", PyvtkPVServerInformation_GetFullScreen, METH_VARARGS,
   "V.GetFullScreen(int) -> bool\nC++: bool GetFullScreen(unsigned int idx)\n\nWhether to show the server window as fullscreen.\n"},
  {"SetShowBorders", PyvtkPVServerInformation_SetShowBorders, METH_VARARGS,
   "V.SetShowBorders(int, bool)\nC++: void SetShowBorders(unsigned int idx, bool borders)\n\nWhether to show the server window with window decorations.\n"},
  {"GetShowBorders", PyvtkPVServerInformation_GetShowBorders, METH_VARARGS,
   "V.GetShowBorders(int) -> bool\nC++: bool GetShowBorders(unsigned int idx)\n\nWhether to show the server window with window decorations.\n"},
  {"GetStereoType", PyvtkPVServerInformation_GetStereoType, METH_VARARGS,
   "V.GetStereoType(int) -> int\nC++: int GetStereoType(unsigned int idx)\n\nGet the stereo-type specified in the pvx. -1=no-specified,\n0=no-stereo.\n"},
  {"SetStereoType", PyvtkPVServerInformation_SetStereoType, METH_VARARGS,
   "V.SetStereoType(int, int)\nC++: void SetStereoType(unsigned int idx, int type)\n\nGet the stereo-type specified in the pvx. -1=no-specified,\n0=no-stereo.\n"},
  {"SetLowerLeft", PyvtkPVServerInformation_SetLowerLeft, METH_VARARGS,
   "V.SetLowerLeft(int, [float, float, float])\nC++: void SetLowerLeft(unsigned int idx, double coord[3])\n\nCoordinates of lower left corner of this cave display\n"},
  {"GetLowerLeft", PyvtkPVServerInformation_GetLowerLeft, METH_VARARGS,
   "V.GetLowerLeft(int) -> (float, ...)\nC++: double *GetLowerLeft(unsigned int idx)\n\nCoordinates of lower left corner of this cave display\n"},
  {"SetLowerRight", PyvtkPVServerInformation_SetLowerRight, METH_VARARGS,
   "V.SetLowerRight(int, [float, float, float])\nC++: void SetLowerRight(unsigned int idx, double coord[3])\n\nCoordinates of lower right corner of this cave display\n"},
  {"GetLowerRight", PyvtkPVServerInformation_GetLowerRight, METH_VARARGS,
   "V.GetLowerRight(int) -> (float, ...)\nC++: double *GetLowerRight(unsigned int idx)\n\nCoordinates of lower right corner of this cave display\n"},
  {"SetUpperRight", PyvtkPVServerInformation_SetUpperRight, METH_VARARGS,
   "V.SetUpperRight(int, [float, float, float])\nC++: void SetUpperRight(unsigned int idx, double coord[3])\n\nCoordinates of lower left corner of this cave display\n"},
  {"GetUpperRight", PyvtkPVServerInformation_GetUpperRight, METH_VARARGS,
   "V.GetUpperRight(int) -> (float, ...)\nC++: double *GetUpperRight(unsigned int idx)\n\nCoordinates of lower left corner of this cave display\n"},
  {"GetNumberOfProcesses", PyvtkPVServerInformation_GetNumberOfProcesses, METH_VARARGS,
   "V.GetNumberOfProcesses() -> int\nC++: virtual int GetNumberOfProcesses()\n\nGet the number of processes.\n"},
  {"IsMPIInitialized", PyvtkPVServerInformation_IsMPIInitialized, METH_VARARGS,
   "V.IsMPIInitialized() -> bool\nC++: virtual bool IsMPIInitialized()\n\nReturn whether MPI is initialized or not.\n"},
  {"GetMultiClientsEnable", PyvtkPVServerInformation_GetMultiClientsEnable, METH_VARARGS,
   "V.GetMultiClientsEnable() -> int\nC++: virtual int GetMultiClientsEnable()\n\nReturn true if the server allow server client to connect to\nitself\n"},
  {"GetClientId", PyvtkPVServerInformation_GetClientId, METH_VARARGS,
   "V.GetClientId() -> int\nC++: virtual int GetClientId()\n\nGet the id that correspond to the current client\n"},
  {"SetIdTypeSize", PyvtkPVServerInformation_SetIdTypeSize, METH_VARARGS,
   "V.SetIdTypeSize(int)\nC++: virtual void SetIdTypeSize(int _arg)\n\nSet/Get vtkIdType size, which can be 32 or 64\n"},
  {"GetIdTypeSize", PyvtkPVServerInformation_GetIdTypeSize, METH_VARARGS,
   "V.GetIdTypeSize() -> int\nC++: virtual int GetIdTypeSize()\n\nSet/Get vtkIdType size, which can be 32 or 64\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVServerInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVServerInformation", // tp_name
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
  PyvtkPVServerInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVServerInformation_StaticNew()
{
  return vtkPVServerInformation::New();
}

PyObject *PyvtkPVServerInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVServerInformation_Type, PyvtkPVServerInformation_Methods,
    "vtkPVServerInformation",
 &PyvtkPVServerInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVServerInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVServerInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVServerInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVServerInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

