// python wrapper for vtkDataArray
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
#include "vtkDataArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataArray_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractArray_ClassNew
extern "C" { PyObject *PyvtkAbstractArray_ClassNew(); }
#define DECLARED_PyvtkAbstractArray_ClassNew
#endif

static const char *PyvtkDataArray_Doc =
  "vtkDataArray - abstract superclass for arrays of numeric data\n\n"
  "Superclass: vtkAbstractArray\n\n"
  "vtkDataArray is an abstract superclass for data array objects\n"
  "containing numeric data.  It extends the API defined in\n"
  "vtkAbstractArray.  vtkDataArray is an abstract superclass for data\n"
  "array objects. This class defines an API that all array objects must\n"
  "support. Note that the concrete subclasses of this class represent\n"
  "data in native form (char, int, etc.) and often have specialized more\n"
  "efficient methods for operating on this data (for example, getting\n"
  "pointers to data or getting/inserting data in native form). \n"
  "Subclasses of vtkDataArray are assumed to contain data whose\n"
  "components are meaningful when cast to and from double.\n\n"
  "@sa\n"
  "vtkBitArray vtkGenericDataArray\n\n";


static PyObject *
PyvtkDataArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataArray *tempr = vtkDataArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataArray::NewInstance());

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
PyvtkDataArray_FastDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkDataArray *tempr = vtkDataArray::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsNumeric() :
      op->vtkDataArray::IsNumeric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementComponentSize() :
      op->vtkDataArray::GetElementComponentSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InsertTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    op->InsertTuple(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InsertTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataArray_InsertTuple_s1(self, args);
    case 2:
      return PyvtkDataArray_InsertTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuple");
  return nullptr;
}



static PyObject *
PyvtkDataArray_InsertNextTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkDataArray::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InsertNextTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    vtkIdType tempr = op->InsertNextTuple(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataArray_InsertNextTuple_s1(self, args);
    case 1:
      return PyvtkDataArray_InsertNextTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextTuple");
  return nullptr;
}



