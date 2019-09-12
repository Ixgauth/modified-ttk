// python wrapper for vtkPVGlyphFilter
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
#include "vtkInformationVector.h"
#include "vtkPVGlyphFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGlyphFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGlyphFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPVGlyphFilter_Doc =
  "vtkPVGlyphFilter - extended API for vtkGlyph3D for better control\nover glyph placement.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPVGlyphFilter extends vtkGlyph3D for adding control over which\n"
  "points are glyphed using GlyphMode. Three modes are now provided:\n"
  "\\li ALL_POINTS: all points in the input dataset are glyphed. This\n"
  "    same as using\n"
  "vtkGlyph3D directly.\n\n"
  "\\li EVERY_NTH_POINT: every n-th point in the input dataset when\n"
  "    iterated\n"
  "through the input points sequentially is glyphed. For composite\n"
  "datasets, the counter resets every on block. In parallel, independent\n"
  "counter is used on each rank. Use Stride to control now may points to\n"
  "skip.\n\n"
  "\\li SPATIALLY_UNIFORM_DISTRIBUTION: points close to a randomly\n"
  "    sampled spatial\n"
  "distribution of points are glyphed. Seed controls the seed point for\n"
  "the random number generator (vtkMinimalStandardRandomSequence).\n"
  "MaximumNumberOfSamplePoints can be used to limit the number of sample\n"
  "points used for random sampling. This doesn't not equal the number of\n"
  "points actually glyphed, since that depends on several factors. In\n"
  "parallel, this filter ensures that spatial bounds are collected\n"
  "across all ranks for generating identical sample points.\n\n";

static PyTypeObject PyvtkPVGlyphFilter_VectorScaleMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVGlyphFilter.VectorScaleMode", // tp_name
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

PyObject *PyvtkPVGlyphFilter_VectorScaleMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVGlyphFilter_VectorScaleMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVGlyphFilter_VectorScaleMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkPVGlyphFilter_GlyphModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVGlyphFilter.GlyphModeType", // tp_name
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

PyObject *PyvtkPVGlyphFilter_GlyphModeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVGlyphFilter_GlyphModeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVGlyphFilter_GlyphModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVGlyphFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGlyphFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGlyphFilter *tempr = vtkPVGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGlyphFilter::NewInstance());

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
PyvtkPVGlyphFilter_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0, temp1);
    }
    else
    {
      op->vtkPVGlyphFilter::SetSourceConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGlyphFilter_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVGlyphFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVGlyphFilter_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkPVGlyphFilter_SetSourceConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return nullptr;
}



