// python wrapper for vtkClientServerStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkClientServerID.h"
#include "vtkStdString.h"
#include "vtkIndent.h"
#include "vtkClientServerStream.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientServerStream(PyObject *); }

static const char *PyvtkClientServerStream_Doc =
  "vtkClientServerStream - Store messages for the interpreter.\n\n"
  "vtkClientServerStream will store zero or more almost arbitrary\n"
  "messages in a platform-independent manner.  The stream's data may be\n"
  "copied from one platform to another via GetData/SetData methods, and\n"
  "the message represented will remain unchanged.  Messages are used to\n"
  "represent both commands and results for vtkClientServerInterpreter,\n"
  "but they may be used for any purpose.\n\n"
  "vtkClientServerStream(vtkObjectBase *owner=0)\n"
  "vtkClientServerStream(const vtkClientServerStream &,\n    vtkObjectBase *owner=0)\n"
  "vtkClientServerStream(const &vtkClientServerStream)\n";

static PyTypeObject PyvtkClientServerStream_Commands_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkClientServerPython.vtkClientServerStream.Commands", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkClientServerStream_Commands_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkClientServerStream_Commands_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkClientServerStream_Commands_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkClientServerStream_Types_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkClientServerPython.vtkClientServerStream.Types", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkClientServerStream_Types_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkClientServerStream_Types_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkClientServerStream_Types_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkClientServerStream_Reserve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reserve");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Reserve(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

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
PyvtkClientServerStream_GetNumberOfMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMessages");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfMessages();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkClientServerStream::Commands tempr = op->GetCommand(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetNumberOfArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArguments");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetNumberOfArguments(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetArgumentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgumentType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkClientServerStream::Types tempr = op->GetArgumentType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetArgument_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<bool> store2(2*size2);
  bool *temp2 = store2.Data();
  bool *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetStringSize(2);
  vtkPythonArgs::Array<char> store2(2*size2 + 1);
  char *temp2 = store2.Data();
  char *save2 = temp2 + size2 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long> store2(2*size2);
  long *temp2 = store2.Data();
  long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetStringSize(2);
  vtkPythonArgs::Array<char> store2(2*size2 + 1);
  char *temp2 = store2.Data();
  char *save2 = temp2 + size2 + 1;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long> store2(2*size2);
  long *temp2 = store2.Data();
  long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetArgument_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgument(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerStream_GetArgument_Methods[] = {
  {nullptr, PyvtkClientServerStream_GetArgument_s1, METH_VARARGS,
   "@iiP *q"},
  {nullptr, PyvtkClientServerStream_GetArgument_s2, METH_VARARGS,
   "@iiz"},
  {nullptr, PyvtkClientServerStream_GetArgument_s3, METH_VARARGS,
   "@iiP *i"},
  {nullptr, PyvtkClientServerStream_GetArgument_s4, METH_VARARGS,
   "@iiP *l"},
  {nullptr, PyvtkClientServerStream_GetArgument_s5, METH_VARARGS,
   "@iiP *d"},
  {nullptr, PyvtkClientServerStream_GetArgument_s6, METH_VARARGS,
   "@iiP *k"},
  {nullptr, PyvtkClientServerStream_GetArgument_s7, METH_VARARGS,
   "@iizI"},
  {nullptr, PyvtkClientServerStream_GetArgument_s8, METH_VARARGS,
   "@iiPI *i"},
  {nullptr, PyvtkClientServerStream_GetArgument_s9, METH_VARARGS,
   "@iiPI *l"},
  {nullptr, PyvtkClientServerStream_GetArgument_s10, METH_VARARGS,
   "@iiPI *d"},
  {nullptr, PyvtkClientServerStream_GetArgument_s11, METH_VARARGS,
   "@iiPI *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkClientServerStream_GetArgument(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkClientServerStream_GetArgument_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArgument");
  return nullptr;
}



static PyObject *
PyvtkClientServerStream_GetArgumentLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgumentLength");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(2*size2);
  unsigned int *temp2 = store2.Data();
  unsigned int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->GetArgumentLength(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = op->SetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetStringFromType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromType");

  vtkClientServerStream::Types temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkClientServerStream.Types"))
  {
    const char *tempr = vtkClientServerStream::GetStringFromType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetStringFromType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromType");

  vtkClientServerStream::Types temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkClientServerStream.Types") &&
      ap.GetValue(temp1))
  {
    const char *tempr = vtkClientServerStream::GetStringFromType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_GetStringFromType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkClientServerStream_GetStringFromType_s1(self, args);
    case 2:
      return PyvtkClientServerStream_GetStringFromType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStringFromType");
  return nullptr;
}



static PyObject *
PyvtkClientServerStream_GetTypeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkClientServerStream::Types tempr = vtkClientServerStream::GetTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetStringFromCommand(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromCommand");

  vtkClientServerStream::Commands temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkClientServerStream.Commands"))
  {
    const char *tempr = vtkClientServerStream::GetStringFromCommand(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_GetCommandFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCommandFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkClientServerStream::Commands tempr = vtkClientServerStream::GetCommandFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_StreamToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamToString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->StreamToString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerStream_StreamFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamFromString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkClientServerStream *op = static_cast<vtkClientServerStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->StreamFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerStream_Methods[] = {
  {"Reserve", PyvtkClientServerStream_Reserve, METH_VARARGS,
   "V.Reserve(int)\nC++: void Reserve(size_t size)\n\nAsk the stream to allocate at least the given size in memory to\navoid too many reallocations during stream construction.\n"},
  {"Reset", PyvtkClientServerStream_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the stream to an empty state.\n"},
  {"GetNumberOfMessages", PyvtkClientServerStream_GetNumberOfMessages, METH_VARARGS,
   "V.GetNumberOfMessages() -> int\nC++: int GetNumberOfMessages()\n\nGet the number of complete messages currently stored in the\nstream.\n"},
  {"GetCommand", PyvtkClientServerStream_GetCommand, METH_VARARGS,
   "V.GetCommand(int) -> vtkClientServerStream.Commands\nC++: vtkClientServerStream::Commands GetCommand(int message)\n\nGet the command in the message with the given index.  Returns\nEndOfCommands if the given index is out of range.\n"},
  {"GetNumberOfArguments", PyvtkClientServerStream_GetNumberOfArguments, METH_VARARGS,
   "V.GetNumberOfArguments(int) -> int\nC++: int GetNumberOfArguments(int message)\n\nGet the number of arguments in the message with the given index.\nReturns a value less than 0 if the given index is out of range.\n"},
  {"GetArgumentType", PyvtkClientServerStream_GetArgumentType, METH_VARARGS,
   "V.GetArgumentType(int, int) -> vtkClientServerStream.Types\nC++: vtkClientServerStream::Types GetArgumentType(int message,\n    int argument)\n\nGet the type of the given argument in the given message.  Returns\nEnd if either index is out of range.\n"},
  {"GetArgument", PyvtkClientServerStream_GetArgument, METH_VARARGS,
   "V.GetArgument(int, int, [bool, ...]) -> int\nC++: int GetArgument(int message, int argument, bool *value)\nV.GetArgument(int, int, string) -> int\nC++: int GetArgument(int message, int argument, char *value)\nV.GetArgument(int, int, [int, ...]) -> int\nC++: int GetArgument(int message, int argument, int *value)\nV.GetArgument(int, int, [int, ...]) -> int\nC++: int GetArgument(int message, int argument, long *value)\nV.GetArgument(int, int, [float, ...]) -> int\nC++: int GetArgument(int message, int argument, double *value)\nV.GetArgument(int, int, [int, ...]) -> int\nC++: int GetArgument(int message, int argument, long long *value)\nV.GetArgument(int, int, string, int) -> int\nC++: int GetArgument(int message, int argument, char *value,\n    vtkTypeUInt32 length)\nV.GetArgument(int, int, [int, ...], int) -> int\nC++: int GetArgument(int message, int argument, int *value,\n    vtkTypeUInt32 length)\nV.GetArgument(int, int, [int, ...], int) -> int\nC++: int GetArgument(int message, int argument, long *value,\n    vtkTypeUInt32 length)\nV.GetArgument(int, int, [float, ...], int) -> int\nC++: int GetArgument(int message, int argument, double *value,\n    vtkTypeUInt32 length)\nV.GetArgument(int, int, [int, ...], int) -> int\nC++: int GetArgument(int message, int argument, long long *value,\n    vtkTypeUInt32 length)\n\nGet the value of the given argument in the given message. Returns\nwhether the argument could be converted to the requested type.\n"},
  {"GetArgumentLength", PyvtkClientServerStream_GetArgumentLength, METH_VARARGS,
   "V.GetArgumentLength(int, int, [int, ...]) -> int\nC++: int GetArgumentLength(int message, int argument,\n    vtkTypeUInt32 *length)\n\nGet the length of an argument of an array type.  Returns whether\nthe argument is really an array type.\n"},
  {"SetData", PyvtkClientServerStream_SetData, METH_VARARGS,
   "V.SetData((int, ...), int) -> int\nC++: int SetData(const unsigned char *data, size_t length)\n\nConstruct the entire stream from the given data.  This destroys\nany data already in the stream.  Returns whether the stream is\ndeemed valid.  In the case of 0, the stream will have been reset.\n"},
  {"GetStringFromType", PyvtkClientServerStream_GetStringFromType, METH_VARARGS,
   "V.GetStringFromType(vtkClientServerStream.Types) -> string\nC++: static const char *GetStringFromType(\n    vtkClientServerStream::Types type)\nV.GetStringFromType(vtkClientServerStream.Types, int) -> string\nC++: static const char *GetStringFromType(\n    vtkClientServerStream::Types type, int index)\n\nGet a string describing the given type.  Returns \"unknown\" if the\ntype value is invalid.  If the type has multiple possible names,\nthe second argument can be used to specify the index of the name\nto use.  The higher the index, the more shorthand the name.  If\nthe index is too high, the last name is used.\n"},
  {"GetTypeFromString", PyvtkClientServerStream_GetTypeFromString, METH_VARARGS,
   "V.GetTypeFromString(string) -> vtkClientServerStream.Types\nC++: static vtkClientServerStream::Types GetTypeFromString(\n    const char *name)\n\nGet the type named by the given string.  Returns\nvtkClientServerStream::End if the type string is not recognized.\n"},
  {"GetStringFromCommand", PyvtkClientServerStream_GetStringFromCommand, METH_VARARGS,
   "V.GetStringFromCommand(vtkClientServerStream.Commands) -> string\nC++: static const char *GetStringFromCommand(\n    vtkClientServerStream::Commands cmd)\n\nGet a string describing the given command.  Returns \"unknown\" if\nthe command value is invalid.\n"},
  {"GetCommandFromString", PyvtkClientServerStream_GetCommandFromString, METH_VARARGS,
   "V.GetCommandFromString(string) -> vtkClientServerStream.Commands\nC++: static vtkClientServerStream::Commands GetCommandFromString(\n    const char *name)\n\nGet the command named by the given string.  Returns\nvtkClientServerStream::EndOfCommands if the string is not\nrecognized.\n"},
  {"StreamToString", PyvtkClientServerStream_StreamToString, METH_VARARGS,
   "V.StreamToString() -> string\nC++: const char *StreamToString()\n\nConvert the stream to a string-based encoding.\n"},
  {"StreamFromString", PyvtkClientServerStream_StreamFromString, METH_VARARGS,
   "V.StreamFromString(string) -> int\nC++: int StreamFromString(const char *str)\n\nSet the stream by parsing the given string.  The syntax of the\nstring must be that produced by the StreamToString method.\nReturns 1 if the string is successfully parsed and 0 otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkClientServerStream_vtkClientServerStream_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerStream");

  vtkObjectBase *temp0 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkObjectBase")))
  {
    vtkClientServerStream *op = new vtkClientServerStream(temp0);

    result = PyVTKSpecialObject_New("vtkClientServerStream", op);
  }

  return result;
}

static PyObject *
PyvtkClientServerStream_vtkClientServerStream_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerStream");

  vtkClientServerStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkObjectBase *temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerStream") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkObjectBase")))
  {
    vtkClientServerStream *op = new vtkClientServerStream(*temp0, temp1);

    result = PyVTKSpecialObject_New("vtkClientServerStream", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkClientServerStream_vtkClientServerStream_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkClientServerStream");

  vtkClientServerStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkClientServerStream"))
  {
    vtkClientServerStream *op = new vtkClientServerStream(*temp0);

    result = PyVTKSpecialObject_New("vtkClientServerStream", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkClientServerStream_vtkClientServerStream_Methods[] = {
  {nullptr, PyvtkClientServerStream_vtkClientServerStream_s1, METH_VARARGS,
   "@|V *vtkObjectBase"},
  {nullptr, PyvtkClientServerStream_vtkClientServerStream_s2, METH_VARARGS,
   "@W|V vtkClientServerStream *vtkObjectBase"},
  {nullptr, PyvtkClientServerStream_vtkClientServerStream_s3, METH_VARARGS,
   "@W vtkClientServerStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkClientServerStream_vtkClientServerStream(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkClientServerStream_vtkClientServerStream_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkClientServerStream_vtkClientServerStream_s1(self, args);
    case 2:
      return PyvtkClientServerStream_vtkClientServerStream_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkClientServerStream");
  return nullptr;
}


static PyObject *
PyvtkClientServerStream_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkClientServerStream_vtkClientServerStream(nullptr, args);
}

static void PyvtkClientServerStream_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkClientServerStream *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkClientServerStream_Hash(PyObject *self)
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

static PyTypeObject PyvtkClientServerStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkClientServerPython.vtkClientServerStream", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkClientServerStream_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkClientServerStream_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkClientServerStream_Doc, // tp_doc
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
  PyvtkClientServerStream_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkClientServerStream_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkClientServerStream(*static_cast<const vtkClientServerStream*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerStream_TypeNew(); }

PyObject *PyvtkClientServerStream_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkClientServerStream_Type,
    PyvtkClientServerStream_Methods,
    PyvtkClientServerStream_vtkClientServerStream_Methods,
    &PyvtkClientServerStream_CCopy);

  PyTypeObject *pytype = &PyvtkClientServerStream_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkClientServerStream_Commands_Type);
  PyvtkClientServerStream_Commands_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkClientServerStream_Commands_Type);

  o = (PyObject *)&PyvtkClientServerStream_Commands_Type;
  if (PyDict_SetItemString(d, "Commands", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkClientServerStream_Types_Type);
  PyvtkClientServerStream_Types_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkClientServerStream_Types_Type);

  o = (PyObject *)&PyvtkClientServerStream_Types_Type;
  if (PyDict_SetItemString(d, "Types", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkClientServerStream::Commands cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "New", vtkClientServerStream::New },
        { "Invoke", vtkClientServerStream::Invoke },
        { "Delete", vtkClientServerStream::Delete },
        { "Assign", vtkClientServerStream::Assign },
        { "Reply", vtkClientServerStream::Reply },
        { "Error", vtkClientServerStream::Error },
        { "EndOfCommands", vtkClientServerStream::EndOfCommands },
      };

    o = PyvtkClientServerStream_Commands_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 27; c++)
  {
    typedef vtkClientServerStream::Types cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[27] = {
        { "int8_value", vtkClientServerStream::int8_value },
        { "int8_array", vtkClientServerStream::int8_array },
        { "int16_value", vtkClientServerStream::int16_value },
        { "int16_array", vtkClientServerStream::int16_array },
        { "int32_value", vtkClientServerStream::int32_value },
        { "int32_array", vtkClientServerStream::int32_array },
        { "int64_value", vtkClientServerStream::int64_value },
        { "int64_array", vtkClientServerStream::int64_array },
        { "uint8_value", vtkClientServerStream::uint8_value },
        { "uint8_array", vtkClientServerStream::uint8_array },
        { "uint16_value", vtkClientServerStream::uint16_value },
        { "uint16_array", vtkClientServerStream::uint16_array },
        { "uint32_value", vtkClientServerStream::uint32_value },
        { "uint32_array", vtkClientServerStream::uint32_array },
        { "uint64_value", vtkClientServerStream::uint64_value },
        { "uint64_array", vtkClientServerStream::uint64_array },
        { "float32_value", vtkClientServerStream::float32_value },
        { "float32_array", vtkClientServerStream::float32_array },
        { "float64_value", vtkClientServerStream::float64_value },
        { "float64_array", vtkClientServerStream::float64_array },
        { "bool_value", vtkClientServerStream::bool_value },
        { "string_value", vtkClientServerStream::string_value },
        { "id_value", vtkClientServerStream::id_value },
        { "vtk_object_pointer", vtkClientServerStream::vtk_object_pointer },
        { "stream_value", vtkClientServerStream::stream_value },
        { "LastResult", vtkClientServerStream::LastResult },
        { "End", vtkClientServerStream::End },
      };

    o = PyvtkClientServerStream_Types_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClientServerStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientServerStream_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