static PyObject *
PyvtkDataArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkDataArray_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->GetTuples(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::GetTuples(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->GetTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::GetTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataArray_GetTuples_s1(self, args);
    case 3:
      return PyvtkDataArray_GetTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuples");
  return nullptr;
}



static PyObject *
PyvtkDataArray_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::InterpolateTuple(temp0, temp1, temp2, temp3);
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
PyvtkDataArray_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataArray_InterpolateTuple_s1(self, args);
    case 6:
      return PyvtkDataArray_InterpolateTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    size_t sizer = op->GetNumberOfComponents();
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

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
PyvtkDataArray_GetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataArray_GetTuple_s1(self, args);
    case 2:
      return PyvtkDataArray_GetTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    double tempr = (ap.IsBound() ?
      op->GetTuple1(temp0) :
      op->vtkDataArray::GetTuple1(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTuple2(temp0) :
      op->vtkDataArray::GetTuple2(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTuple3(temp0) :
      op->vtkDataArray::GetTuple3(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTuple4(temp0) :
      op->vtkDataArray::GetTuple4(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTuple6(temp0) :
      op->vtkDataArray::GetTuple6(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTuple9(temp0) :
      op->vtkDataArray::GetTuple9(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_SetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::SetTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_SetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataArray_SetTuple_s1(self, args);
    case 2:
      return PyvtkDataArray_SetTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTuple");
  return nullptr;
}



static PyObject *
PyvtkDataArray_SetTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple1(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::SetTuple1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::SetTuple2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple3(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataArray::SetTuple3(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple4(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataArray::SetTuple4(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple6(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkDataArray::SetTuple6(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkDataArray::SetTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple1(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::InsertTuple1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::InsertTuple2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple3(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataArray::InsertTuple3(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple4(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataArray::InsertTuple4(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple6(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkDataArray::InsertTuple6(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkDataArray::InsertTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InsertNextTuple1(temp0);
    }
    else
    {
      op->vtkDataArray::InsertNextTuple1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertNextTuple2(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::InsertNextTuple2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->InsertNextTuple3(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::InsertNextTuple3(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InsertNextTuple4(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataArray::InsertNextTuple4(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple6");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->InsertNextTuple6(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataArray::InsertNextTuple6(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertNextTuple9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple9");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->InsertNextTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkDataArray::InsertNextTuple9(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    op->RemoveTuple(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_RemoveFirstTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveFirstTuple();
    }
    else
    {
      op->vtkDataArray::RemoveFirstTuple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_RemoveLastTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveLastTuple();
    }
    else
    {
      op->vtkDataArray::RemoveLastTuple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= compIdx && compIdx < GetNumberOfComponents()"))
  {
    double tempr = (ap.IsBound() ?
      op->GetComponent(temp0, temp1) :
      op->vtkDataArray::GetComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= compIdx && compIdx < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::SetComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_InsertComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0), "0 <= tupleIdx") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= compIdx && compIdx < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->InsertComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::InsertComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  int temp3;
  vtkDoubleArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataArray::GetData(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_DeepCopy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

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
      op->vtkDataArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArray_DeepCopy_Methods[] = {
  {nullptr, PyvtkDataArray_DeepCopy_s1, METH_VARARGS,
   "@V *vtkAbstractArray"},
  {nullptr, PyvtkDataArray_DeepCopy_s2, METH_VARARGS,
   "@V *vtkDataArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataArray_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArray_DeepCopy_Methods;
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
PyvtkDataArray_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDataArray::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_FillComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfComponents()),
                      "0 <= compIdx && compIdx < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->FillComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::FillComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDataArray::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_CopyComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataArray::CopyComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_WriteVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    void  *tempr = op->WriteVoidPointer(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkDataArray::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkDataArray::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkDataArray::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRange(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::GetRange(temp0, temp1);
    }

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
PyvtkDataArray_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange(temp0) :
      op->vtkDataArray::GetRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkDataArray::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetRange_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRange(temp0);
    }
    else
    {
      op->vtkDataArray::GetRange(temp0);
    }

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

static PyMethodDef PyvtkDataArray_GetRange_Methods[] = {
  {nullptr, PyvtkDataArray_GetRange_s2, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkDataArray_GetRange_s4, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataArray_GetRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArray_GetRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataArray_GetRange_s1(self, args);
    case 0:
      return PyvtkDataArray_GetRange_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetFiniteRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetFiniteRange(temp0, temp1);
    }
    else
    {
      op->vtkDataArray::GetFiniteRange(temp0, temp1);
    }

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
PyvtkDataArray_GetFiniteRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFiniteRange(temp0) :
      op->vtkDataArray::GetFiniteRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetFiniteRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFiniteRange() :
      op->vtkDataArray::GetFiniteRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetFiniteRange_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetFiniteRange(temp0);
    }
    else
    {
      op->vtkDataArray::GetFiniteRange(temp0);
    }

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

static PyMethodDef PyvtkDataArray_GetFiniteRange_Methods[] = {
  {nullptr, PyvtkDataArray_GetFiniteRange_s2, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkDataArray_GetFiniteRange_s4, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataArray_GetFiniteRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArray_GetFiniteRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataArray_GetFiniteRange_s1(self, args);
    case 0:
      return PyvtkDataArray_GetFiniteRange_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFiniteRange");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetDataTypeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataTypeRange(temp0);
    }
    else
    {
      op->vtkDataArray::GetDataTypeRange(temp0);
    }

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
PyvtkDataArray_GetDataTypeRange_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeRange");

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkDataArray::GetDataTypeRange(temp0, temp1);

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
PyvtkDataArray_GetDataTypeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataArray_GetDataTypeRange_s1(self, args);
    case 2:
      return PyvtkDataArray_GetDataTypeRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeRange");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetDataTypeMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDataTypeMin() :
      op->vtkDataArray::GetDataTypeMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMin_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeMin");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkDataArray::GetDataTypeMin(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataArray_GetDataTypeMin_s1(self, args);
    case 1:
      return PyvtkDataArray_GetDataTypeMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeMin");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetDataTypeMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDataTypeMax() :
      op->vtkDataArray::GetDataTypeMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMax_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeMax");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkDataArray::GetDataTypeMax(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArray_GetDataTypeMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataArray_GetDataTypeMax_s1(self, args);
    case 1:
      return PyvtkDataArray_GetDataTypeMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeMax");
  return nullptr;
}



static PyObject *
PyvtkDataArray_GetMaxNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxNorm() :
      op->vtkDataArray::GetMaxNorm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_CreateDataArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateDataArray");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = vtkDataArray::CreateDataArray(temp0);

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
PyvtkDataArray_COMPONENT_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPONENT_RANGE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataArray::COMPONENT_RANGE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_L2_NORM_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "L2_NORM_RANGE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataArray::L2_NORM_RANGE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_L2_NORM_FINITE_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "L2_NORM_FINITE_RANGE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataArray::L2_NORM_FINITE_RANGE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkDataArray::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_UNITS_LABEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UNITS_LABEL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkDataArray::UNITS_LABEL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_CopyInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->CopyInformation(temp0, temp1) :
      op->vtkDataArray::CopyInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArray_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArray *op = static_cast<vtkDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkDataArray::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArray_Methods[] = {
  {"IsTypeOf", PyvtkDataArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataArray\nC++: static vtkDataArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataArray\nC++: vtkDataArray *NewInstance()\n\n"},
  {"FastDownCast", PyvtkDataArray_FastDownCast, METH_VARARGS,
   "V.FastDownCast(vtkAbstractArray) -> vtkDataArray\nC++: static vtkDataArray *FastDownCast(vtkAbstractArray *source)\n\nPerform a fast, safe cast from a vtkAbstractArray to a\nvtkDataArray. This method checks if source->GetArrayType()\nreturns DataArray or a more derived type, and performs a\nstatic_cast to return source as a vtkDataArray pointer.\nOtherwise, nullptr is returned.\n"},
  {"IsNumeric", PyvtkDataArray_IsNumeric, METH_VARARGS,
   "V.IsNumeric() -> int\nC++: int IsNumeric() override;\n\nThis method is here to make backward compatibility easier.  It\nmust return true if and only if an array contains numeric data.\nAll vtkDataArray subclasses contain numeric data, hence this\nmethod always returns 1(true).\n"},
  {"GetElementComponentSize", PyvtkDataArray_GetElementComponentSize, METH_VARARGS,
   "V.GetElementComponentSize() -> int\nC++: int GetElementComponentSize() override;\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.\n"},
  {"InsertTuple", PyvtkDataArray_InsertTuple, METH_VARARGS,
   "V.InsertTuple(int, int, vtkAbstractArray)\nC++: void InsertTuple(vtkIdType dstTupleIdx,\n    vtkIdType srcTupleIdx, vtkAbstractArray *source) override;\nV.InsertTuple(int, (float, ...))\nC++: virtual void InsertTuple(vtkIdType tupleIdx,\n    const double *tuple)\n\nInsert the tuple at srcTupleIdx in the source array into this\narray at dstTupleIdx. Note that memory allocation is performed as\nnecessary to hold the data.\n"},
  {"InsertNextTuple", PyvtkDataArray_InsertNextTuple, METH_VARARGS,
   "V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: vtkIdType InsertNextTuple(vtkIdType srcTupleIdx,\n    vtkAbstractArray *source) override;\nV.InsertNextTuple((float, ...)) -> int\nC++: virtual vtkIdType InsertNextTuple(const double *tuple)\n\nInsert the tuple from srcTupleIdx in the source array at the end\nof this array. Note that memory allocation is performed as\nnecessary to hold the data. Returns the tuple index at which the\ndata was inserted.\n"},
  {"InsertTuples", PyvtkDataArray_InsertTuples, METH_VARARGS,
   "V.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\nV.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"GetTuples", PyvtkDataArray_GetTuples, METH_VARARGS,
   "V.GetTuples(vtkIdList, vtkAbstractArray)\nC++: void GetTuples(vtkIdList *tupleIds, vtkAbstractArray *output)\n     override;\nV.GetTuples(int, int, vtkAbstractArray)\nC++: void GetTuples(vtkIdType p1, vtkIdType p2,\n    vtkAbstractArray *output) override;\n\nGiven a list of tuple ids, return an array of tuples. You must\ninsure that the output array has been previously allocated with\nenough space to hold the data.\n"},
  {"InterpolateTuple", PyvtkDataArray_InterpolateTuple, METH_VARARGS,
   "V.InterpolateTuple(int, vtkIdList, vtkAbstractArray, [float, ...])\nC++: void InterpolateTuple(vtkIdType dstTupleIdx,\n    vtkIdList *ptIndices, vtkAbstractArray *source,\n    double *weights) override;\nV.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: void InterpolateTuple(vtkIdType dstTupleIdx,\n    vtkIdType srcTupleIdx1, vtkAbstractArray *source1,\n    vtkIdType srcTupleIdx2, vtkAbstractArray *source2, double t)\n    override;\n\nSet the tuple at dstTupleIdx in this array to the interpolated\ntuple value, given the ptIndices in the source array and\nassociated interpolation weights. This method assumes that the\ntwo arrays are of the same type and strcuture.\n"},
  {"GetTuple", PyvtkDataArray_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (float, ...)\nC++: virtual double *GetTuple(vtkIdType tupleIdx)\nV.GetTuple(int, [float, ...])\nC++: virtual void GetTuple(vtkIdType tupleIdx, double *tuple)\n\nGet the data tuple at tupleIdx. Return it as a pointer to an\narray. Note: this method is not thread-safe, and the pointer is\nonly valid as long as another method invocation to a vtk object\nis not performed.\n"},
  {"GetTuple1", PyvtkDataArray_GetTuple1, METH_VARARGS,
   "V.GetTuple1(int) -> float\nC++: double GetTuple1(vtkIdType tupleIdx)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"GetTuple2", PyvtkDataArray_GetTuple2, METH_VARARGS,
   "V.GetTuple2(int) -> (float, float)\nC++: double *GetTuple2(vtkIdType tupleIdx)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"GetTuple3", PyvtkDataArray_GetTuple3, METH_VARARGS,
   "V.GetTuple3(int) -> (float, float, float)\nC++: double *GetTuple3(vtkIdType tupleIdx)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"GetTuple4", PyvtkDataArray_GetTuple4, METH_VARARGS,
   "V.GetTuple4(int) -> (float, float, float, float)\nC++: double *GetTuple4(vtkIdType tupleIdx)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"GetTuple6", PyvtkDataArray_GetTuple6, METH_VARARGS,
   "V.GetTuple6(int) -> (float, float, float, float, float, float)\nC++: double *GetTuple6(vtkIdType tupleIdx)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"GetTuple9", PyvtkDataArray_GetTuple9, METH_VARARGS,
   "V.GetTuple9(int) -> (float, float, float, float, float, float,\n    float, float, float)\nC++: double *GetTuple9(vtkIdType tupleIdx)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"SetTuple", PyvtkDataArray_SetTuple, METH_VARARGS,
   "V.SetTuple(int, int, vtkAbstractArray)\nC++: void SetTuple(vtkIdType dstTupleIdx, vtkIdType srcTupleIdx,\n    vtkAbstractArray *source) override;\nV.SetTuple(int, (float, ...))\nC++: virtual void SetTuple(vtkIdType tupleIdx,\n    const double *tuple)\n\nSet the tuple at dstTupleIdx in this array to the tuple at\nsrcTupleIdx in the source array. This method assumes that the two\narrays have the same type and structure. Note that range checking\nand memory allocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {"SetTuple1", PyvtkDataArray_SetTuple1, METH_VARARGS,
   "V.SetTuple1(int, float)\nC++: void SetTuple1(vtkIdType tupleIdx, double value)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"SetTuple2", PyvtkDataArray_SetTuple2, METH_VARARGS,
   "V.SetTuple2(int, float, float)\nC++: void SetTuple2(vtkIdType tupleIdx, double val0, double val1)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"SetTuple3", PyvtkDataArray_SetTuple3, METH_VARARGS,
   "V.SetTuple3(int, float, float, float)\nC++: void SetTuple3(vtkIdType tupleIdx, double val0, double val1,\n    double val2)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"SetTuple4", PyvtkDataArray_SetTuple4, METH_VARARGS,
   "V.SetTuple4(int, float, float, float, float)\nC++: void SetTuple4(vtkIdType tupleIdx, double val0, double val1,\n    double val2, double val3)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"SetTuple6", PyvtkDataArray_SetTuple6, METH_VARARGS,
   "V.SetTuple6(int, float, float, float, float, float, float)\nC++: void SetTuple6(vtkIdType tupleIdx, double val0, double val1,\n    double val2, double val3, double val4, double val5)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"SetTuple9", PyvtkDataArray_SetTuple9, METH_VARARGS,
   "V.SetTuple9(int, float, float, float, float, float, float, float,\n    float, float)\nC++: void SetTuple9(vtkIdType tupleIdx, double val0, double val1,\n    double val2, double val3, double val4, double val5,\n    double val6, double val7, double val8)\n\nThese methods are included as convenience for the wrappers.\nGetTuple() and SetTuple() which return/take arrays can not be\nused from wrapped languages. These methods can be used instead.\n"},
  {"InsertTuple1", PyvtkDataArray_InsertTuple1, METH_VARARGS,
   "V.InsertTuple1(int, float)\nC++: void InsertTuple1(vtkIdType tupleIdx, double value)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertTuple2", PyvtkDataArray_InsertTuple2, METH_VARARGS,
   "V.InsertTuple2(int, float, float)\nC++: void InsertTuple2(vtkIdType tupleIdx, double val0,\n    double val1)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertTuple3", PyvtkDataArray_InsertTuple3, METH_VARARGS,
   "V.InsertTuple3(int, float, float, float)\nC++: void InsertTuple3(vtkIdType tupleIdx, double val0,\n    double val1, double val2)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertTuple4", PyvtkDataArray_InsertTuple4, METH_VARARGS,
   "V.InsertTuple4(int, float, float, float, float)\nC++: void InsertTuple4(vtkIdType tupleIdx, double val0,\n    double val1, double val2, double val3)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertTuple6", PyvtkDataArray_InsertTuple6, METH_VARARGS,
   "V.InsertTuple6(int, float, float, float, float, float, float)\nC++: void InsertTuple6(vtkIdType tupleIdx, double val0,\n    double val1, double val2, double val3, double val4,\n    double val5)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertTuple9", PyvtkDataArray_InsertTuple9, METH_VARARGS,
   "V.InsertTuple9(int, float, float, float, float, float, float,\n    float, float, float)\nC++: void InsertTuple9(vtkIdType tupleIdx, double val0,\n    double val1, double val2, double val3, double val4,\n    double val5, double val6, double val7, double val8)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertNextTuple1", PyvtkDataArray_InsertNextTuple1, METH_VARARGS,
   "V.InsertNextTuple1(float)\nC++: void InsertNextTuple1(double value)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertNextTuple2", PyvtkDataArray_InsertNextTuple2, METH_VARARGS,
   "V.InsertNextTuple2(float, float)\nC++: void InsertNextTuple2(double val0, double val1)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertNextTuple3", PyvtkDataArray_InsertNextTuple3, METH_VARARGS,
   "V.InsertNextTuple3(float, float, float)\nC++: void InsertNextTuple3(double val0, double val1, double val2)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertNextTuple4", PyvtkDataArray_InsertNextTuple4, METH_VARARGS,
   "V.InsertNextTuple4(float, float, float, float)\nC++: void InsertNextTuple4(double val0, double val1, double val2,\n    double val3)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertNextTuple6", PyvtkDataArray_InsertNextTuple6, METH_VARARGS,
   "V.InsertNextTuple6(float, float, float, float, float, float)\nC++: void InsertNextTuple6(double val0, double val1, double val2,\n    double val3, double val4, double val5)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"InsertNextTuple9", PyvtkDataArray_InsertNextTuple9, METH_VARARGS,
   "V.InsertNextTuple9(float, float, float, float, float, float,\n    float, float, float)\nC++: void InsertNextTuple9(double val0, double val1, double val2,\n    double val3, double val4, double val5, double val6,\n    double val7, double val8)\n\nThese methods are included as convenience for the wrappers.\nInsertTuple() which takes arrays can not be used from wrapped\nlanguages. These methods can be used instead.\n"},
  {"RemoveTuple", PyvtkDataArray_RemoveTuple, METH_VARARGS,
   "V.RemoveTuple(int)\nC++: virtual void RemoveTuple(vtkIdType tupleIdx)\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {"RemoveFirstTuple", PyvtkDataArray_RemoveFirstTuple, METH_VARARGS,
   "V.RemoveFirstTuple()\nC++: virtual void RemoveFirstTuple()\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {"RemoveLastTuple", PyvtkDataArray_RemoveLastTuple, METH_VARARGS,
   "V.RemoveLastTuple()\nC++: virtual void RemoveLastTuple()\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {"GetComponent", PyvtkDataArray_GetComponent, METH_VARARGS,
   "V.GetComponent(int, int) -> float\nC++: virtual double GetComponent(vtkIdType tupleIdx, int compIdx)\n\nReturn the data component at the location specified by tupleIdx\nand compIdx.\n"},
  {"SetComponent", PyvtkDataArray_SetComponent, METH_VARARGS,
   "V.SetComponent(int, int, float)\nC++: virtual void SetComponent(vtkIdType tupleIdx, int compIdx,\n    double value)\n\nSet the data component at the location specified by tupleIdx and\ncompIdx to value. Note that i is less than NumberOfTuples and j\nis less than NumberOfComponents. Make sure enough memory has been\nallocated (use SetNumberOfTuples() and SetNumberOfComponents()).\n"},
  {"InsertComponent", PyvtkDataArray_InsertComponent, METH_VARARGS,
   "V.InsertComponent(int, int, float)\nC++: virtual void InsertComponent(vtkIdType tupleIdx, int compIdx,\n     double value)\n\nInsert value at the location specified by tupleIdx and compIdx.\nNote that memory allocation is performed as necessary to hold the\ndata.\n"},
  {"GetData", PyvtkDataArray_GetData, METH_VARARGS,
   "V.GetData(int, int, int, int, vtkDoubleArray)\nC++: virtual void GetData(vtkIdType tupleMin, vtkIdType tupleMax,\n    int compMin, int compMax, vtkDoubleArray *data)\n\nGet the data as a double array in the range (tupleMin,tupleMax)\nand (compMin, compMax). The resulting double array consists of\nall data in the tuple range specified and only the component\nrange specified. This process typically requires casting the data\nfrom native form into doubleing point values. This method is\nprovided as a convenience for data exchange, and is not very\nfast.\n"},
  {"DeepCopy", PyvtkDataArray_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkAbstractArray)\nC++: void DeepCopy(vtkAbstractArray *aa) override;\nV.DeepCopy(vtkDataArray)\nC++: virtual void DeepCopy(vtkDataArray *da)\n\nDeep copy of data. Copies data from different data arrays even if\nthey are different types (using doubleing-point exchange).\n"},
  {"ShallowCopy", PyvtkDataArray_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: virtual void ShallowCopy(vtkDataArray *other)\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"FillComponent", PyvtkDataArray_FillComponent, METH_VARARGS,
   "V.FillComponent(int, float)\nC++: virtual void FillComponent(int compIdx, double value)\n\nFill a component of a data array with a specified value. This\nmethod sets the specified component to specified value for all\ntuples in the data array.  This methods can be used to initialize\nor reinitialize a single component of a multi-component array.\n"},
  {"Fill", PyvtkDataArray_Fill, METH_VARARGS,
   "V.Fill(float)\nC++: virtual void Fill(double value)\n\nFill all values of a data array with a specified value.\n"},
  {"CopyComponent", PyvtkDataArray_CopyComponent, METH_VARARGS,
   "V.CopyComponent(int, vtkDataArray, int)\nC++: virtual void CopyComponent(int dstComponent,\n    vtkDataArray *src, int srcComponent)\n\nCopy a component from one data array into a component on this\ndata array. This method copies the specified component\n(\"srcComponent\") from the specified data array (\"src\") to the\nspecified component (\"dstComponent\") over all the tuples in this\ndata array.  This method can be used to extract a component\n(column) from one data array and paste that data into a component\non this data array.\n"},
  {"WriteVoidPointer", PyvtkDataArray_WriteVoidPointer, METH_VARARGS,
   "V.WriteVoidPointer(int, int) -> void\nC++: virtual void *WriteVoidPointer(vtkIdType valueIdx,\n    vtkIdType numValues)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. If needed, increase\nMaxId to mark any new value ranges as in-use.\n"},
  {"GetActualMemorySize", PyvtkDataArray_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the memory in kibibytes (1024 bytes) consumed by this data\narray. Used to support streaming and reading/writing data. The\nvalue returned is guaranteed to be greater than or equal to the\nmemory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"CreateDefaultLookupTable", PyvtkDataArray_CreateDefaultLookupTable, METH_VARARGS,
   "V.CreateDefaultLookupTable()\nC++: void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available.\n"},
  {"SetLookupTable", PyvtkDataArray_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkLookupTable)\nC++: void SetLookupTable(vtkLookupTable *lut)\n\nSet/get the lookup table associated with this scalar data, if\nany.\n"},
  {"GetLookupTable", PyvtkDataArray_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\nSet/get the lookup table associated with this scalar data, if\nany.\n"},
  {"GetRange", PyvtkDataArray_GetRange, METH_VARARGS,
   "V.GetRange([float, float], int)\nC++: void GetRange(double range[2], int comp)\nV.GetRange(int) -> (float, float)\nC++: double *GetRange(int comp)\nV.GetRange() -> (float, float)\nC++: double *GetRange()\nV.GetRange([float, float])\nC++: void GetRange(double range[2])\n\nThe range of the data array values for the given component will\nbe returned in the provided range array argument. If comp is -1,\nthe range of the magnitude (L2 norm) over all components will be\nprovided. The range is computed and then cached, and will not be\nre-computed on subsequent calls to GetRange() unless the array is\nmodified or the requested component changes. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"GetFiniteRange", PyvtkDataArray_GetFiniteRange, METH_VARARGS,
   "V.GetFiniteRange([float, float], int)\nC++: void GetFiniteRange(double range[2], int comp)\nV.GetFiniteRange(int) -> (float, float)\nC++: double *GetFiniteRange(int comp)\nV.GetFiniteRange() -> (float, float)\nC++: double *GetFiniteRange()\nV.GetFiniteRange([float, float])\nC++: void GetFiniteRange(double range[2])\n\nThe range of the data array values for the given component will\nbe returned in the provided range array argument. If comp is -1,\nthe range of the magnitude (L2 norm) over all components will be\nprovided. The range is computed and then cached, and will not be\nre-computed on subsequent calls to GetRange() unless the array is\nmodified or the requested component changes. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"GetDataTypeRange", PyvtkDataArray_GetDataTypeRange, METH_VARARGS,
   "V.GetDataTypeRange([float, float])\nC++: void GetDataTypeRange(double range[2])\nV.GetDataTypeRange(int, [float, float])\nC++: static void GetDataTypeRange(int type, double range[2])\n\nThese methods return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255).\n"},
  {"GetDataTypeMin", PyvtkDataArray_GetDataTypeMin, METH_VARARGS,
   "V.GetDataTypeMin() -> float\nC++: double GetDataTypeMin()\nV.GetDataTypeMin(int) -> float\nC++: static double GetDataTypeMin(int type)\n\nThese methods return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255).\n"},
  {"GetDataTypeMax", PyvtkDataArray_GetDataTypeMax, METH_VARARGS,
   "V.GetDataTypeMax() -> float\nC++: double GetDataTypeMax()\nV.GetDataTypeMax(int) -> float\nC++: static double GetDataTypeMax(int type)\n\nThese methods return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255).\n"},
  {"GetMaxNorm", PyvtkDataArray_GetMaxNorm, METH_VARARGS,
   "V.GetMaxNorm() -> float\nC++: virtual double GetMaxNorm()\n\nReturn the maximum norm for the tuples. Note that the max. is\ncomputed every time GetMaxNorm is called.\n"},
  {"CreateDataArray", PyvtkDataArray_CreateDataArray, METH_VARARGS,
   "V.CreateDataArray(int) -> vtkDataArray\nC++: static vtkDataArray *CreateDataArray(int dataType)\n\nCreates an array for dataType where dataType is one of VTK_BIT,\nVTK_CHAR, VTK_SIGNED_CHAR, VTK_UNSIGNED_CHAR, VTK_SHORT,\nVTK_UNSIGNED_SHORT, VTK_INT, VTK_UNSIGNED_INT, VTK_LONG,\nVTK_UNSIGNED_LONG, VTK_DOUBLE, VTK_DOUBLE, VTK_ID_TYPE. Note that\nthe data array returned has be deleted by the user.\n"},
  {"COMPONENT_RANGE", PyvtkDataArray_COMPONENT_RANGE, METH_VARARGS,
   "V.COMPONENT_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *COMPONENT_RANGE()\n\nThis key is used to hold tight bounds on the range of one\ncomponent over all tuples of the array. Two values (a minimum and\nmaximum) are stored for each component. When GetRange() is called\nwhen no tuples are present in the array this value is set to {\nVTK_DOUBLE_MAX, VTK_DOUBLE_MIN }.\n"},
  {"L2_NORM_RANGE", PyvtkDataArray_L2_NORM_RANGE, METH_VARARGS,
   "V.L2_NORM_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *L2_NORM_RANGE()\n\nThis key is used to hold tight bounds on the $L_2$ norm of tuples\nin the array. Two values (a minimum and maximum) are stored for\neach component. When GetRange() is called when no tuples are\npresent in the array this value is set to { VTK_DOUBLE_MAX,\nVTK_DOUBLE_MIN }.\n"},
  {"L2_NORM_FINITE_RANGE", PyvtkDataArray_L2_NORM_FINITE_RANGE, METH_VARARGS,
   "V.L2_NORM_FINITE_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *L2_NORM_FINITE_RANGE()\n\nThis key is used to hold tight bounds on the $L_2$ norm of tuples\nin the array. Two values (a minimum and maximum) are stored for\neach component. When GetFiniteRange() is called when no tuples\nare present in the array this value is set to { VTK_DOUBLE_MAX,\nVTK_DOUBLE_MIN }.\n"},
  {"Modified", PyvtkDataArray_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nRemoves out-of-date L2_NORM_RANGE() and L2_NORM_FINITE_RANGE()\nvalues.\n"},
  {"UNITS_LABEL", PyvtkDataArray_UNITS_LABEL, METH_VARARGS,
   "V.UNITS_LABEL() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *UNITS_LABEL()\n\nA human-readable string indicating the units for the array data.\n"},
  {"CopyInformation", PyvtkDataArray_CopyInformation, METH_VARARGS,
   "V.CopyInformation(vtkInformation, int) -> int\nC++: int CopyInformation(vtkInformation *infoFrom, int deep=1)\n    override;\n\nCopy information instance. Arrays use information objects in a\nvariety of ways. It is important to have flexibility in this\nregard because certain keys should not be copied, while others\nmust be. NOTE: Up to the implmenter to make sure that keys not\nintended to be copied are excluded here.\n"},
  {"GetArrayType", PyvtkDataArray_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDataArray", // tp_name
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
  PyvtkDataArray_Doc, // tp_doc
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

PyObject *PyvtkDataArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataArray_Type, PyvtkDataArray_Methods,
    "vtkDataArray",
 nullptr);

  PyTypeObject *pytype = &PyvtkDataArray_Type;

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

void PyVTKAddFile_vtkDataArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

