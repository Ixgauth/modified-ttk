// python wrapper for vtkResliceCursor
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
#include "vtkResliceCursor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceCursor_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkResliceCursor_Doc =
  "vtkResliceCursor - Geometry for a reslice cursor\n\n"
  "Superclass: vtkObject\n\n"
  "This class represents a reslice cursor. It consists of two cross\n"
  "sectional hairs, with an optional thickness. The crosshairs hairs may\n"
  "have a hole in the center. These may be translated or rotated\n"
  "independent of each other in the view. The result is used to reslice\n"
  "the data along these cross sections. This allows the user to perform\n"
  "multi-planar thin or thick reformat of the data on an image view,\n"
  "rather than a 3D view.\n"
  "@sa\n"
  "vtkResliceCursorWidget vtkResliceCursor\n"
  "vtkResliceCursorPolyDataAlgorithm vtkResliceCursorRepresentation\n"
  "vtkResliceCursorThickLineRepresentation vtkResliceCursorActor\n"
  "vtkImagePlaneWidget\n\n";


static PyObject *
PyvtkResliceCursor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursor *tempr = vtkResliceCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursor::NewInstance());

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
PyvtkResliceCursor_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetImage(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkResliceCursor::GetImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetCenter(temp0);
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
PyvtkResliceCursor_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetCenter_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkResliceCursor_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkResliceCursor::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetThickness_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetThickness(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetThickness(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetThickness_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetThickness(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetThickness_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetThickness_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetThickness");
  return nullptr;
}



static PyObject *
PyvtkResliceCursor_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkResliceCursor::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickMode(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetThickMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickMode() :
      op->vtkResliceCursor::GetThickMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_ThickModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThickModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThickModeOn();
    }
    else
    {
      op->vtkResliceCursor::ThickModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_ThickModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThickModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThickModeOff();
    }
    else
    {
      op->vtkResliceCursor::ThickModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyData() :
      op->vtkResliceCursor::GetPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetCenterlineAxisPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxisPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxisPolyData(temp0) :
      op->vtkResliceCursor::GetCenterlineAxisPolyData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane(temp0) :
      op->vtkResliceCursor::GetPlane(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkResliceCursor::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXAxis() :
      op->vtkResliceCursor::GetXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkResliceCursor::GetYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZAxis() :
      op->vtkResliceCursor::GetZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetXAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetXAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetXAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxis(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetXAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetXAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetXAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxis");
  return nullptr;
}



static PyObject *
PyvtkResliceCursor_SetYAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetYAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetYAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxis(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetYAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetYAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetYAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxis");
  return nullptr;
}



static PyObject *
PyvtkResliceCursor_SetZAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

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
      op->SetZAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursor::SetZAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZAxis(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursor_SetZAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResliceCursor_SetZAxis_s1(self, args);
    case 1:
      return PyvtkResliceCursor_SetZAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxis");
  return nullptr;
}



static PyObject *
PyvtkResliceCursor_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkResliceCursor::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHole(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetHole(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHole() :
      op->vtkResliceCursor::GetHole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHoleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleWidth(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetHoleWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHoleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleWidth() :
      op->vtkResliceCursor::GetHoleWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_SetHoleWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleWidthInPixels(temp0);
    }
    else
    {
      op->vtkResliceCursor::SetHoleWidthInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetHoleWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleWidthInPixels() :
      op->vtkResliceCursor::GetHoleWidthInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursor_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursor *op = static_cast<vtkResliceCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkResliceCursor::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursor_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResliceCursor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResliceCursor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResliceCursor\nC++: static vtkResliceCursor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResliceCursor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceCursor\nC++: vtkResliceCursor *NewInstance()\n\n"},
  {"SetImage", PyvtkResliceCursor_SetImage, METH_VARARGS,
   "V.SetImage(vtkImageData)\nC++: virtual void SetImage(vtkImageData *)\n\nSet the image (3D) that we are slicing\n"},
  {"GetImage", PyvtkResliceCursor_GetImage, METH_VARARGS,
   "V.GetImage() -> vtkImageData\nC++: virtual vtkImageData *GetImage()\n\nSet the image (3D) that we are slicing\n"},
  {"SetCenter", PyvtkResliceCursor_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: virtual void SetCenter(double, double, double)\nV.SetCenter([float, float, float])\nC++: virtual void SetCenter(double center[3])\n\nSet/Get the cente of the reslice cursor.\n"},
  {"GetCenter", PyvtkResliceCursor_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {"SetThickness", PyvtkResliceCursor_SetThickness, METH_VARARGS,
   "V.SetThickness(float, float, float)\nC++: void SetThickness(double, double, double)\nV.SetThickness((float, float, float))\nC++: void SetThickness(double a[3])\n\n"},
  {"GetThickness", PyvtkResliceCursor_GetThickness, METH_VARARGS,
   "V.GetThickness() -> (float, float, float)\nC++: double *GetThickness()\n\n"},
  {"SetThickMode", PyvtkResliceCursor_SetThickMode, METH_VARARGS,
   "V.SetThickMode(int)\nC++: virtual void SetThickMode(vtkTypeBool _arg)\n\nEnable disable thick mode. Default is to enable it.\n"},
  {"GetThickMode", PyvtkResliceCursor_GetThickMode, METH_VARARGS,
   "V.GetThickMode() -> int\nC++: virtual vtkTypeBool GetThickMode()\n\nEnable disable thick mode. Default is to enable it.\n"},
  {"ThickModeOn", PyvtkResliceCursor_ThickModeOn, METH_VARARGS,
   "V.ThickModeOn()\nC++: virtual void ThickModeOn()\n\nEnable disable thick mode. Default is to enable it.\n"},
  {"ThickModeOff", PyvtkResliceCursor_ThickModeOff, METH_VARARGS,
   "V.ThickModeOff()\nC++: virtual void ThickModeOff()\n\nEnable disable thick mode. Default is to enable it.\n"},
  {"GetPolyData", PyvtkResliceCursor_GetPolyData, METH_VARARGS,
   "V.GetPolyData() -> vtkPolyData\nC++: virtual vtkPolyData *GetPolyData()\n\nGet the 3D PolyData representation\n"},
  {"GetCenterlineAxisPolyData", PyvtkResliceCursor_GetCenterlineAxisPolyData, METH_VARARGS,
   "V.GetCenterlineAxisPolyData(int) -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxisPolyData(int axis)\n\nGet the slab and centerline polydata along an axis\n"},
  {"GetPlane", PyvtkResliceCursor_GetPlane, METH_VARARGS,
   "V.GetPlane(int) -> vtkPlane\nC++: virtual vtkPlane *GetPlane(int n)\n\nGet the planes that represent normals along the X, Y and Z. The\nargument passed to this method must be an integer in the range\n0-2 (corresponding to the X, Y and Z axes.\n"},
  {"Update", PyvtkResliceCursor_Update, METH_VARARGS,
   "V.Update()\nC++: virtual void Update()\n\nBuild the polydata\n"},
  {"GetXAxis", PyvtkResliceCursor_GetXAxis, METH_VARARGS,
   "V.GetXAxis() -> (float, float, float)\nC++: double *GetXAxis()\n\n"},
  {"GetYAxis", PyvtkResliceCursor_GetYAxis, METH_VARARGS,
   "V.GetYAxis() -> (float, float, float)\nC++: double *GetYAxis()\n\n"},
  {"GetZAxis", PyvtkResliceCursor_GetZAxis, METH_VARARGS,
   "V.GetZAxis() -> (float, float, float)\nC++: double *GetZAxis()\n\n"},
  {"SetXAxis", PyvtkResliceCursor_SetXAxis, METH_VARARGS,
   "V.SetXAxis(float, float, float)\nC++: void SetXAxis(double, double, double)\nV.SetXAxis((float, float, float))\nC++: void SetXAxis(double a[3])\n\n"},
  {"SetYAxis", PyvtkResliceCursor_SetYAxis, METH_VARARGS,
   "V.SetYAxis(float, float, float)\nC++: void SetYAxis(double, double, double)\nV.SetYAxis((float, float, float))\nC++: void SetYAxis(double a[3])\n\n"},
  {"SetZAxis", PyvtkResliceCursor_SetZAxis, METH_VARARGS,
   "V.SetZAxis(float, float, float)\nC++: void SetZAxis(double, double, double)\nV.SetZAxis((float, float, float))\nC++: void SetZAxis(double a[3])\n\n"},
  {"GetAxis", PyvtkResliceCursor_GetAxis, METH_VARARGS,
   "V.GetAxis(int) -> (float, ...)\nC++: virtual double *GetAxis(int i)\n\nGet the computed axes directions\n"},
  {"SetHole", PyvtkResliceCursor_SetHole, METH_VARARGS,
   "V.SetHole(int)\nC++: virtual void SetHole(int _arg)\n\nShow a hole in the center of the cursor, so its easy to see the\npixels within the hole. ON by default\n"},
  {"GetHole", PyvtkResliceCursor_GetHole, METH_VARARGS,
   "V.GetHole() -> int\nC++: virtual int GetHole()\n\nShow a hole in the center of the cursor, so its easy to see the\npixels within the hole. ON by default\n"},
  {"SetHoleWidth", PyvtkResliceCursor_SetHoleWidth, METH_VARARGS,
   "V.SetHoleWidth(float)\nC++: virtual void SetHoleWidth(double _arg)\n\nSet the width of the hole in mm\n"},
  {"GetHoleWidth", PyvtkResliceCursor_GetHoleWidth, METH_VARARGS,
   "V.GetHoleWidth() -> float\nC++: virtual double GetHoleWidth()\n\nSet the width of the hole in mm\n"},
  {"SetHoleWidthInPixels", PyvtkResliceCursor_SetHoleWidthInPixels, METH_VARARGS,
   "V.SetHoleWidthInPixels(float)\nC++: virtual void SetHoleWidthInPixels(double _arg)\n\nSet the width of the hole in pixels. If set, this will override\nthe hole with in mm.\n"},
  {"GetHoleWidthInPixels", PyvtkResliceCursor_GetHoleWidthInPixels, METH_VARARGS,
   "V.GetHoleWidthInPixels() -> float\nC++: virtual double GetHoleWidthInPixels()\n\nSet the width of the hole in pixels. If set, this will override\nthe hole with in mm.\n"},
  {"GetMTime", PyvtkResliceCursor_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime. Check the MTime of the internal planes as well.\n"},
  {"Reset", PyvtkResliceCursor_Reset, METH_VARARGS,
   "V.Reset()\nC++: virtual void Reset()\n\nReset the cursor to the default position, ie with the axes,\nnormal to each other and axis aligned and with the cursor pointed\nat the center of the image.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkResliceCursor", // tp_name
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
  PyvtkResliceCursor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursor_StaticNew()
{
  return vtkResliceCursor::New();
}

PyObject *PyvtkResliceCursor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceCursor_Type, PyvtkResliceCursor_Methods,
    "vtkResliceCursor",
 &PyvtkResliceCursor_StaticNew);

  PyTypeObject *pytype = &PyvtkResliceCursor_Type;

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

void PyVTKAddFile_vtkResliceCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

