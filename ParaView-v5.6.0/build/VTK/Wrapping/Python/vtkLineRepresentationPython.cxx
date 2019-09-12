// python wrapper for vtkLineRepresentation
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
#include "vtkLineRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLineRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLineRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkLineRepresentation_Doc =
  "vtkLineRepresentation - a class defining the representation for a\nvtkLineWidget2\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkLineWidget2. It\n"
  "represents a straight line with three handles: one at the beginning\n"
  "and ending of the line, and one used to translate the line. Through\n"
  "interaction with the widget, the line representation can be\n"
  "arbitrarily placed in the 3D space.\n\n"
  "To use this representation, you normally specify the position of the\n"
  "two end points (either in world or display coordinates). The\n"
  "PlaceWidget() method is also used to initially position the\n"
  "representation.\n\n"
  "@warning\n"
  "This class, and vtkLineWidget2, are next generation VTK widgets. An\n"
  "earlier version of this functionality was defined in the class\n"
  "vtkLineWidget.\n\n"
  "@sa\n"
  "vtkLineWidget2 vtkLineWidget\n\n";


static PyObject *
PyvtkLineRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLineRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLineRepresentation *tempr = vtkLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineRepresentation::NewInstance());

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
PyvtkLineRepresentation_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::GetPoint1WorldPosition(temp0);
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
PyvtkLineRepresentation_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1WorldPosition() :
      op->vtkLineRepresentation::GetPoint1WorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLineRepresentation_GetPoint1WorldPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint1WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return nullptr;
}



static PyObject *
PyvtkLineRepresentation_GetPoint1DisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::GetPoint1DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint1DisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1DisplayPosition() :
      op->vtkLineRepresentation::GetPoint1DisplayPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLineRepresentation_GetPoint1DisplayPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint1DisplayPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1DisplayPosition");
  return nullptr;
}



static PyObject *
PyvtkLineRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetPoint1WorldPosition(temp0);
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
PyvtkLineRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetPoint1DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2DisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::GetPoint2DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2DisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2DisplayPosition() :
      op->vtkLineRepresentation::GetPoint2DisplayPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLineRepresentation_GetPoint2DisplayPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint2DisplayPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2DisplayPosition");
  return nullptr;
}



static PyObject *
PyvtkLineRepresentation_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::GetPoint2WorldPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2WorldPosition() :
      op->vtkLineRepresentation::GetPoint2WorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLineRepresentation_GetPoint2WorldPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint2WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return nullptr;
}



