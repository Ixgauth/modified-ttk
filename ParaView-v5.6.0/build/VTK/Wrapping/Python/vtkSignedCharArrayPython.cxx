// python wrapper for vtkSignedCharArray
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
#include "vtkSignedCharArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSignedCharArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSignedCharArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif

static const char *PyvtkSignedCharArray_Doc =
  "vtkSignedCharArray - dynamic, self-adjusting array of signed char\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkSignedCharArray is an array of values of type signed char. It\n"
  "provides methods for insertion and retrieval of values and will\n"
  "automatically resize itself to hold new data.\n\n";


static PyObject *
PyvtkSignedCharArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSignedCharArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSignedCharArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSignedCharArray *tempr = vtkSignedCharArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSignedCharArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSignedCharArray::NewInstance());

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
PyvtkSignedCharArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkSignedCharArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<signed char> store1(2*size1);
  signed char *temp1 = store1.Data();
  signed char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
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
      op->vtkSignedCharArray::GetTypedTuple(temp0, temp1);
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
PyvtkSignedCharArray_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<signed char> store1(size1);
  signed char *temp1 = store1.Data();
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
      op->vtkSignedCharArray::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_InsertTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<signed char> store1(size1);
  signed char *temp1 = store1.Data();
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
      op->vtkSignedCharArray::InsertTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_InsertNextTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<signed char> store0(size0);
  signed char *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTypedTuple(temp0) :
      op->vtkSignedCharArray::InsertNextTypedTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < GetNumberOfValues()"))
  {
    signed char tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSignedCharArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  signed char temp1;
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
      op->vtkSignedCharArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

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
      op->vtkSignedCharArray::SetNumberOfValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  signed char temp1;
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
      op->vtkSignedCharArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  signed char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkSignedCharArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_GetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    signed char *tempr = (ap.IsBound() ?
      op->GetValueRange(temp0) :
      op->vtkSignedCharArray::GetValueRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSignedCharArray_GetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    signed char *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkSignedCharArray::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSignedCharArray_GetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSignedCharArray_GetValueRange_s1(self, args);
    case 0:
      return PyvtkSignedCharArray_GetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValueRange");
  return nullptr;
}



static PyObject *
PyvtkSignedCharArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    signed char *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkSignedCharArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    signed char *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkSignedCharArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_SetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  signed char *temp0;
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
      op->vtkSignedCharArray::SetArray(temp0, temp1, temp2);
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
PyvtkSignedCharArray_SetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedCharArray *op = static_cast<vtkSignedCharArray *>(vp);

  signed char *temp0;
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
      op->vtkSignedCharArray::SetArray(temp0, temp1, temp2, temp3);
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
PyvtkSignedCharArray_SetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSignedCharArray_SetArray_s1(self, args);
    case 4:
      return PyvtkSignedCharArray_SetArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArray");
  return nullptr;
}



static PyObject *
PyvtkSignedCharArray_FastDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkSignedCharArray *tempr = vtkSignedCharArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_GetDataTypeValueMin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMin");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    signed char tempr = vtkSignedCharArray::GetDataTypeValueMin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedCharArray_GetDataTypeValueMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeValueMax");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    signed char tempr = vtkSignedCharArray::GetDataTypeValueMax();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSignedCharArray_Methods[] = {
  {"IsTypeOf", PyvtkSignedCharArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSignedCharArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSignedCharArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSignedCharArray\nC++: static vtkSignedCharArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSignedCharArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSignedCharArray\nC++: vtkSignedCharArray *NewInstance()\n\n"},
  {"GetDataType", PyvtkSignedCharArray_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetTypedTuple", PyvtkSignedCharArray_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType i, signed char *tuple)\n\n"},
  {"SetTypedTuple", PyvtkSignedCharArray_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType i, const signed char *tuple)\n\n"},
  {"InsertTypedTuple", PyvtkSignedCharArray_InsertTypedTuple, METH_VARARGS,
   "V.InsertTypedTuple(int, (int, ...))\nC++: void InsertTypedTuple(vtkIdType i, const signed char *tuple)\n\n"},
  {"InsertNextTypedTuple", PyvtkSignedCharArray_InsertNextTypedTuple, METH_VARARGS,
   "V.InsertNextTypedTuple((int, ...)) -> int\nC++: vtkIdType InsertNextTypedTuple(const signed char *tuple)\n\n"},
  {"GetValue", PyvtkSignedCharArray_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: signed char GetValue(vtkIdType id)\n\n"},
  {"SetValue", PyvtkSignedCharArray_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, signed char value)\n\n"},
  {"SetNumberOfValues", PyvtkSignedCharArray_SetNumberOfValues, METH_VARARGS,
   "V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number) override;\n\nSpecify the number of values (tuples * components) for this\nobject to hold. Does an allocation as well as setting the MaxId\nivar. Used in conjunction with SetValue() method for fast\ninsertion.\n"},
  {"InsertValue", PyvtkSignedCharArray_InsertValue, METH_VARARGS,
   "V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, signed char f)\n\n"},
  {"InsertNextValue", PyvtkSignedCharArray_InsertNextValue, METH_VARARGS,
   "V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(signed char f)\n\n"},
  {"GetValueRange", PyvtkSignedCharArray_GetValueRange, METH_VARARGS,
   "V.GetValueRange(int) -> (int, int)\nC++: signed char *GetValueRange(int comp)\nV.GetValueRange() -> (int, int)\nC++: signed char *GetValueRange()\n\n"},
  {"WritePointer", PyvtkSignedCharArray_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: signed char *WritePointer(vtkIdType id, vtkIdType number)\n\n"},
  {"GetPointer", PyvtkSignedCharArray_GetPointer, METH_VARARGS,
   "V.GetPointer(int) -> (int, ...)\nC++: signed char *GetPointer(vtkIdType id)\n\n"},
  {"SetArray", PyvtkSignedCharArray_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int)\nC++: void SetArray(signed char *array, vtkIdType size, int save)\nV.SetArray(int, int, int, int)\nC++: void SetArray(signed char *array, vtkIdType size, int save,\n    int deleteMethod)\n\n"},
  {"FastDownCast", PyvtkSignedCharArray_FastDownCast, METH_VARARGS,
   "V.FastDownCast(vtkAbstractArray) -> vtkSignedCharArray\nC++: static vtkSignedCharArray *FastDownCast(\n    vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {"GetDataTypeValueMin", PyvtkSignedCharArray_GetDataTypeValueMin, METH_VARARGS,
   "V.GetDataTypeValueMin() -> int\nC++: static signed char GetDataTypeValueMin()\n\nGet the minimum data value in its native type.\n"},
  {"GetDataTypeValueMax", PyvtkSignedCharArray_GetDataTypeValueMax, METH_VARARGS,
   "V.GetDataTypeValueMax() -> int\nC++: static signed char GetDataTypeValueMax()\n\nGet the maximum data value in its native type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSignedCharArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSignedCharArray", // tp_name
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
  PyvtkSignedCharArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSignedCharArray_StaticNew()
{
  return vtkSignedCharArray::New();
}

PyObject *PyvtkSignedCharArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSignedCharArray_Type, PyvtkSignedCharArray_Methods,
    "vtkSignedCharArray",
 &PyvtkSignedCharArray_StaticNew);

  PyTypeObject *pytype = &PyvtkSignedCharArray_Type;

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

void PyVTKAddFile_vtkSignedCharArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSignedCharArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSignedCharArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

