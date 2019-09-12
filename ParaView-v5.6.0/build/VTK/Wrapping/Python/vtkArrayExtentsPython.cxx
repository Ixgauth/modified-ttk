// python wrapper for vtkArrayExtents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArrayRange.h"
#include "vtkArrayCoordinates.h"
#include "vtkArrayExtents.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayExtents(PyObject *); }

static const char *PyvtkArrayExtents_Doc =
  "vtkArrayExtents - Stores the number of dimensions and valid\ncoordinate ranges along each dimension for vtkArray.\n\n"
  "vtkArrayExtents describes the number of dimensions and coordinate\n"
  "ranges along each dimension of an N-way collection of values.  It is\n"
  "used to retrieve and update the extents of a vtkArray object.\n\n"
  "Conceptually, vtkArrayExtents is a collection of vtkArrayRange\n"
  "objects, one per dimension, that store the half-open range of valid\n"
  "coordinates (the \"extent\") for that dimension.  Because each extent\n"
  "is stored as a range rather than a size, you can: create arrays that\n"
  "use one-based coordinates for consistency with mathematics and tools\n"
  "such as MATLAB; easily represent arbitrary subsets of an array; and\n"
  "easily store and manipulate distributed arrays using \"global\"\n"
  "coordinates.\n\n"
  "Convenience constructors are provided for creating extents along one,\n"
  "two, and three dimensions.  For higher dimensions, you can:\n\n"
  "Use the static Uniform() factory method to create extents that have\n"
  "the same size along an arbitrary number of dimensions.\n\n"
  "Use the default constructor and the Append() method to \"grow\" your\n"
  "extents to the correct number of dimensions.\n\n"
  "Use the default constructuor, SetDimensions() and operator[] to\n"
  "assign a size along each dimension.\n\n"
  "@sa\n"
  "vtkArray, vtkArrayRange, vtkArrayCoordinates\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "vtkArrayExtents()\n"
  "explicit vtkArrayExtents(const CoordinateT i)\n"
  "explicit vtkArrayExtents(const vtkArrayRange &i)\n"
  "vtkArrayExtents(const CoordinateT i, const CoordinateT j)\n"
  "vtkArrayExtents(const vtkArrayRange &i, const vtkArrayRange &j)\n"
  "vtkArrayExtents(const CoordinateT i, const CoordinateT j,\n    const CoordinateT k)\n"
  "vtkArrayExtents(const vtkArrayRange &i, const vtkArrayRange &j,\n    const vtkArrayRange &k)\n"
  "vtkArrayExtents(const &vtkArrayExtents)\n";


