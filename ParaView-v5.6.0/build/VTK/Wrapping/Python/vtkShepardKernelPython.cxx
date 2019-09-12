// python wrapper for vtkShepardKernel
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
#include "vtkShepardKernel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShepardKernel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShepardKernel_ClassNew(); }

#ifndef DECLARED_PyvtkGeneralizedKernel_ClassNew
extern "C" { PyObject *PyvtkGeneralizedKernel_ClassNew(); }
#define DECLARED_PyvtkGeneralizedKernel_ClassNew
#endif

static const char *PyvtkShepardKernel_Doc =
  "vtkShepardKernel - a Shepard method interpolation kernel\n\n"
  "Superclass: vtkGeneralizedKernel\n\n"
  "vtkShepardKernel is an interpolation kernel that uses the method of\n"
  "Shepard to perform interpolation. The weights are computed as 1/r^p,\n"
  "where r is the distance to a neighbor point within the kernel radius\n"
  "R; and p (the power parameter) is a positive exponent (typically\n"
  "p=2).\n\n"
  "@warning\n"
  "The weights are normalized sp that SUM(Wi) = 1. If a neighbor point p\n"
  "precisely lies on the point to be interpolated, then the interpolated\n"
  "point takes on the values associated with p.\n\n"
  "@sa\n"
  "vtkPointInterpolator vtkPointInterpolator2D vtkInterpolationKernel\n"
  "vtkGaussianKernel vtkSPHKernel vtkShepardKernel\n\n";


static PyObject *
PyvtkShepardKernel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShepardKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShepardKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardKernel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShepardKernel *tempr = vtkShepardKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShepardKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShepardKernel::NewInstance());

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
PyvtkShepardKernel_ComputeWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2, temp3) :
      op->vtkShepardKernel::ComputeWeights(temp0, temp1, temp2, temp3));

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
PyvtkShepardKernel_ComputeWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2) :
      op->vtkShepardKernel::ComputeWeights(temp0, temp1, temp2));

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
PyvtkShepardKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkShepardKernel_ComputeWeights_s1(self, args);
    case 3:
      return PyvtkShepardKernel_ComputeWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWeights");
  return nullptr;
}



static PyObject *
PyvtkShepardKernel_SetPowerParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPowerParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPowerParameter(temp0);
    }
    else
    {
      op->vtkShepardKernel::SetPowerParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShepardKernel_GetPowerParameterMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerParameterMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPowerParameterMinValue() :
      op->vtkShepardKernel::GetPowerParameterMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardKernel_GetPowerParameterMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerParameterMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPowerParameterMaxValue() :
      op->vtkShepardKernel::GetPowerParameterMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShepardKernel_GetPowerParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShepardKernel *op = static_cast<vtkShepardKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPowerParameter() :
      op->vtkShepardKernel::GetPowerParameter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShepardKernel_Methods[] = {
  {"IsTypeOf", PyvtkShepardKernel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"IsA", PyvtkShepardKernel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"SafeDownCast", PyvtkShepardKernel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShepardKernel\nC++: static vtkShepardKernel *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"NewInstance", PyvtkShepardKernel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShepardKernel\nC++: vtkShepardKernel *NewInstance()\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"ComputeWeights", PyvtkShepardKernel_ComputeWeights, METH_VARARGS,
   "V.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray,\n     vtkDoubleArray) -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *prob, vtkDoubleArray *weights) override;\nV.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray)\n     -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *weights) override;\n\nGiven a point x, a list of basis points pIds, and a probability\nweighting function prob, compute interpolation weights associated\nwith these basis points.  Note that basis points list pIds, the\nprobability weighting prob, and the weights array are provided by\nthe caller of the method, and may be dynamically resized as\nnecessary. The method returns the number of weights (pIds may be\nresized in some cases). Typically this method is called after\nComputeBasis(), although advanced users can invoke\nComputeWeights() and provide the interpolation basis points pIds\ndirectly. The probably weighting prob are numbers 0<=prob<=1\nwhich are multiplied against the interpolation weights before\nnormalization. They are estimates of local confidence of weights.\nThe prob may be nullptr in which all probabilities are considered\n=1.\n"},
  {"SetPowerParameter", PyvtkShepardKernel_SetPowerParameter, METH_VARARGS,
   "V.SetPowerParameter(float)\nC++: virtual void SetPowerParameter(double _arg)\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"GetPowerParameterMinValue", PyvtkShepardKernel_GetPowerParameterMinValue, METH_VARARGS,
   "V.GetPowerParameterMinValue() -> float\nC++: virtual double GetPowerParameterMinValue()\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"GetPowerParameterMaxValue", PyvtkShepardKernel_GetPowerParameterMaxValue, METH_VARARGS,
   "V.GetPowerParameterMaxValue() -> float\nC++: virtual double GetPowerParameterMaxValue()\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {"GetPowerParameter", PyvtkShepardKernel_GetPowerParameter, METH_VARARGS,
   "V.GetPowerParameter() -> float\nC++: virtual double GetPowerParameter()\n\nSet / Get the power parameter p. By default p=2. Values (which\nmust be a positive, real value) != 2 may affect performance\nsignificantly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShepardKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkShepardKernel", // tp_name
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
  PyvtkShepardKernel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShepardKernel_StaticNew()
{
  return vtkShepardKernel::New();
}

PyObject *PyvtkShepardKernel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShepardKernel_Type, PyvtkShepardKernel_Methods,
    "vtkShepardKernel",
 &PyvtkShepardKernel_StaticNew);

  PyTypeObject *pytype = &PyvtkShepardKernel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGeneralizedKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShepardKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShepardKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShepardKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

