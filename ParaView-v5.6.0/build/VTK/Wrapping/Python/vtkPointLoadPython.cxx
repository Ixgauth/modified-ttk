// python wrapper for vtkPointLoad
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
#include "vtkPointLoad.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointLoad(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointLoad_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkPointLoad_Doc =
  "vtkPointLoad - compute stress tensors given point load on\nsemi-infinite domain\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkPointLoad is a source object that computes stress tensors on a\n"
  "volume. The tensors are computed from the application of a point load\n"
  "on a semi-infinite domain. (The analytical results are adapted from\n"
  "Saada - see text.) It also is possible to compute effective stress\n"
  "scalars if desired. This object serves as a specialized data\n"
  "generator for some of the examples in the text.\n\n"
  "@sa\n"
  "vtkTensorGlyph, vtkHyperStreamline\n\n";


static PyObject *
PyvtkPointLoad_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointLoad::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointLoad::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointLoad *tempr = vtkPointLoad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointLoad *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointLoad::NewInstance());

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
PyvtkPointLoad_SetLoadValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadValue(temp0);
    }
    else
    {
      op->vtkPointLoad::SetLoadValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetLoadValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLoadValue() :
      op->vtkPointLoad::GetLoadValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointLoad::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkPointLoad::SetSampleDimensions(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointLoad_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkPointLoad_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}



static PyObject *
PyvtkPointLoad_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkPointLoad::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPointLoad::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkPointLoad::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLoad_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPointLoad_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkPointLoad_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkPointLoad_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkPointLoad::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetPoissonsRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoissonsRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPoissonsRatio(temp0);
    }
    else
    {
      op->vtkPointLoad::SetPoissonsRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetPoissonsRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoissonsRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPoissonsRatio() :
      op->vtkPointLoad::GetPoissonsRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_SetComputeEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeEffectiveStress(temp0);
    }
    else
    {
      op->vtkPointLoad::SetComputeEffectiveStress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_GetComputeEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeEffectiveStress() :
      op->vtkPointLoad::GetComputeEffectiveStress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_ComputeEffectiveStressOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeEffectiveStressOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeEffectiveStressOn();
    }
    else
    {
      op->vtkPointLoad::ComputeEffectiveStressOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLoad_ComputeEffectiveStressOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeEffectiveStressOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLoad *op = static_cast<vtkPointLoad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeEffectiveStressOff();
    }
    else
    {
      op->vtkPointLoad::ComputeEffectiveStressOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointLoad_Methods[] = {
  {"IsTypeOf", PyvtkPointLoad_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointLoad_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointLoad_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointLoad\nC++: static vtkPointLoad *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointLoad_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointLoad\nC++: vtkPointLoad *NewInstance()\n\n"},
  {"SetLoadValue", PyvtkPointLoad_SetLoadValue, METH_VARARGS,
   "V.SetLoadValue(float)\nC++: virtual void SetLoadValue(double _arg)\n\nSet/Get value of applied load.\n"},
  {"GetLoadValue", PyvtkPointLoad_GetLoadValue, METH_VARARGS,
   "V.GetLoadValue() -> float\nC++: virtual double GetLoadValue()\n\nSet/Get value of applied load.\n"},
  {"SetSampleDimensions", PyvtkPointLoad_SetSampleDimensions, METH_VARARGS,
   "V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSpecify the dimensions of the volume. A stress tensor will be\ncomputed for each point in the volume.\n"},
  {"GetSampleDimensions", PyvtkPointLoad_GetSampleDimensions, METH_VARARGS,
   "V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSpecify the dimensions of the volume. A stress tensor will be\ncomputed for each point in the volume.\n"},
  {"SetModelBounds", PyvtkPointLoad_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {"GetModelBounds", PyvtkPointLoad_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the region in space over which the tensors are computed.\nThe point load is assumed to be applied at top center of the\nvolume.\n"},
  {"SetPoissonsRatio", PyvtkPointLoad_SetPoissonsRatio, METH_VARARGS,
   "V.SetPoissonsRatio(float)\nC++: virtual void SetPoissonsRatio(double _arg)\n\nSet/Get Poisson's ratio.\n"},
  {"GetPoissonsRatio", PyvtkPointLoad_GetPoissonsRatio, METH_VARARGS,
   "V.GetPoissonsRatio() -> float\nC++: virtual double GetPoissonsRatio()\n\nSet/Get Poisson's ratio.\n"},
  {"SetComputeEffectiveStress", PyvtkPointLoad_SetComputeEffectiveStress, METH_VARARGS,
   "V.SetComputeEffectiveStress(int)\nC++: void SetComputeEffectiveStress(int)\n\nTurn on/off computation of effective stress scalar. These methods\ndo nothing. The effective stress is always computed.\n"},
  {"GetComputeEffectiveStress", PyvtkPointLoad_GetComputeEffectiveStress, METH_VARARGS,
   "V.GetComputeEffectiveStress() -> int\nC++: int GetComputeEffectiveStress()\n\n"},
  {"ComputeEffectiveStressOn", PyvtkPointLoad_ComputeEffectiveStressOn, METH_VARARGS,
   "V.ComputeEffectiveStressOn()\nC++: void ComputeEffectiveStressOn()\n\n"},
  {"ComputeEffectiveStressOff", PyvtkPointLoad_ComputeEffectiveStressOff, METH_VARARGS,
   "V.ComputeEffectiveStressOff()\nC++: void ComputeEffectiveStressOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointLoad_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkPointLoad", // tp_name
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
  PyvtkPointLoad_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointLoad_StaticNew()
{
  return vtkPointLoad::New();
}

PyObject *PyvtkPointLoad_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointLoad_Type, PyvtkPointLoad_Methods,
    "vtkPointLoad",
 &PyvtkPointLoad_StaticNew);

  PyTypeObject *pytype = &PyvtkPointLoad_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointLoad(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointLoad_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointLoad", o) != 0)
  {
    Py_DECREF(o);
  }

}

