// python wrapper for vtkCoordinate
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
#include "vtkCoordinate.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCoordinate(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCoordinate_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCoordinate_Doc =
  "vtkCoordinate - perform coordinate transformation, and represent\nposition, in a variety of vtk coordinate systems\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCoordinate represents position in a variety of coordinate systems,\n"
  "and converts position to other coordinate systems. It also supports\n"
  "relative positioning, so you can create a cascade of vtkCoordinate\n"
  "objects (no loops please!) that refer to each other. The typical\n"
  "usage of this object is to set the coordinate system in which to\n"
  "represent a position (e.g.,\n"
  "SetCoordinateSystemToNormalizedDisplay()), set the value of the\n"
  "coordinate (e.g., SetValue()), and then invoke the appropriate method\n"
  "to convert to another coordinate system (e.g.,\n"
  "GetComputedWorldValue()).\n\n"
  "The coordinate systems in vtk are as follows:\n\n\n"
  "  DISPLAY -             x-y pixel values in window\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     size, size is the upper right of the last pixel\n"
  "  NORMALIZED DISPLAY -  x-y (0,1) normalized values\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     1, 1 is the upper right of the last pixel\n"
  "  VIEWPORT -            x-y pixel values in viewport\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     size, size is the upper right of the last pixel\n"
  "  NORMALIZED VIEWPORT - x-y (0,1) normalized value in viewport\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     1, 1 is the upper right of the last pixel\n"
  "  VIEW -                x-y-z (-1,1) values in pose coordinates. (z\n"
  "is depth)\n"
  "  POSE -                world coords translated and rotated to the\n"
  "camera\n"
  "                        position and view direction\n"
  "  WORLD -               x-y-z global coordinate values\n"
  "  USERDEFINED -         x-y-z in User defined space \n\n"
  "If you cascade vtkCoordinate objects, you refer to another\n"
  "vtkCoordinate object which in turn can refer to others, and so on.\n"
  "This allows you to create composite groups of things like vtkActor2D\n"
  "that are positioned relative to one another. Note that in cascaded\n"
  "sequences, each vtkCoordinate object may be specified in different\n"
  "coordinate systems!\n\n"
  "@sa\n"
  "vtkActor2D vtkScalarBarActor\n\n";


