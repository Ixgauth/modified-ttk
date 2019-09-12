// python wrapper for vtkThresholdTextureCoords
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
#include "vtkThresholdTextureCoords.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThresholdTextureCoords(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThresholdTextureCoords_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkThresholdTextureCoords_Doc =
  "vtkThresholdTextureCoords - compute 1D, 2D, or 3D texture coordinates\nbased on scalar threshold\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkThresholdTextureCoords is a filter that generates texture\n"
  "coordinates for any input dataset type given a threshold criterion.\n"
  "The criterion can take three forms: 1) greater than a particular\n"
  "value (ThresholdByUpper());\n"
  "2) less than a particular value (ThresholdByLower(); or 3) between\n"
  "   two values (ThresholdBetween(). If the threshold criterion is\n"
  "   satisfied, the \"in\" texture coordinate will be set (this can be\n"
  "   specified by the user). If the threshold criterion is not\n"
  "   satisfied the \"out\" is set.\n\n"
  "@warning\n"
  "There is a texture map - texThres.vtk - that can be used in\n"
  "conjunction with this filter. This map defines a \"transparent\" region\n"
  "for texture coordinates 0<=r<0.5, and an opaque full intensity map\n"
  "for texture coordinates 0.5<r<=1.0. There is a small transition\n"
  "region for r=0.5.\n\n"
  "@sa\n"
  "vtkThreshold vtkThresholdPoints vtkTextureMapToPlane\n"
  "vtkTextureMapToSphere vtkTextureMapToCylinder\n\n";


