// python wrapper for vtkLagrangianBasicIntegrationModel
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
#include "vtkDataSet.h"
#include "vtkAbstractCellLocator.h"
#include "vtkLagrangianBasicIntegrationModel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangianBasicIntegrationModel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLagrangianBasicIntegrationModel_ClassNew(); }

#ifndef DECLARED_PyvtkFunctionSet_ClassNew
extern "C" { PyObject *PyvtkFunctionSet_ClassNew(); }
#define DECLARED_PyvtkFunctionSet_ClassNew
#endif

static const char *PyvtkLagrangianBasicIntegrationModel_Doc =
  "vtkLagrangianBasicIntegrationModel - vtkFunctionSet abstract\nimplementation to be used in the vtkLagrangianParticleTracker\nintegrator.\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "This vtkFunctionSet abstract implementation is meant to be used as a\n"
  "parameter of vtkLagrangianParticleTracker. It manages multiples\n"
  "datasets locator in order to evaluate the\n"
  "vtkFunctionSet::FunctionValues method. The actual FunctionValues\n"
  "implementation should be found in class inheriting this class Input\n"
  "Array to process are expected as follows : Index 0 : \"SurfaceType\"\n"
  "array of surface input of the particle tracker\n\n"
  "Inherited classes MUST implement int FunctionValues(vtkDataSet*\n"
  "detaSet, vtkIdType cellId, double* weights,\n"
  "   double * x, double * f); to define how the integration works.\n\n"
  "Inherited classes could reimplement SetCurrentParticle,\n"
  "InitializeVariablesParticleData, and InsertVariablesParticleData to\n"
  "add new UserVariables to integrate with\n\n"
  "Inherited classes could reimplement InteractWithSurface or other\n"
  "surface interaction method to changes the way particle interact with\n"
  "surface\n\n"
  "Inherited classes could reimplement IntersectWithLine to use a\n"
  "specific algorithm to intersect particles and surface cells.\n\n"
  "Inherited class could reimplement CheckFreeFlightTermination to set\n"
  "the way particle terminate in free flight\n\n"
  "@sa\n"
  "vtkLagrangianParticleTracker vtkLagrangianParticle\n"
  "vtkLagrangianMatidaIntegrationModel\n\n";

static PyTypeObject PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianBasicIntegrationModel.SurfaceType", // tp_name
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

PyObject *PyvtkLagrangianBasicIntegrationModel_SurfaceType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkLagrangianBasicIntegrationModel_VariableStep_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianBasicIntegrationModel.VariableStep", // tp_name
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

