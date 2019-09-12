// python wrapper for vtkImageBSplineInternals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageBSplineInternals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageBSplineInternals(PyObject *); }

static const char *PyvtkImageBSplineInternals_Doc =
  "vtkImageBSplineInternals - BSpline code from P.\n\n"
  "Thevenaz\n\n"
  "vtkImageBSplineInternals provides code for image interpolation with\n"
  "b-splines of various degrees.  This code computes the coefficients\n"
  "from the image, and computes the weights for the b-spline kernels.\n\n"
  "This class is based on code provided by Philippe Thevenaz of EPFL,\n"
  "Lausanne, Switzerland.  Please acknowledge his contribution by citing\n"
  "the following paper: [1] P. Thevenaz, T. Blu, M. Unser, \"Interpolation\n"
  "Revisited,\"\n"
  "    IEEE Transactions on Medical Imaging 19(7):739-758, 2000.\n\n"
  "The clamped boundary condition (which is the default) is taken from\n"
  "code presented in the following paper: [2] D. Ruijters, P. Thevenaz,\n"
  "    \"GPU Prefilter for Accurate Cubic B-spline Interpolation,\"\n"
  "    The Computer Journal, doi: 10.1093/comjnl/bxq086, 2010.\n\n";


static PyObject *
PyvtkImageBSplineInternals_GetPoleValues(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPoleValues");

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  long temp1;
  long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = vtkImageBSplineInternals::GetPoleValues(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInternals_ConvertToInterpolationCoefficients(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToInterpolationCoefficients");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long temp1;
  long temp2;
  const size_t size3 = 4;
  double temp3[4];
  double save3[4];
  long temp4;
  double temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.CheckSizeHint(0, size0, temp1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp3, save3, size3);

    vtkImageBSplineInternals::ConvertToInterpolationCoefficients(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInternals_GetInterpolationWeights(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInterpolationWeights");

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  double temp1;
  long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = vtkImageBSplineInternals::GetInterpolationWeights(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineInternals_InterpolatedValue(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolatedValue");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long temp2;
  long temp3;
  long temp4;
  long temp5;
  double temp6;
  double temp7;
  double temp8;
  long temp9;
  long temp10;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(11) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetValue(temp10))
  {
    ap.Save(temp1, save1, size1);

    int tempr = vtkImageBSplineInternals::InterpolatedValue(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageBSplineInternals_Methods[] = {
  {"GetPoleValues", PyvtkImageBSplineInternals_GetPoleValues, METH_VARARGS,
   "V.GetPoleValues([float, float, float, float], int, int) -> int\nC++: static int GetPoleValues(double poles[4], long &numPoles,\n    long degree)\n\nInternal method.  Get the poles for spline of given degree.\nReturns zero if an illegal degree is given (allowed range 2 to\n9). The parameter numPoles will be set to a value between 1 and\n4.\n"},
  {"ConvertToInterpolationCoefficients", PyvtkImageBSplineInternals_ConvertToInterpolationCoefficients, METH_VARARGS,
   "V.ConvertToInterpolationCoefficients([float, ...], int, int,\n    [float, float, float, float], int, float)\nC++: static void ConvertToInterpolationCoefficients(double data[],\n     long size, long border, double poles[4], long numPoles,\n    double tol)\n\nInternal method.  Compute the coefficients for one row of data.\n"},
  {"GetInterpolationWeights", PyvtkImageBSplineInternals_GetInterpolationWeights, METH_VARARGS,
   "V.GetInterpolationWeights([float, float, float, float, float,\n    float, float, float, float, float], float, int) -> int\nC++: static int GetInterpolationWeights(double weights[10],\n    double w, long degree)\n\nInternal method.  Get interpolation weights for offset w, where w\nis between 0 and 1.  You must provide the degree of the spline.\n"},
  {"InterpolatedValue", PyvtkImageBSplineInternals_InterpolatedValue, METH_VARARGS,
   "V.InterpolatedValue((float, ...), [float, ...], int, int, int,\n    int, float, float, float, int, int) -> int\nC++: static int InterpolatedValue(const double *coeffs,\n    double *value, long width, long height, long slices,\n    long depth, double x, double y, double z, long degree,\n    long border)\n\nInternal method.  Interpolate a value from the supplied 3D array\nof coefficients with dimensions width x height x slices.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageBSplineInternals_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkImageBSplineInternals_Delete(PyObject *self)
{
  PyObject_Del(self);
}

static Py_hash_t PyvtkImageBSplineInternals_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkImageBSplineInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageBSplineInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImageBSplineInternals_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkImageBSplineInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImageBSplineInternals_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkImageBSplineInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageBSplineInternals_TypeNew(); }

PyObject *PyvtkImageBSplineInternals_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkImageBSplineInternals_Type,
    PyvtkImageBSplineInternals_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkImageBSplineInternals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageBSplineInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageBSplineInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImageBSplineInternals", o) != 0)
  {
    Py_DECREF(o);
  }

}

