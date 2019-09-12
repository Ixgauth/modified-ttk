// python wrapper for vtkGenericStreamTracer
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
#include "vtkGenericStreamTracer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericStreamTracer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericStreamTracer_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkGenericStreamTracer_Doc =
  "vtkGenericStreamTracer - Streamline generator\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGenericStreamTracer is a filter that integrates a vector field to\n"
  "generate streamlines. The integration is performed using the provided\n"
  "integrator. The default is second order Runge-Kutta.\n\n"
  "vtkGenericStreamTracer generate polylines as output. Each cell\n"
  "(polyline) corresponds to one streamline. The values associated with\n"
  "each streamline are stored in the cell data whereas the values\n"
  "associated with points are stored in point data.\n\n"
  "Note that vtkGenericStreamTracer can integrate both forward and\n"
  "backward. The length of the streamline is controlled by specifying\n"
  "either a maximum value in the units of length, cell length or elapsed\n"
  "time (the elapsed time is the time each particle would have traveled\n"
  "if flow were steady). Otherwise, the integration terminates after\n"
  "exiting the dataset or if the particle speed is reduced to a value\n"
  "less than the terminal speed or when a maximum number of steps is\n"
  "reached. The reason for the termination is stored in a cell array\n"
  "named ReasonForTermination.\n\n"
  "The quality of integration can be controlled by setting integration\n"
  "step (InitialIntegrationStep) and in the case of adaptive solvers the\n"
  "maximum error, the minimum integration step and the maximum\n"
  "integration step. All of these can have units of length, cell length\n"
  "or elapsed time.\n\n"
  "The integration time, vorticity, rotation and angular velocity are\n"
  "stored in point arrays named \"IntegrationTime\", \"Vorticity\",\n"
  "\"Rotation\" and \"AngularVelocity\" respectively (vorticity, rotation\n"
  "and angular velocity are computed only when ComputeVorticity is on).\n"
  "All point attributes in the source data set are interpolated on the\n"
  "new streamline points.\n\n"
  "vtkGenericStreamTracer integrates through any type of dataset. As a\n"
  "result, if the dataset contains 2D cells such as polygons or\n"
  "triangles, the integration is constrained to lie on the surface\n"
  "defined by the 2D cells.\n\n"
  "The starting point of traces may be defined in two different ways.\n"
  "Starting from global x-y-z \"position\" allows you to start a single\n"
  "trace at a specified x-y-z coordinate. If you specify a source\n"
  "object, a trace will be generated for each point in the source that\n"
  "is inside the dataset.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\n"
  "vtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45\n\n";

static PyTypeObject PyvtkGenericStreamTracer_Units_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericStreamTracer.Units", // tp_name
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

PyObject *PyvtkGenericStreamTracer_Units_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGenericStreamTracer_Units_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGenericStreamTracer_Units_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGenericStreamTracer_Solvers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericStreamTracer.Solvers", // tp_name
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

PyObject *PyvtkGenericStreamTracer_Solvers_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGenericStreamTracer_Solvers_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGenericStreamTracer_Solvers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGenericStreamTracer_ReasonForTermination_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericStreamTracer.ReasonForTermination", // tp_name
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

PyObject *PyvtkGenericStreamTracer_ReasonForTermination_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGenericStreamTracer_ReasonForTermination_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGenericStreamTracer_ReasonForTermination_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGenericStreamTracer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericStreamTracer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericStreamTracer *tempr = vtkGenericStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericStreamTracer::NewInstance());

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
PyvtkGenericStreamTracer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetStartPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetStartPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGenericStreamTracer_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return nullptr;
}



