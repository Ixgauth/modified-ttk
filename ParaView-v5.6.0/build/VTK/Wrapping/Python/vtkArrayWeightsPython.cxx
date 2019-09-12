// python wrapper for vtkArrayWeights
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArrayWeights.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayWeights(PyObject *); }

static const char *PyvtkArrayWeights_Doc =
  "vtkArrayWeights - Stores a collection of weighting factors.\n\n"
  "vtkArrayWeights provides storage for a collection of weights to be\n"
  "used when merging / interpolating N-way arrays.  Convenience\n"
  "constructors are provided for working with one, two, three, and four\n"
  "weighting factors.  For arbitrary collections of weights, use\n"
  "SetCount() and operator[] to assign values.\n\n"
  "vtkArrayWeights is most commonly used with the vtkInterpolate()\n"
  "function to compute weighted sums of vtkArray objects.\n\n"
  "@sa\n"
  "vtkArray, vtkArraySlices\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "vtkArrayWeights()\n"
  "vtkArrayWeights(const vtkArrayWeights &other)\n"
  "vtkArrayWeights(double i)\n"
  "vtkArrayWeights(double i, double j)\n"
  "vtkArrayWeights(double i, double j, double k)\n"
  "vtkArrayWeights(double i, double j, double k, double l)\n";


static PyObject *
PyvtkArrayWeights_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetCount();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayWeights_SetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetCount(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayWeights_Methods[] = {
  {"GetCount", PyvtkArrayWeights_GetCount, METH_VARARGS,
   "V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of weights stored in this container.\n"},
  {"SetCount", PyvtkArrayWeights_SetCount, METH_VARARGS,
   "V.SetCount(int)\nC++: void SetCount(vtkIdType count)\n\nSets the number of weights stored in this container.  Note that\neach weight will be reset to 0.0 after calling SetCount(), use\noperator[] to assign the desired value for each weight.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayWeights *op = new vtkArrayWeights();

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  vtkArrayWeights *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayWeights"))
  {
    vtkArrayWeights *op = new vtkArrayWeights(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyObject *
PyvtkArrayWeights_vtkArrayWeights_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayWeights");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkArrayWeights *op = new vtkArrayWeights(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkArrayWeights", op);
  }

  return result;
}

static PyMethodDef PyvtkArrayWeights_vtkArrayWeights_Methods[] = {
  {nullptr, PyvtkArrayWeights_vtkArrayWeights_s2, METH_VARARGS,
   "@W vtkArrayWeights"},
  {nullptr, PyvtkArrayWeights_vtkArrayWeights_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayWeights_vtkArrayWeights(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayWeights_vtkArrayWeights_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayWeights_vtkArrayWeights_s1(self, args);
    case 2:
      return PyvtkArrayWeights_vtkArrayWeights_s4(self, args);
    case 3:
      return PyvtkArrayWeights_vtkArrayWeights_s5(self, args);
    case 4:
      return PyvtkArrayWeights_vtkArrayWeights_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayWeights");
  return nullptr;
}


static PyObject *
PyvtkArrayWeights_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayWeights_vtkArrayWeights(nullptr, args);
}

static void PyvtkArrayWeights_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayWeights *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkArrayWeights_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  return static_cast<Py_ssize_t>(op->GetCount());
}

PyObject *PyvtkArrayWeights_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const double *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkArrayWeights_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayWeights *op = static_cast<vtkArrayWeights *>(vp);

  vtkIdType temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
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

static PySequenceMethods PyvtkArrayWeights_AsSequence = {
  PyvtkArrayWeights_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayWeights_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayWeights_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkArrayWeights_Hash(PyObject *self)
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

static PyTypeObject PyvtkArrayWeights_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayWeights", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayWeights_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkArrayWeights_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayWeights_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayWeights_Doc, // tp_doc
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
  PyvtkArrayWeights_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkArrayWeights_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayWeights(*static_cast<const vtkArrayWeights*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayWeights_TypeNew(); }

PyObject *PyvtkArrayWeights_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkArrayWeights_Type,
    PyvtkArrayWeights_Methods,
    PyvtkArrayWeights_vtkArrayWeights_Methods,
    &PyvtkArrayWeights_CCopy);

  PyTypeObject *pytype = &PyvtkArrayWeights_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayWeights(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayWeights_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayWeights", o) != 0)
  {
    Py_DECREF(o);
  }

}

