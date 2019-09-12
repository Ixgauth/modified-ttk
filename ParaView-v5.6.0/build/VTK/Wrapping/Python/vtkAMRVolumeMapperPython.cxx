// python wrapper for vtkAMRVolumeMapper
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
#include "vtkInformationVector.h"
#include "vtkAMRVolumeMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRVolumeMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRVolumeMapper_ClassNew(); }

#ifndef DECLARED_PyvtkVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkVolumeMapper_ClassNew
#endif

static const char *PyvtkAMRVolumeMapper_Doc =
  "vtkAMRVolumeMapper - AMR class for a volume mapper\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "vtkAMRVolumeMapper is the definition of a volume mapper. for AMR\n"
  "Structured Data\n\n";


static PyObject *
PyvtkAMRVolumeMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRVolumeMapper *tempr = vtkAMRVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRVolumeMapper::NewInstance());

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
PyvtkAMRVolumeMapper_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRVolumeMapper_SetInputData_Methods[] = {
  {nullptr, PyvtkAMRVolumeMapper_SetInputData_s1, METH_VARARGS,
   "@V *vtkImageData"},
  {nullptr, PyvtkAMRVolumeMapper_SetInputData_s2, METH_VARARGS,
   "@V *vtkDataSet"},
  {nullptr, PyvtkAMRVolumeMapper_SetInputData_s3, METH_VARARGS,
   "@V *vtkOverlappingAMR"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRVolumeMapper_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRVolumeMapper_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRVolumeMapper_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAMRVolumeMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

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
      op->vtkAMRVolumeMapper::GetBounds(temp0);
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
PyvtkAMRVolumeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRVolumeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendMode(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetBlendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkAMRVolumeMapper::GetBlendMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SelectScalarArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScalarArray(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SelectScalarArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScalarArray(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRVolumeMapper_SelectScalarArray_Methods[] = {
  {nullptr, PyvtkAMRVolumeMapper_SelectScalarArray_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkAMRVolumeMapper_SelectScalarArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRVolumeMapper_SelectScalarArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAMRVolumeMapper_SelectScalarArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectScalarArray");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAMRVolumeMapper::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkAMRVolumeMapper::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkAMRVolumeMapper::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkAMRVolumeMapper::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkAMRVolumeMapper::GetCropping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

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
      op->SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

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
      op->SetCroppingRegionPlanes(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetCroppingRegionPlanes(temp0);
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
PyvtkAMRVolumeMapper_SetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_SetCroppingRegionPlanes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegionPlanes");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCroppingRegionPlanes(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::GetCroppingRegionPlanes(temp0);
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
PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCroppingRegionPlanes() :
      op->vtkAMRVolumeMapper::GetCroppingRegionPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s1(self, args);
    case 0:
      return PyvtkAMRVolumeMapper_GetCroppingRegionPlanes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCroppingRegionPlanes");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlags(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetCroppingRegionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlags() :
      op->vtkAMRVolumeMapper::GetCroppingRegionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderMode(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequestedRenderMode() :
      op->vtkAMRVolumeMapper::GetRequestedRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToDefault();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCastAndTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCastAndTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToRayCastAndTexture();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToRayCastAndTexture();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToRayCast();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToRayCast();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToTexture();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToTexture();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedRenderModeToGPU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToGPU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToGPU();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedRenderModeToGPU();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkAMRVolumeMapper::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToNearestNeighbor();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInterpolationModeToNearestNeighbor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToLinear();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInterpolationModeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToCubic();
    }
    else
    {
      op->vtkAMRVolumeMapper::SetInterpolationModeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetNumberOfSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetNumberOfSamples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetNumberOfSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetNumberOfSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRVolumeMapper_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRVolumeMapper_SetNumberOfSamples_s1(self, args);
    case 1:
      return PyvtkAMRVolumeMapper_SetNumberOfSamples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfSamples");
  return nullptr;
}



static PyObject *
PyvtkAMRVolumeMapper_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkAMRVolumeMapper::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkAMRVolumeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_UpdateResampler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateResampler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkOverlappingAMR *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->UpdateResampler(temp0, temp1);
    }
    else
    {
      op->vtkAMRVolumeMapper::UpdateResampler(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_UpdateResamplerFrustrumMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateResamplerFrustrumMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkOverlappingAMR *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->UpdateResamplerFrustrumMethod(temp0, temp1);
    }
    else
    {
      op->vtkAMRVolumeMapper::UpdateResamplerFrustrumMethod(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetRequestedResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedResamplingMode(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetRequestedResamplingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetRequestedResamplingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedResamplingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequestedResamplingMode() :
      op->vtkAMRVolumeMapper::GetRequestedResamplingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFreezeFocalPoint(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetFreezeFocalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFreezeFocalPoint() :
      op->vtkAMRVolumeMapper::GetFreezeFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetResamplerUpdateTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResamplerUpdateTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResamplerUpdateTolerance(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetResamplerUpdateTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetResamplerUpdateTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResamplerUpdateTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetResamplerUpdateTolerance() :
      op->vtkAMRVolumeMapper::GetResamplerUpdateTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_SetUseDefaultThreading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultThreading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDefaultThreading(temp0);
    }
    else
    {
      op->vtkAMRVolumeMapper::SetUseDefaultThreading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_GetUseDefaultThreading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultThreading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRVolumeMapper *op = static_cast<vtkAMRVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDefaultThreading() :
      op->vtkAMRVolumeMapper::GetUseDefaultThreading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRVolumeMapper_ComputeResamplerBoundsFrustumMethod(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeResamplerBoundsFrustumMethod");

  vtkCamera *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    bool tempr = vtkAMRVolumeMapper::ComputeResamplerBoundsFrustumMethod(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkAMRVolumeMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRVolumeMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRVolumeMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRVolumeMapper\nC++: static vtkAMRVolumeMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRVolumeMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRVolumeMapper\nC++: vtkAMRVolumeMapper *NewInstance()\n\n"},
  {"SetInputData", PyvtkAMRVolumeMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: void SetInputData(vtkImageData *) override;\nV.SetInputData(vtkDataSet)\nC++: void SetInputData(vtkDataSet *) override;\nV.SetInputData(vtkOverlappingAMR)\nC++: virtual void SetInputData(vtkOverlappingAMR *)\n\nSet the input data\n"},
  {"SetInputConnection", PyvtkAMRVolumeMapper_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nSet the input data\n"},
  {"GetBounds", PyvtkAMRVolumeMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"SetScalarMode", PyvtkAMRVolumeMapper_SetScalarMode, METH_VARARGS,
   "V.SetScalarMode(int)\nC++: void SetScalarMode(int mode) override;\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetBlendMode", PyvtkAMRVolumeMapper_SetBlendMode, METH_VARARGS,
   "V.SetBlendMode(int)\nC++: void SetBlendMode(int mode) override;\n\nSet/Get the blend mode. Additive blend mode adds scalars along\nthe ray and multiply them by their opacity mapping value.\n"},
  {"GetBlendMode", PyvtkAMRVolumeMapper_GetBlendMode, METH_VARARGS,
   "V.GetBlendMode() -> int\nC++: int GetBlendMode() override;\n\nSet/Get the blend mode. Additive blend mode adds scalars along\nthe ray and multiply them by their opacity mapping value.\n"},
  {"SelectScalarArray", PyvtkAMRVolumeMapper_SelectScalarArray, METH_VARARGS,
   "V.SelectScalarArray(int)\nC++: void SelectScalarArray(int arrayNum) override;\nV.SelectScalarArray(string)\nC++: void SelectScalarArray(const char *arrayName) override;\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which scalar array to use during rendering. The\ntransfer function in the vtkVolumeProperty (attached to the\ncalling vtkVolume) will decide how to convert vectors to colors.\n"},
  {"GetArrayName", PyvtkAMRVolumeMapper_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: char *GetArrayName() override;\n\nGet the array name or number and component to use for rendering.\n"},
  {"GetArrayId", PyvtkAMRVolumeMapper_GetArrayId, METH_VARARGS,
   "V.GetArrayId() -> int\nC++: int GetArrayId() override;\n\nGet the array name or number and component to use for rendering.\n"},
  {"GetArrayAccessMode", PyvtkAMRVolumeMapper_GetArrayAccessMode, METH_VARARGS,
   "V.GetArrayAccessMode() -> int\nC++: int GetArrayAccessMode() override;\n\nGet the array name or number and component to use for rendering.\n"},
  {"GetScalarModeAsString", PyvtkAMRVolumeMapper_GetScalarModeAsString, METH_VARARGS,
   "V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {"SetCropping", PyvtkAMRVolumeMapper_SetCropping, METH_VARARGS,
   "V.SetCropping(int)\nC++: void SetCropping(int mode) override;\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"GetCropping", PyvtkAMRVolumeMapper_GetCropping, METH_VARARGS,
   "V.GetCropping() -> int\nC++: int GetCropping() override;\n\nTurn On/Off orthogonal cropping. (Clipping planes are\nperpendicular to the coordinate axes.)\n"},
  {"SetCroppingRegionPlanes", PyvtkAMRVolumeMapper_SetCroppingRegionPlanes, METH_VARARGS,
   "V.SetCroppingRegionPlanes(float, float, float, float, float,\n    float)\nC++: void SetCroppingRegionPlanes(double arg1, double arg2,\n    double arg3, double arg4, double arg5, double arg6) override;\nV.SetCroppingRegionPlanes([float, float, float, float, float,\n    float])\nC++: void SetCroppingRegionPlanes(double *planes) override;\n\nSet/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax,\nzmin, zmax ) These planes are defined in volume coordinates -\nspacing and origin are considered.\n"},
  {"GetCroppingRegionPlanes", PyvtkAMRVolumeMapper_GetCroppingRegionPlanes, METH_VARARGS,
   "V.GetCroppingRegionPlanes([float, ...])\nC++: void GetCroppingRegionPlanes(double *planes) override;\nV.GetCroppingRegionPlanes() -> (float, float, float, float, float,\n     float)\nC++: double *GetCroppingRegionPlanes() override;\n\nSet/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax,\nzmin, zmax ) These planes are defined in volume coordinates -\nspacing and origin are considered.\n"},
  {"SetCroppingRegionFlags", PyvtkAMRVolumeMapper_SetCroppingRegionFlags, METH_VARARGS,
   "V.SetCroppingRegionFlags(int)\nC++: void SetCroppingRegionFlags(int mode) override;\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"GetCroppingRegionFlags", PyvtkAMRVolumeMapper_GetCroppingRegionFlags, METH_VARARGS,
   "V.GetCroppingRegionFlags() -> int\nC++: int GetCroppingRegionFlags() override;\n\nSet the flags for the cropping regions. The clipping planes\ndivide the volume into 27 regions - there is one bit for each\nregion. The regions start from the one containing voxel (0,0,0),\nmoving along the x axis fastest, the y axis next, and the z axis\nslowest. These are represented from the lowest bit to bit number\n27 in the integer containing the flags. There are several\nconvenience functions to set some common configurations -\nsubvolume (the default), fence (between any of the clip plane\npairs), inverted fence, cross (between any two of the clip plane\npairs) and inverted cross.\n"},
  {"SetRequestedRenderMode", PyvtkAMRVolumeMapper_SetRequestedRenderMode, METH_VARARGS,
   "V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int mode)\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {"GetRequestedRenderMode", PyvtkAMRVolumeMapper_GetRequestedRenderMode, METH_VARARGS,
   "V.GetRequestedRenderMode() -> int\nC++: int GetRequestedRenderMode()\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {"SetRequestedRenderModeToDefault", PyvtkAMRVolumeMapper_SetRequestedRenderModeToDefault, METH_VARARGS,
   "V.SetRequestedRenderModeToDefault()\nC++: void SetRequestedRenderModeToDefault()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::DefaultRenderMode. This is the best option\nfor an application that must adapt to different data types,\nhardware, and rendering parameters.\n"},
  {"SetRequestedRenderModeToRayCastAndTexture", PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCastAndTexture, METH_VARARGS,
   "V.SetRequestedRenderModeToRayCastAndTexture()\nC++: void SetRequestedRenderModeToRayCastAndTexture()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::RayCastAndTextureRenderMode. This is a good\noption if you want to avoid using advanced OpenGL functionality,\nbut would still like to used 3D texture mapping, if available,\nfor interactive rendering.\n"},
  {"SetRequestedRenderModeToRayCast", PyvtkAMRVolumeMapper_SetRequestedRenderModeToRayCast, METH_VARARGS,
   "V.SetRequestedRenderModeToRayCast()\nC++: void SetRequestedRenderModeToRayCast()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::RayCastRenderMode. This option will use\nsoftware rendering exclusively. This is a good option if you know\nthere is no hardware acceleration.\n"},
  {"SetRequestedRenderModeToTexture", PyvtkAMRVolumeMapper_SetRequestedRenderModeToTexture, METH_VARARGS,
   "V.SetRequestedRenderModeToTexture()\nC++: void SetRequestedRenderModeToTexture()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::TextureRenderMode. This is a good option if\nyou want to use 3D texture mapping, if available, for interactive\nrendering.\n"},
  {"SetRequestedRenderModeToGPU", PyvtkAMRVolumeMapper_SetRequestedRenderModeToGPU, METH_VARARGS,
   "V.SetRequestedRenderModeToGPU()\nC++: void SetRequestedRenderModeToGPU()\n\nSet the requested render mode to\nvtkAMRVolumeMapper::GPURenderMode. This will do the volume\nrendering on the GPU\n"},
  {"SetInterpolationMode", PyvtkAMRVolumeMapper_SetInterpolationMode, METH_VARARGS,
   "V.SetInterpolationMode(int)\nC++: void SetInterpolationMode(int mode)\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"GetInterpolationMode", PyvtkAMRVolumeMapper_GetInterpolationMode, METH_VARARGS,
   "V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"SetInterpolationModeToNearestNeighbor", PyvtkAMRVolumeMapper_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   "V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\n"},
  {"SetInterpolationModeToLinear", PyvtkAMRVolumeMapper_SetInterpolationModeToLinear, METH_VARARGS,
   "V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\n"},
  {"SetInterpolationModeToCubic", PyvtkAMRVolumeMapper_SetInterpolationModeToCubic, METH_VARARGS,
   "V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\n"},
  {"SetNumberOfSamples", PyvtkAMRVolumeMapper_SetNumberOfSamples, METH_VARARGS,
   "V.SetNumberOfSamples(int, int, int)\nC++: void SetNumberOfSamples(int, int, int)\nV.SetNumberOfSamples((int, int, int))\nC++: void SetNumberOfSamples(int a[3])\n\n"},
  {"GetNumberOfSamples", PyvtkAMRVolumeMapper_GetNumberOfSamples, METH_VARARGS,
   "V.GetNumberOfSamples() -> (int, int, int)\nC++: int *GetNumberOfSamples()\n\n"},
  {"Render", PyvtkAMRVolumeMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *ren, vtkVolume *vol) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {"ReleaseGraphicsResources", PyvtkAMRVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"UpdateResampler", PyvtkAMRVolumeMapper_UpdateResampler, METH_VARARGS,
   "V.UpdateResampler(vtkRenderer, vtkOverlappingAMR)\nC++: void UpdateResampler(vtkRenderer *ren,\n    vtkOverlappingAMR *amr)\n\n"},
  {"UpdateResamplerFrustrumMethod", PyvtkAMRVolumeMapper_UpdateResamplerFrustrumMethod, METH_VARARGS,
   "V.UpdateResamplerFrustrumMethod(vtkRenderer, vtkOverlappingAMR)\nC++: void UpdateResamplerFrustrumMethod(vtkRenderer *ren,\n    vtkOverlappingAMR *amr)\n\n"},
  {"SetRequestedResamplingMode", PyvtkAMRVolumeMapper_SetRequestedResamplingMode, METH_VARARGS,
   "V.SetRequestedResamplingMode(int)\nC++: virtual void SetRequestedResamplingMode(int _arg)\n\nSelect the type of resampling techinque approach to use.\n"},
  {"GetRequestedResamplingMode", PyvtkAMRVolumeMapper_GetRequestedResamplingMode, METH_VARARGS,
   "V.GetRequestedResamplingMode() -> int\nC++: virtual int GetRequestedResamplingMode()\n\nSelect the type of resampling techinque approach to use.\n"},
  {"SetFreezeFocalPoint", PyvtkAMRVolumeMapper_SetFreezeFocalPoint, METH_VARARGS,
   "V.SetFreezeFocalPoint(bool)\nC++: virtual void SetFreezeFocalPoint(bool _arg)\n\nSelect the type of resampling techinque approach to use.\n"},
  {"GetFreezeFocalPoint", PyvtkAMRVolumeMapper_GetFreezeFocalPoint, METH_VARARGS,
   "V.GetFreezeFocalPoint() -> bool\nC++: virtual bool GetFreezeFocalPoint()\n\nSelect the type of resampling techinque approach to use.\n"},
  {"SetResamplerUpdateTolerance", PyvtkAMRVolumeMapper_SetResamplerUpdateTolerance, METH_VARARGS,
   "V.SetResamplerUpdateTolerance(float)\nC++: virtual void SetResamplerUpdateTolerance(double _arg)\n\nSets/Gets the tolerance used to determine if the resampler needs\nto be updated. Default is 10e-8\n"},
  {"GetResamplerUpdateTolerance", PyvtkAMRVolumeMapper_GetResamplerUpdateTolerance, METH_VARARGS,
   "V.GetResamplerUpdateTolerance() -> float\nC++: virtual double GetResamplerUpdateTolerance()\n\nSets/Gets the tolerance used to determine if the resampler needs\nto be updated. Default is 10e-8\n"},
  {"SetUseDefaultThreading", PyvtkAMRVolumeMapper_SetUseDefaultThreading, METH_VARARGS,
   "V.SetUseDefaultThreading(bool)\nC++: virtual void SetUseDefaultThreading(bool _arg)\n\nSets/Gets a flag that indicates the internal volume mapper should\nuse the  default number of threads.  This is useful in\napplications such as ParaView that will turn off multiple threads\nby default. Default is false\n"},
  {"GetUseDefaultThreading", PyvtkAMRVolumeMapper_GetUseDefaultThreading, METH_VARARGS,
   "V.GetUseDefaultThreading() -> bool\nC++: virtual bool GetUseDefaultThreading()\n\nSets/Gets a flag that indicates the internal volume mapper should\nuse the  default number of threads.  This is useful in\napplications such as ParaView that will turn off multiple threads\nby default. Default is false\n"},
  {"ComputeResamplerBoundsFrustumMethod", PyvtkAMRVolumeMapper_ComputeResamplerBoundsFrustumMethod, METH_VARARGS,
   "V.ComputeResamplerBoundsFrustumMethod(vtkCamera, vtkRenderer, (\n    float, float, float, float, float, float), [float, float,\n    float, float, float, float]) -> bool\nC++: static bool ComputeResamplerBoundsFrustumMethod(\n    vtkCamera *camera, vtkRenderer *renderer,\n    const double data_bounds[6], double out_bounds[6])\n\nUtility method used by UpdateResamplerFrustrumMethod() to compute\nthe bounds.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumeAMRPython.vtkAMRVolumeMapper", // tp_name
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
  PyvtkAMRVolumeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRVolumeMapper_StaticNew()
{
  return vtkAMRVolumeMapper::New();
}

PyObject *PyvtkAMRVolumeMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRVolumeMapper_Type, PyvtkAMRVolumeMapper_Methods,
    "vtkAMRVolumeMapper",
 &PyvtkAMRVolumeMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRVolumeMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkVolumeMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "DefaultRenderMode", vtkAMRVolumeMapper::DefaultRenderMode },
        { "RayCastAndTextureRenderMode", vtkAMRVolumeMapper::RayCastAndTextureRenderMode },
        { "RayCastRenderMode", vtkAMRVolumeMapper::RayCastRenderMode },
        { "TextureRenderMode", vtkAMRVolumeMapper::TextureRenderMode },
        { "GPURenderMode", vtkAMRVolumeMapper::GPURenderMode },
        { "UndefinedRenderMode", vtkAMRVolumeMapper::UndefinedRenderMode },
        { "InvalidRenderMode", vtkAMRVolumeMapper::InvalidRenderMode },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

