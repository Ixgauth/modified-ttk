// python wrapper for vtkPolarAxesRepresentation
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
#include "vtkPolarAxesRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolarAxesRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolarAxesRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkPolarAxesRepresentation_Doc =
  "vtkPolarAxesRepresentation - representation for a polar-axes.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkPolarAxesRepresentation is a representation for the Polar-Axes\n"
  "that shows a bounding box with labels around any input dataset.\n\n";


static PyObject *
PyvtkPolarAxesRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolarAxesRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolarAxesRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolarAxesRepresentation *tempr = vtkPolarAxesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolarAxesRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolarAxesRepresentation::NewInstance());

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
PyvtkPolarAxesRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolarAxesRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkPolarAxesRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkPolarAxesRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPolarAxesRepresentation::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolarAxesRepresentation_SetOrientation_s1(self, args);
    case 1:
      return PyvtkPolarAxesRepresentation_SetOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientation");
  return nullptr;
}



static PyObject *
PyvtkPolarAxesRepresentation_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkPolarAxesRepresentation::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolarAxesRepresentation_SetScale_s1(self, args);
    case 1:
      return PyvtkPolarAxesRepresentation_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}



static PyObject *
PyvtkPolarAxesRepresentation_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkPolarAxesRepresentation::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataBounds() :
      op->vtkPolarAxesRepresentation::GetDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetCustomBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetCustomBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetCustomBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetCustomBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomBounds(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetCustomBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetCustomBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPolarAxesRepresentation_SetCustomBounds_s1(self, args);
    case 1:
      return PyvtkPolarAxesRepresentation_SetCustomBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBounds");
  return nullptr;
}



static PyObject *
PyvtkPolarAxesRepresentation_GetCustomBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBounds() :
      op->vtkPolarAxesRepresentation::GetCustomBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetEnableCustomBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetEnableCustomBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetEnableCustomBounds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetEnableCustomBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEnableCustomBounds(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetEnableCustomBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetEnableCustomBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolarAxesRepresentation_SetEnableCustomBounds_s1(self, args);
    case 1:
      return PyvtkPolarAxesRepresentation_SetEnableCustomBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEnableCustomBounds");
  return nullptr;
}



