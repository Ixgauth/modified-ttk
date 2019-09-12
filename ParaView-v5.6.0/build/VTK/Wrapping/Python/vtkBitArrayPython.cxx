// python wrapper for vtkBitArray
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
#include "vtkBitArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBitArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBitArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static const char *PyvtkBitArray_Doc =
  "vtkBitArray - dynamic, self-adjusting array of bits\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkBitArray is an array of bits (0/1 data value). The array is packed\n"
  "so that each byte stores eight bits. vtkBitArray provides methods for\n"
  "insertion and retrieval of bits, and will automatically resize itself\n"
  "to hold new data.\n\n";

static PyTypeObject PyvtkBitArray_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkBitArray.DeleteMethod", // tp_name
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

PyObject *PyvtkBitArray_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBitArray_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBitArray_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBitArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBitArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBitArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBitArray *tempr = vtkBitArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBitArray::NewInstance());

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
PyvtkBitArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkBitArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkBitArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkBitArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkBitArray::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTuples(temp0);
    }
    else
    {
      op->vtkBitArray::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_SetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::SetTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_SetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_SetTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_SetTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTuple");
  return nullptr;
}



static PyObject *
PyvtkBitArray_InsertTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::InsertTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_InsertTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_InsertTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuple");
  return nullptr;
}



static PyObject *
PyvtkBitArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBitArray::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkBitArray_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}



static PyObject *
PyvtkBitArray_InsertNextTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkBitArray::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertNextTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0) :
      op->vtkBitArray::InsertNextTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBitArray_InsertNextTuple_s1(self, args);
    case 1:
      return PyvtkBitArray_InsertNextTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextTuple");
  return nullptr;
}