static PyObject *
PyvtkPVGlyphFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

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
      op->vtkPVGlyphFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVGlyphFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetVectorScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorScaleMode(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetVectorScaleMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetVectorScaleModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorScaleModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorScaleModeMinValue() :
      op->vtkPVGlyphFilter::GetVectorScaleModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetVectorScaleModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorScaleModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorScaleModeMaxValue() :
      op->vtkPVGlyphFilter::GetVectorScaleModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetVectorScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorScaleMode() :
      op->vtkPVGlyphFilter::GetVectorScaleMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetSourceTransform(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetSourceTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetSourceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetSourceTransform() :
      op->vtkPVGlyphFilter::GetSourceTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPVGlyphFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPVGlyphFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkPVGlyphFilter::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphMode(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetGlyphMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetGlyphModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphModeMinValue() :
      op->vtkPVGlyphFilter::GetGlyphModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetGlyphModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphModeMaxValue() :
      op->vtkPVGlyphFilter::GetGlyphModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphMode() :
      op->vtkPVGlyphFilter::GetGlyphMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetStrideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrideMinValue() :
      op->vtkPVGlyphFilter::GetStrideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetStrideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrideMaxValue() :
      op->vtkPVGlyphFilter::GetStrideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkPVGlyphFilter::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
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
      op->vtkPVGlyphFilter::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkPVGlyphFilter::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_SetMaximumNumberOfSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSamplePoints(temp0);
    }
    else
    {
      op->vtkPVGlyphFilter::SetMaximumNumberOfSamplePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePointsMinValue() :
      op->vtkPVGlyphFilter::GetMaximumNumberOfSamplePointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePointsMaxValue() :
      op->vtkPVGlyphFilter::GetMaximumNumberOfSamplePointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilter *op = static_cast<vtkPVGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePoints() :
      op->vtkPVGlyphFilter::GetMaximumNumberOfSamplePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGlyphFilter_Methods[] = {
  {"IsTypeOf", PyvtkPVGlyphFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGlyphFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGlyphFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGlyphFilter\nC++: static vtkPVGlyphFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGlyphFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGlyphFilter\nC++: vtkPVGlyphFilter *NewInstance()\n\n"},
  {"SetSourceConnection", PyvtkPVGlyphFilter_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {"SetController", PyvtkPVGlyphFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the vtkMultiProcessController to use for parallel\nprocessing. By default, the\nvtkMultiProcessController::GetGlobalController() will be used.\n"},
  {"GetController", PyvtkPVGlyphFilter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the vtkMultiProcessController to use for parallel\nprocessing. By default, the\nvtkMultiProcessController::GetGlobalController() will be used.\n"},
  {"SetVectorScaleMode", PyvtkPVGlyphFilter_SetVectorScaleMode, METH_VARARGS,
   "V.SetVectorScaleMode(int)\nC++: virtual void SetVectorScaleMode(int _arg)\n\n"},
  {"GetVectorScaleModeMinValue", PyvtkPVGlyphFilter_GetVectorScaleModeMinValue, METH_VARARGS,
   "V.GetVectorScaleModeMinValue() -> int\nC++: virtual int GetVectorScaleModeMinValue()\n\n"},
  {"GetVectorScaleModeMaxValue", PyvtkPVGlyphFilter_GetVectorScaleModeMaxValue, METH_VARARGS,
   "V.GetVectorScaleModeMaxValue() -> int\nC++: virtual int GetVectorScaleModeMaxValue()\n\n"},
  {"GetVectorScaleMode", PyvtkPVGlyphFilter_GetVectorScaleMode, METH_VARARGS,
   "V.GetVectorScaleMode() -> int\nC++: virtual int GetVectorScaleMode()\n\n"},
  {"SetSourceTransform", PyvtkPVGlyphFilter_SetSourceTransform, METH_VARARGS,
   "V.SetSourceTransform(vtkTransform)\nC++: void SetSourceTransform(vtkTransform *)\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {"GetSourceTransform", PyvtkPVGlyphFilter_GetSourceTransform, METH_VARARGS,
   "V.GetSourceTransform() -> vtkTransform\nC++: virtual vtkTransform *GetSourceTransform()\n\nWhen set, this is use to transform the source polydata before\nusing it to generate the glyph. This is useful if one wanted to\nreorient the source, for example.\n"},
  {"GetMTime", PyvtkPVGlyphFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include SourceTransform's MTime.\n"},
  {"SetOutputPointsPrecision", PyvtkPVGlyphFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkPVGlyphFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"SetScaleFactor", PyvtkPVGlyphFilter_SetScaleFactor, METH_VARARGS,
   "V.SetScaleFactor(float)\nC++: virtual void SetScaleFactor(double _arg)\n\n"},
  {"GetScaleFactor", PyvtkPVGlyphFilter_GetScaleFactor, METH_VARARGS,
   "V.GetScaleFactor() -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetGlyphMode", PyvtkPVGlyphFilter_SetGlyphMode, METH_VARARGS,
   "V.SetGlyphMode(int)\nC++: virtual void SetGlyphMode(int _arg)\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"GetGlyphModeMinValue", PyvtkPVGlyphFilter_GetGlyphModeMinValue, METH_VARARGS,
   "V.GetGlyphModeMinValue() -> int\nC++: virtual int GetGlyphModeMinValue()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"GetGlyphModeMaxValue", PyvtkPVGlyphFilter_GetGlyphModeMaxValue, METH_VARARGS,
   "V.GetGlyphModeMaxValue() -> int\nC++: virtual int GetGlyphModeMaxValue()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"GetGlyphMode", PyvtkPVGlyphFilter_GetGlyphMode, METH_VARARGS,
   "V.GetGlyphMode() -> int\nC++: virtual int GetGlyphMode()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"SetStride", PyvtkPVGlyphFilter_SetStride, METH_VARARGS,
   "V.SetStride(int)\nC++: virtual void SetStride(int _arg)\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"GetStrideMinValue", PyvtkPVGlyphFilter_GetStrideMinValue, METH_VARARGS,
   "V.GetStrideMinValue() -> int\nC++: virtual int GetStrideMinValue()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"GetStrideMaxValue", PyvtkPVGlyphFilter_GetStrideMaxValue, METH_VARARGS,
   "V.GetStrideMaxValue() -> int\nC++: virtual int GetStrideMaxValue()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"GetStride", PyvtkPVGlyphFilter_GetStride, METH_VARARGS,
   "V.GetStride() -> int\nC++: virtual int GetStride()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"SetSeed", PyvtkPVGlyphFilter_SetSeed, METH_VARARGS,
   "V.SetSeed(int)\nC++: virtual void SetSeed(int _arg)\n\nSet/Get Seed used for generating a spatially uniform\ndistribution.\n"},
  {"GetSeed", PyvtkPVGlyphFilter_GetSeed, METH_VARARGS,
   "V.GetSeed() -> int\nC++: virtual int GetSeed()\n\nSet/Get Seed used for generating a spatially uniform\ndistribution.\n"},
  {"SetMaximumNumberOfSamplePoints", PyvtkPVGlyphFilter_SetMaximumNumberOfSamplePoints, METH_VARARGS,
   "V.SetMaximumNumberOfSamplePoints(int)\nC++: virtual void SetMaximumNumberOfSamplePoints(int _arg)\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {"GetMaximumNumberOfSamplePointsMinValue", PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfSamplePointsMinValue() -> int\nC++: virtual int GetMaximumNumberOfSamplePointsMinValue()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {"GetMaximumNumberOfSamplePointsMaxValue", PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePointsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfSamplePointsMaxValue() -> int\nC++: virtual int GetMaximumNumberOfSamplePointsMaxValue()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {"GetMaximumNumberOfSamplePoints", PyvtkPVGlyphFilter_GetMaximumNumberOfSamplePoints, METH_VARARGS,
   "V.GetMaximumNumberOfSamplePoints() -> int\nC++: virtual int GetMaximumNumberOfSamplePoints()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGlyphFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVGlyphFilter", // tp_name
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
  PyvtkPVGlyphFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGlyphFilter_StaticNew()
{
  return vtkPVGlyphFilter::New();
}

PyObject *PyvtkPVGlyphFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGlyphFilter_Type, PyvtkPVGlyphFilter_Methods,
    "vtkPVGlyphFilter",
 &PyvtkPVGlyphFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGlyphFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVGlyphFilter_VectorScaleMode_Type);
  PyvtkPVGlyphFilter_VectorScaleMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVGlyphFilter_VectorScaleMode_Type);

  o = (PyObject *)&PyvtkPVGlyphFilter_VectorScaleMode_Type;
  if (PyDict_SetItemString(d, "VectorScaleMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPVGlyphFilter_GlyphModeType_Type);
  PyvtkPVGlyphFilter_GlyphModeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVGlyphFilter_GlyphModeType_Type);

  o = (PyObject *)&PyvtkPVGlyphFilter_GlyphModeType_Type;
  if (PyDict_SetItemString(d, "GlyphModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "SCALE_BY_MAGNITUDE", vtkPVGlyphFilter::SCALE_BY_MAGNITUDE },
        { "SCALE_BY_COMPONENTS", vtkPVGlyphFilter::SCALE_BY_COMPONENTS },
      };

    o = PyvtkPVGlyphFilter_VectorScaleMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPVGlyphFilter::GlyphModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ALL_POINTS", vtkPVGlyphFilter::ALL_POINTS },
        { "EVERY_NTH_POINT", vtkPVGlyphFilter::EVERY_NTH_POINT },
        { "SPATIALLY_UNIFORM_DISTRIBUTION", vtkPVGlyphFilter::SPATIALLY_UNIFORM_DISTRIBUTION },
      };

    o = PyvtkPVGlyphFilter_GlyphModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGlyphFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGlyphFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGlyphFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

