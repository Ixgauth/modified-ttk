// python wrapper for vtkFieldData
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
#include "vtkFieldData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFieldData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFieldData_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFieldData_Doc =
  "vtkFieldData - represent and manipulate fields of data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFieldData represents and manipulates fields of data. The model of\n"
  "a field is a m x n matrix of data values, where m is the number of\n"
  "tuples, and n is the number of components. (A tuple is a row of n\n"
  "components in the matrix.) The field is assumed to be composed of a\n"
  "set of one or more data arrays, where the data in the arrays are of\n"
  "different types (e.g., int, double, char, etc.), and there may be\n"
  "variable numbers of components in each array. Note that each data\n"
  "array is assumed to be \"m\" in length (i.e., number of tuples), which\n"
  "typically corresponds to the number of points or cells in a dataset.\n"
  "Also, each data array must have a character-string name. (This is\n"
  "used to manipulate data.)\n\n"
  "There are two ways of manipulating and interfacing to fields. You can\n"
  "do it generically by manipulating components/tuples via a double-type\n"
  "data exchange, or you can do it by grabbing the arrays and\n"
  "manipulating them directly. The former is simpler but performs type\n"
  "conversion, which is bad if your data has non-castable types like\n"
  "(void) pointers, or you lose information as a result of the cast.\n"
  "The, more efficient method means managing each array in the field. \n"
  "Using this method you can create faster, more efficient algorithms\n"
  "that do not lose information.\n\n"
  "@sa\n"
  "vtkAbstractArray vtkDataSetAttributes vtkPointData vtkCellData\n\n";


