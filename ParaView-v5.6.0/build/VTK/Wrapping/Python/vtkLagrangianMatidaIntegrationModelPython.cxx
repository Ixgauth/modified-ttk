// python wrapper for vtkLagrangianMatidaIntegrationModel
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
#include "vtkLagrangianMatidaIntegrationModel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangianMatidaIntegrationModel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLagrangianMatidaIntegrationModel_ClassNew(); }

#ifndef DECLARED_PyvtkLagrangianBasicIntegrationModel_ClassNew
extern "C" { PyObject *PyvtkLagrangianBasicIntegrationModel_ClassNew(); }
#define DECLARED_PyvtkLagrangianBasicIntegrationModel_ClassNew
#endif

static const char *PyvtkLagrangianMatidaIntegrationModel_Doc =
  "vtkLagrangianMatidaIntegrationModel -\nvtkLagrangianBasicIntegrationModel implementation\n\n"
  "Superclass: vtkLagrangianBasicIntegrationModel\n\n"
  "vtkLagrangianBasicIntegrationModel implementation using article : \"Matida, E. A., et al.\n"
  "\"Improved numerical simulation of aerosol deposition in an idealized\n"
  "mouth-throat.\" Journal of Aerosol Science 35.1 (2004): 1-19.\" Input\n"
  "Array to process are expected as follow : Index 1 is the\n"
  "\"FlowVelocity\" from flow input in the tracker Index 2 is the\n"
  "\"FlowDensity\" from flow input in the tracker Index 3 is the\n"
  "\"FlowDynamicViscosity\" from flow input in the tracker Index 4 is the\n"
  "\"ParticleDiameter\" from seed (source) input in the tracker Index 5 is\n"
  "the \"ParticleDensity\" from seed (source) input in the tracker\n\n"
  "@sa\n"
  "vtkLagrangianParticleTracker vtkLagrangianParticle\n"
  "vtkLagrangianBasicIntegrationModel\n\n";


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangianMatidaIntegrationModel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangianMatidaIntegrationModel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangianMatidaIntegrationModel *tempr = vtkLagrangianMatidaIntegrationModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianMatidaIntegrationModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianMatidaIntegrationModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangianMatidaIntegrationModel::NewInstance());

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
PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkLagrangianMatidaIntegrationModel::FunctionValues(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianMatidaIntegrationModel *op = static_cast<vtkLagrangianMatidaIntegrationModel *>(vp);

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
      op->vtkLagrangianMatidaIntegrationModel::FunctionValues(temp0, temp1));

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
PyvtkLagrangianMatidaIntegrationModel_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s1(self, args);
    case 2:
      return PyvtkLagrangianMatidaIntegrationModel_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyMethodDef PyvtkLagrangianMatidaIntegrationModel_Methods[] = {
  {"IsTypeOf", PyvtkLagrangianMatidaIntegrationModel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangianMatidaIntegrationModel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangianMatidaIntegrationModel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkLagrangianMatidaIntegrationModel\nC++: static vtkLagrangianMatidaIntegrationModel *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangianMatidaIntegrationModel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLagrangianMatidaIntegrationModel\nC++: vtkLagrangianMatidaIntegrationModel *NewInstance()\n\n"},
  {"FunctionValues", PyvtkLagrangianMatidaIntegrationModel_FunctionValues, METH_VARARGS,
   "V.FunctionValues(vtkDataSet, int, [float, ...], [float, ...],\n    [float, ...]) -> int\nC++: int FunctionValues(vtkDataSet *dataSet, vtkIdType cellId,\n    double *weights, double *x, double *f) override;\nV.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\n\nEvaluate the integration model velocity field f at position x,\nusing data from cell in dataSet with index cellId\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLagrangianMatidaIntegrationModel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkLagrangianMatidaIntegrationModel", // tp_name
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
  PyvtkLagrangianMatidaIntegrationModel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLagrangianMatidaIntegrationModel_StaticNew()
{
  return vtkLagrangianMatidaIntegrationModel::New();
}

PyObject *PyvtkLagrangianMatidaIntegrationModel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLagrangianMatidaIntegrationModel_Type, PyvtkLagrangianMatidaIntegrationModel_Methods,
    "vtkLagrangianMatidaIntegrationModel",
 &PyvtkLagrangianMatidaIntegrationModel_StaticNew);

  PyTypeObject *pytype = &PyvtkLagrangianMatidaIntegrationModel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLagrangianBasicIntegrationModel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangianMatidaIntegrationModel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangianMatidaIntegrationModel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangianMatidaIntegrationModel", o) != 0)
  {
    Py_DECREF(o);
  }

}

