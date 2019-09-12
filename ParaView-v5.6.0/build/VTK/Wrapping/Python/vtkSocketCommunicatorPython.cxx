// python wrapper for vtkSocketCommunicator
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
#include "vtkSocketCommunicator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSocketCommunicator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSocketCommunicator_ClassNew(); }

#ifndef DECLARED_PyvtkCommunicator_ClassNew
extern "C" { PyObject *PyvtkCommunicator_ClassNew(); }
#define DECLARED_PyvtkCommunicator_ClassNew
#endif

static const char *PyvtkSocketCommunicator_Doc =
  "vtkSocketCommunicator - Process communication using Sockets\n\n"
  "Superclass: vtkCommunicator\n\n"
  "This is a concrete implementation of vtkCommunicator which supports\n"
  "interprocess communication using BSD style sockets. It supports byte\n"
  "swapping for the communication of machines with different endianness.\n\n"
  "@warning\n"
  "Communication between 32 bit and 64 bit systems is not fully\n"
  "supported. If a type does not have the same length on both systems,\n"
  "this communicator can not be used to transfer data of that type.\n\n"
  "@sa\n"
  "vtkCommunicator vtkSocketController\n\n";


static PyObject *
PyvtkSocketCommunicator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSocketCommunicator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocketCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSocketCommunicator *tempr = vtkSocketCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocketCommunicator::NewInstance());

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
PyvtkSocketCommunicator_WaitForConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkSocketCommunicator::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkServerSocket *temp0 = nullptr;
  unsigned long temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkServerSocket") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0, temp1) :
      op->vtkSocketCommunicator::WaitForConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_WaitForConnection_Methods[] = {
  {nullptr, PyvtkSocketCommunicator_WaitForConnection_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkSocketCommunicator_WaitForConnection_s2, METH_VARARGS,
   "@V|L *vtkServerSocket"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSocketCommunicator_WaitForConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSocketCommunicator_WaitForConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSocketCommunicator_WaitForConnection_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "WaitForConnection");
  return nullptr;
}