static PyObject *
PyvtkArrayExtents_Uniform(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Uniform");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayExtents tempr = vtkArrayExtents::Uniform(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
  {
    op->Append(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayExtents_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetDimensions();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetDimensions(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArrayRange tempr = op->GetExtent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayRange");
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_SetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  vtkArrayRange *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange"))
  {
    op->SetExtent(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkArrayExtents_ZeroBased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroBased");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->ZeroBased();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_SameShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SameShape");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    bool tempr = op->SameShape(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayExtents_GetLeftToRightCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftToRightCoordinatesN");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    op->GetLeftToRightCoordinatesN(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_GetRightToLeftCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightToLeftCoordinatesN");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    op->GetRightToLeftCoordinatesN(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayExtents_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    bool tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayExtents_Methods[] = {
  {"Uniform", PyvtkArrayExtents_Uniform, METH_VARARGS,
   "V.Uniform(int, int) -> vtkArrayExtents\nC++: static const vtkArrayExtents Uniform(DimensionT n,\n    CoordinateT m)\n\nCreate n-dimensional extents with extent [0, m) along each\ndimension. This is useful for creating e.g: a square matrix.\n"},
  {"Append", PyvtkArrayExtents_Append, METH_VARARGS,
   "V.Append(vtkArrayRange)\nC++: void Append(const vtkArrayRange &extent)\n\nGrow the number of dimensions by one, specifying the extent of\nthe new dimension.\n"},
  {"GetDimensions", PyvtkArrayExtents_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> int\nC++: DimensionT GetDimensions()\n\nReturn the current number of dimensions.\n"},
  {"GetSize", PyvtkArrayExtents_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: SizeT GetSize()\n\nReturn the number of values that *could* be stored using the\ncurrent extents.  This is equal to the product of the size of the\nextent along each dimension.\n"},
  {"SetDimensions", PyvtkArrayExtents_SetDimensions, METH_VARARGS,
   "V.SetDimensions(int)\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the current number of dimensions.  Note that this method\nresets the extent along each dimension to an empty range, so you\nmust assign each dimension's extent explicitly using operator[]\nafter calling SetDimensions().\n"},
  {"GetExtent", PyvtkArrayExtents_GetExtent, METH_VARARGS,
   "V.GetExtent(int) -> vtkArrayRange\nC++: vtkArrayRange GetExtent(DimensionT i)\n\nGet the extent of the i-th dimension.\n"},
  {"SetExtent", PyvtkArrayExtents_SetExtent, METH_VARARGS,
   "V.SetExtent(int, vtkArrayRange)\nC++: void SetExtent(DimensionT i, const vtkArrayRange &)\n\nSet the extent of the i-th dimension.\n"},
  {"ZeroBased", PyvtkArrayExtents_ZeroBased, METH_VARARGS,
   "V.ZeroBased() -> bool\nC++: bool ZeroBased()\n\nReturns true iff every range in the current extents is\nzero-based. This is useful as a precondition test for legacy\nfilters/operations that predate the switch to range-based extents\nand assume that all extents are zero-based.  In general, new code\nshould be written to work with arbitrary range extents, so won't\nneed to perform this check.\n"},
  {"SameShape", PyvtkArrayExtents_SameShape, METH_VARARGS,
   "V.SameShape(vtkArrayExtents) -> bool\nC++: bool SameShape(const vtkArrayExtents &rhs)\n\nReturns true iff the given extents have the same number of\ndimensions and size along each dimension.  Note that the ranges\nalong each dimension may have different values, so long as their\nsizes match.\n"},
  {"GetLeftToRightCoordinatesN", PyvtkArrayExtents_GetLeftToRightCoordinatesN, METH_VARARGS,
   "V.GetLeftToRightCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetLeftToRightCoordinatesN(SizeT n,\n    vtkArrayCoordinates &coordinates)\n\nReturns coordinates that reference the n-th value in the extents,\nwhere n is in the range [0, GetSize()).  The returned coordinates\nwill be ordered so that the left-most indices vary fastest.  This\nis equivalent to column-major ordering for matrices, and\ncorresponds to the order in which consecutive array values would\nbe stored in languages such as Fortran, MATLAB, Octave, and R.\n"},
  {"GetRightToLeftCoordinatesN", PyvtkArrayExtents_GetRightToLeftCoordinatesN, METH_VARARGS,
   "V.GetRightToLeftCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetRightToLeftCoordinatesN(SizeT n,\n    vtkArrayCoordinates &coordinates)\n\nReturns coordinates that reference the n-th value in the extents,\nwhere n is in the range [0, GetSize()).  The returned coordinates\nwill be ordered so that the right-most indices vary fastest. \nThis is equivalent to row-major ordering for matrices, and\ncorresponds to the order in which consecutive array values would\nbe stored in languages including C and C++.\n"},
  {"Contains", PyvtkArrayExtents_Contains, METH_VARARGS,
   "V.Contains(vtkArrayCoordinates) -> bool\nC++: bool Contains(const vtkArrayCoordinates &coordinates)\n\nReturns true if the given array coordinates are completely\ncontained by the current extents (i.e. extent begin <= coordinate\nand coordinate < extent end along every dimension).  Returns\nfalse if the array coordinates are outside the current extents,\nor contain a different number of dimensions.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayExtents *op = new vtkArrayExtents();

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArrayExtents *op = new vtkArrayExtents(temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
  {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayExtents *op = new vtkArrayExtents(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkArrayRange *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange"))
  {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0, *temp1);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkArrayExtents *op = new vtkArrayExtents(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkArrayRange *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayRange *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayRange"))
  {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0, *temp1, *temp2);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArrayExtents_vtkArrayExtents_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtents");

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    vtkArrayExtents *op = new vtkArrayExtents(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtents", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayExtents_vtkArrayExtents_Methods[] = {
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s2, METH_VARARGS,
   "-@k"},
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s3, METH_VARARGS,
   "-@W vtkArrayRange"},
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s4, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s5, METH_VARARGS,
   "@WW vtkArrayRange vtkArrayRange"},
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s6, METH_VARARGS,
   "@kkk"},
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s7, METH_VARARGS,
   "@WWW vtkArrayRange vtkArrayRange vtkArrayRange"},
  {nullptr, PyvtkArrayExtents_vtkArrayExtents_s8, METH_VARARGS,
   "@W vtkArrayExtents"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayExtents_vtkArrayExtents(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayExtents_vtkArrayExtents_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayExtents_vtkArrayExtents_s1(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayExtents");
  return nullptr;
}


static PyObject *
PyvtkArrayExtents_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayExtents_vtkArrayExtents(nullptr, args);
}

static void PyvtkArrayExtents_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayExtents *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkArrayExtents_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkArrayExtents *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkArrayExtents_CheckExact(PyObject *ob);

static PyObject *PyvtkArrayExtents_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkArrayExtents *so1 = nullptr;
  const vtkArrayExtents *so2 = nullptr;
  int result = -1;

  if (PyvtkArrayExtents_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayExtents *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkArrayExtents *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayExtents", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkArrayExtents_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayExtents *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkArrayExtents *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayExtents", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

Py_ssize_t PyvtkArrayExtents_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArrayExtents_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const vtkArrayRange *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildSpecialObject(tempr, "vtkArrayRange");
    }
  }

  return result;
}

int PyvtkArrayExtents_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayExtents *op = static_cast<vtkArrayExtents *>(vp);

  vtkIdType temp0;
  vtkArrayRange *temp1 = nullptr;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else if (vtkPythonArgs::GetSpecialObject(arg1, temp1, "vtkArrayRange"))
  {
    (*op)[temp0] = *temp1;

    if (PyErr_Occurred() == nullptr)
    {
      result = 0;
    }
  }

  return result;
}

static PySequenceMethods PyvtkArrayExtents_AsSequence = {
  PyvtkArrayExtents_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayExtents_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayExtents_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkArrayExtents_Hash(PyObject *self)
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

static PyTypeObject PyvtkArrayExtents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayExtents", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayExtents_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkArrayExtents_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayExtents_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkArrayExtents_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayExtents_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkArrayExtents_RichCompare, // tp_richcompare
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
  PyvtkArrayExtents_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkArrayExtents_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkArrayExtents_Type);
}

static void *PyvtkArrayExtents_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayExtents(*static_cast<const vtkArrayExtents*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayExtents_TypeNew(); }

PyObject *PyvtkArrayExtents_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkArrayExtents_Type,
    PyvtkArrayExtents_Methods,
    PyvtkArrayExtents_vtkArrayExtents_Methods,
    &PyvtkArrayExtents_CCopy);

  PyTypeObject *pytype = &PyvtkArrayExtents_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayExtents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayExtents_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayExtents", o) != 0)
  {
    Py_DECREF(o);
  }

}