static PyObject *
PyvtkFieldData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFieldData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFieldData *tempr = vtkFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldData::NewInstance());

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
PyvtkFieldData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkFieldData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkFieldData::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkFieldData::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_AllocateArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AllocateArrays(temp0);
    }
    else
    {
      op->vtkFieldData::AllocateArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkFieldData::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AddArray(temp0) :
      op->vtkFieldData::AddArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_RemoveArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkFieldData::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_RemoveArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkFieldData::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_RemoveArray_Methods[] = {
  {nullptr, PyvtkFieldData_RemoveArray_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkFieldData_RemoveArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_RemoveArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_RemoveArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveArray");
  return nullptr;
}



static PyObject *
PyvtkFieldData_GetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkFieldData::GetArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0, temp1) :
      op->vtkFieldData::GetArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetArray_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkFieldData::GetArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_GetArray_Methods[] = {
  {nullptr, PyvtkFieldData_GetArray_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkFieldData_GetArray_s3, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_GetArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFieldData_GetArray_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArray");
  return nullptr;
}



static PyObject *
PyvtkFieldData_GetAbstractArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractArray(temp0) :
      op->vtkFieldData::GetAbstractArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetAbstractArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractArray(temp0, temp1) :
      op->vtkFieldData::GetAbstractArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetAbstractArray_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractArray(temp0) :
      op->vtkFieldData::GetAbstractArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_GetAbstractArray_Methods[] = {
  {nullptr, PyvtkFieldData_GetAbstractArray_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkFieldData_GetAbstractArray_s3, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_GetAbstractArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetAbstractArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFieldData_GetAbstractArray_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAbstractArray");
  return nullptr;
}



static PyObject *
PyvtkFieldData_HasArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasArray(temp0) :
      op->vtkFieldData::HasArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkFieldData::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_PassData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->PassData(temp0);
    }
    else
    {
      op->vtkFieldData::PassData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyFieldOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOn(temp0);
    }
    else
    {
      op->vtkFieldData::CopyFieldOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyFieldOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOff(temp0);
    }
    else
    {
      op->vtkFieldData::CopyFieldOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOn(temp0);
    }
    else
    {
      op->vtkFieldData::CopyAllOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOff(temp0);
    }
    else
    {
      op->vtkFieldData::CopyAllOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkFieldData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkFieldData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkFieldData::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkFieldData::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkFieldData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFieldData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkFieldData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->GetField(temp0, temp1);
    }
    else
    {
      op->vtkFieldData::GetField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetArrayContainingComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayContainingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayContainingComponent(temp0, temp1) :
      op->vtkFieldData::GetArrayContainingComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkFieldData::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkFieldData::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      op->vtkFieldData::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkFieldData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldData::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkFieldData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldData::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkFieldData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkFieldData::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_Methods[] = {
  {"IsTypeOf", PyvtkFieldData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFieldData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFieldData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFieldData\nC++: static vtkFieldData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFieldData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFieldData\nC++: vtkFieldData *NewInstance()\n\n"},
  {"Initialize", PyvtkFieldData_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nRelease all data but do not delete object. Also, clear the copy\nflags.\n"},
  {"Allocate", PyvtkFieldData_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate data for each array. Note that ext is no longer used.\n"},
  {"CopyStructure", PyvtkFieldData_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkFieldData)\nC++: void CopyStructure(vtkFieldData *)\n\nCopy data array structure from a given field.  The same arrays\nwill exist with the same types, but will contain nothing in the\ncopy.\n"},
  {"AllocateArrays", PyvtkFieldData_AllocateArrays, METH_VARARGS,
   "V.AllocateArrays(int)\nC++: void AllocateArrays(int num)\n\nAllocateOfArrays actually sets the number of vtkAbstractArray\npointers in the vtkFieldData object, not the number of used\npointers (arrays). Adding more arrays will cause the object to\ndynamically adjust the number of pointers if it needs to extend.\nAlthough AllocateArrays can be used if the number of arrays which\nwill be added is known, it can be omitted with a small\ncomputation cost.\n"},
  {"GetNumberOfArrays", PyvtkFieldData_GetNumberOfArrays, METH_VARARGS,
   "V.GetNumberOfArrays() -> int\nC++: int GetNumberOfArrays()\n\nGet the number of arrays of data available. This does not include\nnullptr array pointers therefore after fd->AllocateArray(n);\nnArrays = GetNumberOfArrays() nArrays is not necessarily equal to\nn.\n"},
  {"AddArray", PyvtkFieldData_AddArray, METH_VARARGS,
   "V.AddArray(vtkAbstractArray) -> int\nC++: int AddArray(vtkAbstractArray *array)\n\nAdd an array to the array list. If an array with the same name\nalready exists - then the added array will replace it. Return the\nindex of the added array.\n"},
  {"RemoveArray", PyvtkFieldData_RemoveArray, METH_VARARGS,
   "V.RemoveArray(string)\nC++: virtual void RemoveArray(const char *name)\nV.RemoveArray(int)\nC++: virtual void RemoveArray(int index)\n\nRemove an array (with the given name or index) from the list of\narrays.\n"},
  {"GetArray", PyvtkFieldData_GetArray, METH_VARARGS,
   "V.GetArray(int) -> vtkDataArray\nC++: vtkDataArray *GetArray(int i)\nV.GetArray(string, int) -> vtkDataArray\nC++: vtkDataArray *GetArray(const char *arrayName, int &index)\nV.GetArray(string) -> vtkDataArray\nC++: vtkDataArray *GetArray(const char *arrayName)\n\nNot recommended for use. Use GetAbstractArray(int i) instead.\n\nReturn the ith array in the field. A nullptr is returned if the\nindex i is out of range, or if the array at the given index is\nnot a vtkDataArray. To access vtkStringArray,\nvtkUnicodeStringArray, or vtkVariantArray, use\nGetAbstractArray(int i).\n"},
  {"GetAbstractArray", PyvtkFieldData_GetAbstractArray, METH_VARARGS,
   "V.GetAbstractArray(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(int i)\nV.GetAbstractArray(string, int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(const char *arrayName,\n    int &index)\nV.GetAbstractArray(string) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(const char *arrayName)\n\nReturns the ith array in the field. Unlike GetArray(), this\nmethod returns a vtkAbstractArray and can be used to access any\narray type. A nullptr is returned only if the index i is out of\nrange.\n"},
  {"HasArray", PyvtkFieldData_HasArray, METH_VARARGS,
   "V.HasArray(string) -> int\nC++: int HasArray(const char *name)\n\nReturn 1 if an array with the given name could be found. 0\notherwise.\n"},
  {"GetArrayName", PyvtkFieldData_GetArrayName, METH_VARARGS,
   "V.GetArrayName(int) -> string\nC++: const char *GetArrayName(int i)\n\nGet the name of ith array. Note that this is equivalent to:\nGetAbstractArray(i)->GetName() if ith array pointer is not\nnullptr\n"},
  {"PassData", PyvtkFieldData_PassData, METH_VARARGS,
   "V.PassData(vtkFieldData)\nC++: virtual void PassData(vtkFieldData *fd)\n\nPass entire arrays of input data through to output. Obey the\n\"copy\" flags.\n"},
  {"CopyFieldOn", PyvtkFieldData_CopyFieldOn, METH_VARARGS,
   "V.CopyFieldOn(string)\nC++: void CopyFieldOn(const char *name)\n\nTurn on/off the copying of the field specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {"CopyFieldOff", PyvtkFieldData_CopyFieldOff, METH_VARARGS,
   "V.CopyFieldOff(string)\nC++: void CopyFieldOff(const char *name)\n\n"},
  {"CopyAllOn", PyvtkFieldData_CopyAllOn, METH_VARARGS,
   "V.CopyAllOn(int)\nC++: virtual void CopyAllOn(int unused=0)\n\nTurn on copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {"CopyAllOff", PyvtkFieldData_CopyAllOff, METH_VARARGS,
   "V.CopyAllOff(int)\nC++: virtual void CopyAllOff(int unused=0)\n\nTurn off copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {"DeepCopy", PyvtkFieldData_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkFieldData)\nC++: virtual void DeepCopy(vtkFieldData *da)\n\nCopy a field by creating new data arrays (i.e., duplicate\nstorage).\n"},
  {"ShallowCopy", PyvtkFieldData_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkFieldData)\nC++: virtual void ShallowCopy(vtkFieldData *da)\n\nCopy a field by reference counting the data arrays.\n"},
  {"Squeeze", PyvtkFieldData_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze()\n\nSqueezes each data array in the field (Squeeze() reclaims unused\nmemory.)\n"},
  {"Reset", PyvtkFieldData_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nResets each data array in the field (Reset() does not release\nmemory but it makes the arrays look like they are empty.)\n"},
  {"GetActualMemorySize", PyvtkFieldData_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this\nfield data. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object.\n"},
  {"GetMTime", PyvtkFieldData_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nCheck object's components for modified times.\n"},
  {"GetField", PyvtkFieldData_GetField, METH_VARARGS,
   "V.GetField(vtkIdList, vtkFieldData)\nC++: void GetField(vtkIdList *ptId, vtkFieldData *f)\n\nGet a field from a list of ids. Supplied field f should have same\ntypes and number of data arrays as this one (i.e., like\nCopyStructure() creates).  This method should not be used if the\ninstance is from a subclass of vtkFieldData (vtkPointData or\nvtkCellData).  This is because in those cases, the attribute data\nis stored with the other fields and will cause the method to\nbehave in an unexpected way.\n"},
  {"GetArrayContainingComponent", PyvtkFieldData_GetArrayContainingComponent, METH_VARARGS,
   "V.GetArrayContainingComponent(int, int) -> int\nC++: int GetArrayContainingComponent(int i, int &arrayComp)\n\nReturn the array containing the ith component of the field. The\nreturn value is an integer number n 0<=n<this->NumberOfArrays.\nAlso, an integer value is returned indicating the component in\nthe array is returned. Method returns -1 if specified component\nis not in the field.\n"},
  {"GetNumberOfComponents", PyvtkFieldData_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components in the field. This is determined by\nadding up the components in each non-nullptr array. This method\nshould not be used if the instance is from a subclass of\nvtkFieldData (vtkPointData or vtkCellData). This is because in\nthose cases, the attribute data is stored with the other fields\nand will cause the method to behave in an unexpected way.\n"},
  {"GetNumberOfTuples", PyvtkFieldData_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nGet the number of tuples in the field. Note: some fields have\narrays with different numbers of tuples; this method returns the\nnumber of tuples in the first array. Mixed-length arrays may have\nto be treated specially. This method should not be used if the\ninstance is from a subclass of vtkFieldData (vtkPointData or\nvtkCellData). This is because in those cases, the attribute data\nis stored with the other fields and will cause the method to\nbehave in an unexpected way.\n"},
  {"SetNumberOfTuples", PyvtkFieldData_SetNumberOfTuples, METH_VARARGS,
   "V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(const vtkIdType number)\n\nSet the number of tuples for each data array in the field. This\nmethod should not be used if the instance is from a subclass of\nvtkFieldData (vtkPointData or vtkCellData). This is because in\nthose cases, the attribute data is stored with the other fields\nand will cause the method to behave in an unexpected way.\n"},
  {"SetTuple", PyvtkFieldData_SetTuple, METH_VARARGS,
   "V.SetTuple(int, int, vtkFieldData)\nC++: void SetTuple(const vtkIdType i, const vtkIdType j,\n    vtkFieldData *source)\n\nSet the jth tuple in source field data at the ith location. Set\noperations mean that no range checking is performed, so they're\nfaster.\n"},
  {"InsertTuple", PyvtkFieldData_InsertTuple, METH_VARARGS,
   "V.InsertTuple(int, int, vtkFieldData)\nC++: void InsertTuple(const vtkIdType i, const vtkIdType j,\n    vtkFieldData *source)\n\nInsert the jth tuple in source field data at the ith location.\nRange checking is performed and memory allocates as necessary.\n"},
  {"InsertNextTuple", PyvtkFieldData_InsertNextTuple, METH_VARARGS,
   "V.InsertNextTuple(int, vtkFieldData) -> int\nC++: vtkIdType InsertNextTuple(const vtkIdType j,\n    vtkFieldData *source)\n\nInsert the jth tuple in source field data at the end of the tuple\nmatrix. Range checking is performed and memory is allocated as\nnecessary.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFieldData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkFieldData", // tp_name
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
  PyvtkFieldData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFieldData_StaticNew()
{
  return vtkFieldData::New();
}

PyObject *PyvtkFieldData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFieldData_Type, PyvtkFieldData_Methods,
    "vtkFieldData",
 &PyvtkFieldData_StaticNew);

  PyTypeObject *pytype = &PyvtkFieldData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFieldData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFieldData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFieldData", o) != 0)
  {
    Py_DECREF(o);
  }

}

