// python wrapper for vtkLongLongArray
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
#include "vtkLongLongArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLongLongArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLongLongArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static const char *PyvtkLongLongArray_Doc =
  "vtkLongLongArray - dynamic, self-adjusting array of long long\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkLongLongArray is an array of values of type long long. It provides\n"
  "methods for insertion and retrieval of values and will automatically\n"
  "resize itself to hold new data.\n\n"
  "This class should not be used directly, as it only exists on systems\n"
  "where the long long type is defined.  If you need a 64 bit integer\n"
  "data array, use vtkTypeInt64Array instead.\n\n";


static PyObject *
PyvtkLongLongArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLongLongArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLongLongArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLongLongArray *tempr = vtkLongLongArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLongLongArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLongLongArray::NewInstance());

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
PyvtkLongLongArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkLongLongArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
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
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkLongLongArray::GetTypedTuple(temp0, temp1);
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
PyvtkLongLongArray_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
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
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkLongLongArray::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_InsertTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i"))
  {
    if (ap.IsBound())
    {
      op->InsertTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkLongLongArray::InsertTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_InsertNextTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTypedTuple(temp0) :
      op->vtkLongLongArray::InsertNextTypedTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkLongLongArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkLongLongArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

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
      op->vtkLongLongArray::SetNumberOfValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0), "0 <= id"))
  {
    if (ap.IsBound())
    {
      op->InsertValue(temp0, temp1);
    }
    else
    {
      op->vtkLongLongArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkLongLongArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkLongLongArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLongLongArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkLongLongArray::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLongLongArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLongLongArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkLongLongArray_GetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return nullptr;
}



static PyObject *
PyvtkLongLongArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkLongLongArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkLongLongArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_SetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  long long *temp0;
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
      op->SetArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLongLongArray::SetArray(temp0, temp1, temp2);
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
PyvtkLongLongArray_SetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLongLongArray *op = static_cast<vtkLongLongArray *>(vp);

  long long *temp0;
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
      op->SetArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLongLongArray::SetArray(temp0, temp1, temp2, temp3);
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
PyvtkLongLongArray_SetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLongLongArray_SetArray_s1(self, args);
    case 4:
      return PyvtkLongLongArray_SetArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArray");
  return nullptr;
}



static PyObject *
PyvtkLongLongArray_FastDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkLongLongArray *tempr = vtkLongLongArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    long long tempr = vtkLongLongArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLongLongArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    long long tempr = vtkLongLongArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLongLongArray_Methods[] = {
  {"IsTypeOf", PyvtkLongLongArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLongLongArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLongLongArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLongLongArray\nC++: static vtkLongLongArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLongLongArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLongLongArray\nC++: vtkLongLongArray *NewInstance()\n\n"},
  {"GetDataType", PyvtkLongLongArray_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetTypedTuple", PyvtkLongLongArray_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType i, long long *tuple)\n\n"},
  {"SetTypedTuple", PyvtkLongLongArray_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType i, const long long *tuple)\n\n"},
  {"InsertTypedTuple", PyvtkLongLongArray_InsertTypedTuple, METH_VARARGS,
   "V.InsertTypedTuple(int, (int, ...))\nC++: void InsertTypedTuple(vtkIdType i, const long long *tuple)\n\n"},
  {"InsertNextTypedTuple", PyvtkLongLongArray_InsertNextTypedTuple, METH_VARARGS,
   "V.InsertNextTypedTuple((int, ...)) -> int\nC++: vtkIdType InsertNextTypedTuple(const long long *tuple)\n\n"},
  {"GetValue", PyvtkLongLongArray_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: long long GetValue(vtkIdType id)\n\n"},
  {"SetValue", PyvtkLongLongArray_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, long long value)\n\n"},
  {"SetNumberOfValues", PyvtkLongLongArray_SetNumberOfValues, METH_VARARGS,
   "V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number) override;\n\nSpecify the number of values (tuples * components) for this\nobject to hold. Does an allocation as well as setting the MaxId\nivar. Used in conjunction with SetValue() method for fast\ninsertion.\n"},
  {"InsertValue", PyvtkLongLongArray_InsertValue, METH_VARARGS,
   "V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, long long f)\n\n"},
  {"InsertNextValue", PyvtkLongLongArray_InsertNextValue, METH_VARARGS,
   "V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(long long f)\n\n"},
  {"GetValueRange", PyvtkLongLongArray_GetValueRange, METH_VARARGS,
   "V.GetValueRange(int) -> (int, int)\nC++: long long *GetValueRange(int comp)\nV.GetValueRange() -> (int, int)\nC++: long long *GetValueRange()\n\n"},
  {"WritePointer", PyvtkLongLongArray_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: long long *WritePointer(vtkIdType id, vtkIdType number)\n\n"},
  {"GetPointer", PyvtkLongLongArray_GetPointer, METH_VARARGS,
   "V.GetPointer(int) -> (int, ...)\nC++: long long *GetPointer(vtkIdType id)\n\n"},
  {"SetArray", PyvtkLongLongArray_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int)\nC++: void SetArray(long long *array, vtkIdType size, int save)\nV.SetArray(int, int, int, int)\nC++: void SetArray(long long *array, vtkIdType size, int save,\n    int deleteMethod)\n\n"},
  {"FastDownCast", PyvtkLongLongArray_FastDownCast, METH_VARARGS,
   "V.FastDownCast(vtkAbstractArray) -> vtkLongLongArray\nC++: static vtkLongLongArray *FastDownCast(\n    vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {"GetDataTypeValueMin", PyvtkLongLongArray_GetDataTypeValueMin, METH_VARARGS,
   "V.GetDataTypeValueMin() -> int\nC++: static long long GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {"GetDataTypeValueMax", PyvtkLongLongArray_GetDataTypeValueMax, METH_VARARGS,
   "V.GetDataTypeValueMax() -> int\nC++: static long long GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLongLongArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkLongLongArray", // tp_name
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
  PyvtkLongLongArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLongLongArray_StaticNew()
{
  return vtkLongLongArray::New();
}

PyObject *PyvtkLongLongArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLongLongArray_Type, PyvtkLongLongArray_Methods,
    "vtkLongLongArray",
 &PyvtkLongLongArray_StaticNew);

  PyTypeObject *pytype = &PyvtkLongLongArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLongLongArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLongLongArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLongLongArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

