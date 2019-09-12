// python wrapper for vtkSuperquadricSource
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
#include "vtkSuperquadricSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSuperquadricSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSuperquadricSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSuperquadricSource_Doc =
  "vtkSuperquadricSource - create a polygonal superquadric centered at\nthe origin\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSuperquadricSource creates a superquadric (represented by\n"
  "polygons) of specified size centered at the origin. The alignment of\n"
  "the axis of the superquadric along one of the global axes can be\n"
  "specified. The resolution (polygonal discretization) in both the\n"
  "latitude (phi) and longitude (theta) directions can be specified.\n"
  "Roundness parameters (PhiRoundness and ThetaRoundness) control the\n"
  "shape of the superquadric.  The Toroidal boolean controls whether a\n"
  "toroidal superquadric is produced.  If so, the Thickness parameter\n"
  "controls the thickness of the toroid:  0 is the thinnest allowable\n"
  "toroid, and 1 has a minimum sized hole.  The Scale parameters allow\n"
  "the superquadric to be scaled in x, y, and z (normal vectors are\n"
  "correctly generated in any case).  The Size parameter controls size\n"
  "of the superquadric.\n\n"
  "This code is based on \"Rigid physically based superquadrics\", A. H.\n"
  "Barr, in \"Graphics Gems III\", David Kirk, ed., Academic Press, 1992.\n\n"
  "@warning\n"
  "Resolution means the number of latitude or longitude lines for a\n"
  "complete superquadric. The resolution parameters are rounded to the\n"
  "nearest 4 in phi and 8 in theta.\n\n"
  "@warning\n"
  "Texture coordinates are not equally distributed around all\n"
  "superquadrics.\n\n"
  "@warning\n"
  "The Size and Thickness parameters control coefficients of\n"
  "superquadric generation, and may do not exactly describe the size of\n"
  "the superquadric.\n\n";


static PyObject *
PyvtkSuperquadricSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSuperquadricSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSuperquadricSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSuperquadricSource *tempr = vtkSuperquadricSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSuperquadricSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSuperquadricSource::NewInstance());

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
PyvtkSuperquadricSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSuperquadricSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkSuperquadricSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkSuperquadricSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSuperquadricSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSuperquadricSource_SetScale_s1(self, args);
    case 1:
      return PyvtkSuperquadricSource_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}



