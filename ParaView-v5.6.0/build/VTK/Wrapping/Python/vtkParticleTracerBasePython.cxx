// python wrapper for vtkParticleTracerBase
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
#include "vtkParticleTracerBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParticleTracerBase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParticleTracerBase_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkParticleTracerBase_Doc =
  "vtkParticleTracerBase - A particle tracer for vector fields\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkParticleTracerBase is the base class for filters that advect\n"
  "particles in a vector field. Note that the input vtkPointData\n"
  "structure must be identical on all datasets.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\n"
  "vtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n";

static PyTypeObject PyvtkParticleTracerBase_Solvers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkParticleTracerBase.Solvers", // tp_name
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

PyObject *PyvtkParticleTracerBase_Solvers_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkParticleTracerBase_Solvers_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParticleTracerBase_Solvers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkParticleTracerBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParticleTracerBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParticleTracerBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParticleTracerBase *tempr = vtkParticleTracerBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParticleTracerBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParticleTracerBase::NewInstance());

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
PyvtkParticleTracerBase_PrintParticleHistories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParticleHistories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintParticleHistories();
    }
    else
    {
      op->vtkParticleTracerBase::PrintParticleHistories();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkParticleTracerBase::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVorticity(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkParticleTracerBase::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminalSpeed(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetTerminalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkParticleTracerBase::GetRotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationScale(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetRotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnorePipelineTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetIgnorePipelineTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnorePipelineTime() :
      op->vtkParticleTracerBase::GetIgnorePipelineTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOn();
    }
    else
    {
      op->vtkParticleTracerBase::IgnorePipelineTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOff();
    }
    else
    {
      op->vtkParticleTracerBase::IgnorePipelineTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceReinjectionEveryNSteps() :
      op->vtkParticleTracerBase::GetForceReinjectionEveryNSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceReinjectionEveryNSteps(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetForceReinjectionEveryNSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminationTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetTerminationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminationTime() :
      op->vtkParticleTracerBase::GetTerminationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkInitialValueProblemSolver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrator(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkParticleTracerBase::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorType(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetIntegratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkParticleTracerBase::GetIntegratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartTime() :
      op->vtkParticleTracerBase::GetStartTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetStartTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStaticSeeds(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetStaticSeeds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStaticSeeds() :
      op->vtkParticleTracerBase::GetStaticSeeds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStaticMesh(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetStaticMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStaticMesh() :
      op->vtkParticleTracerBase::GetStaticMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkAbstractParticleWriter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractParticleWriter"))
  {
    if (ap.IsBound())
    {
      op->SetParticleWriter(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetParticleWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->GetParticleWriter() :
      op->vtkParticleTracerBase::GetParticleWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleFileName(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetParticleFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParticleFileName() :
      op->vtkParticleTracerBase::GetParticleFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableParticleWriting(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetEnableParticleWriting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableParticleWriting() :
      op->vtkParticleTracerBase::GetEnableParticleWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_EnableParticleWritingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableParticleWritingOn();
    }
    else
    {
      op->vtkParticleTracerBase::EnableParticleWritingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_EnableParticleWritingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableParticleWritingOff();
    }
    else
    {
      op->vtkParticleTracerBase::EnableParticleWritingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetDisableResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableResetCache(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetDisableResetCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetDisableResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableResetCache() :
      op->vtkParticleTracerBase::GetDisableResetCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_DisableResetCacheOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableResetCacheOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableResetCacheOn();
    }
    else
    {
      op->vtkParticleTracerBase::DisableResetCacheOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_DisableResetCacheOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableResetCacheOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableResetCacheOff();
    }
    else
    {
      op->vtkParticleTracerBase::DisableResetCacheOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_AddSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddSourceConnection(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::AddSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_RemoveAllSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSources();
    }
    else
    {
      op->vtkParticleTracerBase::RemoveAllSources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParticleTracerBase_Methods[] = {
  {"IsTypeOf", PyvtkParticleTracerBase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParticleTracerBase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParticleTracerBase_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParticleTracerBase\nC++: static vtkParticleTracerBase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParticleTracerBase_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParticleTracerBase\nC++: vtkParticleTracerBase *NewInstance()\n\n"},
  {"PrintParticleHistories", PyvtkParticleTracerBase_PrintParticleHistories, METH_VARARGS,
   "V.PrintParticleHistories()\nC++: void PrintParticleHistories()\n\n"},
  {"GetComputeVorticity", PyvtkParticleTracerBase_GetComputeVorticity, METH_VARARGS,
   "V.GetComputeVorticity() -> bool\nC++: virtual bool GetComputeVorticity()\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter.\n"},
  {"SetComputeVorticity", PyvtkParticleTracerBase_SetComputeVorticity, METH_VARARGS,
   "V.SetComputeVorticity(bool)\nC++: void SetComputeVorticity(bool)\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter.\n"},
  {"GetTerminalSpeed", PyvtkParticleTracerBase_GetTerminalSpeed, METH_VARARGS,
   "V.GetTerminalSpeed() -> float\nC++: virtual double GetTerminalSpeed()\n\nSpecify the terminal speed value, below which integration is\nterminated.\n"},
  {"SetTerminalSpeed", PyvtkParticleTracerBase_SetTerminalSpeed, METH_VARARGS,
   "V.SetTerminalSpeed(float)\nC++: void SetTerminalSpeed(double)\n\nSpecify the terminal speed value, below which integration is\nterminated.\n"},
  {"GetRotationScale", PyvtkParticleTracerBase_GetRotationScale, METH_VARARGS,
   "V.GetRotationScale() -> float\nC++: virtual double GetRotationScale()\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"SetRotationScale", PyvtkParticleTracerBase_SetRotationScale, METH_VARARGS,
   "V.SetRotationScale(float)\nC++: void SetRotationScale(double)\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"SetIgnorePipelineTime", PyvtkParticleTracerBase_SetIgnorePipelineTime, METH_VARARGS,
   "V.SetIgnorePipelineTime(int)\nC++: virtual void SetIgnorePipelineTime(vtkTypeBool _arg)\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"GetIgnorePipelineTime", PyvtkParticleTracerBase_GetIgnorePipelineTime, METH_VARARGS,
   "V.GetIgnorePipelineTime() -> int\nC++: virtual vtkTypeBool GetIgnorePipelineTime()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"IgnorePipelineTimeOn", PyvtkParticleTracerBase_IgnorePipelineTimeOn, METH_VARARGS,
   "V.IgnorePipelineTimeOn()\nC++: virtual void IgnorePipelineTimeOn()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"IgnorePipelineTimeOff", PyvtkParticleTracerBase_IgnorePipelineTimeOff, METH_VARARGS,
   "V.IgnorePipelineTimeOff()\nC++: virtual void IgnorePipelineTimeOff()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"GetForceReinjectionEveryNSteps", PyvtkParticleTracerBase_GetForceReinjectionEveryNSteps, METH_VARARGS,
   "V.GetForceReinjectionEveryNSteps() -> int\nC++: virtual int GetForceReinjectionEveryNSteps()\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {"SetForceReinjectionEveryNSteps", PyvtkParticleTracerBase_SetForceReinjectionEveryNSteps, METH_VARARGS,
   "V.SetForceReinjectionEveryNSteps(int)\nC++: void SetForceReinjectionEveryNSteps(int)\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {"SetTerminationTime", PyvtkParticleTracerBase_SetTerminationTime, METH_VARARGS,
   "V.SetTerminationTime(float)\nC++: void SetTerminationTime(double t)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndisable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {"GetTerminationTime", PyvtkParticleTracerBase_GetTerminationTime, METH_VARARGS,
   "V.GetTerminationTime() -> float\nC++: virtual double GetTerminationTime()\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndisable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {"SetIntegrator", PyvtkParticleTracerBase_SetIntegrator, METH_VARARGS,
   "V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\n"},
  {"GetIntegrator", PyvtkParticleTracerBase_GetIntegrator, METH_VARARGS,
   "V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: virtual vtkInitialValueProblemSolver *GetIntegrator()\n\n"},
  {"SetIntegratorType", PyvtkParticleTracerBase_SetIntegratorType, METH_VARARGS,
   "V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\n"},
  {"GetIntegratorType", PyvtkParticleTracerBase_GetIntegratorType, METH_VARARGS,
   "V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\n"},
  {"GetStartTime", PyvtkParticleTracerBase_GetStartTime, METH_VARARGS,
   "V.GetStartTime() -> float\nC++: virtual double GetStartTime()\n\nSet the time value for particle tracing to begin. The units of\ntime should be consistent with the primary time variable.\n"},
  {"SetStartTime", PyvtkParticleTracerBase_SetStartTime, METH_VARARGS,
   "V.SetStartTime(float)\nC++: void SetStartTime(double t)\n\nSet the time value for particle tracing to begin. The units of\ntime should be consistent with the primary time variable.\n"},
  {"SetStaticSeeds", PyvtkParticleTracerBase_SetStaticSeeds, METH_VARARGS,
   "V.SetStaticSeeds(int)\nC++: virtual void SetStaticSeeds(int _arg)\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected. The default is that StaticSeeds is 0.\n"},
  {"GetStaticSeeds", PyvtkParticleTracerBase_GetStaticSeeds, METH_VARARGS,
   "V.GetStaticSeeds() -> int\nC++: virtual int GetStaticSeeds()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected. The default is that StaticSeeds is 0.\n"},
  {"SetStaticMesh", PyvtkParticleTracerBase_SetStaticMesh, METH_VARARGS,
   "V.SetStaticMesh(int)\nC++: virtual void SetStaticMesh(int _arg)\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\nThe default is that StaticMesh is 0.\n"},
  {"GetStaticMesh", PyvtkParticleTracerBase_GetStaticMesh, METH_VARARGS,
   "V.GetStaticMesh() -> int\nC++: virtual int GetStaticMesh()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\nThe default is that StaticMesh is 0.\n"},
  {"SetParticleWriter", PyvtkParticleTracerBase_SetParticleWriter, METH_VARARGS,
   "V.SetParticleWriter(vtkAbstractParticleWriter)\nC++: virtual void SetParticleWriter(vtkAbstractParticleWriter *pw)\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {"GetParticleWriter", PyvtkParticleTracerBase_GetParticleWriter, METH_VARARGS,
   "V.GetParticleWriter() -> vtkAbstractParticleWriter\nC++: virtual vtkAbstractParticleWriter *GetParticleWriter()\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {"SetParticleFileName", PyvtkParticleTracerBase_SetParticleFileName, METH_VARARGS,
   "V.SetParticleFileName(string)\nC++: virtual void SetParticleFileName(const char *_arg)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"GetParticleFileName", PyvtkParticleTracerBase_GetParticleFileName, METH_VARARGS,
   "V.GetParticleFileName() -> string\nC++: virtual char *GetParticleFileName()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"SetEnableParticleWriting", PyvtkParticleTracerBase_SetEnableParticleWriting, METH_VARARGS,
   "V.SetEnableParticleWriting(int)\nC++: virtual void SetEnableParticleWriting(vtkTypeBool _arg)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"GetEnableParticleWriting", PyvtkParticleTracerBase_GetEnableParticleWriting, METH_VARARGS,
   "V.GetEnableParticleWriting() -> int\nC++: virtual vtkTypeBool GetEnableParticleWriting()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"EnableParticleWritingOn", PyvtkParticleTracerBase_EnableParticleWritingOn, METH_VARARGS,
   "V.EnableParticleWritingOn()\nC++: virtual void EnableParticleWritingOn()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"EnableParticleWritingOff", PyvtkParticleTracerBase_EnableParticleWritingOff, METH_VARARGS,
   "V.EnableParticleWritingOff()\nC++: virtual void EnableParticleWritingOff()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"SetDisableResetCache", PyvtkParticleTracerBase_SetDisableResetCache, METH_VARARGS,
   "V.SetDisableResetCache(int)\nC++: virtual void SetDisableResetCache(vtkTypeBool _arg)\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {"GetDisableResetCache", PyvtkParticleTracerBase_GetDisableResetCache, METH_VARARGS,
   "V.GetDisableResetCache() -> int\nC++: virtual vtkTypeBool GetDisableResetCache()\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {"DisableResetCacheOn", PyvtkParticleTracerBase_DisableResetCacheOn, METH_VARARGS,
   "V.DisableResetCacheOn()\nC++: virtual void DisableResetCacheOn()\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {"DisableResetCacheOff", PyvtkParticleTracerBase_DisableResetCacheOff, METH_VARARGS,
   "V.DisableResetCacheOff()\nC++: virtual void DisableResetCacheOff()\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {"AddSourceConnection", PyvtkParticleTracerBase_AddSourceConnection, METH_VARARGS,
   "V.AddSourceConnection(vtkAlgorithmOutput)\nC++: void AddSourceConnection(vtkAlgorithmOutput *input)\n\nProvide support for multiple seed sources\n"},
  {"RemoveAllSources", PyvtkParticleTracerBase_RemoveAllSources, METH_VARARGS,
   "V.RemoveAllSources()\nC++: void RemoveAllSources()\n\nProvide support for multiple seed sources\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParticleTracerBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkParticleTracerBase", // tp_name
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
  PyvtkParticleTracerBase_Doc, // tp_doc
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

PyObject *PyvtkParticleTracerBase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParticleTracerBase_Type, PyvtkParticleTracerBase_Methods,
    "vtkParticleTracerBase",
 nullptr);

  PyTypeObject *pytype = &PyvtkParticleTracerBase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkParticleTracerBase_Solvers_Type);
  PyvtkParticleTracerBase_Solvers_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkParticleTracerBase_Solvers_Type);

  o = (PyObject *)&PyvtkParticleTracerBase_Solvers_Type;
  if (PyDict_SetItemString(d, "Solvers", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkParticleTracerBase::Solvers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "RUNGE_KUTTA2", vtkParticleTracerBase::RUNGE_KUTTA2 },
        { "RUNGE_KUTTA4", vtkParticleTracerBase::RUNGE_KUTTA4 },
        { "RUNGE_KUTTA45", vtkParticleTracerBase::RUNGE_KUTTA45 },
        { "NONE", vtkParticleTracerBase::NONE },
        { "UNKNOWN", vtkParticleTracerBase::UNKNOWN },
      };

    o = PyvtkParticleTracerBase_Solvers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParticleTracerBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParticleTracerBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParticleTracerBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

