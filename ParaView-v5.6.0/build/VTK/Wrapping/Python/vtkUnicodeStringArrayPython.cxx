// python wrapper for vtkUnicodeStringArray
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
#include "vtkUnicodeString.h"
#include "vtkUnicodeStringArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnicodeStringArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnicodeStringArray_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractArray_ClassNew
extern "C" { PyObject *PyvtkAbstractArray_ClassNew(); }
#define DECLARED_PyvtkAbstractArray_ClassNew
#endif

static const char *PyvtkUnicodeStringArray_Doc =
  "vtkUnicodeStringArray - Subclass of vtkAbstractArray that holds\nvtkUnicodeStrings\n\n"
  "Superclass: vtkAbstractArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkUnicodeStringArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnicodeStringArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnicodeStringArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnicodeStringArray *tempr = vtkUnicodeStringArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeStringArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnicodeStringArray::NewInstance());

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
PyvtkUnicodeStringArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkUnicodeStringArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUnicodeStringArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkUnicodeStringArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkUnicodeStringArray::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementComponentSize() :
      op->vtkUnicodeStringArray::GetElementComponentSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnicodeStringArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkUnicodeStringArray_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}



static PyObject *
PyvtkUnicodeStringArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkUnicodeStringArray::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkUnicodeStringArray::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->InterpolateTuple(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnicodeStringArray::InterpolateTuple(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  vtkIdType temp3;
  vtkAbstractArray *temp4 = nullptr;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkUnicodeStringArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkUnicodeStringArray_InterpolateTuple_s1(self, args);
    case 6:
      return PyvtkUnicodeStringArray_InterpolateTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return nullptr;
}



static PyObject *
PyvtkUnicodeStringArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkUnicodeStringArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkUnicodeStringArray::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetVoidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::SetVoidArray(temp0, temp1, temp2);
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
PyvtkUnicodeStringArray_SetVoidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::SetVoidArray(temp0, temp1, temp2, temp3);
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
PyvtkUnicodeStringArray_SetVoidArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnicodeStringArray_SetVoidArray_s1(self, args);
    case 4:
      return PyvtkUnicodeStringArray_SetVoidArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVoidArray");
  return nullptr;
}



static PyObject *
PyvtkUnicodeStringArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkUnicodeStringArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsNumeric() :
      op->vtkUnicodeStringArray::IsNumeric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkUnicodeStringArray::NewIterator());

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
PyvtkUnicodeStringArray_GetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= idx && idx < GetNumberOfValues()"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkUnicodeStringArray::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->LookupValue(*temp0) :
      op->vtkUnicodeStringArray::LookupValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::LookupValue(*temp0, temp1);
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
PyvtkUnicodeStringArray_LookupValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnicodeStringArray_LookupValue_s1(self, args);
    case 2:
      return PyvtkUnicodeStringArray_LookupValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return nullptr;
}



