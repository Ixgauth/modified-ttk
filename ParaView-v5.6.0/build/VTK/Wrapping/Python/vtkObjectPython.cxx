// python wrapper for vtkObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkPythonCommand.h"
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkObject_ClassNew(); }

#ifndef DECLARED_PyvtkObjectBase_ClassNew
extern "C" { PyObject *PyvtkObjectBase_ClassNew(); }
#define DECLARED_PyvtkObjectBase_ClassNew
#endif

static const char *PyvtkObject_Doc =
  "vtkObject - abstract base class for most VTK objects\n\n"
  "Superclass: vtkObjectBase\n\n"
  "vtkObject is the base class for most objects in the visualization\n"
  "toolkit. vtkObject provides methods for tracking modification time,\n"
  "debugging, printing, and event callbacks. Most objects created within\n"
  "the VTK framework should be a subclass of vtkObject or one of its\n"
  "children.  The few exceptions tend to be very small helper classes\n"
  "that usually never get instantiated or situations where multiple\n"
  "inheritance gets in the way.  vtkObject also performs reference\n"
  "counting: objects that are reference counted exist as long as another\n"
  "object uses them. Once the last reference to a reference counted\n"
  "object is removed, the object will spontaneously destruct.\n\n"
  "@warning\n"
  "Note: in VTK objects should always be created with the New() method\n"
  "and deleted with the Delete() method. VTK objects cannot be allocated\n"
  "off the stack (i.e., automatic objects) because the constructor is a\n"
  "protected method.\n\n"
  "@sa\n"
  "vtkCommand vtkTimeStamp\n\n";

