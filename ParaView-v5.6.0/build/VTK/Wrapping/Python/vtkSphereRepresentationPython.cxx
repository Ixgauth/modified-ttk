// python wrapper for vtkSphereRepresentation
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
#include "vtkSphereRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSphereRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkSphereRepresentation_Doc =
  "vtkSphereRepresentation - a class defining the representation for the\nvtkSphereWidget2\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkSphereWidget2. It\n"
  "represents a sphere with an optional handle.  Through interaction\n"
  "with the widget, the sphere can be arbitrarily positioned and scaled\n"
  "in 3D space; and the handle can be moved on the surface of the\n"
  "sphere. Typically the vtkSphereWidget2/vtkSphereRepresentation are\n"
  "used to position a sphere for the purpose of extracting, cutting or\n"
  "clipping data; or the handle is moved on the sphere to position a\n"
  "light or camera.\n\n"
  "To use this representation, you normally use the PlaceWidget() method\n"
  "to position the widget at a specified region in space. It is also\n"
  "possible to set the center of the sphere, a radius, and/or a handle\n"
  "position.\n\n"
  "@warning\n"
  "Note that the representation is overconstrained in that the center\n"
  "and radius of the sphere can be defined, this information plus the\n"
  "handle direction defines the geometry of the representation.\n"
  "Alternatively, the user may specify the center of the sphere plus the\n"
  "handle position.\n\n"
  "@warning\n"
  "This class, and vtkSphereWidget2, are second generation VTK widgets.\n"
  "An earlier version of this functionality was defined in the class\n"
  "vtkSphereWidget.\n\n"
  "@sa\n"
  "vtkSphereWidget2 vtkSphereWidget\n\n";


static PyObject *
PyvtkSphereRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereRepresentation *tempr = vtkSphereRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereRepresentation::NewInstance());

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
PyvtkSphereRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkSphereRepresentation::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkSphereRepresentation::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkSphereRepresentation::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentationToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToOff();
    }
    else
    {
      op->vtkSphereRepresentation::SetRepresentationToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToWireframe();
    }
    else
    {
      op->vtkSphereRepresentation::SetRepresentationToWireframe();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToSurface();
    }
    else
    {
      op->vtkSphereRepresentation::SetRepresentationToSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->vtkSphereRepresentation::SetThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSphereRepresentation::GetThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->vtkSphereRepresentation::SetPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSphereRepresentation::GetPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->vtkSphereRepresentation::SetCenter(temp0);
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
PyvtkSphereRepresentation_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->vtkSphereRepresentation::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSphereRepresentation_SetCenter_s1(self, args);
    case 3:
      return PyvtkSphereRepresentation_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkSphereRepresentation_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSphereRepresentation::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::GetCenter(temp0);
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
PyvtkSphereRepresentation_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSphereRepresentation_GetCenter_s1(self, args);
    case 1:
      return PyvtkSphereRepresentation_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}