static PyObject *
PyvtkUnicodeStringArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::SetVariantValue(temp0, *temp1);
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
PyvtkUnicodeStringArray_InsertVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      op->vtkUnicodeStringArray::InsertVariantValue(temp0, *temp1);
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
PyvtkUnicodeStringArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataChanged();
    }
    else
    {
      op->vtkUnicodeStringArray::DataChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLookup();
    }
    else
    {
      op->vtkUnicodeStringArray::ClearLookup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkUnicodeStringArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
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
      op->vtkUnicodeStringArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
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
      op->vtkUnicodeStringArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkUnicodeStringArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertNextUTF8Value(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextUTF8Value");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InsertNextUTF8Value(temp0);
    }
    else
    {
      op->vtkUnicodeStringArray::InsertNextUTF8Value(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetUTF8Value(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8Value");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUTF8Value(temp0, temp1);
    }
    else
    {
      op->vtkUnicodeStringArray::SetUTF8Value(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetUTF8Value(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8Value");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8Value(temp0) :
      op->vtkUnicodeStringArray::GetUTF8Value(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnicodeStringArray_Methods[] = {
  {"IsTypeOf", PyvtkUnicodeStringArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnicodeStringArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnicodeStringArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUnicodeStringArray\nC++: static vtkUnicodeStringArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnicodeStringArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnicodeStringArray\nC++: vtkUnicodeStringArray *NewInstance()\n\n"},
  {"Allocate", PyvtkUnicodeStringArray_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000) override;\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used. This method will\nreset MaxId to -1 and resize the array capacity such that\nthis->Size >= numValues. If numValues is 0, all memory will be\nfreed. Return 1 on success, 0 on failure.\n"},
  {"Initialize", PyvtkUnicodeStringArray_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRelease storage and reset array to initial state.\n"},
  {"GetDataType", PyvtkUnicodeStringArray_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetDataTypeSize", PyvtkUnicodeStringArray_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize() override;\n\nReturn the size of the underlying data type.  For a bit, 0 is\nreturned.  For string 0 is returned. Arrays with variable length\ncomponents return 0.\n"},
  {"GetElementComponentSize", PyvtkUnicodeStringArray_GetElementComponentSize, METH_VARARGS,
   "V.GetElementComponentSize() -> int\nC++: int GetElementComponentSize() override;\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.  For vtkStringArray, this is\nsizeof(vtkStdString::value_type), which winds up being\nsizeof(char).\n"},
  {"SetNumberOfTuples", PyvtkUnicodeStringArray_SetNumberOfTuples, METH_VARARGS,
   "V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(vtkIdType number) override;\n\nSet the number of tuples (a component group) in the array. Note\nthat this may allocate space depending on the number of\ncomponents. Also note that if allocation is performed no copy is\nperformed so existing data will be lost (if data conservation is\nsought, one may use the Resize method instead).\n"},
  {"SetTuple", PyvtkUnicodeStringArray_SetTuple, METH_VARARGS,
   "V.SetTuple(int, int, vtkAbstractArray)\nC++: void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\n\nSet the tuple at dstTupleIdx in this array to the tuple at\nsrcTupleIdx in the source array. This method assumes that the two\narrays have the same type and structure. Note that range checking\nand memory allocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {"InsertTuple", PyvtkUnicodeStringArray_InsertTuple, METH_VARARGS,
   "V.InsertTuple(int, int, vtkAbstractArray)\nC++: void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\n\nInsert the tuple at srcTupleIdx in the source array into this\narray at dstTupleIdx. Note that memory allocation is performed as\nnecessary to hold the data.\n"},
  {"InsertTuples", PyvtkUnicodeStringArray_InsertTuples, METH_VARARGS,
   "V.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\nV.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"InsertNextTuple", PyvtkUnicodeStringArray_InsertNextTuple, METH_VARARGS,
   "V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source) override;\n\nInsert the tuple from srcTupleIdx in the source array at the end\nof this array. Note that memory allocation is performed as\nnecessary to hold the data. Returns the tuple index at which the\ndata was inserted.\n"},
  {"GetVoidPointer", PyvtkUnicodeStringArray_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType id) override;\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation. Use of this method is discouraged,\nas newer arrays require a deep-copy of the array data in order to\nreturn a suitable pointer. See vtkArrayDispatch for a safer\nalternative for fast data access.\n"},
  {"DeepCopy", PyvtkUnicodeStringArray_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkAbstractArray)\nC++: void DeepCopy(vtkAbstractArray *da) override;\n\nDeep copy of data. Implementation left to subclasses, which\nshould support as many type conversions as possible given the\ndata type.\n\n* Subclasses should call vtkAbstractArray::DeepCopy() so that the\n* information object (if one exists) is copied from da.\n"},
  {"InterpolateTuple", PyvtkUnicodeStringArray_InterpolateTuple, METH_VARARGS,
   "V.InterpolateTuple(int, vtkIdList, vtkAbstractArray, [float, ...])\nC++: void InterpolateTuple(vtkIdType i, vtkIdList *ptIndices,\n    vtkAbstractArray *source, double *weights) override;\nV.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t) override;\n\nSet the tuple at dstTupleIdx in this array to the interpolated\ntuple value, given the ptIndices in the source array and\nassociated interpolation weights. This method assumes that the\ntwo arrays are of the same type and strcuture.\n"},
  {"Squeeze", PyvtkUnicodeStringArray_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze() override;\n\nFree any unnecessary memory. Description: Resize object to just\nfit data requirement. Reclaims extra memory.\n"},
  {"Resize", PyvtkUnicodeStringArray_Resize, METH_VARARGS,
   "V.Resize(int) -> int\nC++: int Resize(vtkIdType numTuples) override;\n\nResize the array to the requested number of tuples and preserve\ndata. Increasing the array size may allocate extra memory beyond\nwhat was requested. MaxId will not be modified when increasing\narray size. Decreasing the array size will trim memory to the\nrequested size and may update MaxId if the valid id range is\ntruncated. Requesting an array size of 0 will free all memory.\nReturns 1 if resizing succeeded and 0 otherwise.\n"},
  {"SetVoidArray", PyvtkUnicodeStringArray_SetVoidArray, METH_VARARGS,
   "V.SetVoidArray(void, int, int)\nC++: void SetVoidArray(void *array, vtkIdType size, int save)\n    override;\nV.SetVoidArray(void, int, int, int)\nC++: void SetVoidArray(void *array, vtkIdType size, int save,\n    int deleteMethod) override;\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory. \nThe class uses the actual array provided; it does not copy the\ndata from the supplied array. If specified, the delete method\ndetermines how the data array will be deallocated. If the delete\nmethod is VTK_DATA_ARRAY_FREE, free() will be used. If the delete\nmethod is VTK_DATA_ARRAY_DELETE, delete[] will be used. If the\ndelete method is VTK_DATA_ARRAY_ALIGNED_FREE _aligned_free() will\nbe used on windows, while free() will be used everywhere else. If\nthe delete method is VTK_DATA_ARRAY_USER_DEFINED a custom free\nfunction can be assigned to be called using SetArrayFreeFunction,\nif no custom function is assigned we will default to free(). The\ndefault is FREE. (Note not all subclasses can support\ndeleteMethod.)\n"},
  {"GetActualMemorySize", PyvtkUnicodeStringArray_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the memory in kibibytes (1024 bytes) consumed by this data\narray. Used to support streaming and reading/writing data. The\nvalue returned is guaranteed to be greater than or equal to the\nmemory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"IsNumeric", PyvtkUnicodeStringArray_IsNumeric, METH_VARARGS,
   "V.IsNumeric() -> int\nC++: int IsNumeric() override;\n\nThis method is here to make backward compatibility easier.  It\nmust return true if and only if an array contains numeric data.\n"},
  {"NewIterator", PyvtkUnicodeStringArray_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"GetVariantValue", PyvtkUnicodeStringArray_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(vtkIdType idx) override;\n\nRetrieve value from the array as a variant.\n"},
  {"LookupValue", PyvtkUnicodeStringArray_LookupValue, METH_VARARGS,
   "V.LookupValue(vtkVariant) -> int\nC++: vtkIdType LookupValue(vtkVariant value) override;\nV.LookupValue(vtkVariant, vtkIdList)\nC++: void LookupValue(vtkVariant value, vtkIdList *ids) override;\n\nReturn the value indices where a specific value appears.\n"},
  {"SetVariantValue", PyvtkUnicodeStringArray_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nSet a value in the array from a variant.  This method does NOT do\nbounds checking.\n"},
  {"InsertVariantValue", PyvtkUnicodeStringArray_InsertVariantValue, METH_VARARGS,
   "V.InsertVariantValue(int, vtkVariant)\nC++: void InsertVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nInsert a value into the array from a variant.  This method does\nbounds checking.\n"},
  {"DataChanged", PyvtkUnicodeStringArray_DataChanged, METH_VARARGS,
   "V.DataChanged()\nC++: void DataChanged() override;\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {"ClearLookup", PyvtkUnicodeStringArray_ClearLookup, METH_VARARGS,
   "V.ClearLookup()\nC++: void ClearLookup() override;\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {"InsertNextValue", PyvtkUnicodeStringArray_InsertNextValue, METH_VARARGS,
   "V.InsertNextValue(unicode) -> int\nC++: vtkIdType InsertNextValue(const vtkUnicodeString &)\n\n"},
  {"InsertValue", PyvtkUnicodeStringArray_InsertValue, METH_VARARGS,
   "V.InsertValue(int, unicode)\nC++: void InsertValue(vtkIdType idx, const vtkUnicodeString &)\n\n"},
  {"SetValue", PyvtkUnicodeStringArray_SetValue, METH_VARARGS,
   "V.SetValue(int, unicode)\nC++: void SetValue(vtkIdType i, const vtkUnicodeString &)\n\n"},
  {"GetValue", PyvtkUnicodeStringArray_GetValue, METH_VARARGS,
   "V.GetValue(int) -> unicode\nC++: vtkUnicodeString &GetValue(vtkIdType i)\n\n"},
  {"InsertNextUTF8Value", PyvtkUnicodeStringArray_InsertNextUTF8Value, METH_VARARGS,
   "V.InsertNextUTF8Value(string)\nC++: void InsertNextUTF8Value(const char *)\n\n"},
  {"SetUTF8Value", PyvtkUnicodeStringArray_SetUTF8Value, METH_VARARGS,
   "V.SetUTF8Value(int, string)\nC++: void SetUTF8Value(vtkIdType i, const char *)\n\n"},
  {"GetUTF8Value", PyvtkUnicodeStringArray_GetUTF8Value, METH_VARARGS,
   "V.GetUTF8Value(int) -> string\nC++: const char *GetUTF8Value(vtkIdType i)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnicodeStringArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkUnicodeStringArray", // tp_name
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
  PyvtkUnicodeStringArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnicodeStringArray_StaticNew()
{
  return vtkUnicodeStringArray::New();
}

PyObject *PyvtkUnicodeStringArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnicodeStringArray_Type, PyvtkUnicodeStringArray_Methods,
    "vtkUnicodeStringArray",
 &PyvtkUnicodeStringArray_StaticNew);

  PyTypeObject *pytype = &PyvtkUnicodeStringArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnicodeStringArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnicodeStringArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnicodeStringArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

