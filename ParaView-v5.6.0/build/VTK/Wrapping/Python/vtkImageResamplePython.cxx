// python wrapper for vtkImageResample
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
#include "vtkImageResample.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResample(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageResample_ClassNew(); }

#ifndef DECLARED_PyvtkImageReslice_ClassNew
extern "C" { PyObject *PyvtkImageReslice_ClassNew(); }
#define DECLARED_PyvtkImageReslice_ClassNew
#endif

static const char *PyvtkImageResample_Doc =
  "vtkImageResample - Resamples an image to be larger or smaller.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "This filter produces an output with different spacing (and extent)\n"
  "than the input.  Linear interpolation can be used to resample the\n"
  "data. The Output spacing can be set explicitly or relative to input\n"
  "spacing with the SetAxisMagnificationFactor method.\n\n";


static PyObject *
PyvtkImageResample_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResample::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResample::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResample *tempr = vtkImageResample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResample *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResample::NewInstance());

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
PyvtkImageResample_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResample::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageResample::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResample_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageResample_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageResample_SetAxisOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisOutputSpacing(temp0, temp1);
    }
    else
    {
      op->vtkImageResample::SetAxisOutputSpacing(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

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
      op->SetMagnificationFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResample::SetMagnificationFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactors(temp0);
    }
    else
    {
      op->vtkImageResample::SetMagnificationFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResample_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageResample_SetMagnificationFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return nullptr;
}



static PyObject *
PyvtkImageResample_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMagnificationFactors() :
      op->vtkImageResample::GetMagnificationFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetAxisMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisMagnificationFactor(temp0, temp1);
    }
    else
    {
      op->vtkImageResample::SetAxisMagnificationFactor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_GetAxisMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
  {
    double tempr = (ap.IsBound() ?
      op->GetAxisMagnificationFactor(temp0, temp1) :
      op->vtkImageResample::GetAxisMagnificationFactor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageResample::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageResample::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageResample_Methods[] = {
  {"IsTypeOf", PyvtkImageResample_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResample_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResample_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageResample\nC++: static vtkImageResample *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResample_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageResample\nC++: vtkImageResample *NewInstance()\n\n"},
  {"SetOutputSpacing", PyvtkImageResample_SetOutputSpacing, METH_VARARGS,
   "V.SetOutputSpacing(float, float, float)\nC++: void SetOutputSpacing(double sx, double sy, double sz)\n    override;\nV.SetOutputSpacing((float, float, float))\nC++: void SetOutputSpacing(const double spacing[3]) override;\n\nSet desired spacing. Zero is a reserved value indicating spacing\nhas not been set.\n"},
  {"SetAxisOutputSpacing", PyvtkImageResample_SetAxisOutputSpacing, METH_VARARGS,
   "V.SetAxisOutputSpacing(int, float)\nC++: void SetAxisOutputSpacing(int axis, double spacing)\n\nSet desired spacing. Zero is a reserved value indicating spacing\nhas not been set.\n"},
  {"SetMagnificationFactors", PyvtkImageResample_SetMagnificationFactors, METH_VARARGS,
   "V.SetMagnificationFactors(float, float, float)\nC++: void SetMagnificationFactors(double fx, double fy, double fz)\nV.SetMagnificationFactors((float, float, float))\nC++: void SetMagnificationFactors(const double f[3])\n\nSet/Get Magnification factors. Zero is a reserved value\nindicating values have not been computed.\n"},
  {"GetMagnificationFactors", PyvtkImageResample_GetMagnificationFactors, METH_VARARGS,
   "V.GetMagnificationFactors() -> (float, float, float)\nC++: double *GetMagnificationFactors()\n\n"},
  {"SetAxisMagnificationFactor", PyvtkImageResample_SetAxisMagnificationFactor, METH_VARARGS,
   "V.SetAxisMagnificationFactor(int, float)\nC++: void SetAxisMagnificationFactor(int axis, double factor)\n\nSet/Get Magnification factors. Zero is a reserved value\nindicating values have not been computed.\n"},
  {"GetAxisMagnificationFactor", PyvtkImageResample_GetAxisMagnificationFactor, METH_VARARGS,
   "V.GetAxisMagnificationFactor(int, vtkInformation) -> float\nC++: double GetAxisMagnificationFactor(int axis,\n    vtkInformation *inInfo=nullptr)\n\nGet the computed magnification factor for a specific axis. The\ninput information is required to compute the value.\n"},
  {"SetDimensionality", PyvtkImageResample_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: virtual void SetDimensionality(int _arg)\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\nThis has the same effect as setting the magnification of the\nthird axis to 1.0\n"},
  {"GetDimensionality", PyvtkImageResample_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\nThis has the same effect as setting the magnification of the\nthird axis to 1.0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageResample_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageResample", // tp_name
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
  PyvtkImageResample_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResample_StaticNew()
{
  return vtkImageResample::New();
}

PyObject *PyvtkImageResample_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageResample_Type, PyvtkImageResample_Methods,
    "vtkImageResample",
 &PyvtkImageResample_StaticNew);

  PyTypeObject *pytype = &PyvtkImageResample_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReslice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageResample(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResample_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResample", o) != 0)
  {
    Py_DECREF(o);
  }

}

