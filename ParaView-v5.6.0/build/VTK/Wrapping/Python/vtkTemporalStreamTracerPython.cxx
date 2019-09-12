// python wrapper for vtkTemporalStreamTracer
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
#include "vtkTemporalStreamTracer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalStreamTracer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalStreamTracer_ClassNew(); }

#ifndef DECLARED_PyvtkStreamTracer_ClassNew
extern "C" { PyObject *PyvtkStreamTracer_ClassNew(); }
#define DECLARED_PyvtkStreamTracer_ClassNew
#endif

static const char *PyvtkTemporalStreamTracer_Doc =
  "vtkTemporalStreamTracer - A Parallel Particle tracer for unsteady\nvector fields\n\n"
  "Superclass: vtkStreamTracer\n\n"
  "vtkTemporalStreamTracer is a filter that integrates a vector field to\n"
  "generate\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\n"
  "vtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n";

static PyTypeObject PyvtkTemporalStreamTracer_Units_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkTemporalStreamTracer.Units", // tp_name
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

PyObject *PyvtkTemporalStreamTracer_Units_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkTemporalStreamTracer_Units_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTemporalStreamTracer_Units_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkTemporalStreamTracer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalStreamTracer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalStreamTracer *tempr = vtkTemporalStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalStreamTracer::NewInstance());

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
PyvtkTemporalStreamTracer_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkTemporalStreamTracer::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkTemporalStreamTracer::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetIgnorePipelineTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnorePipelineTime() :
      op->vtkTemporalStreamTracer::GetIgnorePipelineTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOn();
    }
    else
    {
      op->vtkTemporalStreamTracer::IgnorePipelineTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOff();
    }
    else
    {
      op->vtkTemporalStreamTracer::IgnorePipelineTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTimeStepResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepResolution(temp0);
    }
    else
    {
      op->vtkTemporalStreamTracer::SetTimeStepResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTimeStepResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeStepResolution() :
      op->vtkTemporalStreamTracer::GetTimeStepResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetForceReinjectionEveryNSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceReinjectionEveryNSteps() :
      op->vtkTemporalStreamTracer::GetForceReinjectionEveryNSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetTerminationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminationTime() :
      op->vtkTemporalStreamTracer::GetTerminationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminationTimeUnit(temp0);
    }
    else
    {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetTerminationTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTerminationTimeUnit() :
      op->vtkTemporalStreamTracer::GetTerminationTimeUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTerminationTimeUnitToTimeUnit();
    }
    else
    {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnitToTimeUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetTerminationTimeUnitToStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTimeUnitToStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTerminationTimeUnitToStepUnit();
    }
    else
    {
      op->vtkTemporalStreamTracer::SetTerminationTimeUnitToStepUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetStaticSeeds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStaticSeeds() :
      op->vtkTemporalStreamTracer::GetStaticSeeds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticSeedsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticSeedsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticSeedsOn();
    }
    else
    {
      op->vtkTemporalStreamTracer::StaticSeedsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticSeedsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticSeedsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticSeedsOff();
    }
    else
    {
      op->vtkTemporalStreamTracer::StaticSeedsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetStaticMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetStaticMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStaticMesh() :
      op->vtkTemporalStreamTracer::GetStaticMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticMeshOn();
    }
    else
    {
      op->vtkTemporalStreamTracer::StaticMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_StaticMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticMeshOff();
    }
    else
    {
      op->vtkTemporalStreamTracer::StaticMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetParticleWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->GetParticleWriter() :
      op->vtkTemporalStreamTracer::GetParticleWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetParticleFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParticleFileName() :
      op->vtkTemporalStreamTracer::GetParticleFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_SetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::SetEnableParticleWriting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_GetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableParticleWriting() :
      op->vtkTemporalStreamTracer::GetEnableParticleWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_EnableParticleWritingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableParticleWritingOn();
    }
    else
    {
      op->vtkTemporalStreamTracer::EnableParticleWritingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_EnableParticleWritingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableParticleWritingOff();
    }
    else
    {
      op->vtkTemporalStreamTracer::EnableParticleWritingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_AddSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

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
      op->vtkTemporalStreamTracer::AddSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStreamTracer_RemoveAllSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStreamTracer *op = static_cast<vtkTemporalStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSources();
    }
    else
    {
      op->vtkTemporalStreamTracer::RemoveAllSources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalStreamTracer_Methods[] = {
  {"IsTypeOf", PyvtkTemporalStreamTracer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalStreamTracer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalStreamTracer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalStreamTracer\nC++: static vtkTemporalStreamTracer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalStreamTracer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalStreamTracer\nC++: vtkTemporalStreamTracer *NewInstance()\n\n"},
  {"SetTimeStep", PyvtkTemporalStreamTracer_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(unsigned int _arg)\n\nSet/Get the TimeStep. This is the primary means of advancing the\nparticles. The TimeStep should be animated and this will drive\nthe pipeline forcing timesteps to be fetched from upstream.\n"},
  {"GetTimeStep", PyvtkTemporalStreamTracer_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual unsigned int GetTimeStep()\n\nSet/Get the TimeStep. This is the primary means of advancing the\nparticles. The TimeStep should be animated and this will drive\nthe pipeline forcing timesteps to be fetched from upstream.\n"},
  {"SetIgnorePipelineTime", PyvtkTemporalStreamTracer_SetIgnorePipelineTime, METH_VARARGS,
   "V.SetIgnorePipelineTime(int)\nC++: virtual void SetIgnorePipelineTime(vtkTypeBool _arg)\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"GetIgnorePipelineTime", PyvtkTemporalStreamTracer_GetIgnorePipelineTime, METH_VARARGS,
   "V.GetIgnorePipelineTime() -> int\nC++: virtual vtkTypeBool GetIgnorePipelineTime()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"IgnorePipelineTimeOn", PyvtkTemporalStreamTracer_IgnorePipelineTimeOn, METH_VARARGS,
   "V.IgnorePipelineTimeOn()\nC++: virtual void IgnorePipelineTimeOn()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"IgnorePipelineTimeOff", PyvtkTemporalStreamTracer_IgnorePipelineTimeOff, METH_VARARGS,
   "V.IgnorePipelineTimeOff()\nC++: virtual void IgnorePipelineTimeOff()\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"SetTimeStepResolution", PyvtkTemporalStreamTracer_SetTimeStepResolution, METH_VARARGS,
   "V.SetTimeStepResolution(float)\nC++: virtual void SetTimeStepResolution(double _arg)\n\nIf the data source does not have the correct time values present\non each time step - setting this value to non unity can be used\nto adjust the time step size from 1s pre step to\n1x_TimeStepResolution : Not functional in this version. Broke it\n@todo, put back time scaling\n"},
  {"GetTimeStepResolution", PyvtkTemporalStreamTracer_GetTimeStepResolution, METH_VARARGS,
   "V.GetTimeStepResolution() -> float\nC++: virtual double GetTimeStepResolution()\n\nIf the data source does not have the correct time values present\non each time step - setting this value to non unity can be used\nto adjust the time step size from 1s pre step to\n1x_TimeStepResolution : Not functional in this version. Broke it\n@todo, put back time scaling\n"},
  {"SetForceReinjectionEveryNSteps", PyvtkTemporalStreamTracer_SetForceReinjectionEveryNSteps, METH_VARARGS,
   "V.SetForceReinjectionEveryNSteps(int)\nC++: virtual void SetForceReinjectionEveryNSteps(int _arg)\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {"GetForceReinjectionEveryNSteps", PyvtkTemporalStreamTracer_GetForceReinjectionEveryNSteps, METH_VARARGS,
   "V.GetForceReinjectionEveryNSteps() -> int\nC++: virtual int GetForceReinjectionEveryNSteps()\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {"SetTerminationTime", PyvtkTemporalStreamTracer_SetTerminationTime, METH_VARARGS,
   "V.SetTerminationTime(float)\nC++: virtual void SetTerminationTime(double _arg)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndisable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {"GetTerminationTime", PyvtkTemporalStreamTracer_GetTerminationTime, METH_VARARGS,
   "V.GetTerminationTime() -> float\nC++: virtual double GetTerminationTime()\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndisable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {"SetTerminationTimeUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnit, METH_VARARGS,
   "V.SetTerminationTimeUnit(int)\nC++: virtual void SetTerminationTimeUnit(int _arg)\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {"GetTerminationTimeUnit", PyvtkTemporalStreamTracer_GetTerminationTimeUnit, METH_VARARGS,
   "V.GetTerminationTimeUnit() -> int\nC++: virtual int GetTerminationTimeUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {"SetTerminationTimeUnitToTimeUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnitToTimeUnit, METH_VARARGS,
   "V.SetTerminationTimeUnitToTimeUnit()\nC++: void SetTerminationTimeUnitToTimeUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {"SetTerminationTimeUnitToStepUnit", PyvtkTemporalStreamTracer_SetTerminationTimeUnitToStepUnit, METH_VARARGS,
   "V.SetTerminationTimeUnitToStepUnit()\nC++: void SetTerminationTimeUnitToStepUnit()\n\nThe units of TerminationTime may be actual 'Time' units as\ndescribed by the data, or just TimeSteps of iteration.\n"},
  {"SetStaticSeeds", PyvtkTemporalStreamTracer_SetStaticSeeds, METH_VARARGS,
   "V.SetStaticSeeds(int)\nC++: virtual void SetStaticSeeds(vtkTypeBool _arg)\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {"GetStaticSeeds", PyvtkTemporalStreamTracer_GetStaticSeeds, METH_VARARGS,
   "V.GetStaticSeeds() -> int\nC++: virtual vtkTypeBool GetStaticSeeds()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {"StaticSeedsOn", PyvtkTemporalStreamTracer_StaticSeedsOn, METH_VARARGS,
   "V.StaticSeedsOn()\nC++: virtual void StaticSeedsOn()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {"StaticSeedsOff", PyvtkTemporalStreamTracer_StaticSeedsOff, METH_VARARGS,
   "V.StaticSeedsOff()\nC++: virtual void StaticSeedsOff()\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected.\n"},
  {"SetStaticMesh", PyvtkTemporalStreamTracer_SetStaticMesh, METH_VARARGS,
   "V.SetStaticMesh(int)\nC++: virtual void SetStaticMesh(vtkTypeBool _arg)\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {"GetStaticMesh", PyvtkTemporalStreamTracer_GetStaticMesh, METH_VARARGS,
   "V.GetStaticMesh() -> int\nC++: virtual vtkTypeBool GetStaticMesh()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {"StaticMeshOn", PyvtkTemporalStreamTracer_StaticMeshOn, METH_VARARGS,
   "V.StaticMeshOn()\nC++: virtual void StaticMeshOn()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {"StaticMeshOff", PyvtkTemporalStreamTracer_StaticMeshOff, METH_VARARGS,
   "V.StaticMeshOff()\nC++: virtual void StaticMeshOff()\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\n"},
  {"SetParticleWriter", PyvtkTemporalStreamTracer_SetParticleWriter, METH_VARARGS,
   "V.SetParticleWriter(vtkAbstractParticleWriter)\nC++: virtual void SetParticleWriter(vtkAbstractParticleWriter *pw)\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {"GetParticleWriter", PyvtkTemporalStreamTracer_GetParticleWriter, METH_VARARGS,
   "V.GetParticleWriter() -> vtkAbstractParticleWriter\nC++: virtual vtkAbstractParticleWriter *GetParticleWriter()\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {"SetParticleFileName", PyvtkTemporalStreamTracer_SetParticleFileName, METH_VARARGS,
   "V.SetParticleFileName(string)\nC++: virtual void SetParticleFileName(const char *_arg)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"GetParticleFileName", PyvtkTemporalStreamTracer_GetParticleFileName, METH_VARARGS,
   "V.GetParticleFileName() -> string\nC++: virtual char *GetParticleFileName()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"SetEnableParticleWriting", PyvtkTemporalStreamTracer_SetEnableParticleWriting, METH_VARARGS,
   "V.SetEnableParticleWriting(int)\nC++: virtual void SetEnableParticleWriting(vtkTypeBool _arg)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"GetEnableParticleWriting", PyvtkTemporalStreamTracer_GetEnableParticleWriting, METH_VARARGS,
   "V.GetEnableParticleWriting() -> int\nC++: virtual vtkTypeBool GetEnableParticleWriting()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"EnableParticleWritingOn", PyvtkTemporalStreamTracer_EnableParticleWritingOn, METH_VARARGS,
   "V.EnableParticleWritingOn()\nC++: virtual void EnableParticleWritingOn()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"EnableParticleWritingOff", PyvtkTemporalStreamTracer_EnableParticleWritingOff, METH_VARARGS,
   "V.EnableParticleWritingOff()\nC++: virtual void EnableParticleWritingOff()\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"AddSourceConnection", PyvtkTemporalStreamTracer_AddSourceConnection, METH_VARARGS,
   "V.AddSourceConnection(vtkAlgorithmOutput)\nC++: void AddSourceConnection(vtkAlgorithmOutput *input)\n\nProvide support for multiple see sources\n"},
  {"RemoveAllSources", PyvtkTemporalStreamTracer_RemoveAllSources, METH_VARARGS,
   "V.RemoveAllSources()\nC++: void RemoveAllSources()\n\nProvide support for multiple see sources\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalStreamTracer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkTemporalStreamTracer", // tp_name
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
  PyvtkTemporalStreamTracer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalStreamTracer_StaticNew()
{
  return vtkTemporalStreamTracer::New();
}

PyObject *PyvtkTemporalStreamTracer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalStreamTracer_Type, PyvtkTemporalStreamTracer_Methods,
    "vtkTemporalStreamTracer",
 &PyvtkTemporalStreamTracer_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalStreamTracer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStreamTracer_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTemporalStreamTracer_Units_Type);
  PyvtkTemporalStreamTracer_Units_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkTemporalStreamTracer_Units_Type);

  o = (PyObject *)&PyvtkTemporalStreamTracer_Units_Type;
  if (PyDict_SetItemString(d, "Units", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkTemporalStreamTracer::Units cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "TERMINATION_TIME_UNIT", vtkTemporalStreamTracer::TERMINATION_TIME_UNIT },
        { "TERMINATION_STEP_UNIT", vtkTemporalStreamTracer::TERMINATION_STEP_UNIT },
      };

    o = PyvtkTemporalStreamTracer_Units_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalStreamTracer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalStreamTracer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalStreamTracer", o) != 0)
  {
    Py_DECREF(o);
  }

}

