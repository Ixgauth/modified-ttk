// python wrapper for vtkCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkCommunicator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommunicator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCommunicator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCommunicator_Doc =
  "vtkCommunicator - Used to send/receive messages in a multiprocess\nenvironment.\n\n"
  "Superclass: vtkObject\n\n"
  "This is an abstract class which contains functionality for sending\n"
  "and receiving inter-process messages. It contains methods for\n"
  "marshaling an object into a string (currently used by the MPI\n"
  "communicator but not the shared memory communicator).\n\n"
  "@warning\n"
  "Communication between systems with different vtkIdTypes is not\n"
  "supported. All machines have to have the same vtkIdType.\n\n"
  "@sa\n"
  "vtkMPICommunicator\n\n";

static PyTypeObject PyvtkCommunicator_Tags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkCommunicator.Tags", // tp_name
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

PyObject *PyvtkCommunicator_Tags_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCommunicator_Tags_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCommunicator_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkCommunicator_StandardOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkCommunicator.StandardOperations", // tp_name
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

PyObject *PyvtkCommunicator_StandardOperations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCommunicator_StandardOperations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCommunicator_StandardOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCommunicator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommunicator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCommunicator *tempr = vtkCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommunicator::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfProcesses(temp0);
    }
    else
    {
      op->vtkCommunicator::SetNumberOfProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkCommunicator::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkCommunicator::GetLocalProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkCommunicator::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkCommunicator::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(*temp0, temp1, temp2) :
      op->vtkCommunicator::Send(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCommunicator_Send_Methods[] = {
  {nullptr, PyvtkCommunicator_Send_s1, METH_VARARGS,
   "@Vii *vtkDataObject"},
  {nullptr, PyvtkCommunicator_Send_s2, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {nullptr, PyvtkCommunicator_Send_s3, METH_VARARGS,
   "@Pkii *i"},
  {nullptr, PyvtkCommunicator_Send_s4, METH_VARARGS,
   "@Pkii *l"},
  {nullptr, PyvtkCommunicator_Send_s5, METH_VARARGS,
   "@zkii"},
  {nullptr, PyvtkCommunicator_Send_s6, METH_VARARGS,
   "@Pkii *d"},
  {nullptr, PyvtkCommunicator_Send_s7, METH_VARARGS,
   "@Pkii *k"},
  {nullptr, PyvtkCommunicator_Send_s8, METH_VARARGS,
   "@Wii vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = op->SendVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(*temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Receive_Methods[] = {
  {nullptr, PyvtkCommunicator_Receive_s1, METH_VARARGS,
   "@Vii *vtkDataObject"},
  {nullptr, PyvtkCommunicator_Receive_s2, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {nullptr, PyvtkCommunicator_Receive_s3, METH_VARARGS,
   "@Pkii *i"},
  {nullptr, PyvtkCommunicator_Receive_s4, METH_VARARGS,
   "@Pkii *l"},
  {nullptr, PyvtkCommunicator_Receive_s5, METH_VARARGS,
   "@zkii"},
  {nullptr, PyvtkCommunicator_Receive_s6, METH_VARARGS,
   "@Pkii *d"},
  {nullptr, PyvtkCommunicator_Receive_s7, METH_VARARGS,
   "@Pkii *k"},
  {nullptr, PyvtkCommunicator_Receive_s8, METH_VARARGS,
   "@Wii &vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ReceiveDataObject(temp0, temp1) :
      op->vtkCommunicator::ReceiveDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCount() :
      op->vtkCommunicator::GetCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Barrier();
    }
    else
    {
      op->vtkCommunicator::Barrier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkCommunicator::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkCommunicator::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(*temp0, temp1) :
      op->vtkCommunicator::Broadcast(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Broadcast_Methods[] = {
  {nullptr, PyvtkCommunicator_Broadcast_s1, METH_VARARGS,
   "@Pki *i"},
  {nullptr, PyvtkCommunicator_Broadcast_s2, METH_VARARGS,
   "@Pki *l"},
  {nullptr, PyvtkCommunicator_Broadcast_s3, METH_VARARGS,
   "@zki"},
  {nullptr, PyvtkCommunicator_Broadcast_s4, METH_VARARGS,
   "@Pki *d"},
  {nullptr, PyvtkCommunicator_Broadcast_s5, METH_VARARGS,
   "@Pki *k"},
  {nullptr, PyvtkCommunicator_Broadcast_s6, METH_VARARGS,
   "@Vi *vtkDataObject"},
  {nullptr, PyvtkCommunicator_Broadcast_s7, METH_VARARGS,
   "@Vi *vtkDataArray"},
  {nullptr, PyvtkCommunicator_Broadcast_s8, METH_VARARGS,
   "@Wi &vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Gather_Methods[] = {
  {nullptr, PyvtkCommunicator_Gather_s1, METH_VARARGS,
   "@PPki *i *i"},
  {nullptr, PyvtkCommunicator_Gather_s2, METH_VARARGS,
   "@PPki *l *l"},
  {nullptr, PyvtkCommunicator_Gather_s3, METH_VARARGS,
   "@zzki"},
  {nullptr, PyvtkCommunicator_Gather_s4, METH_VARARGS,
   "@PPki *d *d"},
  {nullptr, PyvtkCommunicator_Gather_s5, METH_VARARGS,
   "@PPki *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_Gather_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_GatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_GatherV_Methods[] = {
  {nullptr, PyvtkCommunicator_GatherV_s1, METH_VARARGS,
   "@PPkPPi *i *i *k *k"},
  {nullptr, PyvtkCommunicator_GatherV_s2, METH_VARARGS,
   "@PPkPPi *l *l *k *k"},
  {nullptr, PyvtkCommunicator_GatherV_s3, METH_VARARGS,
   "@zzkPPi *k *k"},
  {nullptr, PyvtkCommunicator_GatherV_s4, METH_VARARGS,
   "@PPkPPi *d *d *k *k"},
  {nullptr, PyvtkCommunicator_GatherV_s5, METH_VARARGS,
   "@PPkPPi *k *k *k *k"},
  {nullptr, PyvtkCommunicator_GatherV_s6, METH_VARARGS,
   "@VVPPi *vtkDataArray *vtkDataArray *k *k"},
  {nullptr, PyvtkCommunicator_GatherV_s7, METH_VARARGS,
   "@VVVVi *vtkDataArray *vtkDataArray *vtkIdTypeArray *vtkIdTypeArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_GatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_GatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_GatherV_s8(self, args);
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GatherV");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Scatter_Methods[] = {
  {nullptr, PyvtkCommunicator_Scatter_s1, METH_VARARGS,
   "@PPki *i *i"},
  {nullptr, PyvtkCommunicator_Scatter_s2, METH_VARARGS,
   "@PPki *l *l"},
  {nullptr, PyvtkCommunicator_Scatter_s3, METH_VARARGS,
   "@zzki"},
  {nullptr, PyvtkCommunicator_Scatter_s4, METH_VARARGS,
   "@PPki *d *d"},
  {nullptr, PyvtkCommunicator_Scatter_s5, METH_VARARGS,
   "@PPki *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Scatter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Scatter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_Scatter_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_ScatterV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkIdType temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_ScatterV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkIdType temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_ScatterV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkIdType temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_ScatterV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkIdType temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_ScatterV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkIdType temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_ScatterV_Methods[] = {
  {nullptr, PyvtkCommunicator_ScatterV_s1, METH_VARARGS,
   "@PPPPki *i *i *k *k"},
  {nullptr, PyvtkCommunicator_ScatterV_s2, METH_VARARGS,
   "@PPPPki *l *l *k *k"},
  {nullptr, PyvtkCommunicator_ScatterV_s3, METH_VARARGS,
   "@zzPPki *k *k"},
  {nullptr, PyvtkCommunicator_ScatterV_s4, METH_VARARGS,
   "@PPPPki *d *d *k *k"},
  {nullptr, PyvtkCommunicator_ScatterV_s5, METH_VARARGS,
   "@PPPPki *k *k *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_ScatterV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_ScatterV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ScatterV");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkCommunicator::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllGather_Methods[] = {
  {nullptr, PyvtkCommunicator_AllGather_s1, METH_VARARGS,
   "@PPk *i *i"},
  {nullptr, PyvtkCommunicator_AllGather_s2, METH_VARARGS,
   "@PPk *l *l"},
  {nullptr, PyvtkCommunicator_AllGather_s3, METH_VARARGS,
   "@zzk"},
  {nullptr, PyvtkCommunicator_AllGather_s4, METH_VARARGS,
   "@PPk *d *d"},
  {nullptr, PyvtkCommunicator_AllGather_s5, METH_VARARGS,
   "@PPk *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_AllGather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllGather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCommunicator_AllGather_s6(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_AllGatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1) :
      op->vtkCommunicator::AllGatherV(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllGatherV_Methods[] = {
  {nullptr, PyvtkCommunicator_AllGatherV_s1, METH_VARARGS,
   "@PPkPP *i *i *k *k"},
  {nullptr, PyvtkCommunicator_AllGatherV_s2, METH_VARARGS,
   "@PPkPP *l *l *k *k"},
  {nullptr, PyvtkCommunicator_AllGatherV_s3, METH_VARARGS,
   "@zzkPP *k *k"},
  {nullptr, PyvtkCommunicator_AllGatherV_s4, METH_VARARGS,
   "@PPkPP *d *d *k *k"},
  {nullptr, PyvtkCommunicator_AllGatherV_s5, METH_VARARGS,
   "@PPkPP *k *k *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_AllGatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllGatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkCommunicator_AllGatherV_s6(self, args);
    case 2:
      return PyvtkCommunicator_AllGatherV_s7(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllGatherV");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Reduce_Methods[] = {
  {nullptr, PyvtkCommunicator_Reduce_s1, METH_VARARGS,
   "@PPkii *i *i"},
  {nullptr, PyvtkCommunicator_Reduce_s2, METH_VARARGS,
   "@PPkii *l *l"},
  {nullptr, PyvtkCommunicator_Reduce_s3, METH_VARARGS,
   "@zzkii"},
  {nullptr, PyvtkCommunicator_Reduce_s4, METH_VARARGS,
   "@PPkii *d *d"},
  {nullptr, PyvtkCommunicator_Reduce_s5, METH_VARARGS,
   "@PPkii *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Reduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Reduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkCommunicator_Reduce_s6(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllReduce_Methods[] = {
  {nullptr, PyvtkCommunicator_AllReduce_s1, METH_VARARGS,
   "@PPki *i *i"},
  {nullptr, PyvtkCommunicator_AllReduce_s2, METH_VARARGS,
   "@PPki *l *l"},
  {nullptr, PyvtkCommunicator_AllReduce_s3, METH_VARARGS,
   "@zzki"},
  {nullptr, PyvtkCommunicator_AllReduce_s4, METH_VARARGS,
   "@PPki *d *d"},
  {nullptr, PyvtkCommunicator_AllReduce_s5, METH_VARARGS,
   "@PPki *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_AllReduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllReduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_AllReduce_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return nullptr;
}



static PyObject *
PyvtkCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->BroadcastVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GatherVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkCommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ScatterVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkIdType temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkCommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AllGatherVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(2*size4);
  vtkIdType *temp4 = store4.Data();
  vtkIdType *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    int tempr = (ap.IsBound() ?
      op->ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCommunicator_SetUseCopy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseCopy");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCommunicator::SetUseCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetParentProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParentProcessor");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommunicator::GetParentProcessor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLeftChildProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLeftChildProcessor");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommunicator::GetLeftChildProcessor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_MarshalDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarshalDataObject");

  vtkDataObject *temp0 = nullptr;
  vtkCharArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetVTKObject(temp1, "vtkCharArray"))
  {
    int tempr = vtkCommunicator::MarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_UnMarshalDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnMarshalDataObject");

  vtkCharArray *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCharArray") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = vtkCommunicator::UnMarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Methods[] = {
  {"IsTypeOf", PyvtkCommunicator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCommunicator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCommunicator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCommunicator\nC++: static vtkCommunicator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCommunicator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCommunicator\nC++: vtkCommunicator *NewInstance()\n\n"},
  {"SetNumberOfProcesses", PyvtkCommunicator_SetNumberOfProcesses, METH_VARARGS,
   "V.SetNumberOfProcesses(int)\nC++: virtual void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {"GetNumberOfProcesses", PyvtkCommunicator_GetNumberOfProcesses, METH_VARARGS,
   "V.GetNumberOfProcesses() -> int\nC++: virtual int GetNumberOfProcesses()\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {"GetLocalProcessId", PyvtkCommunicator_GetLocalProcessId, METH_VARARGS,
   "V.GetLocalProcessId() -> int\nC++: virtual int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {"Send", PyvtkCommunicator_Send, METH_VARARGS,
   "V.Send(vtkDataObject, int, int) -> int\nC++: int Send(vtkDataObject *data, int remoteHandle, int tag)\nV.Send(vtkDataArray, int, int) -> int\nC++: int Send(vtkDataArray *data, int remoteHandle, int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const int *data, vtkIdType length, int remoteHandle,\n     int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const long *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send(string, int, int, int) -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send((float, ...), int, int, int) -> int\nC++: int Send(const double *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send((int, ...), int, int, int) -> int\nC++: int Send(const long long *data, vtkIdType length,\n    int remoteHandle, int tag)\nV.Send(vtkMultiProcessStream, int, int) -> int\nC++: int Send(const vtkMultiProcessStream &stream, int remoteId,\n    int tag)\n\nThis method sends a data object to a destination. Tag eliminates\nambiguity and is used to match sends to receives.\n"},
  {"SendVoidArray", PyvtkCommunicator_SendVoidArray, METH_VARARGS,
   "V.SendVoidArray(void, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to send various arrays of\ndata. The type arg is one of the VTK type constants recognized by\nthe vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  length is\nmeasured in number of values (as opposed to number of bytes).\n"},
  {"Receive", PyvtkCommunicator_Receive, METH_VARARGS,
   "V.Receive(vtkDataObject, int, int) -> int\nC++: int Receive(vtkDataObject *data, int remoteHandle, int tag)\nV.Receive(vtkDataArray, int, int) -> int\nC++: int Receive(vtkDataArray *data, int remoteHandle, int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(int *data, vtkIdType maxlength, int remoteHandle,\n     int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(long *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive(string, int, int, int) -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive([float, ...], int, int, int) -> int\nC++: int Receive(double *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive([int, ...], int, int, int) -> int\nC++: int Receive(long long *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nV.Receive(vtkMultiProcessStream, int, int) -> int\nC++: int Receive(vtkMultiProcessStream &stream, int remoteId,\n    int tag)\n\nThis method receives a data object from a corresponding send. It\nblocks until the receive is finished.\n"},
  {"ReceiveDataObject", PyvtkCommunicator_ReceiveDataObject, METH_VARARGS,
   "V.ReceiveDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteHandle, int tag)\n\nThe caller does not have to know the data type before this call\nis made. It returns the newly created object.\n"},
  {"ReceiveVoidArray", PyvtkCommunicator_ReceiveVoidArray, METH_VARARGS,
   "V.ReceiveVoidArray(void, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType maxlength,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to receive various arrays\nof data. The type arg is one of the VTK type constants recognized\nby the vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  maxlength is\nmeasured in number of values (as opposed to number of bytes) and\nis the maxmum length of the data to receive.  If the maxlength is\nless than the length of the message sent by the sender, an error\nwill be flagged. Once a message is received, use the GetCount()\nmethod to determine the actual size of the data received.\n"},
  {"GetCount", PyvtkCommunicator_GetCount, METH_VARARGS,
   "V.GetCount() -> int\nC++: virtual vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {"Barrier", PyvtkCommunicator_Barrier, METH_VARARGS,
   "V.Barrier()\nC++: virtual void Barrier()\n\nWill block the processes until all other processes reach the\nBarrier function.\n"},
  {"Broadcast", PyvtkCommunicator_Broadcast, METH_VARARGS,
   "V.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(int *data, vtkIdType length, int srcProcessId)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(long *data, vtkIdType length, int srcProcessId)\nV.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nV.Broadcast([float, ...], int, int) -> int\nC++: int Broadcast(double *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(long long *data, vtkIdType length,\n    int srcProcessId)\nV.Broadcast(vtkDataObject, int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nV.Broadcast(vtkDataArray, int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\nV.Broadcast(vtkMultiProcessStream, int) -> int\nC++: int Broadcast(vtkMultiProcessStream &stream,\n    int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {"Gather", PyvtkCommunicator_Gather, METH_VARARGS,
   "V.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather(string, string, int, int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((float, ...), [float, ...], int, int) -> int\nC++: int Gather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather((int, ...), [int, ...], int, int) -> int\nC++: int Gather(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int destProcessId)\nV.Gather(vtkDataArray, vtkDataArray, int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on the destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {"GatherV", PyvtkCommunicator_GatherV, METH_VARARGS,
   "V.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV(string, string, int, [int, ...], [int, ...], int) -> int\nC++: int GatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((float, ...), [float, ...], int, [int, ...], [int, ...],\n     int) -> int\nC++: int GatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV((int, ...), [int, ...], int, [int, ...], [int, ...],\n    int) -> int\nC++: int GatherV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, [int, ...], [int, ...], int)\n     -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, vtkIdTypeArray,\n    vtkIdTypeArray, int) -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdTypeArray *recvLengths,\n    vtkIdTypeArray *offsets, int destProcessId)\nV.GatherV(vtkDataArray, vtkDataArray, int) -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGatherV is the vector variant of Gather.  It extends the\nfunctionality of Gather by allowing a varying count of data from\neach process. GatherV collects arrays in the process with id\ndestProcessId.  Each process (including t ...\n [Truncated]\n"},
  {"Scatter", PyvtkCommunicator_Scatter, METH_VARARGS,
   "V.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter(string, string, int, int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((float, ...), [float, ...], int, int) -> int\nC++: int Scatter(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter((int, ...), [int, ...], int, int) -> int\nC++: int Scatter(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int srcProcessId)\nV.Scatter(vtkDataArray, vtkDataArray, int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {"ScatterV", PyvtkCommunicator_ScatterV, METH_VARARGS,
   "V.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV(string, string, [int, ...], [int, ...], int, int)\n    -> int\nC++: int ScatterV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((float, ...), [float, ...], [int, ...], [int, ...],\n    int, int) -> int\nC++: int ScatterV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nV.ScatterV((int, ...), [int, ...], [int, ...], [int, ...], int,\n    int) -> int\nC++: int ScatterV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\n\nScatterV is the vector variant of Scatter.  It extends the\nfunctionality of Scatter by allowing a varying count of data to\neach process. ScatterV takes an array in the process with id\nsrcProcessId and distributes it.  Each process (including the\nsource) receives a portion of the send buffer defined by the\nsendLengths and offsets arrays.\n"},
  {"AllGather", PyvtkCommunicator_AllGather, METH_VARARGS,
   "V.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length)\nV.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length)\nV.AllGather(string, string, int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nV.AllGather((float, ...), [float, ...], int) -> int\nC++: int AllGather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length)\nV.AllGather((int, ...), [int, ...], int) -> int\nC++: int AllGather(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length)\nV.AllGather(vtkDataArray, vtkDataArray) -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {"AllGatherV", PyvtkCommunicator_AllGatherV, METH_VARARGS,
   "V.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV(string, string, int, [int, ...], [int, ...]) -> int\nC++: int AllGatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((float, ...), [float, ...], int, [int, ...], [int,\n    ...]) -> int\nC++: int AllGatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV((int, ...), [int, ...], int, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nV.AllGatherV(vtkDataArray, vtkDataArray, [int, ...], [int, ...])\n    -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nV.AllGatherV(vtkDataArray, vtkDataArray) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as GatherV except that the result is placed in all\nprocesses.\n"},
  {"Reduce", PyvtkCommunicator_Reduce, METH_VARARGS,
   "V.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce(string, string, int, int, int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((float, ...), [float, ...], int, int, int) -> int\nC++: int Reduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce((int, ...), [int, ...], int, int, int) -> int\nC++: int Reduce(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nV.Reduce(vtkDataArray, vtkDataArray, int, int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {"AllReduce", PyvtkCommunicator_AllReduce, METH_VARARGS,
   "V.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce(string, string, int, int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((float, ...), [float, ...], int, int) -> int\nC++: int AllReduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce((int, ...), [int, ...], int, int) -> int\nC++: int AllReduce(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int operation)\nV.AllReduce(vtkDataArray, vtkDataArray, int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {"BroadcastVoidArray", PyvtkCommunicator_BroadcastVoidArray, METH_VARARGS,
   "V.BroadcastVoidArray(void, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"GatherVoidArray", PyvtkCommunicator_GatherVoidArray, METH_VARARGS,
   "V.GatherVoidArray(void, void, int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"GatherVVoidArray", PyvtkCommunicator_GatherVVoidArray, METH_VARARGS,
   "V.GatherVVoidArray(void, void, int, [int, ...], [int, ...], int,\n    int) -> int\nC++: virtual int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"ScatterVoidArray", PyvtkCommunicator_ScatterVoidArray, METH_VARARGS,
   "V.ScatterVoidArray(void, void, int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"ScatterVVoidArray", PyvtkCommunicator_ScatterVVoidArray, METH_VARARGS,
   "V.ScatterVVoidArray(void, void, [int, ...], [int, ...], int, int,\n    int) -> int\nC++: virtual int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"AllGatherVoidArray", PyvtkCommunicator_AllGatherVoidArray, METH_VARARGS,
   "V.AllGatherVoidArray(void, void, int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"AllGatherVVoidArray", PyvtkCommunicator_AllGatherVVoidArray, METH_VARARGS,
   "V.AllGatherVVoidArray(void, void, int, [int, ...], [int, ...],\n    int) -> int\nC++: virtual int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"ReduceVoidArray", PyvtkCommunicator_ReduceVoidArray, METH_VARARGS,
   "V.ReduceVoidArray(void, void, int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"AllReduceVoidArray", PyvtkCommunicator_AllReduceVoidArray, METH_VARARGS,
   "V.AllReduceVoidArray(void, void, int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"SetUseCopy", PyvtkCommunicator_SetUseCopy, METH_VARARGS,
   "V.SetUseCopy(int)\nC++: static void SetUseCopy(int useCopy)\n\n"},
  {"GetParentProcessor", PyvtkCommunicator_GetParentProcessor, METH_VARARGS,
   "V.GetParentProcessor(int) -> int\nC++: static int GetParentProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorithms - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {"GetLeftChildProcessor", PyvtkCommunicator_GetLeftChildProcessor, METH_VARARGS,
   "V.GetLeftChildProcessor(int) -> int\nC++: static int GetLeftChildProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorithms - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {"MarshalDataObject", PyvtkCommunicator_MarshalDataObject, METH_VARARGS,
   "V.MarshalDataObject(vtkDataObject, vtkCharArray) -> int\nC++: static int MarshalDataObject(vtkDataObject *object,\n    vtkCharArray *buffer)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {"UnMarshalDataObject", PyvtkCommunicator_UnMarshalDataObject, METH_VARARGS,
   "V.UnMarshalDataObject(vtkCharArray, vtkDataObject) -> int\nC++: static int UnMarshalDataObject(vtkCharArray *buffer,\n    vtkDataObject *object)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkCommunicator", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkCommunicator_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkCommunicator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCommunicator_Type, PyvtkCommunicator_Methods,
    "vtkCommunicator",
 nullptr);

  PyTypeObject *pytype = &PyvtkCommunicator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCommunicator_Tags_Type);
  PyvtkCommunicator_Tags_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCommunicator_Tags_Type);

  o = (PyObject *)&PyvtkCommunicator_Tags_Type;
  if (PyDict_SetItemString(d, "Tags", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCommunicator_StandardOperations_Type);
  PyvtkCommunicator_StandardOperations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCommunicator_StandardOperations_Type);

  o = (PyObject *)&PyvtkCommunicator_StandardOperations_Type;
  if (PyDict_SetItemString(d, "StandardOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkCommunicator::Tags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "BROADCAST_TAG", vtkCommunicator::BROADCAST_TAG },
        { "GATHER_TAG", vtkCommunicator::GATHER_TAG },
        { "GATHERV_TAG", vtkCommunicator::GATHERV_TAG },
        { "SCATTER_TAG", vtkCommunicator::SCATTER_TAG },
        { "SCATTERV_TAG", vtkCommunicator::SCATTERV_TAG },
        { "REDUCE_TAG", vtkCommunicator::REDUCE_TAG },
        { "BARRIER_TAG", vtkCommunicator::BARRIER_TAG },
      };

    o = PyvtkCommunicator_Tags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkCommunicator::StandardOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "MAX_OP", vtkCommunicator::MAX_OP },
        { "MIN_OP", vtkCommunicator::MIN_OP },
        { "SUM_OP", vtkCommunicator::SUM_OP },
        { "PRODUCT_OP", vtkCommunicator::PRODUCT_OP },
        { "LOGICAL_AND_OP", vtkCommunicator::LOGICAL_AND_OP },
        { "BITWISE_AND_OP", vtkCommunicator::BITWISE_AND_OP },
        { "LOGICAL_OR_OP", vtkCommunicator::LOGICAL_OR_OP },
        { "BITWISE_OR_OP", vtkCommunicator::BITWISE_OR_OP },
        { "LOGICAL_XOR_OP", vtkCommunicator::LOGICAL_XOR_OP },
        { "BITWISE_XOR_OP", vtkCommunicator::BITWISE_XOR_OP },
      };

    o = PyvtkCommunicator_StandardOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommunicator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

