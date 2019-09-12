// python wrapper for vtkCameraManipulator
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
#include "vtkCameraManipulator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraManipulator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCameraManipulator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCameraManipulator_Doc =
  "vtkCameraManipulator - Abstraction of style away from button.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCameraManipulator is a superclass foractions inside an interactor\n"
  "style and associated with a single button. An example might be\n"
  "rubber-band bounding-box zoom. This abstraction allows a camera\n"
  "manipulator to be assigned to any button.  This super class might\n"
  "become a subclass of vtkInteractorObserver in the future.\n\n";


static PyObject *
PyvtkCameraManipulator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraManipulator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraManipulator *tempr = vtkCameraManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraManipulator::NewInstance());

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
PyvtkCameraManipulator_StartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartInteraction();
    }
    else
    {
      op->vtkCameraManipulator::StartInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_EndInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndInteraction();
    }
    else
    {
      op->vtkCameraManipulator::EndInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = nullptr;
  vtkRenderWindowInteractor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCameraManipulator::OnMouseMove(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = nullptr;
  vtkRenderWindowInteractor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnButtonDown(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCameraManipulator::OnButtonDown(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = nullptr;
  vtkRenderWindowInteractor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnButtonUp(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCameraManipulator::OnButtonUp(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnKeyUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnKeyUp(temp0);
    }
    else
    {
      op->vtkCameraManipulator::OnKeyUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_OnKeyDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnKeyDown(temp0);
    }
    else
    {
      op->vtkCameraManipulator::OnKeyDown(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetButton(temp0);
    }
    else
    {
      op->vtkCameraManipulator::SetButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetButton() :
      op->vtkCameraManipulator::GetButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkCameraManipulator::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkCameraManipulator::GetShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ShiftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShiftOn();
    }
    else
    {
      op->vtkCameraManipulator::ShiftOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ShiftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShiftOff();
    }
    else
    {
      op->vtkCameraManipulator::ShiftOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetControl(temp0);
    }
    else
    {
      op->vtkCameraManipulator::SetControl(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControl() :
      op->vtkCameraManipulator::GetControl());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ControlOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ControlOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ControlOn();
    }
    else
    {
      op->vtkCameraManipulator::ControlOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_ControlOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ControlOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ControlOff();
    }
    else
    {
      op->vtkCameraManipulator::ControlOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

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
      op->vtkCameraManipulator::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraManipulator_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

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
      op->vtkCameraManipulator::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraManipulator_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCameraManipulator_SetCenter_s1(self, args);
    case 1:
      return PyvtkCameraManipulator_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkCameraManipulator_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCameraManipulator::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

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
      op->vtkCameraManipulator::SetRotationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetRotationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationFactor() :
      op->vtkCameraManipulator::GetRotationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetManipulatorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManipulatorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManipulatorName(temp0);
    }
    else
    {
      op->vtkCameraManipulator::SetManipulatorName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetManipulatorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManipulatorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetManipulatorName() :
      op->vtkCameraManipulator::GetManipulatorName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_SetGUIHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGUIHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  vtkCameraManipulatorGUIHelper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraManipulatorGUIHelper"))
  {
    if (ap.IsBound())
    {
      op->SetGUIHelper(temp0);
    }
    else
    {
      op->vtkCameraManipulator::SetGUIHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulator_GetGUIHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGUIHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulator *op = static_cast<vtkCameraManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraManipulatorGUIHelper *tempr = (ap.IsBound() ?
      op->GetGUIHelper() :
      op->vtkCameraManipulator::GetGUIHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraManipulator_Methods[] = {
  {"IsTypeOf", PyvtkCameraManipulator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraManipulator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraManipulator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCameraManipulator\nC++: static vtkCameraManipulator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraManipulator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCameraManipulator\nC++: vtkCameraManipulator *NewInstance()\n\n"},
  {"StartInteraction", PyvtkCameraManipulator_StartInteraction, METH_VARARGS,
   "V.StartInteraction()\nC++: virtual void StartInteraction()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"EndInteraction", PyvtkCameraManipulator_EndInteraction, METH_VARARGS,
   "V.EndInteraction()\nC++: virtual void EndInteraction()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMouseMove", PyvtkCameraManipulator_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\n"},
  {"OnButtonDown", PyvtkCameraManipulator_OnButtonDown, METH_VARARGS,
   "V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\n"},
  {"OnButtonUp", PyvtkCameraManipulator_OnButtonUp, METH_VARARGS,
   "V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: virtual void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren)\n\n"},
  {"OnKeyUp", PyvtkCameraManipulator_OnKeyUp, METH_VARARGS,
   "V.OnKeyUp(vtkRenderWindowInteractor)\nC++: virtual void OnKeyUp(vtkRenderWindowInteractor *iren)\n\nThese methods are called on all registered manipulators, not just\nthe active one. Hence, these should just be used to record state\nand not perform any interactions.\n"},
  {"OnKeyDown", PyvtkCameraManipulator_OnKeyDown, METH_VARARGS,
   "V.OnKeyDown(vtkRenderWindowInteractor)\nC++: virtual void OnKeyDown(vtkRenderWindowInteractor *iren)\n\nThese methods are called on all registered manipulators, not just\nthe active one. Hence, these should just be used to record state\nand not perform any interactions.\n"},
  {"SetButton", PyvtkCameraManipulator_SetButton, METH_VARARGS,
   "V.SetButton(int)\nC++: virtual void SetButton(int _arg)\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"GetButton", PyvtkCameraManipulator_GetButton, METH_VARARGS,
   "V.GetButton() -> int\nC++: virtual int GetButton()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"SetShift", PyvtkCameraManipulator_SetShift, METH_VARARGS,
   "V.SetShift(int)\nC++: virtual void SetShift(int _arg)\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"GetShift", PyvtkCameraManipulator_GetShift, METH_VARARGS,
   "V.GetShift() -> int\nC++: virtual int GetShift()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"ShiftOn", PyvtkCameraManipulator_ShiftOn, METH_VARARGS,
   "V.ShiftOn()\nC++: virtual void ShiftOn()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"ShiftOff", PyvtkCameraManipulator_ShiftOff, METH_VARARGS,
   "V.ShiftOff()\nC++: virtual void ShiftOff()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"SetControl", PyvtkCameraManipulator_SetControl, METH_VARARGS,
   "V.SetControl(int)\nC++: virtual void SetControl(int _arg)\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"GetControl", PyvtkCameraManipulator_GetControl, METH_VARARGS,
   "V.GetControl() -> int\nC++: virtual int GetControl()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"ControlOn", PyvtkCameraManipulator_ControlOn, METH_VARARGS,
   "V.ControlOn()\nC++: virtual void ControlOn()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"ControlOff", PyvtkCameraManipulator_ControlOff, METH_VARARGS,
   "V.ControlOff()\nC++: virtual void ControlOff()\n\nThese settings determine which button and modifiers the\nmanipulator responds to. Button can be either 1 (left), 2\n(middle), and 3 right.\n"},
  {"SetCenter", PyvtkCameraManipulator_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkCameraManipulator_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {"SetRotationFactor", PyvtkCameraManipulator_SetRotationFactor, METH_VARARGS,
   "V.SetRotationFactor(float)\nC++: virtual void SetRotationFactor(double _arg)\n\nSet and get the rotation factor.\n"},
  {"GetRotationFactor", PyvtkCameraManipulator_GetRotationFactor, METH_VARARGS,
   "V.GetRotationFactor() -> float\nC++: virtual double GetRotationFactor()\n\nSet and get the rotation factor.\n"},
  {"SetManipulatorName", PyvtkCameraManipulator_SetManipulatorName, METH_VARARGS,
   "V.SetManipulatorName(string)\nC++: virtual void SetManipulatorName(const char *_arg)\n\nSet and get the manipulator name.\n"},
  {"GetManipulatorName", PyvtkCameraManipulator_GetManipulatorName, METH_VARARGS,
   "V.GetManipulatorName() -> string\nC++: virtual char *GetManipulatorName()\n\nSet and get the manipulator name.\n"},
  {"SetGUIHelper", PyvtkCameraManipulator_SetGUIHelper, METH_VARARGS,
   "V.SetGUIHelper(vtkCameraManipulatorGUIHelper)\nC++: void SetGUIHelper(vtkCameraManipulatorGUIHelper *)\n\nGet/Set the GUI helper.\n"},
  {"GetGUIHelper", PyvtkCameraManipulator_GetGUIHelper, METH_VARARGS,
   "V.GetGUIHelper() -> vtkCameraManipulatorGUIHelper\nC++: virtual vtkCameraManipulatorGUIHelper *GetGUIHelper()\n\nGet/Set the GUI helper.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCameraManipulator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCameraManipulator", // tp_name
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
  PyvtkCameraManipulator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraManipulator_StaticNew()
{
  return vtkCameraManipulator::New();
}

PyObject *PyvtkCameraManipulator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCameraManipulator_Type, PyvtkCameraManipulator_Methods,
    "vtkCameraManipulator",
 &PyvtkCameraManipulator_StaticNew);

  PyTypeObject *pytype = &PyvtkCameraManipulator_Type;

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

void PyVTKAddFile_vtkCameraManipulator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraManipulator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraManipulator", o) != 0)
  {
    Py_DECREF(o);
  }

}

