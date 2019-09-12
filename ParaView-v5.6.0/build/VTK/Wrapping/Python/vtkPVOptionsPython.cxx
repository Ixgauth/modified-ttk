// python wrapper for vtkPVOptions
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
#include "vtkPVOptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVOptions(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVOptions_ClassNew(); }

#ifndef DECLARED_PyvtkCommandOptions_ClassNew
extern "C" { PyObject *PyvtkCommandOptions_ClassNew(); }
#define DECLARED_PyvtkCommandOptions_ClassNew
#endif

static const char *PyvtkPVOptions_Doc =
  "vtkPVOptions - ParaView options storage\n\n"
  "Superclass: vtkCommandOptions\n\n"
  "An object of this class represents a storage for ParaView options\n\n"
  "These options can be retrieved during run-time, set using\n"
  "configuration file or using Command Line Arguments.\n\n";

static PyTypeObject PyvtkPVOptions_ProcessTypeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVOptions.ProcessTypeEnum", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPVOptions_ProcessTypeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVOptions_ProcessTypeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVOptions_ProcessTypeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVOptions_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVOptions::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVOptions *tempr = vtkPVOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOptions::NewInstance());

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
PyvtkPVOptions_GetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHostName() :
      op->vtkPVOptions::GetHostName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConnectID() :
      op->vtkPVOptions::GetConnectID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetUseStereoRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStereoRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseStereoRendering() :
      op->vtkPVOptions::GetUseStereoRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStereoType() :
      op->vtkPVOptions::GetStereoType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetReverseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseConnection() :
      op->vtkPVOptions::GetReverseConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetUseRenderingGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRenderingGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseRenderingGroup() :
      op->vtkPVOptions::GetUseRenderingGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkPVOptions::GetTileDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkPVOptions::GetTileMullions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetEGLDeviceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEGLDeviceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEGLDeviceIndex() :
      op->vtkPVOptions::GetEGLDeviceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVOptions_GetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOffscreenRendering() :
      op->vtkPVOptions::GetUseOffscreenRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkPVOptions_GetParaViewDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParaViewDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParaViewDataName() :
      op->vtkPVOptions::GetParaViewDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetServersFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServersFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetServersFileName() :
      op->vtkPVOptions::GetServersFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeout() :
      op->vtkPVOptions::GetTimeout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConnectID(temp0);
    }
    else
    {
      op->vtkPVOptions::SetConnectID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetLogFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogFileName(temp0);
    }
    else
    {
      op->vtkPVOptions::SetLogFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetLogFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLogFileName() :
      op->vtkPVOptions::GetLogFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

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
      op->vtkPVOptions::SetTileDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

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
      op->vtkPVOptions::SetTileDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVOptions_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkPVOptions_SetTileDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return nullptr;
}



static PyObject *
PyvtkPVOptions_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

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
      op->vtkPVOptions::SetTileMullions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

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
      op->vtkPVOptions::SetTileMullions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVOptions_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVOptions_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkPVOptions_SetTileMullions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return nullptr;
}



