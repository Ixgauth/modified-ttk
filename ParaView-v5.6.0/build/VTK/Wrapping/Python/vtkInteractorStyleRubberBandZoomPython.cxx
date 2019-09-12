// python wrapper for vtkInteractorStyleRubberBandZoom
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
#include "vtkInteractorStyleRubberBandZoom.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleRubberBandZoom(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleRubberBandZoom_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyleRubberBandZoom_Doc =
  "vtkInteractorStyleRubberBandZoom - zoom in by amount indicated by\nrubber band box\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "This interactor style allows the user to draw a rectangle in the\n"
  "render window using the left mouse button.  When the mouse button is\n"
  "released, the current camera zooms by an amount determined from the\n"
  "shorter side of the drawn rectangle.\n\n";


static PyObject *
PyvtkInteractorStyleRubberBandZoom_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleRubberBandZoom::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleRubberBandZoom::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleRubberBandZoom *tempr = vtkInteractorStyleRubberBandZoom::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleRubberBandZoom *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleRubberBandZoom::NewInstance());

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
PyvtkInteractorStyleRubberBandZoom_SetLockAspectToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockAspectToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockAspectToViewport(temp0);
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::SetLockAspectToViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_GetLockAspectToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockAspectToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLockAspectToViewport() :
      op->vtkInteractorStyleRubberBandZoom::GetLockAspectToViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_LockAspectToViewportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockAspectToViewportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockAspectToViewportOn();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::LockAspectToViewportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_LockAspectToViewportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockAspectToViewportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockAspectToViewportOff();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::LockAspectToViewportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_SetCenterAtStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterAtStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterAtStartPosition(temp0);
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::SetCenterAtStartPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_GetCenterAtStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterAtStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterAtStartPosition() :
      op->vtkInteractorStyleRubberBandZoom::GetCenterAtStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_CenterAtStartPositionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterAtStartPositionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterAtStartPositionOn();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::CenterAtStartPositionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_CenterAtStartPositionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterAtStartPositionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterAtStartPositionOff();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::CenterAtStartPositionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_SetUseDollyForPerspectiveProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDollyForPerspectiveProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDollyForPerspectiveProjection(temp0);
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::SetUseDollyForPerspectiveProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_GetUseDollyForPerspectiveProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDollyForPerspectiveProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDollyForPerspectiveProjection() :
      op->vtkInteractorStyleRubberBandZoom::GetUseDollyForPerspectiveProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_UseDollyForPerspectiveProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDollyForPerspectiveProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDollyForPerspectiveProjectionOn();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::UseDollyForPerspectiveProjectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_UseDollyForPerspectiveProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDollyForPerspectiveProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDollyForPerspectiveProjectionOff();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::UseDollyForPerspectiveProjectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleRubberBandZoom::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBandZoom_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleRubberBandZoom_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleRubberBandZoom_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleRubberBandZoom_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleRubberBandZoom\nC++: static vtkInteractorStyleRubberBandZoom *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleRubberBandZoom_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleRubberBandZoom\nC++: vtkInteractorStyleRubberBandZoom *NewInstance()\n\n"},
  {"SetLockAspectToViewport", PyvtkInteractorStyleRubberBandZoom_SetLockAspectToViewport, METH_VARARGS,
   "V.SetLockAspectToViewport(bool)\nC++: virtual void SetLockAspectToViewport(bool _arg)\n\nWhen set to true (default, false), the interactor will lock the\nrendered box to the viewport's aspect ratio.\n"},
  {"GetLockAspectToViewport", PyvtkInteractorStyleRubberBandZoom_GetLockAspectToViewport, METH_VARARGS,
   "V.GetLockAspectToViewport() -> bool\nC++: virtual bool GetLockAspectToViewport()\n\nWhen set to true (default, false), the interactor will lock the\nrendered box to the viewport's aspect ratio.\n"},
  {"LockAspectToViewportOn", PyvtkInteractorStyleRubberBandZoom_LockAspectToViewportOn, METH_VARARGS,
   "V.LockAspectToViewportOn()\nC++: virtual void LockAspectToViewportOn()\n\nWhen set to true (default, false), the interactor will lock the\nrendered box to the viewport's aspect ratio.\n"},
  {"LockAspectToViewportOff", PyvtkInteractorStyleRubberBandZoom_LockAspectToViewportOff, METH_VARARGS,
   "V.LockAspectToViewportOff()\nC++: virtual void LockAspectToViewportOff()\n\nWhen set to true (default, false), the interactor will lock the\nrendered box to the viewport's aspect ratio.\n"},
  {"SetCenterAtStartPosition", PyvtkInteractorStyleRubberBandZoom_SetCenterAtStartPosition, METH_VARARGS,
   "V.SetCenterAtStartPosition(bool)\nC++: virtual void SetCenterAtStartPosition(bool _arg)\n\nWhen set to true (default, false), the position where the user\nstarts the interaction is treated as the center of the box rather\nthat one of the corners of the box.\n"},
  {"GetCenterAtStartPosition", PyvtkInteractorStyleRubberBandZoom_GetCenterAtStartPosition, METH_VARARGS,
   "V.GetCenterAtStartPosition() -> bool\nC++: virtual bool GetCenterAtStartPosition()\n\nWhen set to true (default, false), the position where the user\nstarts the interaction is treated as the center of the box rather\nthat one of the corners of the box.\n"},
  {"CenterAtStartPositionOn", PyvtkInteractorStyleRubberBandZoom_CenterAtStartPositionOn, METH_VARARGS,
   "V.CenterAtStartPositionOn()\nC++: virtual void CenterAtStartPositionOn()\n\nWhen set to true (default, false), the position where the user\nstarts the interaction is treated as the center of the box rather\nthat one of the corners of the box.\n"},
  {"CenterAtStartPositionOff", PyvtkInteractorStyleRubberBandZoom_CenterAtStartPositionOff, METH_VARARGS,
   "V.CenterAtStartPositionOff()\nC++: virtual void CenterAtStartPositionOff()\n\nWhen set to true (default, false), the position where the user\nstarts the interaction is treated as the center of the box rather\nthat one of the corners of the box.\n"},
  {"SetUseDollyForPerspectiveProjection", PyvtkInteractorStyleRubberBandZoom_SetUseDollyForPerspectiveProjection, METH_VARARGS,
   "V.SetUseDollyForPerspectiveProjection(bool)\nC++: virtual void SetUseDollyForPerspectiveProjection(bool _arg)\n\nIf camera is in perspective projection mode, this interactor\nstyle uses vtkCamera::Dolly to dolly the camera ahead for\nzooming. However, that can have unintended consequences such as\nthe camera entering into the data. Another option is to use\nvtkCamera::Zoom instead. In that case, the camera position is\nleft unchanged, instead the focal point is changed to the center\nof the target box and then the view angle is changed to zoom in.\nTo use this approach, set this parameter to false (default,\ntrue).\n"},
  {"GetUseDollyForPerspectiveProjection", PyvtkInteractorStyleRubberBandZoom_GetUseDollyForPerspectiveProjection, METH_VARARGS,
   "V.GetUseDollyForPerspectiveProjection() -> bool\nC++: virtual bool GetUseDollyForPerspectiveProjection()\n\nIf camera is in perspective projection mode, this interactor\nstyle uses vtkCamera::Dolly to dolly the camera ahead for\nzooming. However, that can have unintended consequences such as\nthe camera entering into the data. Another option is to use\nvtkCamera::Zoom instead. In that case, the camera position is\nleft unchanged, instead the focal point is changed to the center\nof the target box and then the view angle is changed to zoom in.\nTo use this approach, set this parameter to false (default,\ntrue).\n"},
  {"UseDollyForPerspectiveProjectionOn", PyvtkInteractorStyleRubberBandZoom_UseDollyForPerspectiveProjectionOn, METH_VARARGS,
   "V.UseDollyForPerspectiveProjectionOn()\nC++: virtual void UseDollyForPerspectiveProjectionOn()\n\nIf camera is in perspective projection mode, this interactor\nstyle uses vtkCamera::Dolly to dolly the camera ahead for\nzooming. However, that can have unintended consequences such as\nthe camera entering into the data. Another option is to use\nvtkCamera::Zoom instead. In that case, the camera position is\nleft unchanged, instead the focal point is changed to the center\nof the target box and then the view angle is changed to zoom in.\nTo use this approach, set this parameter to false (default,\ntrue).\n"},
  {"UseDollyForPerspectiveProjectionOff", PyvtkInteractorStyleRubberBandZoom_UseDollyForPerspectiveProjectionOff, METH_VARARGS,
   "V.UseDollyForPerspectiveProjectionOff()\nC++: virtual void UseDollyForPerspectiveProjectionOff()\n\nIf camera is in perspective projection mode, this interactor\nstyle uses vtkCamera::Dolly to dolly the camera ahead for\nzooming. However, that can have unintended consequences such as\nthe camera entering into the data. Another option is to use\nvtkCamera::Zoom instead. In that case, the camera position is\nleft unchanged, instead the focal point is changed to the center\nof the target box and then the view angle is changed to zoom in.\nTo use this approach, set this parameter to false (default,\ntrue).\n"},
  {"OnMouseMove", PyvtkInteractorStyleRubberBandZoom_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleRubberBandZoom_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleRubberBandZoom_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleRubberBandZoom_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleRubberBandZoom", // tp_name
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
  PyvtkInteractorStyleRubberBandZoom_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleRubberBandZoom_StaticNew()
{
  return vtkInteractorStyleRubberBandZoom::New();
}

PyObject *PyvtkInteractorStyleRubberBandZoom_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleRubberBandZoom_Type, PyvtkInteractorStyleRubberBandZoom_Methods,
    "vtkInteractorStyleRubberBandZoom",
 &PyvtkInteractorStyleRubberBandZoom_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleRubberBandZoom_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleRubberBandZoom(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleRubberBandZoom_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleRubberBandZoom", o) != 0)
  {
    Py_DECREF(o);
  }

}

