// python wrapper for vtkResampleToImage
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
#include "vtkResampleToImage.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResampleToImage(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResampleToImage_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkResampleToImage_Doc =
  "vtkResampleToImage - sample dataset on a uniform grid\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkPResampleToImage is a filter that resamples the input dataset on a\n"
  "uniform grid. It internally uses vtkProbeFilter to do the probing.\n"
  "@sa\n"
  "vtkProbeFilter\n\n";


static PyObject *
PyvtkResampleToImage_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResampleToImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResampleToImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResampleToImage *tempr = vtkResampleToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResampleToImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResampleToImage::NewInstance());

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
PyvtkResampleToImage_SetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  bool temp0 = false;
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
      op->vtkResampleToImage::SetUseInputBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_GetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseInputBounds() :
      op->vtkResampleToImage::GetUseInputBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_UseInputBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOn();
    }
    else
    {
      op->vtkResampleToImage::UseInputBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_UseInputBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOff();
    }
    else
    {
      op->vtkResampleToImage::UseInputBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SetSamplingBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

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
      op->SetSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingBounds(temp0);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkResampleToImage_SetSamplingBounds_s1(self, args);
    case 1:
      return PyvtkResampleToImage_SetSamplingBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingBounds");
  return nullptr;
}



static PyObject *
PyvtkResampleToImage_GetSamplingBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSamplingBounds() :
      op->vtkResampleToImage::GetSamplingBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SetSamplingDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

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
      op->SetSamplingDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingDimensions(temp0);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResampleToImage_SetSamplingDimensions_s1(self, args);
    case 1:
      return PyvtkResampleToImage_SetSamplingDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingDimensions");
  return nullptr;
}



static PyObject *
PyvtkResampleToImage_GetSamplingDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingDimensions() :
      op->vtkResampleToImage::GetSamplingDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkResampleToImage::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResampleToImage_Methods[] = {
  {"IsTypeOf", PyvtkResampleToImage_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResampleToImage_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResampleToImage_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResampleToImage\nC++: static vtkResampleToImage *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResampleToImage_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResampleToImage\nC++: vtkResampleToImage *NewInstance()\n\n"},
  {"SetUseInputBounds", PyvtkResampleToImage_SetUseInputBounds, METH_VARARGS,
   "V.SetUseInputBounds(bool)\nC++: virtual void SetUseInputBounds(bool _arg)\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"GetUseInputBounds", PyvtkResampleToImage_GetUseInputBounds, METH_VARARGS,
   "V.GetUseInputBounds() -> bool\nC++: virtual bool GetUseInputBounds()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"UseInputBoundsOn", PyvtkResampleToImage_UseInputBoundsOn, METH_VARARGS,
   "V.UseInputBoundsOn()\nC++: virtual void UseInputBoundsOn()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"UseInputBoundsOff", PyvtkResampleToImage_UseInputBoundsOff, METH_VARARGS,
   "V.UseInputBoundsOff()\nC++: virtual void UseInputBoundsOff()\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"SetSamplingBounds", PyvtkResampleToImage_SetSamplingBounds, METH_VARARGS,
   "V.SetSamplingBounds(float, float, float, float, float, float)\nC++: void SetSamplingBounds(double, double, double, double,\n    double, double)\nV.SetSamplingBounds((float, float, float, float, float, float))\nC++: void SetSamplingBounds(double a[6])\n\n"},
  {"GetSamplingBounds", PyvtkResampleToImage_GetSamplingBounds, METH_VARARGS,
   "V.GetSamplingBounds() -> (float, float, float, float, float,\n    float)\nC++: double *GetSamplingBounds()\n\n"},
  {"SetSamplingDimensions", PyvtkResampleToImage_SetSamplingDimensions, METH_VARARGS,
   "V.SetSamplingDimensions(int, int, int)\nC++: void SetSamplingDimensions(int, int, int)\nV.SetSamplingDimensions((int, int, int))\nC++: void SetSamplingDimensions(int a[3])\n\n"},
  {"GetSamplingDimensions", PyvtkResampleToImage_GetSamplingDimensions, METH_VARARGS,
   "V.GetSamplingDimensions() -> (int, int, int)\nC++: int *GetSamplingDimensions()\n\n"},
  {"GetOutput", PyvtkResampleToImage_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data for this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResampleToImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkResampleToImage", // tp_name
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
  PyvtkResampleToImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResampleToImage_StaticNew()
{
  return vtkResampleToImage::New();
}

PyObject *PyvtkResampleToImage_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResampleToImage_Type, PyvtkResampleToImage_Methods,
    "vtkResampleToImage",
 &PyvtkResampleToImage_StaticNew);

  PyTypeObject *pytype = &PyvtkResampleToImage_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResampleToImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResampleToImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResampleToImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