static PyObject *
PyvtkGenericStreamTracer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkGenericStreamTracer::GetStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkGenericStreamTracer::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkGenericStreamTracer::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkGenericStreamTracer::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkGenericStreamTracer::GetIntegratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta2();
    }
    else
    {
      op->vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta4();
    }
    else
    {
      op->vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta45(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta45");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta45();
    }
    else
    {
      op->vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta45();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagation(temp0, temp1);
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumPropagation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumPropagation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericStreamTracer_SetMaximumPropagation_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetMaximumPropagation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumPropagation");
  return nullptr;
}



static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagationUnit(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumPropagationUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumPropagationUnit() :
      op->vtkGenericStreamTracer::GetMaximumPropagationUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagation() :
      op->vtkGenericStreamTracer::GetMaximumPropagation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagationUnitToTimeUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnitToTimeUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagationUnitToLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnitToLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumPropagationUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagationUnitToCellLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumPropagationUnitToCellLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStep(temp0, temp1);
    }
    else
    {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStep(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMinimumIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetMinimumIntegrationStep_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumIntegrationStep");
  return nullptr;
}



static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStepUnit(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMinimumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumIntegrationStepUnit() :
      op->vtkGenericStreamTracer::GetMinimumIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumIntegrationStep() :
      op->vtkGenericStreamTracer::GetMinimumIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStepUnitToTimeUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToTimeUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStepUnitToLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStepUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStepUnitToCellLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToCellLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStep(temp0, temp1);
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStep(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetMaximumIntegrationStep_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumIntegrationStep");
  return nullptr;
}



static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStepUnit(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumIntegrationStepUnit() :
      op->vtkGenericStreamTracer::GetMaximumIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumIntegrationStep() :
      op->vtkGenericStreamTracer::GetMaximumIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStepUnitToTimeUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToTimeUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStepUnitToLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStepUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStepUnitToCellLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToCellLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStep(temp0, temp1);
    }
    else
    {
      op->vtkGenericStreamTracer::SetInitialIntegrationStep(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetInitialIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericStreamTracer_SetInitialIntegrationStep_s1(self, args);
    case 1:
      return PyvtkGenericStreamTracer_SetInitialIntegrationStep_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInitialIntegrationStep");
  return nullptr;
}



static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStepUnit(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetInitialIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitialIntegrationStepUnit() :
      op->vtkGenericStreamTracer::GetInitialIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInitialIntegrationStep() :
      op->vtkGenericStreamTracer::GetInitialIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToTimeUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnitToTimeUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStepUnitToTimeUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnitToTimeUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnitToLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStepUnitToLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnitToLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToCellLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStepUnitToCellLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStepUnitToCellLengthUnit();
    }
    else
    {
      op->vtkGenericStreamTracer::SetInitialIntegrationStepUnitToCellLengthUnit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkGenericStreamTracer::GetMaximumError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetMaximumNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSteps() :
      op->vtkGenericStreamTracer::GetMaximumNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetTerminalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkGenericStreamTracer::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetIntegrationDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMinValue() :
      op->vtkGenericStreamTracer::GetIntegrationDirectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMaxValue() :
      op->vtkGenericStreamTracer::GetIntegrationDirectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirection() :
      op->vtkGenericStreamTracer::GetIntegrationDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToForward();
    }
    else
    {
      op->vtkGenericStreamTracer::SetIntegrationDirectionToForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBackward();
    }
    else
    {
      op->vtkGenericStreamTracer::SetIntegrationDirectionToBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetIntegrationDirectionToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBoth();
    }
    else
    {
      op->vtkGenericStreamTracer::SetIntegrationDirectionToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  int temp0;
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
      op->vtkGenericStreamTracer::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkGenericStreamTracer::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_ComputeVorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOn();
    }
    else
    {
      op->vtkGenericStreamTracer::ComputeVorticityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_ComputeVorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOff();
    }
    else
    {
      op->vtkGenericStreamTracer::ComputeVorticityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

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
      op->vtkGenericStreamTracer::SetRotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkGenericStreamTracer::GetRotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_GetInputVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputVectorsSelection() :
      op->vtkGenericStreamTracer::GetInputVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SelectInputVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectInputVectors(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::SelectInputVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_AddInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericStreamTracer_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericStreamTracer *op = static_cast<vtkGenericStreamTracer *>(vp);

  vtkGenericInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorPrototype(temp0);
    }
    else
    {
      op->vtkGenericStreamTracer::SetInterpolatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericStreamTracer_Methods[] = {
  {"IsTypeOf", PyvtkGenericStreamTracer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericStreamTracer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericStreamTracer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericStreamTracer\nC++: static vtkGenericStreamTracer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericStreamTracer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericStreamTracer\nC++: vtkGenericStreamTracer *NewInstance()\n\n"},
  {"SetStartPosition", PyvtkGenericStreamTracer_SetStartPosition, METH_VARARGS,
   "V.SetStartPosition(float, float, float)\nC++: void SetStartPosition(double, double, double)\nV.SetStartPosition((float, float, float))\nC++: void SetStartPosition(double a[3])\n\n"},
  {"GetStartPosition", PyvtkGenericStreamTracer_GetStartPosition, METH_VARARGS,
   "V.GetStartPosition() -> (float, float, float)\nC++: double *GetStartPosition()\n\n"},
  {"SetSourceData", PyvtkGenericStreamTracer_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkDataSet)\nC++: void SetSourceData(vtkDataSet *source)\n\nSpecify the source object used to generate starting points.\n"},
  {"GetSource", PyvtkGenericStreamTracer_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\nSpecify the source object used to generate starting points.\n"},
  {"SetSourceConnection", PyvtkGenericStreamTracer_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to generate starting points\n(seeds). New style.\n"},
  {"FillInputPortInformation", PyvtkGenericStreamTracer_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"SetIntegrator", PyvtkGenericStreamTracer_SetIntegrator, METH_VARARGS,
   "V.SetIntegrator(vtkInitialValueProblemSolver)\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"GetIntegrator", PyvtkGenericStreamTracer_GetIntegrator, METH_VARARGS,
   "V.GetIntegrator() -> vtkInitialValueProblemSolver\nC++: virtual vtkInitialValueProblemSolver *GetIntegrator()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"SetIntegratorType", PyvtkGenericStreamTracer_SetIntegratorType, METH_VARARGS,
   "V.SetIntegratorType(int)\nC++: void SetIntegratorType(int type)\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"GetIntegratorType", PyvtkGenericStreamTracer_GetIntegratorType, METH_VARARGS,
   "V.GetIntegratorType() -> int\nC++: int GetIntegratorType()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"SetIntegratorTypeToRungeKutta2", PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta2, METH_VARARGS,
   "V.SetIntegratorTypeToRungeKutta2()\nC++: void SetIntegratorTypeToRungeKutta2()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"SetIntegratorTypeToRungeKutta4", PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta4, METH_VARARGS,
   "V.SetIntegratorTypeToRungeKutta4()\nC++: void SetIntegratorTypeToRungeKutta4()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"SetIntegratorTypeToRungeKutta45", PyvtkGenericStreamTracer_SetIntegratorTypeToRungeKutta45, METH_VARARGS,
   "V.SetIntegratorTypeToRungeKutta45()\nC++: void SetIntegratorTypeToRungeKutta45()\n\nSet/get the integrator type to be used in the stream line\ncalculation. The object passed is not actually used but is cloned\nwith NewInstance in the process of integration (prototype\npattern). The default is 2nd order Runge Kutta. The integrator\ncan also be changed using SetIntegratorType. The recognized\nsolvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 =\n2\n"},
  {"SetMaximumPropagation", PyvtkGenericStreamTracer_SetMaximumPropagation, METH_VARARGS,
   "V.SetMaximumPropagation(int, float)\nC++: void SetMaximumPropagation(int unit, double max)\nV.SetMaximumPropagation(float)\nC++: void SetMaximumPropagation(double max)\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"SetMaximumPropagationUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnit, METH_VARARGS,
   "V.SetMaximumPropagationUnit(int)\nC++: void SetMaximumPropagationUnit(int unit)\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"GetMaximumPropagationUnit", PyvtkGenericStreamTracer_GetMaximumPropagationUnit, METH_VARARGS,
   "V.GetMaximumPropagationUnit() -> int\nC++: int GetMaximumPropagationUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"GetMaximumPropagation", PyvtkGenericStreamTracer_GetMaximumPropagation, METH_VARARGS,
   "V.GetMaximumPropagation() -> float\nC++: double GetMaximumPropagation()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"SetMaximumPropagationUnitToTimeUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnitToTimeUnit, METH_VARARGS,
   "V.SetMaximumPropagationUnitToTimeUnit()\nC++: void SetMaximumPropagationUnitToTimeUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"SetMaximumPropagationUnitToLengthUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnitToLengthUnit, METH_VARARGS,
   "V.SetMaximumPropagationUnitToLengthUnit()\nC++: void SetMaximumPropagationUnitToLengthUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"SetMaximumPropagationUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetMaximumPropagationUnitToCellLengthUnit, METH_VARARGS,
   "V.SetMaximumPropagationUnitToCellLengthUnit()\nC++: void SetMaximumPropagationUnitToCellLengthUnit()\n\nSpecify the maximum length of the streamlines expressed in one of\nthe: TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT =\n2\n"},
  {"SetMinimumIntegrationStep", PyvtkGenericStreamTracer_SetMinimumIntegrationStep, METH_VARARGS,
   "V.SetMinimumIntegrationStep(int, float)\nC++: void SetMinimumIntegrationStep(int unit, double step)\nV.SetMinimumIntegrationStep(float)\nC++: void SetMinimumIntegrationStep(double step)\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMinimumIntegrationStepUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnit, METH_VARARGS,
   "V.SetMinimumIntegrationStepUnit(int)\nC++: void SetMinimumIntegrationStepUnit(int unit)\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"GetMinimumIntegrationStepUnit", PyvtkGenericStreamTracer_GetMinimumIntegrationStepUnit, METH_VARARGS,
   "V.GetMinimumIntegrationStepUnit() -> int\nC++: int GetMinimumIntegrationStepUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"GetMinimumIntegrationStep", PyvtkGenericStreamTracer_GetMinimumIntegrationStep, METH_VARARGS,
   "V.GetMinimumIntegrationStep() -> float\nC++: double GetMinimumIntegrationStep()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMinimumIntegrationStepUnitToTimeUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToTimeUnit, METH_VARARGS,
   "V.SetMinimumIntegrationStepUnitToTimeUnit()\nC++: void SetMinimumIntegrationStepUnitToTimeUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMinimumIntegrationStepUnitToLengthUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToLengthUnit, METH_VARARGS,
   "V.SetMinimumIntegrationStepUnitToLengthUnit()\nC++: void SetMinimumIntegrationStepUnitToLengthUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMinimumIntegrationStepUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetMinimumIntegrationStepUnitToCellLengthUnit, METH_VARARGS,
   "V.SetMinimumIntegrationStepUnitToCellLengthUnit()\nC++: void SetMinimumIntegrationStepUnitToCellLengthUnit()\n\nSpecify the minimum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMaximumIntegrationStep", PyvtkGenericStreamTracer_SetMaximumIntegrationStep, METH_VARARGS,
   "V.SetMaximumIntegrationStep(int, float)\nC++: void SetMaximumIntegrationStep(int unit, double step)\nV.SetMaximumIntegrationStep(float)\nC++: void SetMaximumIntegrationStep(double step)\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMaximumIntegrationStepUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnit, METH_VARARGS,
   "V.SetMaximumIntegrationStepUnit(int)\nC++: void SetMaximumIntegrationStepUnit(int unit)\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"GetMaximumIntegrationStepUnit", PyvtkGenericStreamTracer_GetMaximumIntegrationStepUnit, METH_VARARGS,
   "V.GetMaximumIntegrationStepUnit() -> int\nC++: int GetMaximumIntegrationStepUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"GetMaximumIntegrationStep", PyvtkGenericStreamTracer_GetMaximumIntegrationStep, METH_VARARGS,
   "V.GetMaximumIntegrationStep() -> float\nC++: double GetMaximumIntegrationStep()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMaximumIntegrationStepUnitToTimeUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToTimeUnit, METH_VARARGS,
   "V.SetMaximumIntegrationStepUnitToTimeUnit()\nC++: void SetMaximumIntegrationStepUnitToTimeUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMaximumIntegrationStepUnitToLengthUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToLengthUnit, METH_VARARGS,
   "V.SetMaximumIntegrationStepUnitToLengthUnit()\nC++: void SetMaximumIntegrationStepUnitToLengthUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetMaximumIntegrationStepUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetMaximumIntegrationStepUnitToCellLengthUnit, METH_VARARGS,
   "V.SetMaximumIntegrationStepUnitToCellLengthUnit()\nC++: void SetMaximumIntegrationStepUnitToCellLengthUnit()\n\nSpecify the maximum step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.\n"},
  {"SetInitialIntegrationStep", PyvtkGenericStreamTracer_SetInitialIntegrationStep, METH_VARARGS,
   "V.SetInitialIntegrationStep(int, float)\nC++: void SetInitialIntegrationStep(int unit, double step)\nV.SetInitialIntegrationStep(float)\nC++: void SetInitialIntegrationStep(double step)\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"SetInitialIntegrationStepUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnit, METH_VARARGS,
   "V.SetInitialIntegrationStepUnit(int)\nC++: void SetInitialIntegrationStepUnit(int unit)\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"GetInitialIntegrationStepUnit", PyvtkGenericStreamTracer_GetInitialIntegrationStepUnit, METH_VARARGS,
   "V.GetInitialIntegrationStepUnit() -> int\nC++: int GetInitialIntegrationStepUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"GetInitialIntegrationStep", PyvtkGenericStreamTracer_GetInitialIntegrationStep, METH_VARARGS,
   "V.GetInitialIntegrationStep() -> float\nC++: double GetInitialIntegrationStep()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"SetInitialIntegrationStepUnitToTimeUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToTimeUnit, METH_VARARGS,
   "V.SetInitialIntegrationStepUnitToTimeUnit()\nC++: void SetInitialIntegrationStepUnitToTimeUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"SetInitialIntegrationStepUnitToLengthUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToLengthUnit, METH_VARARGS,
   "V.SetInitialIntegrationStepUnitToLengthUnit()\nC++: void SetInitialIntegrationStepUnitToLengthUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"SetInitialIntegrationStepUnitToCellLengthUnit", PyvtkGenericStreamTracer_SetInitialIntegrationStepUnitToCellLengthUnit, METH_VARARGS,
   "V.SetInitialIntegrationStepUnitToCellLengthUnit()\nC++: void SetInitialIntegrationStepUnitToCellLengthUnit()\n\nSpecify the initial step used in the integration expressed in one\nof the: TIME_UNIT        = 0 LENGTH_UNIT      = 1\nCELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is\nthe actual step used.\n"},
  {"SetMaximumError", PyvtkGenericStreamTracer_SetMaximumError, METH_VARARGS,
   "V.SetMaximumError(float)\nC++: virtual void SetMaximumError(double _arg)\n\nSpecify the maximum error in the integration. This value is\npassed to the integrator. Therefore, it's meaning depends on the\nintegrator used.\n"},
  {"GetMaximumError", PyvtkGenericStreamTracer_GetMaximumError, METH_VARARGS,
   "V.GetMaximumError() -> float\nC++: virtual double GetMaximumError()\n\nSpecify the maximum error in the integration. This value is\npassed to the integrator. Therefore, it's meaning depends on the\nintegrator used.\n"},
  {"SetMaximumNumberOfSteps", PyvtkGenericStreamTracer_SetMaximumNumberOfSteps, METH_VARARGS,
   "V.SetMaximumNumberOfSteps(int)\nC++: virtual void SetMaximumNumberOfSteps(vtkIdType _arg)\n\nSpecify the maximum number of steps used in the integration.\n"},
  {"GetMaximumNumberOfSteps", PyvtkGenericStreamTracer_GetMaximumNumberOfSteps, METH_VARARGS,
   "V.GetMaximumNumberOfSteps() -> int\nC++: virtual vtkIdType GetMaximumNumberOfSteps()\n\nSpecify the maximum number of steps used in the integration.\n"},
  {"SetTerminalSpeed", PyvtkGenericStreamTracer_SetTerminalSpeed, METH_VARARGS,
   "V.SetTerminalSpeed(float)\nC++: virtual void SetTerminalSpeed(double _arg)\n\nIf at any point, the speed is below this value, the integration\nis terminated.\n"},
  {"GetTerminalSpeed", PyvtkGenericStreamTracer_GetTerminalSpeed, METH_VARARGS,
   "V.GetTerminalSpeed() -> float\nC++: virtual double GetTerminalSpeed()\n\nIf at any point, the speed is below this value, the integration\nis terminated.\n"},
  {"SetIntegrationStepUnit", PyvtkGenericStreamTracer_SetIntegrationStepUnit, METH_VARARGS,
   "V.SetIntegrationStepUnit(int)\nC++: void SetIntegrationStepUnit(int unit)\n\nSimplified API to set an homogeneous unit across Min/Max/Init\nIntegrationStepUnit\n"},
  {"SetIntegrationDirection", PyvtkGenericStreamTracer_SetIntegrationDirection, METH_VARARGS,
   "V.SetIntegrationDirection(int)\nC++: virtual void SetIntegrationDirection(int _arg)\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"GetIntegrationDirectionMinValue", PyvtkGenericStreamTracer_GetIntegrationDirectionMinValue, METH_VARARGS,
   "V.GetIntegrationDirectionMinValue() -> int\nC++: virtual int GetIntegrationDirectionMinValue()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"GetIntegrationDirectionMaxValue", PyvtkGenericStreamTracer_GetIntegrationDirectionMaxValue, METH_VARARGS,
   "V.GetIntegrationDirectionMaxValue() -> int\nC++: virtual int GetIntegrationDirectionMaxValue()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"GetIntegrationDirection", PyvtkGenericStreamTracer_GetIntegrationDirection, METH_VARARGS,
   "V.GetIntegrationDirection() -> int\nC++: virtual int GetIntegrationDirection()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"SetIntegrationDirectionToForward", PyvtkGenericStreamTracer_SetIntegrationDirectionToForward, METH_VARARGS,
   "V.SetIntegrationDirectionToForward()\nC++: void SetIntegrationDirectionToForward()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"SetIntegrationDirectionToBackward", PyvtkGenericStreamTracer_SetIntegrationDirectionToBackward, METH_VARARGS,
   "V.SetIntegrationDirectionToBackward()\nC++: void SetIntegrationDirectionToBackward()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"SetIntegrationDirectionToBoth", PyvtkGenericStreamTracer_SetIntegrationDirectionToBoth, METH_VARARGS,
   "V.SetIntegrationDirectionToBoth()\nC++: void SetIntegrationDirectionToBoth()\n\nSpecify whether the streamtrace will be generated in the upstream\nor downstream direction.\n"},
  {"SetComputeVorticity", PyvtkGenericStreamTracer_SetComputeVorticity, METH_VARARGS,
   "V.SetComputeVorticity(int)\nC++: virtual void SetComputeVorticity(vtkTypeBool _arg)\n\nTurn on/off calculation of vorticity at streamline points\n(necessary for generating proper streamribbons using the\nvtkRibbonFilter.\n"},
  {"GetComputeVorticity", PyvtkGenericStreamTracer_GetComputeVorticity, METH_VARARGS,
   "V.GetComputeVorticity() -> int\nC++: virtual vtkTypeBool GetComputeVorticity()\n\nTurn on/off calculation of vorticity at streamline points\n(necessary for generating proper streamribbons using the\nvtkRibbonFilter.\n"},
  {"ComputeVorticityOn", PyvtkGenericStreamTracer_ComputeVorticityOn, METH_VARARGS,
   "V.ComputeVorticityOn()\nC++: virtual void ComputeVorticityOn()\n\nTurn on/off calculation of vorticity at streamline points\n(necessary for generating proper streamribbons using the\nvtkRibbonFilter.\n"},
  {"ComputeVorticityOff", PyvtkGenericStreamTracer_ComputeVorticityOff, METH_VARARGS,
   "V.ComputeVorticityOff()\nC++: virtual void ComputeVorticityOff()\n\nTurn on/off calculation of vorticity at streamline points\n(necessary for generating proper streamribbons using the\nvtkRibbonFilter.\n"},
  {"SetRotationScale", PyvtkGenericStreamTracer_SetRotationScale, METH_VARARGS,
   "V.SetRotationScale(float)\nC++: virtual void SetRotationScale(double _arg)\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"GetRotationScale", PyvtkGenericStreamTracer_GetRotationScale, METH_VARARGS,
   "V.GetRotationScale() -> float\nC++: virtual double GetRotationScale()\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"GetInputVectorsSelection", PyvtkGenericStreamTracer_GetInputVectorsSelection, METH_VARARGS,
   "V.GetInputVectorsSelection() -> string\nC++: virtual char *GetInputVectorsSelection()\n\nIf you want to generate traces using an arbitrary vector array,\nthen set its name here. By default this in nullptr and the filter\nwill use the active vector array.\n"},
  {"SelectInputVectors", PyvtkGenericStreamTracer_SelectInputVectors, METH_VARARGS,
   "V.SelectInputVectors(string)\nC++: void SelectInputVectors(const char *fieldName)\n\nIf you want to generate traces using an arbitrary vector array,\nthen set its name here. By default this in nullptr and the filter\nwill use the active vector array.\n"},
  {"AddInputData", PyvtkGenericStreamTracer_AddInputData, METH_VARARGS,
   "V.AddInputData(vtkGenericDataSet)\nC++: void AddInputData(vtkGenericDataSet *in)\n\nAdd a dataset to the list inputs\n"},
  {"SetInterpolatorPrototype", PyvtkGenericStreamTracer_SetInterpolatorPrototype, METH_VARARGS,
   "V.SetInterpolatorPrototype(vtkGenericInterpolatedVelocityField)\nC++: void SetInterpolatorPrototype(\n    vtkGenericInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericStreamTracer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericStreamTracer", // tp_name
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
  PyvtkGenericStreamTracer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericStreamTracer_StaticNew()
{
  return vtkGenericStreamTracer::New();
}

PyObject *PyvtkGenericStreamTracer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericStreamTracer_Type, PyvtkGenericStreamTracer_Methods,
    "vtkGenericStreamTracer",
 &PyvtkGenericStreamTracer_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericStreamTracer_Type;

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

  PyType_Ready(&PyvtkGenericStreamTracer_Units_Type);
  PyvtkGenericStreamTracer_Units_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGenericStreamTracer_Units_Type);

  o = (PyObject *)&PyvtkGenericStreamTracer_Units_Type;
  if (PyDict_SetItemString(d, "Units", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGenericStreamTracer_Solvers_Type);
  PyvtkGenericStreamTracer_Solvers_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGenericStreamTracer_Solvers_Type);

  o = (PyObject *)&PyvtkGenericStreamTracer_Solvers_Type;
  if (PyDict_SetItemString(d, "Solvers", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGenericStreamTracer_ReasonForTermination_Type);
  PyvtkGenericStreamTracer_ReasonForTermination_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGenericStreamTracer_ReasonForTermination_Type);

  o = (PyObject *)&PyvtkGenericStreamTracer_ReasonForTermination_Type;
  if (PyDict_SetItemString(d, "ReasonForTermination", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGenericStreamTracer::Units cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "TIME_UNIT", vtkGenericStreamTracer::TIME_UNIT },
        { "LENGTH_UNIT", vtkGenericStreamTracer::LENGTH_UNIT },
        { "CELL_LENGTH_UNIT", vtkGenericStreamTracer::CELL_LENGTH_UNIT },
      };

    o = PyvtkGenericStreamTracer_Units_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkGenericStreamTracer::Solvers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "RUNGE_KUTTA2", vtkGenericStreamTracer::RUNGE_KUTTA2 },
        { "RUNGE_KUTTA4", vtkGenericStreamTracer::RUNGE_KUTTA4 },
        { "RUNGE_KUTTA45", vtkGenericStreamTracer::RUNGE_KUTTA45 },
        { "NONE", vtkGenericStreamTracer::NONE },
        { "UNKNOWN", vtkGenericStreamTracer::UNKNOWN },
      };

    o = PyvtkGenericStreamTracer_Solvers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkGenericStreamTracer::ReasonForTermination cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "OUT_OF_DOMAIN", vtkGenericStreamTracer::OUT_OF_DOMAIN },
        { "NOT_INITIALIZED", vtkGenericStreamTracer::NOT_INITIALIZED },
        { "UNEXPECTED_VALUE", vtkGenericStreamTracer::UNEXPECTED_VALUE },
        { "OUT_OF_TIME", vtkGenericStreamTracer::OUT_OF_TIME },
        { "OUT_OF_STEPS", vtkGenericStreamTracer::OUT_OF_STEPS },
        { "STAGNATION", vtkGenericStreamTracer::STAGNATION },
      };

    o = PyvtkGenericStreamTracer_ReasonForTermination_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "FORWARD", vtkGenericStreamTracer::FORWARD },
        { "BACKWARD", vtkGenericStreamTracer::BACKWARD },
        { "BOTH", vtkGenericStreamTracer::BOTH },
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

void PyVTKAddFile_vtkGenericStreamTracer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericStreamTracer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericStreamTracer", o) != 0)
  {
    Py_DECREF(o);
  }

}

