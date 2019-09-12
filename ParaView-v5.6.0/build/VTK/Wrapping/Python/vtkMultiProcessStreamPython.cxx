// python wrapper for vtkMultiProcessStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "vtkMultiProcessStream.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiProcessStream(PyObject *); }

static const char *PyvtkMultiProcessStream_Doc =
  "vtkMultiProcessStream - stream used to pass data across processes\nusing vtkMultiProcessController.\n\n"
  "vtkMultiProcessStream is used to pass data across processes. Using\n"
  "vtkMultiProcessStream it is possible to send data whose length is not\n"
  "known at the receiving end.\n\n"
  "@warning\n"
  "Note, stream operators cannot be combined with the Push/Pop array\n"
  "operators. For example, if you push an array to the stream,\n\n"
  "vtkMultiProcessStream()\n"
  "vtkMultiProcessStream(const vtkMultiProcessStream &)\n";


static PyObject *
PyvtkMultiProcessStream_Push_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->Push(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessStream_Push_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->Push(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessStream_Push_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->Push(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessStream_Push_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    op->Push(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessStream_Push_Methods[] = {
  {nullptr, PyvtkMultiProcessStream_Push_s1, METH_VARARGS,
   "@PI *d"},
  {nullptr, PyvtkMultiProcessStream_Push_s2, METH_VARARGS,
   "@PI *i"},
  {nullptr, PyvtkMultiProcessStream_Push_s3, METH_VARARGS,
   "@zI"},
  {nullptr, PyvtkMultiProcessStream_Push_s4, METH_VARARGS,
   "@PI *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessStream_Push(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessStream_Push_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Push");
  return nullptr;
}



static PyObject *
PyvtkMultiProcessStream_Pop_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Pop(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessStream_Pop_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Pop(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessStream_Pop_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Pop(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessStream_Pop_Methods[] = {
  {nullptr, PyvtkMultiProcessStream_Pop_s1, METH_VARARGS,
   "@PI *d"},
  {nullptr, PyvtkMultiProcessStream_Pop_s2, METH_VARARGS,
   "@PI *i"},
  {nullptr, PyvtkMultiProcessStream_Pop_s3, METH_VARARGS,
   "@PI *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessStream_Pop(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessStream_Pop_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pop");
  return nullptr;
}



static PyObject *
PyvtkMultiProcessStream_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessStream_Size(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Size");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->Size();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessStream_RawSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RawSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->RawSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessStream_Empty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Empty");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Empty();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessStream_GetRawData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRawData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->GetRawData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessStream_SetRawData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRawData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMultiProcessStream *op = static_cast<vtkMultiProcessStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->SetRawData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessStream_Methods[] = {
  {"Push", PyvtkMultiProcessStream_Push, METH_VARARGS,
   "V.Push([float, ...], int)\nC++: void Push(double array[], unsigned int size)\nV.Push([int, ...], int)\nC++: void Push(int array[], unsigned int size)\nV.Push(string, int)\nC++: void Push(char array[], unsigned int size)\nV.Push([int, ...], int)\nC++: void Push(vtkTypeInt64 array[], unsigned int size)\n\nAdd-array-to-stream methods. Adds to the end of the stream\n"},
  {"Pop", PyvtkMultiProcessStream_Pop, METH_VARARGS,
   "V.Pop([float, ...], int)\nC++: void Pop(double *&array, unsigned int &size)\nV.Pop([int, ...], int)\nC++: void Pop(int *&array, unsigned int &size)\nV.Pop([int, ...], int)\nC++: void Pop(vtkTypeInt64 *&array, unsigned int &size)\n\nRemove-array-to-stream methods. Removes from the head of the\nstream. Note: If the input array is nullptr, the array will be\nallocated internally and the calling application is responsible\nfor properly de-allocating it. If the input array is not nullptr,\nit is expected to match the size of the data internally, and this\nmethod would just fill in the data.\n"},
  {"Reset", PyvtkMultiProcessStream_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nClears everything in the stream.\n"},
  {"Size", PyvtkMultiProcessStream_Size, METH_VARARGS,
   "V.Size() -> int\nC++: int Size()\n\nReturns the size of the stream.\n"},
  {"RawSize", PyvtkMultiProcessStream_RawSize, METH_VARARGS,
   "V.RawSize() -> int\nC++: int RawSize()\n\nReturns the size of the raw data returned by GetRawData. This\nincludes 1 byte to store the endian type.\n"},
  {"Empty", PyvtkMultiProcessStream_Empty, METH_VARARGS,
   "V.Empty() -> bool\nC++: bool Empty()\n\nReturns true iff the stream is empty.\n"},
  {"GetRawData", PyvtkMultiProcessStream_GetRawData, METH_VARARGS,
   "V.GetRawData([int, ...], int)\nC++: void GetRawData(unsigned char *&data, unsigned int &size)\n\nSerialization methods used to save/restore the stream to/from raw\ndata. Note: The 1st byte of the raw data buffer consists of the\nendian type.\n"},
  {"SetRawData", PyvtkMultiProcessStream_SetRawData, METH_VARARGS,
   "V.SetRawData((int, ...), int)\nC++: void SetRawData(const unsigned char *, unsigned int size)\n\nSerialization methods used to save/restore the stream to/from raw\ndata. Note: The 1st byte of the raw data buffer consists of the\nendian type.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMultiProcessStream_vtkMultiProcessStream_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMultiProcessStream");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMultiProcessStream *op = new vtkMultiProcessStream();

    result = PyVTKSpecialObject_New("vtkMultiProcessStream", op);
  }

  return result;
}

static PyObject *
PyvtkMultiProcessStream_vtkMultiProcessStream_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMultiProcessStream");

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMultiProcessStream"))
  {
    vtkMultiProcessStream *op = new vtkMultiProcessStream(*temp0);

    result = PyVTKSpecialObject_New("vtkMultiProcessStream", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMultiProcessStream_vtkMultiProcessStream_Methods[] = {
  {nullptr, PyvtkMultiProcessStream_vtkMultiProcessStream_s2, METH_VARARGS,
   "@W vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessStream_vtkMultiProcessStream(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMultiProcessStream_vtkMultiProcessStream_s1(self, args);
    case 1:
      return PyvtkMultiProcessStream_vtkMultiProcessStream_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMultiProcessStream");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessStream_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMultiProcessStream_vtkMultiProcessStream(nullptr, args);
}

static void PyvtkMultiProcessStream_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMultiProcessStream *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMultiProcessStream_Hash(PyObject *self)
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

static PyTypeObject PyvtkMultiProcessStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkMultiProcessStream", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMultiProcessStream_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMultiProcessStream_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMultiProcessStream_Doc, // tp_doc
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
  PyvtkMultiProcessStream_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMultiProcessStream_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMultiProcessStream(*static_cast<const vtkMultiProcessStream*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiProcessStream_TypeNew(); }

PyObject *PyvtkMultiProcessStream_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMultiProcessStream_Type,
    PyvtkMultiProcessStream_Methods,
    PyvtkMultiProcessStream_vtkMultiProcessStream_Methods,
    &PyvtkMultiProcessStream_CCopy);

  PyTypeObject *pytype = &PyvtkMultiProcessStream_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiProcessStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiProcessStream_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiProcessStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

