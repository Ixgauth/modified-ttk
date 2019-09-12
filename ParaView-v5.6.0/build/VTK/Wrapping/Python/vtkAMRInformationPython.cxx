// python wrapper for vtkAMRInformation
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
#include "vtkAMRBox.h"
#include "vtkAMRInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRInformation_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAMRInformation_Doc =
  "vtkAMRInformation - Meta data that describes the structure of an AMR\ndata set\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAMRInformation encaspulates the following meta information for an\n"
  "AMR data set\n"
  "- a list of vtkAMRBox objects\n"
  "- Refinement ratio between AMR levels\n"
  "- Grid spacing for each level\n"
  "- The file block index for each block\n"
  "- parent child information, if requested\n\n"
  "@sa\n"
  "vtkOverlappingAMR, vtkAMRBox\n\n";


static PyObject *
PyvtkAMRInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRInformation *tempr = vtkAMRInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRInformation::NewInstance());

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
PyvtkAMRInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

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
      op->vtkAMRInformation::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkAMRInformation::GetGridDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

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
      op->vtkAMRInformation::SetGridDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

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
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkAMRInformation::GetOrigin(temp0);
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
PyvtkAMRInformation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAMRInformation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetOrigin_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetOrigin(temp0, temp1, temp2) :
      op->vtkAMRInformation::GetOrigin(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAMRInformation_GetOrigin_s1(self, args);
    case 0:
      return PyvtkAMRInformation_GetOrigin_s2(self, args);
    case 3:
      return PyvtkAMRInformation_GetOrigin_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}



