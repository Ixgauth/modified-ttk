// python wrapper for vtkTimeStamp
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkTimeStamp.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTimeStamp(PyObject *); }

static const char *PyvtkTimeStamp_Doc =
  "vtkTimeStamp - record modification and/or execution time\n\n"
  "vtkTimeStamp records a unique time when the method Modified() is\n"
  "executed. This time is guaranteed to be monotonically increasing.\n"
  "Classes use this object to record modified and/or execution time.\n"
  "There is built in support for the binary < and > comparison operators\n"
  "between two vtkTimeStamp objects.\n\n"
  "vtkTimeStamp()\n"
  "vtkTimeStamp(const &vtkTimeStamp)\n";


static PyObject *
PyvtkTimeStamp_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTimeStamp *op = static_cast<vtkTimeStamp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Modified();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeStamp_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkTimeStamp *op = static_cast<vtkTimeStamp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetMTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTimeStamp_Methods[] = {
  {"Modified", PyvtkTimeStamp_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified()\n\nSet this objects time to the current time. The current time is\njust a monotonically increasing unsigned long integer. It is\npossible for this number to wrap around back to zero. This should\nonly happen for processes that have been running for a very long\ntime, while constantly changing objects within the program. When\nthis does occur, the typical consequence should be that some\nfilters will update themselves when really they don't need to.\n"},
  {"GetMTime", PyvtkTimeStamp_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime()\n\nReturn this object's Modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTimeStamp_vtkTimeStamp_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimeStamp");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimeStamp *op = new vtkTimeStamp();

    result = PyVTKSpecialObject_New("vtkTimeStamp", op);
  }

  return result;
}

static PyObject *
PyvtkTimeStamp_vtkTimeStamp_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimeStamp");

  vtkTimeStamp *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTimeStamp"))
  {
    vtkTimeStamp *op = new vtkTimeStamp(*temp0);

    result = PyVTKSpecialObject_New("vtkTimeStamp", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTimeStamp_vtkTimeStamp_Methods[] = {
  {nullptr, PyvtkTimeStamp_vtkTimeStamp_s2, METH_VARARGS,
   "@W vtkTimeStamp"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTimeStamp_vtkTimeStamp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTimeStamp_vtkTimeStamp_s1(self, args);
    case 1:
      return PyvtkTimeStamp_vtkTimeStamp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTimeStamp");
  return nullptr;
}


static PyObject *
PyvtkTimeStamp_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTimeStamp_vtkTimeStamp(nullptr, args);
}

static void PyvtkTimeStamp_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTimeStamp *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkTimeStamp_CheckExact(PyObject *ob);

static PyObject *PyvtkTimeStamp_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkTimeStamp *so1 = nullptr;
  const vtkTimeStamp *so2 = nullptr;
  int result = -1;

  if (PyvtkTimeStamp_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkTimeStamp *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkTimeStamp *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkTimeStamp", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkTimeStamp_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkTimeStamp *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkTimeStamp *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkTimeStamp", &n2));
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
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      break;
    case Py_EQ:
      break;
    case Py_NE:
      break;
    case Py_GT:
      result = ((*so1) > (*so2));
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

static Py_hash_t PyvtkTimeStamp_Hash(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  const vtkTimeStamp *op = static_cast<const vtkTimeStamp *>(obj->vtk_ptr);
  vtkMTimeType mtime = *op;
  long h = (long)mtime;
  if (h != -1) { return h; }
  return -2;
}

static PyTypeObject PyvtkTimeStamp_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTimeStamp", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTimeStamp_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTimeStamp_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTimeStamp_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkTimeStamp_RichCompare, // tp_richcompare
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
  PyvtkTimeStamp_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkTimeStamp_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkTimeStamp_Type);
}

static void *PyvtkTimeStamp_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTimeStamp(*static_cast<const vtkTimeStamp*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTimeStamp_TypeNew(); }

PyObject *PyvtkTimeStamp_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkTimeStamp_Type,
    PyvtkTimeStamp_Methods,
    PyvtkTimeStamp_vtkTimeStamp_Methods,
    &PyvtkTimeStamp_CCopy);

  PyTypeObject *pytype = &PyvtkTimeStamp_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTimeStamp(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTimeStamp_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTimeStamp", o) != 0)
  {
    Py_DECREF(o);
  }

}

