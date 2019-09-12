// python wrapper for vtkSpyPlotIStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSpyPlotIStream.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpyPlotIStream(PyObject *); }

static const char *PyvtkSpyPlotIStream_Doc =
  "vtkSpyPlotIStream - vtkSpyPlotIStream represents input functionality\nrequired by the vtkSpyPlotReader and vtkSpyPlotUniReader classes.\n\n"
  "The class was factored out of vtkSpyPlotReader.cxx.  The class wraps\n"
  "an already opened istream\n\n"
  "vtkSpyPlotIStream()\n"
  "vtkSpyPlotIStream(const &vtkSpyPlotIStream)\n";


static PyObject *
PyvtkSpyPlotIStream_ReadString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ReadString(temp0, temp1);

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
PyvtkSpyPlotIStream_ReadString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ReadString(temp0, temp1);

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

static PyMethodDef PyvtkSpyPlotIStream_ReadString_Methods[] = {
  {nullptr, PyvtkSpyPlotIStream_ReadString_s1, METH_VARARGS,
   "@zK"},
  {nullptr, PyvtkSpyPlotIStream_ReadString_s2, METH_VARARGS,
   "@PK *B"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpyPlotIStream_ReadString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpyPlotIStream_ReadString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadString");
  return nullptr;
}



static PyObject *
PyvtkSpyPlotIStream_ReadInt32s(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInt32s");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ReadInt32s(temp0, temp1);

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
PyvtkSpyPlotIStream_ReadInt64s(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInt64s");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ReadInt64s(temp0, temp1);

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
PyvtkSpyPlotIStream_ReadDoubles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDoubles");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ReadDoubles(temp0, temp1);

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
PyvtkSpyPlotIStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    op->Seek(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotIStream_Tell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tell");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSpyPlotIStream *op = static_cast<vtkSpyPlotIStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->Tell();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpyPlotIStream_Methods[] = {
  {"ReadString", PyvtkSpyPlotIStream_ReadString, METH_VARARGS,
   "V.ReadString(string, int) -> int\nC++: int ReadString(char *str, size_t len)\nV.ReadString([int, ...], int) -> int\nC++: int ReadString(unsigned char *str, size_t len)\n\n"},
  {"ReadInt32s", PyvtkSpyPlotIStream_ReadInt32s, METH_VARARGS,
   "V.ReadInt32s([int, ...], int) -> int\nC++: int ReadInt32s(int *val, int num)\n\n"},
  {"ReadInt64s", PyvtkSpyPlotIStream_ReadInt64s, METH_VARARGS,
   "V.ReadInt64s([int, ...], int) -> int\nC++: int ReadInt64s(vtkTypeInt64 *val, int num)\n\n"},
  {"ReadDoubles", PyvtkSpyPlotIStream_ReadDoubles, METH_VARARGS,
   "V.ReadDoubles([float, ...], int) -> int\nC++: int ReadDoubles(double *val, int num)\n\n"},
  {"Seek", PyvtkSpyPlotIStream_Seek, METH_VARARGS,
   "V.Seek(int, bool)\nC++: void Seek(vtkTypeInt64 offset, bool rel=false)\n\n"},
  {"Tell", PyvtkSpyPlotIStream_Tell, METH_VARARGS,
   "V.Tell() -> int\nC++: vtkTypeInt64 Tell()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSpyPlotIStream_vtkSpyPlotIStream_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSpyPlotIStream");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSpyPlotIStream *op = new vtkSpyPlotIStream();

    result = PyVTKSpecialObject_New("vtkSpyPlotIStream", op);
  }

  return result;
}

static PyObject *
PyvtkSpyPlotIStream_vtkSpyPlotIStream_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSpyPlotIStream");

  vtkSpyPlotIStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkSpyPlotIStream"))
  {
    vtkSpyPlotIStream *op = new vtkSpyPlotIStream(*temp0);

    result = PyVTKSpecialObject_New("vtkSpyPlotIStream", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSpyPlotIStream_vtkSpyPlotIStream_Methods[] = {
  {nullptr, PyvtkSpyPlotIStream_vtkSpyPlotIStream_s2, METH_VARARGS,
   "@W vtkSpyPlotIStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSpyPlotIStream_vtkSpyPlotIStream(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSpyPlotIStream_vtkSpyPlotIStream_s1(self, args);
    case 1:
      return PyvtkSpyPlotIStream_vtkSpyPlotIStream_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSpyPlotIStream");
  return nullptr;
}


static PyObject *
PyvtkSpyPlotIStream_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSpyPlotIStream_vtkSpyPlotIStream(nullptr, args);
}

static void PyvtkSpyPlotIStream_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSpyPlotIStream *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSpyPlotIStream_Hash(PyObject *self)
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

static PyTypeObject PyvtkSpyPlotIStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSpyPlotIStream", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSpyPlotIStream_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSpyPlotIStream_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSpyPlotIStream_Doc, // tp_doc
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
  PyvtkSpyPlotIStream_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkSpyPlotIStream_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkSpyPlotIStream(*static_cast<const vtkSpyPlotIStream*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpyPlotIStream_TypeNew(); }

PyObject *PyvtkSpyPlotIStream_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSpyPlotIStream_Type,
    PyvtkSpyPlotIStream_Methods,
    PyvtkSpyPlotIStream_vtkSpyPlotIStream_Methods,
    &PyvtkSpyPlotIStream_CCopy);

  PyTypeObject *pytype = &PyvtkSpyPlotIStream_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpyPlotIStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpyPlotIStream_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSpyPlotIStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

