// python wrapper for vtkLagrangianParticle
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
#include "vtkLagrangianParticle.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangianParticle(PyObject *); }

static const char *PyvtkLagrangianParticle_Doc =
  "vtkLagrangianParticle - Basis class for Lagrangian particles.\n\n"
  "Particle to inject and integrate in the vtkLagrangianParticleTracker.\n"
  "This class does NOT inherit from vtkObject in order to increase\n"
  "performance and reduce memory usage.\n\n"
  "@sa\n"
  "vtkLagrangianParticleTracker vtkLagrangianBasicIntegrationModel\n"
  "vtkLagrangianMatidaIntegrationModel\n\n"
  "vtkLagrangianParticle(int numberOfVariables, vtkIdType seedId,\n    vtkIdType particleId, vtkIdType seedArrayTupleIndex,\n    double integrationTime, vtkPointData *seedData)\n";

static PyTypeObject PyvtkLagrangianParticle_ParticleTermination_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianParticle.ParticleTermination", // tp_name
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

PyObject *PyvtkLagrangianParticle_ParticleTermination_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLagrangianParticle_ParticleTermination_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLagrangianParticle_ParticleTermination_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkLagrangianParticle_SurfaceInteraction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianParticle.SurfaceInteraction", // tp_name
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

PyObject *PyvtkLagrangianParticle_SurfaceInteraction_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLagrangianParticle_SurfaceInteraction_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLagrangianParticle_SurfaceInteraction_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLagrangianParticle_GetPrevEquationVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrevEquationVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPrevEquationVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetEquationVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEquationVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetEquationVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNextEquationVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextEquationVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetNextEquationVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPrevPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrevPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPrevPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetNextPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPrevVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrevVelocity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPrevVelocity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVelocity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetVelocity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNextVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextVelocity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetNextVelocity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPrevUserVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrevUserVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPrevUserVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetUserVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetUserVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNextUserVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextUserVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetNextUserVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_MoveToNextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveToNextPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->MoveToNextPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetParentId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetParentId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetSeedId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetSeedId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetSeedArrayTupleIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayTupleIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetSeedArrayTupleIndex();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNumberOfVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNumberOfUserVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUserVariables");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfUserVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetSeedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointData *tempr = op->GetSeedData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetLastCellId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = op->GetLastDataSet();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetLastSurfaceCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSurfaceCellId");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetLastSurfaceCellId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetLastSurfaceDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSurfaceDataSet");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = op->GetLastSurfaceDataSet();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetLastCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCell");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    op->SetLastCell(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetLastSurfaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastSurfaceCell");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    op->SetLastSurfaceCell(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfSteps();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetTermination(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTermination");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetTermination(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetTermination(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTermination");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetTermination();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteraction");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetInteraction(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetInteraction();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetUserFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserFlag");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetUserFlag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetUserFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserFlag");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetUserFlag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetPInsertPreviousPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPInsertPreviousPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetPInsertPreviousPosition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPInsertPreviousPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPInsertPreviousPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetPInsertPreviousPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetPManualShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPManualShift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetPManualShift(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPManualShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPManualShift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetPManualShift();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetStepTimeRef(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepTimeRef");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = &op->GetStepTimeRef();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetIntegrationTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPrevIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrevIntegrationTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetPrevIntegrationTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_SetIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetIntegrationTime(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticle_GetPositionVectorMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionVectorMagnitude");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkLagrangianParticle *op = static_cast<vtkLagrangianParticle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetPositionVectorMagnitude();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangianParticle_Methods[] = {
  {"GetPrevEquationVariables", PyvtkLagrangianParticle_GetPrevEquationVariables, METH_VARARGS,
   "V.GetPrevEquationVariables() -> (float, ...)\nC++: double *GetPrevEquationVariables()\n\nGet a pointer to Particle variables at its previous position See\nGetEquationVariables for content description\n"},
  {"GetEquationVariables", PyvtkLagrangianParticle_GetEquationVariables, METH_VARARGS,
   "V.GetEquationVariables() -> (float, ...)\nC++: double *GetEquationVariables()\n\nGet a pointer to the particle variables array. To be used with\nvtkInitialValueProblemSolver::ComputeNextStep. returned pointer\ncontains the following: x y z u v w k0 .. kn t x y z is the\nposition of the particle u v w is the velocity of the particle k0\n.. kn are user variables t is the time, always the last\nvariables. the number of user variables can be recovered by\nGetNumberOfUserVariables, but it is always NumberOfVariables - 7.\n"},
  {"GetNextEquationVariables", PyvtkLagrangianParticle_GetNextEquationVariables, METH_VARARGS,
   "V.GetNextEquationVariables() -> (float, ...)\nC++: double *GetNextEquationVariables()\n\nGet a pointer to the particle variables array at its next\nposition. To be used with\nvtkInitialValueProblemSolver::ComputeNextStep. See\nGetEquationVariables for content description\n"},
  {"GetPrevPosition", PyvtkLagrangianParticle_GetPrevPosition, METH_VARARGS,
   "V.GetPrevPosition() -> (float, ...)\nC++: double *GetPrevPosition()\n\nGet a pointer to the previous particle position. Convenience\nmethod, giving the same results as GetPrevEquationVariables().\n"},
  {"GetPosition", PyvtkLagrangianParticle_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, ...)\nC++: double *GetPosition()\n\nGet a pointer to the particle position. Convenience method,\ngiving the same results as GetEquationVariables().\n"},
  {"GetNextPosition", PyvtkLagrangianParticle_GetNextPosition, METH_VARARGS,
   "V.GetNextPosition() -> (float, ...)\nC++: double *GetNextPosition()\n\nGet a pointer to the next particle position. Convenience method,\ngiving the same results as GetNextEquationVariables();\n"},
  {"GetPrevVelocity", PyvtkLagrangianParticle_GetPrevVelocity, METH_VARARGS,
   "V.GetPrevVelocity() -> (float, ...)\nC++: double *GetPrevVelocity()\n\nGet a pointer to the previous particle velocity. Convenience\nmethod, giving the result: GetPrevEquationVariables() + 3;\n"},
  {"GetVelocity", PyvtkLagrangianParticle_GetVelocity, METH_VARARGS,
   "V.GetVelocity() -> (float, ...)\nC++: double *GetVelocity()\n\nGet a pointer to the particle velocity. Convenience method,\ngiving the result: GetEquationVariables() + 3;\n"},
  {"GetNextVelocity", PyvtkLagrangianParticle_GetNextVelocity, METH_VARARGS,
   "V.GetNextVelocity() -> (float, ...)\nC++: double *GetNextVelocity()\n\nGet a pointer to the next particle velocity. Convenience method,\ngiving the result: GetNextEquationVariables() + 3;\n"},
  {"GetPrevUserVariables", PyvtkLagrangianParticle_GetPrevUserVariables, METH_VARARGS,
   "V.GetPrevUserVariables() -> (float, ...)\nC++: double *GetPrevUserVariables()\n\nGet a pointer to the previous user variables. Convenience method,\ngiving the result: GetPrevEquationVariables() + 6;\n"},
  {"GetUserVariables", PyvtkLagrangianParticle_GetUserVariables, METH_VARARGS,
   "V.GetUserVariables() -> (float, ...)\nC++: double *GetUserVariables()\n\nGet a pointer to the user variables. Convenience method, giving\nthe result: GetEquationVariables() + 6;\n"},
  {"GetNextUserVariables", PyvtkLagrangianParticle_GetNextUserVariables, METH_VARARGS,
   "V.GetNextUserVariables() -> (float, ...)\nC++: double *GetNextUserVariables()\n\nGet a pointer to the next user variables. Convenience method,\ngiving the result: GetNextEquationVariables() + 6;\n"},
  {"MoveToNextPosition", PyvtkLagrangianParticle_MoveToNextPosition, METH_VARARGS,
   "V.MoveToNextPosition()\nC++: virtual void MoveToNextPosition()\n\nMove the particle to its next position by putting next equation\nvariable to equation variable and clearing next equation\nvariable. Be sure to have set the StepTime first for accurate\nIntegrationTime computation\n"},
  {"GetId", PyvtkLagrangianParticle_GetId, METH_VARARGS,
   "V.GetId() -> int\nC++: virtual vtkIdType GetId()\n\nGet particle id.\n"},
  {"SetParentId", PyvtkLagrangianParticle_SetParentId, METH_VARARGS,
   "V.SetParentId(int)\nC++: virtual void SetParentId(vtkIdType parentId)\n\nSet/Get parent particle id. Allow to find the seed particle of\nany particle.\n"},
  {"GetParentId", PyvtkLagrangianParticle_GetParentId, METH_VARARGS,
   "V.GetParentId() -> int\nC++: virtual vtkIdType GetParentId()\n\nSet/Get parent particle id. Allow to find the seed particle of\nany particle.\n"},
  {"GetSeedId", PyvtkLagrangianParticle_GetSeedId, METH_VARARGS,
   "V.GetSeedId() -> int\nC++: virtual vtkIdType GetSeedId()\n\nGet the particle original seed index in the seed dataset. Allows\nto track a specific seed along the tracks.\n"},
  {"GetSeedArrayTupleIndex", PyvtkLagrangianParticle_GetSeedArrayTupleIndex, METH_VARARGS,
   "V.GetSeedArrayTupleIndex() -> int\nC++: virtual vtkIdType GetSeedArrayTupleIndex()\n\nGet the particle data tuple in a seed array. To be used on the\noutput of vtkLagrangianBasicIntegrationModel::GetSeedArray\n"},
  {"GetNumberOfVariables", PyvtkLagrangianParticle_GetNumberOfVariables, METH_VARARGS,
   "V.GetNumberOfVariables() -> int\nC++: virtual int GetNumberOfVariables()\n\nGet the number of variables used to initialize EquationVariables.\n"},
  {"GetNumberOfUserVariables", PyvtkLagrangianParticle_GetNumberOfUserVariables, METH_VARARGS,
   "V.GetNumberOfUserVariables() -> int\nC++: virtual int GetNumberOfUserVariables()\n\nGet the number of variables specific to the user.\n"},
  {"GetSeedData", PyvtkLagrangianParticle_GetSeedData, METH_VARARGS,
   "V.GetSeedData() -> vtkPointData\nC++: virtual vtkPointData *GetSeedData()\n\nGet the particle data.\n"},
  {"GetLastCellId", PyvtkLagrangianParticle_GetLastCellId, METH_VARARGS,
   "V.GetLastCellId() -> int\nC++: vtkIdType GetLastCellId()\n\nGet the last traversed cell id\n"},
  {"GetLastDataSet", PyvtkLagrangianParticle_GetLastDataSet, METH_VARARGS,
   "V.GetLastDataSet() -> vtkDataSet\nC++: vtkDataSet *GetLastDataSet()\n\nGet the dataset containing the last traversed cell\n"},
  {"GetLastSurfaceCellId", PyvtkLagrangianParticle_GetLastSurfaceCellId, METH_VARARGS,
   "V.GetLastSurfaceCellId() -> int\nC++: vtkIdType GetLastSurfaceCellId()\n\nGet the last intersected surface cell id.\n"},
  {"GetLastSurfaceDataSet", PyvtkLagrangianParticle_GetLastSurfaceDataSet, METH_VARARGS,
   "V.GetLastSurfaceDataSet() -> vtkDataSet\nC++: vtkDataSet *GetLastSurfaceDataSet()\n\nGet the dataset containing the last intersected surface cell\n"},
  {"SetLastCell", PyvtkLagrangianParticle_SetLastCell, METH_VARARGS,
   "V.SetLastCell(vtkDataSet, int)\nC++: void SetLastCell(vtkDataSet *dataset, vtkIdType cellId)\n\nSet the last dataset and last cell id\n"},
  {"SetLastSurfaceCell", PyvtkLagrangianParticle_SetLastSurfaceCell, METH_VARARGS,
   "V.SetLastSurfaceCell(vtkDataSet, int)\nC++: void SetLastSurfaceCell(vtkDataSet *dataset,\n    vtkIdType cellId)\n\nSet the last surface dataset and last surface cell id\n"},
  {"GetNumberOfSteps", PyvtkLagrangianParticle_GetNumberOfSteps, METH_VARARGS,
   "V.GetNumberOfSteps() -> int\nC++: virtual vtkIdType GetNumberOfSteps()\n\nGet particle current number of steps.\n"},
  {"SetTermination", PyvtkLagrangianParticle_SetTermination, METH_VARARGS,
   "V.SetTermination(int)\nC++: virtual void SetTermination(int termination)\n\nSet/Get particle termination. Values out of enum range are\naccepted Values < 100 are system reserved and should not be used\n"},
  {"GetTermination", PyvtkLagrangianParticle_GetTermination, METH_VARARGS,
   "V.GetTermination() -> int\nC++: virtual int GetTermination()\n\nSet/Get particle termination. Values out of enum range are\naccepted Values < 100 are system reserved and should not be used\n"},
  {"SetInteraction", PyvtkLagrangianParticle_SetInteraction, METH_VARARGS,
   "V.SetInteraction(int)\nC++: virtual void SetInteraction(int interaction)\n\nSet/Get particle interaction. Values out of enum range are\naccepted Values < 100 are system reserved and should not be used\n"},
  {"GetInteraction", PyvtkLagrangianParticle_GetInteraction, METH_VARARGS,
   "V.GetInteraction() -> int\nC++: virtual int GetInteraction()\n\nSet/Get particle interaction. Values out of enum range are\naccepted Values < 100 are system reserved and should not be used\n"},
  {"SetUserFlag", PyvtkLagrangianParticle_SetUserFlag, METH_VARARGS,
   "V.SetUserFlag(int)\nC++: virtual void SetUserFlag(int flag)\n\nSet/Get user flag.\n"},
  {"GetUserFlag", PyvtkLagrangianParticle_GetUserFlag, METH_VARARGS,
   "V.GetUserFlag() -> int\nC++: virtual int GetUserFlag()\n\nSet/Get user flag.\n"},
  {"SetPInsertPreviousPosition", PyvtkLagrangianParticle_SetPInsertPreviousPosition, METH_VARARGS,
   "V.SetPInsertPreviousPosition(bool)\nC++: virtual void SetPInsertPreviousPosition(bool val)\n\nSet/Get parallel specific flag, indication to insert or not the\nprevious position after streaming. No effect in serial.\n"},
  {"GetPInsertPreviousPosition", PyvtkLagrangianParticle_GetPInsertPreviousPosition, METH_VARARGS,
   "V.GetPInsertPreviousPosition() -> bool\nC++: virtual bool GetPInsertPreviousPosition()\n\nSet/Get parallel specific flag, indication to insert or not the\nprevious position after streaming. No effect in serial.\n"},
  {"SetPManualShift", PyvtkLagrangianParticle_SetPManualShift, METH_VARARGS,
   "V.SetPManualShift(bool)\nC++: virtual void SetPManualShift(bool val)\n\nSet/Get parallel specific flag, indication that the particle may\nbe manually shifted after streaming. No effect in serial.\n"},
  {"GetPManualShift", PyvtkLagrangianParticle_GetPManualShift, METH_VARARGS,
   "V.GetPManualShift() -> bool\nC++: virtual bool GetPManualShift()\n\nSet/Get parallel specific flag, indication that the particle may\nbe manually shifted after streaming. No effect in serial.\n"},
  {"GetStepTimeRef", PyvtkLagrangianParticle_GetStepTimeRef, METH_VARARGS,
   "V.GetStepTimeRef() -> float\nC++: virtual double &GetStepTimeRef()\n\nGet reference to step time of this particle\n"},
  {"GetIntegrationTime", PyvtkLagrangianParticle_GetIntegrationTime, METH_VARARGS,
   "V.GetIntegrationTime() -> float\nC++: virtual double GetIntegrationTime()\n\nGet the integration time\n"},
  {"GetPrevIntegrationTime", PyvtkLagrangianParticle_GetPrevIntegrationTime, METH_VARARGS,
   "V.GetPrevIntegrationTime() -> float\nC++: virtual double GetPrevIntegrationTime()\n\nGet the integration time at previous position\n"},
  {"SetIntegrationTime", PyvtkLagrangianParticle_SetIntegrationTime, METH_VARARGS,
   "V.SetIntegrationTime(float)\nC++: virtual void SetIntegrationTime(double time)\n\nConvenience setter for integration time, do not use unless manual\nparticle shifting One using this method may want to consider\nmodifying EquationVariable[numVals] which contain integrationTime\nas well, if it matters in their model.\n"},
  {"GetPositionVectorMagnitude", PyvtkLagrangianParticle_GetPositionVectorMagnitude, METH_VARARGS,
   "V.GetPositionVectorMagnitude() -> float\nC++: double GetPositionVectorMagnitude()\n\nCompute and return the position vector magnitude\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkLagrangianParticle_vtkLagrangianParticle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkLagrangianParticle");

  int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  double temp4;
  vtkPointData *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkPointData"))
  {
    vtkLagrangianParticle *op = new vtkLagrangianParticle(temp0, temp1, temp2, temp3, temp4, temp5);

    result = PyVTKSpecialObject_New("vtkLagrangianParticle", op);
  }

  return result;
}

static PyMethodDef PyvtkLagrangianParticle_vtkLagrangianParticle_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLagrangianParticle_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkLagrangianParticle_vtkLagrangianParticle(nullptr, args);
}

static void PyvtkLagrangianParticle_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkLagrangianParticle *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkLagrangianParticle_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkLagrangianParticle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianParticle", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkLagrangianParticle_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkLagrangianParticle_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkLagrangianParticle_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkLagrangianParticle_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLagrangianParticle_TypeNew(); }

PyObject *PyvtkLagrangianParticle_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkLagrangianParticle_Type,
    PyvtkLagrangianParticle_Methods,
    PyvtkLagrangianParticle_vtkLagrangianParticle_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkLagrangianParticle_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLagrangianParticle_ParticleTermination_Type);
  PyvtkLagrangianParticle_ParticleTermination_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLagrangianParticle_ParticleTermination_Type);

  o = (PyObject *)&PyvtkLagrangianParticle_ParticleTermination_Type;
  if (PyDict_SetItemString(d, "ParticleTermination", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLagrangianParticle_SurfaceInteraction_Type);
  PyvtkLagrangianParticle_SurfaceInteraction_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLagrangianParticle_SurfaceInteraction_Type);

  o = (PyObject *)&PyvtkLagrangianParticle_SurfaceInteraction_Type;
  if (PyDict_SetItemString(d, "SurfaceInteraction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkLagrangianParticle::ParticleTermination cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "PARTICLE_TERMINATION_NOT_TERMINATED", vtkLagrangianParticle::PARTICLE_TERMINATION_NOT_TERMINATED },
        { "PARTICLE_TERMINATION_SURF_TERMINATED", vtkLagrangianParticle::PARTICLE_TERMINATION_SURF_TERMINATED },
        { "PARTICLE_TERMINATION_FLIGHT_TERMINATED", vtkLagrangianParticle::PARTICLE_TERMINATION_FLIGHT_TERMINATED },
        { "PARTICLE_TERMINATION_SURF_BREAK", vtkLagrangianParticle::PARTICLE_TERMINATION_SURF_BREAK },
        { "PARTICLE_TERMINATION_OUT_OF_DOMAIN", vtkLagrangianParticle::PARTICLE_TERMINATION_OUT_OF_DOMAIN },
        { "PARTICLE_TERMINATION_OUT_OF_STEPS", vtkLagrangianParticle::PARTICLE_TERMINATION_OUT_OF_STEPS },
        { "PARTICLE_TERMINATION_OUT_OF_TIME", vtkLagrangianParticle::PARTICLE_TERMINATION_OUT_OF_TIME },
      };

    o = PyvtkLagrangianParticle_ParticleTermination_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkLagrangianParticle::SurfaceInteraction cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "SURFACE_INTERACTION_NO_INTERACTION", vtkLagrangianParticle::SURFACE_INTERACTION_NO_INTERACTION },
        { "SURFACE_INTERACTION_TERMINATED", vtkLagrangianParticle::SURFACE_INTERACTION_TERMINATED },
        { "SURFACE_INTERACTION_BREAK", vtkLagrangianParticle::SURFACE_INTERACTION_BREAK },
        { "SURFACE_INTERACTION_BOUNCE", vtkLagrangianParticle::SURFACE_INTERACTION_BOUNCE },
        { "SURFACE_INTERACTION_PASS", vtkLagrangianParticle::SURFACE_INTERACTION_PASS },
        { "SURFACE_INTERACTION_OTHER", vtkLagrangianParticle::SURFACE_INTERACTION_OTHER },
      };

    o = PyvtkLagrangianParticle_SurfaceInteraction_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangianParticle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangianParticle_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangianParticle", o) != 0)
  {
    Py_DECREF(o);
  }

}