PyObject *PyvtkLagrangianBasicIntegrationModel_VariableStep_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLagrangianBasicIntegrationModel_VariableStep_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangianBasicIntegrationModel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangianBasicIntegrationModel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangianBasicIntegrationModel *tempr = vtkLagrangianBasicIntegrationModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianBasicIntegrationModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangianBasicIntegrationModel::NewInstance());

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
PyvtkLagrangianBasicIntegrationModel_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkLagrangianBasicIntegrationModel::FunctionValues(temp0, temp1));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkLagrangianBasicIntegrationModel::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetLocatorsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLocatorsBuilt() :
      op->vtkLagrangianBasicIntegrationModel::GetLocatorsBuilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetLocatorsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocatorsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocatorsBuilt(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetLocatorsBuilt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetTracker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTracker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkLagrangianParticleTracker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLagrangianParticleTracker"))
  {
    if (ap.IsBound())
    {
      op->SetTracker(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetTracker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkDataSet *temp0 = nullptr;
  bool temp1 = false;
  unsigned int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::AddDataSet(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_ClearDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ClearDataSets(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::ClearDataSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetUseInitialIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInitialIntegrationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInitialIntegrationTime(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetUseInitialIntegrationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetUseInitialIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInitialIntegrationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseInitialIntegrationTime() :
      op->vtkLagrangianBasicIntegrationModel::GetUseInitialIntegrationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInitialIntegrationTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInitialIntegrationTimeOn();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::UseInitialIntegrationTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInitialIntegrationTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInitialIntegrationTimeOff();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::UseInitialIntegrationTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLagrangianBasicIntegrationModel::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

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
      op->vtkLagrangianBasicIntegrationModel::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_FindInLocators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindInLocators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindInLocators(temp0) :
      op->vtkLagrangianBasicIntegrationModel::FindInLocators(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_InitializeVariablesParticleData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeVariablesParticleData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkPointData *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPointData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->InitializeVariablesParticleData(temp0, temp1);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::InitializeVariablesParticleData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_InitializeModelPathData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeModelPathData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->InitializeModelPathData(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::InitializeModelPathData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetNonPlanarQuadSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonPlanarQuadSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonPlanarQuadSupport(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetNonPlanarQuadSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetNonPlanarQuadSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonPlanarQuadSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNonPlanarQuadSupport() :
      op->vtkLagrangianBasicIntegrationModel::GetNonPlanarQuadSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonPlanarQuadSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonPlanarQuadSupportOn();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::NonPlanarQuadSupportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonPlanarQuadSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonPlanarQuadSupportOff();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::NonPlanarQuadSupportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSeedArrayNames() :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArrayComps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayComps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSeedArrayComps() :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArrayComps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArrayTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSeedArrayTypes() :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArrayTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayNames() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayTypes() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayEnumValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayEnumValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayEnumValues() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayEnumValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayDefaultValues() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayDefaultValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayComps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayComps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayComps() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayComps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetWeightsSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightsSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightsSize() :
      op->vtkLagrangianBasicIntegrationModel::GetWeightsSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_ManualIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManualIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

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
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
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

    bool tempr = (ap.IsBound() ?
      op->ManualIntegration(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkLagrangianBasicIntegrationModel::ManualIntegration(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

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
PyvtkLagrangianBasicIntegrationModel_FinalizeOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FinalizeOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkPolyData *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->FinalizeOutputs(temp0, temp1) :
      op->vtkLagrangianBasicIntegrationModel::FinalizeOutputs(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  int temp0;
  vtkPointData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointData"))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetSeedArray(temp0, temp1) :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangianBasicIntegrationModel_Methods[] = {
  {"IsTypeOf", PyvtkLagrangianBasicIntegrationModel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangianBasicIntegrationModel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangianBasicIntegrationModel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkLagrangianBasicIntegrationModel\nC++: static vtkLagrangianBasicIntegrationModel *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangianBasicIntegrationModel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLagrangianBasicIntegrationModel\nC++: vtkLagrangianBasicIntegrationModel *NewInstance()\n\n"},
  {"FunctionValues", PyvtkLagrangianBasicIntegrationModel_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate integration model velocity f at position x. Look for the\ncell containing the position x in all it's added dataset in found\nthis will call FunctionValues(vtkDataSet* detaSet, vtkIdType\ncellId, double* x, double* f)\n"},
  {"SetLocator", PyvtkLagrangianBasicIntegrationModel_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractCellLocator)\nC++: virtual void SetLocator(vtkAbstractCellLocator *locator)\n\nSet/Get the locator used to locate cells in the datasets. Only\nthe locator class matter here, as it is used only to create\nNewInstance of it. Default is a vtkCellLocator.\n"},
  {"GetLocator", PyvtkLagrangianBasicIntegrationModel_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetLocator()\n\nSet/Get the locator used to locate cells in the datasets. Only\nthe locator class matter here, as it is used only to create\nNewInstance of it. Default is a vtkCellLocator.\n"},
  {"GetLocatorsBuilt", PyvtkLagrangianBasicIntegrationModel_GetLocatorsBuilt, METH_VARARGS,
   "V.GetLocatorsBuilt() -> bool\nC++: virtual bool GetLocatorsBuilt()\n\nGet the state of the current locators\n"},
  {"SetLocatorsBuilt", PyvtkLagrangianBasicIntegrationModel_SetLocatorsBuilt, METH_VARARGS,
   "V.SetLocatorsBuilt(bool)\nC++: virtual void SetLocatorsBuilt(bool _arg)\n\nGet the state of the current locators\n"},
  {"SetTracker", PyvtkLagrangianBasicIntegrationModel_SetTracker, METH_VARARGS,
   "V.SetTracker(vtkLagrangianParticleTracker)\nC++: virtual void SetTracker(\n    vtkLagrangianParticleTracker *Tracker)\n\nSet the parent tracker.\n"},
  {"AddDataSet", PyvtkLagrangianBasicIntegrationModel_AddDataSet, METH_VARARGS,
   "V.AddDataSet(vtkDataSet, bool, int)\nC++: virtual void AddDataSet(vtkDataSet *dataset,\n    bool surface=false, unsigned int surfaceFlatIndex=0)\n\nAdd a dataset to locate cells in This create a specific locator\nfor the provided dataset using the Locator member of this class\nThe surface flag allow to manage surfaces datasets for surface\ninteraction instead of flow datasets surfaceFlatIndex, used only\nwith composite surface, in order to identify the flatIndex of the\nsurface for particle interaction\n"},
  {"ClearDataSets", PyvtkLagrangianBasicIntegrationModel_ClearDataSets, METH_VARARGS,
   "V.ClearDataSets(bool)\nC++: virtual void ClearDataSets(bool surface=false)\n\nAdd a dataset to locate cells in This create a specific locator\nfor the provided dataset using the Locator member of this class\nThe surface flag allow to manage surfaces datasets for surface\ninteraction instead of flow datasets surfaceFlatIndex, used only\nwith composite surface, in order to identify the flatIndex of the\nsurface for particle interaction\n"},
  {"SetUseInitialIntegrationTime", PyvtkLagrangianBasicIntegrationModel_SetUseInitialIntegrationTime, METH_VARARGS,
   "V.SetUseInitialIntegrationTime(bool)\nC++: virtual void SetUseInitialIntegrationTime(bool _arg)\n\nSet/Get the Use of initial integration input array to process\n"},
  {"GetUseInitialIntegrationTime", PyvtkLagrangianBasicIntegrationModel_GetUseInitialIntegrationTime, METH_VARARGS,
   "V.GetUseInitialIntegrationTime() -> bool\nC++: virtual bool GetUseInitialIntegrationTime()\n\nSet/Get the Use of initial integration input array to process\n"},
  {"UseInitialIntegrationTimeOn", PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOn, METH_VARARGS,
   "V.UseInitialIntegrationTimeOn()\nC++: virtual void UseInitialIntegrationTimeOn()\n\nSet/Get the Use of initial integration input array to process\n"},
  {"UseInitialIntegrationTimeOff", PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOff, METH_VARARGS,
   "V.UseInitialIntegrationTimeOff()\nC++: virtual void UseInitialIntegrationTimeOff()\n\nSet/Get the Use of initial integration input array to process\n"},
  {"GetTolerance", PyvtkLagrangianBasicIntegrationModel_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nGet the tolerance to use with this model.\n"},
  {"SetInputArrayToProcess", PyvtkLagrangianBasicIntegrationModel_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n\nSet a input array to process at a specific index, identified by a\nport, connection, fieldAssociation and a name. Each inherited\nclass can specify their own input array to process\n"},
  {"FindInLocators", PyvtkLagrangianBasicIntegrationModel_FindInLocators, METH_VARARGS,
   "V.FindInLocators([float, ...]) -> bool\nC++: virtual bool FindInLocators(double *x)\n\nLook for a dataset in this integration model containing the point\nx. return false if out of domain, return true and data to recover\nthe cell if in domain. does not filter out ghost cells.\nconvenience method with less outputs.\n"},
  {"InitializeVariablesParticleData", PyvtkLagrangianBasicIntegrationModel_InitializeVariablesParticleData, METH_VARARGS,
   "V.InitializeVariablesParticleData(vtkPointData, int)\nC++: virtual void InitializeVariablesParticleData(\n    vtkPointData *particleData, int maxTuples=0)\n\nEmpty method to be reimplemented if necessary in inherited\nclasses. Allows a intehrited class to create Specific array in\nthe output point data for storing variables.\n"},
  {"InitializeModelPathData", PyvtkLagrangianBasicIntegrationModel_InitializeModelPathData, METH_VARARGS,
   "V.InitializeModelPathData(vtkFieldData)\nC++: virtual void InitializeModelPathData(vtkFieldData *data)\n\nEmpty method to be reimplemented if necessary in inherited\nclasses. Allows an inherited class to create specific array in\nthe outputs field data associated with each particle path.\n"},
  {"SetNonPlanarQuadSupport", PyvtkLagrangianBasicIntegrationModel_SetNonPlanarQuadSupport, METH_VARARGS,
   "V.SetNonPlanarQuadSupport(bool)\nC++: virtual void SetNonPlanarQuadSupport(bool _arg)\n\nSet/Get Non Planar Quad Support\n"},
  {"GetNonPlanarQuadSupport", PyvtkLagrangianBasicIntegrationModel_GetNonPlanarQuadSupport, METH_VARARGS,
   "V.GetNonPlanarQuadSupport() -> bool\nC++: virtual bool GetNonPlanarQuadSupport()\n\nSet/Get Non Planar Quad Support\n"},
  {"NonPlanarQuadSupportOn", PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOn, METH_VARARGS,
   "V.NonPlanarQuadSupportOn()\nC++: virtual void NonPlanarQuadSupportOn()\n\nSet/Get Non Planar Quad Support\n"},
  {"NonPlanarQuadSupportOff", PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOff, METH_VARARGS,
   "V.NonPlanarQuadSupportOff()\nC++: virtual void NonPlanarQuadSupportOff()\n\nSet/Get Non Planar Quad Support\n"},
  {"GetSeedArrayNames", PyvtkLagrangianBasicIntegrationModel_GetSeedArrayNames, METH_VARARGS,
   "V.GetSeedArrayNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetSeedArrayNames()\n\nGet the seed arrays expected name Used Only be the\nvtkLagrangianSeedHelper in ParaView plugins\n"},
  {"GetSeedArrayComps", PyvtkLagrangianBasicIntegrationModel_GetSeedArrayComps, METH_VARARGS,
   "V.GetSeedArrayComps() -> vtkIntArray\nC++: virtual vtkIntArray *GetSeedArrayComps()\n\nGet the seed arrays expected number of components Used Only be\nthe vtkLagrangianSeedHelper in ParaView plugins\n"},
  {"GetSeedArrayTypes", PyvtkLagrangianBasicIntegrationModel_GetSeedArrayTypes, METH_VARARGS,
   "V.GetSeedArrayTypes() -> vtkIntArray\nC++: virtual vtkIntArray *GetSeedArrayTypes()\n\nGet the seed arrays expected type Used Only be the\nvtkLagrangianSeedHelper in ParaView plugins\n"},
  {"GetSurfaceArrayNames", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayNames, METH_VARARGS,
   "V.GetSurfaceArrayNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetSurfaceArrayNames()\n\nGet the surface arrays expected name Used Only be the\nvtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayTypes", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayTypes, METH_VARARGS,
   "V.GetSurfaceArrayTypes() -> vtkIntArray\nC++: virtual vtkIntArray *GetSurfaceArrayTypes()\n\nGet the surface arrays expected type Used Only be the\nvtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayEnumValues", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayEnumValues, METH_VARARGS,
   "V.GetSurfaceArrayEnumValues() -> vtkStringArray\nC++: virtual vtkStringArray *GetSurfaceArrayEnumValues()\n\nGet the surface arrays expected values and associated enums Used\nOnly be the vtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayDefaultValues", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayDefaultValues, METH_VARARGS,
   "V.GetSurfaceArrayDefaultValues() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetSurfaceArrayDefaultValues()\n\nGet the surface arrays default values for each leaf Used Only be\nthe vtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayComps", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayComps, METH_VARARGS,
   "V.GetSurfaceArrayComps() -> vtkIntArray\nC++: virtual vtkIntArray *GetSurfaceArrayComps()\n\nGet the seed array expected number of components Used Only be the\nvtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetWeightsSize", PyvtkLagrangianBasicIntegrationModel_GetWeightsSize, METH_VARARGS,
   "V.GetWeightsSize() -> int\nC++: virtual int GetWeightsSize()\n\nGet the maximum weights size necessary for calling FindInLocators\nwith weights\n"},
  {"ManualIntegration", PyvtkLagrangianBasicIntegrationModel_ManualIntegration, METH_VARARGS,
   "V.ManualIntegration([float, ...], [float, ...], float, float,\n    float, float, float, float, float, int) -> bool\nC++: virtual bool ManualIntegration(double *xcur, double *xnext,\n    double t, double &delT, double &delTActual, double minStep,\n    double maxStep, double maxError, double &error,\n    int &integrationResult)\n\nLet the model define it's own way to integrate Signature is very\nclose to the integrator method signature output is expected to be\nthe same, see vtkInitialValueProblemSolver::ComputeNextStep for\nreference xcur is the current particle variables xnext is the\nnext particle variable t is the current integration time delT is\nthe timeStep, which is also an output for adaptative algorithm\ndelTActual is the time step output corresponding to the actual\nmovement of the particle minStep is the minimum step time for\nadaptative algorithm maxStep is the maximum step time for\nadaptative algorithm maxError is the maximum acceptable error\nerror is the output of actual error integrationResult is the\nresult of the integration, see\nvtkInitialValueProblemSolver::ErrorCodes for error report\notherwise it should be zero. be aware that only stagnating\nOUT_OF_DOMAIN will be considered actual out of domain error.\nReturn true if manual integration was used, false otherwise\nSimply return false in vtkLagrangianBasicIntegrationModel\nimplementation\n"},
  {"FinalizeOutputs", PyvtkLagrangianBasicIntegrationModel_FinalizeOutputs, METH_VARARGS,
   "V.FinalizeOutputs(vtkPolyData, vtkDataObject) -> bool\nC++: virtual bool FinalizeOutputs(\n    vtkPolyData *particlePathsOutput,\n    vtkDataObject *interractionOutput)\n\nEnable model post process on output Return true if successful,\nfalse otherwise Empty and Always return true with basic model\n"},
  {"GetSeedArray", PyvtkLagrangianBasicIntegrationModel_GetSeedArray, METH_VARARGS,
   "V.GetSeedArray(int, vtkPointData) -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetSeedArray(int idx,\n    vtkPointData *pointData)\n\nGet a seed array, as set in setInputArrayToProcess from the\nprovided seed point data\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLagrangianBasicIntegrationModel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianBasicIntegrationModel", // tp_name
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
  PyvtkLagrangianBasicIntegrationModel_Doc, // tp_doc
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

PyObject *PyvtkLagrangianBasicIntegrationModel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLagrangianBasicIntegrationModel_Type, PyvtkLagrangianBasicIntegrationModel_Methods,
    "vtkLagrangianBasicIntegrationModel",
 nullptr);

  PyTypeObject *pytype = &PyvtkLagrangianBasicIntegrationModel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFunctionSet_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type);
  PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type);

  o = (PyObject *)&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type;
  if (PyDict_SetItemString(d, "SurfaceType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type);
  PyvtkLagrangianBasicIntegrationModel_VariableStep_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type);

  o = (PyObject *)&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type;
  if (PyDict_SetItemString(d, "VariableStep", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkLagrangianBasicIntegrationModel::SurfaceType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "SURFACE_TYPE_MODEL", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_MODEL },
        { "SURFACE_TYPE_TERM", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_TERM },
        { "SURFACE_TYPE_BOUNCE", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_BOUNCE },
        { "SURFACE_TYPE_BREAK", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_BREAK },
        { "SURFACE_TYPE_PASS", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_PASS },
      };

    o = PyvtkLagrangianBasicIntegrationModel_SurfaceType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLagrangianBasicIntegrationModel::VariableStep cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VARIABLE_STEP_PREV", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_PREV },
        { "VARIABLE_STEP_CURRENT", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_CURRENT },
        { "VARIABLE_STEP_NEXT", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_NEXT },
      };

    o = PyvtkLagrangianBasicIntegrationModel_VariableStep_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangianBasicIntegrationModel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangianBasicIntegrationModel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangianBasicIntegrationModel", o) != 0)
  {
    Py_DECREF(o);
  }

}

