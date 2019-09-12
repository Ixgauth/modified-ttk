// python wrapper for vtkImageBSplineInterpolator
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
#include "vtkImageBSplineInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageBSplineInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageBSplineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractImageInterpolator_ClassNew
extern "C" { PyObject *PyvtkAbstractImageInterpolator_ClassNew(); }
#define DECLARED_PyvtkAbstractImageInterpolator_ClassNew
#endif

static const char *PyvtkImageBSplineInterpolator_Doc =
  "vtkImageBSplineInterpolator - perform b-spline interpolation on images\n\n"
  "Superclass: vtkAbstractImageInterpolator\n\n"
  "vtkImageBSplineInterpolator can be used to perform b-spline\n"
  "interpolation on images that have been filtered with\n"
  "vtkImageBSplineCoefficients.  The b-spline interpolants provide the\n"
  "maximum possible degree of continuity for a given kernel size, but\n"
  "require that the image data be pre-filtered to generate b-spline\n"
  "coefficients before the interpolation is performed. Interpolating\n"
  "data that has not been pre-filtered will give incorrect results.\n"
  "@sa\n"
  "vtkImageReslice vtkImageBSplineCoefficients vtkBSplineTransform@par\n"
  "Thanks: This class was written by David Gobbi at the Seaman Family MR\n"
  "Research Centre, Foothills Medical Centre, Calgary, Alberta. DG Gobbi\n"
  "and YP Starreveld, \"Uniform B-Splines for the VTK Imaging Pipeline,\"\n"
  "VTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n";


static PyObject *
PyvtkImageBSplineInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageBSplineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBSplineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageBSplineInterpolator *tempr = vtkImageBSplineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBSplineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBSplineInterpolator::NewInstance());

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
PyvtkImageBSplineInterpolator_SetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplineDegree(temp0);
    }
    else
    {
      op->vtkImageBSplineInterpolator::SetSplineDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegree() :
      op->vtkImageBSplineInterpolator::GetSplineDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMinValue() :
      op->vtkImageBSplineInterpolator::GetSplineDegreeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_GetSplineDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMaxValue() :
      op->vtkImageBSplineInterpolator::GetSplineDegreeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeSupportSize(temp0, temp1);
    }
    else
    {
      op->vtkImageBSplineInterpolator::ComputeSupportSize(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineInterpolator *op = static_cast<vtkImageBSplineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSeparable() :
      op->vtkImageBSplineInterpolator::IsSeparable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageBSplineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkImageBSplineInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageBSplineInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageBSplineInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageBSplineInterpolator\nC++: static vtkImageBSplineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageBSplineInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageBSplineInterpolator\nC++: vtkImageBSplineInterpolator *NewInstance()\n\n"},
  {"SetSplineDegree", PyvtkImageBSplineInterpolator_SetSplineDegree, METH_VARARGS,
   "V.SetSplineDegree(int)\nC++: void SetSplineDegree(int degree)\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {"GetSplineDegree", PyvtkImageBSplineInterpolator_GetSplineDegree, METH_VARARGS,
   "V.GetSplineDegree() -> int\nC++: int GetSplineDegree()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {"GetSplineDegreeMinValue", PyvtkImageBSplineInterpolator_GetSplineDegreeMinValue, METH_VARARGS,
   "V.GetSplineDegreeMinValue() -> int\nC++: int GetSplineDegreeMinValue()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {"GetSplineDegreeMaxValue", PyvtkImageBSplineInterpolator_GetSplineDegreeMaxValue, METH_VARARGS,
   "V.GetSplineDegreeMaxValue() -> int\nC++: int GetSplineDegreeMaxValue()\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.  The data must be pre-filtered for the same\ndegree of polynomial with vtkImageBSplineCoefficients.\n"},
  {"ComputeSupportSize", PyvtkImageBSplineInterpolator_ComputeSupportSize, METH_VARARGS,
   "V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: void ComputeSupportSize(const double matrix[16],\n    int support[3]) override;\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass nullptr as the matrix to\nretrieve the full kernel size.\n"},
  {"IsSeparable", PyvtkImageBSplineInterpolator_IsSeparable, METH_VARARGS,
   "V.IsSeparable() -> bool\nC++: bool IsSeparable() override;\n\nReturns true if the interpolator supports weight precomputation.\nThis will always return true for this interpolator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageBSplineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageBSplineInterpolator", // tp_name
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
  PyvtkImageBSplineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageBSplineInterpolator_StaticNew()
{
  return vtkImageBSplineInterpolator::New();
}

PyObject *PyvtkImageBSplineInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageBSplineInterpolator_Type, PyvtkImageBSplineInterpolator_Methods,
    "vtkImageBSplineInterpolator",
 &PyvtkImageBSplineInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkImageBSplineInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractImageInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageBSplineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageBSplineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageBSplineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(9);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_IMAGE_BSPLINE_DEGREE_MAX", o);
    Py_DECREF(o);
  }
}

