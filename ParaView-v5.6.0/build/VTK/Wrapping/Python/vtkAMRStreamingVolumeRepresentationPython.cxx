// python wrapper for vtkAMRStreamingVolumeRepresentation
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
#include "vtkAMRStreamingVolumeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRStreamingVolumeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRStreamingVolumeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkAMRStreamingVolumeRepresentation_Doc =
  "vtkAMRStreamingVolumeRepresentation - representation used for volume\nrendering AMR datasets with ability to stream blocks.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkAMRStreamingVolumeRepresentation  is a representation used for\n"
  "volume rendering AMR datasets with ability to stream blocks from the\n"
  "input pipeline.\n\n";

static PyTypeObject PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkAMRStreamingVolumeRepresentation.ResamplingModes", // tp_name
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

PyObject *PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRStreamingVolumeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRStreamingVolumeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRStreamingVolumeRepresentation *tempr = vtkAMRStreamingVolumeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRStreamingVolumeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRStreamingVolumeRepresentation::NewInstance());

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
PyvtkAMRStreamingVolumeRepresentation_SetResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResamplingMode(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetResamplingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResamplingMode() :
      op->vtkAMRStreamingVolumeRepresentation::GetResamplingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkAMRStreamingVolumeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetNumberOfSamples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetStreamingRequestSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreamingRequestSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStreamingRequestSize(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetStreamingRequestSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingRequestSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStreamingRequestSizeMinValue() :
      op->vtkAMRStreamingVolumeRepresentation::GetStreamingRequestSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingRequestSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStreamingRequestSizeMaxValue() :
      op->vtkAMRStreamingVolumeRepresentation::GetStreamingRequestSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreamingRequestSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStreamingRequestSize() :
      op->vtkAMRStreamingVolumeRepresentation::GetStreamingRequestSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_Methods[] = {
  {nullptr, PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {nullptr, PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {nullptr, PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}



static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacity(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetScalarOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityUnitDistance(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetScalarOpacityUnitDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetShade(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShade(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetShade(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetIndependantComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependantComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndependantComponents(temp0);
    }
    else
    {
      op->vtkAMRStreamingVolumeRepresentation::SetIndependantComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingVolumeRepresentation_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingVolumeRepresentation *op = static_cast<vtkAMRStreamingVolumeRepresentation *>(vp);

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
      op->vtkAMRStreamingVolumeRepresentation::SetRequestedRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRStreamingVolumeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkAMRStreamingVolumeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRStreamingVolumeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRStreamingVolumeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkAMRStreamingVolumeRepresentation\nC++: static vtkAMRStreamingVolumeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRStreamingVolumeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRStreamingVolumeRepresentation\nC++: vtkAMRStreamingVolumeRepresentation *NewInstance()\n\n"},
  {"SetResamplingMode", PyvtkAMRStreamingVolumeRepresentation_SetResamplingMode, METH_VARARGS,
   "V.SetResamplingMode(int)\nC++: void SetResamplingMode(int val)\n\nThis control the logic used to determine how to place the\nresampling grid within the AMR bounds.\n\\li RESAMPLE_OVER_DATA_BOUNDS implies that the amr volume is\nset to the data bounds and is not updated as the user interacts.\n\\li RESAMPLE_USING_VIEW_FRUSTUM indicates that the uniform grid\n    must be\nrepositioned when the camera changes using the current view\nfrustum.\n"},
  {"GetResamplingMode", PyvtkAMRStreamingVolumeRepresentation_GetResamplingMode, METH_VARARGS,
   "V.GetResamplingMode() -> int\nC++: virtual int GetResamplingMode()\n\nThis control the logic used to determine how to place the\nresampling grid within the AMR bounds.\n\\li RESAMPLE_OVER_DATA_BOUNDS implies that the amr volume is\nset to the data bounds and is not updated as the user interacts.\n\\li RESAMPLE_USING_VIEW_FRUSTUM indicates that the uniform grid\n    must be\nrepositioned when the camera changes using the current view\nfrustum.\n"},
  {"ProcessViewRequest", PyvtkAMRStreamingVolumeRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {"SetVisibility", PyvtkAMRStreamingVolumeRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetNumberOfSamples", PyvtkAMRStreamingVolumeRepresentation_SetNumberOfSamples, METH_VARARGS,
   "V.SetNumberOfSamples(int, int, int)\nC++: void SetNumberOfSamples(int x, int y, int z)\n\nGet/Set the resample buffer size. This controls the resolution at\nwhich the data is resampled.\n"},
  {"SetStreamingRequestSize", PyvtkAMRStreamingVolumeRepresentation_SetStreamingRequestSize, METH_VARARGS,
   "V.SetStreamingRequestSize(int)\nC++: virtual void SetStreamingRequestSize(int _arg)\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {"GetStreamingRequestSizeMinValue", PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMinValue, METH_VARARGS,
   "V.GetStreamingRequestSizeMinValue() -> int\nC++: virtual int GetStreamingRequestSizeMinValue()\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {"GetStreamingRequestSizeMaxValue", PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSizeMaxValue, METH_VARARGS,
   "V.GetStreamingRequestSizeMaxValue() -> int\nC++: virtual int GetStreamingRequestSizeMaxValue()\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {"GetStreamingRequestSize", PyvtkAMRStreamingVolumeRepresentation_GetStreamingRequestSize, METH_VARARGS,
   "V.GetStreamingRequestSize() -> int\nC++: virtual int GetStreamingRequestSize()\n\nSet the number of blocks to request at a given time on a single\nprocess when streaming.\n"},
  {"SetInputArrayToProcess", PyvtkAMRStreamingVolumeRepresentation_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, int, int, int, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\n    override;\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: void SetInputArrayToProcess(int idx, vtkInformation *info)\n    override;\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName) override;\n\nSet the input data arrays that this algorithm will process.\n"},
  {"SetOrientation", PyvtkAMRStreamingVolumeRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {"SetOrigin", PyvtkAMRStreamingVolumeRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {"SetPickable", PyvtkAMRStreamingVolumeRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {"SetPosition", PyvtkAMRStreamingVolumeRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {"SetScale", PyvtkAMRStreamingVolumeRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {"SetInterpolationType", PyvtkAMRStreamingVolumeRepresentation_SetInterpolationType, METH_VARARGS,
   "V.SetInterpolationType(int)\nC++: void SetInterpolationType(int val)\n\n"},
  {"SetColor", PyvtkAMRStreamingVolumeRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(vtkColorTransferFunction)\nC++: void SetColor(vtkColorTransferFunction *lut)\n\n"},
  {"SetScalarOpacity", PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacity, METH_VARARGS,
   "V.SetScalarOpacity(vtkPiecewiseFunction)\nC++: void SetScalarOpacity(vtkPiecewiseFunction *pwf)\n\n"},
  {"SetScalarOpacityUnitDistance", PyvtkAMRStreamingVolumeRepresentation_SetScalarOpacityUnitDistance, METH_VARARGS,
   "V.SetScalarOpacityUnitDistance(float)\nC++: void SetScalarOpacityUnitDistance(double val)\n\n"},
  {"SetAmbient", PyvtkAMRStreamingVolumeRepresentation_SetAmbient, METH_VARARGS,
   "V.SetAmbient(float)\nC++: void SetAmbient(double)\n\n"},
  {"SetDiffuse", PyvtkAMRStreamingVolumeRepresentation_SetDiffuse, METH_VARARGS,
   "V.SetDiffuse(float)\nC++: void SetDiffuse(double)\n\n"},
  {"SetSpecular", PyvtkAMRStreamingVolumeRepresentation_SetSpecular, METH_VARARGS,
   "V.SetSpecular(float)\nC++: void SetSpecular(double)\n\n"},
  {"SetSpecularPower", PyvtkAMRStreamingVolumeRepresentation_SetSpecularPower, METH_VARARGS,
   "V.SetSpecularPower(float)\nC++: void SetSpecularPower(double)\n\n"},
  {"SetShade", PyvtkAMRStreamingVolumeRepresentation_SetShade, METH_VARARGS,
   "V.SetShade(bool)\nC++: void SetShade(bool)\n\n"},
  {"SetIndependantComponents", PyvtkAMRStreamingVolumeRepresentation_SetIndependantComponents, METH_VARARGS,
   "V.SetIndependantComponents(bool)\nC++: void SetIndependantComponents(bool)\n\n"},
  {"SetRequestedRenderMode", PyvtkAMRStreamingVolumeRepresentation_SetRequestedRenderMode, METH_VARARGS,
   "V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRStreamingVolumeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkAMRStreamingVolumeRepresentation", // tp_name
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
  PyvtkAMRStreamingVolumeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRStreamingVolumeRepresentation_StaticNew()
{
  return vtkAMRStreamingVolumeRepresentation::New();
}

PyObject *PyvtkAMRStreamingVolumeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRStreamingVolumeRepresentation_Type, PyvtkAMRStreamingVolumeRepresentation_Methods,
    "vtkAMRStreamingVolumeRepresentation",
 &PyvtkAMRStreamingVolumeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRStreamingVolumeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type);
  PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type);

  o = (PyObject *)&PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_Type;
  if (PyDict_SetItemString(d, "ResamplingModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkAMRStreamingVolumeRepresentation::ResamplingModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "RESAMPLE_OVER_DATA_BOUNDS", vtkAMRStreamingVolumeRepresentation::RESAMPLE_OVER_DATA_BOUNDS },
        { "RESAMPLE_USING_VIEW_FRUSTUM", vtkAMRStreamingVolumeRepresentation::RESAMPLE_USING_VIEW_FRUSTUM },
      };

    o = PyvtkAMRStreamingVolumeRepresentation_ResamplingModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRStreamingVolumeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRStreamingVolumeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRStreamingVolumeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

