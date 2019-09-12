// python wrapper for vtkRandomHyperTreeGridSource
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
#include "vtkRandomHyperTreeGridSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomHyperTreeGridSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRandomHyperTreeGridSource_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkRandomHyperTreeGridSource_Doc =
  "vtkRandomHyperTreeGridSource - Builds a randomized but reproducible\nvtkHyperTreeGrid.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
;


static PyObject *
PyvtkRandomHyperTreeGridSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomHyperTreeGridSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomHyperTreeGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomHyperTreeGridSource *tempr = vtkRandomHyperTreeGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomHyperTreeGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomHyperTreeGridSource::NewInstance());

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
PyvtkRandomHyperTreeGridSource_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkRandomHyperTreeGridSource::GetGridSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetGridSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetGridSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetGridSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridSize(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetGridSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetGridSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRandomHyperTreeGridSource_SetGridSize_s1(self, args);
    case 1:
      return PyvtkRandomHyperTreeGridSource_SetGridSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSize");
  return nullptr;
}



static PyObject *
PyvtkRandomHyperTreeGridSource_GetOutputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputBounds() :
      op->vtkRandomHyperTreeGridSource::GetOutputBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetOutputBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

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
      op->SetOutputBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetOutputBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetOutputBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputBounds(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetOutputBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetOutputBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkRandomHyperTreeGridSource_SetOutputBounds_s1(self, args);
    case 1:
      return PyvtkRandomHyperTreeGridSource_SetOutputBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputBounds");
  return nullptr;
}



static PyObject *
PyvtkRandomHyperTreeGridSource_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkRandomHyperTreeGridSource::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetMaxDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxDepth() :
      op->vtkRandomHyperTreeGridSource::GetMaxDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetMaxDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxDepth(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetMaxDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetMaxDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxDepthMinValue() :
      op->vtkRandomHyperTreeGridSource::GetMaxDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetMaxDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxDepthMaxValue() :
      op->vtkRandomHyperTreeGridSource::GetMaxDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFraction() :
      op->vtkRandomHyperTreeGridSource::GetSplitFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitFraction(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetSplitFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSplitFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFractionMinValue() :
      op->vtkRandomHyperTreeGridSource::GetSplitFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSplitFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFractionMaxValue() :
      op->vtkRandomHyperTreeGridSource::GetSplitFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomHyperTreeGridSource_Methods[] = {
  {"IsTypeOf", PyvtkRandomHyperTreeGridSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomHyperTreeGridSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomHyperTreeGridSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRandomHyperTreeGridSource\nC++: static vtkRandomHyperTreeGridSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomHyperTreeGridSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRandomHyperTreeGridSource\nC++: vtkRandomHyperTreeGridSource *NewInstance()\n\n"},
  {"GetGridSize", PyvtkRandomHyperTreeGridSource_GetGridSize, METH_VARARGS,
   "V.GetGridSize() -> (int, int, int)\nC++: unsigned int *GetGridSize()\n\n"},
  {"SetGridSize", PyvtkRandomHyperTreeGridSource_SetGridSize, METH_VARARGS,
   "V.SetGridSize(int, int, int)\nC++: void SetGridSize(unsigned int, unsigned int, unsigned int)\nV.SetGridSize((int, int, int))\nC++: void SetGridSize(unsigned int a[3])\n\n"},
  {"GetOutputBounds", PyvtkRandomHyperTreeGridSource_GetOutputBounds, METH_VARARGS,
   "V.GetOutputBounds() -> (float, float, float, float, float, float)\nC++: double *GetOutputBounds()\n\n"},
  {"SetOutputBounds", PyvtkRandomHyperTreeGridSource_SetOutputBounds, METH_VARARGS,
   "V.SetOutputBounds(float, float, float, float, float, float)\nC++: void SetOutputBounds(double, double, double, double, double,\n    double)\nV.SetOutputBounds((float, float, float, float, float, float))\nC++: void SetOutputBounds(double a[6])\n\n"},
  {"GetSeed", PyvtkRandomHyperTreeGridSource_GetSeed, METH_VARARGS,
   "V.GetSeed() -> int\nC++: virtual vtkTypeUInt32 GetSeed()\n\n"},
  {"SetSeed", PyvtkRandomHyperTreeGridSource_SetSeed, METH_VARARGS,
   "V.SetSeed(int)\nC++: virtual void SetSeed(vtkTypeUInt32 _arg)\n\n"},
  {"GetMaxDepth", PyvtkRandomHyperTreeGridSource_GetMaxDepth, METH_VARARGS,
   "V.GetMaxDepth() -> int\nC++: virtual vtkIdType GetMaxDepth()\n\n"},
  {"SetMaxDepth", PyvtkRandomHyperTreeGridSource_SetMaxDepth, METH_VARARGS,
   "V.SetMaxDepth(int)\nC++: virtual void SetMaxDepth(vtkIdType _arg)\n\n"},
  {"GetMaxDepthMinValue", PyvtkRandomHyperTreeGridSource_GetMaxDepthMinValue, METH_VARARGS,
   "V.GetMaxDepthMinValue() -> int\nC++: virtual vtkIdType GetMaxDepthMinValue()\n\n"},
  {"GetMaxDepthMaxValue", PyvtkRandomHyperTreeGridSource_GetMaxDepthMaxValue, METH_VARARGS,
   "V.GetMaxDepthMaxValue() -> int\nC++: virtual vtkIdType GetMaxDepthMaxValue()\n\n"},
  {"GetSplitFraction", PyvtkRandomHyperTreeGridSource_GetSplitFraction, METH_VARARGS,
   "V.GetSplitFraction() -> float\nC++: virtual double GetSplitFraction()\n\n"},
  {"SetSplitFraction", PyvtkRandomHyperTreeGridSource_SetSplitFraction, METH_VARARGS,
   "V.SetSplitFraction(float)\nC++: virtual void SetSplitFraction(double _arg)\n\n"},
  {"GetSplitFractionMinValue", PyvtkRandomHyperTreeGridSource_GetSplitFractionMinValue, METH_VARARGS,
   "V.GetSplitFractionMinValue() -> float\nC++: virtual double GetSplitFractionMinValue()\n\n"},
  {"GetSplitFractionMaxValue", PyvtkRandomHyperTreeGridSource_GetSplitFractionMaxValue, METH_VARARGS,
   "V.GetSplitFractionMaxValue() -> float\nC++: virtual double GetSplitFractionMaxValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRandomHyperTreeGridSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkRandomHyperTreeGridSource", // tp_name
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
  PyvtkRandomHyperTreeGridSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomHyperTreeGridSource_StaticNew()
{
  return vtkRandomHyperTreeGridSource::New();
}

PyObject *PyvtkRandomHyperTreeGridSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRandomHyperTreeGridSource_Type, PyvtkRandomHyperTreeGridSource_Methods,
    "vtkRandomHyperTreeGridSource",
 &PyvtkRandomHyperTreeGridSource_StaticNew);

  PyTypeObject *pytype = &PyvtkRandomHyperTreeGridSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomHyperTreeGridSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomHyperTreeGridSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomHyperTreeGridSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

