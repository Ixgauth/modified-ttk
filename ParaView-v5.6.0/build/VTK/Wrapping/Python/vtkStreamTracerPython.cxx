// python wrapper for vtkStreamTracer
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
#include "vtkStreamTracer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamTracer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStreamTracer_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkStreamTracer_Doc =
  "vtkStreamTracer - Streamline generator\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStreamTracer is a filter that integrates a vector field to\n"
  "generate streamlines. The integration is performed using a specified\n"
  "integrator, by default Runge-Kutta2.\n\n"
  "vtkStreamTracer produces polylines as the output, with each cell\n"
  "(i.e., polyline) representing a streamline. The attribute values\n"
  "associated with each streamline are stored in the cell data, whereas\n"
  "those associated with streamline-points are stored in the point data.\n\n"
  "vtkStreamTracer supports forward (the default), backward, and\n"
  "combined (i.e., BOTH) integration. The length of a streamline is\n"
  "governed by specifying a maximum value either in physical arc length\n"
  "or in (local) cell length. Otherwise, the integration terminates upon\n"
  "exiting the flow field domain, or if the particle speed is reduced to\n"
  "a value less than a specified terminal speed, or when a maximum\n"
  "number of steps is completed. The specific reason for the termination\n"
  "is stored in a cell array named ReasonForTermination.\n\n"
  "Note that normalized vectors are adopted in streamline integration,\n"
  "which achieves high numerical accuracy/smoothness of flow lines that\n"
  "is particularly guaranteed for Runge-Kutta45 with adaptive step size\n"
  "and error control). In support of this feature, the underlying step\n"
  "size is ALWAYS in arc length unit (LENGTH_UNIT) while the 'real' time\n"
  "interval (virtual for steady flows) that a particle actually takes to\n"
  "trave in a single step is obtained by dividing the arc length by the\n"
  "LOCAL speed. The overall elapsed time (i.e., the life span) of the\n"
  "particle is the sum of those individual step-wise time intervals.\n\n"
  "The quality of streamline integration can be controlled by setting\n"
  "the initial integration step (InitialIntegrationStep), particularly\n"
  "for Runge-Kutta2 and Runge-Kutta4 (with a fixed step size), and in\n"
  "the case of Runge-Kutta45 (with an adaptive step size and error\n"
  "control) the minimum integration step, the maximum integration step,\n"
  "and the maximum error. These steps are in either LENGTH_UNIT or\n"
  "CELL_LENGTH_UNIT while the error is in physical arc length. For the\n"
  "former two integrators, there is a trade-off between integration\n"
  "speed and streamline quality.\n\n"
  "The integration time, vorticity, rotation and angular velocity are\n"
  "stored in point data arrays named \"IntegrationTime\", \"Vorticity\",\n"
  "\"Rotation\" and \"AngularVelocity\", respectively (vorticity, rotation\n"
  "and angular velocity are computed only when ComputeVorticity is on).\n"
  "All point data attributes in the source dataset are interpolated on\n"
  "the new streamline points.\n\n"
  "vtkStreamTracer supports integration through any type of dataset.\n"
  "Thus if the dataset contains 2D cells like polygons or triangles, the\n"
  "integration is constrained to lie on the surface defined by 2D cells.\n\n"
  "The starting point, or the so-called 'seed', of a streamline may be\n"
  "set in two different ways. Starting from global x-y-z \"position\"\n"
  "allows you to start a single trace at a specified x-y-z coordinate.\n"
  "If you specify a source object, traces will be generated from each\n"
  "point in the source that is inside the dataset.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\n"
  "vtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkTemporalStreamTracer\n"
  "vtkAbstractInterpolatedVelocityField vtkInterpolatedVelocityField\n"
  "vtkCellLocatorInterpolatedVelocityField\n\n";

static PyTypeObject PyvtkStreamTracer_Units_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkStreamTracer.Units", // tp_name
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

PyObject *PyvtkStreamTracer_Units_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStreamTracer_Units_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamTracer_Units_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkStreamTracer_Solvers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkStreamTracer.Solvers", // tp_name
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

PyObject *PyvtkStreamTracer_Solvers_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStreamTracer_Solvers_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamTracer_Solvers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkStreamTracer_ReasonForTermination_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkStreamTracer.ReasonForTermination", // tp_name
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

