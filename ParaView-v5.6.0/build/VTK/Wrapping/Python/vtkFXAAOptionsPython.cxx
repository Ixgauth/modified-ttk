// python wrapper for vtkFXAAOptions
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
#include "vtkFXAAOptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFXAAOptions(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFXAAOptions_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFXAAOptions_Doc =
  "vtkFXAAOptions - Configuration for FXAA implementations.\n\n"
  "Superclass: vtkObject\n\n"
  "This class encapsulates the settings for vtkOpenGLFXAAFilter.\n\n";

static PyTypeObject PyvtkFXAAOptions_DebugOption_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkFXAAOptions.DebugOption", // tp_name
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

PyObject *PyvtkFXAAOptions_DebugOption_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkFXAAOptions_DebugOption_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkFXAAOptions_DebugOption_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkFXAAOptions_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFXAAOptions::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFXAAOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFXAAOptions *tempr = vtkFXAAOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFXAAOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFXAAOptions::NewInstance());

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
PyvtkFXAAOptions_SetRelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeContrastThreshold(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetRelativeContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetRelativeContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThresholdMinValue() :
      op->vtkFXAAOptions::GetRelativeContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetRelativeContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThresholdMaxValue() :
      op->vtkFXAAOptions::GetRelativeContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetRelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThreshold() :
      op->vtkFXAAOptions::GetRelativeContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SetHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHardContrastThreshold(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetHardContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetHardContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThresholdMinValue() :
      op->vtkFXAAOptions::GetHardContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetHardContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThresholdMaxValue() :
      op->vtkFXAAOptions::GetHardContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThreshold() :
      op->vtkFXAAOptions::GetHardContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SetSubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubpixelBlendLimit(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetSubpixelBlendLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetSubpixelBlendLimitMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimitMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimitMinValue() :
      op->vtkFXAAOptions::GetSubpixelBlendLimitMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetSubpixelBlendLimitMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimitMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimitMaxValue() :
      op->vtkFXAAOptions::GetSubpixelBlendLimitMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetSubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimit() :
      op->vtkFXAAOptions::GetSubpixelBlendLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SetSubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubpixelContrastThreshold(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetSubpixelContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetSubpixelContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThresholdMinValue() :
      op->vtkFXAAOptions::GetSubpixelContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetSubpixelContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThresholdMaxValue() :
      op->vtkFXAAOptions::GetSubpixelContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetSubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThreshold() :
      op->vtkFXAAOptions::GetSubpixelContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SetUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHighQualityEndpoints(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetUseHighQualityEndpoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseHighQualityEndpoints() :
      op->vtkFXAAOptions::GetUseHighQualityEndpoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_UseHighQualityEndpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHighQualityEndpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHighQualityEndpointsOn();
    }
    else
    {
      op->vtkFXAAOptions::UseHighQualityEndpointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_UseHighQualityEndpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHighQualityEndpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHighQualityEndpointsOff();
    }
    else
    {
      op->vtkFXAAOptions::UseHighQualityEndpointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SetEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndpointSearchIterations(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetEndpointSearchIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetEndpointSearchIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterationsMinValue() :
      op->vtkFXAAOptions::GetEndpointSearchIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetEndpointSearchIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterationsMaxValue() :
      op->vtkFXAAOptions::GetEndpointSearchIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterations() :
      op->vtkFXAAOptions::GetEndpointSearchIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_SetDebugOptionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOptionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  typedef vtkFXAAOptions::DebugOption temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkFXAAOptions.DebugOption"))
  {
    if (ap.IsBound())
    {
      op->SetDebugOptionValue(temp0);
    }
    else
    {
      op->vtkFXAAOptions::SetDebugOptionValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFXAAOptions_GetDebugOptionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOptionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFXAAOptions *op = static_cast<vtkFXAAOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkFXAAOptions::DebugOption tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetDebugOptionValue() :
      op->vtkFXAAOptions::GetDebugOptionValue());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkFXAAOptions_DebugOption_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFXAAOptions_Methods[] = {
  {"IsTypeOf", PyvtkFXAAOptions_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFXAAOptions_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFXAAOptions_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFXAAOptions\nC++: static vtkFXAAOptions *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFXAAOptions_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFXAAOptions\nC++: vtkFXAAOptions *NewInstance()\n\n"},
  {"SetRelativeContrastThreshold", PyvtkFXAAOptions_SetRelativeContrastThreshold, METH_VARARGS,
   "V.SetRelativeContrastThreshold(float)\nC++: virtual void SetRelativeContrastThreshold(float _arg)\n\nThreshold for applying FXAA to a pixel, relative to the maximum\nluminosity of its 4 immediate neighbors.\n\n* The luminosity of the current pixel and it's NSWE neighbors is\n  computed.\n* The maximum luminosity and luminosity range (contrast) of all 5\npixels is\n* found. If the contrast is less than RelativeContrastThreshold *\nmaxLum,\n* the pixel is not considered aliased and will not be affected by\nFXAA.\n\n* Suggested settings:\n* - 1/3: Too little\n* - 1/4: Low quality\n* - 1/8: High quality (default)\n* - 1/16: Overkill\n"},
  {"GetRelativeContrastThresholdMinValue", PyvtkFXAAOptions_GetRelativeContrastThresholdMinValue, METH_VARARGS,
   "V.GetRelativeContrastThresholdMinValue() -> float\nC++: virtual float GetRelativeContrastThresholdMinValue()\n\nThreshold for applying FXAA to a pixel, relative to the maximum\nluminosity of its 4 immediate neighbors.\n\n* The luminosity of the current pixel and it's NSWE neighbors is\n  computed.\n* The maximum luminosity and luminosity range (contrast) of all 5\npixels is\n* found. If the contrast is less than RelativeContrastThreshold *\nmaxLum,\n* the pixel is not considered aliased and will not be affected by\nFXAA.\n\n* Suggested settings:\n* - 1/3: Too little\n* - 1/4: Low quality\n* - 1/8: High quality (default)\n* - 1/16: Overkill\n"},
  {"GetRelativeContrastThresholdMaxValue", PyvtkFXAAOptions_GetRelativeContrastThresholdMaxValue, METH_VARARGS,
   "V.GetRelativeContrastThresholdMaxValue() -> float\nC++: virtual float GetRelativeContrastThresholdMaxValue()\n\nThreshold for applying FXAA to a pixel, relative to the maximum\nluminosity of its 4 immediate neighbors.\n\n* The luminosity of the current pixel and it's NSWE neighbors is\n  computed.\n* The maximum luminosity and luminosity range (contrast) of all 5\npixels is\n* found. If the contrast is less than RelativeContrastThreshold *\nmaxLum,\n* the pixel is not considered aliased and will not be affected by\nFXAA.\n\n* Suggested settings:\n* - 1/3: Too little\n* - 1/4: Low quality\n* - 1/8: High quality (default)\n* - 1/16: Overkill\n"},
  {"GetRelativeContrastThreshold", PyvtkFXAAOptions_GetRelativeContrastThreshold, METH_VARARGS,
   "V.GetRelativeContrastThreshold() -> float\nC++: virtual float GetRelativeContrastThreshold()\n\nThreshold for applying FXAA to a pixel, relative to the maximum\nluminosity of its 4 immediate neighbors.\n\n* The luminosity of the current pixel and it's NSWE neighbors is\n  computed.\n* The maximum luminosity and luminosity range (contrast) of all 5\npixels is\n* found. If the contrast is less than RelativeContrastThreshold *\nmaxLum,\n* the pixel is not considered aliased and will not be affected by\nFXAA.\n\n* Suggested settings:\n* - 1/3: Too little\n* - 1/4: Low quality\n* - 1/8: High quality (default)\n* - 1/16: Overkill\n"},
  {"SetHardContrastThreshold", PyvtkFXAAOptions_SetHardContrastThreshold, METH_VARARGS,
   "V.SetHardContrastThreshold(float)\nC++: virtual void SetHardContrastThreshold(float _arg)\n\nSimilar to RelativeContrastThreshold, but not scaled by the\nmaximum luminosity.\n\n* If the contrast of the current pixel and it's 4 immediate NSWE\n  neighbors is\n* less than HardContrastThreshold, the pixel is not considered\n  aliased and\n* will not be affected by FXAA.\n\n* Suggested settings:\n* - 1/32: Visible limit\n* - 1/16: High quality (default)\n* - 1/12: Upper limit (start of visible unfiltered edges)\n"},
  {"GetHardContrastThresholdMinValue", PyvtkFXAAOptions_GetHardContrastThresholdMinValue, METH_VARARGS,
   "V.GetHardContrastThresholdMinValue() -> float\nC++: virtual float GetHardContrastThresholdMinValue()\n\nSimilar to RelativeContrastThreshold, but not scaled by the\nmaximum luminosity.\n\n* If the contrast of the current pixel and it's 4 immediate NSWE\n  neighbors is\n* less than HardContrastThreshold, the pixel is not considered\n  aliased and\n* will not be affected by FXAA.\n\n* Suggested settings:\n* - 1/32: Visible limit\n* - 1/16: High quality (default)\n* - 1/12: Upper limit (start of visible unfiltered edges)\n"},
  {"GetHardContrastThresholdMaxValue", PyvtkFXAAOptions_GetHardContrastThresholdMaxValue, METH_VARARGS,
   "V.GetHardContrastThresholdMaxValue() -> float\nC++: virtual float GetHardContrastThresholdMaxValue()\n\nSimilar to RelativeContrastThreshold, but not scaled by the\nmaximum luminosity.\n\n* If the contrast of the current pixel and it's 4 immediate NSWE\n  neighbors is\n* less than HardContrastThreshold, the pixel is not considered\n  aliased and\n* will not be affected by FXAA.\n\n* Suggested settings:\n* - 1/32: Visible limit\n* - 1/16: High quality (default)\n* - 1/12: Upper limit (start of visible unfiltered edges)\n"},
  {"GetHardContrastThreshold", PyvtkFXAAOptions_GetHardContrastThreshold, METH_VARARGS,
   "V.GetHardContrastThreshold() -> float\nC++: virtual float GetHardContrastThreshold()\n\nSimilar to RelativeContrastThreshold, but not scaled by the\nmaximum luminosity.\n\n* If the contrast of the current pixel and it's 4 immediate NSWE\n  neighbors is\n* less than HardContrastThreshold, the pixel is not considered\n  aliased and\n* will not be affected by FXAA.\n\n* Suggested settings:\n* - 1/32: Visible limit\n* - 1/16: High quality (default)\n* - 1/12: Upper limit (start of visible unfiltered edges)\n"},
  {"SetSubpixelBlendLimit", PyvtkFXAAOptions_SetSubpixelBlendLimit, METH_VARARGS,
   "V.SetSubpixelBlendLimit(float)\nC++: virtual void SetSubpixelBlendLimit(float _arg)\n\nSubpixel aliasing is corrected by applying a lowpass filter to\nthe current pixel. This is implemented by blending an average of\nthe 3x3 neighborhood around the pixel into the final result. The\namount of blending is determined by comparing the detected amount\nof subpixel aliasing to the total contrasting of the CNSWE\npixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* This parameter sets an upper limit to the amount of subpixel\n  blending to\n* prevent the image from simply getting blurred.\n\n* Suggested settings:\n* - 1/2: Low amount of blending.\n* - 3/4: Medium amount of blending (default)\n* - 7/8: High amount of blending.\n* - 1: Maximum amount of blending.\n"},
  {"GetSubpixelBlendLimitMinValue", PyvtkFXAAOptions_GetSubpixelBlendLimitMinValue, METH_VARARGS,
   "V.GetSubpixelBlendLimitMinValue() -> float\nC++: virtual float GetSubpixelBlendLimitMinValue()\n\nSubpixel aliasing is corrected by applying a lowpass filter to\nthe current pixel. This is implemented by blending an average of\nthe 3x3 neighborhood around the pixel into the final result. The\namount of blending is determined by comparing the detected amount\nof subpixel aliasing to the total contrasting of the CNSWE\npixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* This parameter sets an upper limit to the amount of subpixel\n  blending to\n* prevent the image from simply getting blurred.\n\n* Suggested settings:\n* - 1/2: Low amount of blending.\n* - 3/4: Medium amount of blending (default)\n* - 7/8: High amount of blending.\n* - 1: Maximum amount of blending.\n"},
  {"GetSubpixelBlendLimitMaxValue", PyvtkFXAAOptions_GetSubpixelBlendLimitMaxValue, METH_VARARGS,
   "V.GetSubpixelBlendLimitMaxValue() -> float\nC++: virtual float GetSubpixelBlendLimitMaxValue()\n\nSubpixel aliasing is corrected by applying a lowpass filter to\nthe current pixel. This is implemented by blending an average of\nthe 3x3 neighborhood around the pixel into the final result. The\namount of blending is determined by comparing the detected amount\nof subpixel aliasing to the total contrasting of the CNSWE\npixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* This parameter sets an upper limit to the amount of subpixel\n  blending to\n* prevent the image from simply getting blurred.\n\n* Suggested settings:\n* - 1/2: Low amount of blending.\n* - 3/4: Medium amount of blending (default)\n* - 7/8: High amount of blending.\n* - 1: Maximum amount of blending.\n"},
  {"GetSubpixelBlendLimit", PyvtkFXAAOptions_GetSubpixelBlendLimit, METH_VARARGS,
   "V.GetSubpixelBlendLimit() -> float\nC++: virtual float GetSubpixelBlendLimit()\n\nSubpixel aliasing is corrected by applying a lowpass filter to\nthe current pixel. This is implemented by blending an average of\nthe 3x3 neighborhood around the pixel into the final result. The\namount of blending is determined by comparing the detected amount\nof subpixel aliasing to the total contrasting of the CNSWE\npixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* This parameter sets an upper limit to the amount of subpixel\n  blending to\n* prevent the image from simply getting blurred.\n\n* Suggested settings:\n* - 1/2: Low amount of blending.\n* - 3/4: Medium amount of blending (default)\n* - 7/8: High amount of blending.\n* - 1: Maximum amount of blending.\n"},
  {"SetSubpixelContrastThreshold", PyvtkFXAAOptions_SetSubpixelContrastThreshold, METH_VARARGS,
   "V.SetSubpixelContrastThreshold(float)\nC++: virtual void SetSubpixelContrastThreshold(float _arg)\n\nMinimum amount of subpixel aliasing required for subpixel\nantialiasing to be applied.\n\n* Subpixel aliasing is corrected by applying a lowpass filter to\n  the current\n* pixel. This is implemented by blending an average of the 3x3\n  neighborhood\n* around the pixel into the final result. The amount of blending\n  is\n* determined by comparing the detected amount of subpixel\n  aliasing to the\n* total contrasting of the CNSWE pixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* If SubpixelBlending is less than this threshold, no lowpass\n  blending will\n* occur.\n\n* Suggested settings:\n* - 1/2: Low subpixel aliasing removal\n* - 1/3: Medium subpixel aliasing removal\n* - 1/4: Default subpixel aliasing removal\n* - 1/8: High subpixel aliasing removal\n* - 0: Complete subpixel aliasing removal\n"},
  {"GetSubpixelContrastThresholdMinValue", PyvtkFXAAOptions_GetSubpixelContrastThresholdMinValue, METH_VARARGS,
   "V.GetSubpixelContrastThresholdMinValue() -> float\nC++: virtual float GetSubpixelContrastThresholdMinValue()\n\nMinimum amount of subpixel aliasing required for subpixel\nantialiasing to be applied.\n\n* Subpixel aliasing is corrected by applying a lowpass filter to\n  the current\n* pixel. This is implemented by blending an average of the 3x3\n  neighborhood\n* around the pixel into the final result. The amount of blending\n  is\n* determined by comparing the detected amount of subpixel\n  aliasing to the\n* total contrasting of the CNSWE pixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* If SubpixelBlending is less than this threshold, no lowpass\n  blending will\n* occur.\n\n* Suggested settings:\n* - 1/2: Low subpixel aliasing removal\n* - 1/3: Medium subpixel aliasing removal\n* - 1/4: Default subpixel aliasing removal\n* - 1/8: High subpixel aliasing removal\n* - 0: Complete subpixel aliasing removal\n"},
  {"GetSubpixelContrastThresholdMaxValue", PyvtkFXAAOptions_GetSubpixelContrastThresholdMaxValue, METH_VARARGS,
   "V.GetSubpixelContrastThresholdMaxValue() -> float\nC++: virtual float GetSubpixelContrastThresholdMaxValue()\n\nMinimum amount of subpixel aliasing required for subpixel\nantialiasing to be applied.\n\n* Subpixel aliasing is corrected by applying a lowpass filter to\n  the current\n* pixel. This is implemented by blending an average of the 3x3\n  neighborhood\n* around the pixel into the final result. The amount of blending\n  is\n* determined by comparing the detected amount of subpixel\n  aliasing to the\n* total contrasting of the CNSWE pixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* If SubpixelBlending is less than this threshold, no lowpass\n  blending will\n* occur.\n\n* Suggested settings:\n* - 1/2: Low subpixel aliasing removal\n* - 1/3: Medium subpixel aliasing removal\n* - 1/4: Default subpixel aliasing removal\n* - 1/8: High subpixel aliasing removal\n* - 0: Complete subpixel aliasing removal\n"},
  {"GetSubpixelContrastThreshold", PyvtkFXAAOptions_GetSubpixelContrastThreshold, METH_VARARGS,
   "V.GetSubpixelContrastThreshold() -> float\nC++: virtual float GetSubpixelContrastThreshold()\n\nMinimum amount of subpixel aliasing required for subpixel\nantialiasing to be applied.\n\n* Subpixel aliasing is corrected by applying a lowpass filter to\n  the current\n* pixel. This is implemented by blending an average of the 3x3\n  neighborhood\n* around the pixel into the final result. The amount of blending\n  is\n* determined by comparing the detected amount of subpixel\n  aliasing to the\n* total contrasting of the CNSWE pixels:\n\n* SubpixelBlending = abs(lumC - lumAveNSWE) / (lumMaxCNSWE -\n  lumMinCNSWE)\n\n* If SubpixelBlending is less than this threshold, no lowpass\n  blending will\n* occur.\n\n* Suggested settings:\n* - 1/2: Low subpixel aliasing removal\n* - 1/3: Medium subpixel aliasing removal\n* - 1/4: Default subpixel aliasing removal\n* - 1/8: High subpixel aliasing removal\n* - 0: Complete subpixel aliasing removal\n"},
  {"SetUseHighQualityEndpoints", PyvtkFXAAOptions_SetUseHighQualityEndpoints, METH_VARARGS,
   "V.SetUseHighQualityEndpoints(bool)\nC++: virtual void SetUseHighQualityEndpoints(bool _arg)\n\nUse an improved edge endpoint detection algorithm.\n\n* If true, a modified edge endpoint detection algorithm is used\n  that requires\n* more texture lookups, but will properly detect aliased\n  single-pixel lines.\n\n* If false, the edge endpoint algorithm proposed by NVIDIA will\n  by used. This\n* algorithm is faster (fewer lookups), but will fail to detect\n  endpoints of\n* single pixel edge steps.\n\n* Default setting is true.\n"},
  {"GetUseHighQualityEndpoints", PyvtkFXAAOptions_GetUseHighQualityEndpoints, METH_VARARGS,
   "V.GetUseHighQualityEndpoints() -> bool\nC++: virtual bool GetUseHighQualityEndpoints()\n\nUse an improved edge endpoint detection algorithm.\n\n* If true, a modified edge endpoint detection algorithm is used\n  that requires\n* more texture lookups, but will properly detect aliased\n  single-pixel lines.\n\n* If false, the edge endpoint algorithm proposed by NVIDIA will\n  by used. This\n* algorithm is faster (fewer lookups), but will fail to detect\n  endpoints of\n* single pixel edge steps.\n\n* Default setting is true.\n"},
  {"UseHighQualityEndpointsOn", PyvtkFXAAOptions_UseHighQualityEndpointsOn, METH_VARARGS,
   "V.UseHighQualityEndpointsOn()\nC++: virtual void UseHighQualityEndpointsOn()\n\nUse an improved edge endpoint detection algorithm.\n\n* If true, a modified edge endpoint detection algorithm is used\n  that requires\n* more texture lookups, but will properly detect aliased\n  single-pixel lines.\n\n* If false, the edge endpoint algorithm proposed by NVIDIA will\n  by used. This\n* algorithm is faster (fewer lookups), but will fail to detect\n  endpoints of\n* single pixel edge steps.\n\n* Default setting is true.\n"},
  {"UseHighQualityEndpointsOff", PyvtkFXAAOptions_UseHighQualityEndpointsOff, METH_VARARGS,
   "V.UseHighQualityEndpointsOff()\nC++: virtual void UseHighQualityEndpointsOff()\n\nUse an improved edge endpoint detection algorithm.\n\n* If true, a modified edge endpoint detection algorithm is used\n  that requires\n* more texture lookups, but will properly detect aliased\n  single-pixel lines.\n\n* If false, the edge endpoint algorithm proposed by NVIDIA will\n  by used. This\n* algorithm is faster (fewer lookups), but will fail to detect\n  endpoints of\n* single pixel edge steps.\n\n* Default setting is true.\n"},
  {"SetEndpointSearchIterations", PyvtkFXAAOptions_SetEndpointSearchIterations, METH_VARARGS,
   "V.SetEndpointSearchIterations(int)\nC++: virtual void SetEndpointSearchIterations(int _arg)\n\nSet the number of iterations for the endpoint search algorithm.\nIncreasing this value will increase runtime, but also properly\ndetect longer edges. The current implementation steps one pixel\nin both the positive and negative directions per iteration. The\ndefault value is 12, which will resolve endpoints of edges < 25\npixels long (2 * 12 + 1).\n"},
  {"GetEndpointSearchIterationsMinValue", PyvtkFXAAOptions_GetEndpointSearchIterationsMinValue, METH_VARARGS,
   "V.GetEndpointSearchIterationsMinValue() -> int\nC++: virtual int GetEndpointSearchIterationsMinValue()\n\nSet the number of iterations for the endpoint search algorithm.\nIncreasing this value will increase runtime, but also properly\ndetect longer edges. The current implementation steps one pixel\nin both the positive and negative directions per iteration. The\ndefault value is 12, which will resolve endpoints of edges < 25\npixels long (2 * 12 + 1).\n"},
  {"GetEndpointSearchIterationsMaxValue", PyvtkFXAAOptions_GetEndpointSearchIterationsMaxValue, METH_VARARGS,
   "V.GetEndpointSearchIterationsMaxValue() -> int\nC++: virtual int GetEndpointSearchIterationsMaxValue()\n\nSet the number of iterations for the endpoint search algorithm.\nIncreasing this value will increase runtime, but also properly\ndetect longer edges. The current implementation steps one pixel\nin both the positive and negative directions per iteration. The\ndefault value is 12, which will resolve endpoints of edges < 25\npixels long (2 * 12 + 1).\n"},
  {"GetEndpointSearchIterations", PyvtkFXAAOptions_GetEndpointSearchIterations, METH_VARARGS,
   "V.GetEndpointSearchIterations() -> int\nC++: virtual int GetEndpointSearchIterations()\n\nSet the number of iterations for the endpoint search algorithm.\nIncreasing this value will increase runtime, but also properly\ndetect longer edges. The current implementation steps one pixel\nin both the positive and negative directions per iteration. The\ndefault value is 12, which will resolve endpoints of edges < 25\npixels long (2 * 12 + 1).\n"},
  {"SetDebugOptionValue", PyvtkFXAAOptions_SetDebugOptionValue, METH_VARARGS,
   "V.SetDebugOptionValue(DebugOption)\nC++: virtual void SetDebugOptionValue(DebugOption _arg)\n\nDebugging options that affect the output color buffer. See\nvtkFXAAFilterFS.glsl for details. Only one may be active at a\ntime.\n"},
  {"GetDebugOptionValue", PyvtkFXAAOptions_GetDebugOptionValue, METH_VARARGS,
   "V.GetDebugOptionValue() -> DebugOption\nC++: virtual DebugOption GetDebugOptionValue()\n\nDebugging options that affect the output color buffer. See\nvtkFXAAFilterFS.glsl for details. Only one may be active at a\ntime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFXAAOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkFXAAOptions", // tp_name
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
  PyvtkFXAAOptions_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFXAAOptions_StaticNew()
{
  return vtkFXAAOptions::New();
}

PyObject *PyvtkFXAAOptions_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFXAAOptions_Type, PyvtkFXAAOptions_Methods,
    "vtkFXAAOptions",
 &PyvtkFXAAOptions_StaticNew);

  PyTypeObject *pytype = &PyvtkFXAAOptions_Type;

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

  PyType_Ready(&PyvtkFXAAOptions_DebugOption_Type);
  PyvtkFXAAOptions_DebugOption_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkFXAAOptions_DebugOption_Type);

  o = (PyObject *)&PyvtkFXAAOptions_DebugOption_Type;
  if (PyDict_SetItemString(d, "DebugOption", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkFXAAOptions::DebugOption cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "FXAA_NO_DEBUG", vtkFXAAOptions::FXAA_NO_DEBUG },
        { "FXAA_DEBUG_SUBPIXEL_ALIASING", vtkFXAAOptions::FXAA_DEBUG_SUBPIXEL_ALIASING },
        { "FXAA_DEBUG_EDGE_DIRECTION", vtkFXAAOptions::FXAA_DEBUG_EDGE_DIRECTION },
        { "FXAA_DEBUG_EDGE_NUM_STEPS", vtkFXAAOptions::FXAA_DEBUG_EDGE_NUM_STEPS },
        { "FXAA_DEBUG_EDGE_DISTANCE", vtkFXAAOptions::FXAA_DEBUG_EDGE_DISTANCE },
        { "FXAA_DEBUG_EDGE_SAMPLE_OFFSET", vtkFXAAOptions::FXAA_DEBUG_EDGE_SAMPLE_OFFSET },
        { "FXAA_DEBUG_ONLY_SUBPIX_AA", vtkFXAAOptions::FXAA_DEBUG_ONLY_SUBPIX_AA },
        { "FXAA_DEBUG_ONLY_EDGE_AA", vtkFXAAOptions::FXAA_DEBUG_ONLY_EDGE_AA },
      };

    o = PyvtkFXAAOptions_DebugOption_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFXAAOptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFXAAOptions_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFXAAOptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