static PyObject *
PyvtkObject_AddObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *temp0s = nullptr;
  int temp0i = 0;
  PyObject *temp1 = nullptr;
  float temp2 = 0.0f;
  unsigned long tempr;
  PyObject *result = nullptr;
  int argtype = 0;

  if (op)
  {
    if (ap.CheckArgCount(2,3) &&
        ap.GetValue(temp0i) &&
        ap.GetFunction(temp1) &&
        (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
      argtype = 1;
    }
  }

  if (op && !argtype)
  {
    PyErr_Clear();
    ap.Reset();

    if (ap.CheckArgCount(2,3) &&
        ap.GetValue(temp0s) &&
        ap.GetFunction(temp1) &&
        (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
      argtype = 2;
    }
  }

  if (argtype)
  {
    vtkPythonCommand *cbc = vtkPythonCommand::New();
    cbc->SetObject(temp1);
    cbc->SetThreadState(PyThreadState_Get());

    if (argtype == 1)
    {
      if (ap.IsBound())
      {
        tempr = op->AddObserver(temp0i, cbc, temp2);
      }
      else
      {
        tempr = op->vtkObject::AddObserver(temp0i, cbc, temp2);
      }
    }
    else
    {
      if (ap.IsBound())
      {
        tempr = op->AddObserver(temp0s, cbc, temp2);
      }
      else
      {
        tempr = op->vtkObject::AddObserver(temp0s, cbc, temp2);
      }
    }
    PyVTKObject_AddObserver(self, tempr);

    cbc->Delete();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

// This collection of methods that handle InvokeEvent are
// generated by a special case in vtkWrapPythonMethodDef.c
// The last characters of the method name indicate the type signature
// of the overload they handle: for example, "_zd" indicates that
// the event type is specified by string and the calldata is a double
static PyObject *
PyvtkObject_InvokeEvent_Lz(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long event;
  const char *calldata = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetValue(calldata))
  {
    int tempr = op->InvokeEvent(event, const_cast<char *>(calldata));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_zz(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *event = nullptr;
  const char *calldata = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetValue(calldata))
  {
    int tempr = op->InvokeEvent(event, const_cast<char *>(calldata));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_L(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long event;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(event))
  {
    int tempr = op->InvokeEvent(event);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_z(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *event = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(event))
  {
    int tempr = op->InvokeEvent(event);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_Li(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long event;
  long calldata;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetValue(calldata))
  {
    int tempr = op->InvokeEvent(event, &calldata);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_zi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *event = nullptr;
  long calldata;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetValue(calldata))
  {
    int tempr = op->InvokeEvent(event, &calldata);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_Ld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long event;
  double calldata;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetValue(calldata))
  {
    int tempr = op->InvokeEvent(event, &calldata);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_zd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *event = nullptr;
  double calldata;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetValue(calldata))
  {
    int tempr = op->InvokeEvent(event, &calldata);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_LV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long event;
  vtkObjectBase *calldata = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetVTKObject(calldata, "vtkObject"))
  {
    int tempr = op->InvokeEvent(event, calldata);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyObject *
PyvtkObject_InvokeEvent_zV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *event = nullptr;
  vtkObjectBase *calldata = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(event) &&
      ap.GetVTKObject(calldata, "vtkObject"))
  {
    int tempr = op->InvokeEvent(event, calldata);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }
  return result;
}

static PyMethodDef PyvtkObject_InvokeEvent_Methods[] = {
  {nullptr, PyvtkObject_InvokeEvent_Lz, METH_VARARGS,
   "@Lz"},
  {nullptr, PyvtkObject_InvokeEvent_zz, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkObject_InvokeEvent_L, METH_VARARGS,
   "@L"},
  {nullptr, PyvtkObject_InvokeEvent_z, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkObject_InvokeEvent_Li, METH_VARARGS,
   "@Li"},
  {nullptr, PyvtkObject_InvokeEvent_zi, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkObject_InvokeEvent_Ld, METH_VARARGS,
   "@Ld"},
  {nullptr, PyvtkObject_InvokeEvent_zd, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkObject_InvokeEvent_LV, METH_VARARGS,
   "@LV *vtkObjectBase"},
  {nullptr, PyvtkObject_InvokeEvent_zV, METH_VARARGS,
   "@zV *vtkObjectBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkObject_InvokeEvent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_InvokeEvent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InvokeEvent");
  return nullptr;
}

static PyObject *
PyvtkObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObject *tempr = vtkObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObject::NewInstance());

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
PyvtkObject_DebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugOn();
    }
    else
    {
      op->vtkObject::DebugOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_DebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DebugOff();
    }
    else
    {
      op->vtkObject::DebugOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_GetDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDebug() :
      op->vtkObject::GetDebug());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_SetDebug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebug(temp0);
    }
    else
    {
      op->vtkObject::SetDebug(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_BreakOnError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BreakOnError");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObject::BreakOnError();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkObject::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkObject::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_SetGlobalWarningDisplay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalWarningDisplay");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject::SetGlobalWarningDisplay(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_GlobalWarningDisplayOn(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalWarningDisplayOn");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObject::GlobalWarningDisplayOn();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_GlobalWarningDisplayOff(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalWarningDisplayOff");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObject::GlobalWarningDisplayOff();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObject_GetGlobalWarningDisplay(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalWarningDisplay");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkObject::GetGlobalWarningDisplay();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCommand *tempr = (ap.IsBound() ?
      op->GetCommand(temp0) :
      op->vtkObject::GetCommand(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObject_RemoveObserver_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  vtkCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommand"))
  {
    if (ap.IsBound())
    {
      op->RemoveObserver(temp0);
    }
    else
    {
      op->vtkObject::RemoveObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObject_RemoveObserver_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveObserver(temp0);
    }
    else
    {
      op->vtkObject::RemoveObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObject_RemoveObserver_Methods[] = {
  {nullptr, PyvtkObject_RemoveObserver_s1, METH_VARARGS,
   "@V *vtkCommand"},
  {nullptr, PyvtkObject_RemoveObserver_s2, METH_VARARGS,
   "@L"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkObject_RemoveObserver(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_RemoveObserver_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveObserver");
  return nullptr;
}



static PyObject *
PyvtkObject_RemoveObservers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  vtkCommand *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservers(temp0, temp1);
    }
    else
    {
      op->vtkObject::RemoveObservers(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObject_RemoveObservers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *temp0 = nullptr;
  vtkCommand *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservers(temp0, temp1);
    }
    else
    {
      op->vtkObject::RemoveObservers(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObject_RemoveObservers_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveObservers(temp0);
    }
    else
    {
      op->vtkObject::RemoveObservers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObject_RemoveObservers_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveObservers(temp0);
    }
    else
    {
      op->vtkObject::RemoveObservers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObject_RemoveObservers_Methods[] = {
  {nullptr, PyvtkObject_RemoveObservers_s1, METH_VARARGS,
   "@LV *vtkCommand"},
  {nullptr, PyvtkObject_RemoveObservers_s2, METH_VARARGS,
   "@zV *vtkCommand"},
  {nullptr, PyvtkObject_RemoveObservers_s3, METH_VARARGS,
   "@L"},
  {nullptr, PyvtkObject_RemoveObservers_s4, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkObject_RemoveObservers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_RemoveObservers_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveObservers");
  return nullptr;
}



static PyObject *
PyvtkObject_HasObserver_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  vtkCommand *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
  {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0, temp1) :
      op->vtkObject::HasObserver(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObject_HasObserver_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *temp0 = nullptr;
  vtkCommand *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCommand"))
  {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0, temp1) :
      op->vtkObject::HasObserver(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObject_HasObserver_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0) :
      op->vtkObject::HasObserver(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObject_HasObserver_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasObserver(temp0) :
      op->vtkObject::HasObserver(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkObject_HasObserver_Methods[] = {
  {nullptr, PyvtkObject_HasObserver_s1, METH_VARARGS,
   "@LV *vtkCommand"},
  {nullptr, PyvtkObject_HasObserver_s2, METH_VARARGS,
   "@zV *vtkCommand"},
  {nullptr, PyvtkObject_HasObserver_s3, METH_VARARGS,
   "@L"},
  {nullptr, PyvtkObject_HasObserver_s4, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkObject_HasObserver(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkObject_HasObserver_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasObserver");
  return nullptr;
}



static PyObject *
PyvtkObject_RemoveAllObservers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllObservers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObject *op = static_cast<vtkObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllObservers();
    }
    else
    {
      op->vtkObject::RemoveAllObservers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObject_Methods[] = {
  {"IsTypeOf", PyvtkObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkObject\nC++: static vtkObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkObject\nC++: vtkObject *NewInstance()\n\n"},
  {"DebugOn", PyvtkObject_DebugOn, METH_VARARGS,
   "V.DebugOn()\nC++: virtual void DebugOn()\n\nTurn debugging output on.\n"},
  {"DebugOff", PyvtkObject_DebugOff, METH_VARARGS,
   "V.DebugOff()\nC++: virtual void DebugOff()\n\nTurn debugging output off.\n"},
  {"GetDebug", PyvtkObject_GetDebug, METH_VARARGS,
   "V.GetDebug() -> bool\nC++: bool GetDebug()\n\nGet the value of the debug flag.\n"},
  {"SetDebug", PyvtkObject_SetDebug, METH_VARARGS,
   "V.SetDebug(bool)\nC++: void SetDebug(bool debugFlag)\n\nSet the value of the debug flag. A true value turns debugging on.\n"},
  {"BreakOnError", PyvtkObject_BreakOnError, METH_VARARGS,
   "V.BreakOnError()\nC++: static void BreakOnError()\n\nThis method is called when vtkErrorMacro executes. It allows the\ndebugger to break on error.\n"},
  {"Modified", PyvtkObject_Modified, METH_VARARGS,
   "V.Modified()\nC++: virtual void Modified()\n\nUpdate the modification time for this object. Many filters rely\non the modification time to determine if they need to recompute\ntheir data. The modification time is a unique monotonically\nincreasing unsigned long integer.\n"},
  {"GetMTime", PyvtkObject_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: virtual vtkMTimeType GetMTime()\n\nReturn this object's modified time.\n"},
  {"SetGlobalWarningDisplay", PyvtkObject_SetGlobalWarningDisplay, METH_VARARGS,
   "V.SetGlobalWarningDisplay(int)\nC++: static void SetGlobalWarningDisplay(int val)\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {"GlobalWarningDisplayOn", PyvtkObject_GlobalWarningDisplayOn, METH_VARARGS,
   "V.GlobalWarningDisplayOn()\nC++: static void GlobalWarningDisplayOn()\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {"GlobalWarningDisplayOff", PyvtkObject_GlobalWarningDisplayOff, METH_VARARGS,
   "V.GlobalWarningDisplayOff()\nC++: static void GlobalWarningDisplayOff()\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {"GetGlobalWarningDisplay", PyvtkObject_GetGlobalWarningDisplay, METH_VARARGS,
   "V.GetGlobalWarningDisplay() -> int\nC++: static int GetGlobalWarningDisplay()\n\nThis is a global flag that controls whether any debug, warning or\nerror messages are displayed.\n"},
  {"GetCommand", PyvtkObject_GetCommand, METH_VARARGS,
   "V.GetCommand(int) -> vtkCommand\nC++: vtkCommand *GetCommand(unsigned long tag)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {"RemoveObserver", PyvtkObject_RemoveObserver, METH_VARARGS,
   "V.RemoveObserver(vtkCommand)\nC++: void RemoveObserver(vtkCommand *)\nV.RemoveObserver(int)\nC++: void RemoveObserver(unsigned long tag)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {"RemoveObservers", PyvtkObject_RemoveObservers, METH_VARARGS,
   "V.RemoveObservers(int, vtkCommand)\nC++: void RemoveObservers(unsigned long event, vtkCommand *)\nV.RemoveObservers(string, vtkCommand)\nC++: void RemoveObservers(const char *event, vtkCommand *)\nV.RemoveObservers(int)\nC++: void RemoveObservers(unsigned long event)\nV.RemoveObservers(string)\nC++: void RemoveObservers(const char *event)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {"HasObserver", PyvtkObject_HasObserver, METH_VARARGS,
   "V.HasObserver(int, vtkCommand) -> int\nC++: int HasObserver(unsigned long event, vtkCommand *)\nV.HasObserver(string, vtkCommand) -> int\nC++: int HasObserver(const char *event, vtkCommand *)\nV.HasObserver(int) -> int\nC++: int HasObserver(unsigned long event)\nV.HasObserver(string) -> int\nC++: int HasObserver(const char *event)\n\nAllow people to add/remove/invoke observers (callbacks) to any\nVTK object.  This is an implementation of the subject/observer\ndesign pattern. An observer is added by specifying an event to\nrespond to and a vtkCommand to execute. It returns an unsigned\nlong tag which can be used later to remove the event or retrieve\nthe command. When events are invoked, the observers are called in\nthe order they were added. If a priority value is specified, then\nthe higher priority commands are called first. A command may set\nan abort flag to stop processing of the event. (See vtkCommand.h\nfor more information.)\n"},
  {"RemoveAllObservers", PyvtkObject_RemoveAllObservers, METH_VARARGS,
   "V.RemoveAllObservers()\nC++: void RemoveAllObservers()\n\n"},
  {"AddObserver",  PyvtkObject_AddObserver, 1,
   "V.AddObserver(int, function) -> int\nC++: unsigned long AddObserver(const char *event,\n    vtkCommand *command, float priority=0.0f)\n\nAdd an event callback function(vtkObject, int) for an event type.\nReturns a handle that can be used with RemoveEvent(int)."},
{"InvokeEvent", PyvtkObject_InvokeEvent, METH_VARARGS,
   "V.InvokeEvent(int, void) -> int\nC++: int InvokeEvent(unsigned long event, void *callData)\nV.InvokeEvent(string, void) -> int\nC++: int InvokeEvent(const char *event, void *callData)\nV.InvokeEvent(int) -> int\nC++: int InvokeEvent(unsigned long event)\nV.InvokeEvent(string) -> int\nC++: int InvokeEvent(const char *event)\n\nThis method invokes an event and return whether the event was\naborted or not. If the event was aborted, the return value is 1,\notherwise it is 0."
},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkObject", // tp_name
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
  PyvtkObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObject_StaticNew()
{
  return vtkObject::New();
}

PyObject *PyvtkObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkObject_Type, PyvtkObject_Methods,
    "vtkObject",
 &PyvtkObject_StaticNew);

  PyTypeObject *pytype = &PyvtkObject_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObjectBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObject", o) != 0)
  {
    Py_DECREF(o);
  }

}
