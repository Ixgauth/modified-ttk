// python wrapper for vtkGPUVolumeRayCastMapper
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
#include "vtkGPUVolumeRayCastMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGPUVolumeRayCastMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGPUVolumeRayCastMapper_ClassNew(); }

#ifndef DECLARED_PyvtkVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkVolumeMapper_ClassNew
#endif

static const char *PyvtkGPUVolumeRayCastMapper_Doc =
  "vtkGPUVolumeRayCastMapper - Ray casting performed on the GPU.\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "vtkGPUVolumeRayCastMapper is a volume mapper that performs ray\n"
  "casting on the GPU using fragment programs.\n\n"
  "This mapper supports connections in multiple ports of input 0 (port 0\n"
  "being the only required connection). It is up to the concrete\n"
  "implementation whether additional inputs will be used during\n"
  "rendering. This class maintains a list of the currently active input\n"
  "ports (Ports) as well as a list of the ports that have been\n"
  "disconnected (RemovedPorts). RemovedPorts is used the the concrete\n"
  "implementation to clean up internal structures.\n\n";

static PyTypeObject PyvtkGPUVolumeRayCastMapper_TFRangeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkGPUVolumeRayCastMapper.TFRangeType", // tp_name
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

PyObject *PyvtkGPUVolumeRayCastMapper_TFRangeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGPUVolumeRayCastMapper_TFRangeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGPUVolumeRayCastMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGPUVolumeRayCastMapper *tempr = vtkGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGPUVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUVolumeRayCastMapper::NewInstance());

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
PyvtkGPUVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustSampleDistances(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockSampleDistanceToInputSpacing(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacing() :
      op->vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockSampleDistanceToInputSpacingOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockSampleDistanceToInputSpacingOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetUseJittering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseJittering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseJittering(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetUseJittering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseJitteringMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJitteringMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJitteringMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseJitteringMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseJitteringMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJitteringMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJitteringMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseJitteringMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseJittering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJittering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJittering() :
      op->vtkGPUVolumeRayCastMapper::GetUseJittering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseJitteringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseJitteringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseJitteringOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseJitteringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseJitteringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseJitteringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseJitteringOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseJitteringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetUseDepthPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPass(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetUseDepthPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPassMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPassMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseDepthPassMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPassMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPassMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseDepthPassMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseDepthPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPass() :
      op->vtkGPUVolumeRayCastMapper::GetUseDepthPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseDepthPassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPassOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseDepthPassOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseDepthPassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPassOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseDepthPassOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetDepthPassContourValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthPassContourValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourValues *tempr = (ap.IsBound() ?
      op->GetDepthPassContourValues() :
      op->vtkGPUVolumeRayCastMapper::GetDepthPassContourValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFinalColorWindow(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetFinalColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkGPUVolumeRayCastMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFinalColorLevel(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetFinalColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkGPUVolumeRayCastMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxMemoryInBytes(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaxMemoryInBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxMemoryInBytes() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryInBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxMemoryFraction(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaxMemoryFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFraction() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetReportProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportProgress(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetReportProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetReportProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReportProgress() :
      op->vtkGPUVolumeRayCastMapper::GetReportProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  vtkVolumeProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsRenderSupported(temp0, temp1) :
      op->vtkGPUVolumeRayCastMapper::IsRenderSupported(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  vtkImageData *temp2 = nullptr;
  int temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMaskInput(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetMaskInput() :
      op->vtkGPUVolumeRayCastMapper::GetMaskInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskType() :
      op->vtkGPUVolumeRayCastMapper::GetMaskType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaskTypeToBinary();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskTypeToLabelMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskTypeToLabelMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaskTypeToLabelMap();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskTypeToLabelMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskBlendFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskBlendFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskBlendFactor(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskBlendFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactorMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactorMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactor() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetRenderToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderToImage(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetRenderToImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetRenderToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderToImage() :
      op->vtkGPUVolumeRayCastMapper::GetRenderToImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_RenderToImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToImageOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RenderToImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_RenderToImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToImageOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RenderToImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetDepthImageScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthImageScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthImageScalarType() :
      op->vtkGPUVolumeRayCastMapper::GetDepthImageScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarTypeToFloat();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetClampDepthToBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampDepthToBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampDepthToBackface(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetClampDepthToBackface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetClampDepthToBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampDepthToBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampDepthToBackface() :
      op->vtkGPUVolumeRayCastMapper::GetClampDepthToBackface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampDepthToBackfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampDepthToBackfaceOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::ClampDepthToBackfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampDepthToBackfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampDepthToBackfaceOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::ClampDepthToBackfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetDepthImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetDepthImage(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::GetDepthImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetColorImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetColorImage(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::GetColorImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GPURender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GPURender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->GPURender(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::GPURender(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetReductionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetReductionRatio(temp0);

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
PyvtkGPUVolumeRayCastMapper_SetColorRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorRangeType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetColorRangeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetColorRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorRangeType() :
      op->vtkGPUVolumeRayCastMapper::GetColorRangeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetScalarOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityRangeType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetScalarOpacityRangeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetScalarOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarOpacityRangeType() :
      op->vtkGPUVolumeRayCastMapper::GetScalarOpacityRangeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetGradientOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientOpacityRangeType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetGradientOpacityRangeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetGradientOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGradientOpacityRangeType() :
      op->vtkGPUVolumeRayCastMapper::GetGradientOpacityRangeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGPUVolumeRayCastMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_Methods[] = {
  {nullptr, PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {nullptr, PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGPUVolumeRayCastMapper_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return nullptr;
}



static PyObject *
PyvtkGPUVolumeRayCastMapper_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGPUVolumeRayCastMapper_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGPUVolumeRayCastMapper_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGPUVolumeRayCastMapper_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkGPUVolumeRayCastMapper_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}



static PyObject *
PyvtkGPUVolumeRayCastMapper_GetInputCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputCount() :
      op->vtkGPUVolumeRayCastMapper::GetInputCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetTransformedInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetTransformedInput(temp0) :
      op->vtkGPUVolumeRayCastMapper::GetTransformedInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetBoundsFromPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsFromPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBoundsFromPort(temp0) :
      op->vtkGPUVolumeRayCastMapper::GetBoundsFromPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUVolumeRayCastMapper_Methods[] = {
  {"IsTypeOf", PyvtkGPUVolumeRayCastMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGPUVolumeRayCastMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGPUVolumeRayCastMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGPUVolumeRayCastMapper\nC++: static vtkGPUVolumeRayCastMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGPUVolumeRayCastMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGPUVolumeRayCastMapper\nC++: vtkGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {"SetAutoAdjustSampleDistances", PyvtkGPUVolumeRayCastMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "V.SetAutoAdjustSampleDistances(int)\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistances", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "V.GetAutoAdjustSampleDistances() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOn()\nC++: virtual void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOff()\nC++: virtual void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"SetLockSampleDistanceToInputSpacing", PyvtkGPUVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing, METH_VARARGS,
   "V.SetLockSampleDistanceToInputSpacing(int)\nC++: virtual void SetLockSampleDistanceToInputSpacing(\n    vtkTypeBool _arg)\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"GetLockSampleDistanceToInputSpacingMinValue", PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue, METH_VARARGS,
   "V.GetLockSampleDistanceToInputSpacingMinValue() -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacingMinValue(\n    )\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"GetLockSampleDistanceToInputSpacingMaxValue", PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue, METH_VARARGS,
   "V.GetLockSampleDistanceToInputSpacingMaxValue() -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacingMaxValue(\n    )\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"GetLockSampleDistanceToInputSpacing", PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing, METH_VARARGS,
   "V.GetLockSampleDistanceToInputSpacing() -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacing()\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"LockSampleDistanceToInputSpacingOn", PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn, METH_VARARGS,
   "V.LockSampleDistanceToInputSpacingOn()\nC++: virtual void LockSampleDistanceToInputSpacingOn()\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"LockSampleDistanceToInputSpacingOff", PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff, METH_VARARGS,
   "V.LockSampleDistanceToInputSpacingOff()\nC++: virtual void LockSampleDistanceToInputSpacingOff()\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"SetUseJittering", PyvtkGPUVolumeRayCastMapper_SetUseJittering, METH_VARARGS,
   "V.SetUseJittering(int)\nC++: virtual void SetUseJittering(vtkTypeBool _arg)\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"GetUseJitteringMinValue", PyvtkGPUVolumeRayCastMapper_GetUseJitteringMinValue, METH_VARARGS,
   "V.GetUseJitteringMinValue() -> int\nC++: virtual vtkTypeBool GetUseJitteringMinValue()\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"GetUseJitteringMaxValue", PyvtkGPUVolumeRayCastMapper_GetUseJitteringMaxValue, METH_VARARGS,
   "V.GetUseJitteringMaxValue() -> int\nC++: virtual vtkTypeBool GetUseJitteringMaxValue()\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"GetUseJittering", PyvtkGPUVolumeRayCastMapper_GetUseJittering, METH_VARARGS,
   "V.GetUseJittering() -> int\nC++: virtual vtkTypeBool GetUseJittering()\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"UseJitteringOn", PyvtkGPUVolumeRayCastMapper_UseJitteringOn, METH_VARARGS,
   "V.UseJitteringOn()\nC++: virtual void UseJitteringOn()\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"UseJitteringOff", PyvtkGPUVolumeRayCastMapper_UseJitteringOff, METH_VARARGS,
   "V.UseJitteringOff()\nC++: virtual void UseJitteringOff()\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"SetUseDepthPass", PyvtkGPUVolumeRayCastMapper_SetUseDepthPass, METH_VARARGS,
   "V.SetUseDepthPass(int)\nC++: virtual void SetUseDepthPass(vtkTypeBool _arg)\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"GetUseDepthPassMinValue", PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMinValue, METH_VARARGS,
   "V.GetUseDepthPassMinValue() -> int\nC++: virtual vtkTypeBool GetUseDepthPassMinValue()\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"GetUseDepthPassMaxValue", PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMaxValue, METH_VARARGS,
   "V.GetUseDepthPassMaxValue() -> int\nC++: virtual vtkTypeBool GetUseDepthPassMaxValue()\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"GetUseDepthPass", PyvtkGPUVolumeRayCastMapper_GetUseDepthPass, METH_VARARGS,
   "V.GetUseDepthPass() -> int\nC++: virtual vtkTypeBool GetUseDepthPass()\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"UseDepthPassOn", PyvtkGPUVolumeRayCastMapper_UseDepthPassOn, METH_VARARGS,
   "V.UseDepthPassOn()\nC++: virtual void UseDepthPassOn()\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"UseDepthPassOff", PyvtkGPUVolumeRayCastMapper_UseDepthPassOff, METH_VARARGS,
   "V.UseDepthPassOff()\nC++: virtual void UseDepthPassOff()\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"GetDepthPassContourValues", PyvtkGPUVolumeRayCastMapper_GetDepthPassContourValues, METH_VARARGS,
   "V.GetDepthPassContourValues() -> vtkContourValues\nC++: vtkContourValues *GetDepthPassContourValues()\n\nReturn handle to contour values container so that values can be\nset by the application. Contour values will be used only when\nUseDepthPass is on.\n"},
  {"SetSampleDistance", PyvtkGPUVolumeRayCastMapper_SetSampleDistance, METH_VARARGS,
   "V.SetSampleDistance(float)\nC++: virtual void SetSampleDistance(float _arg)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. Initial value is\n1.0.\n"},
  {"GetSampleDistance", PyvtkGPUVolumeRayCastMapper_GetSampleDistance, METH_VARARGS,
   "V.GetSampleDistance() -> float\nC++: virtual float GetSampleDistance()\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. Initial value is\n1.0.\n"},
  {"SetImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetImageSampleDistance, METH_VARARGS,
   "V.SetImageSampleDistance(float)\nC++: virtual void SetImageSampleDistance(float _arg)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetImageSampleDistanceMinValue() -> float\nC++: virtual float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetImageSampleDistanceMaxValue() -> float\nC++: virtual float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistance, METH_VARARGS,
   "V.GetImageSampleDistance() -> float\nC++: virtual float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"SetMinimumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   "V.SetMinimumImageSampleDistance(float)\nC++: virtual void SetMinimumImageSampleDistance(float _arg)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: virtual float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: virtual float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   "V.GetMinimumImageSampleDistance() -> float\nC++: virtual float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"SetMaximumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   "V.SetMaximumImageSampleDistance(float)\nC++: virtual void SetMaximumImageSampleDistance(float _arg)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: virtual float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: virtual float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   "V.GetMaximumImageSampleDistance() -> float\nC++: virtual float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"SetFinalColorWindow", PyvtkGPUVolumeRayCastMapper_SetFinalColorWindow, METH_VARARGS,
   "V.SetFinalColorWindow(float)\nC++: virtual void SetFinalColorWindow(float _arg)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"GetFinalColorWindow", PyvtkGPUVolumeRayCastMapper_GetFinalColorWindow, METH_VARARGS,
   "V.GetFinalColorWindow() -> float\nC++: virtual float GetFinalColorWindow()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"SetFinalColorLevel", PyvtkGPUVolumeRayCastMapper_SetFinalColorLevel, METH_VARARGS,
   "V.SetFinalColorLevel(float)\nC++: virtual void SetFinalColorLevel(float _arg)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"GetFinalColorLevel", PyvtkGPUVolumeRayCastMapper_GetFinalColorLevel, METH_VARARGS,
   "V.GetFinalColorLevel() -> float\nC++: virtual float GetFinalColorLevel()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"SetMaxMemoryInBytes", PyvtkGPUVolumeRayCastMapper_SetMaxMemoryInBytes, METH_VARARGS,
   "V.SetMaxMemoryInBytes(int)\nC++: virtual void SetMaxMemoryInBytes(vtkIdType _arg)\n\nMaximum size of the 3D texture in GPU memory. Will default to the\nsize computed from the graphics card. Can be adjusted by the\nuser.\n"},
  {"GetMaxMemoryInBytes", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryInBytes, METH_VARARGS,
   "V.GetMaxMemoryInBytes() -> int\nC++: virtual vtkIdType GetMaxMemoryInBytes()\n\nMaximum size of the 3D texture in GPU memory. Will default to the\nsize computed from the graphics card. Can be adjusted by the\nuser.\n"},
  {"SetMaxMemoryFraction", PyvtkGPUVolumeRayCastMapper_SetMaxMemoryFraction, METH_VARARGS,
   "V.SetMaxMemoryFraction(float)\nC++: virtual void SetMaxMemoryFraction(float _arg)\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFractionMinValue", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMinValue, METH_VARARGS,
   "V.GetMaxMemoryFractionMinValue() -> float\nC++: virtual float GetMaxMemoryFractionMinValue()\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFractionMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMaxValue, METH_VARARGS,
   "V.GetMaxMemoryFractionMaxValue() -> float\nC++: virtual float GetMaxMemoryFractionMaxValue()\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFraction", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFraction, METH_VARARGS,
   "V.GetMaxMemoryFraction() -> float\nC++: virtual float GetMaxMemoryFraction()\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {"SetReportProgress", PyvtkGPUVolumeRayCastMapper_SetReportProgress, METH_VARARGS,
   "V.SetReportProgress(bool)\nC++: virtual void SetReportProgress(bool _arg)\n\nTells if the mapper will report intermediate progress. Initial\nvalue is true. As the progress works with a GL blocking call\n(glFinish()), this can be useful for huge dataset but can slow\ndown rendering of small dataset. It should be set to true for big\ndataset or complex shading and streaming but to false for small\ndatasets.\n"},
  {"GetReportProgress", PyvtkGPUVolumeRayCastMapper_GetReportProgress, METH_VARARGS,
   "V.GetReportProgress() -> bool\nC++: virtual bool GetReportProgress()\n\nTells if the mapper will report intermediate progress. Initial\nvalue is true. As the progress works with a GL blocking call\n(glFinish()), this can be useful for huge dataset but can slow\ndown rendering of small dataset. It should be set to true for big\ndataset or complex shading and streaming but to false for small\ndatasets.\n"},
  {"IsRenderSupported", PyvtkGPUVolumeRayCastMapper_IsRenderSupported, METH_VARARGS,
   "V.IsRenderSupported(vtkRenderWindow, vtkVolumeProperty) -> int\nC++: virtual int IsRenderSupported(vtkRenderWindow *window,\n    vtkVolumeProperty *property)\n\nBased on hardware and properties, we may or may not be able to\nrender using 3D texture mapping. This indicates if 3D texture\nmapping is supported by the hardware, and if the other extensions\nnecessary to support the specific properties are available.\n"},
  {"CreateCanonicalView", PyvtkGPUVolumeRayCastMapper_CreateCanonicalView, METH_VARARGS,
   "V.CreateCanonicalView(vtkRenderer, vtkVolume, vtkImageData, int,\n    [float, float, float], [float, float, float])\nC++: void CreateCanonicalView(vtkRenderer *ren, vtkVolume *volume,\n     vtkImageData *image, int blend_mode, double viewDirection[3],\n     double viewUp[3])\n\n"},
  {"SetMaskInput", PyvtkGPUVolumeRayCastMapper_SetMaskInput, METH_VARARGS,
   "V.SetMaskInput(vtkImageData)\nC++: void SetMaskInput(vtkImageData *mask)\n\nOptionally, set a mask input. This mask may be a binary mask or a\nlabel map. This must be specified via SetMaskType.\n\n* If the mask is a binary mask, the volume rendering is confined\n  to regions\n* within the binary mask. The binary mask is assumed to have a\n  datatype of\n* UCHAR and values of 255 (inside) and 0 (outside).\n\n* The mask may also be a label map. The label map is allowed to\n  contain only\n* 3 labels (values of 0, 1 and 2) and must have a datatype of\n  UCHAR. In voxels\n* with label value of 0, the color transfer function supplied by\n  component\n* 0 is used.\n* In voxels with label value of 1, the color transfer function\n  supplied by\n* component 1 is used and blended with the transfer function\n  supplied by\n* component 0, with the blending weight being determined by\n* MaskBlendFactor.\n* In voxels with a label value of 2, the color transfer function\n  supplied\n* by component 2 is used and blended with the transfer function\n  supplied by\n* component 0, with the blending weight being determined by\n* MaskBlendFactor.\n"},
  {"GetMaskInput", PyvtkGPUVolumeRayCastMapper_GetMaskInput, METH_VARARGS,
   "V.GetMaskInput() -> vtkImageData\nC++: virtual vtkImageData *GetMaskInput()\n\nOptionally, set a mask input. This mask may be a binary mask or a\nlabel map. This must be specified via SetMaskType.\n\n* If the mask is a binary mask, the volume rendering is confined\n  to regions\n* within the binary mask. The binary mask is assumed to have a\n  datatype of\n* UCHAR and values of 255 (inside) and 0 (outside).\n\n* The mask may also be a label map. The label map is allowed to\n  contain only\n* 3 labels (values of 0, 1 and 2) and must have a datatype of\n  UCHAR. In voxels\n* with label value of 0, the color transfer function supplied by\n  component\n* 0 is used.\n* In voxels with label value of 1, the color transfer function\n  supplied by\n* component 1 is used and blended with the transfer function\n  supplied by\n* component 0, with the blending weight being determined by\n* MaskBlendFactor.\n* In voxels with a label value of 2, the color transfer function\n  supplied\n* by component 2 is used and blended with the transfer function\n  supplied by\n* component 0, with the blending weight being determined by\n* MaskBlendFactor.\n"},
  {"SetMaskType", PyvtkGPUVolumeRayCastMapper_SetMaskType, METH_VARARGS,
   "V.SetMaskType(int)\nC++: virtual void SetMaskType(int _arg)\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {"GetMaskType", PyvtkGPUVolumeRayCastMapper_GetMaskType, METH_VARARGS,
   "V.GetMaskType() -> int\nC++: virtual int GetMaskType()\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {"SetMaskTypeToBinary", PyvtkGPUVolumeRayCastMapper_SetMaskTypeToBinary, METH_VARARGS,
   "V.SetMaskTypeToBinary()\nC++: void SetMaskTypeToBinary()\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {"SetMaskTypeToLabelMap", PyvtkGPUVolumeRayCastMapper_SetMaskTypeToLabelMap, METH_VARARGS,
   "V.SetMaskTypeToLabelMap()\nC++: void SetMaskTypeToLabelMap()\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {"SetMaskBlendFactor", PyvtkGPUVolumeRayCastMapper_SetMaskBlendFactor, METH_VARARGS,
   "V.SetMaskBlendFactor(float)\nC++: virtual void SetMaskBlendFactor(float _arg)\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask. 0.0 means only standard\ncolor transfer function. 1.0 means only mask color transfer\nfunction. The default value is 1.0.\n"},
  {"GetMaskBlendFactorMinValue", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMinValue, METH_VARARGS,
   "V.GetMaskBlendFactorMinValue() -> float\nC++: virtual float GetMaskBlendFactorMinValue()\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask. 0.0 means only standard\ncolor transfer function. 1.0 means only mask color transfer\nfunction. The default value is 1.0.\n"},
  {"GetMaskBlendFactorMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMaxValue, METH_VARARGS,
   "V.GetMaskBlendFactorMaxValue() -> float\nC++: virtual float GetMaskBlendFactorMaxValue()\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask. 0.0 means only standard\ncolor transfer function. 1.0 means only mask color transfer\nfunction. The default value is 1.0.\n"},
  {"GetMaskBlendFactor", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactor, METH_VARARGS,
   "V.GetMaskBlendFactor() -> float\nC++: virtual float GetMaskBlendFactor()\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask. 0.0 means only standard\ncolor transfer function. 1.0 means only mask color transfer\nfunction. The default value is 1.0.\n"},
  {"SetRenderToImage", PyvtkGPUVolumeRayCastMapper_SetRenderToImage, METH_VARARGS,
   "V.SetRenderToImage(int)\nC++: virtual void SetRenderToImage(vtkTypeBool _arg)\n\nEnable or disable setting output of volume rendering to be color\nand depth textures. By default this is set to 0 (off). It should\nbe noted that it is possible that underlying API specific mapper\nmay not supoport RenderToImage mode.\n\\warning\n\\li This method ignores any other volumes / props in the scene.\n\\li This method does not respect the general attributes of the\nscene i.e. background color, etc. It always produces a color\nimage that has a transparent white background outside the bounds\nof the volume.\n\n* \\sa GetDepthImage(), GetColorImage()\n"},
  {"GetRenderToImage", PyvtkGPUVolumeRayCastMapper_GetRenderToImage, METH_VARARGS,
   "V.GetRenderToImage() -> int\nC++: virtual vtkTypeBool GetRenderToImage()\n\nEnable or disable setting output of volume rendering to be color\nand depth textures. By default this is set to 0 (off). It should\nbe noted that it is possible that underlying API specific mapper\nmay not supoport RenderToImage mode.\n\\warning\n\\li This method ignores any other volumes / props in the scene.\n\\li This method does not respect the general attributes of the\nscene i.e. background color, etc. It always produces a color\nimage that has a transparent white background outside the bounds\nof the volume.\n\n* \\sa GetDepthImage(), GetColorImage()\n"},
  {"RenderToImageOn", PyvtkGPUVolumeRayCastMapper_RenderToImageOn, METH_VARARGS,
   "V.RenderToImageOn()\nC++: virtual void RenderToImageOn()\n\nEnable or disable setting output of volume rendering to be color\nand depth textures. By default this is set to 0 (off). It should\nbe noted that it is possible that underlying API specific mapper\nmay not supoport RenderToImage mode.\n\\warning\n\\li This method ignores any other volumes / props in the scene.\n\\li This method does not respect the general attributes of the\nscene i.e. background color, etc. It always produces a color\nimage that has a transparent white background outside the bounds\nof the volume.\n\n* \\sa GetDepthImage(), GetColorImage()\n"},
  {"RenderToImageOff", PyvtkGPUVolumeRayCastMapper_RenderToImageOff, METH_VARARGS,
   "V.RenderToImageOff()\nC++: virtual void RenderToImageOff()\n\nEnable or disable setting output of volume rendering to be color\nand depth textures. By default this is set to 0 (off). It should\nbe noted that it is possible that underlying API specific mapper\nmay not supoport RenderToImage mode.\n\\warning\n\\li This method ignores any other volumes / props in the scene.\n\\li This method does not respect the general attributes of the\nscene i.e. background color, etc. It always produces a color\nimage that has a transparent white background outside the bounds\nof the volume.\n\n* \\sa GetDepthImage(), GetColorImage()\n"},
  {"SetDepthImageScalarType", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarType, METH_VARARGS,
   "V.SetDepthImageScalarType(int)\nC++: virtual void SetDepthImageScalarType(int _arg)\n\nSet/Get the scalar type of the depth texture in RenderToImage\nmode. By default, the type if VTK_FLOAT.\n\\sa SetRenderToImage()\n"},
  {"GetDepthImageScalarType", PyvtkGPUVolumeRayCastMapper_GetDepthImageScalarType, METH_VARARGS,
   "V.GetDepthImageScalarType() -> int\nC++: virtual int GetDepthImageScalarType()\n\nSet/Get the scalar type of the depth texture in RenderToImage\nmode. By default, the type if VTK_FLOAT.\n\\sa SetRenderToImage()\n"},
  {"SetDepthImageScalarTypeToUnsignedChar", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetDepthImageScalarTypeToUnsignedChar()\nC++: void SetDepthImageScalarTypeToUnsignedChar()\n\nSet/Get the scalar type of the depth texture in RenderToImage\nmode. By default, the type if VTK_FLOAT.\n\\sa SetRenderToImage()\n"},
  {"SetDepthImageScalarTypeToUnsignedShort", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetDepthImageScalarTypeToUnsignedShort()\nC++: void SetDepthImageScalarTypeToUnsignedShort()\n\nSet/Get the scalar type of the depth texture in RenderToImage\nmode. By default, the type if VTK_FLOAT.\n\\sa SetRenderToImage()\n"},
  {"SetDepthImageScalarTypeToFloat", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToFloat, METH_VARARGS,
   "V.SetDepthImageScalarTypeToFloat()\nC++: void SetDepthImageScalarTypeToFloat()\n\nSet/Get the scalar type of the depth texture in RenderToImage\nmode. By default, the type if VTK_FLOAT.\n\\sa SetRenderToImage()\n"},
  {"SetClampDepthToBackface", PyvtkGPUVolumeRayCastMapper_SetClampDepthToBackface, METH_VARARGS,
   "V.SetClampDepthToBackface(int)\nC++: virtual void SetClampDepthToBackface(vtkTypeBool _arg)\n\nEnable or disable clamping the depth value of the fully\ntransparent voxel to the depth of the back-face of the volume.\nThis parameter is used when RenderToImage mode is enabled. When\nClampDepthToBackFace is false, the fully transparent voxels will\nhave a value of 1.0 in the depth image. When this is true, the\nfully transparent voxels will have the depth value of the face at\nwhich the ray exits the volume. By default, this is set to 0\n(off).\n\\sa SetRenderToImage(), GetDepthImage()\n"},
  {"GetClampDepthToBackface", PyvtkGPUVolumeRayCastMapper_GetClampDepthToBackface, METH_VARARGS,
   "V.GetClampDepthToBackface() -> int\nC++: virtual vtkTypeBool GetClampDepthToBackface()\n\nEnable or disable clamping the depth value of the fully\ntransparent voxel to the depth of the back-face of the volume.\nThis parameter is used when RenderToImage mode is enabled. When\nClampDepthToBackFace is false, the fully transparent voxels will\nhave a value of 1.0 in the depth image. When this is true, the\nfully transparent voxels will have the depth value of the face at\nwhich the ray exits the volume. By default, this is set to 0\n(off).\n\\sa SetRenderToImage(), GetDepthImage()\n"},
  {"ClampDepthToBackfaceOn", PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOn, METH_VARARGS,
   "V.ClampDepthToBackfaceOn()\nC++: virtual void ClampDepthToBackfaceOn()\n\nEnable or disable clamping the depth value of the fully\ntransparent voxel to the depth of the back-face of the volume.\nThis parameter is used when RenderToImage mode is enabled. When\nClampDepthToBackFace is false, the fully transparent voxels will\nhave a value of 1.0 in the depth image. When this is true, the\nfully transparent voxels will have the depth value of the face at\nwhich the ray exits the volume. By default, this is set to 0\n(off).\n\\sa SetRenderToImage(), GetDepthImage()\n"},
  {"ClampDepthToBackfaceOff", PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOff, METH_VARARGS,
   "V.ClampDepthToBackfaceOff()\nC++: virtual void ClampDepthToBackfaceOff()\n\nEnable or disable clamping the depth value of the fully\ntransparent voxel to the depth of the back-face of the volume.\nThis parameter is used when RenderToImage mode is enabled. When\nClampDepthToBackFace is false, the fully transparent voxels will\nhave a value of 1.0 in the depth image. When this is true, the\nfully transparent voxels will have the depth value of the face at\nwhich the ray exits the volume. By default, this is set to 0\n(off).\n\\sa SetRenderToImage(), GetDepthImage()\n"},
  {"GetDepthImage", PyvtkGPUVolumeRayCastMapper_GetDepthImage, METH_VARARGS,
   "V.GetDepthImage(vtkImageData)\nC++: virtual void GetDepthImage(vtkImageData *)\n\nLow level API to export the depth texture as vtkImageData in\nRenderToImage mode. Should be implemented by the graphics API\nspecific mapper (GL or other).\n\\sa SetRenderToImage()\n"},
  {"GetColorImage", PyvtkGPUVolumeRayCastMapper_GetColorImage, METH_VARARGS,
   "V.GetColorImage(vtkImageData)\nC++: virtual void GetColorImage(vtkImageData *)\n\nLow level API to export the color texture as vtkImageData in\nRenderToImage mode. Should be implemented by the graphics API\nspecific mapper (GL or other).\n\\sa SetRenderToImage()\n"},
  {"Render", PyvtkGPUVolumeRayCastMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *) override;\n\nInitialize rendering for this volume.\n\\warning INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"GPURender", PyvtkGPUVolumeRayCastMapper_GPURender, METH_VARARGS,
   "V.GPURender(vtkRenderer, vtkVolume)\nC++: virtual void GPURender(vtkRenderer *, vtkVolume *)\n\nHandled in the subclass - the actual render method\n\\pre input is up-to-date.\n"},
  {"ReleaseGraphicsResources", PyvtkGPUVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n\\warning INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"GetReductionRatio", PyvtkGPUVolumeRayCastMapper_GetReductionRatio, METH_VARARGS,
   "V.GetReductionRatio([float, float, float])\nC++: virtual void GetReductionRatio(double ratio[3])\n\nReturn how much the dataset has to be reduced in each dimension\nto fit on the GPU. If the value is 1.0, there is no need to\nreduce the dataset.\n\\pre the calling thread has a current OpenGL context.\n\\pre mapper_supported:\n    IsRenderSupported(renderer->GetRenderWindow(),0)\nThe computation is based on hardware limits (3D texture indexable\nsize) and MaxMemoryInBytes.\n\\post valid_i_ratio: ratio[0]>0 && ratio[0]<=1.0\n\\post valid_j_ratio: ratio[1]>0 && ratio[1]<=1.0\n\\post valid_k_ratio: ratio[2]>0 && ratio[2]<=1.0\n"},
  {"SetColorRangeType", PyvtkGPUVolumeRayCastMapper_SetColorRangeType, METH_VARARGS,
   "V.SetColorRangeType(int)\nC++: virtual void SetColorRangeType(int _arg)\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"GetColorRangeType", PyvtkGPUVolumeRayCastMapper_GetColorRangeType, METH_VARARGS,
   "V.GetColorRangeType() -> int\nC++: virtual int GetColorRangeType()\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"SetScalarOpacityRangeType", PyvtkGPUVolumeRayCastMapper_SetScalarOpacityRangeType, METH_VARARGS,
   "V.SetScalarOpacityRangeType(int)\nC++: virtual void SetScalarOpacityRangeType(int _arg)\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"GetScalarOpacityRangeType", PyvtkGPUVolumeRayCastMapper_GetScalarOpacityRangeType, METH_VARARGS,
   "V.GetScalarOpacityRangeType() -> int\nC++: virtual int GetScalarOpacityRangeType()\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"SetGradientOpacityRangeType", PyvtkGPUVolumeRayCastMapper_SetGradientOpacityRangeType, METH_VARARGS,
   "V.SetGradientOpacityRangeType(int)\nC++: virtual void SetGradientOpacityRangeType(int _arg)\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"GetGradientOpacityRangeType", PyvtkGPUVolumeRayCastMapper_GetGradientOpacityRangeType, METH_VARARGS,
   "V.GetGradientOpacityRangeType() -> int\nC++: virtual int GetGradientOpacityRangeType()\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"GetInput", PyvtkGPUVolumeRayCastMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput() override;\n\nSet/Get the input data\n"},
  {"RemoveInputConnection", PyvtkGPUVolumeRayCastMapper_RemoveInputConnection, METH_VARARGS,
   "V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input) override;\nV.RemoveInputConnection(int, int)\nC++: void RemoveInputConnection(int port, int idx) override;\n\nAdd/Remove input connections. Active and removed ports are cached\nin Ports and RemovedPorts respectively.\n"},
  {"SetInputConnection", PyvtkGPUVolumeRayCastMapper_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nAdd/Remove input connections. Active and removed ports are cached\nin Ports and RemovedPorts respectively.\n"},
  {"GetInputCount", PyvtkGPUVolumeRayCastMapper_GetInputCount, METH_VARARGS,
   "V.GetInputCount() -> int\nC++: int GetInputCount()\n\nNumber of currently active ports.\n"},
  {"GetTransformedInput", PyvtkGPUVolumeRayCastMapper_GetTransformedInput, METH_VARARGS,
   "V.GetTransformedInput(int) -> vtkImageData\nC++: vtkImageData *GetTransformedInput(const int port=0)\n\n"},
  {"GetBoundsFromPort", PyvtkGPUVolumeRayCastMapper_GetBoundsFromPort, METH_VARARGS,
   "V.GetBoundsFromPort(int) -> (float, float, float, float, float,\n    float)\nC++: double *GetBoundsFromPort(const int port)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGPUVolumeRayCastMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkGPUVolumeRayCastMapper", // tp_name
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
  PyvtkGPUVolumeRayCastMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGPUVolumeRayCastMapper_StaticNew()
{
  return vtkGPUVolumeRayCastMapper::New();
}

PyObject *PyvtkGPUVolumeRayCastMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGPUVolumeRayCastMapper_Type, PyvtkGPUVolumeRayCastMapper_Methods,
    "vtkGPUVolumeRayCastMapper",
 &PyvtkGPUVolumeRayCastMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkGPUVolumeRayCastMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkVolumeMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type);
  PyvtkGPUVolumeRayCastMapper_TFRangeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type);

  o = (PyObject *)&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type;
  if (PyDict_SetItemString(d, "TFRangeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BinaryMaskType", vtkGPUVolumeRayCastMapper::BinaryMaskType },
        { "LabelMapMaskType", vtkGPUVolumeRayCastMapper::LabelMapMaskType },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkGPUVolumeRayCastMapper::TFRangeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "SCALAR", vtkGPUVolumeRayCastMapper::SCALAR },
        { "NATIVE", vtkGPUVolumeRayCastMapper::NATIVE },
      };

    o = PyvtkGPUVolumeRayCastMapper_TFRangeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGPUVolumeRayCastMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGPUVolumeRayCastMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGPUVolumeRayCastMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