static PyObject *
PyvtkBitArray_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    size_t sizer = op->GetNumberOfComponents();
    double *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkBitArray::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTuple(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::GetTuple(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_GetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBitArray_GetTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_GetTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return nullptr;
}



static PyObject *
PyvtkBitArray_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= id && id < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->RemoveTuple(temp0);
    }
    else
    {
      op->vtkBitArray::RemoveTuple(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_RemoveFirstTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveFirstTuple();
    }
    else
    {
      op->vtkBitArray::RemoveFirstTuple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_RemoveLastTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveLastTuple();
    }
    else
    {
      op->vtkBitArray::RemoveLastTuple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= j && j < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::SetComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkBitArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkBitArray::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkBitArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfValues(temp0);
    }
    else
    {
      op->vtkBitArray::SetNumberOfValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertValue(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= idx && idx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkBitArray::SetVariantValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkBitArray_InsertVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.CheckPrecond((0 <= temp0), "0 <= idx"))
  {
    if (ap.IsBound())
    {
      op->InsertVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkBitArray::InsertVariantValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkBitArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkBitArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_InsertComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= j && j < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->InsertComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkBitArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkBitArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_WriteVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    void  *tempr = (ap.IsBound() ?
      op->WriteVoidPointer(temp0, temp1) :
      op->vtkBitArray::WriteVoidPointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkBitArray::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkBitArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_DeepCopy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkBitArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBitArray_DeepCopy_Methods[] = {
  {nullptr, PyvtkBitArray_DeepCopy_s1, METH_VARARGS,
   "@V *vtkDataArray"},
  {nullptr, PyvtkBitArray_DeepCopy_s2, METH_VARARGS,
   "@V *vtkAbstractArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBitArray_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBitArray_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return nullptr;
}



static PyObject *
PyvtkBitArray_SetVoidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetVoidArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::SetVoidArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkBitArray_SetVoidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
    if (ap.IsBound())
    {
      op->SetVoidArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBitArray::SetVoidArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkBitArray_SetVoidArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_SetVoidArray_s1(self, args);
    case 4:
      return PyvtkBitArray_SetVoidArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVoidArray");
  return nullptr;
}



static PyObject *
PyvtkBitArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkBitArray::NewIterator());

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
PyvtkBitArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->LookupValue(*temp0) :
      op->vtkBitArray::LookupValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->LookupValue(*temp0, temp1);
    }
    else
    {
      op->vtkBitArray::LookupValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->LookupValue(temp0) :
      op->vtkBitArray::LookupValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->LookupValue(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::LookupValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBitArray_LookupValue_Methods[] = {
  {nullptr, PyvtkBitArray_LookupValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {nullptr, PyvtkBitArray_LookupValue_s2, METH_VARARGS,
   "@WV vtkVariant *vtkIdList"},
  {nullptr, PyvtkBitArray_LookupValue_s3, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkBitArray_LookupValue_s4, METH_VARARGS,
   "@iV *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBitArray_LookupValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBitArray_LookupValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return nullptr;
}



static PyObject *
PyvtkBitArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataChanged();
    }
    else
    {
      op->vtkBitArray::DataChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLookup();
    }
    else
    {
      op->vtkBitArray::ClearLookup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBitArray_Methods[] = {
  {"IsTypeOf", PyvtkBitArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBitArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBitArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBitArray\nC++: static vtkBitArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBitArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBitArray\nC++: vtkBitArray *NewInstance()\n\n"},
  {"Allocate", PyvtkBitArray_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000) override;\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {"Initialize", PyvtkBitArray_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRelease storage and reset array to initial state.\n"},
  {"GetDataType", PyvtkBitArray_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetDataTypeSize", PyvtkBitArray_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize() override;\n\nReturn the size of the underlying data type.  For a bit, 0 is\nreturned.  For string 0 is returned. Arrays with variable length\ncomponents return 0.\n"},
  {"SetNumberOfTuples", PyvtkBitArray_SetNumberOfTuples, METH_VARARGS,
   "V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(vtkIdType number) override;\n\nSet the number of n-tuples in the array.\n"},
  {"SetTuple", PyvtkBitArray_SetTuple, METH_VARARGS,
   "V.SetTuple(int, int, vtkAbstractArray)\nC++: void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\nV.SetTuple(int, (float, ...))\nC++: void SetTuple(vtkIdType i, const double *tuple) override;\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {"InsertTuple", PyvtkBitArray_InsertTuple, METH_VARARGS,
   "V.InsertTuple(int, int, vtkAbstractArray)\nC++: void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\nV.InsertTuple(int, (float, ...))\nC++: void InsertTuple(vtkIdType i, const double *tuple) override;\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n"},
  {"InsertTuples", PyvtkBitArray_InsertTuples, METH_VARARGS,
   "V.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\nV.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"InsertNextTuple", PyvtkBitArray_InsertNextTuple, METH_VARARGS,
   "V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source) override;\nV.InsertNextTuple((float, ...)) -> int\nC++: vtkIdType InsertNextTuple(const double *tuple) override;\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n"},
  {"GetTuple", PyvtkBitArray_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (float, ...)\nC++: double *GetTuple(vtkIdType i) override;\nV.GetTuple(int, [float, ...])\nC++: void GetTuple(vtkIdType i, double *tuple) override;\n\nGet a pointer to a tuple at the ith location. This is a dangerous\nmethod (it is not thread safe since a pointer is returned).\n"},
  {"RemoveTuple", PyvtkBitArray_RemoveTuple, METH_VARARGS,
   "V.RemoveTuple(int)\nC++: void RemoveTuple(vtkIdType id) override;\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {"RemoveFirstTuple", PyvtkBitArray_RemoveFirstTuple, METH_VARARGS,
   "V.RemoveFirstTuple()\nC++: void RemoveFirstTuple() override;\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {"RemoveLastTuple", PyvtkBitArray_RemoveLastTuple, METH_VARARGS,
   "V.RemoveLastTuple()\nC++: void RemoveLastTuple() override;\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {"SetComponent", PyvtkBitArray_SetComponent, METH_VARARGS,
   "V.SetComponent(int, int, float)\nC++: void SetComponent(vtkIdType i, int j, double c) override;\n\nSet the data component at the ith tuple and jth component\nlocation. Note that i is less then NumberOfTuples and j is less\nthen NumberOfComponents. Make sure enough memory has been\nallocated (use SetNumberOfTuples() and  SetNumberOfComponents()).\n"},
  {"Squeeze", PyvtkBitArray_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze() override;\n\nFree any unneeded memory.\n"},
  {"Resize", PyvtkBitArray_Resize, METH_VARARGS,
   "V.Resize(int) -> int\nC++: int Resize(vtkIdType numTuples) override;\n\nResize the array while conserving the data.\n"},
  {"GetValue", PyvtkBitArray_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: int GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {"SetNumberOfValues", PyvtkBitArray_SetNumberOfValues, METH_VARARGS,
   "V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number) override;\n\nFast method based setting of values without memory checks. First\nuse SetNumberOfValues then use SetValue to actually set them.\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {"SetValue", PyvtkBitArray_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, int value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {"InsertValue", PyvtkBitArray_InsertValue, METH_VARARGS,
   "V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, int i)\n\nInserts values and checks to make sure there is enough memory\n"},
  {"SetVariantValue", PyvtkBitArray_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nSet a value in the array from a variant.\n"},
  {"InsertVariantValue", PyvtkBitArray_InsertVariantValue, METH_VARARGS,
   "V.InsertVariantValue(int, vtkVariant)\nC++: void InsertVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nInserts values from a variant and checks to ensure there is\nenough memory\n"},
  {"InsertNextValue", PyvtkBitArray_InsertNextValue, METH_VARARGS,
   "V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(int i)\n\n"},
  {"InsertComponent", PyvtkBitArray_InsertComponent, METH_VARARGS,
   "V.InsertComponent(int, int, float)\nC++: void InsertComponent(vtkIdType i, int j, double c) override;\n\nInsert the data component at ith tuple and jth component\nlocation. Note that memory allocation is performed as necessary\nto hold the data.\n"},
  {"GetPointer", PyvtkBitArray_GetPointer, METH_VARARGS,
   "V.GetPointer(int) -> (int, ...)\nC++: unsigned char *GetPointer(vtkIdType id)\n\nDirect manipulation of the underlying data.\n"},
  {"WritePointer", PyvtkBitArray_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: unsigned char *WritePointer(vtkIdType id, vtkIdType number)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {"WriteVoidPointer", PyvtkBitArray_WriteVoidPointer, METH_VARARGS,
   "V.WriteVoidPointer(int, int) -> void\nC++: void *WriteVoidPointer(vtkIdType id, vtkIdType number)\n    override;\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. If needed, increase\nMaxId to mark any new value ranges as in-use.\n"},
  {"GetVoidPointer", PyvtkBitArray_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType id) override;\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation. Use of this method is discouraged,\nas newer arrays require a deep-copy of the array data in order to\nreturn a suitable pointer. See vtkArrayDispatch for a safer\nalternative for fast data access.\n"},
  {"DeepCopy", PyvtkBitArray_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataArray)\nC++: void DeepCopy(vtkDataArray *da) override;\nV.DeepCopy(vtkAbstractArray)\nC++: void DeepCopy(vtkAbstractArray *aa) override;\n\nDeep copy of another bit array.\n"},
  {"SetVoidArray", PyvtkBitArray_SetVoidArray, METH_VARARGS,
   "V.SetVoidArray(void, int, int)\nC++: void SetVoidArray(void *array, vtkIdType size, int save)\n    override;\nV.SetVoidArray(void, int, int, int)\nC++: void SetVoidArray(void *array, vtkIdType size, int save,\n    int deleteMethod) override;\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the supplied array. If the delete method is\nVTK_DATA_ARRAY_USER_DEFINED a custom free function can be\nassigned to be called using SetArrayFreeFunction, if no custom\nfunction is assigned we will default to delete[].\n"},
  {"NewIterator", PyvtkBitArray_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nReturns a new vtkBitArrayIterator instance.\n"},
  {"LookupValue", PyvtkBitArray_LookupValue, METH_VARARGS,
   "V.LookupValue(vtkVariant) -> int\nC++: vtkIdType LookupValue(vtkVariant value) override;\nV.LookupValue(vtkVariant, vtkIdList)\nC++: void LookupValue(vtkVariant value, vtkIdList *ids) override;\nV.LookupValue(int) -> int\nC++: vtkIdType LookupValue(int value)\nV.LookupValue(int, vtkIdList)\nC++: void LookupValue(int value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {"DataChanged", PyvtkBitArray_DataChanged, METH_VARARGS,
   "V.DataChanged()\nC++: void DataChanged() override;\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {"ClearLookup", PyvtkBitArray_ClearLookup, METH_VARARGS,
   "V.ClearLookup()\nC++: void ClearLookup() override;\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBitArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkBitArray", // tp_name
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
  PyvtkBitArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBitArray_StaticNew()
{
  return vtkBitArray::New();
}

PyObject *PyvtkBitArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBitArray_Type, PyvtkBitArray_Methods,
    "vtkBitArray",
 &PyvtkBitArray_StaticNew);

  PyTypeObject *pytype = &PyvtkBitArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataArray_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBitArray_DeleteMethod_Type);
  PyvtkBitArray_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBitArray_DeleteMethod_Type);

  o = (PyObject *)&PyvtkBitArray_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkBitArray::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkBitArray::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkBitArray::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkBitArray::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkBitArray::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkBitArray_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBitArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBitArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBitArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

