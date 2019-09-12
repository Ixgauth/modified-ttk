// python wrapper for vtkCheckerboardRepresentation
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
#include "vtkCheckerboardRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCheckerboardRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCheckerboardRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkCheckerboardRepresentation_Doc =
  "vtkCheckerboardRepresentation - represent the vtkCheckerboardWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkCheckerboardRepresentation is used to implement the\n"
  "representation of the vtkCheckerboardWidget. The user can adjust the\n"
  "number of divisions in each of the i-j directions in a 2D image. A\n"
  "frame appears around the vtkImageActor with sliders along each side\n"
  "of the frame. The user can interactively adjust the sliders to the\n"
  "desired number of checkerboard subdivisions. The representation uses\n"
  "four instances of vtkSliderRepresentation3D to implement itself.\n\n"
  "@sa\n"
  "vtkCheckerboardWidget vtkImageCheckerboard vtkImageActor\n"
  "vtkSliderWidget vtkRectilinearWipeWidget\n\n";


static PyObject *
PyvtkCheckerboardRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCheckerboardRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCheckerboardRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCheckerboardRepresentation *tempr = vtkCheckerboardRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCheckerboardRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCheckerboardRepresentation::NewInstance());

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
PyvtkCheckerboardRepresentation_SetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageCheckerboard *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageCheckerboard"))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboard(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetCheckerboard(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCheckerboard *tempr = (ap.IsBound() ?
      op->GetCheckerboard() :
      op->vtkCheckerboardRepresentation::GetCheckerboard());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
  {
    if (ap.IsBound())
    {
      op->SetImageActor(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkCheckerboardRepresentation::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerOffset(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetCornerOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetMinValue() :
      op->vtkCheckerboardRepresentation::GetCornerOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetMaxValue() :
      op->vtkCheckerboardRepresentation::GetCornerOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCheckerboardRepresentation::GetCornerOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SliderValueChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliderValueChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SliderValueChanged(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SliderValueChanged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetTopRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetTopRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetRightRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetRightRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetBottomRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetBottomRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetLeftRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetLeftRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetTopRepresentation() :
      op->vtkCheckerboardRepresentation::GetTopRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetRightRepresentation() :
      op->vtkCheckerboardRepresentation::GetRightRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetBottomRepresentation() :
      op->vtkCheckerboardRepresentation::GetBottomRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetLeftRepresentation() :
      op->vtkCheckerboardRepresentation::GetLeftRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCheckerboardRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCheckerboardRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCheckerboardRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCheckerboardRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCheckerboardRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCheckerboardRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCheckerboardRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkCheckerboardRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkCheckerboardRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCheckerboardRepresentation\nC++: static vtkCheckerboardRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkCheckerboardRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {"SetCheckerboard", PyvtkCheckerboardRepresentation_SetCheckerboard, METH_VARARGS,
   "V.SetCheckerboard(vtkImageCheckerboard)\nC++: void SetCheckerboard(vtkImageCheckerboard *chkrbrd)\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {"GetCheckerboard", PyvtkCheckerboardRepresentation_GetCheckerboard, METH_VARARGS,
   "V.GetCheckerboard() -> vtkImageCheckerboard\nC++: virtual vtkImageCheckerboard *GetCheckerboard()\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {"SetImageActor", PyvtkCheckerboardRepresentation_SetImageActor, METH_VARARGS,
   "V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *imageActor)\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {"GetImageActor", PyvtkCheckerboardRepresentation_GetImageActor, METH_VARARGS,
   "V.GetImageActor() -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {"SetCornerOffset", PyvtkCheckerboardRepresentation_SetCornerOffset, METH_VARARGS,
   "V.SetCornerOffset(float)\nC++: virtual void SetCornerOffset(double _arg)\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {"GetCornerOffsetMinValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue, METH_VARARGS,
   "V.GetCornerOffsetMinValue() -> float\nC++: virtual double GetCornerOffsetMinValue()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {"GetCornerOffsetMaxValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue, METH_VARARGS,
   "V.GetCornerOffsetMaxValue() -> float\nC++: virtual double GetCornerOffsetMaxValue()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {"GetCornerOffset", PyvtkCheckerboardRepresentation_GetCornerOffset, METH_VARARGS,
   "V.GetCornerOffset() -> float\nC++: virtual double GetCornerOffset()\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {"SliderValueChanged", PyvtkCheckerboardRepresentation_SliderValueChanged, METH_VARARGS,
   "V.SliderValueChanged(int)\nC++: void SliderValueChanged(int sliderNum)\n\nThis method is invoked by the vtkCheckerboardWidget() when a\nvalue of some slider has changed.\n"},
  {"SetTopRepresentation", PyvtkCheckerboardRepresentation_SetTopRepresentation, METH_VARARGS,
   "V.SetTopRepresentation(vtkSliderRepresentation3D)\nC++: void SetTopRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"SetRightRepresentation", PyvtkCheckerboardRepresentation_SetRightRepresentation, METH_VARARGS,
   "V.SetRightRepresentation(vtkSliderRepresentation3D)\nC++: void SetRightRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"SetBottomRepresentation", PyvtkCheckerboardRepresentation_SetBottomRepresentation, METH_VARARGS,
   "V.SetBottomRepresentation(vtkSliderRepresentation3D)\nC++: void SetBottomRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"SetLeftRepresentation", PyvtkCheckerboardRepresentation_SetLeftRepresentation, METH_VARARGS,
   "V.SetLeftRepresentation(vtkSliderRepresentation3D)\nC++: void SetLeftRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"GetTopRepresentation", PyvtkCheckerboardRepresentation_GetTopRepresentation, METH_VARARGS,
   "V.GetTopRepresentation() -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetTopRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"GetRightRepresentation", PyvtkCheckerboardRepresentation_GetRightRepresentation, METH_VARARGS,
   "V.GetRightRepresentation() -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetRightRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"GetBottomRepresentation", PyvtkCheckerboardRepresentation_GetBottomRepresentation, METH_VARARGS,
   "V.GetBottomRepresentation() -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetBottomRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"GetLeftRepresentation", PyvtkCheckerboardRepresentation_GetLeftRepresentation, METH_VARARGS,
   "V.GetLeftRepresentation() -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetLeftRepresentation()\n\nSet and get the instances of vtkSliderRepresention used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"BuildRepresentation", PyvtkCheckerboardRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethods required by superclass.\n"},
  {"GetActors", PyvtkCheckerboardRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods required by superclass.\n"},
  {"ReleaseGraphicsResources", PyvtkCheckerboardRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by superclass.\n"},
  {"RenderOverlay", PyvtkCheckerboardRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods required by superclass.\n"},
  {"RenderOpaqueGeometry", PyvtkCheckerboardRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods required by superclass.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods required by superclass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods required by superclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCheckerboardRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkCheckerboardRepresentation", // tp_name
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
  PyvtkCheckerboardRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCheckerboardRepresentation_StaticNew()
{
  return vtkCheckerboardRepresentation::New();
}

PyObject *PyvtkCheckerboardRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCheckerboardRepresentation_Type, PyvtkCheckerboardRepresentation_Methods,
    "vtkCheckerboardRepresentation",
 &PyvtkCheckerboardRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkCheckerboardRepresentation_Type;

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

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "TopSlider", vtkCheckerboardRepresentation::TopSlider },
        { "RightSlider", vtkCheckerboardRepresentation::RightSlider },
        { "BottomSlider", vtkCheckerboardRepresentation::BottomSlider },
        { "LeftSlider", vtkCheckerboardRepresentation::LeftSlider },
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

void PyVTKAddFile_vtkCheckerboardRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCheckerboardRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCheckerboardRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

