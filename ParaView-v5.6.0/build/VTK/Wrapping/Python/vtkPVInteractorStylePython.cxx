// python wrapper for vtkPVInteractorStyle
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
#include "vtkPVInteractorStyle.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVInteractorStyle(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static const char *PyvtkPVInteractorStyle_Doc =
  "vtkPVInteractorStyle - interactive manipulation of the camera\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkPVInteractorStyle allows the user to interactively manipulate the\n"
  "camera, the viewpoint of the scene. The left button is for rotation;\n"
  "shift + left button is for rolling; the right button is for panning;\n"
  "and shift + right button is for zooming. This class fires\n"
  "vtkCommand::StartInteractionEvent and vtkCommand::EndInteractionEvent\n"
  "to signal start and end of interaction.\n\n";


static PyObject *
PyvtkPVInteractorStyle_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVInteractorStyle *tempr = vtkPVInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVInteractorStyle::NewInstance());

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
PyvtkPVInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkPVInteractorStyle::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkPVInteractorStyle::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkPVInteractorStyle::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkPVInteractorStyle::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkPVInteractorStyle::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkPVInteractorStyle::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkPVInteractorStyle::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnKeyDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyDown();
    }
    else
    {
      op->vtkPVInteractorStyle::OnKeyDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnKeyUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyUp();
    }
    else
    {
      op->vtkPVInteractorStyle::OnKeyUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkPVInteractorStyle::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_AddManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  vtkCameraManipulator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraManipulator"))
  {
    if (ap.IsBound())
    {
      op->AddManipulator(temp0);
    }
    else
    {
      op->vtkPVInteractorStyle::AddManipulator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_RemoveAllManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllManipulators();
    }
    else
    {
      op->vtkPVInteractorStyle::RemoveAllManipulators();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_GetCameraManipulators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraManipulators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetCameraManipulators() :
      op->vtkPVInteractorStyle::GetCameraManipulators());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_SetCenterOfRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

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
      op->SetCenterOfRotation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVInteractorStyle::SetCenterOfRotation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVInteractorStyle_SetCenterOfRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenterOfRotation(temp0);
    }
    else
    {
      op->vtkPVInteractorStyle::SetCenterOfRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVInteractorStyle_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPVInteractorStyle_SetCenterOfRotation_s1(self, args);
    case 1:
      return PyvtkPVInteractorStyle_SetCenterOfRotation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterOfRotation");
  return nullptr;
}



static PyObject *
PyvtkPVInteractorStyle_GetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenterOfRotation() :
      op->vtkPVInteractorStyle::GetCenterOfRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationFactor(temp0);
    }
    else
    {
      op->vtkPVInteractorStyle::SetRotationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_GetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationFactor() :
      op->vtkPVInteractorStyle::GetRotationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_FindManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCameraManipulator *tempr = (ap.IsBound() ?
      op->FindManipulator(temp0, temp1, temp2) :
      op->vtkPVInteractorStyle::FindManipulator(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_DollyToPosition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DollyToPosition");

  double temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    ap.Save(temp1, save1, size1);

    vtkPVInteractorStyle::DollyToPosition(temp0, temp1, temp2);

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
PyvtkPVInteractorStyle_TranslateCamera(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TranslateCamera");

  vtkRenderer *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPVInteractorStyle::TranslateCamera(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractorStyle_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractorStyle *op = static_cast<vtkPVInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dolly();
    }
    else
    {
      op->vtkPVInteractorStyle::Dolly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkPVInteractorStyle_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVInteractorStyle_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVInteractorStyle_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVInteractorStyle\nC++: static vtkPVInteractorStyle *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVInteractorStyle_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVInteractorStyle\nC++: vtkPVInteractorStyle *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkPVInteractorStyle_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkPVInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonUp", PyvtkPVInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonDown", PyvtkPVInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonUp", PyvtkPVInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonDown", PyvtkPVInteractorStyle_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonUp", PyvtkPVInteractorStyle_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnKeyDown", PyvtkPVInteractorStyle_OnKeyDown, METH_VARARGS,
   "V.OnKeyDown()\nC++: void OnKeyDown() override;\n\nUnlike mouse events, these are forwarded to all camera\nmanipulators since we don't have a mechanism to activate a\nmanipulator by key presses currently.\n"},
  {"OnKeyUp", PyvtkPVInteractorStyle_OnKeyUp, METH_VARARGS,
   "V.OnKeyUp()\nC++: void OnKeyUp() override;\n\nUnlike mouse events, these are forwarded to all camera\nmanipulators since we don't have a mechanism to activate a\nmanipulator by key presses currently.\n"},
  {"OnChar", PyvtkPVInteractorStyle_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nOverrides superclass behaviors to only support the key codes that\nmake sense in a ParaView application.\n"},
  {"AddManipulator", PyvtkPVInteractorStyle_AddManipulator, METH_VARARGS,
   "V.AddManipulator(vtkCameraManipulator)\nC++: void AddManipulator(vtkCameraManipulator *m)\n\nAccess to adding or removing manipulators.\n"},
  {"RemoveAllManipulators", PyvtkPVInteractorStyle_RemoveAllManipulators, METH_VARARGS,
   "V.RemoveAllManipulators()\nC++: void RemoveAllManipulators()\n\nRemoves all manipulators.\n"},
  {"GetCameraManipulators", PyvtkPVInteractorStyle_GetCameraManipulators, METH_VARARGS,
   "V.GetCameraManipulators() -> vtkCollection\nC++: virtual vtkCollection *GetCameraManipulators()\n\nAccessor for the collection of camera manipulators.\n"},
  {"SetCenterOfRotation", PyvtkPVInteractorStyle_SetCenterOfRotation, METH_VARARGS,
   "V.SetCenterOfRotation(float, float, float)\nC++: void SetCenterOfRotation(double, double, double)\nV.SetCenterOfRotation((float, float, float))\nC++: void SetCenterOfRotation(double a[3])\n\n"},
  {"GetCenterOfRotation", PyvtkPVInteractorStyle_GetCenterOfRotation, METH_VARARGS,
   "V.GetCenterOfRotation() -> (float, float, float)\nC++: double *GetCenterOfRotation()\n\n"},
  {"SetRotationFactor", PyvtkPVInteractorStyle_SetRotationFactor, METH_VARARGS,
   "V.SetRotationFactor(float)\nC++: virtual void SetRotationFactor(double _arg)\n\nPropagates the rotation factor to the manipulators. This simply\nsets an internal ivar. It is propagated to a manipulator before\nthe event is sent to it. Also changing the RotationFactor during\ninteraction i.e. after a button press but before a button up has\nno effect until the next button press.\n"},
  {"GetRotationFactor", PyvtkPVInteractorStyle_GetRotationFactor, METH_VARARGS,
   "V.GetRotationFactor() -> float\nC++: virtual double GetRotationFactor()\n\nPropagates the rotation factor to the manipulators. This simply\nsets an internal ivar. It is propagated to a manipulator before\nthe event is sent to it. Also changing the RotationFactor during\ninteraction i.e. after a button press but before a button up has\nno effect until the next button press.\n"},
  {"FindManipulator", PyvtkPVInteractorStyle_FindManipulator, METH_VARARGS,
   "V.FindManipulator(int, int, int) -> vtkCameraManipulator\nC++: virtual vtkCameraManipulator *FindManipulator(int button,\n    int shift, int control)\n\nReturns the chosen manipulator based on the modifiers.\n"},
  {"DollyToPosition", PyvtkPVInteractorStyle_DollyToPosition, METH_VARARGS,
   "V.DollyToPosition(float, [int, ...], vtkRenderer)\nC++: static void DollyToPosition(double fact, int *position,\n    vtkRenderer *renderer)\n\nDolly the renderer's camera to a specific point\n"},
  {"TranslateCamera", PyvtkPVInteractorStyle_TranslateCamera, METH_VARARGS,
   "V.TranslateCamera(vtkRenderer, int, int, int, int)\nC++: static void TranslateCamera(vtkRenderer *renderer, int toX,\n    int toY, int fromX, int fromY)\n\nTranslate the renderer's camera\n"},
  {"Dolly", PyvtkPVInteractorStyle_Dolly, METH_VARARGS,
   "V.Dolly()\nC++: void Dolly() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVInteractorStyle", // tp_name
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
  PyvtkPVInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVInteractorStyle_StaticNew()
{
  return vtkPVInteractorStyle::New();
}

PyObject *PyvtkPVInteractorStyle_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVInteractorStyle_Type, PyvtkPVInteractorStyle_Methods,
    "vtkPVInteractorStyle",
 &PyvtkPVInteractorStyle_StaticNew);

  PyTypeObject *pytype = &PyvtkPVInteractorStyle_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

