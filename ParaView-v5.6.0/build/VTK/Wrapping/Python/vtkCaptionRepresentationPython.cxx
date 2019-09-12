// python wrapper for vtkCaptionRepresentation
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
#include "vtkCaptionRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCaptionRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCaptionRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static const char *PyvtkCaptionRepresentation_Doc =
  "vtkCaptionRepresentation - represents vtkCaptionWidget in the scene\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class represents vtkCaptionWidget. A caption is defined by some\n"
  "text with a leader (e.g., arrow) that points from the text to a point\n"
  "in the scene. The caption is defined by an instance of\n"
  "vtkCaptionActor2D. It uses the event bindings of its superclass\n"
  "(vtkBorderWidget) to control the placement of the text, and adds the\n"
  "ability to move the attachment point around. In addition, when the\n"
  "caption text is selected, the widget emits a ActivateEvent that\n"
  "observers can watch for. This is useful for opening GUI dialogoues to\n"
  "adjust font characteristics, etc. (Please see the superclass for a\n"
  "description of event bindings.)\n\n"
  "Note that this widget extends the behavior of its superclass\n"
  "vtkBorderRepresentation.\n\n"
  "@sa\n"
  "vtkCaptionWidget vtkBorderWidget vtkBorderRepresentation\n"
  "vtkCaptionActor\n\n";


static PyObject *
PyvtkCaptionRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCaptionRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaptionRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCaptionRepresentation *tempr = vtkCaptionRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaptionRepresentation::NewInstance());

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
PyvtkCaptionRepresentation_SetAnchorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnchorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->SetAnchorPosition(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::SetAnchorPosition(temp0);
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
PyvtkCaptionRepresentation_GetAnchorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->GetAnchorPosition(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::GetAnchorPosition(temp0);
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
PyvtkCaptionRepresentation_SetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkCaptionActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCaptionActor2D"))
  {
    if (ap.IsBound())
    {
      op->SetCaptionActor2D(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::SetCaptionActor2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetCaptionActor2D() :
      op->vtkCaptionRepresentation::GetCaptionActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_SetAnchorRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnchorRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkPointHandleRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointHandleRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetAnchorRepresentation(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::SetAnchorRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetAnchorRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->GetAnchorRepresentation() :
      op->vtkCaptionRepresentation::GetAnchorRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCaptionRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::GetSize(temp0);
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
PyvtkCaptionRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->vtkCaptionRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCaptionRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCaptionRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCaptionRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCaptionRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFactor(temp0);
    }
    else
    {
      op->vtkCaptionRepresentation::SetFontFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMinValue() :
      op->vtkCaptionRepresentation::GetFontFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMaxValue() :
      op->vtkCaptionRepresentation::GetFontFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactor() :
      op->vtkCaptionRepresentation::GetFontFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCaptionRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCaptionRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkCaptionRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkCaptionRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCaptionRepresentation\nC++: static vtkCaptionRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkCaptionRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCaptionRepresentation\nC++: vtkCaptionRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {"SetAnchorPosition", PyvtkCaptionRepresentation_SetAnchorPosition, METH_VARARGS,
   "V.SetAnchorPosition([float, float, float])\nC++: void SetAnchorPosition(double pos[3])\n\nSpecify the position of the anchor (i.e., the point that the\ncaption is anchored to). Note that the position should be\nspecified in world coordinates.\n"},
  {"GetAnchorPosition", PyvtkCaptionRepresentation_GetAnchorPosition, METH_VARARGS,
   "V.GetAnchorPosition([float, float, float])\nC++: void GetAnchorPosition(double pos[3])\n\nSpecify the position of the anchor (i.e., the point that the\ncaption is anchored to). Note that the position should be\nspecified in world coordinates.\n"},
  {"SetCaptionActor2D", PyvtkCaptionRepresentation_SetCaptionActor2D, METH_VARARGS,
   "V.SetCaptionActor2D(vtkCaptionActor2D)\nC++: void SetCaptionActor2D(vtkCaptionActor2D *captionActor)\n\nSpecify the vtkCaptionActor2D to manage. If not specified, then\none is automatically created.\n"},
  {"GetCaptionActor2D", PyvtkCaptionRepresentation_GetCaptionActor2D, METH_VARARGS,
   "V.GetCaptionActor2D() -> vtkCaptionActor2D\nC++: virtual vtkCaptionActor2D *GetCaptionActor2D()\n\nSpecify the vtkCaptionActor2D to manage. If not specified, then\none is automatically created.\n"},
  {"SetAnchorRepresentation", PyvtkCaptionRepresentation_SetAnchorRepresentation, METH_VARARGS,
   "V.SetAnchorRepresentation(vtkPointHandleRepresentation3D)\nC++: void SetAnchorRepresentation(\n    vtkPointHandleRepresentation3D *)\n\nSet and get the instances of vtkPointHandleRepresention3D used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"GetAnchorRepresentation", PyvtkCaptionRepresentation_GetAnchorRepresentation, METH_VARARGS,
   "V.GetAnchorRepresentation() -> vtkPointHandleRepresentation3D\nC++: virtual vtkPointHandleRepresentation3D *GetAnchorRepresentation(\n    )\n\nSet and get the instances of vtkPointHandleRepresention3D used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"BuildRepresentation", PyvtkCaptionRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses API.\n"},
  {"GetSize", PyvtkCaptionRepresentation_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: void GetSize(double size[2]) override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"GetActors2D", PyvtkCaptionRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkCaptionRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkCaptionRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkCaptionRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCaptionRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCaptionRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"SetFontFactor", PyvtkCaptionRepresentation_SetFontFactor, METH_VARARGS,
   "V.SetFontFactor(float)\nC++: virtual void SetFontFactor(double _arg)\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {"GetFontFactorMinValue", PyvtkCaptionRepresentation_GetFontFactorMinValue, METH_VARARGS,
   "V.GetFontFactorMinValue() -> float\nC++: virtual double GetFontFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {"GetFontFactorMaxValue", PyvtkCaptionRepresentation_GetFontFactorMaxValue, METH_VARARGS,
   "V.GetFontFactorMaxValue() -> float\nC++: virtual double GetFontFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {"GetFontFactor", PyvtkCaptionRepresentation_GetFontFactor, METH_VARARGS,
   "V.GetFontFactor() -> float\nC++: virtual double GetFontFactor()\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCaptionRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkCaptionRepresentation", // tp_name
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
  PyvtkCaptionRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCaptionRepresentation_StaticNew()
{
  return vtkCaptionRepresentation::New();
}

PyObject *PyvtkCaptionRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCaptionRepresentation_Type, PyvtkCaptionRepresentation_Methods,
    "vtkCaptionRepresentation",
 &PyvtkCaptionRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkCaptionRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCaptionRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCaptionRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCaptionRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

