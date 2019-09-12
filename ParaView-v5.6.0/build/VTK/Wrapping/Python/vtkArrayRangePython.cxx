// python wrapper for vtkArrayRange
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

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayRange(PyObject *); }

static const char *PyvtkArrayRange_Doc =
  "vtkArrayRange - Stores a half-open range of array coordinates.\n\n"
  "vtkArrayRange stores a half-open range of array coordinates along a\n"
  "single dimension of a vtkArraySlice object.\n\n"
  "@sa\n"
  "vtkArray, vtkArrayRange\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "vtkArrayRange()\n"
  "vtkArrayRange(CoordinateT begin, CoordinateT end)\n"
  "vtkArrayRange(const &vtkArrayRange)\n";


static PyObject *
PyvtkArrayRange_GetBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBegin");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetBegin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRange_GetEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnd");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetEnd();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRange_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRange_Contains_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
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

static PyObject *
PyvtkArrayRange_Contains_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayRange *op = static_cast<vtkArrayRange *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->Contains(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRange_Contains_Methods[] = {
  {nullptr, PyvtkArrayRange_Contains_s1, METH_VARARGS,
   "@W vtkArrayRange"},
  {nullptr, PyvtkArrayRange_Contains_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRange_Contains(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRange_Contains_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Contains");
  return nullptr;
}


static PyMethodDef PyvtkArrayRange_Methods[] = {
  {"GetBegin", PyvtkArrayRange_GetBegin, METH_VARARGS,
   "V.GetBegin() -> int\nC++: CoordinateT GetBegin()\n\nReturns the beginning of the range\n"},
  {"GetEnd", PyvtkArrayRange_GetEnd, METH_VARARGS,
   "V.GetEnd() -> int\nC++: CoordinateT GetEnd()\n\nReturns one-past-the-end of the range\n"},
  {"GetSize", PyvtkArrayRange_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: CoordinateT GetSize()\n\nReturns the size of the range (the distance End - Begin).\n"},
  {"Contains", PyvtkArrayRange_Contains, METH_VARARGS,
   "V.Contains(vtkArrayRange) -> bool\nC++: bool Contains(const vtkArrayRange &range)\nV.Contains(int) -> bool\nC++: bool Contains(const CoordinateT coordinate)\n\nReturns true iff the given range is a non-overlapping subset of\nthis range.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArrayRange_vtkArrayRange_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayRange");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayRange *op = new vtkArrayRange();

    result = PyVTKSpecialObject_New("vtkArrayRange", op);
  }

  return result;
}

static PyObject *
PyvtkArrayRange_vtkArrayRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayRange");

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayRange *op = new vtkArrayRange(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayRange", op);
  }

  return result;
}

static PyObject *
PyvtkArrayRange_vtkArrayRange_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayRange");

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
  {
    vtkArrayRange *op = new vtkArrayRange(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayRange", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayRange_vtkArrayRange_Methods[] = {
  {nullptr, PyvtkArrayRange_vtkArrayRange_s3, METH_VARARGS,
   "@W vtkArrayRange"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRange_vtkArrayRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayRange_vtkArrayRange_s1(self, args);
    case 2:
      return PyvtkArrayRange_vtkArrayRange_s2(self, args);
    case 1:
      return PyvtkArrayRange_vtkArrayRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayRange");
  return nullptr;
}


static PyObject *
PyvtkArrayRange_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayRange_vtkArrayRange(nullptr, args);
}

static void PyvtkArrayRange_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayRange *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkArrayRange_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkArrayRange *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkArrayRange_CheckExact(PyObject *ob);

static PyObject *PyvtkArrayRange_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkArrayRange *so1 = nullptr;
  const vtkArrayRange *so2 = nullptr;
  int result = -1;

  if (PyvtkArrayRange_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayRange *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkArrayRange *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayRange", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkArrayRange_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayRange *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkArrayRange *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayRange", &n2));
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

static Py_hash_t PyvtkArrayRange_Hash(PyObject *self)
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

static PyTypeObject PyvtkArrayRange_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayRange", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayRange_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayRange_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkArrayRange_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayRange_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkArrayRange_RichCompare, // tp_richcompare
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
  PyvtkArrayRange_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkArrayRange_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkArrayRange_Type);
}

static void *PyvtkArrayRange_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayRange(*static_cast<const vtkArrayRange*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayRange_TypeNew(); }

PyObject *PyvtkArrayRange_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkArrayRange_Type,
    PyvtkArrayRange_Methods,
    PyvtkArrayRange_vtkArrayRange_Methods,
    &PyvtkArrayRange_CCopy);

  PyTypeObject *pytype = &PyvtkArrayRange_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayRange(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayRange_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayRange", o) != 0)
  {
    Py_DECREF(o);
  }

}

