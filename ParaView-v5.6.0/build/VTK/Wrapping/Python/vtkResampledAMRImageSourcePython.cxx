// python wrapper for vtkResampledAMRImageSource
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
#include "vtkResampledAMRImageSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResampledAMRImageSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResampledAMRImageSource_ClassNew(); }

#ifndef DECLARED_PyvtkTrivialProducer_ClassNew
extern "C" { PyObject *PyvtkTrivialProducer_ClassNew(); }
#define DECLARED_PyvtkTrivialProducer_ClassNew
#endif

static const char *PyvtkResampledAMRImageSource_Doc =
  "vtkResampledAMRImageSource - image data source that resamples an AMR\ndataset to produce the image data.\n\n"
  "Superclass: vtkTrivialProducer\n\n"
  "vtkResampledAMRImageSource is a image data source that resamples a\n"
  "vtkOverlappingAMR dataset to produce an image data. The output AMR\n"
  "will have both the point data and cell data from the input AMR grids\n"
  "passed along as point data for the output image data. This filter\n"
  "assumes that all blocks in the input AMR have exactly the same\n"
  "point/cell arrays in same order. If they are different we will end up\n"
  "with weird runtime issues that may be hard to debug.\n\n"
  "@attention We subclass vtkTrivialProducer since it deals with all the\n"
  "meta-data that needs to be passed down the pipeline for image data,\n"
  "keeping the code here simple.\n\n";


static PyObject *
PyvtkResampledAMRImageSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResampledAMRImageSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResampledAMRImageSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResampledAMRImageSource *tempr = vtkResampledAMRImageSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResampledAMRImageSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResampledAMRImageSource::NewInstance());

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
PyvtkResampledAMRImageSource_SetMaxDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

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
      op->SetMaxDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResampledAMRImageSource::SetMaxDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetMaxDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaxDimensions(temp0);
    }
    else
    {
      op->vtkResampledAMRImageSource::SetMaxDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetMaxDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResampledAMRImageSource_SetMaxDimensions_s1(self, args);
    case 1:
      return PyvtkResampledAMRImageSource_SetMaxDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxDimensions");
  return nullptr;
}



static PyObject *
PyvtkResampledAMRImageSource_GetMaxDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMaxDimensions() :
      op->vtkResampledAMRImageSource::GetMaxDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_SetSpatialBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

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
      op->SetSpatialBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkResampledAMRImageSource::SetSpatialBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetSpatialBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpatialBounds(temp0);
    }
    else
    {
      op->vtkResampledAMRImageSource::SetSpatialBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampledAMRImageSource_SetSpatialBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkResampledAMRImageSource_SetSpatialBounds_s1(self, args);
    case 1:
      return PyvtkResampledAMRImageSource_SetSpatialBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpatialBounds");
  return nullptr;
}



static PyObject *
PyvtkResampledAMRImageSource_GetSpatialBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpatialBounds() :
      op->vtkResampledAMRImageSource::GetSpatialBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkResampledAMRImageSource::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_UpdateResampledVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateResampledVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->UpdateResampledVolume(temp0);
    }
    else
    {
      op->vtkResampledAMRImageSource::UpdateResampledVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampledAMRImageSource_NeedsInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedsInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampledAMRImageSource *op = static_cast<vtkResampledAMRImageSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedsInitialization() :
      op->vtkResampledAMRImageSource::NeedsInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResampledAMRImageSource_Methods[] = {
  {"IsTypeOf", PyvtkResampledAMRImageSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResampledAMRImageSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResampledAMRImageSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResampledAMRImageSource\nC++: static vtkResampledAMRImageSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResampledAMRImageSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResampledAMRImageSource\nC++: vtkResampledAMRImageSource *NewInstance()\n\n"},
  {"SetMaxDimensions", PyvtkResampledAMRImageSource_SetMaxDimensions, METH_VARARGS,
   "V.SetMaxDimensions(int, int, int)\nC++: void SetMaxDimensions(int, int, int)\nV.SetMaxDimensions((int, int, int))\nC++: void SetMaxDimensions(int a[3])\n\n"},
  {"GetMaxDimensions", PyvtkResampledAMRImageSource_GetMaxDimensions, METH_VARARGS,
   "V.GetMaxDimensions() -> (int, int, int)\nC++: int *GetMaxDimensions()\n\n"},
  {"SetSpatialBounds", PyvtkResampledAMRImageSource_SetSpatialBounds, METH_VARARGS,
   "V.SetSpatialBounds(float, float, float, float, float, float)\nC++: void SetSpatialBounds(double, double, double, double, double,\n     double)\nV.SetSpatialBounds((float, float, float, float, float, float))\nC++: void SetSpatialBounds(double a[6])\n\n"},
  {"GetSpatialBounds", PyvtkResampledAMRImageSource_GetSpatialBounds, METH_VARARGS,
   "V.GetSpatialBounds() -> (float, float, float, float, float, float)\nC++: double *GetSpatialBounds()\n\n"},
  {"Reset", PyvtkResampledAMRImageSource_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nTo restart the incremental resample process, call this method.\nThe output image data is setup in the first call to Update().\n"},
  {"UpdateResampledVolume", PyvtkResampledAMRImageSource_UpdateResampledVolume, METH_VARARGS,
   "V.UpdateResampledVolume(vtkOverlappingAMR)\nC++: void UpdateResampledVolume(vtkOverlappingAMR *)\n\nUpdates the volume. Any non-empty pieces provided by the amr are\nadded to the resampled volume if it adds refinement to the\nvolume.\n"},
  {"NeedsInitialization", PyvtkResampledAMRImageSource_NeedsInitialization, METH_VARARGS,
   "V.NeedsInitialization() -> bool\nC++: bool NeedsInitialization()\n\nReturns true if the resampler will reinitialize the volume in the\nnext call to UpdateResampledVolume().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResampledAMRImageSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkResampledAMRImageSource", // tp_name
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
  PyvtkResampledAMRImageSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResampledAMRImageSource_StaticNew()
{
  return vtkResampledAMRImageSource::New();
}

PyObject *PyvtkResampledAMRImageSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResampledAMRImageSource_Type, PyvtkResampledAMRImageSource_Methods,
    "vtkResampledAMRImageSource",
 &PyvtkResampledAMRImageSource_StaticNew);

  PyTypeObject *pytype = &PyvtkResampledAMRImageSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTrivialProducer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResampledAMRImageSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResampledAMRImageSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResampledAMRImageSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

