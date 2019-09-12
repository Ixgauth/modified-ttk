// python wrapper for vtkMaterialInterfacePieceTransactionMatrix
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfacePieceTransaction.h"
#include "vtkMaterialInterfacePieceTransactionMatrix.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfacePieceTransactionMatrix(PyObject *); }

static const char *PyvtkMaterialInterfacePieceTransactionMatrix_Doc =
  "vtkMaterialInterfacePieceTransactionMatrix - Container to hold  a\nsets of transactions (sends/recvs) indexed by fragment and proc,\nintended to facilitate moving fragment pieces around.\n\n"
  "Internally we have a 2D matrix. On one axis is fragment id on the\n"
  "other is proc id.\n\n"
  "Transaction are intended to execute in fragment order so that no\n"
  "deadlocks occur.\n\n"
  "vtkMaterialInterfacePieceTransactionMatrix()\n"
  "vtkMaterialInterfacePieceTransactionMatrix(int nFragments, int nProcs)\n"
  "vtkMaterialInterfacePieceTransactionMatrix(\n    const &vtkMaterialInterfacePieceTransactionMatrix)\n";


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_GetNumberOfTransactions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransactions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = op->GetNumberOfTransactions(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_PushTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushTransaction");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  int temp0;
  int temp1;
  vtkMaterialInterfacePieceTransaction *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, "vtkMaterialInterfacePieceTransaction"))
  {
    op->PushTransaction(temp0, temp1, *temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  vtkCommunicator *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCommunicator") &&
      ap.GetValue(temp1))
  {
    op->Broadcast(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_Print(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Print");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Print();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_Capacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Capacity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfacePieceTransactionMatrix *op = static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->Capacity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfacePieceTransactionMatrix_Methods[] = {
  {"Initialize", PyvtkMaterialInterfacePieceTransactionMatrix_Initialize, METH_VARARGS,
   "V.Initialize(int, int)\nC++: void Initialize(int nProcs, int nFragments)\n\nFree allocated resources and leave the object in an\nun-initialized state.\n"},
  {"Clear", PyvtkMaterialInterfacePieceTransactionMatrix_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nFree allocated resources and leave the object in an\nun-initialized state.\n"},
  {"GetNumberOfTransactions", PyvtkMaterialInterfacePieceTransactionMatrix_GetNumberOfTransactions, METH_VARARGS,
   "V.GetNumberOfTransactions(int) -> int\nC++: vtkIdType GetNumberOfTransactions(int procId)\n\nGet the number of transaction a given process will execute.\n"},
  {"PushTransaction", PyvtkMaterialInterfacePieceTransactionMatrix_PushTransaction, METH_VARARGS,
   "V.PushTransaction(int, int, vtkMaterialInterfacePieceTransaction)\nC++: void PushTransaction(int fragmentId, int procId,\n    vtkMaterialInterfacePieceTransaction &transaction)\n\nAdd a transaction to the end of the given a proc,fragment pair's\ntransaction list.\n"},
  {"Broadcast", PyvtkMaterialInterfacePieceTransactionMatrix_Broadcast, METH_VARARGS,
   "V.Broadcast(vtkCommunicator, int)\nC++: void Broadcast(vtkCommunicator *comm, int srcProc)\n\nSend the transaction matrix on srcProc to all other procs.\n"},
  {"Print", PyvtkMaterialInterfacePieceTransactionMatrix_Print, METH_VARARGS,
   "V.Print()\nC++: void Print()\n\n"},
  {"Capacity", PyvtkMaterialInterfacePieceTransactionMatrix_Capacity, METH_VARARGS,
   "V.Capacity() -> int\nC++: vtkIdType Capacity()\n\nTells how much memory the matrix has allocated.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceTransactionMatrix");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfacePieceTransactionMatrix *op = new vtkMaterialInterfacePieceTransactionMatrix();

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceTransactionMatrix", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceTransactionMatrix");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMaterialInterfacePieceTransactionMatrix *op = new vtkMaterialInterfacePieceTransactionMatrix(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceTransactionMatrix", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfacePieceTransactionMatrix");

  vtkMaterialInterfacePieceTransactionMatrix *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfacePieceTransactionMatrix"))
  {
    vtkMaterialInterfacePieceTransactionMatrix *op = new vtkMaterialInterfacePieceTransactionMatrix(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfacePieceTransactionMatrix", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_Methods[] = {
  {nullptr, PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s3, METH_VARARGS,
   "@W vtkMaterialInterfacePieceTransactionMatrix"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s1(self, args);
    case 2:
      return PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s2(self, args);
    case 1:
      return PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfacePieceTransactionMatrix");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfacePieceTransactionMatrix_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix(nullptr, args);
}

static void PyvtkMaterialInterfacePieceTransactionMatrix_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfacePieceTransactionMatrix *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMaterialInterfacePieceTransactionMatrix_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfacePieceTransactionMatrix_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfacePieceTransactionMatrix", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfacePieceTransactionMatrix_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfacePieceTransactionMatrix_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfacePieceTransactionMatrix_Doc, // tp_doc
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
  PyvtkMaterialInterfacePieceTransactionMatrix_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMaterialInterfacePieceTransactionMatrix_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfacePieceTransactionMatrix(*static_cast<const vtkMaterialInterfacePieceTransactionMatrix*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfacePieceTransactionMatrix_TypeNew(); }

PyObject *PyvtkMaterialInterfacePieceTransactionMatrix_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfacePieceTransactionMatrix_Type,
    PyvtkMaterialInterfacePieceTransactionMatrix_Methods,
    PyvtkMaterialInterfacePieceTransactionMatrix_vtkMaterialInterfacePieceTransactionMatrix_Methods,
    &PyvtkMaterialInterfacePieceTransactionMatrix_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfacePieceTransactionMatrix_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaterialInterfacePieceTransactionMatrix(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfacePieceTransactionMatrix_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfacePieceTransactionMatrix", o) != 0)
  {
    Py_DECREF(o);
  }

}

