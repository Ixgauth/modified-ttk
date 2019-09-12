// python wrapper for vtkUniformGridAMR
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
#include "vtkUniformGridAMR.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniformGridAMR(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUniformGridAMR_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataSet_ClassNew
extern "C" { PyObject *PyvtkCompositeDataSet_ClassNew(); }
#define DECLARED_PyvtkCompositeDataSet_ClassNew
#endif

static const char *PyvtkUniformGridAMR_Doc =
  "vtkUniformGridAMR - no description provided.\n\n"
  "Superclass: vtkCompositeDataSet\n\n"
  "vtkUniformGridAMR is a concrete implementation of\n"
  "vtkCompositeDataSet. The dataset type is restricted to\n"
  "vtkUniformGrid.\n\n";


static PyObject *
PyvtkUniformGridAMR_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniformGridAMR::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformGridAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridAMR::NewInstance());

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
PyvtkUniformGridAMR_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkUniformGridAMR::NewIterator());

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
PyvtkUniformGridAMR_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUniformGridAMR::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUniformGridAMR::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkUniformGridAMR::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkUniformGridAMR_Initialize_s1(self, args);
    case 2:
      return PyvtkUniformGridAMR_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkUniformGridAMR_SetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridDescription(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::SetGridDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkUniformGridAMR::GetGridDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkUniformGridAMR::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetTotalNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfBlocks() :
      op->vtkUniformGridAMR::GetTotalNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets(temp0) :
      op->vtkUniformGridAMR::GetNumberOfDataSets(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::GetBounds(temp0);
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
PyvtkUniformGridAMR_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkUniformGridAMR::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGridAMR_GetBounds_s1(self, args);
    case 0:
      return PyvtkUniformGridAMR_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkUniformGridAMR_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMin(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::GetMin(temp0);
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
PyvtkUniformGridAMR_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMax(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::GetMax(temp0);
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
PyvtkUniformGridAMR_SetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0, temp1);
    }
    else
    {
      op->vtkUniformGridAMR::SetDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_SetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkUniformGrid *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkUniformGrid"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGridAMR::SetDataSet(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_SetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUniformGridAMR_SetDataSet_s1(self, args);
    case 3:
      return PyvtkUniformGridAMR_SetDataSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSet");
  return nullptr;
}



static PyObject *
PyvtkUniformGridAMR_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkUniformGridAMR::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0, temp1) :
      op->vtkUniformGridAMR::GetDataSet(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGridAMR_GetDataSet_s1(self, args);
    case 2:
      return PyvtkUniformGridAMR_GetDataSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSet");
  return nullptr;
}



static PyObject *
PyvtkUniformGridAMR_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex(temp0, temp1) :
      op->vtkUniformGridAMR::GetCompositeIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetLevelAndIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelAndIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetLevelAndIndex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGridAMR::GetLevelAndIndex(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMR *op = static_cast<vtkUniformGridAMR *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkUniformGridAMR::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMR_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGridAMR_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUniformGridAMR *tempr = vtkUniformGridAMR::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformGridAMR_GetData_Methods[] = {
  {nullptr, PyvtkUniformGridAMR_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkUniformGridAMR_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniformGridAMR_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGridAMR_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUniformGridAMR_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkUniformGridAMR_Methods[] = {
  {"IsTypeOf", PyvtkUniformGridAMR_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUniformGridAMR_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUniformGridAMR_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUniformGridAMR_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUniformGridAMR\nC++: vtkUniformGridAMR *NewInstance()\n\n"},
  {"NewIterator", PyvtkUniformGridAMR_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewIterator() override;\n\nReturn a new iterator (the iterator has to be deleted by the\nuser).\n"},
  {"GetDataObjectType", PyvtkUniformGridAMR_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"Initialize", PyvtkUniformGridAMR_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\nV.Initialize(int, (int, ...))\nC++: virtual void Initialize(int numLevels,\n    const int *blocksPerLevel)\n\nRestore data object to initial\n"},
  {"SetGridDescription", PyvtkUniformGridAMR_SetGridDescription, METH_VARARGS,
   "V.SetGridDescription(int)\nC++: void SetGridDescription(int gridDescription)\n\nSet/Get the data description of this uniform grid instance, e.g.\nVTK_XYZ_GRID\n"},
  {"GetGridDescription", PyvtkUniformGridAMR_GetGridDescription, METH_VARARGS,
   "V.GetGridDescription() -> int\nC++: int GetGridDescription()\n\nSet/Get the data description of this uniform grid instance, e.g.\nVTK_XYZ_GRID\n"},
  {"GetNumberOfLevels", PyvtkUniformGridAMR_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturn the number of levels\n"},
  {"GetTotalNumberOfBlocks", PyvtkUniformGridAMR_GetTotalNumberOfBlocks, METH_VARARGS,
   "V.GetTotalNumberOfBlocks() -> int\nC++: virtual unsigned int GetTotalNumberOfBlocks()\n\nReturn the total number of blocks, including nullptr blocks\n"},
  {"GetNumberOfDataSets", PyvtkUniformGridAMR_GetNumberOfDataSets, METH_VARARGS,
   "V.GetNumberOfDataSets(int) -> int\nC++: unsigned int GetNumberOfDataSets(const unsigned int level)\n\nReturns the number of datasets at the given level, including null\nblocks\n"},
  {"GetBounds", PyvtkUniformGridAMR_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, ...)\nC++: const double *GetBounds()\n\nRetrieve the bounds of the AMR domain\n"},
  {"GetMin", PyvtkUniformGridAMR_GetMin, METH_VARARGS,
   "V.GetMin([float, float, float])\nC++: void GetMin(double min[3])\n\nRetrieve the bounds of the AMR domain\n"},
  {"GetMax", PyvtkUniformGridAMR_GetMax, METH_VARARGS,
   "V.GetMax([float, float, float])\nC++: void GetMax(double max[3])\n\nRetrieve the bounds of the AMR domain\n"},
  {"SetDataSet", PyvtkUniformGridAMR_SetDataSet, METH_VARARGS,
   "V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj) override;\nV.SetDataSet(int, int, vtkUniformGrid)\nC++: virtual void SetDataSet(unsigned int level, unsigned int idx,\n     vtkUniformGrid *grid)\n\nUnhiding superclass method.\n"},
  {"GetDataSet", PyvtkUniformGridAMR_GetDataSet, METH_VARARGS,
   "V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: vtkDataObject *GetDataSet(vtkCompositeDataIterator *iter)\n    override;\nV.GetDataSet(int, int) -> vtkUniformGrid\nC++: vtkUniformGrid *GetDataSet(unsigned int level,\n    unsigned int idx)\n\nReturn the data set pointed to by iter\n"},
  {"GetCompositeIndex", PyvtkUniformGridAMR_GetCompositeIndex, METH_VARARGS,
   "V.GetCompositeIndex(int, int) -> int\nC++: int GetCompositeIndex(const unsigned int level,\n    const unsigned int index)\n\nRetrieves the composite index associated with the data at the\ngiven (level,index) pair.\n"},
  {"GetLevelAndIndex", PyvtkUniformGridAMR_GetLevelAndIndex, METH_VARARGS,
   "V.GetLevelAndIndex(int, int, int)\nC++: void GetLevelAndIndex(const unsigned int compositeIdx,\n    unsigned int &level, unsigned int &idx)\n\nGivenes the composite Idx (as set by SetCompositeIdx) this method\nreturns the corresponding level and dataset index within the\nlevel.\n"},
  {"ShallowCopy", PyvtkUniformGridAMR_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nOverride ShallowCopy/DeepCopy and CopyStructure\n"},
  {"DeepCopy", PyvtkUniformGridAMR_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nOverride ShallowCopy/DeepCopy and CopyStructure\n"},
  {"CopyStructure", PyvtkUniformGridAMR_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkCompositeDataSet)\nC++: void CopyStructure(vtkCompositeDataSet *src) override;\n\nOverride ShallowCopy/DeepCopy and CopyStructure\n"},
  {"GetData", PyvtkUniformGridAMR_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUniformGridAMR\nC++: static vtkUniformGridAMR *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUniformGridAMR_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkUniformGridAMR", // tp_name
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
  PyvtkUniformGridAMR_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniformGridAMR_StaticNew()
{
  return vtkUniformGridAMR::New();
}

PyObject *PyvtkUniformGridAMR_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUniformGridAMR_Type, PyvtkUniformGridAMR_Methods,
    "vtkUniformGridAMR",
 &PyvtkUniformGridAMR_StaticNew);

  PyTypeObject *pytype = &PyvtkUniformGridAMR_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniformGridAMR(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniformGridAMR_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniformGridAMR", o) != 0)
  {
    Py_DECREF(o);
  }

}

