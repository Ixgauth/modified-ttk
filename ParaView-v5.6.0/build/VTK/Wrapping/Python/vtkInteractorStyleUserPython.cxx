// python wrapper for vtkInteractorStyleUser
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
#include "vtkInteractorStyleUser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleUser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleUser_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyleUser_Doc =
  "vtkInteractorStyleUser - provides customizable interaction routines\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "The most common way to customize user interaction is to write a\n"
  "subclass of vtkInteractorStyle: vtkInteractorStyleUser allows you to\n"
  "customize the interaction to without subclassing vtkInteractorStyle. \n"
  "This is particularly useful for setting up custom interaction modes\n"
  "in scripting languages such as Python.  This class allows you to hook\n"
  "into the MouseMove, ButtonPress/Release, KeyPress/Release, etc.\n"
  "events.  If you want to hook into just a single mouse button, but\n"
  "leave the interaction modes for the others unchanged, you must use\n"
  "e.g. SetMiddleButtonPressMethod() instead of the more general\n"
  "SetButtonPressMethod().\n\n";


static PyObject *
PyvtkInteractorStyleUser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleUser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleUser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleUser *tempr = vtkInteractorStyleUser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleUser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleUser::NewInstance());

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
PyvtkInteractorStyleUser_GetLastPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastPos() :
      op->vtkInteractorStyleUser::GetLastPos());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetOldPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOldPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOldPos() :
      op->vtkInteractorStyleUser::GetOldPos());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShiftKey() :
      op->vtkInteractorStyleUser::GetShiftKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetCtrlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCtrlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCtrlKey() :
      op->vtkInteractorStyleUser::GetCtrlKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChar() :
      op->vtkInteractorStyleUser::GetChar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkInteractorStyleUser::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetButton() :
      op->vtkInteractorStyleUser::GetButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUser::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUser::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUser::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUser::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelForward();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMouseWheelForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelBackward();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMouseWheelBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleUser::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyPress();
    }
    else
    {
      op->vtkInteractorStyleUser::OnKeyPress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnKeyRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyRelease();
    }
    else
    {
      op->vtkInteractorStyleUser::OnKeyRelease();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnExpose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnExpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnExpose();
    }
    else
    {
      op->vtkInteractorStyleUser::OnExpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnConfigure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnConfigure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnConfigure();
    }
    else
    {
      op->vtkInteractorStyleUser::OnConfigure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnEnter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEnter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEnter();
    }
    else
    {
      op->vtkInteractorStyleUser::OnEnter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeave();
    }
    else
    {
      op->vtkInteractorStyleUser::OnLeave();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnTimer();
    }
    else
    {
      op->vtkInteractorStyleUser::OnTimer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleUser_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleUser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleUser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleUser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleUser\nC++: static vtkInteractorStyleUser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleUser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleUser\nC++: vtkInteractorStyleUser *NewInstance()\n\n"},
  {"GetLastPos", PyvtkInteractorStyleUser_GetLastPos, METH_VARARGS,
   "V.GetLastPos() -> (int, int)\nC++: int *GetLastPos()\n\n"},
  {"GetOldPos", PyvtkInteractorStyleUser_GetOldPos, METH_VARARGS,
   "V.GetOldPos() -> (int, int)\nC++: int *GetOldPos()\n\n"},
  {"GetShiftKey", PyvtkInteractorStyleUser_GetShiftKey, METH_VARARGS,
   "V.GetShiftKey() -> int\nC++: virtual int GetShiftKey()\n\nTest whether modifiers were held down when mouse button or key\nwas pressed.\n"},
  {"GetCtrlKey", PyvtkInteractorStyleUser_GetCtrlKey, METH_VARARGS,
   "V.GetCtrlKey() -> int\nC++: virtual int GetCtrlKey()\n\nTest whether modifiers were held down when mouse button or key\nwas pressed.\n"},
  {"GetChar", PyvtkInteractorStyleUser_GetChar, METH_VARARGS,
   "V.GetChar() -> int\nC++: virtual int GetChar()\n\nGet the character for a Char event.\n"},
  {"GetKeySym", PyvtkInteractorStyleUser_GetKeySym, METH_VARARGS,
   "V.GetKeySym() -> string\nC++: virtual char *GetKeySym()\n\nGet the KeySym (in the same format as vtkRenderWindowInteractor\nKeySyms) for a KeyPress or KeyRelease method.\n"},
  {"GetButton", PyvtkInteractorStyleUser_GetButton, METH_VARARGS,
   "V.GetButton() -> int\nC++: virtual int GetButton()\n\nGet the mouse button that was last pressed inside the window\n(returns zero when the button is released).\n"},
  {"OnMouseMove", PyvtkInteractorStyleUser_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nGeneric event bindings\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleUser_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nGeneric event bindings\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleUser_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nGeneric event bindings\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleUser_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nGeneric event bindings\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleUser_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nGeneric event bindings\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleUser_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nGeneric event bindings\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleUser_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nGeneric event bindings\n"},
  {"OnMouseWheelForward", PyvtkInteractorStyleUser_OnMouseWheelForward, METH_VARARGS,
   "V.OnMouseWheelForward()\nC++: void OnMouseWheelForward() override;\n\nGeneric event bindings\n"},
  {"OnMouseWheelBackward", PyvtkInteractorStyleUser_OnMouseWheelBackward, METH_VARARGS,
   "V.OnMouseWheelBackward()\nC++: void OnMouseWheelBackward() override;\n\nGeneric event bindings\n"},
  {"OnChar", PyvtkInteractorStyleUser_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nKeyboard functions\n"},
  {"OnKeyPress", PyvtkInteractorStyleUser_OnKeyPress, METH_VARARGS,
   "V.OnKeyPress()\nC++: void OnKeyPress() override;\n\nKeyboard functions\n"},
  {"OnKeyRelease", PyvtkInteractorStyleUser_OnKeyRelease, METH_VARARGS,
   "V.OnKeyRelease()\nC++: void OnKeyRelease() override;\n\nKeyboard functions\n"},
  {"OnExpose", PyvtkInteractorStyleUser_OnExpose, METH_VARARGS,
   "V.OnExpose()\nC++: void OnExpose() override;\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {"OnConfigure", PyvtkInteractorStyleUser_OnConfigure, METH_VARARGS,
   "V.OnConfigure()\nC++: void OnConfigure() override;\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {"OnEnter", PyvtkInteractorStyleUser_OnEnter, METH_VARARGS,
   "V.OnEnter()\nC++: void OnEnter() override;\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {"OnLeave", PyvtkInteractorStyleUser_OnLeave, METH_VARARGS,
   "V.OnLeave()\nC++: void OnLeave() override;\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {"OnTimer", PyvtkInteractorStyleUser_OnTimer, METH_VARARGS,
   "V.OnTimer()\nC++: void OnTimer() override;\n\nOnTimer calls Rotate, Rotate etc which should be overridden by\nstyle subclasses.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleUser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleUser", // tp_name
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
  PyvtkInteractorStyleUser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleUser_StaticNew()
{
  return vtkInteractorStyleUser::New();
}

PyObject *PyvtkInteractorStyleUser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleUser_Type, PyvtkInteractorStyleUser_Methods,
    "vtkInteractorStyleUser",
 &PyvtkInteractorStyleUser_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleUser_Type;

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

void PyVTKAddFile_vtkInteractorStyleUser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleUser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleUser", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(8);
  if (o)
  {
    PyDict_SetItemString(dict, "VTKIS_USERINTERACTION", o);
    Py_DECREF(o);
  }
}

