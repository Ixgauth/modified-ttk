// python wrapper for vtkImageStencilData
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
#include "vtkImageStencilData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageStencilData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageStencilData_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkImageStencilData_Doc =
  "vtkImageStencilData - efficient description of an image stencil\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkImageStencilData describes an image stencil in a manner which is\n"
  "efficient both in terms of speed and storage space.  The stencil\n"
  "extents are stored for each x-row across the image (multiple extents\n"
  "per row if necessary) and can be retrieved via the GetNextExtent()\n"
  "method.\n"
  "@sa\n"
  "vtkImageStencilSource vtkImageStencil\n\n";


static PyObject *
PyvtkImageStencilData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageStencilData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageStencilData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageStencilData *tempr = vtkImageStencilData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageStencilData::NewInstance());

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
PyvtkImageStencilData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkImageStencilData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      op->vtkImageStencilData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      op->vtkImageStencilData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_InternalImageStencilDataCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalImageStencilDataCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->InternalImageStencilDataCopy(temp0);
    }
    else
    {
      op->vtkImageStencilData::InternalImageStencilDataCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkImageStencilData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkImageStencilData::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetNextExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkImageStencilData::GetNextExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IsInside(temp0, temp1, temp2) :
      op->vtkImageStencilData::IsInside(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_InsertNextExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InsertNextExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencilData::InsertNextExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_InsertAndMergeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAndMergeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InsertAndMergeExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencilData::InsertAndMergeExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_RemoveExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->RemoveExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencilData::RemoveExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      op->SetSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageStencilData::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkImageStencilData::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageStencilData_SetSpacing_s1(self, args);
    case 1:
      return PyvtkImageStencilData_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageStencilData_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkImageStencilData::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageStencilData::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
      op->vtkImageStencilData::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageStencilData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImageStencilData_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageStencilData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImageStencilData::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkImageStencilData::SetExtent(temp0);
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
PyvtkImageStencilData_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageStencilData::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageStencilData_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageStencilData_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}



static PyObject *
PyvtkImageStencilData_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkImageStencilData::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_AllocateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllocateExtents();
    }
    else
    {
      op->vtkImageStencilData::AllocateExtents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Fill();
    }
    else
    {
      op->vtkImageStencilData::Fill();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationFromPipeline(temp0);
    }
    else
    {
      op->vtkImageStencilData::CopyInformationFromPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationToPipeline(temp0);
    }
    else
    {
      op->vtkImageStencilData::CopyInformationToPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkImageStencilData *tempr = vtkImageStencilData::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkImageStencilData *tempr = vtkImageStencilData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilData_GetData_Methods[] = {
  {nullptr, PyvtkImageStencilData_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkImageStencilData_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageStencilData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageStencilData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageStencilData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkImageStencilData_Add(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0);
    }
    else
    {
      op->vtkImageStencilData::Add(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Subtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->Subtract(temp0);
    }
    else
    {
      op->vtkImageStencilData::Subtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Replace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Replace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->Replace(temp0);
    }
    else
    {
      op->vtkImageStencilData::Replace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Clip(temp0) :
      op->vtkImageStencilData::Clip(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilData_Methods[] = {
  {"IsTypeOf", PyvtkImageStencilData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageStencilData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageStencilData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageStencilData\nC++: static vtkImageStencilData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageStencilData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageStencilData\nC++: vtkImageStencilData *NewInstance()\n\n"},
  {"Initialize", PyvtkImageStencilData_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"DeepCopy", PyvtkImageStencilData_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *o) override;\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {"ShallowCopy", PyvtkImageStencilData_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *f) override;\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {"InternalImageStencilDataCopy", PyvtkImageStencilData_InternalImageStencilDataCopy, METH_VARARGS,
   "V.InternalImageStencilDataCopy(vtkImageStencilData)\nC++: void InternalImageStencilDataCopy(vtkImageStencilData *s)\n\n"},
  {"GetDataObjectType", PyvtkImageStencilData_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nGet the data type as an integer (this will return VTK_DATA_OBJECT\nfor now, maybe a proper type constant will be reserved later).\n"},
  {"GetExtentType", PyvtkImageStencilData_GetExtentType, METH_VARARGS,
   "V.GetExtentType() -> int\nC++: int GetExtentType() override;\n\nThe extent type is 3D, just like vtkImageData.\n"},
  {"GetNextExtent", PyvtkImageStencilData_GetNextExtent, METH_VARARGS,
   "V.GetNextExtent(int, int, int, int, int, int, int) -> int\nC++: int GetNextExtent(int &r1, int &r2, int xMin, int xMax,\n    int yIdx, int zIdx, int &iter)\n\nGiven the total output x extent [xMin,xMax] and the current y, z\nindices, return each sub-extent [r1,r2] that lies within within\nthe unclipped region in sequence.  A value of '0' is returned if\nno more sub-extents are available.  The variable 'iter' must be\ninitialized to zero before the first call, unless you want the\ncomplementary sub-extents in which case you must initialize\n'iter' to -1.  The variable 'iter' is used internally to keep\ntrack of which sub-extent should be returned next.\n"},
  {"IsInside", PyvtkImageStencilData_IsInside, METH_VARARGS,
   "V.IsInside(int, int, int) -> int\nC++: int IsInside(int xIdx, int yIdx, int zIdx)\n\nChecks if an image index is inside the stencil. Even though\nGetNextExtent and the vtkImageStencilIterator are faster if every\nvoxel in the volume has to be checked, IsInside provides an\nefficient alternative for if just a single voxel has to be\nchecked.\n"},
  {"InsertNextExtent", PyvtkImageStencilData_InsertNextExtent, METH_VARARGS,
   "V.InsertNextExtent(int, int, int, int)\nC++: void InsertNextExtent(int r1, int r2, int yIdx, int zIdx)\n\nThis method is used by vtkImageStencilDataSource to add an x sub\nextent [r1,r2] for the x row (yIdx,zIdx).  The specified sub\nextent must not intersect any other sub extents along the same x\nrow. As well, r1 and r2 must both be within the total x extent\n[Extent[0],Extent[1]].\n"},
  {"InsertAndMergeExtent", PyvtkImageStencilData_InsertAndMergeExtent, METH_VARARGS,
   "V.InsertAndMergeExtent(int, int, int, int)\nC++: void InsertAndMergeExtent(int r1, int r2, int yIdx, int zIdx)\n\nSimilar to InsertNextExtent, except that the extent (r1,r2) at\nyIdx, zIdx is merged with other extents, (if any) on that row. So\na unique extent may not necessarily be added. For instance, if an\nextent [5,11] already exists adding an extent, [7,9] will not\naffect the stencil. Likewise adding [10, 13] will replace the\nexisting extent with [5,13].\n"},
  {"RemoveExtent", PyvtkImageStencilData_RemoveExtent, METH_VARARGS,
   "V.RemoveExtent(int, int, int, int)\nC++: void RemoveExtent(int r1, int r2, int yIdx, int zIdx)\n\nRemove the extent from (r1,r2) at yIdx, zIdx\n"},
  {"SetSpacing", PyvtkImageStencilData_SetSpacing, METH_VARARGS,
   "V.SetSpacing(float, float, float)\nC++: void SetSpacing(double, double, double)\nV.SetSpacing((float, float, float))\nC++: void SetSpacing(double a[3])\n\n"},
  {"GetSpacing", PyvtkImageStencilData_GetSpacing, METH_VARARGS,
   "V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {"SetOrigin", PyvtkImageStencilData_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkImageStencilData_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {"SetExtent", PyvtkImageStencilData_SetExtent, METH_VARARGS,
   "V.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nSet the extent of the data.  This is should be called only by\nvtkImageStencilSource, as it is part of the basic pipeline\nfunctionality.\n"},
  {"GetExtent", PyvtkImageStencilData_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {"AllocateExtents", PyvtkImageStencilData_AllocateExtents, METH_VARARGS,
   "V.AllocateExtents()\nC++: void AllocateExtents()\n\nAllocate space for the sub-extents.  This is called by\nvtkImageStencilSource.\n"},
  {"Fill", PyvtkImageStencilData_Fill, METH_VARARGS,
   "V.Fill()\nC++: void Fill()\n\nFill the sub-extents.\n"},
  {"CopyInformationFromPipeline", PyvtkImageStencilData_CopyInformationFromPipeline, METH_VARARGS,
   "V.CopyInformationFromPipeline(vtkInformation)\nC++: void CopyInformationFromPipeline(vtkInformation *info)\n    override;\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {"CopyInformationToPipeline", PyvtkImageStencilData_CopyInformationToPipeline, METH_VARARGS,
   "V.CopyInformationToPipeline(vtkInformation)\nC++: void CopyInformationToPipeline(vtkInformation *info)\n    override;\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {"GetData", PyvtkImageStencilData_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkImageStencilData\nC++: static vtkImageStencilData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkImageStencilData\nC++: static vtkImageStencilData *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"Add", PyvtkImageStencilData_Add, METH_VARARGS,
   "V.Add(vtkImageStencilData)\nC++: virtual void Add(vtkImageStencilData *)\n\nAdd merges the stencil supplied as argument into Self.\n"},
  {"Subtract", PyvtkImageStencilData_Subtract, METH_VARARGS,
   "V.Subtract(vtkImageStencilData)\nC++: virtual void Subtract(vtkImageStencilData *)\n\nSubtract removes the portion of the stencil, supplied as\nargument, that lies within Self from Self.\n"},
  {"Replace", PyvtkImageStencilData_Replace, METH_VARARGS,
   "V.Replace(vtkImageStencilData)\nC++: virtual void Replace(vtkImageStencilData *)\n\nReplaces the portion of the stencil, supplied as argument, that\nlies within Self from Self.\n"},
  {"Clip", PyvtkImageStencilData_Clip, METH_VARARGS,
   "V.Clip([int, int, int, int, int, int]) -> int\nC++: virtual int Clip(int extent[6])\n\nClip the stencil with the supplied extents. In other words,\ndiscard data outside the specified extents. Return 1 if something\nchanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageStencilData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageStencilData", // tp_name
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
  PyvtkImageStencilData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageStencilData_StaticNew()
{
  return vtkImageStencilData::New();
}

PyObject *PyvtkImageStencilData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageStencilData_Type, PyvtkImageStencilData_Methods,
    "vtkImageStencilData",
 &PyvtkImageStencilData_StaticNew);

  PyTypeObject *pytype = &PyvtkImageStencilData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkImageStencilRaster_Doc =
  "vtkImageStencilRaster - This is a helper class for stencil creation.\n\n"
  "It is a raster with infinite resolution in the X direction\n"
  "(approximately, since it uses double precision).  Lines that\n"
  "represent polygon edges can be drawn into this raster, and then\n"
  "filled given a tolerance.\n\n"
  "vtkImageStencilRaster(const int wholeExtent[2])\n";


static PyObject *
PyvtkImageStencilRaster_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  size_t size0 = 0;
  int store0[2];
  int *temp0 = nullptr;
  if (ap.GetArgSize(0) > 0)
  {
    size0 = 2;
    temp0 = store0;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp0, size0)))
  {
    op->PrepareForNewData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_InsertLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertLine");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    op->InsertLine(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkImageStencilRaster_InsertLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertLine");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->InsertLine(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif

static PyObject *
PyvtkImageStencilRaster_InsertLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageStencilRaster_InsertLine_s1(self, args);
#if !defined(VTK_LEGACY_REMOVE)
    case 4:
      return PyvtkImageStencilRaster_InsertLine_s2(self, args);
#endif
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertLine");
  return nullptr;
}



static PyObject *
PyvtkImageStencilRaster_FillStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillStencilData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int temp2 = 0;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    op->FillStencilData(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetTolerance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetTolerance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilRaster_Methods[] = {
  {"PrepareForNewData", PyvtkImageStencilRaster_PrepareForNewData, METH_VARARGS,
   "V.PrepareForNewData((int, int))\nC++: void PrepareForNewData(const int allocateExtent[2]=nullptr)\n\nReset the raster to its original state, but keep the same whole\nextent. Pre-allocate the specified 1D allocateExtent, which must\nbe within the whole extent.\n"},
  {"InsertLine", PyvtkImageStencilRaster_InsertLine, METH_VARARGS,
   "V.InsertLine((float, float), (float, float))\nC++: void InsertLine(const double p1[2], const double p2[2])\nV.InsertLine((float, float), (float, float), bool, bool)\nC++: void InsertLine(const double[2], const double[2], bool, bool)\n\nInsert a line into the raster, given the two end points.\n"},
#if !defined(VTK_LEGACY_REMOVE)
#endif
  {"FillStencilData", PyvtkImageStencilRaster_FillStencilData, METH_VARARGS,
   "V.FillStencilData(vtkImageStencilData, (int, int, int, int, int,\n    int), int, int)\nC++: void FillStencilData(vtkImageStencilData *data,\n    const int extent[6], int xj=0, int yj=1)\n\nFill the specified extent of a vtkImageStencilData with the\nraster, after permuting the raster according to xj and yj.\n"},
  {"SetTolerance", PyvtkImageStencilRaster_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: void SetTolerance(double tol)\n\nThe tolerance for float-to-int conversions.\n"},
  {"GetTolerance", PyvtkImageStencilRaster_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: double GetTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkImageStencilRaster_vtkImageStencilRaster(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageStencilRaster");

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkImageStencilRaster *op = new vtkImageStencilRaster(temp0);

    result = PyVTKSpecialObject_New("vtkImageStencilRaster", op);
  }

  return result;
}

static PyMethodDef PyvtkImageStencilRaster_vtkImageStencilRaster_Methods[] = {
  {nullptr, PyvtkImageStencilRaster_vtkImageStencilRaster, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageStencilRaster_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImageStencilRaster_vtkImageStencilRaster(nullptr, args);
}

static void PyvtkImageStencilRaster_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImageStencilRaster *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImageStencilRaster_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkImageStencilRaster_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageStencilRaster", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImageStencilRaster_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkImageStencilRaster_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImageStencilRaster_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkImageStencilRaster_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageStencilRaster_TypeNew(); }

PyObject *PyvtkImageStencilRaster_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkImageStencilRaster_Type,
    PyvtkImageStencilRaster_Methods,
    PyvtkImageStencilRaster_vtkImageStencilRaster_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkImageStencilRaster_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageStencilData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageStencilData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStencilData", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkImageStencilRaster_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStencilRaster", o) != 0)
  {
    Py_DECREF(o);
  }

}

