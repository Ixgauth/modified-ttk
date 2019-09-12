// python wrapper for vtkArrayCoordinates
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArrayCoordinates.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayCoordinates(PyObject *); }

static const char *PyvtkArrayCoordinates_Doc =
  "vtkArrayCoordinates - Stores coordinate into an N-way array.\n\n"
  "vtkArrayCoordinates stores a collection of coordinates that can be\n"
  "used to access values in a vtkArray containing an arbitrary number of\n"
  "dimensions.\n\n"
  "Convenience constructors are provided for working with one, two, and\n"
  "three dimensions.  For higher dimensions, use the default\n"
  "constructor, SetDimensions() and operator[] to assign a coordinate\n"
  "value along each dimension.\n\n"
  "@sa\n"
  "vtkArray, vtkArrayExtents\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "vtkArrayCoordinates()\n"
  "explicit vtkArrayCoordinates(CoordinateT i)\n"
  "vtkArrayCoordinates(CoordinateT i, CoordinateT j)\n"
  "vtkArrayCoordinates(CoordinateT i, CoordinateT j, CoordinateT k)\n"
  "vtkArrayCoordinates(const &vtkArrayCoordinates)\n";


static PyObject *
PyvtkArrayCoordinates_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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
PyvtkArrayCoordinates_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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
PyvtkArrayCoordinates_GetCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = op->GetCoordinate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCoordinates_SetCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetCoordinate(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayCoordinates_Methods[] = {
  {"GetDimensions", PyvtkArrayCoordinates_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> int\nC++: DimensionT GetDimensions()\n\nReturn the number of dimensions contained in the coordinates.\n"},
  {"SetDimensions", PyvtkArrayCoordinates_SetDimensions, METH_VARARGS,
   "V.SetDimensions(int)\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the number of dimensions.  Note that this method resets the\ncoordinate along each dimension to zero, so you must set every\ncoordinate explicitly using operator[] after calling\nSetDimensions().\n"},
  {"GetCoordinate", PyvtkArrayCoordinates_GetCoordinate, METH_VARARGS,
   "V.GetCoordinate(int) -> int\nC++: CoordinateT GetCoordinate(DimensionT i)\n\nReturns the coordinate of the i-th dimension.\n"},
  {"SetCoordinate", PyvtkArrayCoordinates_SetCoordinate, METH_VARARGS,
   "V.SetCoordinate(int, int)\nC++: void SetCoordinate(DimensionT i, const CoordinateT &)\n\nSets the coordinate of the i-th dimension.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates();

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayCoordinates_vtkArrayCoordinates_Methods[] = {
  {nullptr, PyvtkArrayCoordinates_vtkArrayCoordinates_s2, METH_VARARGS,
   "-@k"},
  {nullptr, PyvtkArrayCoordinates_vtkArrayCoordinates_s5, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayCoordinates_vtkArrayCoordinates_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s1(self, args);
    case 2:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s3(self, args);
    case 3:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayCoordinates");
  return nullptr;
}


static PyObject *
PyvtkArrayCoordinates_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayCoordinates_vtkArrayCoordinates(nullptr, args);
}

static void PyvtkArrayCoordinates_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayCoordinates *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkArrayCoordinates_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkArrayCoordinates *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkArrayCoordinates_CheckExact(PyObject *ob);

static PyObject *PyvtkArrayCoordinates_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkArrayCoordinates *so1 = nullptr;
  const vtkArrayCoordinates *so2 = nullptr;
  int result = -1;

  if (PyvtkArrayCoordinates_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayCoordinates *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkArrayCoordinates *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayCoordinates", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkArrayCoordinates_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayCoordinates *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkArrayCoordinates *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayCoordinates", &n2));
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

Py_ssize_t PyvtkArrayCoordinates_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArrayCoordinates_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const vtkIdType *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkArrayCoordinates_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
  {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == nullptr)
    {
      result = 0;
    }
  }

  return result;
}

static PySequenceMethods PyvtkArrayCoordinates_AsSequence = {
  PyvtkArrayCoordinates_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayCoordinates_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayCoordinates_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkArrayCoordinates_Hash(PyObject *self)
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

static PyTypeObject PyvtkArrayCoordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayCoordinates", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayCoordinates_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkArrayCoordinates_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayCoordinates_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkArrayCoordinates_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayCoordinates_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkArrayCoordinates_RichCompare, // tp_richcompare
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
  PyvtkArrayCoordinates_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkArrayCoordinates_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkArrayCoordinates_Type);
}

static void *PyvtkArrayCoordinates_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayCoordinates(*static_cast<const vtkArrayCoordinates*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayCoordinates_TypeNew(); }

PyObject *PyvtkArrayCoordinates_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkArrayCoordinates_Type,
    PyvtkArrayCoordinates_Methods,
    PyvtkArrayCoordinates_vtkArrayCoordinates_Methods,
    &PyvtkArrayCoordinates_CCopy);

  PyTypeObject *pytype = &PyvtkArrayCoordinates_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayCoordinates(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayCoordinates_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayCoordinates", o) != 0)
  {
    Py_DECREF(o);
  }

}