static PyObject *
PyvtkPolarAxesRepresentation_GetEnableCustomBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableCustomBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEnableCustomBounds() :
      op->vtkPolarAxesRepresentation::GetEnableCustomBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetEnableCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableCustomRange(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetEnableCustomRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_GetEnableCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableCustomRange() :
      op->vtkPolarAxesRepresentation::GetEnableCustomRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetCustomRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomRange(temp0, temp1);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetCustomRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetCustomRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomRange(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetCustomRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesRepresentation_SetCustomRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolarAxesRepresentation_SetCustomRange_s1(self, args);
    case 1:
      return PyvtkPolarAxesRepresentation_SetCustomRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomRange");
  return nullptr;
}



static PyObject *
PyvtkPolarAxesRepresentation_GetCustomRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomRange() :
      op->vtkPolarAxesRepresentation::GetCustomRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetPolarAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarArcsColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcsColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetPolarArcsColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarArcsColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetSecondaryPolarArcsColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPolarArcsColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetSecondaryPolarArcsColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetSecondaryPolarArcsColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetSecondaryRadialAxesColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryRadialAxesColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetSecondaryRadialAxesColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetSecondaryRadialAxesColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLastRadialAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

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
      op->SetLastRadialAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLastRadialAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTitleTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisLabelTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLastRadialAxisTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLastRadialAxisTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetSecondaryRadialAxesTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryRadialAxesTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryRadialAxesTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetSecondaryRadialAxesTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkPolarAxesRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkPolarAxesRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetParentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetParentVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLog(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetNumberOfRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRadialAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetNumberOfRadialAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetNumberOfPolarAxisTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPolarAxisTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPolarAxisTicks(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetNumberOfPolarAxisTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetAutoSubdividePolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoSubdividePolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoSubdividePolarAxis(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetAutoSubdividePolarAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetMinimumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumRadius(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetMinimumRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetMinimumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetMinimumAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetMaximumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetMaximumAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetSmallestVisiblePolarAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmallestVisiblePolarAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmallestVisiblePolarAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetSmallestVisiblePolarAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetTickLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRadialUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialUnits(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRadialUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTitle(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarLabelFormat(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetExponentLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRadialAngleFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAngleFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAngleFormat(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRadialAngleFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableDistanceLOD(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetEnableDistanceLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceLODThreshold(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetDistanceLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableViewAngleLOD(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetEnableViewAngleLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngleLODThreshold(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetViewAngleLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetDrawRadialGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawRadialGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawRadialGridlines(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetDrawRadialGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetDrawPolarArcsGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPolarArcsGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPolarArcsGridlines(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetDrawPolarArcsGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarTitleVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRadialAxisTitleLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxisTitleLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAxisTitleLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRadialAxisTitleLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisTitleLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitleLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTitleLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisTitleLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarLabelVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcTicksOriginToPolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTicksOriginToPolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTicksOriginToPolarAxis(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcTicksOriginToPolarAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRadialAxesOriginToPolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxesOriginToPolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAxesOriginToPolarAxis(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRadialAxesOriginToPolarAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcMajorTickSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisMajorTickSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLastRadialAxisMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisMajorTickSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLastRadialAxisMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTickRatioSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisTickRatioSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLastAxisTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastAxisTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastAxisTickRatioSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLastAxisTickRatioSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickRatioSize(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcTickRatioSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisMajorTickThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisMajorTickThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLastRadialAxisMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisMajorTickThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLastRadialAxisMajorTickThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcMajorTickThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcMajorTickThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarAxisTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTickRatioThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarAxisTickRatioThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetLastAxisTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastAxisTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastAxisTickRatioThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetLastAxisTickRatioThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetArcTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickRatioThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetArcTickRatioThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetDeltaAngleMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaAngleMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaAngleMajor(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetDeltaAngleMajor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetDeltaAngleMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaAngleMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaAngleMinor(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetDeltaAngleMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRadialAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAxesVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRadialAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRadialTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialTitleVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRadialTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetPolarArcsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarArcsVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetPolarArcsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse2DMode(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetUse2DMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRatio(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_GetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMinor() :
      op->vtkPolarAxesRepresentation::GetDeltaRangeMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_GetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMajor() :
      op->vtkPolarAxesRepresentation::GetDeltaRangeMajor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_SetRendererType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRendererType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRendererType(temp0);
    }
    else
    {
      op->vtkPolarAxesRepresentation::SetRendererType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesRepresentation_GetRendererType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRendererType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesRepresentation *op = static_cast<vtkPolarAxesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRendererType() :
      op->vtkPolarAxesRepresentation::GetRendererType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolarAxesRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPolarAxesRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolarAxesRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolarAxesRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolarAxesRepresentation\nC++: static vtkPolarAxesRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolarAxesRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolarAxesRepresentation\nC++: vtkPolarAxesRepresentation *NewInstance()\n\n"},
  {"SetPosition", PyvtkPolarAxesRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {"GetPosition", PyvtkPolarAxesRepresentation_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\n"},
  {"SetOrientation", PyvtkPolarAxesRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\nV.SetOrientation((float, float, float))\nC++: void SetOrientation(double a[3])\n\n"},
  {"GetOrientation", PyvtkPolarAxesRepresentation_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\n\n"},
  {"SetScale", PyvtkPolarAxesRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {"GetScale", PyvtkPolarAxesRepresentation_GetScale, METH_VARARGS,
   "V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\n"},
  {"GetDataBounds", PyvtkPolarAxesRepresentation_GetDataBounds, METH_VARARGS,
   "V.GetDataBounds() -> (float, float, float, float, float, float)\nC++: double *GetDataBounds()\n\n"},
  {"SetCustomBounds", PyvtkPolarAxesRepresentation_SetCustomBounds, METH_VARARGS,
   "V.SetCustomBounds(float, float, float, float, float, float)\nC++: void SetCustomBounds(double, double, double, double, double,\n    double)\nV.SetCustomBounds((float, float, float, float, float, float))\nC++: void SetCustomBounds(double a[6])\n\n"},
  {"GetCustomBounds", PyvtkPolarAxesRepresentation_GetCustomBounds, METH_VARARGS,
   "V.GetCustomBounds() -> (float, float, float, float, float, float)\nC++: double *GetCustomBounds()\n\n"},
  {"SetEnableCustomBounds", PyvtkPolarAxesRepresentation_SetEnableCustomBounds, METH_VARARGS,
   "V.SetEnableCustomBounds(int, int, int)\nC++: void SetEnableCustomBounds(int, int, int)\nV.SetEnableCustomBounds((int, int, int))\nC++: void SetEnableCustomBounds(int a[3])\n\n"},
  {"GetEnableCustomBounds", PyvtkPolarAxesRepresentation_GetEnableCustomBounds, METH_VARARGS,
   "V.GetEnableCustomBounds() -> (int, int, int)\nC++: int *GetEnableCustomBounds()\n\n"},
  {"SetEnableCustomRange", PyvtkPolarAxesRepresentation_SetEnableCustomRange, METH_VARARGS,
   "V.SetEnableCustomRange(bool)\nC++: virtual void SetEnableCustomRange(bool _arg)\n\nSet the use of a custom range.\n"},
  {"GetEnableCustomRange", PyvtkPolarAxesRepresentation_GetEnableCustomRange, METH_VARARGS,
   "V.GetEnableCustomRange() -> bool\nC++: virtual bool GetEnableCustomRange()\n\nSet the use of a custom range.\n"},
  {"SetCustomRange", PyvtkPolarAxesRepresentation_SetCustomRange, METH_VARARGS,
   "V.SetCustomRange(float, float)\nC++: void SetCustomRange(double, double)\nV.SetCustomRange((float, float))\nC++: void SetCustomRange(double a[2])\n\n"},
  {"GetCustomRange", PyvtkPolarAxesRepresentation_GetCustomRange, METH_VARARGS,
   "V.GetCustomRange() -> (float, float)\nC++: double *GetCustomRange()\n\n"},
  {"SetPolarAxisColor", PyvtkPolarAxesRepresentation_SetPolarAxisColor, METH_VARARGS,
   "V.SetPolarAxisColor(float, float, float)\nC++: virtual void SetPolarAxisColor(double r, double g, double b)\n\nSet the actor color.\n"},
  {"SetPolarArcsColor", PyvtkPolarAxesRepresentation_SetPolarArcsColor, METH_VARARGS,
   "V.SetPolarArcsColor(float, float, float)\nC++: virtual void SetPolarArcsColor(double r, double g, double b)\n\nSet the actor color.\n"},
  {"SetSecondaryPolarArcsColor", PyvtkPolarAxesRepresentation_SetSecondaryPolarArcsColor, METH_VARARGS,
   "V.SetSecondaryPolarArcsColor(float, float, float)\nC++: virtual void SetSecondaryPolarArcsColor(double r, double g,\n    double b)\n\nSet the actor color.\n"},
  {"SetSecondaryRadialAxesColor", PyvtkPolarAxesRepresentation_SetSecondaryRadialAxesColor, METH_VARARGS,
   "V.SetSecondaryRadialAxesColor(float, float, float)\nC++: virtual void SetSecondaryRadialAxesColor(double r, double g,\n    double b)\n\nSet the actor color.\n"},
  {"SetLastRadialAxisColor", PyvtkPolarAxesRepresentation_SetLastRadialAxisColor, METH_VARARGS,
   "V.SetLastRadialAxisColor(float, float, float)\nC++: virtual void SetLastRadialAxisColor(double r, double g,\n    double b)\n\nSet the actor color.\n"},
  {"SetPolarAxisTitleTextProperty", PyvtkPolarAxesRepresentation_SetPolarAxisTitleTextProperty, METH_VARARGS,
   "V.SetPolarAxisTitleTextProperty(vtkTextProperty)\nC++: virtual void SetPolarAxisTitleTextProperty(\n    vtkTextProperty *prop)\n\nSet the actor color.\n"},
  {"SetPolarAxisLabelTextProperty", PyvtkPolarAxesRepresentation_SetPolarAxisLabelTextProperty, METH_VARARGS,
   "V.SetPolarAxisLabelTextProperty(vtkTextProperty)\nC++: virtual void SetPolarAxisLabelTextProperty(\n    vtkTextProperty *prop)\n\nSet the actor color.\n"},
  {"SetLastRadialAxisTextProperty", PyvtkPolarAxesRepresentation_SetLastRadialAxisTextProperty, METH_VARARGS,
   "V.SetLastRadialAxisTextProperty(vtkTextProperty)\nC++: virtual void SetLastRadialAxisTextProperty(\n    vtkTextProperty *prop)\n\nSet the actor color.\n"},
  {"SetSecondaryRadialAxesTextProperty", PyvtkPolarAxesRepresentation_SetSecondaryRadialAxesTextProperty, METH_VARARGS,
   "V.SetSecondaryRadialAxesTextProperty(vtkTextProperty)\nC++: virtual void SetSecondaryRadialAxesTextProperty(\n    vtkTextProperty *prop)\n\nSet the actor color.\n"},
  {"MarkModified", PyvtkPolarAxesRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkPolarAxesRepresentation when the input is modified.\n"},
  {"ProcessViewRequest", PyvtkPolarAxesRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"SetVisibility", PyvtkPolarAxesRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation.\n"},
  {"SetParentVisibility", PyvtkPolarAxesRepresentation_SetParentVisibility, METH_VARARGS,
   "V.SetParentVisibility(bool)\nC++: virtual void SetParentVisibility(bool visible)\n\nSet (forward) visibility of the parent (composite)\nrepresentation.\n"},
  {"SetLog", PyvtkPolarAxesRepresentation_SetLog, METH_VARARGS,
   "V.SetLog(bool)\nC++: virtual void SetLog(bool active)\n\n"},
  {"SetNumberOfRadialAxes", PyvtkPolarAxesRepresentation_SetNumberOfRadialAxes, METH_VARARGS,
   "V.SetNumberOfRadialAxes(int)\nC++: virtual void SetNumberOfRadialAxes(vtkIdType val)\n\n"},
  {"SetNumberOfPolarAxisTicks", PyvtkPolarAxesRepresentation_SetNumberOfPolarAxisTicks, METH_VARARGS,
   "V.SetNumberOfPolarAxisTicks(int)\nC++: virtual void SetNumberOfPolarAxisTicks(int val)\n\n"},
  {"SetAutoSubdividePolarAxis", PyvtkPolarAxesRepresentation_SetAutoSubdividePolarAxis, METH_VARARGS,
   "V.SetAutoSubdividePolarAxis(bool)\nC++: virtual void SetAutoSubdividePolarAxis(bool active)\n\n"},
  {"SetMinimumRadius", PyvtkPolarAxesRepresentation_SetMinimumRadius, METH_VARARGS,
   "V.SetMinimumRadius(float)\nC++: virtual void SetMinimumRadius(double radius)\n\n"},
  {"SetMinimumAngle", PyvtkPolarAxesRepresentation_SetMinimumAngle, METH_VARARGS,
   "V.SetMinimumAngle(float)\nC++: virtual void SetMinimumAngle(double angle)\n\n"},
  {"SetMaximumAngle", PyvtkPolarAxesRepresentation_SetMaximumAngle, METH_VARARGS,
   "V.SetMaximumAngle(float)\nC++: virtual void SetMaximumAngle(double angle)\n\n"},
  {"SetSmallestVisiblePolarAngle", PyvtkPolarAxesRepresentation_SetSmallestVisiblePolarAngle, METH_VARARGS,
   "V.SetSmallestVisiblePolarAngle(float)\nC++: virtual void SetSmallestVisiblePolarAngle(double angle)\n\n"},
  {"SetTickLocation", PyvtkPolarAxesRepresentation_SetTickLocation, METH_VARARGS,
   "V.SetTickLocation(int)\nC++: virtual void SetTickLocation(int location)\n\n"},
  {"SetRadialUnits", PyvtkPolarAxesRepresentation_SetRadialUnits, METH_VARARGS,
   "V.SetRadialUnits(bool)\nC++: virtual void SetRadialUnits(bool use)\n\n"},
  {"SetScreenSize", PyvtkPolarAxesRepresentation_SetScreenSize, METH_VARARGS,
   "V.SetScreenSize(float)\nC++: virtual void SetScreenSize(double size)\n\n"},
  {"SetPolarAxisTitle", PyvtkPolarAxesRepresentation_SetPolarAxisTitle, METH_VARARGS,
   "V.SetPolarAxisTitle(string)\nC++: virtual void SetPolarAxisTitle(const char *title)\n\n"},
  {"SetPolarLabelFormat", PyvtkPolarAxesRepresentation_SetPolarLabelFormat, METH_VARARGS,
   "V.SetPolarLabelFormat(string)\nC++: virtual void SetPolarLabelFormat(const char *format)\n\n"},
  {"SetExponentLocation", PyvtkPolarAxesRepresentation_SetExponentLocation, METH_VARARGS,
   "V.SetExponentLocation(int)\nC++: virtual void SetExponentLocation(int location)\n\n"},
  {"SetRadialAngleFormat", PyvtkPolarAxesRepresentation_SetRadialAngleFormat, METH_VARARGS,
   "V.SetRadialAngleFormat(string)\nC++: virtual void SetRadialAngleFormat(const char *format)\n\n"},
  {"SetEnableDistanceLOD", PyvtkPolarAxesRepresentation_SetEnableDistanceLOD, METH_VARARGS,
   "V.SetEnableDistanceLOD(int)\nC++: virtual void SetEnableDistanceLOD(int enable)\n\n"},
  {"SetDistanceLODThreshold", PyvtkPolarAxesRepresentation_SetDistanceLODThreshold, METH_VARARGS,
   "V.SetDistanceLODThreshold(float)\nC++: virtual void SetDistanceLODThreshold(double val)\n\n"},
  {"SetEnableViewAngleLOD", PyvtkPolarAxesRepresentation_SetEnableViewAngleLOD, METH_VARARGS,
   "V.SetEnableViewAngleLOD(int)\nC++: virtual void SetEnableViewAngleLOD(int enable)\n\n"},
  {"SetViewAngleLODThreshold", PyvtkPolarAxesRepresentation_SetViewAngleLODThreshold, METH_VARARGS,
   "V.SetViewAngleLODThreshold(float)\nC++: virtual void SetViewAngleLODThreshold(double val)\n\n"},
  {"SetPolarAxisVisibility", PyvtkPolarAxesRepresentation_SetPolarAxisVisibility, METH_VARARGS,
   "V.SetPolarAxisVisibility(int)\nC++: virtual void SetPolarAxisVisibility(int visible)\n\n"},
  {"SetDrawRadialGridlines", PyvtkPolarAxesRepresentation_SetDrawRadialGridlines, METH_VARARGS,
   "V.SetDrawRadialGridlines(int)\nC++: virtual void SetDrawRadialGridlines(int draw)\n\n"},
  {"SetDrawPolarArcsGridlines", PyvtkPolarAxesRepresentation_SetDrawPolarArcsGridlines, METH_VARARGS,
   "V.SetDrawPolarArcsGridlines(int)\nC++: virtual void SetDrawPolarArcsGridlines(int draw)\n\n"},
  {"SetPolarTitleVisibility", PyvtkPolarAxesRepresentation_SetPolarTitleVisibility, METH_VARARGS,
   "V.SetPolarTitleVisibility(int)\nC++: virtual void SetPolarTitleVisibility(int visible)\n\n"},
  {"SetRadialAxisTitleLocation", PyvtkPolarAxesRepresentation_SetRadialAxisTitleLocation, METH_VARARGS,
   "V.SetRadialAxisTitleLocation(int)\nC++: virtual void SetRadialAxisTitleLocation(int location)\n\n"},
  {"SetPolarAxisTitleLocation", PyvtkPolarAxesRepresentation_SetPolarAxisTitleLocation, METH_VARARGS,
   "V.SetPolarAxisTitleLocation(int)\nC++: virtual void SetPolarAxisTitleLocation(int location)\n\n"},
  {"SetPolarLabelVisibility", PyvtkPolarAxesRepresentation_SetPolarLabelVisibility, METH_VARARGS,
   "V.SetPolarLabelVisibility(int)\nC++: virtual void SetPolarLabelVisibility(int visible)\n\n"},
  {"SetArcTicksOriginToPolarAxis", PyvtkPolarAxesRepresentation_SetArcTicksOriginToPolarAxis, METH_VARARGS,
   "V.SetArcTicksOriginToPolarAxis(int)\nC++: virtual void SetArcTicksOriginToPolarAxis(int use)\n\n"},
  {"SetRadialAxesOriginToPolarAxis", PyvtkPolarAxesRepresentation_SetRadialAxesOriginToPolarAxis, METH_VARARGS,
   "V.SetRadialAxesOriginToPolarAxis(int)\nC++: virtual void SetRadialAxesOriginToPolarAxis(int use)\n\n"},
  {"SetPolarTickVisibility", PyvtkPolarAxesRepresentation_SetPolarTickVisibility, METH_VARARGS,
   "V.SetPolarTickVisibility(int)\nC++: virtual void SetPolarTickVisibility(int visible)\n\n"},
  {"SetAxisTickVisibility", PyvtkPolarAxesRepresentation_SetAxisTickVisibility, METH_VARARGS,
   "V.SetAxisTickVisibility(int)\nC++: virtual void SetAxisTickVisibility(int visible)\n\n"},
  {"SetAxisMinorTickVisibility", PyvtkPolarAxesRepresentation_SetAxisMinorTickVisibility, METH_VARARGS,
   "V.SetAxisMinorTickVisibility(int)\nC++: virtual void SetAxisMinorTickVisibility(int visible)\n\n"},
  {"SetArcTickVisibility", PyvtkPolarAxesRepresentation_SetArcTickVisibility, METH_VARARGS,
   "V.SetArcTickVisibility(int)\nC++: virtual void SetArcTickVisibility(int visible)\n\n"},
  {"SetArcMinorTickVisibility", PyvtkPolarAxesRepresentation_SetArcMinorTickVisibility, METH_VARARGS,
   "V.SetArcMinorTickVisibility(int)\nC++: virtual void SetArcMinorTickVisibility(int visible)\n\n"},
  {"SetArcMajorTickSize", PyvtkPolarAxesRepresentation_SetArcMajorTickSize, METH_VARARGS,
   "V.SetArcMajorTickSize(float)\nC++: virtual void SetArcMajorTickSize(double size)\n\n"},
  {"SetPolarAxisMajorTickSize", PyvtkPolarAxesRepresentation_SetPolarAxisMajorTickSize, METH_VARARGS,
   "V.SetPolarAxisMajorTickSize(float)\nC++: virtual void SetPolarAxisMajorTickSize(double size)\n\n"},
  {"SetLastRadialAxisMajorTickSize", PyvtkPolarAxesRepresentation_SetLastRadialAxisMajorTickSize, METH_VARARGS,
   "V.SetLastRadialAxisMajorTickSize(float)\nC++: virtual void SetLastRadialAxisMajorTickSize(double size)\n\n"},
  {"SetPolarAxisTickRatioSize", PyvtkPolarAxesRepresentation_SetPolarAxisTickRatioSize, METH_VARARGS,
   "V.SetPolarAxisTickRatioSize(float)\nC++: virtual void SetPolarAxisTickRatioSize(double size)\n\n"},
  {"SetLastAxisTickRatioSize", PyvtkPolarAxesRepresentation_SetLastAxisTickRatioSize, METH_VARARGS,
   "V.SetLastAxisTickRatioSize(float)\nC++: virtual void SetLastAxisTickRatioSize(double size)\n\n"},
  {"SetArcTickRatioSize", PyvtkPolarAxesRepresentation_SetArcTickRatioSize, METH_VARARGS,
   "V.SetArcTickRatioSize(float)\nC++: virtual void SetArcTickRatioSize(double size)\n\n"},
  {"SetPolarAxisMajorTickThickness", PyvtkPolarAxesRepresentation_SetPolarAxisMajorTickThickness, METH_VARARGS,
   "V.SetPolarAxisMajorTickThickness(float)\nC++: virtual void SetPolarAxisMajorTickThickness(double thickness)\n\n"},
  {"SetLastRadialAxisMajorTickThickness", PyvtkPolarAxesRepresentation_SetLastRadialAxisMajorTickThickness, METH_VARARGS,
   "V.SetLastRadialAxisMajorTickThickness(float)\nC++: virtual void SetLastRadialAxisMajorTickThickness(\n    double thickness)\n\n"},
  {"SetArcMajorTickThickness", PyvtkPolarAxesRepresentation_SetArcMajorTickThickness, METH_VARARGS,
   "V.SetArcMajorTickThickness(float)\nC++: virtual void SetArcMajorTickThickness(double thickness)\n\n"},
  {"SetPolarAxisTickRatioThickness", PyvtkPolarAxesRepresentation_SetPolarAxisTickRatioThickness, METH_VARARGS,
   "V.SetPolarAxisTickRatioThickness(float)\nC++: virtual void SetPolarAxisTickRatioThickness(double thickness)\n\n"},
  {"SetLastAxisTickRatioThickness", PyvtkPolarAxesRepresentation_SetLastAxisTickRatioThickness, METH_VARARGS,
   "V.SetLastAxisTickRatioThickness(float)\nC++: virtual void SetLastAxisTickRatioThickness(double thickness)\n\n"},
  {"SetArcTickRatioThickness", PyvtkPolarAxesRepresentation_SetArcTickRatioThickness, METH_VARARGS,
   "V.SetArcTickRatioThickness(float)\nC++: virtual void SetArcTickRatioThickness(double thickness)\n\n"},
  {"SetDeltaAngleMajor", PyvtkPolarAxesRepresentation_SetDeltaAngleMajor, METH_VARARGS,
   "V.SetDeltaAngleMajor(float)\nC++: virtual void SetDeltaAngleMajor(double delta)\n\n"},
  {"SetDeltaAngleMinor", PyvtkPolarAxesRepresentation_SetDeltaAngleMinor, METH_VARARGS,
   "V.SetDeltaAngleMinor(float)\nC++: virtual void SetDeltaAngleMinor(double delta)\n\n"},
  {"SetRadialAxesVisibility", PyvtkPolarAxesRepresentation_SetRadialAxesVisibility, METH_VARARGS,
   "V.SetRadialAxesVisibility(int)\nC++: virtual void SetRadialAxesVisibility(int visible)\n\n"},
  {"SetRadialTitleVisibility", PyvtkPolarAxesRepresentation_SetRadialTitleVisibility, METH_VARARGS,
   "V.SetRadialTitleVisibility(int)\nC++: virtual void SetRadialTitleVisibility(int visible)\n\n"},
  {"SetPolarArcsVisibility", PyvtkPolarAxesRepresentation_SetPolarArcsVisibility, METH_VARARGS,
   "V.SetPolarArcsVisibility(int)\nC++: virtual void SetPolarArcsVisibility(int visible)\n\n"},
  {"SetUse2DMode", PyvtkPolarAxesRepresentation_SetUse2DMode, METH_VARARGS,
   "V.SetUse2DMode(int)\nC++: virtual void SetUse2DMode(int use)\n\n"},
  {"SetRatio", PyvtkPolarAxesRepresentation_SetRatio, METH_VARARGS,
   "V.SetRatio(float)\nC++: virtual void SetRatio(double ratio)\n\n"},
  {"GetDeltaRangeMinor", PyvtkPolarAxesRepresentation_GetDeltaRangeMinor, METH_VARARGS,
   "V.GetDeltaRangeMinor() -> float\nC++: virtual double GetDeltaRangeMinor()\n\n"},
  {"GetDeltaRangeMajor", PyvtkPolarAxesRepresentation_GetDeltaRangeMajor, METH_VARARGS,
   "V.GetDeltaRangeMajor() -> float\nC++: virtual double GetDeltaRangeMajor()\n\n"},
  {"SetRendererType", PyvtkPolarAxesRepresentation_SetRendererType, METH_VARARGS,
   "V.SetRendererType(int)\nC++: virtual void SetRendererType(int _arg)\n\nSet the renderer to use. Default is to use the\nvtkPVRenderView::DEFAULT_RENDERER.\n"},
  {"GetRendererType", PyvtkPolarAxesRepresentation_GetRendererType, METH_VARARGS,
   "V.GetRendererType() -> int\nC++: virtual int GetRendererType()\n\nSet the renderer to use. Default is to use the\nvtkPVRenderView::DEFAULT_RENDERER.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolarAxesRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPolarAxesRepresentation", // tp_name
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
  PyvtkPolarAxesRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolarAxesRepresentation_StaticNew()
{
  return vtkPolarAxesRepresentation::New();
}

PyObject *PyvtkPolarAxesRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolarAxesRepresentation_Type, PyvtkPolarAxesRepresentation_Methods,
    "vtkPolarAxesRepresentation",
 &PyvtkPolarAxesRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPolarAxesRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolarAxesRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolarAxesRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolarAxesRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

