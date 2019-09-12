// python wrapper for vtkArrayExtentsList
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArrayExtents.h"
#include "vtkArrayExtentsList.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayExtentsList(PyObject *); }

static const char *PyvtkArrayExtentsList_Doc =
  "vtkArrayExtentsList - Stores a collection of vtkArrayExtents objects.\n\n"
  "vtkArrayExtentsList provides storage for a collection of\n"
  "vtkArrayExtents instances.  Constructors are provided for creating\n"
  "collections containing one, two, three, or four slices.  To work with\n"
  "larger numbers of slices, use the default constructor, the SetCount()\n"
  "method, and operator[].\n\n"
  "vtkArrayExtentsList is most commonly used with the vtkInterpolate()\n"
  "function, which is used to computed weighted sums of vtkArray slices.\n\n"
  "@sa\n"
  "vtkArray, vtkExtents\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "vtkArrayExtentsList()\n"
  "vtkArrayExtentsList(const vtkArrayExtents &i)\n"
  "vtkArrayExtentsList(const vtkArrayExtents &i,\n    const vtkArrayExtents &j)\n"
  "vtkArrayExtentsList(const vtkArrayExtents &i,\n    const vtkArrayExtents &j, const vtkArrayExtents &k)\n"
  "vtkArrayExtentsList(const vtkArrayExtents &i,\n    const vtkArrayExtents &j, const vtkArrayExtents &k,\n    const vtkArrayExtents &l)\n"
  "vtkArrayExtentsList(const &vtkArrayExtentsList)\n";


static PyObject *
PyvtkArrayExtentsList_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

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
PyvtkArrayExtentsList_SetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCount");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

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

static PyMethodDef PyvtkArrayExtentsList_Methods[] = {
  {"GetCount", PyvtkArrayExtentsList_GetCount, METH_VARARGS,
   "V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of slices stored in this collection.\n"},
  {"SetCount", PyvtkArrayExtentsList_SetCount, METH_VARARGS,
   "V.SetCount(int)\nC++: void SetCount(vtkIdType count)\n\nSets the number of extents stored in this collection.  Note: all\nextents will be empty after calling SetCount(), use operator[] to\nassign extents to each item in the collection.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayExtentsList *op = new vtkArrayExtentsList();

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
  }

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkArrayExtents *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayExtents"))
  {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0, *temp1);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkArrayExtents *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayExtents *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayExtents"))
  {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0, *temp1, *temp2);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkArrayExtents *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayExtents *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkArrayExtents *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayExtents") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkArrayExtents"))
  {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0, *temp1, *temp2, *temp3);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayExtentsList");

  vtkArrayExtentsList *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtentsList"))
  {
    vtkArrayExtentsList *op = new vtkArrayExtentsList(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayExtentsList", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayExtentsList_vtkArrayExtentsList_Methods[] = {
  {nullptr, PyvtkArrayExtentsList_vtkArrayExtentsList_s2, METH_VARARGS,
   "@W vtkArrayExtents"},
  {nullptr, PyvtkArrayExtentsList_vtkArrayExtentsList_s6, METH_VARARGS,
   "@W vtkArrayExtentsList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayExtentsList_vtkArrayExtentsList(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayExtentsList_vtkArrayExtentsList_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s1(self, args);
    case 2:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s3(self, args);
    case 3:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s4(self, args);
    case 4:
      return PyvtkArrayExtentsList_vtkArrayExtentsList_s5(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayExtentsList");
  return nullptr;
}


static PyObject *
PyvtkArrayExtentsList_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayExtentsList_vtkArrayExtentsList(nullptr, args);
}

static void PyvtkArrayExtentsList_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayExtentsList *>(obj->vtk_ptr);
  PyObject_Del(self);
}

Py_ssize_t PyvtkArrayExtentsList_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  return static_cast<Py_ssize_t>(op->GetCount());
}

PyObject *PyvtkArrayExtentsList_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const vtkArrayExtents *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}

int PyvtkArrayExtentsList_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayExtentsList *op = static_cast<vtkArrayExtentsList *>(vp);

  vtkIdType temp0;
  vtkArrayExtents *temp1 = nullptr;
  int result = -1;

  temp0 = static_cast<vtkIdType>(i);

  if (temp0 < 0 || temp0 >= op->GetCount())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else if (vtkPythonArgs::GetSpecialObject(arg1, temp1, "vtkArrayExtents"))
  {
    (*op)[temp0] = *temp1;

    if (PyErr_Occurred() == nullptr)
    {
      result = 0;
    }
  }

  return result;
}

static PySequenceMethods PyvtkArrayExtentsList_AsSequence = {
  PyvtkArrayExtentsList_SequenceSize, // sq_length
  0, // sq_concat
  0, // sq_repeat
  PyvtkArrayExtentsList_SequenceItem, // sq_item
  0, // sq_slice
  PyvtkArrayExtentsList_SequenceSetItem, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static Py_hash_t PyvtkArrayExtentsList_Hash(PyObject *self)
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

static PyTypeObject PyvtkArrayExtentsList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayExtentsList", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayExtentsList_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  &PyvtkArrayExtentsList_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayExtentsList_Hash, // tp_hash
  nullptr, // tp_call
  PyVTKSpecialObject_SequenceString, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayExtentsList_Doc, // tp_doc
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
  PyvtkArrayExtentsList_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkArrayExtentsList_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayExtentsList(*static_cast<const vtkArrayExtentsList*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayExtentsList_TypeNew(); }

PyObject *PyvtkArrayExtentsList_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkArrayExtentsList_Type,
    PyvtkArrayExtentsList_Methods,
    PyvtkArrayExtentsList_vtkArrayExtentsList_Methods,
    &PyvtkArrayExtentsList_CCopy);

  PyTypeObject *pytype = &PyvtkArrayExtentsList_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayExtentsList(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayExtentsList_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayExtentsList", o) != 0)
  {
    Py_DECREF(o);
  }

}

