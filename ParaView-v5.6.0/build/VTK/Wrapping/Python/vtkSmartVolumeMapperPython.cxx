// python wrapper for vtkSmartVolumeMapper
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
#include "vtkSmartVolumeMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmartVolumeMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSmartVolumeMapper_ClassNew(); }

#ifndef DECLARED_PyvtkVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkVolumeMapper_ClassNew
#endif

static const char *PyvtkSmartVolumeMapper_Doc =
  "vtkSmartVolumeMapper - Adaptive volume mapper\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "vtkSmartVolumeMapper is a volume mapper that will delegate to a\n"
  "specific volume mapper based on rendering parameters and available\n"
  "hardware. Use the SetRequestedRenderMode() method to control the\n"
  "behavior of the selection. The following options are available:\n\n"
  "@par vtkSmartVolumeMapper::DefaultRenderMode:\n"
  "         Allow the vtkSmartVolumeMapper to select the best mapper\n"
  "based on\n"
  "         rendering parameters and hardware support. If GPU ray\n"
  "casting is\n"
  "         supported, this mapper will be used for all rendering. If\n"
  "not,\n"
  "         then the vtkFixedPointRayCastMapper will be used\n"
  "exclusively.\n"
  "         This is the default requested render mode, and is generally\n"
  "the\n"
  "         best option. When you use this option, your volume will\n"
  "always\n"
  "         be rendered, but the method used to render it may vary based\n"
  "         on parameters and platform.\n\n"
  "@par vtkSmartVolumeMapper::RayCastRenderMode:\n"
  "         Use the vtkFixedPointVolumeRayCastMapper for both\n"
  "interactive and\n"
  "         still rendering. When you use this option your volume will\n"
  "always\n"
  "         be rendered with the vtkFixedPointVolumeRayCastMapper.\n\n"
  "@par vtkSmartVolumeMapper::GPURenderMode:\n"
  "         Use the vtkGPUVolumeRayCastMapper, if supported, for both\n"
  "         interactive and still rendering. If the GPU ray caster is\n"
  "not\n"
  "         supported (due to hardware limitations or rendering\n"
  "parameters)\n"
  "         then no image will be rendered. Use this option only if you\n"
  "have\n"
  "         already checked for supported based on the current hardware,\n"
  "         number of scalar components, and rendering parameters in the\n"
  "         vtkVolumeProperty.\n\n"
  "@par vtkSmartVolumeMapper::GPURenderMode:\n"
  " You can adjust the contrast and brightness in the rendered image\n"
  "using the\n"
  " FinalColorWindow and FinalColorLevel ivars. By default the\n"
  " FinalColorWindow is set to 1.0, and the FinalColorLevel is set to\n"
  "0.5,\n"
  " which applies no correction to the computed image. To apply the\n"
  "window /\n"
  " level operation to the computer image color, first a Scale and Bias\n"
  " value are computed:\n\n\n"
  " scale = 1.0 / this->FinalColorWindow\n"
  " bias  = 0.5 - this->FinalColorLevel / this->FinalColorWindow\n"
  " \n"
  " To compute a new color (R', G', B', A') from an existing color\n"
  "(R,G,B,A)\n"
  " for a pixel, the following equation is used:\n\n\n"
  " R' = R*scale + bias*A\n"
  " G' = G*scale + bias*A\n"
  " B' = B*scale + bias*A\n"
  " A' = A\n"
  "  Note that bias is multiplied by the alpha component before adding\n"
  "because the red, green, and blue component of the color are already\n"
  "pre-multiplied by alpha. Also note that the window / level operation\n"
  "leaves the alpha component unchanged - it only adjusts the RGB\n"
  "values.\n\n";

static PyTypeObject PyvtkSmartVolumeMapper_VectorModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumeOpenGL2Python.vtkSmartVolumeMapper.VectorModeType", // tp_name
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