static PyObject *
PyvtkLineRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetPoint2WorldPosition(temp0);
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
PyvtkLineRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetPoint2DisplayPosition(temp0);
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
PyvtkLineRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPointHandleRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointHandleRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetHandleRepresentation(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InstantiateHandleRepresentation();
    }
    else
    {
      op->vtkLineRepresentation::InstantiateHandleRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkLineRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkLineRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetLineHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetLineHandleRepresentation() :
      op->vtkLineRepresentation::GetLineHandleRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetEndPointProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEndPointProperty() :
      op->vtkLineRepresentation::GetEndPointProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedEndPointProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEndPointProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedEndPointProperty() :
      op->vtkLineRepresentation::GetSelectedEndPointProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetEndPoint2Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPoint2Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEndPoint2Property() :
      op->vtkLineRepresentation::GetEndPoint2Property());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedEndPoint2Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEndPoint2Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedEndPoint2Property() :
      op->vtkLineRepresentation::GetSelectedEndPoint2Property());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkLineRepresentation::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkLineRepresentation::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkLineRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkLineRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLineRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkLineRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::PlaceWidget(temp0);
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
PyvtkLineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkLineRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::StartWidgetInteraction(temp0);
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
PyvtkLineRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::WidgetInteraction(temp0);
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
PyvtkLineRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkLineRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkLineRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLineRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLineRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLineRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkLineRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkLineRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkLineRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDirectionalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionalLine(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetDirectionalLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDirectionalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirectionalLine() :
      op->vtkLineRepresentation::GetDirectionalLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DirectionalLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectionalLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectionalLineOn();
    }
    else
    {
      op->vtkLineRepresentation::DirectionalLineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DirectionalLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectionalLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectionalLineOff();
    }
    else
    {
      op->vtkLineRepresentation::DirectionalLineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLineRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceAnnotationVisibility(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetDistanceAnnotationVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationVisibility() :
      op->vtkLineRepresentation::GetDistanceAnnotationVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DistanceAnnotationVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceAnnotationVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistanceAnnotationVisibilityOn();
    }
    else
    {
      op->vtkLineRepresentation::DistanceAnnotationVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DistanceAnnotationVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceAnnotationVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistanceAnnotationVisibilityOff();
    }
    else
    {
      op->vtkLineRepresentation::DistanceAnnotationVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceAnnotationFormat(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetDistanceAnnotationFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationFormat() :
      op->vtkLineRepresentation::GetDistanceAnnotationFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetDistanceAnnotationScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLineRepresentation::SetDistanceAnnotationScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetDistanceAnnotationScale(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetDistanceAnnotationScale(temp0);
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
PyvtkLineRepresentation_SetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineRepresentation_SetDistanceAnnotationScale_s1(self, args);
    case 1:
      return PyvtkLineRepresentation_SetDistanceAnnotationScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDistanceAnnotationScale");
  return nullptr;
}



static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationScale() :
      op->vtkLineRepresentation::GetDistanceAnnotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkLineRepresentation::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLineRepresentation::SetLineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationProperty() :
      op->vtkLineRepresentation::GetDistanceAnnotationProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFollower *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkLineRepresentation::GetTextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRestrictFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestrictFlag(temp0);
    }
    else
    {
      op->vtkLineRepresentation::SetRestrictFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetRestrictFlagMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictFlagMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictFlagMinValue() :
      op->vtkLineRepresentation::GetRestrictFlagMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetRestrictFlagMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictFlagMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictFlagMaxValue() :
      op->vtkLineRepresentation::GetRestrictFlagMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLineRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkLineRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkLineRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkLineRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLineRepresentation\nC++: static vtkLineRepresentation *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkLineRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLineRepresentation\nC++: vtkLineRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {"GetPoint1WorldPosition", PyvtkLineRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   "V.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3])\nV.GetPoint1WorldPosition() -> (float, float, float)\nC++: double *GetPoint1WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint1DisplayPosition", PyvtkLineRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   "V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3])\nV.GetPoint1DisplayPosition() -> (float, float, float)\nC++: double *GetPoint1DisplayPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1WorldPosition", PyvtkLineRepresentation_SetPoint1WorldPosition, METH_VARARGS,
   "V.SetPoint1WorldPosition([float, float, float])\nC++: void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1DisplayPosition", PyvtkLineRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   "V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2DisplayPosition", PyvtkLineRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   "V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3])\nV.GetPoint2DisplayPosition() -> (float, float, float)\nC++: double *GetPoint2DisplayPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2WorldPosition", PyvtkLineRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   "V.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3])\nV.GetPoint2WorldPosition() -> (float, float, float)\nC++: double *GetPoint2WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2WorldPosition", PyvtkLineRepresentation_SetPoint2WorldPosition, METH_VARARGS,
   "V.SetPoint2WorldPosition([float, float, float])\nC++: void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2DisplayPosition", PyvtkLineRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   "V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetHandleRepresentation", PyvtkLineRepresentation_SetHandleRepresentation, METH_VARARGS,
   "V.SetHandleRepresentation(vtkPointHandleRepresentation3D)\nC++: void SetHandleRepresentation(\n    vtkPointHandleRepresentation3D *handle)\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkLineWidget2. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkLineRepresentation uses this dummy to\nclone three vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkLineWidget2.)\n"},
  {"InstantiateHandleRepresentation", PyvtkLineRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   "V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkLineWidget2. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkLineRepresentation uses this dummy to\nclone three vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkLineWidget2.)\n"},
  {"GetPoint1Representation", PyvtkLineRepresentation_GetPoint1Representation, METH_VARARGS,
   "V.GetPoint1Representation() -> vtkPointHandleRepresentation3D\nC++: virtual vtkPointHandleRepresentation3D *GetPoint1Representation(\n    )\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {"GetPoint2Representation", PyvtkLineRepresentation_GetPoint2Representation, METH_VARARGS,
   "V.GetPoint2Representation() -> vtkPointHandleRepresentation3D\nC++: virtual vtkPointHandleRepresentation3D *GetPoint2Representation(\n    )\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {"GetLineHandleRepresentation", PyvtkLineRepresentation_GetLineHandleRepresentation, METH_VARARGS,
   "V.GetLineHandleRepresentation() -> vtkPointHandleRepresentation3D\nC++: virtual vtkPointHandleRepresentation3D *GetLineHandleRepresentation(\n    )\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {"GetEndPointProperty", PyvtkLineRepresentation_GetEndPointProperty, METH_VARARGS,
   "V.GetEndPointProperty() -> vtkProperty\nC++: virtual vtkProperty *GetEndPointProperty()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {"GetSelectedEndPointProperty", PyvtkLineRepresentation_GetSelectedEndPointProperty, METH_VARARGS,
   "V.GetSelectedEndPointProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedEndPointProperty()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {"GetEndPoint2Property", PyvtkLineRepresentation_GetEndPoint2Property, METH_VARARGS,
   "V.GetEndPoint2Property() -> vtkProperty\nC++: virtual vtkProperty *GetEndPoint2Property()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {"GetSelectedEndPoint2Property", PyvtkLineRepresentation_GetSelectedEndPoint2Property, METH_VARARGS,
   "V.GetSelectedEndPoint2Property() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedEndPoint2Property()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {"GetLineProperty", PyvtkLineRepresentation_GetLineProperty, METH_VARARGS,
   "V.GetLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {"GetSelectedLineProperty", PyvtkLineRepresentation_GetSelectedLineProperty, METH_VARARGS,
   "V.GetSelectedLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {"SetTolerance", PyvtkLineRepresentation_SetTolerance, METH_VARARGS,
   "V.SetTolerance(int)\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {"GetToleranceMinValue", PyvtkLineRepresentation_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> int\nC++: virtual int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {"GetToleranceMaxValue", PyvtkLineRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> int\nC++: virtual int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {"GetTolerance", PyvtkLineRepresentation_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> int\nC++: virtual int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {"SetResolution", PyvtkLineRepresentation_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: void SetResolution(int res)\n\nSet/Get the resolution (number of subdivisions) of the line. A\nline with resolution greater than one is useful when points along\nthe line are desired; e.g., generating a rake of streamlines.\n"},
  {"GetResolution", PyvtkLineRepresentation_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the resolution (number of subdivisions) of the line. A\nline with resolution greater than one is useful when points along\nthe line are desired; e.g., generating a rake of streamlines.\n"},
  {"GetPolyData", PyvtkLineRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nRetrieve the polydata (including points) that defines the line. \nThe polydata consists of n+1 points, where n is the resolution of\nthe line. These point values are guaranteed to be up-to-date\nwhenever any one of the three handles are moved. To use this\nmethod, the user provides the vtkPolyData as an input argument,\nand the points and polyline are copied into it.\n"},
  {"PlaceWidget", PyvtkLineRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkLineRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkLineRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkLineRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkLineRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"GetBounds", PyvtkLineRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"GetActors", PyvtkLineRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *pc) override;\n\nMethods supporting the rendering process.\n"},
  {"ReleaseGraphicsResources", PyvtkLineRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkLineRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods supporting the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkLineRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods supporting the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkLineRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods supporting the rendering process.\n"},
  {"SetInteractionState", PyvtkLineRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkLineRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "V.GetInteractionStateMinValue() -> int\nC++: virtual int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMaxValue", PyvtkLineRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "V.GetInteractionStateMaxValue() -> int\nC++: virtual int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"SetRepresentationState", PyvtkLineRepresentation_SetRepresentationState, METH_VARARGS,
   "V.SetRepresentationState(int)\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkLineRepresentation_GetRepresentationState, METH_VARARGS,
   "V.GetRepresentationState() -> int\nC++: virtual int GetRepresentationState()\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"SetDirectionalLine", PyvtkLineRepresentation_SetDirectionalLine, METH_VARARGS,
   "V.SetDirectionalLine(bool)\nC++: void SetDirectionalLine(bool val)\n\nSets the representation to be a directional line with point 1\nrepresented as a cone.\n"},
  {"GetDirectionalLine", PyvtkLineRepresentation_GetDirectionalLine, METH_VARARGS,
   "V.GetDirectionalLine() -> bool\nC++: virtual bool GetDirectionalLine()\n\nSets the representation to be a directional line with point 1\nrepresented as a cone.\n"},
  {"DirectionalLineOn", PyvtkLineRepresentation_DirectionalLineOn, METH_VARARGS,
   "V.DirectionalLineOn()\nC++: virtual void DirectionalLineOn()\n\nSets the representation to be a directional line with point 1\nrepresented as a cone.\n"},
  {"DirectionalLineOff", PyvtkLineRepresentation_DirectionalLineOff, METH_VARARGS,
   "V.DirectionalLineOff()\nC++: virtual void DirectionalLineOff()\n\nSets the representation to be a directional line with point 1\nrepresented as a cone.\n"},
  {"GetMTime", PyvtkLineRepresentation_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload the superclasses' GetMTime() because internal classes\nare used to keep the state of the representation.\n"},
  {"SetRenderer", PyvtkLineRepresentation_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nOverridden to set the rendererer on the internal representations.\n"},
  {"SetDistanceAnnotationVisibility", PyvtkLineRepresentation_SetDistanceAnnotationVisibility, METH_VARARGS,
   "V.SetDistanceAnnotationVisibility(int)\nC++: virtual void SetDistanceAnnotationVisibility(\n    vtkTypeBool _arg)\n\nShow the distance between the points.\n"},
  {"GetDistanceAnnotationVisibility", PyvtkLineRepresentation_GetDistanceAnnotationVisibility, METH_VARARGS,
   "V.GetDistanceAnnotationVisibility() -> int\nC++: virtual vtkTypeBool GetDistanceAnnotationVisibility()\n\nShow the distance between the points.\n"},
  {"DistanceAnnotationVisibilityOn", PyvtkLineRepresentation_DistanceAnnotationVisibilityOn, METH_VARARGS,
   "V.DistanceAnnotationVisibilityOn()\nC++: virtual void DistanceAnnotationVisibilityOn()\n\nShow the distance between the points.\n"},
  {"DistanceAnnotationVisibilityOff", PyvtkLineRepresentation_DistanceAnnotationVisibilityOff, METH_VARARGS,
   "V.DistanceAnnotationVisibilityOff()\nC++: virtual void DistanceAnnotationVisibilityOff()\n\nShow the distance between the points.\n"},
  {"SetDistanceAnnotationFormat", PyvtkLineRepresentation_SetDistanceAnnotationFormat, METH_VARARGS,
   "V.SetDistanceAnnotationFormat(string)\nC++: virtual void SetDistanceAnnotationFormat(const char *_arg)\n\nSpecify the format to use for labelling the line. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {"GetDistanceAnnotationFormat", PyvtkLineRepresentation_GetDistanceAnnotationFormat, METH_VARARGS,
   "V.GetDistanceAnnotationFormat() -> string\nC++: virtual char *GetDistanceAnnotationFormat()\n\nSpecify the format to use for labelling the line. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {"SetDistanceAnnotationScale", PyvtkLineRepresentation_SetDistanceAnnotationScale, METH_VARARGS,
   "V.SetDistanceAnnotationScale(float, float, float)\nC++: void SetDistanceAnnotationScale(double x, double y, double z)\nV.SetDistanceAnnotationScale([float, float, float])\nC++: virtual void SetDistanceAnnotationScale(double scale[3])\n\nScale text (font size along each dimension).\n"},
  {"GetDistanceAnnotationScale", PyvtkLineRepresentation_GetDistanceAnnotationScale, METH_VARARGS,
   "V.GetDistanceAnnotationScale() -> (float, float, float)\nC++: virtual double *GetDistanceAnnotationScale()\n\nScale text (font size along each dimension).\n"},
  {"GetDistance", PyvtkLineRepresentation_GetDistance, METH_VARARGS,
   "V.GetDistance() -> float\nC++: double GetDistance()\n\nGet the distance between the points.\n"},
  {"SetLineColor", PyvtkLineRepresentation_SetLineColor, METH_VARARGS,
   "V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLineProperty()->SetColor().\n"},
  {"GetDistanceAnnotationProperty", PyvtkLineRepresentation_GetDistanceAnnotationProperty, METH_VARARGS,
   "V.GetDistanceAnnotationProperty() -> vtkProperty\nC++: virtual vtkProperty *GetDistanceAnnotationProperty()\n\nGet the distance annotation property\n"},
  {"GetTextActor", PyvtkLineRepresentation_GetTextActor, METH_VARARGS,
   "V.GetTextActor() -> vtkFollower\nC++: virtual vtkFollower *GetTextActor()\n\nGet the text actor\n"},
  {"SetRestrictFlag", PyvtkLineRepresentation_SetRestrictFlag, METH_VARARGS,
   "V.SetRestrictFlag(int)\nC++: virtual void SetRestrictFlag(int _arg)\n\nSet if translations should be restricted to one of the axes\n(disabled if RestrictNone is specified).\n"},
  {"GetRestrictFlagMinValue", PyvtkLineRepresentation_GetRestrictFlagMinValue, METH_VARARGS,
   "V.GetRestrictFlagMinValue() -> int\nC++: virtual int GetRestrictFlagMinValue()\n\n"},
  {"GetRestrictFlagMaxValue", PyvtkLineRepresentation_GetRestrictFlagMaxValue, METH_VARARGS,
   "V.GetRestrictFlagMaxValue() -> int\nC++: virtual int GetRestrictFlagMaxValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLineRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkLineRepresentation", // tp_name
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
  PyvtkLineRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLineRepresentation_StaticNew()
{
  return vtkLineRepresentation::New();
}

PyObject *PyvtkLineRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLineRepresentation_Type, PyvtkLineRepresentation_Methods,
    "vtkLineRepresentation",
 &PyvtkLineRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkLineRepresentation_Type;

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

  for (int c = 0; c < 11; c++)
  {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "Outside", vtkLineRepresentation::Outside },
        { "OnP1", vtkLineRepresentation::OnP1 },
        { "OnP2", vtkLineRepresentation::OnP2 },
        { "TranslatingP1", vtkLineRepresentation::TranslatingP1 },
        { "TranslatingP2", vtkLineRepresentation::TranslatingP2 },
        { "OnLine", vtkLineRepresentation::OnLine },
        { "Scaling", vtkLineRepresentation::Scaling },
        { "RestrictNone", vtkLineRepresentation::RestrictNone },
        { "RestrictToX", vtkLineRepresentation::RestrictToX },
        { "RestrictToY", vtkLineRepresentation::RestrictToY },
        { "RestrictToZ", vtkLineRepresentation::RestrictToZ },
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

void PyVTKAddFile_vtkLineRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLineRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLineRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

