// python wrapper for vtkSPHQuinticKernel
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
#include "vtkSPHQuinticKernel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSPHQuinticKernel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSPHQuinticKernel_ClassNew(); }

#ifndef DECLARED_PyvtkSPHKernel_ClassNew
extern "C" { PyObject *PyvtkSPHKernel_ClassNew(); }
#define DECLARED_PyvtkSPHKernel_ClassNew
#endif

static const char *PyvtkSPHQuinticKernel_Doc =
  "vtkSPHQuinticKernel - a quintic SPH interpolation kernel\n\n"
  "Superclass: vtkSPHKernel\n\n"
  "vtkSPHQuinticKernel is an smooth particle hydrodynamics interpolation\n"
  "kernel as described by D.J. Price. This is a quintic formulation.\n\n"
  "@warning\n"
  "FOr more information see D.J. Price, Smoothed particle hydrodynamics\n"
  "and magnetohydrodynamics, J. Comput. Phys. 231:759-794, 2012.\n"
  "Especially equation 49.\n\n"
  "@par Acknowledgments: The following work has been generously\n"
  "supported by Altair Engineering and FluiDyna GmbH. Please contact\n"
  "Steve Cosgrove or Milos Stanic for more information.\n\n"
  "@sa\n"
  "vtkSPHKernel vtkSPHInterpolator\n\n";


static PyObject *
PyvtkSPHQuinticKernel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSPHQuinticKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSPHQuinticKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSPHQuinticKernel *tempr = vtkSPHQuinticKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSPHQuinticKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSPHQuinticKernel::NewInstance());

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
PyvtkSPHQuinticKernel_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkPointData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSPHQuinticKernel::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_ComputeFunctionWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeFunctionWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeFunctionWeight(temp0) :
      op->vtkSPHQuinticKernel::ComputeFunctionWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_ComputeDerivWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeDerivWeight(temp0) :
      op->vtkSPHQuinticKernel::ComputeDerivWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSPHQuinticKernel_Methods[] = {
  {"IsTypeOf", PyvtkSPHQuinticKernel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"IsA", PyvtkSPHQuinticKernel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"SafeDownCast", PyvtkSPHQuinticKernel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSPHQuinticKernel\nC++: static vtkSPHQuinticKernel *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"NewInstance", PyvtkSPHQuinticKernel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSPHQuinticKernel\nC++: vtkSPHQuinticKernel *NewInstance()\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"Initialize", PyvtkSPHQuinticKernel_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractPointLocator, vtkDataSet, vtkPointData)\nC++: void Initialize(vtkAbstractPointLocator *loc, vtkDataSet *ds,\n     vtkPointData *pd) override;\n\nProduce the computational parameters for the kernel. Invoke this\nmethod after setting initial values like SpatialStep.\n"},
  {"ComputeFunctionWeight", PyvtkSPHQuinticKernel_ComputeFunctionWeight, METH_VARARGS,
   "V.ComputeFunctionWeight(float) -> float\nC++: double ComputeFunctionWeight(const double d) override;\n\nCompute weighting factor given a normalized distance from a\nsample point.\n"},
  {"ComputeDerivWeight", PyvtkSPHQuinticKernel_ComputeDerivWeight, METH_VARARGS,
   "V.ComputeDerivWeight(float) -> float\nC++: double ComputeDerivWeight(const double d) override;\n\nCompute weighting factor for derivative quantities given a\nnormalized distance from a sample point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSPHQuinticKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkSPHQuinticKernel", // tp_name
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
  PyvtkSPHQuinticKernel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSPHQuinticKernel_StaticNew()
{
  return vtkSPHQuinticKernel::New();
}

PyObject *PyvtkSPHQuinticKernel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSPHQuinticKernel_Type, PyvtkSPHQuinticKernel_Methods,
    "vtkSPHQuinticKernel",
 &PyvtkSPHQuinticKernel_StaticNew);

  PyTypeObject *pytype = &PyvtkSPHQuinticKernel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSPHKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSPHQuinticKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSPHQuinticKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSPHQuinticKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

