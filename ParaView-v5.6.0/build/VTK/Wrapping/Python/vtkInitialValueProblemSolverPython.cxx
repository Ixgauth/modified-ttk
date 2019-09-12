// python wrapper for vtkInitialValueProblemSolver
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
#include "vtkInitialValueProblemSolver.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInitialValueProblemSolver(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInitialValueProblemSolver_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInitialValueProblemSolver_Doc =
  "vtkInitialValueProblemSolver - Integrate a set of ordinary\ndifferential equations (initial value problem) in time.\n\n"
  "Superclass: vtkObject\n\n"
  "Given a vtkFunctionSet which returns dF_i(x_j, t)/dt given x_j and t,\n"
  "vtkInitialValueProblemSolver computes the value of F_i at t+deltat.\n\n"
  "@warning\n"
  "vtkInitialValueProblemSolver and it's subclasses are not thread-safe.\n"
  "You should create a new integrator for each thread.\n\n"
  "@sa\n"
  "vtkRungeKutta2 vtkRungeKutta4\n\n";

static PyTypeObject PyvtkInitialValueProblemSolver_ErrorCodes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkInitialValueProblemSolver.ErrorCodes", // tp_name
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

PyObject *PyvtkInitialValueProblemSolver_ErrorCodes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkInitialValueProblemSolver_ErrorCodes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkInitialValueProblemSolver_ErrorCodes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkInitialValueProblemSolver_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInitialValueProblemSolver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInitialValueProblemSolver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInitialValueProblemSolver *tempr = vtkInitialValueProblemSolver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInitialValueProblemSolver::NewInstance());

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(8, temp8);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(10) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(9, temp9);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s1(self, args);
    case 7:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s2(self, args);
    case 9:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s3(self, args);
    case 10:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNextStep");
  return nullptr;
}



static PyObject *
PyvtkInitialValueProblemSolver_SetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  vtkFunctionSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFunctionSet"))
  {
    if (ap.IsBound())
    {
      op->SetFunctionSet(temp0);
    }
    else
    {
      op->vtkInitialValueProblemSolver::SetFunctionSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_GetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFunctionSet *tempr = (ap.IsBound() ?
      op->GetFunctionSet() :
      op->vtkInitialValueProblemSolver::GetFunctionSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsAdaptive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAdaptive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAdaptive() :
      op->vtkInitialValueProblemSolver::IsAdaptive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInitialValueProblemSolver_Methods[] = {
  {"IsTypeOf", PyvtkInitialValueProblemSolver_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInitialValueProblemSolver_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInitialValueProblemSolver_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInitialValueProblemSolver\nC++: static vtkInitialValueProblemSolver *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInitialValueProblemSolver_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *NewInstance()\n\n"},
  {"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep, METH_VARARGS,
   "V.ComputeNextStep([float, ...], [float, ...], float, float, float,\n     float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double maxError, double &error)\nV.ComputeNextStep([float, ...], [float, ...], [float, ...], float,\n     float, float, float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double maxError,\n    double &error)\nV.ComputeNextStep([float, ...], [float, ...], float, float, float,\n     float, float, float, float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double &delTActual, double minStep,\n    double maxStep, double maxError, double &error)\nV.ComputeNextStep([float, ...], [float, ...], [float, ...], float,\n     float, float, float, float, float, float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double &delTActual,\n    double minStep, double maxStep, double maxError,\n    double &error)\n\nGiven initial values, xprev , initial time, t and a requested\ntime interval, delT calculate values of x at t+delTActual\n(xnext). For certain concrete sub-classes delTActual != delT.\nThis occurs when the solver supports adaptive stepsize control.\nIf this is the case, the solver tries to change to stepsize such\nthat the (estimated) error of the integration is less than\nmaxError. The solver will not set the stepsize smaller than\nminStep or larger than maxStep. Also note that delT is an in/out\nargument. Adaptive solvers will modify delT to reflect the best\n(estimated) size for the next integration step. An estimated\nvalue for the error is returned (by reference) in error. Note\nthat only some concrete sub-classes support this. Otherwise, the\nerror is set to 0. This method returns an error code representing\nthe nature of the failure: OutOfDomain = 1, NotInitialized = 2,\nUnexpectedValue = 3\n"},
  {"SetFunctionSet", PyvtkInitialValueProblemSolver_SetFunctionSet, METH_VARARGS,
   "V.SetFunctionSet(vtkFunctionSet)\nC++: virtual void SetFunctionSet(vtkFunctionSet *functionset)\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {"GetFunctionSet", PyvtkInitialValueProblemSolver_GetFunctionSet, METH_VARARGS,
   "V.GetFunctionSet() -> vtkFunctionSet\nC++: virtual vtkFunctionSet *GetFunctionSet()\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {"IsAdaptive", PyvtkInitialValueProblemSolver_IsAdaptive, METH_VARARGS,
   "V.IsAdaptive() -> int\nC++: virtual int IsAdaptive()\n\nReturns 1 if the solver uses adaptive stepsize control, 0\notherwise\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInitialValueProblemSolver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkInitialValueProblemSolver", // tp_name
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
  PyvtkInitialValueProblemSolver_Doc, // tp_doc
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

PyObject *PyvtkInitialValueProblemSolver_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInitialValueProblemSolver_Type, PyvtkInitialValueProblemSolver_Methods,
    "vtkInitialValueProblemSolver",
 nullptr);

  PyTypeObject *pytype = &PyvtkInitialValueProblemSolver_Type;

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

  PyType_Ready(&PyvtkInitialValueProblemSolver_ErrorCodes_Type);
  PyvtkInitialValueProblemSolver_ErrorCodes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkInitialValueProblemSolver_ErrorCodes_Type);

  o = (PyObject *)&PyvtkInitialValueProblemSolver_ErrorCodes_Type;
  if (PyDict_SetItemString(d, "ErrorCodes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkInitialValueProblemSolver::ErrorCodes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "OUT_OF_DOMAIN", vtkInitialValueProblemSolver::OUT_OF_DOMAIN },
        { "NOT_INITIALIZED", vtkInitialValueProblemSolver::NOT_INITIALIZED },
        { "UNEXPECTED_VALUE", vtkInitialValueProblemSolver::UNEXPECTED_VALUE },
      };

    o = PyvtkInitialValueProblemSolver_ErrorCodes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInitialValueProblemSolver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInitialValueProblemSolver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInitialValueProblemSolver", o) != 0)
  {
    Py_DECREF(o);
  }

}