static PyObject *
PyvtkCoordinate_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCoordinate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoordinate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCoordinate *tempr = vtkCoordinate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoordinate::NewInstance());

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
PyvtkCoordinate_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystem(temp0);
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkCoordinate::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToDisplay();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToNormalizedDisplay();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToViewport();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToNormalizedViewport();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToView();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToView();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToPose();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToPose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToWorld();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystemAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCoordinateSystemAsString() :
      op->vtkCoordinate::GetCoordinateSystemAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

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
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinate::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkCoordinate::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkCoordinate::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinate_SetValue_s1(self, args);
    case 1:
      return PyvtkCoordinate_SetValue_s2(self, args);
    case 2:
      return PyvtkCoordinate_SetValue_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkCoordinate_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkCoordinate::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkCoordinate *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinate"))
  {
    if (ap.IsBound())
    {
      op->SetReferenceCoordinate(temp0);
    }
    else
    {
      op->vtkCoordinate::SetReferenceCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetReferenceCoordinate() :
      op->vtkCoordinate::GetReferenceCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkCoordinate::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkCoordinate::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedWorldValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedWorldValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedWorldValue(temp0) :
      op->vtkCoordinate::GetComputedWorldValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComputedViewportValue(temp0) :
      op->vtkCoordinate::GetComputedViewportValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComputedDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedLocalDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedLocalDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComputedLocalDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedLocalDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedDoubleViewportValue(temp0) :
      op->vtkCoordinate::GetComputedDoubleViewportValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedDoubleDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedDoubleDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedValue(temp0) :
      op->vtkCoordinate::GetComputedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedUserDefinedValue(temp0) :
      op->vtkCoordinate::GetComputedUserDefinedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCoordinate_Methods[] = {
  {"IsTypeOf", PyvtkCoordinate_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCoordinate_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCoordinate_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCoordinate\nC++: static vtkCoordinate *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCoordinate_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCoordinate\nC++: vtkCoordinate *NewInstance()\n\n"},
  {"SetCoordinateSystem", PyvtkCoordinate_SetCoordinateSystem, METH_VARARGS,
   "V.SetCoordinateSystem(int)\nC++: virtual void SetCoordinateSystem(int _arg)\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"GetCoordinateSystem", PyvtkCoordinate_GetCoordinateSystem, METH_VARARGS,
   "V.GetCoordinateSystem() -> int\nC++: virtual int GetCoordinateSystem()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToDisplay", PyvtkCoordinate_SetCoordinateSystemToDisplay, METH_VARARGS,
   "V.SetCoordinateSystemToDisplay()\nC++: void SetCoordinateSystemToDisplay()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToNormalizedDisplay", PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay, METH_VARARGS,
   "V.SetCoordinateSystemToNormalizedDisplay()\nC++: void SetCoordinateSystemToNormalizedDisplay()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToViewport", PyvtkCoordinate_SetCoordinateSystemToViewport, METH_VARARGS,
   "V.SetCoordinateSystemToViewport()\nC++: void SetCoordinateSystemToViewport()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToNormalizedViewport", PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport, METH_VARARGS,
   "V.SetCoordinateSystemToNormalizedViewport()\nC++: void SetCoordinateSystemToNormalizedViewport()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToView", PyvtkCoordinate_SetCoordinateSystemToView, METH_VARARGS,
   "V.SetCoordinateSystemToView()\nC++: void SetCoordinateSystemToView()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToPose", PyvtkCoordinate_SetCoordinateSystemToPose, METH_VARARGS,
   "V.SetCoordinateSystemToPose()\nC++: void SetCoordinateSystemToPose()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"SetCoordinateSystemToWorld", PyvtkCoordinate_SetCoordinateSystemToWorld, METH_VARARGS,
   "V.SetCoordinateSystemToWorld()\nC++: void SetCoordinateSystemToWorld()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"GetCoordinateSystemAsString", PyvtkCoordinate_GetCoordinateSystemAsString, METH_VARARGS,
   "V.GetCoordinateSystemAsString() -> string\nC++: const char *GetCoordinateSystemAsString()\n\n"},
  {"SetValue", PyvtkCoordinate_SetValue, METH_VARARGS,
   "V.SetValue(float, float, float)\nC++: void SetValue(double, double, double)\nV.SetValue((float, float, float))\nC++: void SetValue(double a[3])\nV.SetValue(float, float)\nC++: void SetValue(double a, double b)\n\n"},
  {"GetValue", PyvtkCoordinate_GetValue, METH_VARARGS,
   "V.GetValue() -> (float, float, float)\nC++: double *GetValue()\n\n"},
  {"SetReferenceCoordinate", PyvtkCoordinate_SetReferenceCoordinate, METH_VARARGS,
   "V.SetReferenceCoordinate(vtkCoordinate)\nC++: virtual void SetReferenceCoordinate(vtkCoordinate *)\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {"GetReferenceCoordinate", PyvtkCoordinate_GetReferenceCoordinate, METH_VARARGS,
   "V.GetReferenceCoordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetReferenceCoordinate()\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {"SetViewport", PyvtkCoordinate_SetViewport, METH_VARARGS,
   "V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer nor a reference counted\nobject, to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {"GetViewport", PyvtkCoordinate_GetViewport, METH_VARARGS,
   "V.GetViewport() -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer nor a reference counted\nobject, to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {"GetComputedWorldValue", PyvtkCoordinate_GetComputedWorldValue, METH_VARARGS,
   "V.GetComputedWorldValue(vtkViewport) -> (float, float, float)\nC++: double *GetComputedWorldValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {"GetComputedViewportValue", PyvtkCoordinate_GetComputedViewportValue, METH_VARARGS,
   "V.GetComputedViewportValue(vtkViewport) -> (int, int)\nC++: int *GetComputedViewportValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {"GetComputedDisplayValue", PyvtkCoordinate_GetComputedDisplayValue, METH_VARARGS,
   "V.GetComputedDisplayValue(vtkViewport) -> (int, int)\nC++: int *GetComputedDisplayValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {"GetComputedLocalDisplayValue", PyvtkCoordinate_GetComputedLocalDisplayValue, METH_VARARGS,
   "V.GetComputedLocalDisplayValue(vtkViewport) -> (int, int)\nC++: int *GetComputedLocalDisplayValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {"GetComputedDoubleViewportValue", PyvtkCoordinate_GetComputedDoubleViewportValue, METH_VARARGS,
   "V.GetComputedDoubleViewportValue(vtkViewport) -> (float, float)\nC++: double *GetComputedDoubleViewportValue(vtkViewport *)\n\n"},
  {"GetComputedDoubleDisplayValue", PyvtkCoordinate_GetComputedDoubleDisplayValue, METH_VARARGS,
   "V.GetComputedDoubleDisplayValue(vtkViewport) -> (float, float)\nC++: double *GetComputedDoubleDisplayValue(vtkViewport *)\n\n"},
  {"GetComputedValue", PyvtkCoordinate_GetComputedValue, METH_VARARGS,
   "V.GetComputedValue(vtkViewport) -> (float, float, float)\nC++: double *GetComputedValue(vtkViewport *)\n\nGetComputedValue() will return either World, Viewport or Display\nbased on what has been set as the coordinate system. This is good\nfor objects like vtkLineSource, where the user might want to use\nthem as World or Viewport coordinates.\n"},
  {"GetComputedUserDefinedValue", PyvtkCoordinate_GetComputedUserDefinedValue, METH_VARARGS,
   "V.GetComputedUserDefinedValue(vtkViewport) -> (float, float,\n    float)\nC++: virtual double *GetComputedUserDefinedValue(vtkViewport *)\n\nGetComputedUserDefinedValue() is to be used only when the\ncoordinate system is VTK_USERDEFINED. The user must subclass\nvtkCoordinate and override this function, when set as the\nTransformCoordinate in 2D-Mappers, the user can customize display\nof 2D polygons\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCoordinate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCoordinate", // tp_name
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
  PyvtkCoordinate_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCoordinate_StaticNew()
{
  return vtkCoordinate::New();
}

PyObject *PyvtkCoordinate_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCoordinate_Type, PyvtkCoordinate_Methods,
    "vtkCoordinate",
 &PyvtkCoordinate_StaticNew);

  PyTypeObject *pytype = &PyvtkCoordinate_Type;

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

void PyVTKAddFile_vtkCoordinate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCoordinate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCoordinate", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_DISPLAY", 0 },
        { "VTK_NORMALIZED_DISPLAY", 1 },
        { "VTK_VIEWPORT", 2 },
        { "VTK_NORMALIZED_VIEWPORT", 3 },
        { "VTK_VIEW", 4 },
        { "VTK_POSE", 5 },
        { "VTK_WORLD", 6 },
        { "VTK_USERDEFINED", 7 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

