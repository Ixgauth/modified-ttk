// python wrapper for vtkTuple
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkTuple.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTuple(PyObject *); }

static const char *PyvtkTuple_IdLi4EE_Doc =
  "vtkTuple<double, 4> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const double &scalar)\n"
  "explicit vtkTuple(const double *init)\n"
  "vtkTuple(const &vtkTuple<double, 4>)\n";


static PyObject *
PyvtkTuple_IdLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IdLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IdLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  vtkTuple<double, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi4EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi4EE_Methods[] = {
  {"GetSize", PyvtkTuple_IdLi4EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IdLi4EE_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: double *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IdLi4EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IdLi4EE, float) -> bool\nC++: bool Compare(const vtkTuple<double, 4> &other,\n    const double &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<double, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi4EE"))
  {
    vtkTuple<double, 4> *op = new vtkTuple<double, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi4EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IdLi4EE_vtkTuple_s2, METH_VARARGS,
   "-@d"},
  {nullptr, PyvtkTuple_IdLi4EE_vtkTuple_s3, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkTuple_IdLi4EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IdLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IdLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IdLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IdLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IdLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IdLi4EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IdLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<double, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IdLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IdLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

int PyvtkTuple_IdLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 4> *op = static_cast<vtkTuple<double, 4> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IdLi4EE_AsSequence = {
  PyvtkTuple_IdLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IdLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IdLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IdLi4EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IdLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IdLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IdLi4EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IdLi4EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IdLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IdLi4EE_Doc, // tp_doc
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
  PyvtkTuple_IdLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IdLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<double, 4>(*static_cast<const vtkTuple<double, 4>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IdLi4EE_TypeNew(); }

PyObject *PyvtkTuple_IdLi4EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IdLi4EE_Type,
    PyvtkTuple_IdLi4EE_Methods,
    PyvtkTuple_IdLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IdLi4EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IdLi4EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IfLi4EE_Doc =
  "vtkTuple<float, 4> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const float &scalar)\n"
  "explicit vtkTuple(const float *init)\n"
  "vtkTuple(const &vtkTuple<float, 4>)\n";


static PyObject *
PyvtkTuple_IfLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IfLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IfLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  vtkTuple<float, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi4EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi4EE_Methods[] = {
  {"GetSize", PyvtkTuple_IfLi4EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IfLi4EE_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: float *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IfLi4EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IfLi4EE, float) -> bool\nC++: bool Compare(const vtkTuple<float, 4> &other,\n    const float &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<float, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi4EE"))
  {
    vtkTuple<float, 4> *op = new vtkTuple<float, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi4EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IfLi4EE_vtkTuple_s2, METH_VARARGS,
   "-@f"},
  {nullptr, PyvtkTuple_IfLi4EE_vtkTuple_s3, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkTuple_IfLi4EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IfLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IfLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IfLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IfLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IfLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IfLi4EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IfLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<float, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IfLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IfLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const float *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IfLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 4> *op = static_cast<vtkTuple<float, 4> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IfLi4EE_AsSequence = {
  PyvtkTuple_IfLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IfLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IfLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IfLi4EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IfLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IfLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IfLi4EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IfLi4EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IfLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IfLi4EE_Doc, // tp_doc
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
  PyvtkTuple_IfLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IfLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<float, 4>(*static_cast<const vtkTuple<float, 4>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IfLi4EE_TypeNew(); }

PyObject *PyvtkTuple_IfLi4EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IfLi4EE_Type,
    PyvtkTuple_IfLi4EE_Methods,
    PyvtkTuple_IfLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IfLi4EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IfLi4EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IhLi2EE_Doc =
  "vtkTuple<unsigned char, 2> - templated base type for containers of\nconstant size.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const unsigned char &scalar)\n"
  "explicit vtkTuple(const unsigned char *init)\n"
  "vtkTuple(const &vtkTuple<unsigned char, 2>)\n";


static PyObject *
PyvtkTuple_IhLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IhLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IhLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  vtkTuple<unsigned char, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi2EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi2EE_Methods[] = {
  {"GetSize", PyvtkTuple_IhLi2EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IhLi2EE_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: unsigned char *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IhLi2EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IhLi2EE, int) -> bool\nC++: bool Compare(const vtkTuple<unsigned char, 2> &other,\n    const unsigned char &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<unsigned char, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi2EE"))
  {
    vtkTuple<unsigned char, 2> *op = new vtkTuple<unsigned char, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi2EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IhLi2EE_vtkTuple_s2, METH_VARARGS,
   "-@B"},
  {nullptr, PyvtkTuple_IhLi2EE_vtkTuple_s3, METH_VARARGS,
   "-@P *B"},
  {nullptr, PyvtkTuple_IhLi2EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IhLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IhLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IhLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IhLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IhLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IhLi2EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IhLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<unsigned char, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IhLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IhLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const unsigned char *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IhLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 2> *op = static_cast<vtkTuple<unsigned char, 2> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IhLi2EE_AsSequence = {
  PyvtkTuple_IhLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IhLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IhLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IhLi2EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IhLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IhLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IhLi2EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IhLi2EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IhLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IhLi2EE_Doc, // tp_doc
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
  PyvtkTuple_IhLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IhLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<unsigned char, 2>(*static_cast<const vtkTuple<unsigned char, 2>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IhLi2EE_TypeNew(); }

PyObject *PyvtkTuple_IhLi2EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IhLi2EE_Type,
    PyvtkTuple_IhLi2EE_Methods,
    PyvtkTuple_IhLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IhLi2EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IhLi2EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IhLi3EE_Doc =
  "vtkTuple<unsigned char, 3> - templated base type for containers of\nconstant size.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const unsigned char &scalar)\n"
  "explicit vtkTuple(const unsigned char *init)\n"
  "vtkTuple(const &vtkTuple<unsigned char, 3>)\n";


static PyObject *
PyvtkTuple_IhLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IhLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IhLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  vtkTuple<unsigned char, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi3EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi3EE_Methods[] = {
  {"GetSize", PyvtkTuple_IhLi3EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IhLi3EE_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: unsigned char *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IhLi3EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IhLi3EE, int) -> bool\nC++: bool Compare(const vtkTuple<unsigned char, 3> &other,\n    const unsigned char &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<unsigned char, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi3EE"))
  {
    vtkTuple<unsigned char, 3> *op = new vtkTuple<unsigned char, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi3EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IhLi3EE_vtkTuple_s2, METH_VARARGS,
   "-@B"},
  {nullptr, PyvtkTuple_IhLi3EE_vtkTuple_s3, METH_VARARGS,
   "-@P *B"},
  {nullptr, PyvtkTuple_IhLi3EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IhLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IhLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IhLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IhLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IhLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IhLi3EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IhLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<unsigned char, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IhLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IhLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const unsigned char *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IhLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 3> *op = static_cast<vtkTuple<unsigned char, 3> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IhLi3EE_AsSequence = {
  PyvtkTuple_IhLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IhLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IhLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IhLi3EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IhLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IhLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IhLi3EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IhLi3EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IhLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IhLi3EE_Doc, // tp_doc
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
  PyvtkTuple_IhLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IhLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<unsigned char, 3>(*static_cast<const vtkTuple<unsigned char, 3>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IhLi3EE_TypeNew(); }

PyObject *PyvtkTuple_IhLi3EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IhLi3EE_Type,
    PyvtkTuple_IhLi3EE_Methods,
    PyvtkTuple_IhLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IhLi3EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IhLi3EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IhLi4EE_Doc =
  "vtkTuple<unsigned char, 4> - templated base type for containers of\nconstant size.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const unsigned char &scalar)\n"
  "explicit vtkTuple(const unsigned char *init)\n"
  "vtkTuple(const &vtkTuple<unsigned char, 4>)\n";


static PyObject *
PyvtkTuple_IhLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IhLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IhLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  vtkTuple<unsigned char, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi4EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi4EE_Methods[] = {
  {"GetSize", PyvtkTuple_IhLi4EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IhLi4EE_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: unsigned char *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IhLi4EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IhLi4EE, int) -> bool\nC++: bool Compare(const vtkTuple<unsigned char, 4> &other,\n    const unsigned char &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 4;
  unsigned char temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<unsigned char, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IhLi4EE"))
  {
    vtkTuple<unsigned char, 4> *op = new vtkTuple<unsigned char, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IhLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IhLi4EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IhLi4EE_vtkTuple_s2, METH_VARARGS,
   "-@B"},
  {nullptr, PyvtkTuple_IhLi4EE_vtkTuple_s3, METH_VARARGS,
   "-@P *B"},
  {nullptr, PyvtkTuple_IhLi4EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IhLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IhLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IhLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IhLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IhLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IhLi4EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IhLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<unsigned char, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IhLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IhLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const unsigned char *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IhLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<unsigned char, 4> *op = static_cast<vtkTuple<unsigned char, 4> *>(vp);

  int temp0;
  unsigned char temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IhLi4EE_AsSequence = {
  PyvtkTuple_IhLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IhLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IhLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IhLi4EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IhLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IhLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IhLi4EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IhLi4EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IhLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IhLi4EE_Doc, // tp_doc
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
  PyvtkTuple_IhLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IhLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<unsigned char, 4>(*static_cast<const vtkTuple<unsigned char, 4>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IhLi4EE_TypeNew(); }

PyObject *PyvtkTuple_IhLi4EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IhLi4EE_Type,
    PyvtkTuple_IhLi4EE_Methods,
    PyvtkTuple_IhLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IhLi4EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IhLi4EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IiLi2EE_Doc =
  "vtkTuple<int, 2> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const int &scalar)\n"
  "explicit vtkTuple(const int *init)\n"
  "vtkTuple(const &vtkTuple<int, 2>)\n";


static PyObject *
PyvtkTuple_IiLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IiLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IiLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  vtkTuple<int, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi2EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi2EE_Methods[] = {
  {"GetSize", PyvtkTuple_IiLi2EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IiLi2EE_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: int *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IiLi2EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IiLi2EE, int) -> bool\nC++: bool Compare(const vtkTuple<int, 2> &other, const int &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<int, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi2EE"))
  {
    vtkTuple<int, 2> *op = new vtkTuple<int, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi2EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IiLi2EE_vtkTuple_s2, METH_VARARGS,
   "-@i"},
  {nullptr, PyvtkTuple_IiLi2EE_vtkTuple_s3, METH_VARARGS,
   "-@P *i"},
  {nullptr, PyvtkTuple_IiLi2EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IiLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IiLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IiLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IiLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IiLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IiLi2EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IiLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<int, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IiLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IiLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const int *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IiLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 2> *op = static_cast<vtkTuple<int, 2> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IiLi2EE_AsSequence = {
  PyvtkTuple_IiLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IiLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IiLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IiLi2EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IiLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IiLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IiLi2EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IiLi2EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IiLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IiLi2EE_Doc, // tp_doc
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
  PyvtkTuple_IiLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IiLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<int, 2>(*static_cast<const vtkTuple<int, 2>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IiLi2EE_TypeNew(); }

PyObject *PyvtkTuple_IiLi2EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IiLi2EE_Type,
    PyvtkTuple_IiLi2EE_Methods,
    PyvtkTuple_IiLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IiLi2EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IiLi2EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IiLi3EE_Doc =
  "vtkTuple<int, 3> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const int &scalar)\n"
  "explicit vtkTuple(const int *init)\n"
  "vtkTuple(const &vtkTuple<int, 3>)\n";


static PyObject *
PyvtkTuple_IiLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IiLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IiLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  vtkTuple<int, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi3EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi3EE_Methods[] = {
  {"GetSize", PyvtkTuple_IiLi3EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IiLi3EE_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: int *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IiLi3EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IiLi3EE, int) -> bool\nC++: bool Compare(const vtkTuple<int, 3> &other, const int &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<int, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi3EE"))
  {
    vtkTuple<int, 3> *op = new vtkTuple<int, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi3EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IiLi3EE_vtkTuple_s2, METH_VARARGS,
   "-@i"},
  {nullptr, PyvtkTuple_IiLi3EE_vtkTuple_s3, METH_VARARGS,
   "-@P *i"},
  {nullptr, PyvtkTuple_IiLi3EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IiLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IiLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IiLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IiLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IiLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IiLi3EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IiLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<int, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IiLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IiLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const int *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IiLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 3> *op = static_cast<vtkTuple<int, 3> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IiLi3EE_AsSequence = {
  PyvtkTuple_IiLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IiLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IiLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IiLi3EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IiLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IiLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IiLi3EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IiLi3EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IiLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IiLi3EE_Doc, // tp_doc
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
  PyvtkTuple_IiLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IiLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<int, 3>(*static_cast<const vtkTuple<int, 3>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IiLi3EE_TypeNew(); }

PyObject *PyvtkTuple_IiLi3EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IiLi3EE_Type,
    PyvtkTuple_IiLi3EE_Methods,
    PyvtkTuple_IiLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IiLi3EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IiLi3EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IiLi4EE_Doc =
  "vtkTuple<int, 4> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const int &scalar)\n"
  "explicit vtkTuple(const int *init)\n"
  "vtkTuple(const &vtkTuple<int, 4>)\n";


static PyObject *
PyvtkTuple_IiLi4EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IiLi4EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IiLi4EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  vtkTuple<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi4EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi4EE_Methods[] = {
  {"GetSize", PyvtkTuple_IiLi4EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IiLi4EE_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: int *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IiLi4EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IiLi4EE, int) -> bool\nC++: bool Compare(const vtkTuple<int, 4> &other, const int &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi4EE"))
  {
    vtkTuple<int, 4> *op = new vtkTuple<int, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IiLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IiLi4EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IiLi4EE_vtkTuple_s2, METH_VARARGS,
   "-@i"},
  {nullptr, PyvtkTuple_IiLi4EE_vtkTuple_s3, METH_VARARGS,
   "-@P *i"},
  {nullptr, PyvtkTuple_IiLi4EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IiLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IiLi4EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IiLi4EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IiLi4EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IiLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IiLi4EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IiLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<int, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IiLi4EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IiLi4EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const int *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IiLi4EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<int, 4> *op = static_cast<vtkTuple<int, 4> *>(vp);

  int temp0;
  int temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IiLi4EE_AsSequence = {
  PyvtkTuple_IiLi4EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IiLi4EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IiLi4EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IiLi4EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IiLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IiLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IiLi4EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IiLi4EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IiLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IiLi4EE_Doc, // tp_doc
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
  PyvtkTuple_IiLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IiLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<int, 4>(*static_cast<const vtkTuple<int, 4>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IiLi4EE_TypeNew(); }

PyObject *PyvtkTuple_IiLi4EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IiLi4EE_Type,
    PyvtkTuple_IiLi4EE_Methods,
    PyvtkTuple_IiLi4EE_vtkTuple_Methods,
    &PyvtkTuple_IiLi4EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IiLi4EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IfLi2EE_Doc =
  "vtkTuple<float, 2> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const float &scalar)\n"
  "explicit vtkTuple(const float *init)\n"
  "vtkTuple(const &vtkTuple<float, 2>)\n";


static PyObject *
PyvtkTuple_IfLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IfLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IfLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  vtkTuple<float, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi2EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi2EE_Methods[] = {
  {"GetSize", PyvtkTuple_IfLi2EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IfLi2EE_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: float *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IfLi2EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IfLi2EE, float) -> bool\nC++: bool Compare(const vtkTuple<float, 2> &other,\n    const float &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<float, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi2EE"))
  {
    vtkTuple<float, 2> *op = new vtkTuple<float, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi2EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IfLi2EE_vtkTuple_s2, METH_VARARGS,
   "-@f"},
  {nullptr, PyvtkTuple_IfLi2EE_vtkTuple_s3, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkTuple_IfLi2EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IfLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IfLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IfLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IfLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IfLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IfLi2EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IfLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<float, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IfLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IfLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const float *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IfLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 2> *op = static_cast<vtkTuple<float, 2> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IfLi2EE_AsSequence = {
  PyvtkTuple_IfLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IfLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IfLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IfLi2EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IfLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IfLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IfLi2EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IfLi2EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IfLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IfLi2EE_Doc, // tp_doc
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
  PyvtkTuple_IfLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IfLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<float, 2>(*static_cast<const vtkTuple<float, 2>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IfLi2EE_TypeNew(); }

PyObject *PyvtkTuple_IfLi2EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IfLi2EE_Type,
    PyvtkTuple_IfLi2EE_Methods,
    PyvtkTuple_IfLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IfLi2EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IfLi2EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IfLi3EE_Doc =
  "vtkTuple<float, 3> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const float &scalar)\n"
  "explicit vtkTuple(const float *init)\n"
  "vtkTuple(const &vtkTuple<float, 3>)\n";


static PyObject *
PyvtkTuple_IfLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IfLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IfLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  vtkTuple<float, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi3EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi3EE_Methods[] = {
  {"GetSize", PyvtkTuple_IfLi3EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IfLi3EE_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: float *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IfLi3EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IfLi3EE, float) -> bool\nC++: bool Compare(const vtkTuple<float, 3> &other,\n    const float &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<float, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi3EE"))
  {
    vtkTuple<float, 3> *op = new vtkTuple<float, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IfLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IfLi3EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IfLi3EE_vtkTuple_s2, METH_VARARGS,
   "-@f"},
  {nullptr, PyvtkTuple_IfLi3EE_vtkTuple_s3, METH_VARARGS,
   "-@P *f"},
  {nullptr, PyvtkTuple_IfLi3EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IfLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IfLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IfLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IfLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IfLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IfLi3EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IfLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<float, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IfLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IfLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const float *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkTuple_IfLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<float, 3> *op = static_cast<vtkTuple<float, 3> *>(vp);

  int temp0;
  float temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IfLi3EE_AsSequence = {
  PyvtkTuple_IfLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IfLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IfLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IfLi3EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IfLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IfLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IfLi3EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IfLi3EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IfLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IfLi3EE_Doc, // tp_doc
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
  PyvtkTuple_IfLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IfLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<float, 3>(*static_cast<const vtkTuple<float, 3>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IfLi3EE_TypeNew(); }

PyObject *PyvtkTuple_IfLi3EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IfLi3EE_Type,
    PyvtkTuple_IfLi3EE_Methods,
    PyvtkTuple_IfLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IfLi3EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IfLi3EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IdLi2EE_Doc =
  "vtkTuple<double, 2> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const double &scalar)\n"
  "explicit vtkTuple(const double *init)\n"
  "vtkTuple(const &vtkTuple<double, 2>)\n";


static PyObject *
PyvtkTuple_IdLi2EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IdLi2EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IdLi2EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  vtkTuple<double, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi2EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi2EE_Methods[] = {
  {"GetSize", PyvtkTuple_IdLi2EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IdLi2EE_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: double *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IdLi2EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IdLi2EE, float) -> bool\nC++: bool Compare(const vtkTuple<double, 2> &other,\n    const double &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<double, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi2EE"))
  {
    vtkTuple<double, 2> *op = new vtkTuple<double, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi2EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IdLi2EE_vtkTuple_s2, METH_VARARGS,
   "-@d"},
  {nullptr, PyvtkTuple_IdLi2EE_vtkTuple_s3, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkTuple_IdLi2EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IdLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IdLi2EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IdLi2EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IdLi2EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IdLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IdLi2EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IdLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<double, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IdLi2EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IdLi2EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

int PyvtkTuple_IdLi2EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 2> *op = static_cast<vtkTuple<double, 2> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IdLi2EE_AsSequence = {
  PyvtkTuple_IdLi2EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IdLi2EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IdLi2EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IdLi2EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IdLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IdLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IdLi2EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IdLi2EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IdLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IdLi2EE_Doc, // tp_doc
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
  PyvtkTuple_IdLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IdLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<double, 2>(*static_cast<const vtkTuple<double, 2>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IdLi2EE_TypeNew(); }

PyObject *PyvtkTuple_IdLi2EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IdLi2EE_Type,
    PyvtkTuple_IdLi2EE_Methods,
    PyvtkTuple_IdLi2EE_vtkTuple_Methods,
    &PyvtkTuple_IdLi2EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IdLi2EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkTuple_IdLi3EE_Doc =
  "vtkTuple<double, 3> - templated base type for containers of constant\nsize.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "vtkTuple()\n"
  "explicit vtkTuple(const double &scalar)\n"
  "explicit vtkTuple(const double *init)\n"
  "vtkTuple(const &vtkTuple<double, 3>)\n";


static PyObject *
PyvtkTuple_IdLi3EE_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IdLi3EE_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTuple_IdLi3EE_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  vtkTuple<double, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi3EE") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->Compare(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi3EE_Methods[] = {
  {"GetSize", PyvtkTuple_IdLi3EE_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nGet the size of the tuple.\n"},
  {"GetData", PyvtkTuple_IdLi3EE_GetData, METH_VARARGS,
   "V.GetData() -> (float, ...)\nC++: double *GetData()\n\nGet a pointer to the underlying data of the tuple.\n"},
  {"Compare", PyvtkTuple_IdLi3EE_Compare, METH_VARARGS,
   "V.Compare(vtkTuple_IdLi3EE, float) -> bool\nC++: bool Compare(const vtkTuple<double, 3> &other,\n    const double &tol)\n\nEquality operator with a tolerance to allow fuzzy comparisons.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTuple");

  vtkTuple<double, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi3EE"))
  {
    vtkTuple<double, 3> *op = new vtkTuple<double, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkTuple_IdLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTuple_IdLi3EE_vtkTuple_Methods[] = {
  {nullptr, PyvtkTuple_IdLi3EE_vtkTuple_s2, METH_VARARGS,
   "-@d"},
  {nullptr, PyvtkTuple_IdLi3EE_vtkTuple_s3, METH_VARARGS,
   "-@P *d"},
  {nullptr, PyvtkTuple_IdLi3EE_vtkTuple_s4, METH_VARARGS,
   "@W vtkTuple_IdLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTuple_IdLi3EE_vtkTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTuple_IdLi3EE_vtkTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTuple_IdLi3EE_vtkTuple_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTuple");
  return nullptr;
}


static PyObject *
PyvtkTuple_IdLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTuple_IdLi3EE_vtkTuple(nullptr, args);
}

static void PyvtkTuple_IdLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTuple<double, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkTuple_IdLi3EE_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  return static_cast<Py_ssize_t>(op->GetSize());
}

PyObject *PyvtkTuple_IdLi3EE_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

int PyvtkTuple_IdLi3EE_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkTuple<double, 3> *op = static_cast<vtkTuple<double, 3> *>(vp);

  int temp0;
  double temp1;
  int result = -1;

  temp0 = static_cast<int>(i);

  if (temp0 < 0 || temp0 >= op->GetSize())
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

static PySequenceMethods PyvtkTuple_IdLi3EE_AsSequence = {
  PyvtkTuple_IdLi3EE_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkTuple_IdLi3EE_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkTuple_IdLi3EE_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkTuple_IdLi3EE_Hash(PyObject *self)
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

static PyTypeObject PyvtkTuple_IdLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkTuple_IdLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTuple_IdLi3EE_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkTuple_IdLi3EE_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTuple_IdLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTuple_IdLi3EE_Doc, // tp_doc
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
  PyvtkTuple_IdLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTuple_IdLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTuple<double, 3>(*static_cast<const vtkTuple<double, 3>*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTuple_IdLi3EE_TypeNew(); }

PyObject *PyvtkTuple_IdLi3EE_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTuple_IdLi3EE_Type,
    PyvtkTuple_IdLi3EE_Methods,
    PyvtkTuple_IdLi3EE_vtkTuple_Methods,
    &PyvtkTuple_IdLi3EE_CCopy);

  PyTypeObject *pytype = &PyvtkTuple_IdLi3EE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkTuple_Doc =
  "vtkTuple - templated base type for containers of constant size.\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "tuples.\n\n"
  "\nProvided Types:\n\n"
  "  vtkTuple[float64,4] => vtkTuple<double, 4>\n"

  "  vtkTuple[float32,4] => vtkTuple<float, 4>\n"

  "  vtkTuple[uint8,2] => vtkTuple<unsigned char, 2>\n"

  "  vtkTuple[uint8,3] => vtkTuple<unsigned char, 3>\n"

  "  vtkTuple[uint8,4] => vtkTuple<unsigned char, 4>\n"

  "  vtkTuple[int32,2] => vtkTuple<int, 2>\n"

  "  vtkTuple[int32,3] => vtkTuple<int, 3>\n"

  "  vtkTuple[int32,4] => vtkTuple<int, 4>\n"

  "  vtkTuple[float32,2] => vtkTuple<float, 2>\n"

  "  vtkTuple[float32,3] => vtkTuple<float, 3>\n"

  "  vtkTuple[float64,2] => vtkTuple<double, 2>\n"

  "  vtkTuple[float64,3] => vtkTuple<double, 3>\n"
;

PyObject *PyvtkTuple_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonMathPython.vtkTuple",
                                     PyvtkTuple_Doc);

  o = PyvtkTuple_IdLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IfLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IhLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IhLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IhLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IiLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IiLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IiLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IfLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IfLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IdLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTuple_IdLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

void PyVTKAddFile_vtkTuple(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTuple_TemplateNew();

  if (o)
  {
#if PY_VERSION_HEX >= 0x03040000
    const char *methodname = "values";
#else
    char methodname[] = "values";
#endif
    PyObject *l = PyObject_CallMethod(o, methodname, nullptr);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = ((PyTypeObject *)ot)->tp_name;
      }
      else if (PyCFunction_Check(ot))
      {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
      }
      if (nt)
      {
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkTuple", o) != 0)
  {
    Py_DECREF(o);
  }

}