static PyObject *
PyvtkPVOptions_SetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOffscreenRendering(temp0);
    }
    else
    {
      op->vtkPVOptions::SetUseOffscreenRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetMultiClientMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiClientMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiClientMode() :
      op->vtkPVOptions::GetMultiClientMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_IsMultiClientModeDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMultiClientModeDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsMultiClientModeDebug() :
      op->vtkPVOptions::IsMultiClientModeDebug());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetDisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableFurtherConnections() :
      op->vtkPVOptions::GetDisableFurtherConnections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetMultiServerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiServerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiServerMode() :
      op->vtkPVOptions::GetMultiServerMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetSymmetricMPIMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetricMPIMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSymmetricMPIMode() :
      op->vtkPVOptions::GetSymmetricMPIMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetSymmetricMPIMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetricMPIMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSymmetricMPIMode(temp0);
    }
    else
    {
      op->vtkPVOptions::SetSymmetricMPIMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTellVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTellVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTellVersion() :
      op->vtkPVOptions::GetTellVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetServerURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetServerURL() :
      op->vtkPVOptions::GetServerURL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetCatalystLivePort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCatalystLivePort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCatalystLivePort() :
      op->vtkPVOptions::GetCatalystLivePort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetParaViewDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParaViewDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParaViewDataName(temp0);
    }
    else
    {
      op->vtkPVOptions::SetParaViewDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetEnableStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableStreaming() :
      op->vtkPVOptions::GetEnableStreaming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetSatelliteMessageIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSatelliteMessageIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSatelliteMessageIds(temp0);
    }
    else
    {
      op->vtkPVOptions::SetSatelliteMessageIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetSatelliteMessageIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSatelliteMessageIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSatelliteMessageIds() :
      op->vtkPVOptions::GetSatelliteMessageIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetPrintMonitors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrintMonitors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrintMonitors() :
      op->vtkPVOptions::GetPrintMonitors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTestPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTestPlugin() :
      op->vtkPVOptions::GetTestPlugin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetTestPluginPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestPluginPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTestPluginPath() :
      op->vtkPVOptions::GetTestPluginPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetEnableStackTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableStackTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableStackTrace() :
      op->vtkPVOptions::GetEnableStackTrace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetEnableStackTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableStackTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableStackTrace(temp0);
    }
    else
    {
      op->vtkPVOptions::SetEnableStackTrace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetDisableRegistry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableRegistry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableRegistry() :
      op->vtkPVOptions::GetDisableRegistry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetDisableXDisplayTests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableXDisplayTests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableXDisplayTests() :
      op->vtkPVOptions::GetDisableXDisplayTests());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetForceOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceOffscreenRendering() :
      op->vtkPVOptions::GetForceOffscreenRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetForceOnscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOnscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceOnscreenRendering() :
      op->vtkPVOptions::GetForceOnscreenRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetForceNoMPIInitOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceNoMPIInitOnClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceNoMPIInitOnClient() :
      op->vtkPVOptions::GetForceNoMPIInitOnClient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetForceNoMPIInitOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceNoMPIInitOnClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceNoMPIInitOnClient(temp0);
    }
    else
    {
      op->vtkPVOptions::SetForceNoMPIInitOnClient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_ForceNoMPIInitOnClientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceNoMPIInitOnClientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceNoMPIInitOnClientOn();
    }
    else
    {
      op->vtkPVOptions::ForceNoMPIInitOnClientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_ForceNoMPIInitOnClientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceNoMPIInitOnClientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceNoMPIInitOnClientOff();
    }
    else
    {
      op->vtkPVOptions::ForceNoMPIInitOnClientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_GetForceMPIInitOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceMPIInitOnClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceMPIInitOnClient() :
      op->vtkPVOptions::GetForceMPIInitOnClient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_SetForceMPIInitOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMPIInitOnClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceMPIInitOnClient(temp0);
    }
    else
    {
      op->vtkPVOptions::SetForceMPIInitOnClient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_ForceMPIInitOnClientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceMPIInitOnClientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceMPIInitOnClientOn();
    }
    else
    {
      op->vtkPVOptions::ForceMPIInitOnClientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOptions_ForceMPIInitOnClientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceMPIInitOnClientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOptions *op = static_cast<vtkPVOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceMPIInitOnClientOff();
    }
    else
    {
      op->vtkPVOptions::ForceMPIInitOnClientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVOptions_Methods[] = {
  {"IsTypeOf", PyvtkPVOptions_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVOptions_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVOptions_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVOptions\nC++: static vtkPVOptions *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVOptions_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVOptions\nC++: vtkPVOptions *NewInstance()\n\n"},
  {"GetHostName", PyvtkPVOptions_GetHostName, METH_VARARGS,
   "V.GetHostName() -> string\nC++: virtual char *GetHostName()\n\nConvenience method to get the local process's host name.\n"},
  {"GetConnectID", PyvtkPVOptions_GetConnectID, METH_VARARGS,
   "V.GetConnectID() -> int\nC++: virtual int GetConnectID()\n\n"},
  {"GetUseStereoRendering", PyvtkPVOptions_GetUseStereoRendering, METH_VARARGS,
   "V.GetUseStereoRendering() -> int\nC++: virtual int GetUseStereoRendering()\n\n"},
  {"GetStereoType", PyvtkPVOptions_GetStereoType, METH_VARARGS,
   "V.GetStereoType() -> string\nC++: virtual char *GetStereoType()\n\n"},
  {"GetReverseConnection", PyvtkPVOptions_GetReverseConnection, METH_VARARGS,
   "V.GetReverseConnection() -> int\nC++: virtual int GetReverseConnection()\n\n"},
  {"GetUseRenderingGroup", PyvtkPVOptions_GetUseRenderingGroup, METH_VARARGS,
   "V.GetUseRenderingGroup() -> int\nC++: virtual int GetUseRenderingGroup()\n\n"},
  {"GetTileDimensions", PyvtkPVOptions_GetTileDimensions, METH_VARARGS,
   "V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {"GetTileMullions", PyvtkPVOptions_GetTileMullions, METH_VARARGS,
   "V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {"GetEGLDeviceIndex", PyvtkPVOptions_GetEGLDeviceIndex, METH_VARARGS,
   "V.GetEGLDeviceIndex() -> int\nC++: virtual int GetEGLDeviceIndex()\n\nReturns the egl device index. -1 indicates that no value was\nspecified.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"GetUseOffscreenRendering", PyvtkPVOptions_GetUseOffscreenRendering, METH_VARARGS,
   "V.GetUseOffscreenRendering() -> int\nC++: int GetUseOffscreenRendering()\n\n@deprecated in ParaView 5.5. Use `GetForceOnscreenRendering()`\ninstead.\n"},
#endif
  {"GetParaViewDataName", PyvtkPVOptions_GetParaViewDataName, METH_VARARGS,
   "V.GetParaViewDataName() -> string\nC++: virtual char *GetParaViewDataName()\n\nThis is the argument specified by --data on the command line.\nAdditionally, this can also correspond to the last argument\nspecified on the command line if the argument is unknown.\n"},
  {"GetServersFileName", PyvtkPVOptions_GetServersFileName, METH_VARARGS,
   "V.GetServersFileName() -> string\nC++: virtual char *GetServersFileName()\n\nServers file to load on startup.\n"},
  {"GetTimeout", PyvtkPVOptions_GetTimeout, METH_VARARGS,
   "V.GetTimeout() -> int\nC++: virtual int GetTimeout()\n\nValid on PVSERVER and PVDATA_SERVER only. It denotes the time (in\nminutes) since the time that the connection was established with\nthe server that the server may timeout. timeout <= 0 means no\ntimeout.\n"},
  {"SetConnectID", PyvtkPVOptions_SetConnectID, METH_VARARGS,
   "V.SetConnectID(int)\nC++: virtual void SetConnectID(int _arg)\n\nClients need to set the ConnectID so they can handle server\nconnections after the client has started.\n"},
  {"SetLogFileName", PyvtkPVOptions_SetLogFileName, METH_VARARGS,
   "V.SetLogFileName(string)\nC++: virtual void SetLogFileName(const char *_arg)\n\nLog filename.\n"},
  {"GetLogFileName", PyvtkPVOptions_GetLogFileName, METH_VARARGS,
   "V.GetLogFileName() -> string\nC++: virtual char *GetLogFileName()\n\nLog filename.\n"},
  {"SetTileDimensions", PyvtkPVOptions_SetTileDimensions, METH_VARARGS,
   "V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {"SetTileMullions", PyvtkPVOptions_SetTileMullions, METH_VARARGS,
   "V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {"SetUseOffscreenRendering", PyvtkPVOptions_SetUseOffscreenRendering, METH_VARARGS,
   "V.SetUseOffscreenRendering(int)\nC++: virtual void SetUseOffscreenRendering(int _arg)\n\nvtkPVProcessModule needs to set this.\n"},
  {"GetMultiClientMode", PyvtkPVOptions_GetMultiClientMode, METH_VARARGS,
   "V.GetMultiClientMode() -> int\nC++: virtual int GetMultiClientMode()\n\nIs this server was started for collaboration meaning that it\nallow several clients to connect to the same server and share the\nsame pipeline and visualization.\n"},
  {"IsMultiClientModeDebug", PyvtkPVOptions_IsMultiClientModeDebug, METH_VARARGS,
   "V.IsMultiClientModeDebug() -> int\nC++: virtual int IsMultiClientModeDebug()\n\n"},
  {"GetDisableFurtherConnections", PyvtkPVOptions_GetDisableFurtherConnections, METH_VARARGS,
   "V.GetDisableFurtherConnections() -> int\nC++: virtual int GetDisableFurtherConnections()\n\nReturns if this server does not allow connection after the first\nclient.\n"},
  {"GetMultiServerMode", PyvtkPVOptions_GetMultiServerMode, METH_VARARGS,
   "V.GetMultiServerMode() -> int\nC++: virtual int GetMultiServerMode()\n\nIs this client allow multiple server connection in parallel\n"},
  {"GetSymmetricMPIMode", PyvtkPVOptions_GetSymmetricMPIMode, METH_VARARGS,
   "V.GetSymmetricMPIMode() -> int\nC++: virtual int GetSymmetricMPIMode()\n\nIndicates if the application is in symmetric mpi mode. This is\napplicable only to PVBATCH type of processes. Typically, when set\nto true, the python script is run on satellites as well,\notherwise only the root node processes the python script.\nDisabled by default.\n"},
  {"SetSymmetricMPIMode", PyvtkPVOptions_SetSymmetricMPIMode, METH_VARARGS,
   "V.SetSymmetricMPIMode(int)\nC++: virtual void SetSymmetricMPIMode(int _arg)\n\nIndicates if the application is in symmetric mpi mode. This is\napplicable only to PVBATCH type of processes. Typically, when set\nto true, the python script is run on satellites as well,\notherwise only the root node processes the python script.\nDisabled by default.\n"},
  {"GetTellVersion", PyvtkPVOptions_GetTellVersion, METH_VARARGS,
   "V.GetTellVersion() -> int\nC++: virtual int GetTellVersion()\n\nShould this run print the version numbers and exit.\n"},
  {"GetServerURL", PyvtkPVOptions_GetServerURL, METH_VARARGS,
   "V.GetServerURL() -> string\nC++: virtual char *GetServerURL()\n\nProvides access to server-url if specified on the command line.\n"},
  {"GetCatalystLivePort", PyvtkPVOptions_GetCatalystLivePort, METH_VARARGS,
   "V.GetCatalystLivePort() -> int\nC++: virtual int GetCatalystLivePort()\n\nProvides access to the Catalyst Live port if specified on the\ncommand line. A value of -1 indicates that no value was set.\n"},
  {"SetParaViewDataName", PyvtkPVOptions_SetParaViewDataName, METH_VARARGS,
   "V.SetParaViewDataName(string)\nC++: virtual void SetParaViewDataName(const char *_arg)\n\nThis is used when user want to open a file at startup\n"},
  {"GetEnableStreaming", PyvtkPVOptions_GetEnableStreaming, METH_VARARGS,
   "V.GetEnableStreaming() -> int\nC++: virtual int GetEnableStreaming()\n\nUntil streaming becomes mainstream, we enable streaming support\nby passing a command line argument to all processes.\n"},
  {"SetSatelliteMessageIds", PyvtkPVOptions_SetSatelliteMessageIds, METH_VARARGS,
   "V.SetSatelliteMessageIds(int)\nC++: virtual void SetSatelliteMessageIds(int _arg)\n\nInclude originating process id text into server to client\nmessages.\n"},
  {"GetSatelliteMessageIds", PyvtkPVOptions_GetSatelliteMessageIds, METH_VARARGS,
   "V.GetSatelliteMessageIds() -> int\nC++: virtual int GetSatelliteMessageIds()\n\nInclude originating process id text into server to client\nmessages.\n"},
  {"GetPrintMonitors", PyvtkPVOptions_GetPrintMonitors, METH_VARARGS,
   "V.GetPrintMonitors() -> int\nC++: virtual int GetPrintMonitors()\n\nShould this process just print monitor information and exit?\n"},
  {"GetTestPlugin", PyvtkPVOptions_GetTestPlugin, METH_VARARGS,
   "V.GetTestPlugin() -> string\nC++: virtual char *GetTestPlugin()\n\nAdding ability to test plugins by loading them at command line\n"},
  {"GetTestPluginPath", PyvtkPVOptions_GetTestPluginPath, METH_VARARGS,
   "V.GetTestPluginPath() -> string\nC++: virtual char *GetTestPluginPath()\n\nAdding ability to test plugins by loading them at command line\n"},
  {"GetEnableStackTrace", PyvtkPVOptions_GetEnableStackTrace, METH_VARARGS,
   "V.GetEnableStackTrace() -> int\nC++: virtual int GetEnableStackTrace()\n\nFlag for controlling auto generation of stack trace on POSIX\nsystems after crash.\n"},
  {"SetEnableStackTrace", PyvtkPVOptions_SetEnableStackTrace, METH_VARARGS,
   "V.SetEnableStackTrace(int)\nC++: virtual void SetEnableStackTrace(int _arg)\n\nFlag for controlling auto generation of stack trace on POSIX\nsystems after crash.\n"},
  {"GetDisableRegistry", PyvtkPVOptions_GetDisableRegistry, METH_VARARGS,
   "V.GetDisableRegistry() -> int\nC++: virtual int GetDisableRegistry()\n\nFlag for disabling loading of options and settings stored by the\napplication. Often used for testing.\n"},
  {"GetDisableXDisplayTests", PyvtkPVOptions_GetDisableXDisplayTests, METH_VARARGS,
   "V.GetDisableXDisplayTests() -> int\nC++: virtual int GetDisableXDisplayTests()\n\nXDisplay test on server processes during initialization sometimes\nhappens too early and may result in remote rendering prematurely\ndisabled. When this flag is set, ParaView will skip such\nX-display tests. Note, if the display is truly inaccessible when\nParaView tries to connect to the server, we will indeed get\nruntimes errors, including segfaults.\n"},
  {"GetForceOffscreenRendering", PyvtkPVOptions_GetForceOffscreenRendering, METH_VARARGS,
   "V.GetForceOffscreenRendering() -> int\nC++: virtual int GetForceOffscreenRendering()\n\nWhen set to true, ParaView will create headless only render\nwindows on the current process.\n"},
  {"GetForceOnscreenRendering", PyvtkPVOptions_GetForceOnscreenRendering, METH_VARARGS,
   "V.GetForceOnscreenRendering() -> int\nC++: virtual int GetForceOnscreenRendering()\n\nWhen set to true, ParaView will create on-screen render windows.\n"},
  {"GetForceNoMPIInitOnClient", PyvtkPVOptions_GetForceNoMPIInitOnClient, METH_VARARGS,
   "V.GetForceNoMPIInitOnClient() -> int\nC++: virtual int GetForceNoMPIInitOnClient()\n\nGet/Set the ForceNoMPIInitOnClient flag.\n"},
  {"SetForceNoMPIInitOnClient", PyvtkPVOptions_SetForceNoMPIInitOnClient, METH_VARARGS,
   "V.SetForceNoMPIInitOnClient(int)\nC++: virtual void SetForceNoMPIInitOnClient(int _arg)\n\nGet/Set the ForceNoMPIInitOnClient flag.\n"},
  {"ForceNoMPIInitOnClientOn", PyvtkPVOptions_ForceNoMPIInitOnClientOn, METH_VARARGS,
   "V.ForceNoMPIInitOnClientOn()\nC++: virtual void ForceNoMPIInitOnClientOn()\n\nGet/Set the ForceNoMPIInitOnClient flag.\n"},
  {"ForceNoMPIInitOnClientOff", PyvtkPVOptions_ForceNoMPIInitOnClientOff, METH_VARARGS,
   "V.ForceNoMPIInitOnClientOff()\nC++: virtual void ForceNoMPIInitOnClientOff()\n\nGet/Set the ForceNoMPIInitOnClient flag.\n"},
  {"GetForceMPIInitOnClient", PyvtkPVOptions_GetForceMPIInitOnClient, METH_VARARGS,
   "V.GetForceMPIInitOnClient() -> int\nC++: virtual int GetForceMPIInitOnClient()\n\nGet/Set the ForceMPIInitOnClient flag.\n"},
  {"SetForceMPIInitOnClient", PyvtkPVOptions_SetForceMPIInitOnClient, METH_VARARGS,
   "V.SetForceMPIInitOnClient(int)\nC++: virtual void SetForceMPIInitOnClient(int _arg)\n\nGet/Set the ForceMPIInitOnClient flag.\n"},
  {"ForceMPIInitOnClientOn", PyvtkPVOptions_ForceMPIInitOnClientOn, METH_VARARGS,
   "V.ForceMPIInitOnClientOn()\nC++: virtual void ForceMPIInitOnClientOn()\n\nGet/Set the ForceMPIInitOnClient flag.\n"},
  {"ForceMPIInitOnClientOff", PyvtkPVOptions_ForceMPIInitOnClientOff, METH_VARARGS,
   "V.ForceMPIInitOnClientOff()\nC++: virtual void ForceMPIInitOnClientOff()\n\nGet/Set the ForceMPIInitOnClient flag.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVOptions", // tp_name
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
  PyvtkPVOptions_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVOptions_StaticNew()
{
  return vtkPVOptions::New();
}

PyObject *PyvtkPVOptions_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVOptions_Type, PyvtkPVOptions_Methods,
    "vtkPVOptions",
 &PyvtkPVOptions_StaticNew);

  PyTypeObject *pytype = &PyvtkPVOptions_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCommandOptions_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVOptions_ProcessTypeEnum_Type);
  PyvtkPVOptions_ProcessTypeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVOptions_ProcessTypeEnum_Type);

  o = (PyObject *)&PyvtkPVOptions_ProcessTypeEnum_Type;
  if (PyDict_SetItemString(d, "ProcessTypeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkPVOptions::ProcessTypeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "PARAVIEW", vtkPVOptions::PARAVIEW },
        { "PVCLIENT", vtkPVOptions::PVCLIENT },
        { "PVSERVER", vtkPVOptions::PVSERVER },
        { "PVRENDER_SERVER", vtkPVOptions::PVRENDER_SERVER },
        { "PVDATA_SERVER", vtkPVOptions::PVDATA_SERVER },
        { "PVBATCH", vtkPVOptions::PVBATCH },
        { "ALLPROCESS", vtkPVOptions::ALLPROCESS },
      };

    o = PyvtkPVOptions_ProcessTypeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVOptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVOptions_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVOptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

