// python wrapper for vtkBoxRepresentation
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
#include "vtkBoxRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoxRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkBoxRepresentation_Doc =
  "vtkBoxRepresentation - a class defining the representation for the\nvtkBoxWidget2\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkBoxWidget2. It\n"
  "represents a box with seven handles: one on each of the six faces,\n"
  "plus a center handle. Through interaction with the widget, the box\n"
  "representation can be arbitrarily positioned in the 3D space.\n\n"
  "To use this representation, you normally use the PlaceWidget() method\n"
  "to position the widget at a specified region in space.\n\n"
  "@warning\n"
  "This class, and vtkBoxWidget2, are second generation VTK widgets. An\n"
  "earlier version of this functionality was defined in the class\n"
  "vtkBoxWidget.\n\n"
  "@sa\n"
  "vtkBoxWidget2 vtkBoxWidget\n\n";


static PyObject *
PyvtkBoxRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxRepresentation *tempr = vtkBoxRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxRepresentation::NewInstance());

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
PyvtkBoxRepresentation_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->GetPlanes(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::GetPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetUnderlyingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnderlyingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetUnderlyingPlane(temp0) :
      op->vtkBoxRepresentation::GetUnderlyingPlane(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkBoxRepresentation::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkBoxRepresentation::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkBoxRepresentation::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransform(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::GetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkBoxRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkBoxRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkBoxRepresentation::GetFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkBoxRepresentation::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkBoxRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkBoxRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineFaceWires(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetOutlineFaceWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFaceWires() :
      op->vtkBoxRepresentation::GetOutlineFaceWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineFaceWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOn();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineFaceWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineFaceWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOff();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineFaceWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineCursorWires(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetOutlineCursorWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineCursorWires() :
      op->vtkBoxRepresentation::GetOutlineCursorWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineCursorWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOn();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineCursorWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineCursorWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOff();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineCursorWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkBoxRepresentation::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkBoxRepresentation::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::PlaceWidget(temp0);
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
PyvtkBoxRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBoxRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBoxRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::WidgetInteraction(temp0);
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
PyvtkBoxRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBoxRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkBoxRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkBoxRepresentation_EndComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->EndComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxRepresentation::EndComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkBoxRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBoxRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBoxRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBoxRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

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
      op->vtkBoxRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTwoPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTwoPlaneMode() :
      op->vtkBoxRepresentation::GetTwoPlaneMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTwoPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoPlaneMode(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetTwoPlaneMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToAxes() :
      op->vtkBoxRepresentation::GetSnapToAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToAxes(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetSnapToAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StepForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StepForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StepForward();
    }
    else
    {
      op->vtkBoxRepresentation::StepForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StepBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StepBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StepBackward();
    }
    else
    {
      op->vtkBoxRepresentation::StepBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkBoxRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBoxRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkBoxRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkBoxRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoxRepresentation\nC++: static vtkBoxRepresentation *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkBoxRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoxRepresentation\nC++: vtkBoxRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {"GetPlanes", PyvtkBoxRepresentation_GetPlanes, METH_VARARGS,
   "V.GetPlanes(vtkPlanes)\nC++: void GetPlanes(vtkPlanes *planes)\n\nGet the planes describing the implicit function defined by the\nbox widget. The user must provide the instance of the class\nvtkPlanes. Note that vtkPlanes is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data. \n(The direction of the normals of the planes can be reversed\nenabling the InsideOut flag.)\n"},
  {"GetUnderlyingPlane", PyvtkBoxRepresentation_GetUnderlyingPlane, METH_VARARGS,
   "V.GetUnderlyingPlane(int) -> vtkPlane\nC++: vtkPlane *GetUnderlyingPlane(int i)\n\n"},
  {"SetInsideOut", PyvtkBoxRepresentation_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {"GetInsideOut", PyvtkBoxRepresentation_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {"InsideOutOn", PyvtkBoxRepresentation_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {"InsideOutOff", PyvtkBoxRepresentation_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {"GetTransform", PyvtkBoxRepresentation_GetTransform, METH_VARARGS,
   "V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the transformation of\nthe box. Note that the transformation is relative to where\nPlaceWidget() was initially called. This method modifies the\ntransform provided. The transform can be used to control the\nposition of vtkProp3D's, as well as other transformation\noperations (e.g., vtkTransformPolyData).\n"},
  {"SetTransform", PyvtkBoxRepresentation_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *t)\n\nSet the position, scale and orientation of the box widget using\nthe transform specified. Note that the transformation is relative\nto where PlaceWidget() was initially called (i.e., the original\nbounding box).\n"},
  {"GetPolyData", PyvtkBoxRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that define the box widget.\nThe polydata consists of 6 quadrilateral faces and 15 points. The\nfirst eight points define the eight corner vertices; the next six\ndefine the\n-x,+x, -y,+y, -z,+z face points; and the final point (the 15th\n    out of 15 points) defines the center of the box. These point\n    values are guaranteed to be up-to-date when either the\n    widget's corresponding InteractionEvent or\n    EndInteractionEvent events are invoked. The user provides the\n    vtkPolyData and the points and cells are added to it.\n"},
  {"GetHandleProperty", PyvtkBoxRepresentation_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetSelectedHandleProperty", PyvtkBoxRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetFaceProperty", PyvtkBoxRepresentation_GetFaceProperty, METH_VARARGS,
   "V.GetFaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {"GetSelectedFaceProperty", PyvtkBoxRepresentation_GetSelectedFaceProperty, METH_VARARGS,
   "V.GetSelectedFaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {"GetOutlineProperty", PyvtkBoxRepresentation_GetOutlineProperty, METH_VARARGS,
   "V.GetOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {"GetSelectedOutlineProperty", PyvtkBoxRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "V.GetSelectedOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {"SetOutlineFaceWires", PyvtkBoxRepresentation_SetOutlineFaceWires, METH_VARARGS,
   "V.SetOutlineFaceWires(int)\nC++: void SetOutlineFaceWires(int)\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"GetOutlineFaceWires", PyvtkBoxRepresentation_GetOutlineFaceWires, METH_VARARGS,
   "V.GetOutlineFaceWires() -> int\nC++: virtual int GetOutlineFaceWires()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"OutlineFaceWiresOn", PyvtkBoxRepresentation_OutlineFaceWiresOn, METH_VARARGS,
   "V.OutlineFaceWiresOn()\nC++: void OutlineFaceWiresOn()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"OutlineFaceWiresOff", PyvtkBoxRepresentation_OutlineFaceWiresOff, METH_VARARGS,
   "V.OutlineFaceWiresOff()\nC++: void OutlineFaceWiresOff()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"SetOutlineCursorWires", PyvtkBoxRepresentation_SetOutlineCursorWires, METH_VARARGS,
   "V.SetOutlineCursorWires(int)\nC++: void SetOutlineCursorWires(int)\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"GetOutlineCursorWires", PyvtkBoxRepresentation_GetOutlineCursorWires, METH_VARARGS,
   "V.GetOutlineCursorWires() -> int\nC++: virtual int GetOutlineCursorWires()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"OutlineCursorWiresOn", PyvtkBoxRepresentation_OutlineCursorWiresOn, METH_VARARGS,
   "V.OutlineCursorWiresOn()\nC++: void OutlineCursorWiresOn()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"OutlineCursorWiresOff", PyvtkBoxRepresentation_OutlineCursorWiresOff, METH_VARARGS,
   "V.OutlineCursorWiresOff()\nC++: void OutlineCursorWiresOff()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"HandlesOn", PyvtkBoxRepresentation_HandlesOn, METH_VARARGS,
   "V.HandlesOn()\nC++: virtual void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"HandlesOff", PyvtkBoxRepresentation_HandlesOff, METH_VARARGS,
   "V.HandlesOff()\nC++: virtual void HandlesOff()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"PlaceWidget", PyvtkBoxRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkBoxRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkBoxRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkBoxRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkBoxRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"GetBounds", PyvtkBoxRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartComplexInteraction", PyvtkBoxRepresentation_StartComplexInteraction, METH_VARARGS,
   "V.StartComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComplexInteraction", PyvtkBoxRepresentation_ComplexInteraction, METH_VARARGS,
   "V.ComplexInteraction(vtkRenderWindowInteractor, vtkAbstractWidget,\n     int, void)\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeComplexInteractionState", PyvtkBoxRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "V.ComputeComplexInteractionState(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void, int) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"EndComplexInteraction", PyvtkBoxRepresentation_EndComplexInteraction, METH_VARARGS,
   "V.EndComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: void EndComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ReleaseGraphicsResources", PyvtkBoxRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkBoxRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkBoxRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkBoxRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"SetInteractionState", PyvtkBoxRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkBoxWidget2) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetTwoPlaneMode", PyvtkBoxRepresentation_GetTwoPlaneMode, METH_VARARGS,
   "V.GetTwoPlaneMode() -> bool\nC++: virtual bool GetTwoPlaneMode()\n\nIn two plane mode only the X planes are shown this is useful for\ndefining thick slabs\n"},
  {"SetTwoPlaneMode", PyvtkBoxRepresentation_SetTwoPlaneMode, METH_VARARGS,
   "V.SetTwoPlaneMode(bool)\nC++: void SetTwoPlaneMode(bool)\n\nIn two plane mode only the X planes are shown this is useful for\ndefining thick slabs\n"},
  {"GetSnapToAxes", PyvtkBoxRepresentation_GetSnapToAxes, METH_VARARGS,
   "V.GetSnapToAxes() -> bool\nC++: virtual bool GetSnapToAxes()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"SetSnapToAxes", PyvtkBoxRepresentation_SetSnapToAxes, METH_VARARGS,
   "V.SetSnapToAxes(bool)\nC++: virtual void SetSnapToAxes(bool _arg)\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"StepForward", PyvtkBoxRepresentation_StepForward, METH_VARARGS,
   "V.StepForward()\nC++: void StepForward()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"StepBackward", PyvtkBoxRepresentation_StepBackward, METH_VARARGS,
   "V.StepBackward()\nC++: void StepBackward()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"RegisterPickers", PyvtkBoxRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoxRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBoxRepresentation", // tp_name
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
  PyvtkBoxRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxRepresentation_StaticNew()
{
  return vtkBoxRepresentation::New();
}

PyObject *PyvtkBoxRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoxRepresentation_Type, PyvtkBoxRepresentation_Methods,
    "vtkBoxRepresentation",
 &PyvtkBoxRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkBoxRepresentation_Type;

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

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "Outside", vtkBoxRepresentation::Outside },
        { "MoveF0", vtkBoxRepresentation::MoveF0 },
        { "MoveF1", vtkBoxRepresentation::MoveF1 },
        { "MoveF2", vtkBoxRepresentation::MoveF2 },
        { "MoveF3", vtkBoxRepresentation::MoveF3 },
        { "MoveF4", vtkBoxRepresentation::MoveF4 },
        { "MoveF5", vtkBoxRepresentation::MoveF5 },
        { "Translating", vtkBoxRepresentation::Translating },
        { "Rotating", vtkBoxRepresentation::Rotating },
        { "Scaling", vtkBoxRepresentation::Scaling },
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

void PyVTKAddFile_vtkBoxRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

