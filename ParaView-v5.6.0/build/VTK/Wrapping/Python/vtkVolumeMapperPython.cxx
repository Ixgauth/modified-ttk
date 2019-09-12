// python wrapper for vtkVolumeMapper
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
#include "vtkVolumeMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkAbstractVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkAbstractVolumeMapper_ClassNew
#endif

static const char *PyvtkVolumeMapper_Doc =
  "vtkVolumeMapper - Abstract class for a volume mapper\n\n"
  "Superclass: vtkAbstractVolumeMapper\n\n"
  "vtkVolumeMapper is the abstract definition of a volume mapper for\n"
  "regular rectilinear data (vtkImageData). Several basic types of\n"
  "volume mappers are supported.\n\n";

static PyTypeObject PyvtkVolumeMapper_BlendModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkVolumeMapper.BlendModes", // tp_name
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

PyObject *PyvtkVolumeMapper_BlendModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkVolumeMapper_BlendModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkVolumeMapper_BlendModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkVolumeMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeMapper *tempr = vtkVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeMapper::NewInstance());

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
PyvtkVolumeMapper_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeMapper_SetInputData_Methods[] = {
  {nullptr, PyvtkVolumeMapper_SetInputData_s1, METH_VARARGS,
   "@V *vtkImageData"},
  {nullptr, PyvtkVolumeMapper_SetInputData_s2, METH_VARARGS,
   "@V *vtkDataSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVolumeMapper_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVolumeMapper_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkVolumeMapper_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkVolumeMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkVolumeMapper::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkVolumeMapper_GetInput_s1(self, args);
    case 1:
      return PyvtkVolumeMapper_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendMode(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetBlendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToComposite();
    }
    else
    {
      op->vtkVolumeMapper::SetBlendModeToComposite();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToMaximumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMaximumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMaximumIntensity();
    }
    else
    {
      op->vtkVolumeMapper::SetBlendModeToMaximumIntensity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToMinimumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMinimumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMinimumIntensity();
    }
    else
    {
      op->vtkVolumeMapper::SetBlendModeToMinimumIntensity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToAverageIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToAverageIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToAverageIntensity();
    }
    else
    {
      op->vtkVolumeMapper::SetBlendModeToAverageIntensity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToAdditive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToAdditive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToAdditive();
    }
    else
    {
      op->vtkVolumeMapper::SetBlendModeToAdditive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetBlendModeToIsoSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToIsoSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToIsoSurface();
    }
    else
    {
      op->vtkVolumeMapper::SetBlendModeToIsoSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkVolumeMapper::GetBlendMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetAverageIPScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAverageIPScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAverageIPScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkVolumeMapper::SetAverageIPScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetAverageIPScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAverageIPScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAverageIPScalarRange(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetAverageIPScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetAverageIPScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeMapper_SetAverageIPScalarRange_s1(self, args);
    case 1:
      return PyvtkVolumeMapper_SetAverageIPScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAverageIPScalarRange");
  return nullptr;
}



static PyObject *
PyvtkVolumeMapper_GetAverageIPScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAverageIPScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAverageIPScalarRange() :
      op->vtkVolumeMapper::GetAverageIPScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingMinValue() :
      op->vtkVolumeMapper::GetCroppingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingMaxValue() :
      op->vtkVolumeMapper::GetCroppingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkVolumeMapper::GetCropping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOn();
    }
    else
    {
      op->vtkVolumeMapper::CroppingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOff();
    }
    else
    {
      op->vtkVolumeMapper::CroppingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionPlanes(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeMapper_SetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkVolumeMapper_SetCroppingRegionPlanes_s1(self, args);
    case 1:
      return PyvtkVolumeMapper_SetCroppingRegionPlanes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegionPlanes");
  return nullptr;
}



static PyObject *
PyvtkVolumeMapper_GetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCroppingRegionPlanes() :
      op->vtkVolumeMapper::GetCroppingRegionPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetVoxelCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVoxelCroppingRegionPlanes() :
      op->vtkVolumeMapper::GetVoxelCroppingRegionPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlags(temp0);
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingRegionFlagsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlagsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlagsMinValue() :
      op->vtkVolumeMapper::GetCroppingRegionFlagsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingRegionFlagsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlagsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlagsMaxValue() :
      op->vtkVolumeMapper::GetCroppingRegionFlagsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlags() :
      op->vtkVolumeMapper::GetCroppingRegionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToSubVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlagsToSubVolume();
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToSubVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToFence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToFence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlagsToFence();
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToFence();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedFence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToInvertedFence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlagsToInvertedFence();
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToInvertedFence();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlagsToCross();
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlagsToInvertedCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlagsToInvertedCross();
    }
    else
    {
      op->vtkVolumeMapper::SetCroppingRegionFlagsToInvertedCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeMapper *op = static_cast<vtkVolumeMapper *>(vp);

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
      op->vtkVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkVolumeMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumeMapper\nC++: static vtkVolumeMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeMapper\nC++: vtkVolumeMapper *NewInstance()\n\n"},
  {"SetInputData", PyvtkVolumeMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *)\nV.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *)\n\nSet/Get the input data\n"},
  {"GetInput", PyvtkVolumeMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\nV.GetInput(int) -> vtkImageData\nC++: virtual vtkImageData *GetInput(const int port)\n\nSet/Get the input data\n"},
  {"SetBlendMode", PyvtkVolumeMapper_SetBlendMode, METH_VARARGS,
   "V.SetBlendMode(int)\nC++: virtual void SetBlendMode(int _arg)\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the same way composit ...\n [Truncated]\n"},
  {"SetBlendModeToComposite", PyvtkVolumeMapper_SetBlendModeToComposite, METH_VARARGS,
   "V.SetBlendModeToComposite()\nC++: void SetBlendModeToComposite()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the same way compo ...\n [Truncated]\n"},
  {"SetBlendModeToMaximumIntensity", PyvtkVolumeMapper_SetBlendModeToMaximumIntensity, METH_VARARGS,
   "V.SetBlendModeToMaximumIntensity()\nC++: void SetBlendModeToMaximumIntensity()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the  ...\n [Truncated]\n"},
  {"SetBlendModeToMinimumIntensity", PyvtkVolumeMapper_SetBlendModeToMinimumIntensity, METH_VARARGS,
   "V.SetBlendModeToMinimumIntensity()\nC++: void SetBlendModeToMinimumIntensity()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the  ...\n [Truncated]\n"},
  {"SetBlendModeToAverageIntensity", PyvtkVolumeMapper_SetBlendModeToAverageIntensity, METH_VARARGS,
   "V.SetBlendModeToAverageIntensity()\nC++: void SetBlendModeToAverageIntensity()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the  ...\n [Truncated]\n"},
  {"SetBlendModeToAdditive", PyvtkVolumeMapper_SetBlendModeToAdditive, METH_VARARGS,
   "V.SetBlendModeToAdditive()\nC++: void SetBlendModeToAdditive()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the same way composi ...\n [Truncated]\n"},
  {"SetBlendModeToIsoSurface", PyvtkVolumeMapper_SetBlendModeToIsoSurface, METH_VARARGS,
   "V.SetBlendModeToIsoSurface()\nC++: void SetBlendModeToIsoSurface()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the same way com ...\n [Truncated]\n"},
  {"GetBlendMode", PyvtkVolumeMapper_GetBlendMode, METH_VARARGS,
   "V.GetBlendMode() -> int\nC++: virtual int GetBlendMode()\n\nSet/Get the blend mode. The default mode is Composite where the\nscalar values are sampled through the volume and composited in a\nfront-to-back scheme through alpha blending. The final color and\nopacity is determined using the color and opacity transfer\nfunctions.\n\nMaximum and minimum intensity blend modes use the maximum and\nminimum scalar values, respectively, along the sampling ray. The\nfinal color and opacity is determined by passing the resultant\nvalue through the color and opacity transfer functions.\n\nAdditive blend mode accumulates scalar values by passing each\nvalue through the opacity transfer function and then adding up\nthe product of the value and its opacity. In other words, the\nscalar values are scaled using the opacity transfer function and\nsummed to derive the final color. Note that the resulting image\nis always grayscale i.e. aggregated values are not passed through\nthe color transfer function. This is because the final value is a\nderived value and not a real data value along the sampling ray.\n\nAverage intensity blend mode works similar to the additive blend\nmode where the scalar values are multiplied by opacity calculated\nfrom the opacity transfer function and then added. The additional\nstep here is to divide the sum by the number of samples taken\nthrough the volume. One can control the scalar range by setting\nthe AverageIPScalarRange ivar to disregard scalar values, not in\nthe range of interest, from the average computation. As is the\ncase with the additive intensity projection, the final image will\nalways be grayscale i.e. the aggregated values are not passed\nthrough the color transfer function. This is because the\nresultant value is a derived value and not a real data value\nalong the sampling ray.\n\nIsoSurface blend mode uses contour values defined by the user in\norder to display scalar values only when the ray crosses the\ncontour. It supports opacity the same way composite ble ...\n [Truncated]\n"},
  {"SetAverageIPScalarRange", PyvtkVolumeMapper_SetAverageIPScalarRange, METH_VARARGS,
   "V.SetAverageIPScalarRange(float, float)\nC++: void SetAverageIPScalarRange(double, double)\nV.SetAverageIPScalarRange((float, float))\nC++: void SetAverageIPScalarRange(double a[2])\n\n"},
  {"GetAverageIPScalarRange", PyvtkVolumeMapper_GetAverageIPScalarRange, METH_VARARGS,
   "V.GetAverageIPScalarRange() -> (float, float)\nC++: double *GetAverageIPScalarRange()\n\nSet/Get the scalar range to be considered for average intensity\nprojection blend mode. Only scalar values between this range will\nbe averaged during ray casting. This can be useful when volume\nrendering CT datasets where the areas occupied by air would\ndeviate the final rendering. By default, the range is set to\n(VTK_FLOAT_MIN, VTK_FLOAT_MAX).\n\\sa SetBlendModeToAverageIntensity()\n"},
  {"SetCropping", PyvtkVolumeMapper_SetCropping, METH_VARARGS,
   "V.SetCropping(int)\nC++: virtual void SetCropping(vtkTypeBool _arg)\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"GetCroppingMinValue", PyvtkVolumeMapper_GetCroppingMinValue, METH_VARARGS,
   "V.GetCroppingMinValue() -> int\nC++: virtual vtkTypeBool GetCroppingMinValue()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"GetCroppingMaxValue", PyvtkVolumeMapper_GetCroppingMaxValue, METH_VARARGS,
   "V.GetCroppingMaxValue() -> int\nC++: virtual vtkTypeBool GetCroppingMaxValue()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"GetCropping", PyvtkVolumeMapper_GetCropping, METH_VARARGS,
   "V.GetCropping() -> int\nC++: virtual vtkTypeBool GetCropping()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"CroppingOn", PyvtkVolumeMapper_CroppingOn, METH_VARARGS,
   "V.CroppingOn()\nC++: virtual void CroppingOn()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"CroppingOff", PyvtkVolumeMapper_CroppingOff, METH_VARARGS,
   "V.CroppingOff()\nC++: virtual void CroppingOff()\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"SetCroppingRegionPlanes", PyvtkVolumeMapper_SetCroppingRegionPlanes, METH_VARARGS,
   "V.SetCroppingRegionPlanes(float, float, float, float, float,\n    float)\nC++: void SetCroppingRegionPlanes(double, double, double, double,\n    double, double)\nV.SetCroppingRegionPlanes((float, float, float, float, float,\n    float))\nC++: void SetCroppingRegionPlanes(double a[6])\n\n"},
  {"GetCroppingRegionPlanes", PyvtkVolumeMapper_GetCroppingRegionPlanes, METH_VARARGS,
   "V.GetCroppingRegionPlanes() -> (float, float, float, float, float,\n     float)\nC++: double *GetCroppingRegionPlanes()\n\nSet/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax,\nzmin, zmax ) These planes are defined in volume coordinates -\nspacing and origin are considered.\n"},
  {"GetVoxelCroppingRegionPlanes", PyvtkVolumeMapper_GetVoxelCroppingRegionPlanes, METH_VARARGS,
   "V.GetVoxelCroppingRegionPlanes() -> (float, float, float, float,\n    float, float)\nC++: double *GetVoxelCroppingRegionPlanes()\n\nGet the cropping region planes in voxels. Only valid during the\nrendering process\n"},
  {"SetCroppingRegionFlags", PyvtkVolumeMapper_SetCroppingRegionFlags, METH_VARARGS,
   "V.SetCroppingRegionFlags(int)\nC++: virtual void SetCroppingRegionFlags(int _arg)\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"GetCroppingRegionFlagsMinValue", PyvtkVolumeMapper_GetCroppingRegionFlagsMinValue, METH_VARARGS,
   "V.GetCroppingRegionFlagsMinValue() -> int\nC++: virtual int GetCroppingRegionFlagsMinValue()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"GetCroppingRegionFlagsMaxValue", PyvtkVolumeMapper_GetCroppingRegionFlagsMaxValue, METH_VARARGS,
   "V.GetCroppingRegionFlagsMaxValue() -> int\nC++: virtual int GetCroppingRegionFlagsMaxValue()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"GetCroppingRegionFlags", PyvtkVolumeMapper_GetCroppingRegionFlags, METH_VARARGS,
   "V.GetCroppingRegionFlags() -> int\nC++: virtual int GetCroppingRegionFlags()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"SetCroppingRegionFlagsToSubVolume", PyvtkVolumeMapper_SetCroppingRegionFlagsToSubVolume, METH_VARARGS,
   "V.SetCroppingRegionFlagsToSubVolume()\nC++: void SetCroppingRegionFlagsToSubVolume()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"SetCroppingRegionFlagsToFence", PyvtkVolumeMapper_SetCroppingRegionFlagsToFence, METH_VARARGS,
   "V.SetCroppingRegionFlagsToFence()\nC++: void SetCroppingRegionFlagsToFence()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"SetCroppingRegionFlagsToInvertedFence", PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedFence, METH_VARARGS,
   "V.SetCroppingRegionFlagsToInvertedFence()\nC++: void SetCroppingRegionFlagsToInvertedFence()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"SetCroppingRegionFlagsToCross", PyvtkVolumeMapper_SetCroppingRegionFlagsToCross, METH_VARARGS,
   "V.SetCroppingRegionFlagsToCross()\nC++: void SetCroppingRegionFlagsToCross()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"SetCroppingRegionFlagsToInvertedCross", PyvtkVolumeMapper_SetCroppingRegionFlagsToInvertedCross, METH_VARARGS,
   "V.SetCroppingRegionFlagsToInvertedCross()\nC++: void SetCroppingRegionFlagsToInvertedCross()\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"Render", PyvtkVolumeMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *ren, vtkVolume *vol) override = 0;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {"ReleaseGraphicsResources", PyvtkVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkVolumeMapper", // tp_name
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
  PyvtkVolumeMapper_Doc, // tp_doc
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

PyObject *PyvtkVolumeMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeMapper_Type, PyvtkVolumeMapper_Methods,
    "vtkVolumeMapper",
 nullptr);

  PyTypeObject *pytype = &PyvtkVolumeMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractVolumeMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkVolumeMapper_BlendModes_Type);
  PyvtkVolumeMapper_BlendModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkVolumeMapper_BlendModes_Type);

  o = (PyObject *)&PyvtkVolumeMapper_BlendModes_Type;
  if (PyDict_SetItemString(d, "BlendModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkVolumeMapper::BlendModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "COMPOSITE_BLEND", vtkVolumeMapper::COMPOSITE_BLEND },
        { "MAXIMUM_INTENSITY_BLEND", vtkVolumeMapper::MAXIMUM_INTENSITY_BLEND },
        { "MINIMUM_INTENSITY_BLEND", vtkVolumeMapper::MINIMUM_INTENSITY_BLEND },
        { "AVERAGE_INTENSITY_BLEND", vtkVolumeMapper::AVERAGE_INTENSITY_BLEND },
        { "ADDITIVE_BLEND", vtkVolumeMapper::ADDITIVE_BLEND },
        { "ISOSURFACE_BLEND", vtkVolumeMapper::ISOSURFACE_BLEND },
      };

    o = PyvtkVolumeMapper_BlendModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; unsigned int value; }
      constants[4] = {
        { "VTK_CROP_SUBVOLUME", 0x0002000 },
        { "VTK_CROP_FENCE", 0x2ebfeba },
        { "VTK_CROP_INVERTED_FENCE", 0x5140145 },
        { "VTK_CROP_CROSS", 0x0417410 },
      };

#if VTK_SIZEOF_INT < VTK_SIZEOF_LONG
    o = PyInt_FromLong(constants[c].value);
#else
    o = PyLong_FromUnsignedLong(constants[c].value);
#endif
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyFloat_FromDouble(0x7be8bef);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_CROP_INVERTED_CROSS", o);
    Py_DECREF(o);
  }
}