PyObject *PyvtkSmartVolumeMapper_VectorModeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSmartVolumeMapper_VectorModeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSmartVolumeMapper_VectorModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSmartVolumeMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSmartVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmartVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmartVolumeMapper *tempr = vtkSmartVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmartVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmartVolumeMapper::NewInstance());

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
PyvtkSmartVolumeMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetFinalColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkSmartVolumeMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetFinalColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkSmartVolumeMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToDefault();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToRayCast();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToRayCast();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToGPU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToGPU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToGPU();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToGPU();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToOSPRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToOSPRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToOSPRay();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToOSPRay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequestedRenderMode() :
      op->vtkSmartVolumeMapper::GetRequestedRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetLastUsedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUsedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastUsedRenderMode() :
      op->vtkSmartVolumeMapper::GetLastUsedRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetMaxMemoryInBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxMemoryInBytes() :
      op->vtkSmartVolumeMapper::GetMaxMemoryInBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetMaxMemoryFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMinValue() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMaxValue() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFraction() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMinValue() :
      op->vtkSmartVolumeMapper::GetInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMaxValue() :
      op->vtkSmartVolumeMapper::GetInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkSmartVolumeMapper::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToNearestNeighbor();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationModeToNearestNeighbor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToLinear();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationModeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToCubic();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationModeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  vtkVolume *temp2 = nullptr;
  vtkImageData *temp3 = nullptr;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    if (ap.IsBound())
    {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkSmartVolumeMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveUpdateRate(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInteractiveUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRateMinValue() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRateMaxValue() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRate() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInteractiveAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveAdjustSampleDistances(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInteractiveAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveAdjustSampleDistancesMinValue() :
      op->vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveAdjustSampleDistancesMaxValue() :
      op->vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveAdjustSampleDistances() :
      op->vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkSmartVolumeMapper::InteractiveAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkSmartVolumeMapper::InteractiveAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkSmartVolumeMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkSmartVolumeMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkSmartVolumeMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkSmartVolumeMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkSmartVolumeMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkSmartVolumeMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkSmartVolumeMapper::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetVectorComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMinValue() :
      op->vtkSmartVolumeMapper::GetVectorComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMaxValue() :
      op->vtkSmartVolumeMapper::GetVectorComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponent() :
      op->vtkSmartVolumeMapper::GetVectorComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSmartVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkSmartVolumeMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSmartVolumeMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSmartVolumeMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSmartVolumeMapper\nC++: static vtkSmartVolumeMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSmartVolumeMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSmartVolumeMapper\nC++: vtkSmartVolumeMapper *NewInstance()\n\n"},
  {"SetFinalColorWindow", PyvtkSmartVolumeMapper_SetFinalColorWindow, METH_VARARGS,
   "V.SetFinalColorWindow(float)\nC++: virtual void SetFinalColorWindow(float _arg)\n\nSet the final color window. This controls the contrast of the\nimage. The default value is 1.0. The Window can be negative (this\ncauses a \"negative\" effect on the image) Although Window can be\nset to 0.0, any value less than 0.00001 and greater than or equal\nto 0.0 will be set to 0.00001, and any value greater than\n-0.00001 but less than or equal to 0.0 will be set to -0.00001.\nInitial value is 1.0.\n"},
  {"GetFinalColorWindow", PyvtkSmartVolumeMapper_GetFinalColorWindow, METH_VARARGS,
   "V.GetFinalColorWindow() -> float\nC++: virtual float GetFinalColorWindow()\n\nGet the final color window. Initial value is 1.0.\n"},
  {"SetFinalColorLevel", PyvtkSmartVolumeMapper_SetFinalColorLevel, METH_VARARGS,
   "V.SetFinalColorLevel(float)\nC++: virtual void SetFinalColorLevel(float _arg)\n\nSet the final color level. The level controls the brightness of\nthe image. The final color window will be centered at the final\ncolor level, and together represent a linear remapping of color\nvalues. The default value for the level is 0.5.\n"},
  {"GetFinalColorLevel", PyvtkSmartVolumeMapper_GetFinalColorLevel, METH_VARARGS,
   "V.GetFinalColorLevel() -> float\nC++: virtual float GetFinalColorLevel()\n\nGet the final color level.\n"},
  {"SetRequestedRenderMode", PyvtkSmartVolumeMapper_SetRequestedRenderMode, METH_VARARGS,
   "V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int mode)\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {"SetRequestedRenderModeToDefault", PyvtkSmartVolumeMapper_SetRequestedRenderModeToDefault, METH_VARARGS,
   "V.SetRequestedRenderModeToDefault()\nC++: void SetRequestedRenderModeToDefault()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::DefaultRenderMode. This is the best option\nfor an application that must adapt to different data types,\nhardware, and rendering parameters.\n"},
  {"SetRequestedRenderModeToRayCast", PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCast, METH_VARARGS,
   "V.SetRequestedRenderModeToRayCast()\nC++: void SetRequestedRenderModeToRayCast()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::RayCastRenderMode. This option will use\nsoftware rendering exclusively. This is a good option if you know\nthere is no hardware acceleration.\n"},
  {"SetRequestedRenderModeToGPU", PyvtkSmartVolumeMapper_SetRequestedRenderModeToGPU, METH_VARARGS,
   "V.SetRequestedRenderModeToGPU()\nC++: void SetRequestedRenderModeToGPU()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::GPURenderMode. This option will use\nhardware accelerated rendering exclusively. This is a good option\nif you know there is hardware acceleration.\n"},
  {"SetRequestedRenderModeToOSPRay", PyvtkSmartVolumeMapper_SetRequestedRenderModeToOSPRay, METH_VARARGS,
   "V.SetRequestedRenderModeToOSPRay()\nC++: void SetRequestedRenderModeToOSPRay()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::OSPRayRenderMode. This option will use\nintel OSPRay to do software rendering exclusively.\n"},
  {"GetRequestedRenderMode", PyvtkSmartVolumeMapper_GetRequestedRenderMode, METH_VARARGS,
   "V.GetRequestedRenderMode() -> int\nC++: virtual int GetRequestedRenderMode()\n\nGet the requested render mode.\n"},
  {"GetLastUsedRenderMode", PyvtkSmartVolumeMapper_GetLastUsedRenderMode, METH_VARARGS,
   "V.GetLastUsedRenderMode() -> int\nC++: int GetLastUsedRenderMode()\n\nThis will return the render mode used during the previous call to\nRender().\n"},
  {"SetMaxMemoryInBytes", PyvtkSmartVolumeMapper_SetMaxMemoryInBytes, METH_VARARGS,
   "V.SetMaxMemoryInBytes(int)\nC++: virtual void SetMaxMemoryInBytes(vtkIdType _arg)\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nsize of the 3D texture in GPU memory. Will default to the size\ncomputed from the graphics card. Can be adjusted by the user.\nUseful if the automatic detection is defective or missing.\n"},
  {"GetMaxMemoryInBytes", PyvtkSmartVolumeMapper_GetMaxMemoryInBytes, METH_VARARGS,
   "V.GetMaxMemoryInBytes() -> int\nC++: virtual vtkIdType GetMaxMemoryInBytes()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nsize of the 3D texture in GPU memory. Will default to the size\ncomputed from the graphics card. Can be adjusted by the user.\nUseful if the automatic detection is defective or missing.\n"},
  {"SetMaxMemoryFraction", PyvtkSmartVolumeMapper_SetMaxMemoryFraction, METH_VARARGS,
   "V.SetMaxMemoryFraction(float)\nC++: virtual void SetMaxMemoryFraction(float _arg)\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFractionMinValue", PyvtkSmartVolumeMapper_GetMaxMemoryFractionMinValue, METH_VARARGS,
   "V.GetMaxMemoryFractionMinValue() -> float\nC++: virtual float GetMaxMemoryFractionMinValue()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFractionMaxValue", PyvtkSmartVolumeMapper_GetMaxMemoryFractionMaxValue, METH_VARARGS,
   "V.GetMaxMemoryFractionMaxValue() -> float\nC++: virtual float GetMaxMemoryFractionMaxValue()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFraction", PyvtkSmartVolumeMapper_GetMaxMemoryFraction, METH_VARARGS,
   "V.GetMaxMemoryFraction() -> float\nC++: virtual float GetMaxMemoryFraction()\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {"SetInterpolationMode", PyvtkSmartVolumeMapper_SetInterpolationMode, METH_VARARGS,
   "V.SetInterpolationMode(int)\nC++: virtual void SetInterpolationMode(int _arg)\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"GetInterpolationModeMinValue", PyvtkSmartVolumeMapper_GetInterpolationModeMinValue, METH_VARARGS,
   "V.GetInterpolationModeMinValue() -> int\nC++: virtual int GetInterpolationModeMinValue()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"GetInterpolationModeMaxValue", PyvtkSmartVolumeMapper_GetInterpolationModeMaxValue, METH_VARARGS,
   "V.GetInterpolationModeMaxValue() -> int\nC++: virtual int GetInterpolationModeMaxValue()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"GetInterpolationMode", PyvtkSmartVolumeMapper_GetInterpolationMode, METH_VARARGS,
   "V.GetInterpolationMode() -> int\nC++: virtual int GetInterpolationMode()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"SetInterpolationModeToNearestNeighbor", PyvtkSmartVolumeMapper_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   "V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"SetInterpolationModeToLinear", PyvtkSmartVolumeMapper_SetInterpolationModeToLinear, METH_VARARGS,
   "V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"SetInterpolationModeToCubic", PyvtkSmartVolumeMapper_SetInterpolationModeToCubic, METH_VARARGS,
   "V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"CreateCanonicalView", PyvtkSmartVolumeMapper_CreateCanonicalView, METH_VARARGS,
   "V.CreateCanonicalView(vtkRenderer, vtkVolume, vtkVolume,\n    vtkImageData, int, [float, float, float], [float, float,\n    float])\nC++: void CreateCanonicalView(vtkRenderer *ren, vtkVolume *volume,\n     vtkVolume *volume2, vtkImageData *image, int blend_mode,\n    double viewDirection[3], double viewUp[3])\n\nThis method can be used to render a representative view of the\ninput data into the supplied image given the supplied blending\nmode, view direction, and view up vector.\n"},
  {"SetInteractiveUpdateRate", PyvtkSmartVolumeMapper_SetInteractiveUpdateRate, METH_VARARGS,
   "V.SetInteractiveUpdateRate(float)\nC++: virtual void SetInteractiveUpdateRate(double _arg)\n\nIf the DesiredUpdateRate of the vtkRenderWindow that caused the\nRender falls at or above this rate, the render is considered\ninteractive and the mapper may be adjusted (depending on the\nrender mode). Initial value is 1.0.\n"},
  {"GetInteractiveUpdateRateMinValue", PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMinValue, METH_VARARGS,
   "V.GetInteractiveUpdateRateMinValue() -> float\nC++: virtual double GetInteractiveUpdateRateMinValue()\n\nIf the DesiredUpdateRate of the vtkRenderWindow that caused the\nRender falls at or above this rate, the render is considered\ninteractive and the mapper may be adjusted (depending on the\nrender mode). Initial value is 1.0.\n"},
  {"GetInteractiveUpdateRateMaxValue", PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMaxValue, METH_VARARGS,
   "V.GetInteractiveUpdateRateMaxValue() -> float\nC++: virtual double GetInteractiveUpdateRateMaxValue()\n\nIf the DesiredUpdateRate of the vtkRenderWindow that caused the\nRender falls at or above this rate, the render is considered\ninteractive and the mapper may be adjusted (depending on the\nrender mode). Initial value is 1.0.\n"},
  {"GetInteractiveUpdateRate", PyvtkSmartVolumeMapper_GetInteractiveUpdateRate, METH_VARARGS,
   "V.GetInteractiveUpdateRate() -> float\nC++: virtual double GetInteractiveUpdateRate()\n\nGet the update rate at or above which this is considered an\ninteractive render. Initial value is 1.0.\n"},
  {"SetInteractiveAdjustSampleDistances", PyvtkSmartVolumeMapper_SetInteractiveAdjustSampleDistances, METH_VARARGS,
   "V.SetInteractiveAdjustSampleDistances(int)\nC++: virtual void SetInteractiveAdjustSampleDistances(\n    vtkTypeBool _arg)\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"GetInteractiveAdjustSampleDistancesMinValue", PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMinValue, METH_VARARGS,
   "V.GetInteractiveAdjustSampleDistancesMinValue() -> int\nC++: virtual vtkTypeBool GetInteractiveAdjustSampleDistancesMinValue(\n    )\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"GetInteractiveAdjustSampleDistancesMaxValue", PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMaxValue, METH_VARARGS,
   "V.GetInteractiveAdjustSampleDistancesMaxValue() -> int\nC++: virtual vtkTypeBool GetInteractiveAdjustSampleDistancesMaxValue(\n    )\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"GetInteractiveAdjustSampleDistances", PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistances, METH_VARARGS,
   "V.GetInteractiveAdjustSampleDistances() -> int\nC++: virtual vtkTypeBool GetInteractiveAdjustSampleDistances()\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"InteractiveAdjustSampleDistancesOn", PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOn, METH_VARARGS,
   "V.InteractiveAdjustSampleDistancesOn()\nC++: virtual void InteractiveAdjustSampleDistancesOn()\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"InteractiveAdjustSampleDistancesOff", PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOff, METH_VARARGS,
   "V.InteractiveAdjustSampleDistancesOff()\nC++: virtual void InteractiveAdjustSampleDistancesOff()\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"SetAutoAdjustSampleDistances", PyvtkSmartVolumeMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "V.SetAutoAdjustSampleDistances(int)\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"GetAutoAdjustSampleDistances", PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "V.GetAutoAdjustSampleDistances() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOn()\nC++: virtual void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOff()\nC++: virtual void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"SetSampleDistance", PyvtkSmartVolumeMapper_SetSampleDistance, METH_VARARGS,
   "V.SetSampleDistance(float)\nC++: virtual void SetSampleDistance(float _arg)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. If SampleDistance is\nnegative, it will be computed based on the dataset spacing.\nInitial value is -1.0.\n"},
  {"GetSampleDistance", PyvtkSmartVolumeMapper_GetSampleDistance, METH_VARARGS,
   "V.GetSampleDistance() -> float\nC++: virtual float GetSampleDistance()\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. If SampleDistance is\nnegative, it will be computed based on the dataset spacing.\nInitial value is -1.0.\n"},
  {"Render", PyvtkSmartVolumeMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {"ReleaseGraphicsResources", PyvtkSmartVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"SetVectorMode", PyvtkSmartVolumeMapper_SetVectorMode, METH_VARARGS,
   "V.SetVectorMode(int)\nC++: void SetVectorMode(int mode)\n\nVectorMode is a special rendering mode for 3-component vectors\nwhich makes use of GPURayCastMapper's independent-component\ncapabilities. In this mode, a single component in the vector can\nbe selected for rendering. In addition, the mapper can compute a\nscalar field representing the magnitude of this vector using a\nvtkImageMagnitude object (MAGNITUDE mode).\n"},
  {"GetVectorMode", PyvtkSmartVolumeMapper_GetVectorMode, METH_VARARGS,
   "V.GetVectorMode() -> int\nC++: virtual int GetVectorMode()\n\nVectorMode is a special rendering mode for 3-component vectors\nwhich makes use of GPURayCastMapper's independent-component\ncapabilities. In this mode, a single component in the vector can\nbe selected for rendering. In addition, the mapper can compute a\nscalar field representing the magnitude of this vector using a\nvtkImageMagnitude object (MAGNITUDE mode).\n"},
  {"SetVectorComponent", PyvtkSmartVolumeMapper_SetVectorComponent, METH_VARARGS,
   "V.SetVectorComponent(int)\nC++: virtual void SetVectorComponent(int _arg)\n\nVectorMode is a special rendering mode for 3-component vectors\nwhich makes use of GPURayCastMapper's independent-component\ncapabilities. In this mode, a single component in the vector can\nbe selected for rendering. In addition, the mapper can compute a\nscalar field representing the magnitude of this vector using a\nvtkImageMagnitude object (MAGNITUDE mode).\n"},
  {"GetVectorComponentMinValue", PyvtkSmartVolumeMapper_GetVectorComponentMinValue, METH_VARARGS,
   "V.GetVectorComponentMinValue() -> int\nC++: virtual int GetVectorComponentMinValue()\n\nVectorMode is a special rendering mode for 3-component vectors\nwhich makes use of GPURayCastMapper's independent-component\ncapabilities. In this mode, a single component in the vector can\nbe selected for rendering. In addition, the mapper can compute a\nscalar field representing the magnitude of this vector using a\nvtkImageMagnitude object (MAGNITUDE mode).\n"},
  {"GetVectorComponentMaxValue", PyvtkSmartVolumeMapper_GetVectorComponentMaxValue, METH_VARARGS,
   "V.GetVectorComponentMaxValue() -> int\nC++: virtual int GetVectorComponentMaxValue()\n\nVectorMode is a special rendering mode for 3-component vectors\nwhich makes use of GPURayCastMapper's independent-component\ncapabilities. In this mode, a single component in the vector can\nbe selected for rendering. In addition, the mapper can compute a\nscalar field representing the magnitude of this vector using a\nvtkImageMagnitude object (MAGNITUDE mode).\n"},
  {"GetVectorComponent", PyvtkSmartVolumeMapper_GetVectorComponent, METH_VARARGS,
   "V.GetVectorComponent() -> int\nC++: virtual int GetVectorComponent()\n\nVectorMode is a special rendering mode for 3-component vectors\nwhich makes use of GPURayCastMapper's independent-component\ncapabilities. In this mode, a single component in the vector can\nbe selected for rendering. In addition, the mapper can compute a\nscalar field representing the magnitude of this vector using a\nvtkImageMagnitude object (MAGNITUDE mode).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSmartVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumeOpenGL2Python.vtkSmartVolumeMapper", // tp_name
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
  PyvtkSmartVolumeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSmartVolumeMapper_StaticNew()
{
  return vtkSmartVolumeMapper::New();
}

PyObject *PyvtkSmartVolumeMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSmartVolumeMapper_Type, PyvtkSmartVolumeMapper_Methods,
    "vtkSmartVolumeMapper",
 &PyvtkSmartVolumeMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkSmartVolumeMapper_Type;

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

  PyType_Ready(&PyvtkSmartVolumeMapper_VectorModeType_Type);
  PyvtkSmartVolumeMapper_VectorModeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSmartVolumeMapper_VectorModeType_Type);

  o = (PyObject *)&PyvtkSmartVolumeMapper_VectorModeType_Type;
  if (PyDict_SetItemString(d, "VectorModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "DefaultRenderMode", vtkSmartVolumeMapper::DefaultRenderMode },
        { "RayCastRenderMode", vtkSmartVolumeMapper::RayCastRenderMode },
        { "GPURenderMode", vtkSmartVolumeMapper::GPURenderMode },
        { "OSPRayRenderMode", vtkSmartVolumeMapper::OSPRayRenderMode },
        { "UndefinedRenderMode", vtkSmartVolumeMapper::UndefinedRenderMode },
        { "InvalidRenderMode", vtkSmartVolumeMapper::InvalidRenderMode },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSmartVolumeMapper::VectorModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DISABLED", vtkSmartVolumeMapper::DISABLED },
        { "MAGNITUDE", vtkSmartVolumeMapper::MAGNITUDE },
        { "COMPONENT", vtkSmartVolumeMapper::COMPONENT },
      };

    o = PyvtkSmartVolumeMapper_VectorModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSmartVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmartVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSmartVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

