// python wrapper for vtkPResampleFilter
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
#include "vtkPResampleFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPResampleFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPResampleFilter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkPResampleFilter_Doc =
  "vtkPResampleFilter - probe dataset in parallel using a vtkImageData\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
;


static PyObject *
PyvtkPResampleFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPResampleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPResampleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPResampleFilter *tempr = vtkPResampleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPResampleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPResampleFilter::NewInstance());

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
PyvtkPResampleFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPResampleFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInputBounds(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetUseInputBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseInputBounds() :
      op->vtkPResampleFilter::GetUseInputBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_UseInputBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOn();
    }
    else
    {
      op->vtkPResampleFilter::UseInputBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_UseInputBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOff();
    }
    else
    {
      op->vtkPResampleFilter::UseInputBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

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
      op->SetCustomSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPResampleFilter::SetCustomSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomSamplingBounds(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetCustomSamplingBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPResampleFilter_SetCustomSamplingBounds_s1(self, args);
    case 1:
      return PyvtkPResampleFilter_SetCustomSamplingBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomSamplingBounds");
  return nullptr;
}



static PyObject *
PyvtkPResampleFilter_GetCustomSamplingBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomSamplingBounds() :
      op->vtkPResampleFilter::GetCustomSamplingBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetSamplingDimension_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

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
      op->SetSamplingDimension(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPResampleFilter::SetSamplingDimension(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetSamplingDimension_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingDimension(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetSamplingDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetSamplingDimension(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPResampleFilter_SetSamplingDimension_s1(self, args);
    case 1:
      return PyvtkPResampleFilter_SetSamplingDimension_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingDimension");
  return nullptr;
}



static PyObject *
PyvtkPResampleFilter_GetSamplingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingDimension() :
      op->vtkPResampleFilter::GetSamplingDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPResampleFilter_Methods[] = {
  {"IsTypeOf", PyvtkPResampleFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPResampleFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPResampleFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPResampleFilter\nC++: static vtkPResampleFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPResampleFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPResampleFilter\nC++: vtkPResampleFilter *NewInstance()\n\n"},
  {"SetController", PyvtkPResampleFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPResampleFilter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {"SetUseInputBounds", PyvtkPResampleFilter_SetUseInputBounds, METH_VARARGS,
   "V.SetUseInputBounds(int)\nC++: virtual void SetUseInputBounds(vtkTypeBool _arg)\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"GetUseInputBounds", PyvtkPResampleFilter_GetUseInputBounds, METH_VARARGS,
   "V.GetUseInputBounds() -> int\nC++: virtual vtkTypeBool GetUseInputBounds()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"UseInputBoundsOn", PyvtkPResampleFilter_UseInputBoundsOn, METH_VARARGS,
   "V.UseInputBoundsOn()\nC++: virtual void UseInputBoundsOn()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"UseInputBoundsOff", PyvtkPResampleFilter_UseInputBoundsOff, METH_VARARGS,
   "V.UseInputBoundsOff()\nC++: virtual void UseInputBoundsOff()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"SetCustomSamplingBounds", PyvtkPResampleFilter_SetCustomSamplingBounds, METH_VARARGS,
   "V.SetCustomSamplingBounds(float, float, float, float, float,\n    float)\nC++: void SetCustomSamplingBounds(double, double, double, double,\n    double, double)\nV.SetCustomSamplingBounds((float, float, float, float, float,\n    float))\nC++: void SetCustomSamplingBounds(double a[6])\n\n"},
  {"GetCustomSamplingBounds", PyvtkPResampleFilter_GetCustomSamplingBounds, METH_VARARGS,
   "V.GetCustomSamplingBounds() -> (float, float, float, float, float,\n     float)\nC++: double *GetCustomSamplingBounds()\n\n"},
  {"SetSamplingDimension", PyvtkPResampleFilter_SetSamplingDimension, METH_VARARGS,
   "V.SetSamplingDimension(int, int, int)\nC++: void SetSamplingDimension(int, int, int)\nV.SetSamplingDimension((int, int, int))\nC++: void SetSamplingDimension(int a[3])\n\n"},
  {"GetSamplingDimension", PyvtkPResampleFilter_GetSamplingDimension, METH_VARARGS,
   "V.GetSamplingDimension() -> (int, int, int)\nC++: int *GetSamplingDimension()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPResampleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPResampleFilter", // tp_name
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
  PyvtkPResampleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPResampleFilter_StaticNew()
{
  return vtkPResampleFilter::New();
}

PyObject *PyvtkPResampleFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPResampleFilter_Type, PyvtkPResampleFilter_Methods,
    "vtkPResampleFilter",
 &PyvtkPResampleFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPResampleFilter_Type;

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

void PyVTKAddFile_vtkPResampleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPResampleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPResampleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