static PyObject *
PyvtkSphereRepresentation_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSphereRepresentation::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleVisibility(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkSphereRepresentation::GetHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOn();
    }
    else
    {
      op->vtkSphereRepresentation::HandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOff();
    }
    else
    {
      op->vtkSphereRepresentation::HandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandlePosition(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetHandlePosition(temp0);
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
PyvtkSphereRepresentation_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandlePosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereRepresentation::SetHandlePosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSphereRepresentation_SetHandlePosition_s1(self, args);
    case 3:
      return PyvtkSphereRepresentation_SetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return nullptr;
}



static PyObject *
PyvtkSphereRepresentation_GetHandlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition() :
      op->vtkSphereRepresentation::GetHandlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandleDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandleDirection(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetHandleDirection(temp0);
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
PyvtkSphereRepresentation_SetHandleDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->SetHandleDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereRepresentation::SetHandleDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereRepresentation_SetHandleDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSphereRepresentation_SetHandleDirection_s1(self, args);
    case 3:
      return PyvtkSphereRepresentation_SetHandleDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleDirection");
  return nullptr;
}



static PyObject *
PyvtkSphereRepresentation_GetHandleDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandleDirection() :
      op->vtkSphereRepresentation::GetHandleDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetHandleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleText(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetHandleText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleText() :
      op->vtkSphereRepresentation::GetHandleText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleTextOn();
    }
    else
    {
      op->vtkSphereRepresentation::HandleTextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HandleTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleTextOff();
    }
    else
    {
      op->vtkSphereRepresentation::HandleTextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetRadialLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialLine(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetRadialLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRadialLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialLine() :
      op->vtkSphereRepresentation::GetRadialLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RadialLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialLineOn();
    }
    else
    {
      op->vtkSphereRepresentation::RadialLineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RadialLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialLineOff();
    }
    else
    {
      op->vtkSphereRepresentation::RadialLineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetCenterCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterCursor(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetCenterCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetCenterCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterCursor() :
      op->vtkSphereRepresentation::GetCenterCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_CenterCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterCursorOn();
    }
    else
    {
      op->vtkSphereRepresentation::CenterCursorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_CenterCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterCursorOff();
    }
    else
    {
      op->vtkSphereRepresentation::CenterCursorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkSphere *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphere"))
  {
    if (ap.IsBound())
    {
      op->GetSphere(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::GetSphere(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSphereProperty() :
      op->vtkSphereRepresentation::GetSphereProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSelectedSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedSphereProperty() :
      op->vtkSphereRepresentation::GetSelectedSphereProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkSphereRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkSphereRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetHandleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetHandleTextProperty() :
      op->vtkSphereRepresentation::GetHandleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_GetRadialLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetRadialLineProperty() :
      op->vtkSphereRepresentation::GetRadialLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::PlaceWidget(temp0);
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
PyvtkSphereRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0, temp1);
    }
    else
    {
      op->vtkSphereRepresentation::PlaceWidget(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkSphereRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSphereRepresentation_PlaceWidget_s1(self, args);
    case 2:
      return PyvtkSphereRepresentation_PlaceWidget_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkSphereRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkSphereRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkSphereRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::StartWidgetInteraction(temp0);
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
PyvtkSphereRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkSphereRepresentation::WidgetInteraction(temp0);
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
PyvtkSphereRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSphereRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

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
      op->vtkSphereRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkSphereRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkSphereRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkSphereRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkSphereRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereRepresentation *op = static_cast<vtkSphereRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkSphereRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSphereRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {"IsA", PyvtkSphereRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {"SafeDownCast", PyvtkSphereRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSphereRepresentation\nC++: static vtkSphereRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {"NewInstance", PyvtkSphereRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSphereRepresentation\nC++: vtkSphereRepresentation *NewInstance()\n\nStandard methods for type information and to print out the\ncontents of the class.\n"},
  {"SetRepresentation", PyvtkSphereRepresentation_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(int)\nC++: virtual void SetRepresentation(int _arg)\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"GetRepresentationMinValue", PyvtkSphereRepresentation_GetRepresentationMinValue, METH_VARARGS,
   "V.GetRepresentationMinValue() -> int\nC++: virtual int GetRepresentationMinValue()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"GetRepresentationMaxValue", PyvtkSphereRepresentation_GetRepresentationMaxValue, METH_VARARGS,
   "V.GetRepresentationMaxValue() -> int\nC++: virtual int GetRepresentationMaxValue()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"GetRepresentation", PyvtkSphereRepresentation_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> int\nC++: virtual int GetRepresentation()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"SetRepresentationToOff", PyvtkSphereRepresentation_SetRepresentationToOff, METH_VARARGS,
   "V.SetRepresentationToOff()\nC++: void SetRepresentationToOff()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"SetRepresentationToWireframe", PyvtkSphereRepresentation_SetRepresentationToWireframe, METH_VARARGS,
   "V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"SetRepresentationToSurface", PyvtkSphereRepresentation_SetRepresentationToSurface, METH_VARARGS,
   "V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nSet the representation (i.e., appearance) of the sphere.\nDifferent representations are useful depending on the\napplication.\n"},
  {"SetThetaResolution", PyvtkSphereRepresentation_SetThetaResolution, METH_VARARGS,
   "V.SetThetaResolution(int)\nC++: void SetThetaResolution(int r)\n\nSet/Get the resolution of the sphere in the theta direction.\n"},
  {"GetThetaResolution", PyvtkSphereRepresentation_GetThetaResolution, METH_VARARGS,
   "V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\n"},
  {"SetPhiResolution", PyvtkSphereRepresentation_SetPhiResolution, METH_VARARGS,
   "V.SetPhiResolution(int)\nC++: void SetPhiResolution(int r)\n\nSet/Get the resolution of the sphere in the phi direction.\n"},
  {"GetPhiResolution", PyvtkSphereRepresentation_GetPhiResolution, METH_VARARGS,
   "V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\n"},
  {"SetCenter", PyvtkSphereRepresentation_SetCenter, METH_VARARGS,
   "V.SetCenter([float, float, float])\nC++: void SetCenter(double c[3])\nV.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z)\n\nSet/Get the center position of the sphere. Note that this may\nadjust the direction from the handle to the center, as well as\nthe radius of the sphere.\n"},
  {"GetCenter", PyvtkSphereRepresentation_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\n"},
  {"SetRadius", PyvtkSphereRepresentation_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: void SetRadius(double r)\n\nSet/Get the radius of sphere. Default is 0.5. Note that this may\nmodify the position of the handle based on the handle direction.\n"},
  {"GetRadius", PyvtkSphereRepresentation_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: double GetRadius()\n\n"},
  {"SetHandleVisibility", PyvtkSphereRepresentation_SetHandleVisibility, METH_VARARGS,
   "V.SetHandleVisibility(int)\nC++: virtual void SetHandleVisibility(vtkTypeBool _arg)\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {"GetHandleVisibility", PyvtkSphereRepresentation_GetHandleVisibility, METH_VARARGS,
   "V.GetHandleVisibility() -> int\nC++: virtual vtkTypeBool GetHandleVisibility()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {"HandleVisibilityOn", PyvtkSphereRepresentation_HandleVisibilityOn, METH_VARARGS,
   "V.HandleVisibilityOn()\nC++: virtual void HandleVisibilityOn()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {"HandleVisibilityOff", PyvtkSphereRepresentation_HandleVisibilityOff, METH_VARARGS,
   "V.HandleVisibilityOff()\nC++: virtual void HandleVisibilityOff()\n\nThe handle sits on the surface of the sphere and may be moved\naround the surface by picking (left mouse) and then moving. The\nposition of the handle can be retrieved, this is useful for\npositioning cameras and lights. By default, the handle is turned\noff.\n"},
  {"SetHandlePosition", PyvtkSphereRepresentation_SetHandlePosition, METH_VARARGS,
   "V.SetHandlePosition([float, float, float])\nC++: void SetHandlePosition(double handle[3])\nV.SetHandlePosition(float, float, float)\nC++: void SetHandlePosition(double x, double y, double z)\n\nSet/Get the position of the handle. Note that this may adjust the\nradius of the sphere and the handle direction.\n"},
  {"GetHandlePosition", PyvtkSphereRepresentation_GetHandlePosition, METH_VARARGS,
   "V.GetHandlePosition() -> (float, float, float)\nC++: double *GetHandlePosition()\n\n"},
  {"SetHandleDirection", PyvtkSphereRepresentation_SetHandleDirection, METH_VARARGS,
   "V.SetHandleDirection([float, float, float])\nC++: void SetHandleDirection(double dir[3])\nV.SetHandleDirection(float, float, float)\nC++: void SetHandleDirection(double dx, double dy, double dz)\n\nSet/Get the direction vector of the handle relative to the center\nof the sphere. Setting the direction may affect the position of\nthe handle but will not affect the radius or position of the\nsphere.\n"},
  {"GetHandleDirection", PyvtkSphereRepresentation_GetHandleDirection, METH_VARARGS,
   "V.GetHandleDirection() -> (float, float, float)\nC++: double *GetHandleDirection()\n\n"},
  {"SetHandleText", PyvtkSphereRepresentation_SetHandleText, METH_VARARGS,
   "V.SetHandleText(int)\nC++: virtual void SetHandleText(vtkTypeBool _arg)\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {"GetHandleText", PyvtkSphereRepresentation_GetHandleText, METH_VARARGS,
   "V.GetHandleText() -> int\nC++: virtual vtkTypeBool GetHandleText()\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {"HandleTextOn", PyvtkSphereRepresentation_HandleTextOn, METH_VARARGS,
   "V.HandleTextOn()\nC++: virtual void HandleTextOn()\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {"HandleTextOff", PyvtkSphereRepresentation_HandleTextOff, METH_VARARGS,
   "V.HandleTextOff()\nC++: virtual void HandleTextOff()\n\nEnable/disable a label that displays the location of the handle\nin spherical coordinates (radius,theta,phi). The two angles,\ntheta and phi, are displayed in degrees. Note that phi is\nmeasured from the north pole down towards the equator; and theta\nis the angle around the north/south axis.\n"},
  {"SetRadialLine", PyvtkSphereRepresentation_SetRadialLine, METH_VARARGS,
   "V.SetRadialLine(int)\nC++: virtual void SetRadialLine(vtkTypeBool _arg)\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {"GetRadialLine", PyvtkSphereRepresentation_GetRadialLine, METH_VARARGS,
   "V.GetRadialLine() -> int\nC++: virtual vtkTypeBool GetRadialLine()\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {"RadialLineOn", PyvtkSphereRepresentation_RadialLineOn, METH_VARARGS,
   "V.RadialLineOn()\nC++: virtual void RadialLineOn()\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {"RadialLineOff", PyvtkSphereRepresentation_RadialLineOff, METH_VARARGS,
   "V.RadialLineOff()\nC++: virtual void RadialLineOff()\n\nEnable/disable a radial line segment that joins the center of the\nouter sphere and the handle.\n"},
  {"SetCenterCursor", PyvtkSphereRepresentation_SetCenterCursor, METH_VARARGS,
   "V.SetCenterCursor(bool)\nC++: virtual void SetCenterCursor(bool _arg)\n\nEnable/disable a center cursor Default is disabled\n"},
  {"GetCenterCursor", PyvtkSphereRepresentation_GetCenterCursor, METH_VARARGS,
   "V.GetCenterCursor() -> bool\nC++: virtual bool GetCenterCursor()\n\nEnable/disable a center cursor Default is disabled\n"},
  {"CenterCursorOn", PyvtkSphereRepresentation_CenterCursorOn, METH_VARARGS,
   "V.CenterCursorOn()\nC++: virtual void CenterCursorOn()\n\nEnable/disable a center cursor Default is disabled\n"},
  {"CenterCursorOff", PyvtkSphereRepresentation_CenterCursorOff, METH_VARARGS,
   "V.CenterCursorOff()\nC++: virtual void CenterCursorOff()\n\nEnable/disable a center cursor Default is disabled\n"},
  {"GetPolyData", PyvtkSphereRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the sphere. \nThe polydata consists of n+1 points, where n is the resolution of\nthe sphere. These point values are guaranteed to be up-to-date\nwhen either the InteractionEvent or EndInteraction events are\ninvoked. The user provides the vtkPolyData and the points and\npolysphere are added to it.\n"},
  {"GetSphere", PyvtkSphereRepresentation_GetSphere, METH_VARARGS,
   "V.GetSphere(vtkSphere)\nC++: void GetSphere(vtkSphere *sphere)\n\nGet the spherical implicit function defined by this widget.  Note\nthat vtkSphere is a subclass of vtkImplicitFunction, meaning that\nit can be used by a variety of filters to perform clipping,\ncutting, and selection of data.\n"},
  {"GetSphereProperty", PyvtkSphereRepresentation_GetSphereProperty, METH_VARARGS,
   "V.GetSphereProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedSphereProperty", PyvtkSphereRepresentation_GetSelectedSphereProperty, METH_VARARGS,
   "V.GetSelectedSphereProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedSphereProperty()\n\nGet the sphere properties. The properties of the sphere when\nselected and unselected can be manipulated.\n"},
  {"GetHandleProperty", PyvtkSphereRepresentation_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be manipulated.\n"},
  {"GetSelectedHandleProperty", PyvtkSphereRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little ball on the sphere is the\nhandle). The properties of the handle when selected and\nunselected can be manipulated.\n"},
  {"GetHandleTextProperty", PyvtkSphereRepresentation_GetHandleTextProperty, METH_VARARGS,
   "V.GetHandleTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetHandleTextProperty()\n\nGet the handle text property. This can be used to control the\nappearance of the handle text.\n"},
  {"GetRadialLineProperty", PyvtkSphereRepresentation_GetRadialLineProperty, METH_VARARGS,
   "V.GetRadialLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetRadialLineProperty()\n\nGet the property of the radial line. This can be used to control\nthe appearance of the optional line connecting the center to the\nhandle.\n"},
  {"SetInteractionState", PyvtkSphereRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkSphereWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"PlaceWidget", PyvtkSphereRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget([float, float, float], [float, float, float])\nC++: virtual void PlaceWidget(double center[3],\n    double handlePosition[3])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {"BuildRepresentation", PyvtkSphereRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {"ComputeInteractionState", PyvtkSphereRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {"StartWidgetInteraction", PyvtkSphereRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {"WidgetInteraction", PyvtkSphereRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {"GetBounds", PyvtkSphereRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {"ReleaseGraphicsResources", PyvtkSphereRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkSphereRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkSphereRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOverlay", PyvtkSphereRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkSphereRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RegisterPickers", PyvtkSphereRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSphereRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSphereRepresentation", // tp_name
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
  PyvtkSphereRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereRepresentation_StaticNew()
{
  return vtkSphereRepresentation::New();
}

PyObject *PyvtkSphereRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSphereRepresentation_Type, PyvtkSphereRepresentation_Methods,
    "vtkSphereRepresentation",
 &PyvtkSphereRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkSphereRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "Outside", vtkSphereRepresentation::Outside },
        { "MovingHandle", vtkSphereRepresentation::MovingHandle },
        { "OnSphere", vtkSphereRepresentation::OnSphere },
        { "Translating", vtkSphereRepresentation::Translating },
        { "Scaling", vtkSphereRepresentation::Scaling },
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

void PyVTKAddFile_vtkSphereRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_SPHERE_OFF", 0 },
        { "VTK_SPHERE_WIREFRAME", 1 },
        { "VTK_SPHERE_SURFACE", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

