// python wrapper for vtkIdTypeArray
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
#include "vtkIdTypeArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIdTypeArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIdTypeArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static const char *PyvtkIdTypeArray_Doc =
  "vtkIdTypeArray - dynamic, self-adjusting array of vtkIdType\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkIdTypeArray is an array of values of type vtkIdType. It provides\n"
  "methods for insertion and retrieval of values and will automatically\n"
  "resize itself to hold new data.\n\n";


static PyObject *
PyvtkIdTypeArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIdTypeArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdTypeArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIdTypeArray *tempr = vtkIdTypeArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdTypeArray::NewInstance());

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
PyvtkIdTypeArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkIdTypeArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
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
      op->vtkIdTypeArray::GetTypedTuple(temp0, temp1);
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
PyvtkIdTypeArray_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
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
      op->vtkIdTypeArray::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_InsertTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
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
      op->vtkIdTypeArray::InsertTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_InsertNextTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTypedTuple(temp0) :
      op->vtkIdTypeArray::InsertNextTypedTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkIdTypeArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
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
      op->vtkIdTypeArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

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
      op->vtkIdTypeArray::SetNumberOfValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
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
      op->vtkIdTypeArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkIdTypeArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkIdTypeArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkIdTypeArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkIdTypeArray::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkIdTypeArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkIdTypeArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkIdTypeArray_GetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return nullptr;
}



static PyObject *
PyvtkIdTypeArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkIdTypeArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkIdTypeArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_SetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType *temp0;
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
      op->vtkIdTypeArray::SetArray(temp0, temp1, temp2);
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
PyvtkIdTypeArray_SetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdTypeArray *op = static_cast<vtkIdTypeArray *>(vp);

  vtkIdType *temp0;
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
      op->vtkIdTypeArray::SetArray(temp0, temp1, temp2, temp3);
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
PyvtkIdTypeArray_SetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkIdTypeArray_SetArray_s1(self, args);
    case 4:
      return PyvtkIdTypeArray_SetArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArray");
  return nullptr;
}



static PyObject *
PyvtkIdTypeArray_FastDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkIdTypeArray *tempr = vtkIdTypeArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkIdType tempr = vtkIdTypeArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdTypeArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkIdType tempr = vtkIdTypeArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIdTypeArray_Methods[] = {
  {"IsTypeOf", PyvtkIdTypeArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIdTypeArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIdTypeArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIdTypeArray\nC++: static vtkIdTypeArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIdTypeArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIdTypeArray\nC++: vtkIdTypeArray *NewInstance()\n\n"},
  {"GetDataType", PyvtkIdTypeArray_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetTypedTuple", PyvtkIdTypeArray_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType i, vtkIdType *tuple)\n\n"},
  {"SetTypedTuple", PyvtkIdTypeArray_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType i, const vtkIdType *tuple)\n\n"},
  {"InsertTypedTuple", PyvtkIdTypeArray_InsertTypedTuple, METH_VARARGS,
   "V.InsertTypedTuple(int, (int, ...))\nC++: void InsertTypedTuple(vtkIdType i, const vtkIdType *tuple)\n\n"},
  {"InsertNextTypedTuple", PyvtkIdTypeArray_InsertNextTypedTuple, METH_VARARGS,
   "V.InsertNextTypedTuple((int, ...)) -> int\nC++: vtkIdType InsertNextTypedTuple(const vtkIdType *tuple)\n\n"},
  {"GetValue", PyvtkIdTypeArray_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: vtkIdType GetValue(vtkIdType id)\n\n"},
  {"SetValue", PyvtkIdTypeArray_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, vtkIdType value)\n\n"},
  {"SetNumberOfValues", PyvtkIdTypeArray_SetNumberOfValues, METH_VARARGS,
   "V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number) override;\n\nSpecify the number of values (tuples * components) for this\nobject to hold. Does an allocation as well as setting the MaxId\nivar. Used in conjunction with SetValue() method for fast\ninsertion.\n"},
  {"InsertValue", PyvtkIdTypeArray_InsertValue, METH_VARARGS,
   "V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, vtkIdType f)\n\n"},
  {"InsertNextValue", PyvtkIdTypeArray_InsertNextValue, METH_VARARGS,
   "V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(vtkIdType f)\n\n"},
  {"GetValueRange", PyvtkIdTypeArray_GetValueRange, METH_VARARGS,
   "V.GetValueRange(int) -> (int, int)\nC++: vtkIdType *GetValueRange(int comp)\nV.GetValueRange() -> (int, int)\nC++: vtkIdType *GetValueRange()\n\n"},
  {"WritePointer", PyvtkIdTypeArray_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: vtkIdType *WritePointer(vtkIdType id, vtkIdType number)\n\n"},
  {"GetPointer", PyvtkIdTypeArray_GetPointer, METH_VARARGS,
   "V.GetPointer(int) -> (int, ...)\nC++: vtkIdType *GetPointer(vtkIdType id)\n\n"},
  {"SetArray", PyvtkIdTypeArray_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int)\nC++: void SetArray(vtkIdType *array, vtkIdType size, int save)\nV.SetArray(int, int, int, int)\nC++: void SetArray(vtkIdType *array, vtkIdType size, int save,\n    int deleteMethod)\n\n"},
  {"FastDownCast", PyvtkIdTypeArray_FastDownCast, METH_VARARGS,
   "V.FastDownCast(vtkAbstractArray) -> vtkIdTypeArray\nC++: static vtkIdTypeArray *FastDownCast(vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {"GetDataTypeValueMin", PyvtkIdTypeArray_GetDataTypeValueMin, METH_VARARGS,
   "V.GetDataTypeValueMin() -> int\nC++: static vtkIdType GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {"GetDataTypeValueMax", PyvtkIdTypeArray_GetDataTypeValueMax, METH_VARARGS,
   "V.GetDataTypeValueMax() -> int\nC++: static vtkIdType GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIdTypeArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkIdTypeArray", // tp_name
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
  PyvtkIdTypeArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIdTypeArray_StaticNew()
{
  return vtkIdTypeArray::New();
}

PyObject *PyvtkIdTypeArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIdTypeArray_Type, PyvtkIdTypeArray_Methods,
    "vtkIdTypeArray",
 &PyvtkIdTypeArray_StaticNew);

  PyTypeObject *pytype = &PyvtkIdTypeArray_Type;

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

void PyVTKAddFile_vtkIdTypeArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIdTypeArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIdTypeArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