static PyObject *
PyvtkAMRInformation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkAMRInformation::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMRInformation::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets(temp0) :
      op->vtkAMRInformation::GetNumberOfDataSets(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetTotalNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfBlocks() :
      op->vtkAMRInformation::GetTotalNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndex(temp0, temp1) :
      op->vtkAMRInformation::GetIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_ComputeIndexPair(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIndexPair");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

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
      op->ComputeIndexPair(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRInformation::ComputeIndexPair(temp0, temp1, temp2);
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
PyvtkAMRInformation_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAMRInformation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRInformation::GetBounds(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInformation_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRInformation_GetBounds_s1(self, args);
    case 3:
      return PyvtkAMRInformation_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkAMRInformation_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSpacing(temp0, temp1);
    }
    else
    {
      op->vtkAMRInformation::GetSpacing(temp0, temp1);
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
PyvtkAMRInformation_HasSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasSpacing(temp0) :
      op->vtkAMRInformation::HasSpacing(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetAMRBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkAMRBox *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkAMRBox"))
  {
    if (ap.IsBound())
    {
      op->SetAMRBox(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkAMRInformation::SetAMRBox(temp0, temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkAMRInformation_GetAMRBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkAMRBox *tempr = (ap.IsBound() ?
      &op->GetAMRBox(temp0, temp1) :
      &op->vtkAMRInformation::GetAMRBox(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkAMRBox");
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetCoarsenedAMRBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoarsenedAMRBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkAMRBox *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, "vtkAMRBox"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCoarsenedAMRBox(temp0, temp1, *temp2) :
      op->vtkAMRInformation::GetCoarsenedAMRBox(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAMRBlockSourceIndex(temp0) :
      op->vtkAMRInformation::GetAMRBlockSourceIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAMRBlockSourceIndex(temp0, temp1);
    }
    else
    {
      op->vtkAMRInformation::SetAMRBlockSourceIndex(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GenerateRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRefinementRatio();
    }
    else
    {
      op->vtkAMRInformation::GenerateRefinementRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_HasRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasRefinementRatio() :
      op->vtkAMRInformation::HasRefinementRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRefinementRatio(temp0, temp1);
    }
    else
    {
      op->vtkAMRInformation::SetRefinementRatio(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkAMRInformation::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_SetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0, temp1);
    }
    else
    {
      op->vtkAMRInformation::SetSpacing(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_HasChildrenInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChildrenInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasChildrenInformation() :
      op->vtkAMRInformation::HasChildrenInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetParents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetParents(temp0, temp1, temp2) :
      op->vtkAMRInformation::GetParents(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GetChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetChildren(temp0, temp1, temp2) :
      op->vtkAMRInformation::GetChildren(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_PrintParentChildInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParentChildInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->PrintParentChildInfo(temp0, temp1);
    }
    else
    {
      op->vtkAMRInformation::PrintParentChildInfo(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_GenerateParentChildInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateParentChildInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateParentChildInformation();
    }
    else
    {
      op->vtkAMRInformation::GenerateParentChildInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_Audit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Audit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Audit() :
      op->vtkAMRInformation::Audit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_FindCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  unsigned int temp1;
  unsigned int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3) :
      op->vtkAMRInformation::FindCell(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInformation_FindGrid_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindGrid(temp0, temp1, temp2) :
      op->vtkAMRInformation::FindGrid(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInformation_FindGrid_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindGrid(temp0, temp1, temp2) :
      op->vtkAMRInformation::FindGrid(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRInformation_FindGrid_Methods[] = {
  {nullptr, PyvtkAMRInformation_FindGrid_s1, METH_VARARGS,
   "@PiI *d"},
  {nullptr, PyvtkAMRInformation_FindGrid_s2, METH_VARARGS,
   "@PII *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRInformation_FindGrid(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRInformation_FindGrid_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindGrid");
  return nullptr;
}



static PyObject *
PyvtkAMRInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInformation *op = static_cast<vtkAMRInformation *>(vp);

  vtkAMRInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAMRInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAMRInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRInformation_Methods[] = {
  {"IsTypeOf", PyvtkAMRInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRInformation\nC++: static vtkAMRInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRInformation\nC++: vtkAMRInformation *NewInstance()\n\n"},
  {"Initialize", PyvtkAMRInformation_Initialize, METH_VARARGS,
   "V.Initialize(int, (int, ...))\nC++: void Initialize(int numLevels, const int *blocksPerLevel)\n\nInitialize the meta information numLevels is the number of levels\nblocksPerLevel[i] is the number of blocks at level i\n"},
  {"GetGridDescription", PyvtkAMRInformation_GetGridDescription, METH_VARARGS,
   "V.GetGridDescription() -> int\nC++: virtual int GetGridDescription()\n\nreturns the value of vtkUniformGrid::GridDescription() of any\nblock\n"},
  {"SetGridDescription", PyvtkAMRInformation_SetGridDescription, METH_VARARGS,
   "V.SetGridDescription(int)\nC++: void SetGridDescription(int description)\n\nreturns the value of vtkUniformGrid::GridDescription() of any\nblock\n"},
  {"GetOrigin", PyvtkAMRInformation_GetOrigin, METH_VARARGS,
   "V.GetOrigin([float, float, float])\nC++: void GetOrigin(double origin[3])\nV.GetOrigin() -> (float, ...)\nC++: double *GetOrigin()\nV.GetOrigin(int, int, [float, ...]) -> bool\nC++: bool GetOrigin(unsigned int level, unsigned int id,\n    double *origin)\n\nGet the AMR dataset origin The origin is essentially the minimum\nof all the grids.\n"},
  {"SetOrigin", PyvtkAMRInformation_SetOrigin, METH_VARARGS,
   "V.SetOrigin((float, ...))\nC++: void SetOrigin(const double *origin)\n\nGet the AMR dataset origin The origin is essentially the minimum\nof all the grids.\n"},
  {"GetNumberOfLevels", PyvtkAMRInformation_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturn the number of levels\n"},
  {"GetNumberOfDataSets", PyvtkAMRInformation_GetNumberOfDataSets, METH_VARARGS,
   "V.GetNumberOfDataSets(int) -> int\nC++: unsigned int GetNumberOfDataSets(unsigned int level)\n\nReturns the number of datasets at the given levelx\n"},
  {"GetTotalNumberOfBlocks", PyvtkAMRInformation_GetTotalNumberOfBlocks, METH_VARARGS,
   "V.GetTotalNumberOfBlocks() -> int\nC++: unsigned int GetTotalNumberOfBlocks()\n\nReturns total number of datasets\n"},
  {"GetIndex", PyvtkAMRInformation_GetIndex, METH_VARARGS,
   "V.GetIndex(int, int) -> int\nC++: int GetIndex(unsigned int level, unsigned int id)\n\nReturns the single index from a pair of indices\n"},
  {"ComputeIndexPair", PyvtkAMRInformation_ComputeIndexPair, METH_VARARGS,
   "V.ComputeIndexPair(int, int, int)\nC++: void ComputeIndexPair(unsigned int index,\n    unsigned int &level, unsigned int &id)\n\nReturns the an index pair given a single index\n"},
  {"GetBounds", PyvtkAMRInformation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, ...)\nC++: const double *GetBounds()\nV.GetBounds(int, int, [float, ...])\nC++: void GetBounds(unsigned int level, unsigned int id,\n    double *bb)\n\nReturns the bounds of the entire domain\n"},
  {"GetSpacing", PyvtkAMRInformation_GetSpacing, METH_VARARGS,
   "V.GetSpacing(int, [float, float, float])\nC++: void GetSpacing(unsigned int level, double spacing[3])\n\nReturn the spacing at the given fiven\n"},
  {"HasSpacing", PyvtkAMRInformation_HasSpacing, METH_VARARGS,
   "V.HasSpacing(int) -> bool\nC++: bool HasSpacing(unsigned int level)\n\n"},
  {"SetAMRBox", PyvtkAMRInformation_SetAMRBox, METH_VARARGS,
   "V.SetAMRBox(int, int, vtkAMRBox)\nC++: void SetAMRBox(unsigned int level, unsigned int id,\n    const vtkAMRBox &box)\n\nMethods to set and get the AMR box at a given position\n"},
  {"GetAMRBox", PyvtkAMRInformation_GetAMRBox, METH_VARARGS,
   "V.GetAMRBox(int, int) -> vtkAMRBox\nC++: const vtkAMRBox &GetAMRBox(unsigned int level,\n    unsigned int id)\n\nMethods to set and get the AMR box at a given position\n"},
  {"GetCoarsenedAMRBox", PyvtkAMRInformation_GetCoarsenedAMRBox, METH_VARARGS,
   "V.GetCoarsenedAMRBox(int, int, vtkAMRBox) -> bool\nC++: bool GetCoarsenedAMRBox(unsigned int level, unsigned int id,\n    vtkAMRBox &box)\n\nreturn the amr box coarsened to the previous level\n"},
  {"GetAMRBlockSourceIndex", PyvtkAMRInformation_GetAMRBlockSourceIndex, METH_VARARGS,
   "V.GetAMRBlockSourceIndex(int) -> int\nC++: int GetAMRBlockSourceIndex(int index)\n\nGet/Set the SourceIndex of a block. Typically, this is a\nfile-type specific index that can be used by a reader to load a\nparticular file block\n"},
  {"SetAMRBlockSourceIndex", PyvtkAMRInformation_SetAMRBlockSourceIndex, METH_VARARGS,
   "V.SetAMRBlockSourceIndex(int, int)\nC++: void SetAMRBlockSourceIndex(int index, int sourceId)\n\nGet/Set the SourceIndex of a block. Typically, this is a\nfile-type specific index that can be used by a reader to load a\nparticular file block\n"},
  {"GenerateRefinementRatio", PyvtkAMRInformation_GenerateRefinementRatio, METH_VARARGS,
   "V.GenerateRefinementRatio()\nC++: void GenerateRefinementRatio()\n\nThis method computes the refinement ratio at each level. At each\nlevel, l, the refinement ratio r_l is computed by r_l = D_{l} /\nD_{l+1}, where D_{l+1} and D_{l} are the grid spacings at the\nnext and current level respectively.\n\n* .SECTION Assumptions\n* 1) Within each level, the refinement ratios are the same for\n  all blocks.\n* 2) The refinement ratio is uniform along each dimension of the\n  block.\n"},
  {"HasRefinementRatio", PyvtkAMRInformation_HasRefinementRatio, METH_VARARGS,
   "V.HasRefinementRatio() -> bool\nC++: bool HasRefinementRatio()\n\nReturns whether refinement ratio has been set (either by calling\nGenerateRefinementRatio() or by calling SetRefinementRatio()\n"},
  {"SetRefinementRatio", PyvtkAMRInformation_SetRefinementRatio, METH_VARARGS,
   "V.SetRefinementRatio(int, int)\nC++: void SetRefinementRatio(unsigned int level, int ratio)\n\nSet the refinement ratio at a level. This method should be called\nfor all levels, if called at all.\n"},
  {"GetRefinementRatio", PyvtkAMRInformation_GetRefinementRatio, METH_VARARGS,
   "V.GetRefinementRatio(int) -> int\nC++: int GetRefinementRatio(unsigned int level)\n\nReturns the refinement of a given level.\n"},
  {"SetSpacing", PyvtkAMRInformation_SetSpacing, METH_VARARGS,
   "V.SetSpacing(int, (float, ...))\nC++: void SetSpacing(unsigned int level, const double *h)\n\nSet the spacing at a given level\n"},
  {"HasChildrenInformation", PyvtkAMRInformation_HasChildrenInformation, METH_VARARGS,
   "V.HasChildrenInformation() -> bool\nC++: bool HasChildrenInformation()\n\nReturn whether parent child information has been generated\n"},
  {"GetParents", PyvtkAMRInformation_GetParents, METH_VARARGS,
   "V.GetParents(int, int, int) -> (int, ...)\nC++: unsigned int *GetParents(unsigned int level,\n    unsigned int index, unsigned int &numParents)\n\nReturn a pointer to Parents of a block.  The first entry is the\nnumber of parents the block has followed by its parent ids in\nlevel-1. If none exits it returns nullptr.\n"},
  {"GetChildren", PyvtkAMRInformation_GetChildren, METH_VARARGS,
   "V.GetChildren(int, int, int) -> (int, ...)\nC++: unsigned int *GetChildren(unsigned int level,\n    unsigned int index, unsigned int &numChildren)\n\nReturn a pointer to Children of a block.  The first entry is the\nnumber of children the block has followed by its children ids in\nlevel+1. If none exits it returns nullptr.\n"},
  {"PrintParentChildInfo", PyvtkAMRInformation_PrintParentChildInfo, METH_VARARGS,
   "V.PrintParentChildInfo(int, int)\nC++: void PrintParentChildInfo(unsigned int level,\n    unsigned int index)\n\nPrints the parents and children of a requested block (Debug\nRoutine)\n"},
  {"GenerateParentChildInformation", PyvtkAMRInformation_GenerateParentChildInformation, METH_VARARGS,
   "V.GenerateParentChildInformation()\nC++: void GenerateParentChildInformation()\n\nGenerate the parent/child relationships - needed to be called\nbefore GetParents or GetChildren can be used!\n"},
  {"Audit", PyvtkAMRInformation_Audit, METH_VARARGS,
   "V.Audit() -> bool\nC++: bool Audit()\n\nChecks whether the meta data is internally consistent.\n"},
  {"FindCell", PyvtkAMRInformation_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], int, int, int) -> bool\nC++: bool FindCell(double q[3], unsigned int level,\n    unsigned int index, int &cellIdx)\n\nGiven a point q, find whether q is bounded by the data set at\n(level,index).  If it is, set cellIdx to the cell index and\nreturn true; otherwise return false\n"},
  {"FindGrid", PyvtkAMRInformation_FindGrid, METH_VARARGS,
   "V.FindGrid([float, float, float], int, int) -> bool\nC++: bool FindGrid(double q[3], int level, unsigned int &gridId)\nV.FindGrid([float, float, float], int, int) -> bool\nC++: bool FindGrid(double q[3], unsigned int &level,\n    unsigned int &gridId)\n\nfind the grid that contains the point q at the specified level\n"},
  {"DeepCopy", PyvtkAMRInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkAMRInformation)\nC++: void DeepCopy(vtkAMRInformation *other)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAMRInformation", // tp_name
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
  PyvtkAMRInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRInformation_StaticNew()
{
  return vtkAMRInformation::New();
}

PyObject *PyvtkAMRInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRInformation_Type, PyvtkAMRInformation_Methods,
    "vtkAMRInformation",
 &PyvtkAMRInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRInformation_Type;

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

void PyVTKAddFile_vtkAMRInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