PyObject *PyvtkStreamTracer_ReasonForTermination_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStreamTracer_ReasonForTermination_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamTracer_ReasonForTermination_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkStreamTracer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamTracer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamTracer *tempr = vtkStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamTracer::NewInstance());

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
PyvtkStreamTracer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->SetStartPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStreamTracer::SetStartPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStartPosition(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetStartPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStreamTracer_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkStreamTracer_SetStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return nullptr;
}



static PyObject *
PyvtkStreamTracer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkStreamTracer::GetStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkStreamTracer::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkStreamTracer::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetIntegratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkStreamTracer::GetIntegratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta2();
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta4();
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta45");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta45();
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta45();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToDataSetPointLocator();
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorTypeToDataSetPointLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToCellLocator();
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorTypeToCellLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagation(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumPropagation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagation() :
      op->vtkStreamTracer::GetMaximumPropagation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationStepUnit(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationStepUnit() :
      op->vtkStreamTracer::GetIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStep(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetInitialIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInitialIntegrationStep() :
      op->vtkStreamTracer::GetInitialIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStep(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMinimumIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumIntegrationStep() :
      op->vtkStreamTracer::GetMinimumIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStep(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumIntegrationStep() :
      op->vtkStreamTracer::GetMaximumIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumError(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkStreamTracer::GetMaximumError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSteps(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSteps() :
      op->vtkStreamTracer::GetMaximumNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetTerminalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkStreamTracer::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetSurfaceStreamlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceStreamlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSurfaceStreamlines() :
      op->vtkStreamTracer::GetSurfaceStreamlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSurfaceStreamlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceStreamlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceStreamlines(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetSurfaceStreamlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SurfaceStreamlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceStreamlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceStreamlinesOn();
    }
    else
    {
      op->vtkStreamTracer::SurfaceStreamlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SurfaceStreamlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceStreamlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceStreamlinesOff();
    }
    else
    {
      op->vtkStreamTracer::SurfaceStreamlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirection(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMinValue() :
      op->vtkStreamTracer::GetIntegrationDirectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMaxValue() :
      op->vtkStreamTracer::GetIntegrationDirectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirection() :
      op->vtkStreamTracer::GetIntegrationDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToForward();
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirectionToForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBackward();
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirectionToBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBoth();
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirectionToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkStreamTracer::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->vtkStreamTracer::SetRotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkStreamTracer::GetRotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorPrototype(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorType(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamTracer_Methods[] = {
  {"IsTypeOf", PyvtkStreamTracer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamTracer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamTracer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStreamTracer\nC++: static vtkStreamTracer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamTracer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStreamTracer\nC++: vtkStreamTracer *NewInstance()\n\n"},
  {"SetStartPosition", PyvtkStreamTracer_SetStartPosition, METH_VARARGS,
   "V.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double, double, double)\nV.SetStartPosition((float, float, float))\nC++: void SetStartPosition(double a[3])\n\n"},
  {"GetStartPosition", PyvtkStreamTracer_GetStartPosition, METH_VARARGS,
   "V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\n"},
  {"SetSourceData", PyvtkStreamTracer_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkDataSet)\nC++: void SetSourceData(vtkDataSet *source)\n\nSpecify the source object used to generate starting points\n(seeds). Note that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetSourceConnection for connecting\nthe pipeline.\n"},
  {"GetSource", PyvtkStreamTracer_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source object used to generate starting points\n(seeds). Note that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetSourceConnection for connecting\nthe pipeline.\n"},
  {"SetSourceConnection", PyvtkStreamTracer_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to generate starting points\n(seeds). New style.\n"},
  {"SetIntegrator", PyvtkStreamTracer_SetIntegrator, METH_VARARGS,
   "V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"GetIntegrator", PyvtkStreamTracer_GetIntegrator, METH_VARARGS,
   "V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: virtual vtkInitialValueProblemSolver *GetIntegrator()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"SetIntegratorType", PyvtkStreamTracer_SetIntegratorType, METH_VARARGS,
   "V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"GetIntegratorType", PyvtkStreamTracer_GetIntegratorType, METH_VARARGS,
   "V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"SetIntegratorTypeToRungeKutta2", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2, METH_VARARGS,
   "V.SetIntegratorTypeToRungeKutta2()\nC++: void SetIntegratorTypeToRungeKutta2()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"SetIntegratorTypeToRungeKutta4", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4, METH_VARARGS,
   "V.SetIntegratorTypeToRungeKutta4()\nC++: void SetIntegratorTypeToRungeKutta4()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"SetIntegratorTypeToRungeKutta45", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45, METH_VARARGS,
   "V.SetIntegratorTypeToRungeKutta45()\nC++: void SetIntegratorTypeToRungeKutta45()\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"SetInterpolatorTypeToDataSetPointLocator", PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator, METH_VARARGS,
   "V.SetInterpolatorTypeToDataSetPointLocator()\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to the one involving a\ndataset point locator.\n"},
  {"SetInterpolatorTypeToCellLocator", PyvtkStreamTracer_SetInterpolatorTypeToCellLocator, METH_VARARGS,
   "V.SetInterpolatorTypeToCellLocator()\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to the one involving a\ncell locator.\n"},
  {"SetMaximumPropagation", PyvtkStreamTracer_SetMaximumPropagation, METH_VARARGS,
   "V.SetMaximumPropagation(float)\nC++: virtual void SetMaximumPropagation(double _arg)\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {"GetMaximumPropagation", PyvtkStreamTracer_GetMaximumPropagation, METH_VARARGS,
   "V.GetMaximumPropagation() -> float\nC++: virtual double GetMaximumPropagation()\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {"SetIntegrationStepUnit", PyvtkStreamTracer_SetIntegrationStepUnit, METH_VARARGS,
   "V.SetIntegrationStepUnit(int)\nC++: void SetIntegrationStepUnit(int unit)\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. NOTE: The valid unit is now limited to\nonly LENGTH_UNIT (1) and CELL_LENGTH_UNIT (2), EXCLUDING the\npreviously-supported TIME_UNIT.\n"},
  {"GetIntegrationStepUnit", PyvtkStreamTracer_GetIntegrationStepUnit, METH_VARARGS,
   "V.GetIntegrationStepUnit() -> int\nC++: int GetIntegrationStepUnit()\n\n"},
  {"SetInitialIntegrationStep", PyvtkStreamTracer_SetInitialIntegrationStep, METH_VARARGS,
   "V.SetInitialIntegrationStep(float)\nC++: virtual void SetInitialIntegrationStep(double _arg)\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {"GetInitialIntegrationStep", PyvtkStreamTracer_GetInitialIntegrationStep, METH_VARARGS,
   "V.GetInitialIntegrationStep() -> float\nC++: virtual double GetInitialIntegrationStep()\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {"SetMinimumIntegrationStep", PyvtkStreamTracer_SetMinimumIntegrationStep, METH_VARARGS,
   "V.SetMinimumIntegrationStep(float)\nC++: virtual void SetMinimumIntegrationStep(double _arg)\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {"GetMinimumIntegrationStep", PyvtkStreamTracer_GetMinimumIntegrationStep, METH_VARARGS,
   "V.GetMinimumIntegrationStep() -> float\nC++: virtual double GetMinimumIntegrationStep()\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {"SetMaximumIntegrationStep", PyvtkStreamTracer_SetMaximumIntegrationStep, METH_VARARGS,
   "V.SetMaximumIntegrationStep(float)\nC++: virtual void SetMaximumIntegrationStep(double _arg)\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {"GetMaximumIntegrationStep", PyvtkStreamTracer_GetMaximumIntegrationStep, METH_VARARGS,
   "V.GetMaximumIntegrationStep() -> float\nC++: virtual double GetMaximumIntegrationStep()\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {"SetMaximumError", PyvtkStreamTracer_SetMaximumError, METH_VARARGS,
   "V.SetMaximumError(float)\nC++: virtual void SetMaximumError(double _arg)\n\nSpecify the maximum error tolerated throughout streamline\nintegration.\n"},
  {"GetMaximumError", PyvtkStreamTracer_GetMaximumError, METH_VARARGS,
   "V.GetMaximumError() -> float\nC++: virtual double GetMaximumError()\n\nSpecify the maximum error tolerated throughout streamline\nintegration.\n"},
  {"SetMaximumNumberOfSteps", PyvtkStreamTracer_SetMaximumNumberOfSteps, METH_VARARGS,
   "V.SetMaximumNumberOfSteps(int)\nC++: virtual void SetMaximumNumberOfSteps(vtkIdType _arg)\n\nSpecify the maximum number of steps for integrating a streamline.\n"},
  {"GetMaximumNumberOfSteps", PyvtkStreamTracer_GetMaximumNumberOfSteps, METH_VARARGS,
   "V.GetMaximumNumberOfSteps() -> int\nC++: virtual vtkIdType GetMaximumNumberOfSteps()\n\nSpecify the maximum number of steps for integrating a streamline.\n"},
  {"SetTerminalSpeed", PyvtkStreamTracer_SetTerminalSpeed, METH_VARARGS,
   "V.SetTerminalSpeed(float)\nC++: virtual void SetTerminalSpeed(double _arg)\n\nSpecify the terminal speed value, below which integration is\nterminated.\n"},
  {"GetTerminalSpeed", PyvtkStreamTracer_GetTerminalSpeed, METH_VARARGS,
   "V.GetTerminalSpeed() -> float\nC++: virtual double GetTerminalSpeed()\n\nSpecify the terminal speed value, below which integration is\nterminated.\n"},
  {"GetSurfaceStreamlines", PyvtkStreamTracer_GetSurfaceStreamlines, METH_VARARGS,
   "V.GetSurfaceStreamlines() -> bool\nC++: virtual bool GetSurfaceStreamlines()\n\nSet/Unset the streamlines to be computed on a surface\n"},
  {"SetSurfaceStreamlines", PyvtkStreamTracer_SetSurfaceStreamlines, METH_VARARGS,
   "V.SetSurfaceStreamlines(bool)\nC++: virtual void SetSurfaceStreamlines(bool _arg)\n\nSet/Unset the streamlines to be computed on a surface\n"},
  {"SurfaceStreamlinesOn", PyvtkStreamTracer_SurfaceStreamlinesOn, METH_VARARGS,
   "V.SurfaceStreamlinesOn()\nC++: virtual void SurfaceStreamlinesOn()\n\nSet/Unset the streamlines to be computed on a surface\n"},
  {"SurfaceStreamlinesOff", PyvtkStreamTracer_SurfaceStreamlinesOff, METH_VARARGS,
   "V.SurfaceStreamlinesOff()\nC++: virtual void SurfaceStreamlinesOff()\n\nSet/Unset the streamlines to be computed on a surface\n"},
  {"SetIntegrationDirection", PyvtkStreamTracer_SetIntegrationDirection, METH_VARARGS,
   "V.SetIntegrationDirection(int)\nC++: virtual void SetIntegrationDirection(int _arg)\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"GetIntegrationDirectionMinValue", PyvtkStreamTracer_GetIntegrationDirectionMinValue, METH_VARARGS,
   "V.GetIntegrationDirectionMinValue() -> int\nC++: virtual int GetIntegrationDirectionMinValue()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"GetIntegrationDirectionMaxValue", PyvtkStreamTracer_GetIntegrationDirectionMaxValue, METH_VARARGS,
   "V.GetIntegrationDirectionMaxValue() -> int\nC++: virtual int GetIntegrationDirectionMaxValue()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"GetIntegrationDirection", PyvtkStreamTracer_GetIntegrationDirection, METH_VARARGS,
   "V.GetIntegrationDirection() -> int\nC++: virtual int GetIntegrationDirection()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"SetIntegrationDirectionToForward", PyvtkStreamTracer_SetIntegrationDirectionToForward, METH_VARARGS,
   "V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"SetIntegrationDirectionToBackward", PyvtkStreamTracer_SetIntegrationDirectionToBackward, METH_VARARGS,
   "V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"SetIntegrationDirectionToBoth", PyvtkStreamTracer_SetIntegrationDirectionToBoth, METH_VARARGS,
   "V.SetIntegrationDirectionToBoth()\nC++: void SetIntegrationDirectionToBoth()\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction.\n"},
  {"SetComputeVorticity", PyvtkStreamTracer_SetComputeVorticity, METH_VARARGS,
   "V.SetComputeVorticity(bool)\nC++: virtual void SetComputeVorticity(bool _arg)\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter.\n"},
  {"GetComputeVorticity", PyvtkStreamTracer_GetComputeVorticity, METH_VARARGS,
   "V.GetComputeVorticity() -> bool\nC++: virtual bool GetComputeVorticity()\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter.\n"},
  {"SetRotationScale", PyvtkStreamTracer_SetRotationScale, METH_VARARGS,
   "V.SetRotationScale(float)\nC++: virtual void SetRotationScale(double _arg)\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"GetRotationScale", PyvtkStreamTracer_GetRotationScale, METH_VARARGS,
   "V.GetRotationScale() -> float\nC++: virtual double GetRotationScale()\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"SetInterpolatorPrototype", PyvtkStreamTracer_SetInterpolatorPrototype, METH_VARARGS,
   "V.SetInterpolatorPrototype(vtkAbstractInterpolatedVelocityField)\nC++: void SetInterpolatorPrototype(\n    vtkAbstractInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype.\n"},
  {"SetInterpolatorType", PyvtkStreamTracer_SetInterpolatorType, METH_VARARGS,
   "V.SetInterpolatorType(int)\nC++: void SetInterpolatorType(int interpType)\n\nSet the type of the velocity field interpolator to determine\nwhether vtkInterpolatedVelocityField\n(INTERPOLATOR_WITH_DATASET_POINT_LOCATOR) or\nvtkCellLocatorInterpolatedVelocityField\n(INTERPOLATOR_WITH_CELL_LOCATOR) is employed for locating cells\nduring streamline integration. The latter (adopting\nvtkAbstractCellLocator sub-classes such as vtkCellLocator and\nvtkModifiedBSPTree) is more robust then the former (through\nvtkDataSet / vtkPointSet::FindCell() coupled with\nvtkPointLocator).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStreamTracer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkStreamTracer", // tp_name
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
  PyvtkStreamTracer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamTracer_StaticNew()
{
  return vtkStreamTracer::New();
}

PyObject *PyvtkStreamTracer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStreamTracer_Type, PyvtkStreamTracer_Methods,
    "vtkStreamTracer",
 &PyvtkStreamTracer_StaticNew);

  PyTypeObject *pytype = &PyvtkStreamTracer_Type;

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

  PyType_Ready(&PyvtkStreamTracer_Units_Type);
  PyvtkStreamTracer_Units_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStreamTracer_Units_Type);

  o = (PyObject *)&PyvtkStreamTracer_Units_Type;
  if (PyDict_SetItemString(d, "Units", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkStreamTracer_Solvers_Type);
  PyvtkStreamTracer_Solvers_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStreamTracer_Solvers_Type);

  o = (PyObject *)&PyvtkStreamTracer_Solvers_Type;
  if (PyDict_SetItemString(d, "Solvers", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkStreamTracer_ReasonForTermination_Type);
  PyvtkStreamTracer_ReasonForTermination_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStreamTracer_ReasonForTermination_Type);

  o = (PyObject *)&PyvtkStreamTracer_ReasonForTermination_Type;
  if (PyDict_SetItemString(d, "ReasonForTermination", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkStreamTracer::Units cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "LENGTH_UNIT", vtkStreamTracer::LENGTH_UNIT },
        { "CELL_LENGTH_UNIT", vtkStreamTracer::CELL_LENGTH_UNIT },
      };

    o = PyvtkStreamTracer_Units_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkStreamTracer::Solvers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "RUNGE_KUTTA2", vtkStreamTracer::RUNGE_KUTTA2 },
        { "RUNGE_KUTTA4", vtkStreamTracer::RUNGE_KUTTA4 },
        { "RUNGE_KUTTA45", vtkStreamTracer::RUNGE_KUTTA45 },
        { "NONE", vtkStreamTracer::NONE },
        { "UNKNOWN", vtkStreamTracer::UNKNOWN },
      };

    o = PyvtkStreamTracer_Solvers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkStreamTracer::ReasonForTermination cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "OUT_OF_DOMAIN", vtkStreamTracer::OUT_OF_DOMAIN },
        { "NOT_INITIALIZED", vtkStreamTracer::NOT_INITIALIZED },
        { "UNEXPECTED_VALUE", vtkStreamTracer::UNEXPECTED_VALUE },
        { "OUT_OF_LENGTH", vtkStreamTracer::OUT_OF_LENGTH },
        { "OUT_OF_STEPS", vtkStreamTracer::OUT_OF_STEPS },
        { "STAGNATION", vtkStreamTracer::STAGNATION },
        { "FIXED_REASONS_FOR_TERMINATION_COUNT", vtkStreamTracer::FIXED_REASONS_FOR_TERMINATION_COUNT },
      };

    o = PyvtkStreamTracer_ReasonForTermination_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "FORWARD", vtkStreamTracer::FORWARD },
        { "BACKWARD", vtkStreamTracer::BACKWARD },
        { "BOTH", vtkStreamTracer::BOTH },
        { "INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_DATASET_POINT_LOCATOR },
        { "INTERPOLATOR_WITH_CELL_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_CELL_LOCATOR },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamTracer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamTracer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamTracer", o) != 0)
  {
    Py_DECREF(o);
  }

}

