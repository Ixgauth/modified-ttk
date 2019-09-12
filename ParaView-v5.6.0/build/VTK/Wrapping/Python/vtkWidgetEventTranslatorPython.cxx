// python wrapper for vtkWidgetEventTranslator
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
#include "vtkWidgetEventTranslator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetEventTranslator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWidgetEventTranslator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWidgetEventTranslator_Doc =
  "vtkWidgetEventTranslator - map VTK events into widget events\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWidgetEventTranslator maps VTK events (defined on vtkCommand) into\n"
  "widget events (defined in vtkWidgetEvent.h). This class is typically\n"
  "used in combination with vtkWidgetCallbackMapper, which is\n"
  "responsible for translating widget events into method callbacks, and\n"
  "then invoking the callbacks.\n\n"
  "This class can be used to define different mappings of VTK events\n"
  "into the widget events. Thus widgets can be reconfigured to use\n"
  "different event bindings.\n\n"
  "@sa\n"
  "vtkWidgetEvent vtkCommand vtkInteractorObserver\n\n";


static PyObject *
PyvtkWidgetEventTranslator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetEventTranslator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetEventTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetEventTranslator *tempr = vtkWidgetEventTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetEventTranslator::NewInstance());

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
PyvtkWidgetEventTranslator_SetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  unsigned long temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkEvent") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  vtkEventData *temp1 = nullptr;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkEventData") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_SetTranslation_Methods[] = {
  {nullptr, PyvtkWidgetEventTranslator_SetTranslation_s1, METH_VARARGS,
   "@LL"},
  {nullptr, PyvtkWidgetEventTranslator_SetTranslation_s2, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkWidgetEventTranslator_SetTranslation_s4, METH_VARARGS,
   "@VL *vtkEvent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_SetTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkWidgetEventTranslator_SetTranslation_s3(self, args);
    case 3:
      return PyvtkWidgetEventTranslator_SetTranslation_s5(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslation");
  return nullptr;
}



static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  vtkEventData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkEventData"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0, temp1) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEvent"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_GetTranslation_Methods[] = {
  {nullptr, PyvtkWidgetEventTranslator_GetTranslation_s1, METH_VARARGS,
   "@L"},
  {nullptr, PyvtkWidgetEventTranslator_GetTranslation_s2, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkWidgetEventTranslator_GetTranslation_s5, METH_VARARGS,
   "@V *vtkEvent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_GetTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkWidgetEventTranslator_GetTranslation_s3(self, args);
    case 2:
      return PyvtkWidgetEventTranslator_GetTranslation_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTranslation");
  return nullptr;
}



static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEvent"))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_RemoveTranslation_Methods[] = {
  {nullptr, PyvtkWidgetEventTranslator_RemoveTranslation_s2, METH_VARARGS,
   "@V *vtkEvent"},
  {nullptr, PyvtkWidgetEventTranslator_RemoveTranslation_s3, METH_VARARGS,
   "@V *vtkEventData"},
  {nullptr, PyvtkWidgetEventTranslator_RemoveTranslation_s4, METH_VARARGS,
   "@L"},
  {nullptr, PyvtkWidgetEventTranslator_RemoveTranslation_s5, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_RemoveTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkWidgetEventTranslator_RemoveTranslation_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTranslation");
  return nullptr;
}



static PyObject *
PyvtkWidgetEventTranslator_ClearEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearEvents();
    }
    else
    {
      op->vtkWidgetEventTranslator::ClearEvents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_AddEventsToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEventsToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  vtkCallbackCommand *temp1 = nullptr;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget") &&
      ap.GetVTKObject(temp1, "vtkCallbackCommand") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddEventsToParent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWidgetEventTranslator::AddEventsToParent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_AddEventsToInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEventsToInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkCallbackCommand *temp1 = nullptr;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkCallbackCommand") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddEventsToInteractor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWidgetEventTranslator::AddEventsToInteractor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_Methods[] = {
  {"IsTypeOf", PyvtkWidgetEventTranslator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkWidgetEventTranslator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkWidgetEventTranslator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWidgetEventTranslator\nC++: static vtkWidgetEventTranslator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkWidgetEventTranslator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *NewInstance()\n\nStandard macros.\n"},
  {"SetTranslation", PyvtkWidgetEventTranslator_SetTranslation, METH_VARARGS,
   "V.SetTranslation(int, int)\nC++: void SetTranslation(unsigned long VTKEvent,\n    unsigned long widgetEvent)\nV.SetTranslation(string, string)\nC++: void SetTranslation(const char *VTKEvent,\n    const char *widgetEvent)\nV.SetTranslation(int, int, char, int, string, int)\nC++: void SetTranslation(unsigned long VTKEvent, int modifier,\n    char keyCode, int repeatCount, const char *keySym,\n    unsigned long widgetEvent)\nV.SetTranslation(vtkEvent, int)\nC++: void SetTranslation(vtkEvent *VTKevent,\n    unsigned long widgetEvent)\nV.SetTranslation(int, vtkEventData, int)\nC++: void SetTranslation(unsigned long VTKEvent,\n    vtkEventData *edata, unsigned long widgetEvent)\n\nUse these methods to create the translation from a VTK event to a\nwidget event. Specifying vtkWidgetEvent::NoEvent or an empty\nstring for the (toEvent) erases the mapping for the event.\n"},
  {"GetTranslation", PyvtkWidgetEventTranslator_GetTranslation, METH_VARARGS,
   "V.GetTranslation(int) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent)\nV.GetTranslation(string) -> string\nC++: const char *GetTranslation(const char *VTKEvent)\nV.GetTranslation(int, int, char, int, string) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent,\n    int modifier, char keyCode, int repeatCount,\n    const char *keySym)\nV.GetTranslation(int, vtkEventData) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent,\n    vtkEventData *edata)\nV.GetTranslation(vtkEvent) -> int\nC++: unsigned long GetTranslation(vtkEvent *VTKEvent)\n\nTranslate a VTK event into a widget event. If no event mapping is\nfound, then the methods return vtkWidgetEvent::NoEvent or a\nnullptr string.\n"},
  {"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation, METH_VARARGS,
   "V.RemoveTranslation(int, int, char, int, string) -> int\nC++: int RemoveTranslation(unsigned long VTKEvent, int modifier,\n    char keyCode, int repeatCount, const char *keySym)\nV.RemoveTranslation(vtkEvent) -> int\nC++: int RemoveTranslation(vtkEvent *e)\nV.RemoveTranslation(vtkEventData) -> int\nC++: int RemoveTranslation(vtkEventData *e)\nV.RemoveTranslation(int) -> int\nC++: int RemoveTranslation(unsigned long VTKEvent)\nV.RemoveTranslation(string) -> int\nC++: int RemoveTranslation(const char *VTKEvent)\n\nRemove translations for a binding. Returns the number of\ntranslations removed.\n"},
  {"ClearEvents", PyvtkWidgetEventTranslator_ClearEvents, METH_VARARGS,
   "V.ClearEvents()\nC++: void ClearEvents()\n\nClear all events from the translator (i.e., no events will be\ntranslated).\n"},
  {"AddEventsToParent", PyvtkWidgetEventTranslator_AddEventsToParent, METH_VARARGS,
   "V.AddEventsToParent(vtkAbstractWidget, vtkCallbackCommand, float)\nC++: void AddEventsToParent(vtkAbstractWidget *,\n    vtkCallbackCommand *, float priority)\n\nAdd the events in the current translation table to the\ninteractor.\n"},
  {"AddEventsToInteractor", PyvtkWidgetEventTranslator_AddEventsToInteractor, METH_VARARGS,
   "V.AddEventsToInteractor(vtkRenderWindowInteractor,\n    vtkCallbackCommand, float)\nC++: void AddEventsToInteractor(vtkRenderWindowInteractor *,\n    vtkCallbackCommand *, float priority)\n\nAdd the events in the current translation table to the\ninteractor.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWidgetEventTranslator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkWidgetEventTranslator", // tp_name
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
  PyvtkWidgetEventTranslator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetEventTranslator_StaticNew()
{
  return vtkWidgetEventTranslator::New();
}

PyObject *PyvtkWidgetEventTranslator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWidgetEventTranslator_Type, PyvtkWidgetEventTranslator_Methods,
    "vtkWidgetEventTranslator",
 &PyvtkWidgetEventTranslator_StaticNew);

  PyTypeObject *pytype = &PyvtkWidgetEventTranslator_Type;

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

void PyVTKAddFile_vtkWidgetEventTranslator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetEventTranslator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetEventTranslator", o) != 0)
  {
    Py_DECREF(o);
  }

}