static PyObject *
PyvtkSocketCommunicator_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseConnection();
    }
    else
    {
      op->vtkSocketCommunicator::CloseConnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ConnectTo(temp0, temp1) :
      op->vtkSocketCommunicator::ConnectTo(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytesInReceivedData() :
      op->vtkSocketCommunicator::GetSwapBytesInReceivedData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsConnected() :
      op->vtkSocketCommunicator::GetIsConnected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::SetNumberOfProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Barrier();
    }
    else
    {
      op->vtkSocketCommunicator::Barrier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

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
PyvtkSocketCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkSocketCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkSocketCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

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
PyvtkSocketCommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkSocketCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkSocketCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_SetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPerformHandshake(temp0);
    }
    else
    {
      op->vtkSocketCommunicator::SetPerformHandshake(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshakeMinValue() :
      op->vtkSocketCommunicator::GetPerformHandshakeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshakeMaxValue() :
      op->vtkSocketCommunicator::GetPerformHandshakeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PerformHandshakeOn();
    }
    else
    {
      op->vtkSocketCommunicator::PerformHandshakeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PerformHandshakeOff();
    }
    else
    {
      op->vtkSocketCommunicator::PerformHandshakeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshake() :
      op->vtkSocketCommunicator::GetPerformHandshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_LogToFile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->LogToFile(temp0) :
      op->vtkSocketCommunicator::LogToFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->LogToFile(temp0, temp1) :
      op->vtkSocketCommunicator::LogToFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSocketCommunicator_LogToFile_s1(self, args);
    case 2:
      return PyvtkSocketCommunicator_LogToFile_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LogToFile");
  return nullptr;
}



static PyObject *
PyvtkSocketCommunicator_SetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportErrors(temp0);
    }
    else
    {
      op->vtkSocketCommunicator::SetReportErrors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReportErrors() :
      op->vtkSocketCommunicator::GetReportErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientSocket *tempr = (ap.IsBound() ?
      op->GetSocket() :
      op->vtkSocketCommunicator::GetSocket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkClientSocket *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientSocket"))
  {
    if (ap.IsBound())
    {
      op->SetSocket(temp0);
    }
    else
    {
      op->vtkSocketCommunicator::SetSocket(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_Handshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Handshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Handshake() :
      op->vtkSocketCommunicator::Handshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ServerSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ServerSideHandshake() :
      op->vtkSocketCommunicator::ServerSideHandshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ClientSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClientSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ClientSideHandshake() :
      op->vtkSocketCommunicator::ClientSideHandshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsServer() :
      op->vtkSocketCommunicator::GetIsServer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkSocketCommunicator::GetVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BufferCurrentMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferCurrentMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BufferCurrentMessage();
    }
    else
    {
      op->vtkSocketCommunicator::BufferCurrentMessage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_HasBufferredMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBufferredMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBufferredMessages() :
      op->vtkSocketCommunicator::HasBufferredMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_Methods[] = {
  {"IsTypeOf", PyvtkSocketCommunicator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSocketCommunicator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSocketCommunicator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSocketCommunicator\nC++: static vtkSocketCommunicator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSocketCommunicator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *NewInstance()\n\n"},
  {"WaitForConnection", PyvtkSocketCommunicator_WaitForConnection, METH_VARARGS,
   "V.WaitForConnection(int) -> int\nC++: virtual int WaitForConnection(int port)\nV.WaitForConnection(vtkServerSocket, int) -> int\nC++: virtual int WaitForConnection(vtkServerSocket *socket,\n    unsigned long msec=0)\n\nWait for connection on a given port. These methods return 1 on\nsuccess, 0 on error.\n"},
  {"CloseConnection", PyvtkSocketCommunicator_CloseConnection, METH_VARARGS,
   "V.CloseConnection()\nC++: virtual void CloseConnection()\n\nClose a connection.\n"},
  {"ConnectTo", PyvtkSocketCommunicator_ConnectTo, METH_VARARGS,
   "V.ConnectTo(string, int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to host.\n"},
  {"GetSwapBytesInReceivedData", PyvtkSocketCommunicator_GetSwapBytesInReceivedData, METH_VARARGS,
   "V.GetSwapBytesInReceivedData() -> int\nC++: virtual int GetSwapBytesInReceivedData()\n\nReturns 1 if bytes must be swapped in received ints, floats, etc\n"},
  {"GetIsConnected", PyvtkSocketCommunicator_GetIsConnected, METH_VARARGS,
   "V.GetIsConnected() -> int\nC++: int GetIsConnected()\n\nIs the communicator connected?.\n"},
  {"SetNumberOfProcesses", PyvtkSocketCommunicator_SetNumberOfProcesses, METH_VARARGS,
   "V.SetNumberOfProcesses(int)\nC++: void SetNumberOfProcesses(int num) override;\n\nSet the number of processes you will be using.\n"},
  {"SendVoidArray", PyvtkSocketCommunicator_SendVoidArray, METH_VARARGS,
   "V.SendVoidArray(void, int, int, int, int) -> int\nC++: int SendVoidArray(const void *data, vtkIdType length,\n    int type, int remoteHandle, int tag) override;\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {"ReceiveVoidArray", PyvtkSocketCommunicator_ReceiveVoidArray, METH_VARARGS,
   "V.ReceiveVoidArray(void, int, int, int, int) -> int\nC++: int ReceiveVoidArray(void *data, vtkIdType length, int type,\n    int remoteHandle, int tag) override;\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {"Barrier", PyvtkSocketCommunicator_Barrier, METH_VARARGS,
   "V.Barrier()\nC++: void Barrier() override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthis overload fixes the method.\n"},
  {"BroadcastVoidArray", PyvtkSocketCommunicator_BroadcastVoidArray, METH_VARARGS,
   "V.BroadcastVoidArray(void, int, int, int) -> int\nC++: int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"GatherVoidArray", PyvtkSocketCommunicator_GatherVoidArray, METH_VARARGS,
   "V.GatherVoidArray(void, void, int, int, int) -> int\nC++: int GatherVoidArray(const void *sendBuffer, void *recvBuffer,\n     vtkIdType length, int type, int destProcessId) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"GatherVVoidArray", PyvtkSocketCommunicator_GatherVVoidArray, METH_VARARGS,
   "V.GatherVVoidArray(void, void, int, [int, ...], [int, ...], int,\n    int) -> int\nC++: int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"ScatterVoidArray", PyvtkSocketCommunicator_ScatterVoidArray, METH_VARARGS,
   "V.ScatterVoidArray(void, void, int, int, int) -> int\nC++: int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"ScatterVVoidArray", PyvtkSocketCommunicator_ScatterVVoidArray, METH_VARARGS,
   "V.ScatterVVoidArray(void, void, [int, ...], [int, ...], int, int,\n    int) -> int\nC++: int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"AllGatherVoidArray", PyvtkSocketCommunicator_AllGatherVoidArray, METH_VARARGS,
   "V.AllGatherVoidArray(void, void, int, int) -> int\nC++: int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"AllGatherVVoidArray", PyvtkSocketCommunicator_AllGatherVVoidArray, METH_VARARGS,
   "V.AllGatherVVoidArray(void, void, int, [int, ...], [int, ...],\n    int) -> int\nC++: int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n    override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"ReduceVoidArray", PyvtkSocketCommunicator_ReduceVoidArray, METH_VARARGS,
   "V.ReduceVoidArray(void, void, int, int, int, int) -> int\nC++: int ReduceVoidArray(const void *sendBuffer, void *recvBuffer,\n     vtkIdType length, int type, int operation, int destProcessId)\n     override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"AllReduceVoidArray", PyvtkSocketCommunicator_AllReduceVoidArray, METH_VARARGS,
   "V.AllReduceVoidArray(void, void, int, int, int) -> int\nC++: int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n    override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"SetPerformHandshake", PyvtkSocketCommunicator_SetPerformHandshake, METH_VARARGS,
   "V.SetPerformHandshake(int)\nC++: virtual void SetPerformHandshake(vtkTypeBool _arg)\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"GetPerformHandshakeMinValue", PyvtkSocketCommunicator_GetPerformHandshakeMinValue, METH_VARARGS,
   "V.GetPerformHandshakeMinValue() -> int\nC++: virtual vtkTypeBool GetPerformHandshakeMinValue()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"GetPerformHandshakeMaxValue", PyvtkSocketCommunicator_GetPerformHandshakeMaxValue, METH_VARARGS,
   "V.GetPerformHandshakeMaxValue() -> int\nC++: virtual vtkTypeBool GetPerformHandshakeMaxValue()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"PerformHandshakeOn", PyvtkSocketCommunicator_PerformHandshakeOn, METH_VARARGS,
   "V.PerformHandshakeOn()\nC++: virtual void PerformHandshakeOn()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"PerformHandshakeOff", PyvtkSocketCommunicator_PerformHandshakeOff, METH_VARARGS,
   "V.PerformHandshakeOff()\nC++: virtual void PerformHandshakeOff()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"GetPerformHandshake", PyvtkSocketCommunicator_GetPerformHandshake, METH_VARARGS,
   "V.GetPerformHandshake() -> int\nC++: virtual vtkTypeBool GetPerformHandshake()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"LogToFile", PyvtkSocketCommunicator_LogToFile, METH_VARARGS,
   "V.LogToFile(string) -> int\nC++: virtual int LogToFile(const char *name)\nV.LogToFile(string, int) -> int\nC++: virtual int LogToFile(const char *name, int append)\n\nLog messages to the given file.  The file is truncated unless the\nsecond argument is non-zero (default is to truncate).  If the\nfile name is empty or nullptr, logging is disabled.  Returns 0 if\nthe file failed to open, and 1 otherwise.\n"},
  {"SetReportErrors", PyvtkSocketCommunicator_SetReportErrors, METH_VARARGS,
   "V.SetReportErrors(int)\nC++: virtual void SetReportErrors(int _arg)\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {"GetReportErrors", PyvtkSocketCommunicator_GetReportErrors, METH_VARARGS,
   "V.GetReportErrors() -> int\nC++: virtual int GetReportErrors()\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {"GetSocket", PyvtkSocketCommunicator_GetSocket, METH_VARARGS,
   "V.GetSocket() -> vtkClientSocket\nC++: virtual vtkClientSocket *GetSocket()\n\nGet/Set the actual socket used for communication.\n"},
  {"SetSocket", PyvtkSocketCommunicator_SetSocket, METH_VARARGS,
   "V.SetSocket(vtkClientSocket)\nC++: void SetSocket(vtkClientSocket *)\n\nGet/Set the actual socket used for communication.\n"},
  {"Handshake", PyvtkSocketCommunicator_Handshake, METH_VARARGS,
   "V.Handshake() -> int\nC++: int Handshake()\n\nPerforms handshake. This uses vtkClientSocket::ConnectingSide to\ndecide whether to perform ServerSideHandshake or\nClientSideHandshake.\n"},
  {"ServerSideHandshake", PyvtkSocketCommunicator_ServerSideHandshake, METH_VARARGS,
   "V.ServerSideHandshake() -> int\nC++: int ServerSideHandshake()\n\nPerforms ServerSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {"ClientSideHandshake", PyvtkSocketCommunicator_ClientSideHandshake, METH_VARARGS,
   "V.ClientSideHandshake() -> int\nC++: int ClientSideHandshake()\n\nPerforms ClientSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {"GetIsServer", PyvtkSocketCommunicator_GetIsServer, METH_VARARGS,
   "V.GetIsServer() -> int\nC++: virtual int GetIsServer()\n\nReturns true if this side of the socket is the server.  The\nresult is invalid if the socket is not connected.\n"},
  {"GetVersion", PyvtkSocketCommunicator_GetVersion, METH_VARARGS,
   "V.GetVersion() -> int\nC++: static int GetVersion()\n\nUniquely identifies the version of this class.  If the versions\nmatch, then the socket communicators should be compatible.\n"},
  {"BufferCurrentMessage", PyvtkSocketCommunicator_BufferCurrentMessage, METH_VARARGS,
   "V.BufferCurrentMessage()\nC++: void BufferCurrentMessage()\n\nThis flag is cleared before vtkCommand::WrongTagEvent is fired\nwhen ever a message with mismatched tag is received. If the\nhandler wants the message to be buffered for later use, it should\nset this flag to true. In which case the vtkSocketCommunicator\nwill buffer the message and it will be automatically processed\nthe next time one does a ReceiveTagged() with a matching tag.\n"},
  {"HasBufferredMessages", PyvtkSocketCommunicator_HasBufferredMessages, METH_VARARGS,
   "V.HasBufferredMessages() -> bool\nC++: bool HasBufferredMessages()\n\nReturns true if there are any messages in the receive buffer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSocketCommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkSocketCommunicator", // tp_name
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
  PyvtkSocketCommunicator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSocketCommunicator_StaticNew()
{
  return vtkSocketCommunicator::New();
}

PyObject *PyvtkSocketCommunicator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSocketCommunicator_Type, PyvtkSocketCommunicator_Methods,
    "vtkSocketCommunicator",
 &PyvtkSocketCommunicator_StaticNew);

  PyTypeObject *pytype = &PyvtkSocketCommunicator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCommunicator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSocketCommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSocketCommunicator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSocketCommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

