// python wrapper for vtkPVArrayInformation
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
#include "vtkPVArrayInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVArrayInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVArrayInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVArrayInformation_Doc =
  "vtkPVArrayInformation - Data array information like type.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This objects is for eliminating direct access to vtkDataObjects by\n"
  "the \"client\".  Only vtkPVPart and vtkPVProcessModule should access\n"
  "the data directly.  At the moment, this object is only a container\n"
  "and has no useful methods for operating on data. Note:  I could just\n"
  "use vtkDataArray objects and store the range as values in the array. \n"
  "This would eliminate this object.\n\n";


static PyObject *
PyvtkPVArrayInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVArrayInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVArrayInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVArrayInformation *tempr = vtkPVArrayInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVArrayInformation::NewInstance());

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
PyvtkPVArrayInformation_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkPVArrayInformation::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVArrayInformation::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkPVArrayInformation::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkIdType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponentName(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::SetComponentName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentName(temp0) :
      op->vtkPVArrayInformation::GetComponentName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  long long temp0;
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
      op->vtkPVArrayInformation::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkPVArrayInformation::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetComponentRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
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
      op->SetComponentRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVArrayInformation::SetComponentRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVArrayInformation_SetComponentRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetComponentRange(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::SetComponentRange(temp0, temp1);
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
PyvtkPVArrayInformation_SetComponentRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVArrayInformation_SetComponentRange_s1(self, args);
    case 2:
      return PyvtkPVArrayInformation_SetComponentRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentRange");
  return nullptr;
}



static PyObject *
PyvtkPVArrayInformation_GetComponentRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComponentRange(temp0) :
      op->vtkPVArrayInformation::GetComponentRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPVArrayInformation_GetComponentRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetComponentRange(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::GetComponentRange(temp0, temp1);
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
PyvtkPVArrayInformation_GetComponentRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVArrayInformation_GetComponentRange_s1(self, args);
    case 2:
      return PyvtkPVArrayInformation_GetComponentRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetComponentRange");
  return nullptr;
}



static PyObject *
PyvtkPVArrayInformation_SetComponentFiniteRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
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
      op->SetComponentFiniteRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVArrayInformation::SetComponentFiniteRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVArrayInformation_SetComponentFiniteRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetComponentFiniteRange(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::SetComponentFiniteRange(temp0, temp1);
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
PyvtkPVArrayInformation_SetComponentFiniteRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVArrayInformation_SetComponentFiniteRange_s1(self, args);
    case 2:
      return PyvtkPVArrayInformation_SetComponentFiniteRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentFiniteRange");
  return nullptr;
}



static PyObject *
PyvtkPVArrayInformation_GetComponentFiniteRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComponentFiniteRange(temp0) :
      op->vtkPVArrayInformation::GetComponentFiniteRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVArrayInformation_GetComponentFiniteRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetComponentFiniteRange(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::GetComponentFiniteRange(temp0, temp1);
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
PyvtkPVArrayInformation_GetComponentFiniteRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVArrayInformation_GetComponentFiniteRange_s1(self, args);
    case 2:
      return PyvtkPVArrayInformation_GetComponentFiniteRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetComponentFiniteRange");
  return nullptr;
}



static PyObject *
PyvtkPVArrayInformation_GetDataTypeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

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
      op->vtkPVArrayInformation::GetDataTypeRange(temp0);
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
PyvtkPVArrayInformation_Compare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Compare(temp0) :
      op->vtkPVArrayInformation::Compare(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    if (ap.IsBound())
    {
      op->AddRanges(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::AddRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddFiniteRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFiniteRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    if (ap.IsBound())
    {
      op->AddFiniteRanges(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::AddFiniteRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_SetIsPartial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPartial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsPartial(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::SetIsPartial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetIsPartial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPartial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsPartial() :
      op->vtkPVArrayInformation::GetIsPartial());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVArrayInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformationKeys(temp0);
    }
    else
    {
      op->vtkPVArrayInformation::AddInformationKeys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddInformationKey(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::AddInformationKey(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_AddUniqueInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUniqueInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddUniqueInformationKey(temp0, temp1);
    }
    else
    {
      op->vtkPVArrayInformation::AddUniqueInformationKey(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetNumberOfInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationKeys() :
      op->vtkPVArrayInformation::GetNumberOfInformationKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetInformationKeyLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyLocation(temp0) :
      op->vtkPVArrayInformation::GetInformationKeyLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_GetInformationKeyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyName(temp0) :
      op->vtkPVArrayInformation::GetInformationKeyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayInformation_HasInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayInformation *op = static_cast<vtkPVArrayInformation *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->HasInformationKey(temp0, temp1) :
      op->vtkPVArrayInformation::HasInformationKey(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVArrayInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVArrayInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVArrayInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVArrayInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVArrayInformation\nC++: static vtkPVArrayInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVArrayInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *NewInstance()\n\n"},
  {"SetDataType", PyvtkPVArrayInformation_SetDataType, METH_VARARGS,
   "V.SetDataType(int)\nC++: virtual void SetDataType(int _arg)\n\nDataType is the string name of the data type: VTK_FLOAT ... the\nvalue \"VTK_VOID\" means that different processes have different\ntypes.\n"},
  {"GetDataType", PyvtkPVArrayInformation_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nDataType is the string name of the data type: VTK_FLOAT ... the\nvalue \"VTK_VOID\" means that different processes have different\ntypes.\n"},
  {"SetName", PyvtkPVArrayInformation_SetName, METH_VARARGS,
   "V.SetName(string)\nC++: virtual void SetName(const char *_arg)\n\nSet/get array's name\n"},
  {"GetName", PyvtkPVArrayInformation_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: virtual char *GetName()\n\nSet/get array's name\n"},
  {"SetNumberOfComponents", PyvtkPVArrayInformation_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps)\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {"GetNumberOfComponents", PyvtkPVArrayInformation_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nChanging the number of components clears the ranges back to the\ndefault.\n"},
  {"SetComponentName", PyvtkPVArrayInformation_SetComponentName, METH_VARARGS,
   "V.SetComponentName(int, string)\nC++: void SetComponentName(vtkIdType component, const char *name)\n\nSet the name for a component. Must be >= 1.\n"},
  {"GetComponentName", PyvtkPVArrayInformation_GetComponentName, METH_VARARGS,
   "V.GetComponentName(int) -> string\nC++: const char *GetComponentName(vtkIdType component)\n\nGet the component name for a given component. Note: the const\nchar* that is returned is only valid intill the next call to this\nmethod!\n"},
  {"SetNumberOfTuples", PyvtkPVArrayInformation_SetNumberOfTuples, METH_VARARGS,
   "V.SetNumberOfTuples(int)\nC++: virtual void SetNumberOfTuples(vtkTypeInt64 _arg)\n\nSet/get the array's length\n"},
  {"GetNumberOfTuples", PyvtkPVArrayInformation_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: virtual vtkTypeInt64 GetNumberOfTuples()\n\nSet/get the array's length\n"},
  {"SetComponentRange", PyvtkPVArrayInformation_SetComponentRange, METH_VARARGS,
   "V.SetComponentRange(int, float, float)\nC++: void SetComponentRange(int comp, double min, double max)\nV.SetComponentRange(int, [float, ...])\nC++: void SetComponentRange(int comp, double *range)\n\nThere is a range for each component. Range for component -1 is\nthe range of the vector magnitude. The number of components\nshould be set before these ranges.\n"},
  {"GetComponentRange", PyvtkPVArrayInformation_GetComponentRange, METH_VARARGS,
   "V.GetComponentRange(int) -> (float, float)\nC++: double *GetComponentRange(int component)\nV.GetComponentRange(int, [float, float])\nC++: void GetComponentRange(int comp, double range[2])\n\nThere is a range for each component. Range for component -1 is\nthe range of the vector magnitude. The number of components\nshould be set before these ranges.\n"},
  {"SetComponentFiniteRange", PyvtkPVArrayInformation_SetComponentFiniteRange, METH_VARARGS,
   "V.SetComponentFiniteRange(int, float, float)\nC++: void SetComponentFiniteRange(int comp, double min,\n    double max)\nV.SetComponentFiniteRange(int, [float, ...])\nC++: void SetComponentFiniteRange(int comp, double *range)\n\nThere is a range for each component. Range for component -1 is\nthe range of the vector magnitude. The number of components\nshould be set before these ranges.\n"},
  {"GetComponentFiniteRange", PyvtkPVArrayInformation_GetComponentFiniteRange, METH_VARARGS,
   "V.GetComponentFiniteRange(int) -> (float, ...)\nC++: double *GetComponentFiniteRange(int component)\nV.GetComponentFiniteRange(int, [float, float])\nC++: void GetComponentFiniteRange(int comp, double range[2])\n\nThere is a range for each component. Range for component -1 is\nthe range of the vector magnitude. The number of components\nshould be set before these ranges.\n"},
  {"GetDataTypeRange", PyvtkPVArrayInformation_GetDataTypeRange, METH_VARARGS,
   "V.GetDataTypeRange([float, float])\nC++: void GetDataTypeRange(double range[2])\n\nThis method return the Min and Max possible range of the native\ndata type. For example if a vtkScalars consists of unsigned char\ndata these will return (0,255). Nothing particular for 12bits\ndata is done\n"},
  {"Compare", PyvtkPVArrayInformation_Compare, METH_VARARGS,
   "V.Compare(vtkPVArrayInformation) -> int\nC++: int Compare(vtkPVArrayInformation *info)\n\nReturns 1 if the array can be combined. It must have the same\nname and number of components.\n"},
  {"AddRanges", PyvtkPVArrayInformation_AddRanges, METH_VARARGS,
   "V.AddRanges(vtkPVArrayInformation)\nC++: void AddRanges(vtkPVArrayInformation *info)\n\nMerge (union) ranges into this object.\n"},
  {"AddFiniteRanges", PyvtkPVArrayInformation_AddFiniteRanges, METH_VARARGS,
   "V.AddFiniteRanges(vtkPVArrayInformation)\nC++: void AddFiniteRanges(vtkPVArrayInformation *info)\n\n"},
  {"DeepCopy", PyvtkPVArrayInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPVArrayInformation)\nC++: void DeepCopy(vtkPVArrayInformation *info)\n\n"},
  {"CopyFromObject", PyvtkPVArrayInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVArrayInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"SetIsPartial", PyvtkPVArrayInformation_SetIsPartial, METH_VARARGS,
   "V.SetIsPartial(int)\nC++: virtual void SetIsPartial(int _arg)\n\nIf IsPartial is true, this array is in only some of the parts of\na multi-block dataset. By default, IsPartial is set to 0.\n"},
  {"GetIsPartial", PyvtkPVArrayInformation_GetIsPartial, METH_VARARGS,
   "V.GetIsPartial() -> int\nC++: virtual int GetIsPartial()\n\nIf IsPartial is true, this array is in only some of the parts of\na multi-block dataset. By default, IsPartial is set to 0.\n"},
  {"Initialize", PyvtkPVArrayInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nRemove all infommation. Next add will be like a copy.\n"},
  {"AddInformationKeys", PyvtkPVArrayInformation_AddInformationKeys, METH_VARARGS,
   "V.AddInformationKeys(vtkPVArrayInformation)\nC++: void AddInformationKeys(vtkPVArrayInformation *info)\n\nMerge (union) keys into this object.\n"},
  {"AddInformationKey", PyvtkPVArrayInformation_AddInformationKey, METH_VARARGS,
   "V.AddInformationKey(string, string)\nC++: void AddInformationKey(const char *location,\n    const char *name)\n\nMerge (union) keys into this object.\n"},
  {"AddUniqueInformationKey", PyvtkPVArrayInformation_AddUniqueInformationKey, METH_VARARGS,
   "V.AddUniqueInformationKey(string, string)\nC++: void AddUniqueInformationKey(const char *location,\n    const char *name)\n\nMerge (union) keys into this object.\n"},
  {"GetNumberOfInformationKeys", PyvtkPVArrayInformation_GetNumberOfInformationKeys, METH_VARARGS,
   "V.GetNumberOfInformationKeys() -> int\nC++: int GetNumberOfInformationKeys()\n\nGet information on the InformationKeys of this array\n"},
  {"GetInformationKeyLocation", PyvtkPVArrayInformation_GetInformationKeyLocation, METH_VARARGS,
   "V.GetInformationKeyLocation(int) -> string\nC++: const char *GetInformationKeyLocation(int)\n\nGet information on the InformationKeys of this array\n"},
  {"GetInformationKeyName", PyvtkPVArrayInformation_GetInformationKeyName, METH_VARARGS,
   "V.GetInformationKeyName(int) -> string\nC++: const char *GetInformationKeyName(int)\n\nGet information on the InformationKeys of this array\n"},
  {"HasInformationKey", PyvtkPVArrayInformation_HasInformationKey, METH_VARARGS,
   "V.HasInformationKey(string, string) -> int\nC++: int HasInformationKey(const char *location, const char *name)\n\nGet information on the InformationKeys of this array\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVArrayInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVArrayInformation", // tp_name
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
  PyvtkPVArrayInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVArrayInformation_StaticNew()
{
  return vtkPVArrayInformation::New();
}

PyObject *PyvtkPVArrayInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVArrayInformation_Type, PyvtkPVArrayInformation_Methods,
    "vtkPVArrayInformation",
 &PyvtkPVArrayInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVArrayInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVArrayInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVArrayInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVArrayInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