static PyObject *
PyvtkThresholdTextureCoords_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThresholdTextureCoords::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThresholdTextureCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThresholdTextureCoords *tempr = vtkThresholdTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThresholdTextureCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThresholdTextureCoords::NewInstance());

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
PyvtkThresholdTextureCoords_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByLower(temp0);
    }
    else
    {
      op->vtkThresholdTextureCoords::ThresholdByLower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByUpper(temp0);
    }
    else
    {
      op->vtkThresholdTextureCoords::ThresholdByUpper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkThresholdTextureCoords::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkThresholdTextureCoords::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkThresholdTextureCoords::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SetTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimension(temp0);
    }
    else
    {
      op->vtkThresholdTextureCoords::SetTextureDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetTextureDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureDimensionMinValue() :
      op->vtkThresholdTextureCoords::GetTextureDimensionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetTextureDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureDimensionMaxValue() :
      op->vtkThresholdTextureCoords::GetTextureDimensionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_GetTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureDimension() :
      op->vtkThresholdTextureCoords::GetTextureDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SetInTextureCoord_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInTextureCoord(temp0, temp1, temp2);
    }
    else
    {
      op->vtkThresholdTextureCoords::SetInTextureCoord(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetInTextureCoord_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInTextureCoord(temp0);
    }
    else
    {
      op->vtkThresholdTextureCoords::SetInTextureCoord(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetInTextureCoord(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkThresholdTextureCoords_SetInTextureCoord_s1(self, args);
    case 1:
      return PyvtkThresholdTextureCoords_SetInTextureCoord_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInTextureCoord");
  return nullptr;
}



static PyObject *
PyvtkThresholdTextureCoords_GetInTextureCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetInTextureCoord() :
      op->vtkThresholdTextureCoords::GetInTextureCoord());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTextureCoords_SetOutTextureCoord_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutTextureCoord(temp0, temp1, temp2);
    }
    else
    {
      op->vtkThresholdTextureCoords::SetOutTextureCoord(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetOutTextureCoord_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutTextureCoord(temp0);
    }
    else
    {
      op->vtkThresholdTextureCoords::SetOutTextureCoord(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThresholdTextureCoords_SetOutTextureCoord(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkThresholdTextureCoords_SetOutTextureCoord_s1(self, args);
    case 1:
      return PyvtkThresholdTextureCoords_SetOutTextureCoord_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutTextureCoord");
  return nullptr;
}



static PyObject *
PyvtkThresholdTextureCoords_GetOutTextureCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutTextureCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTextureCoords *op = static_cast<vtkThresholdTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutTextureCoord() :
      op->vtkThresholdTextureCoords::GetOutTextureCoord());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTextureCoords_Methods[] = {
  {"IsTypeOf", PyvtkThresholdTextureCoords_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThresholdTextureCoords_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThresholdTextureCoords_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThresholdTextureCoords\nC++: static vtkThresholdTextureCoords *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThresholdTextureCoords_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThresholdTextureCoords\nC++: vtkThresholdTextureCoords *NewInstance()\n\n"},
  {"ThresholdByLower", PyvtkThresholdTextureCoords_ThresholdByLower, METH_VARARGS,
   "V.ThresholdByLower(float)\nC++: void ThresholdByLower(double lower)\n\nCriterion is cells whose scalars are less than lower threshold.\n"},
  {"ThresholdByUpper", PyvtkThresholdTextureCoords_ThresholdByUpper, METH_VARARGS,
   "V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double upper)\n\nCriterion is cells whose scalars are less than upper threshold.\n"},
  {"ThresholdBetween", PyvtkThresholdTextureCoords_ThresholdBetween, METH_VARARGS,
   "V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds.\n"},
  {"GetUpperThreshold", PyvtkThresholdTextureCoords_GetUpperThreshold, METH_VARARGS,
   "V.GetUpperThreshold() -> float\nC++: virtual double GetUpperThreshold()\n\nReturn the upper and lower thresholds.\n"},
  {"GetLowerThreshold", PyvtkThresholdTextureCoords_GetLowerThreshold, METH_VARARGS,
   "V.GetLowerThreshold() -> float\nC++: virtual double GetLowerThreshold()\n\nReturn the upper and lower thresholds.\n"},
  {"SetTextureDimension", PyvtkThresholdTextureCoords_SetTextureDimension, METH_VARARGS,
   "V.SetTextureDimension(int)\nC++: virtual void SetTextureDimension(int _arg)\n\nSet the desired dimension of the texture map.\n"},
  {"GetTextureDimensionMinValue", PyvtkThresholdTextureCoords_GetTextureDimensionMinValue, METH_VARARGS,
   "V.GetTextureDimensionMinValue() -> int\nC++: virtual int GetTextureDimensionMinValue()\n\nSet the desired dimension of the texture map.\n"},
  {"GetTextureDimensionMaxValue", PyvtkThresholdTextureCoords_GetTextureDimensionMaxValue, METH_VARARGS,
   "V.GetTextureDimensionMaxValue() -> int\nC++: virtual int GetTextureDimensionMaxValue()\n\nSet the desired dimension of the texture map.\n"},
  {"GetTextureDimension", PyvtkThresholdTextureCoords_GetTextureDimension, METH_VARARGS,
   "V.GetTextureDimension() -> int\nC++: virtual int GetTextureDimension()\n\nSet the desired dimension of the texture map.\n"},
  {"SetInTextureCoord", PyvtkThresholdTextureCoords_SetInTextureCoord, METH_VARARGS,
   "V.SetInTextureCoord(float, float, float)\nC++: void SetInTextureCoord(double, double, double)\nV.SetInTextureCoord((float, float, float))\nC++: void SetInTextureCoord(double a[3])\n\n"},
  {"GetInTextureCoord", PyvtkThresholdTextureCoords_GetInTextureCoord, METH_VARARGS,
   "V.GetInTextureCoord() -> (float, float, float)\nC++: double *GetInTextureCoord()\n\nSet the texture coordinate value for point satisfying threshold\ncriterion.\n"},
  {"SetOutTextureCoord", PyvtkThresholdTextureCoords_SetOutTextureCoord, METH_VARARGS,
   "V.SetOutTextureCoord(float, float, float)\nC++: void SetOutTextureCoord(double, double, double)\nV.SetOutTextureCoord((float, float, float))\nC++: void SetOutTextureCoord(double a[3])\n\n"},
  {"GetOutTextureCoord", PyvtkThresholdTextureCoords_GetOutTextureCoord, METH_VARARGS,
   "V.GetOutTextureCoord() -> (float, float, float)\nC++: double *GetOutTextureCoord()\n\nSet the texture coordinate value for point NOT satisfying\nthreshold criterion.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThresholdTextureCoords_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkThresholdTextureCoords", // tp_name
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
  PyvtkThresholdTextureCoords_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThresholdTextureCoords_StaticNew()
{
  return vtkThresholdTextureCoords::New();
}

PyObject *PyvtkThresholdTextureCoords_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThresholdTextureCoords_Type, PyvtkThresholdTextureCoords_Methods,
    "vtkThresholdTextureCoords",
 &PyvtkThresholdTextureCoords_StaticNew);

  PyTypeObject *pytype = &PyvtkThresholdTextureCoords_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThresholdTextureCoords(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThresholdTextureCoords_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThresholdTextureCoords", o) != 0)
  {
    Py_DECREF(o);
  }

}