static PyObject *
PyvtkSuperquadricSource_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkSuperquadricSource::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSuperquadricSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaResolution(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSuperquadricSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiResolution(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkSuperquadricSource::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThicknessMinValue() :
      op->vtkSuperquadricSource::GetThicknessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThicknessMaxValue() :
      op->vtkSuperquadricSource::GetThicknessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhiRoundness() :
      op->vtkSuperquadricSource::GetPhiRoundness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiRoundness(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetPhiRoundness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThetaRoundness() :
      op->vtkSuperquadricSource::GetThetaRoundness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaRoundness(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetThetaRoundness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkSuperquadricSource::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisOfSymmetry(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetAxisOfSymmetry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisOfSymmetry() :
      op->vtkSuperquadricSource::GetAxisOfSymmetry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetXAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisOfSymmetry();
    }
    else
    {
      op->vtkSuperquadricSource::SetXAxisOfSymmetry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetYAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisOfSymmetry();
    }
    else
    {
      op->vtkSuperquadricSource::SetYAxisOfSymmetry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetZAxisOfSymmetry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisOfSymmetry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisOfSymmetry();
    }
    else
    {
      op->vtkSuperquadricSource::SetZAxisOfSymmetry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_ToroidalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToroidalOn();
    }
    else
    {
      op->vtkSuperquadricSource::ToroidalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_ToroidalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToroidalOff();
    }
    else
    {
      op->vtkSuperquadricSource::ToroidalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToroidal() :
      op->vtkSuperquadricSource::GetToroidal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToroidal(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetToroidal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkSuperquadricSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSuperquadricSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSuperquadricSource_Methods[] = {
  {"IsTypeOf", PyvtkSuperquadricSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSuperquadricSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSuperquadricSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSuperquadricSource\nC++: static vtkSuperquadricSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSuperquadricSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSuperquadricSource\nC++: vtkSuperquadricSource *NewInstance()\n\n"},
  {"SetCenter", PyvtkSuperquadricSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkSuperquadricSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the superquadric. Default is 0,0,0.\n"},
  {"SetScale", PyvtkSuperquadricSource_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {"GetScale", PyvtkSuperquadricSource_GetScale, METH_VARARGS,
   "V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet the scale factors of the superquadric. Default is 1,1,1.\n"},
  {"GetThetaResolution", PyvtkSuperquadricSource_GetThetaResolution, METH_VARARGS,
   "V.GetThetaResolution() -> int\nC++: virtual int GetThetaResolution()\n\nSet the number of points in the longitude direction. Initial\nvalue is 16.\n"},
  {"SetThetaResolution", PyvtkSuperquadricSource_SetThetaResolution, METH_VARARGS,
   "V.SetThetaResolution(int)\nC++: void SetThetaResolution(int i)\n\nSet the number of points in the longitude direction. Initial\nvalue is 16.\n"},
  {"GetPhiResolution", PyvtkSuperquadricSource_GetPhiResolution, METH_VARARGS,
   "V.GetPhiResolution() -> int\nC++: virtual int GetPhiResolution()\n\nSet the number of points in the latitude direction. Initial value\nis 16.\n"},
  {"SetPhiResolution", PyvtkSuperquadricSource_SetPhiResolution, METH_VARARGS,
   "V.SetPhiResolution(int)\nC++: void SetPhiResolution(int i)\n\nSet the number of points in the latitude direction. Initial value\nis 16.\n"},
  {"GetThickness", PyvtkSuperquadricSource_GetThickness, METH_VARARGS,
   "V.GetThickness() -> float\nC++: virtual double GetThickness()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {"SetThickness", PyvtkSuperquadricSource_SetThickness, METH_VARARGS,
   "V.SetThickness(float)\nC++: virtual void SetThickness(double _arg)\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {"GetThicknessMinValue", PyvtkSuperquadricSource_GetThicknessMinValue, METH_VARARGS,
   "V.GetThicknessMinValue() -> float\nC++: virtual double GetThicknessMinValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {"GetThicknessMaxValue", PyvtkSuperquadricSource_GetThicknessMaxValue, METH_VARARGS,
   "V.GetThicknessMaxValue() -> float\nC++: virtual double GetThicknessMaxValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {"GetPhiRoundness", PyvtkSuperquadricSource_GetPhiRoundness, METH_VARARGS,
   "V.GetPhiRoundness() -> float\nC++: virtual double GetPhiRoundness()\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {"SetPhiRoundness", PyvtkSuperquadricSource_SetPhiRoundness, METH_VARARGS,
   "V.SetPhiRoundness(float)\nC++: void SetPhiRoundness(double e)\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {"GetThetaRoundness", PyvtkSuperquadricSource_GetThetaRoundness, METH_VARARGS,
   "V.GetThetaRoundness() -> float\nC++: virtual double GetThetaRoundness()\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {"SetThetaRoundness", PyvtkSuperquadricSource_SetThetaRoundness, METH_VARARGS,
   "V.SetThetaRoundness(float)\nC++: void SetThetaRoundness(double e)\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {"SetSize", PyvtkSuperquadricSource_SetSize, METH_VARARGS,
   "V.SetSize(float)\nC++: virtual void SetSize(double _arg)\n\nSet/Get Superquadric isotropic size. Initial value is 0.5;\n"},
  {"GetSize", PyvtkSuperquadricSource_GetSize, METH_VARARGS,
   "V.GetSize() -> float\nC++: virtual double GetSize()\n\nSet/Get Superquadric isotropic size. Initial value is 0.5;\n"},
  {"SetAxisOfSymmetry", PyvtkSuperquadricSource_SetAxisOfSymmetry, METH_VARARGS,
   "V.SetAxisOfSymmetry(int)\nC++: virtual void SetAxisOfSymmetry(int _arg)\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {"GetAxisOfSymmetry", PyvtkSuperquadricSource_GetAxisOfSymmetry, METH_VARARGS,
   "V.GetAxisOfSymmetry() -> int\nC++: virtual int GetAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {"SetXAxisOfSymmetry", PyvtkSuperquadricSource_SetXAxisOfSymmetry, METH_VARARGS,
   "V.SetXAxisOfSymmetry()\nC++: void SetXAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {"SetYAxisOfSymmetry", PyvtkSuperquadricSource_SetYAxisOfSymmetry, METH_VARARGS,
   "V.SetYAxisOfSymmetry()\nC++: void SetYAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {"SetZAxisOfSymmetry", PyvtkSuperquadricSource_SetZAxisOfSymmetry, METH_VARARGS,
   "V.SetZAxisOfSymmetry()\nC++: void SetZAxisOfSymmetry()\n\nSet/Get axis of symmetry for superquadric (x axis: 0, y axis: 1,\nz axis: 2). Initial value is 1.\n"},
  {"ToroidalOn", PyvtkSuperquadricSource_ToroidalOn, METH_VARARGS,
   "V.ToroidalOn()\nC++: virtual void ToroidalOn()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {"ToroidalOff", PyvtkSuperquadricSource_ToroidalOff, METH_VARARGS,
   "V.ToroidalOff()\nC++: virtual void ToroidalOff()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {"GetToroidal", PyvtkSuperquadricSource_GetToroidal, METH_VARARGS,
   "V.GetToroidal() -> int\nC++: virtual vtkTypeBool GetToroidal()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {"SetToroidal", PyvtkSuperquadricSource_SetToroidal, METH_VARARGS,
   "V.SetToroidal(int)\nC++: virtual void SetToroidal(vtkTypeBool _arg)\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {"SetOutputPointsPrecision", PyvtkSuperquadricSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkSuperquadricSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSuperquadricSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkSuperquadricSource", // tp_name
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
  PyvtkSuperquadricSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSuperquadricSource_StaticNew()
{
  return vtkSuperquadricSource::New();
}

PyObject *PyvtkSuperquadricSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSuperquadricSource_Type, PyvtkSuperquadricSource_Methods,
    "vtkSuperquadricSource",
 &PyvtkSuperquadricSource_StaticNew);

  PyTypeObject *pytype = &PyvtkSuperquadricSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSuperquadricSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSuperquadricSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSuperquadricSource", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(1024);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_SUPERQUADRIC_RESOLUTION", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; double value; }
      constants[2] = {
        { "VTK_MIN_SUPERQUADRIC_THICKNESS", 1e-4 },
        { "VTK_MIN_SUPERQUADRIC_ROUNDNESS", 1e-24 },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

