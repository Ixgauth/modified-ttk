// python wrapper for vtkPVGlyphFilterLegacy
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
#include "vtkPVGlyphFilterLegacy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVGlyphFilterLegacy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVGlyphFilterLegacy_ClassNew(); }

#ifndef DECLARED_PyvtkGlyph3D_ClassNew
extern "C" { PyObject *PyvtkGlyph3D_ClassNew(); }
#define DECLARED_PyvtkGlyph3D_ClassNew
#endif

static const char *PyvtkPVGlyphFilterLegacy_Doc =
  "vtkPVGlyphFilterLegacy - extended API for vtkGlyph3D for better\ncontrol over glyph placement.\n\n"
  "Superclass: vtkGlyph3D\n\n"
  "vtkPVGlyphFilterLegacy extends vtkGlyph3D for adding control over\n"
  "which points are glyphed using GlyphMode. Three modes are now\n"
  "provided:\n"
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

static PyTypeObject PyvtkPVGlyphFilterLegacy_GlyphModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVGlyphFilterLegacy.GlyphModeType", // tp_name
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

PyObject *PyvtkPVGlyphFilterLegacy_GlyphModeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVGlyphFilterLegacy_GlyphModeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVGlyphFilterLegacy_GlyphModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVGlyphFilterLegacy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVGlyphFilterLegacy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGlyphFilterLegacy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVGlyphFilterLegacy *tempr = vtkPVGlyphFilterLegacy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVGlyphFilterLegacy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGlyphFilterLegacy::NewInstance());

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
PyvtkPVGlyphFilterLegacy_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

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
      op->vtkPVGlyphFilterLegacy::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPVGlyphFilterLegacy::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_SetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

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
      op->vtkPVGlyphFilterLegacy::SetGlyphMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetGlyphModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphModeMinValue() :
      op->vtkPVGlyphFilterLegacy::GetGlyphModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetGlyphModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphModeMaxValue() :
      op->vtkPVGlyphFilterLegacy::GetGlyphModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphMode() :
      op->vtkPVGlyphFilterLegacy::GetGlyphMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_SetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

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
      op->vtkPVGlyphFilterLegacy::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetStrideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrideMinValue() :
      op->vtkPVGlyphFilterLegacy::GetStrideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetStrideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStrideMaxValue() :
      op->vtkPVGlyphFilterLegacy::GetStrideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkPVGlyphFilterLegacy::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

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
      op->vtkPVGlyphFilterLegacy::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkPVGlyphFilterLegacy::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_SetMaximumNumberOfSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

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
      op->vtkPVGlyphFilterLegacy::SetMaximumNumberOfSamplePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetMaximumNumberOfSamplePointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePointsMinValue() :
      op->vtkPVGlyphFilterLegacy::GetMaximumNumberOfSamplePointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetMaximumNumberOfSamplePointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePointsMaxValue() :
      op->vtkPVGlyphFilterLegacy::GetMaximumNumberOfSamplePointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVGlyphFilterLegacy_GetMaximumNumberOfSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGlyphFilterLegacy *op = static_cast<vtkPVGlyphFilterLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSamplePoints() :
      op->vtkPVGlyphFilterLegacy::GetMaximumNumberOfSamplePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVGlyphFilterLegacy_Methods[] = {
  {"IsTypeOf", PyvtkPVGlyphFilterLegacy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVGlyphFilterLegacy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVGlyphFilterLegacy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVGlyphFilterLegacy\nC++: static vtkPVGlyphFilterLegacy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVGlyphFilterLegacy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVGlyphFilterLegacy\nC++: vtkPVGlyphFilterLegacy *NewInstance()\n\n"},
  {"SetController", PyvtkPVGlyphFilterLegacy_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the vtkMultiProcessController to use for parallel\nprocessing. By default, the\nvtkMultiProcessController::GetGlobalController() will be used.\n"},
  {"GetController", PyvtkPVGlyphFilterLegacy_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the vtkMultiProcessController to use for parallel\nprocessing. By default, the\nvtkMultiProcessController::GetGlobalController() will be used.\n"},
  {"SetGlyphMode", PyvtkPVGlyphFilterLegacy_SetGlyphMode, METH_VARARGS,
   "V.SetGlyphMode(int)\nC++: virtual void SetGlyphMode(int _arg)\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"GetGlyphModeMinValue", PyvtkPVGlyphFilterLegacy_GetGlyphModeMinValue, METH_VARARGS,
   "V.GetGlyphModeMinValue() -> int\nC++: virtual int GetGlyphModeMinValue()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"GetGlyphModeMaxValue", PyvtkPVGlyphFilterLegacy_GetGlyphModeMaxValue, METH_VARARGS,
   "V.GetGlyphModeMaxValue() -> int\nC++: virtual int GetGlyphModeMaxValue()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"GetGlyphMode", PyvtkPVGlyphFilterLegacy_GetGlyphMode, METH_VARARGS,
   "V.GetGlyphMode() -> int\nC++: virtual int GetGlyphMode()\n\nSet/Get the mode at which glyphs will be generated.\n"},
  {"SetStride", PyvtkPVGlyphFilterLegacy_SetStride, METH_VARARGS,
   "V.SetStride(int)\nC++: virtual void SetStride(int _arg)\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"GetStrideMinValue", PyvtkPVGlyphFilterLegacy_GetStrideMinValue, METH_VARARGS,
   "V.GetStrideMinValue() -> int\nC++: virtual int GetStrideMinValue()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"GetStrideMaxValue", PyvtkPVGlyphFilterLegacy_GetStrideMaxValue, METH_VARARGS,
   "V.GetStrideMaxValue() -> int\nC++: virtual int GetStrideMaxValue()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"GetStride", PyvtkPVGlyphFilterLegacy_GetStride, METH_VARARGS,
   "V.GetStride() -> int\nC++: virtual int GetStride()\n\nSet/Get the stride at which to glyph the dataset. Note, only\napplicable with EVERY_NTH_POINT GlyphMode.\n"},
  {"SetSeed", PyvtkPVGlyphFilterLegacy_SetSeed, METH_VARARGS,
   "V.SetSeed(int)\nC++: virtual void SetSeed(int _arg)\n\nSet/Get Seed used for generating a spatially uniform\ndistribution.\n"},
  {"GetSeed", PyvtkPVGlyphFilterLegacy_GetSeed, METH_VARARGS,
   "V.GetSeed() -> int\nC++: virtual int GetSeed()\n\nSet/Get Seed used for generating a spatially uniform\ndistribution.\n"},
  {"SetMaximumNumberOfSamplePoints", PyvtkPVGlyphFilterLegacy_SetMaximumNumberOfSamplePoints, METH_VARARGS,
   "V.SetMaximumNumberOfSamplePoints(int)\nC++: virtual void SetMaximumNumberOfSamplePoints(int _arg)\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {"GetMaximumNumberOfSamplePointsMinValue", PyvtkPVGlyphFilterLegacy_GetMaximumNumberOfSamplePointsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfSamplePointsMinValue() -> int\nC++: virtual int GetMaximumNumberOfSamplePointsMinValue()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {"GetMaximumNumberOfSamplePointsMaxValue", PyvtkPVGlyphFilterLegacy_GetMaximumNumberOfSamplePointsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfSamplePointsMaxValue() -> int\nC++: virtual int GetMaximumNumberOfSamplePointsMaxValue()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {"GetMaximumNumberOfSamplePoints", PyvtkPVGlyphFilterLegacy_GetMaximumNumberOfSamplePoints, METH_VARARGS,
   "V.GetMaximumNumberOfSamplePoints() -> int\nC++: virtual int GetMaximumNumberOfSamplePoints()\n\nSet/Get maximum number of sample points to use to sample the\nspace when GlyphMode is set to SPATIALLY_UNIFORM_DISTRIBUTION.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVGlyphFilterLegacy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVGlyphFilterLegacy", // tp_name
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
  PyvtkPVGlyphFilterLegacy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVGlyphFilterLegacy_StaticNew()
{
  return vtkPVGlyphFilterLegacy::New();
}

PyObject *PyvtkPVGlyphFilterLegacy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVGlyphFilterLegacy_Type, PyvtkPVGlyphFilterLegacy_Methods,
    "vtkPVGlyphFilterLegacy",
 &PyvtkPVGlyphFilterLegacy_StaticNew);

  PyTypeObject *pytype = &PyvtkPVGlyphFilterLegacy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGlyph3D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVGlyphFilterLegacy_GlyphModeType_Type);
  PyvtkPVGlyphFilterLegacy_GlyphModeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVGlyphFilterLegacy_GlyphModeType_Type);

  o = (PyObject *)&PyvtkPVGlyphFilterLegacy_GlyphModeType_Type;
  if (PyDict_SetItemString(d, "GlyphModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPVGlyphFilterLegacy::GlyphModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ALL_POINTS", vtkPVGlyphFilterLegacy::ALL_POINTS },
        { "EVERY_NTH_POINT", vtkPVGlyphFilterLegacy::EVERY_NTH_POINT },
        { "SPATIALLY_UNIFORM_DISTRIBUTION", vtkPVGlyphFilterLegacy::SPATIALLY_UNIFORM_DISTRIBUTION },
      };

    o = PyvtkPVGlyphFilterLegacy_GlyphModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVGlyphFilterLegacy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVGlyphFilterLegacy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVGlyphFilterLegacy", o) != 0)
  {
    Py_DECREF(o);
  }

}

