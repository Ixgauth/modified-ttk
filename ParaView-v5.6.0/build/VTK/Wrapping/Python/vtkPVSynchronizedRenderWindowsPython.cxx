// python wrapper for vtkPVSynchronizedRenderWindows
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
#include "vtkMultiProcessStream.h"
#include "vtkPVSynchronizedRenderWindows.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSynchronizedRenderWindows(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSynchronizedRenderWindows_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVSynchronizedRenderWindows_Doc =
  "vtkPVSynchronizedRenderWindows - synchronizes render-windows among\nprocesses in ParaView configurations.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVSynchronizedRenderWindows is the class used to synchronize\n"
  "render windows in ParaView. This class can be instantiated on all\n"
  "processes in all modes, it automatically discovers the configuration\n"
  "and adapts its behavior accordingly. The role of this class is to set\n"
  "up the render windows on all processes and then synchronize renders.\n"
  "It does not manage compositing or image delivery. All it does is\n"
  "synchronize render windows and their layouts among processes.\n\n"
  "If the application is managing calling of vtkRenderWindow::Render()\n"
  "on all processes, then one should disable RenderEventPropagation\n"
  "flag.\n\n";

static PyTypeObject PyvtkPVSynchronizedRenderWindows_StandardOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVSynchronizedRenderWindows.StandardOperations", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPVSynchronizedRenderWindows_StandardOperations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVSynchronizedRenderWindows_StandardOperations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSynchronizedRenderWindows_StandardOperations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkPVSynchronizedRenderWindows_ModeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVSynchronizedRenderWindows.ModeEnum", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPVSynchronizedRenderWindows_ModeEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVSynchronizedRenderWindows_ModeEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSynchronizedRenderWindows_ModeEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSynchronizedRenderWindows::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSynchronizedRenderWindows::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSynchronizedRenderWindows *tempr = vtkPVSynchronizedRenderWindows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSynchronizedRenderWindows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSynchronizedRenderWindows::NewInstance());

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
PyvtkPVSynchronizedRenderWindows_NewRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->NewRenderWindow() :
      op->vtkPVSynchronizedRenderWindows::NewRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderWindow *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->AddRenderWindow(temp0, temp1);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::AddRenderWindow(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RemoveRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveRenderWindow(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::RemoveRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow(temp0) :
      op->vtkPVSynchronizedRenderWindows::GetRenderWindow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->AddRenderer(temp0, temp1);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::AddRenderer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  double temp2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->AddRenderer(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::AddRenderer(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVSynchronizedRenderWindows_AddRenderer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVSynchronizedRenderWindows_AddRenderer_s1(self, args);
    case 3:
      return PyvtkPVSynchronizedRenderWindows_AddRenderer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddRenderer");
  return nullptr;
}



static PyObject *
PyvtkPVSynchronizedRenderWindows_RemoveAllRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRenderers(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::RemoveAllRenderers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_UpdateRendererViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRendererViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 4;
  double temp2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateRendererViewport(temp0, temp1, temp2) :
      op->vtkPVSynchronizedRenderWindows::UpdateRendererViewport(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetWindowSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::SetWindowSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetWindowPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetWindowPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::SetWindowPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetWindowSize(temp0) :
      op->vtkPVSynchronizedRenderWindows::GetWindowSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetWindowPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetWindowPosition(temp0) :
      op->vtkPVSynchronizedRenderWindows::GetWindowPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVSynchronizedRenderWindows::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderEventPropagation(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::SetRenderEventPropagation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEventPropagation() :
      op->vtkPVSynchronizedRenderWindows::GetRenderEventPropagation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderEventPropagationOn();
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::RenderEventPropagationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderEventPropagationOff();
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::RenderEventPropagationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetLocalProcessIsDriver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessIsDriver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLocalProcessIsDriver() :
      op->vtkPVSynchronizedRenderWindows::GetLocalProcessIsDriver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SynchronizeBounds(temp0) :
      op->vtkPVSynchronizedRenderWindows::SynchronizeBounds(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVSynchronizedRenderWindows::SynchronizeSize(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SynchronizeSize(temp0) :
      op->vtkPVSynchronizedRenderWindows::SynchronizeSize(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSynchronizedRenderWindows_SynchronizeSize_Methods[] = {
  {nullptr, PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s1, METH_VARARGS,
   "@d"},
  {nullptr, PyvtkPVSynchronizedRenderWindows_SynchronizeSize_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVSynchronizedRenderWindows_SynchronizeSize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVSynchronizedRenderWindows_SynchronizeSize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SynchronizeSize");
  return nullptr;
}



static PyObject *
PyvtkPVSynchronizedRenderWindows_BroadcastToDataServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastToDataServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    bool tempr = (ap.IsBound() ?
      op->BroadcastToDataServer(temp0) :
      op->vtkPVSynchronizedRenderWindows::BroadcastToDataServer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_BroadcastToRenderServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastToRenderServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->BroadcastToRenderServer(temp0) :
      op->vtkPVSynchronizedRenderWindows::BroadcastToRenderServer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_Reduce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkIdType temp0;
  typedef vtkPVSynchronizedRenderWindows::StandardOperations temp1_type;
  temp1_type temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkPVSynchronizedRenderWindows.StandardOperations"))
  {
    bool tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1) :
      op->vtkPVSynchronizedRenderWindows::Reduce(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_TriggerRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->TriggerRMI(*temp0, temp1);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::TriggerRMI(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveRMICallback(temp0) :
      op->vtkPVSynchronizedRenderWindows::RemoveRMICallback(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_OnGetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnGetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->OnGetZBufferValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::OnGetZBufferValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetParallelController() :
      op->vtkPVSynchronizedRenderWindows::GetParallelController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetClientServerController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientServerController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetClientServerController() :
      op->vtkPVSynchronizedRenderWindows::GetClientServerController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetClientDataServerController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientDataServerController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetClientDataServerController() :
      op->vtkPVSynchronizedRenderWindows::GetClientDataServerController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetRenderOneViewAtATime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOneViewAtATime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderOneViewAtATime(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::SetRenderOneViewAtATime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetRenderOneViewAtATime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOneViewAtATime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderOneViewAtATime() :
      op->vtkPVSynchronizedRenderWindows::GetRenderOneViewAtATime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOneViewAtATimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderOneViewAtATimeOn();
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::RenderOneViewAtATimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOneViewAtATimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderOneViewAtATimeOff();
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::RenderOneViewAtATimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_BeginRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->BeginRender(temp0);
    }
    else
    {
      op->vtkPVSynchronizedRenderWindows::BeginRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetIsInCave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInCave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsInCave() :
      op->vtkPVSynchronizedRenderWindows::GetIsInCave());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetTileDisplayParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDisplayParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetTileDisplayParameters(temp0, temp1) :
      op->vtkPVSynchronizedRenderWindows::GetTileDisplayParameters(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetIsInTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsInTileDisplay() :
      op->vtkPVSynchronizedRenderWindows::GetIsInTileDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  int temp0;
  int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->GetZbufferDataAtPoint(temp0, temp1, temp2) :
      op->vtkPVSynchronizedRenderWindows::GetZbufferDataAtPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkPVSynchronizedRenderWindows::ModeEnum tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkPVSynchronizedRenderWindows::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkPVSynchronizedRenderWindows_ModeEnum_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSynchronizedRenderWindows *op = static_cast<vtkPVSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkPVSynchronizedRenderWindows::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_SetUseGenericOpenGLRenderWindow(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseGenericOpenGLRenderWindow");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVSynchronizedRenderWindows::SetUseGenericOpenGLRenderWindow(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSynchronizedRenderWindows_GetUseGenericOpenGLRenderWindow(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseGenericOpenGLRenderWindow");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkPVSynchronizedRenderWindows::GetUseGenericOpenGLRenderWindow();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSynchronizedRenderWindows_Methods[] = {
  {"IsTypeOf", PyvtkPVSynchronizedRenderWindows_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSynchronizedRenderWindows_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSynchronizedRenderWindows_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSynchronizedRenderWindows\nC++: static vtkPVSynchronizedRenderWindows *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSynchronizedRenderWindows_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSynchronizedRenderWindows\nC++: vtkPVSynchronizedRenderWindows *NewInstance()\n\n"},
  {"NewRenderWindow", PyvtkPVSynchronizedRenderWindows_NewRenderWindow, METH_VARARGS,
   "V.NewRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *NewRenderWindow()\n\nReturns a render window for use (possibly new).\n"},
  {"AddRenderWindow", PyvtkPVSynchronizedRenderWindows_AddRenderWindow, METH_VARARGS,
   "V.AddRenderWindow(int, vtkRenderWindow)\nC++: virtual void AddRenderWindow(unsigned int id,\n    vtkRenderWindow *)\n\nRegister/UnRegister a window.\n"},
  {"RemoveRenderWindow", PyvtkPVSynchronizedRenderWindows_RemoveRenderWindow, METH_VARARGS,
   "V.RemoveRenderWindow(int)\nC++: virtual void RemoveRenderWindow(unsigned int id)\n\nRegister/UnRegister a window.\n"},
  {"GetRenderWindow", PyvtkPVSynchronizedRenderWindows_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow(int) -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow(unsigned int id)\n\nRegister/UnRegister a window.\n"},
  {"AddRenderer", PyvtkPVSynchronizedRenderWindows_AddRenderer, METH_VARARGS,
   "V.AddRenderer(int, vtkRenderer)\nC++: virtual void AddRenderer(unsigned int id, vtkRenderer *)\nV.AddRenderer(int, vtkRenderer, (float, float, float, float))\nC++: virtual void AddRenderer(unsigned int id, vtkRenderer *,\n    const double viewport[4])\n\nRegister/UnRegister the renderers. One can add multiple renderers\nfor the same id. The id must be same as that specified when\nadding the corresponding render window.\n"},
  {"RemoveAllRenderers", PyvtkPVSynchronizedRenderWindows_RemoveAllRenderers, METH_VARARGS,
   "V.RemoveAllRenderers(int)\nC++: virtual void RemoveAllRenderers(unsigned int id)\n\nRegister/UnRegister the renderers. One can add multiple renderers\nfor the same id. The id must be same as that specified when\nadding the corresponding render window.\n"},
  {"UpdateRendererViewport", PyvtkPVSynchronizedRenderWindows_UpdateRendererViewport, METH_VARARGS,
   "V.UpdateRendererViewport(int, vtkRenderer, (float, float, float,\n    float)) -> bool\nC++: virtual bool UpdateRendererViewport(unsigned int id,\n    vtkRenderer *, const double viewport[4])\n\nRegister/UnRegister the renderers. One can add multiple renderers\nfor the same id. The id must be same as that specified when\nadding the corresponding render window.\n"},
  {"SetWindowSize", PyvtkPVSynchronizedRenderWindows_SetWindowSize, METH_VARARGS,
   "V.SetWindowSize(int, int, int)\nC++: virtual void SetWindowSize(unsigned int id, int width,\n    int height)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {"SetWindowPosition", PyvtkPVSynchronizedRenderWindows_SetWindowPosition, METH_VARARGS,
   "V.SetWindowPosition(int, int, int)\nC++: virtual void SetWindowPosition(unsigned int id, int posx,\n    int posy)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {"GetWindowSize", PyvtkPVSynchronizedRenderWindows_GetWindowSize, METH_VARARGS,
   "V.GetWindowSize(int) -> (int, ...)\nC++: virtual const int *GetWindowSize(unsigned int id)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {"GetWindowPosition", PyvtkPVSynchronizedRenderWindows_GetWindowPosition, METH_VARARGS,
   "V.GetWindowPosition(int) -> (int, ...)\nC++: virtual const int *GetWindowPosition(unsigned int id)\n\nThe views are not supposed to updated the render window position\nor size directly. They should always go through this API to\nupdate the window sizes and positions. This makes it possible to\nprovide a consistent API irrespective of the mode ParaView is\nrunning in. These methods only need to be called on the \"driver\"\nnode. (No harm in calling on all nodes). By driver node, we mean\nthe CLIENT in client-server mode and the root node in batch mode.\n"},
  {"SetEnabled", PyvtkPVSynchronizedRenderWindows_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool _arg)\n\nEnable/Disable parallel rendering.\n"},
  {"GetEnabled", PyvtkPVSynchronizedRenderWindows_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nEnable/Disable parallel rendering.\n"},
  {"EnabledOn", PyvtkPVSynchronizedRenderWindows_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nEnable/Disable parallel rendering.\n"},
  {"EnabledOff", PyvtkPVSynchronizedRenderWindows_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nEnable/Disable parallel rendering.\n"},
  {"SetRenderEventPropagation", PyvtkPVSynchronizedRenderWindows_SetRenderEventPropagation, METH_VARARGS,
   "V.SetRenderEventPropagation(bool)\nC++: virtual void SetRenderEventPropagation(bool _arg)\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {"GetRenderEventPropagation", PyvtkPVSynchronizedRenderWindows_GetRenderEventPropagation, METH_VARARGS,
   "V.GetRenderEventPropagation() -> bool\nC++: virtual bool GetRenderEventPropagation()\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {"RenderEventPropagationOn", PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOn, METH_VARARGS,
   "V.RenderEventPropagationOn()\nC++: virtual void RenderEventPropagationOn()\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {"RenderEventPropagationOff", PyvtkPVSynchronizedRenderWindows_RenderEventPropagationOff, METH_VARARGS,
   "V.RenderEventPropagationOff()\nC++: virtual void RenderEventPropagationOff()\n\nEnable/Disable propagation of the render event. This is typically\ntrue, unless the application is managing calling Render() on all\nprocesses involved.\n"},
  {"GetLocalProcessIsDriver", PyvtkPVSynchronizedRenderWindows_GetLocalProcessIsDriver, METH_VARARGS,
   "V.GetLocalProcessIsDriver() -> bool\nC++: bool GetLocalProcessIsDriver()\n\nThis method returns true if the local process is the 'driver'\nprocess. In client-server configurations, client is the driver.\nIn batch configurations, root-node is the driver. In built-in\nmode, this always returns true.\n"},
  {"SynchronizeBounds", PyvtkPVSynchronizedRenderWindows_SynchronizeBounds, METH_VARARGS,
   "V.SynchronizeBounds([float, float, float, float, float, float])\n    -> bool\nC++: bool SynchronizeBounds(double bounds[6])\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {"SynchronizeSize", PyvtkPVSynchronizedRenderWindows_SynchronizeSize, METH_VARARGS,
   "V.SynchronizeSize(float) -> bool\nC++: bool SynchronizeSize(double &size)\nV.SynchronizeSize(int) -> bool\nC++: bool SynchronizeSize(unsigned int &size)\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {"BroadcastToDataServer", PyvtkPVSynchronizedRenderWindows_BroadcastToDataServer, METH_VARARGS,
   "V.BroadcastToDataServer(vtkSelection) -> bool\nC++: bool BroadcastToDataServer(vtkSelection *selection)\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {"BroadcastToRenderServer", PyvtkPVSynchronizedRenderWindows_BroadcastToRenderServer, METH_VARARGS,
   "V.BroadcastToRenderServer(vtkDataObject) -> bool\nC++: bool BroadcastToRenderServer(vtkDataObject *)\n\nvtkPVSynchronizedRenderWindows encapsulates a whole lot of logic\nfor communication between processes. Given the ton of information\nthis class keeps, it can easily aid vtkViews to synchronize\ninformation such as bounds/ data-size among all processes\nefficiently. This can be achieved by using these methods. Note\nthat these methods should be called on all processes at the same\ntime otherwise we will have deadlocks. We may make this API\ngeneric in future, for now this works.\n"},
  {"Reduce", PyvtkPVSynchronizedRenderWindows_Reduce, METH_VARARGS,
   "V.Reduce(int, StandardOperations) -> bool\nC++: bool Reduce(vtkIdType &value, StandardOperations operation)\n\n"},
  {"TriggerRMI", PyvtkPVSynchronizedRenderWindows_TriggerRMI, METH_VARARGS,
   "V.TriggerRMI(vtkMultiProcessStream, int)\nC++: void TriggerRMI(vtkMultiProcessStream &stream, int tag)\n\nConvenience method to trigger an RMI call from the client/root\nnode.\n"},
  {"RemoveRMICallback", PyvtkPVSynchronizedRenderWindows_RemoveRMICallback, METH_VARARGS,
   "V.RemoveRMICallback(int) -> bool\nC++: bool RemoveRMICallback(unsigned long id)\n\nConvenience method to trigger an RMI call from the client/root\nnode.\n"},
  {"Render", PyvtkPVSynchronizedRenderWindows_Render, METH_VARARGS,
   "V.Render(int)\nC++: void Render(unsigned int)\n\n"},
  {"OnGetZBufferValue", PyvtkPVSynchronizedRenderWindows_OnGetZBufferValue, METH_VARARGS,
   "V.OnGetZBufferValue(int, int, int)\nC++: void OnGetZBufferValue(unsigned int, int, int)\n\n"},
  {"GetParallelController", PyvtkPVSynchronizedRenderWindows_GetParallelController, METH_VARARGS,
   "V.GetParallelController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetParallelController()\n\n"},
  {"GetClientServerController", PyvtkPVSynchronizedRenderWindows_GetClientServerController, METH_VARARGS,
   "V.GetClientServerController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetClientServerController(\n    )\n\n"},
  {"GetClientDataServerController", PyvtkPVSynchronizedRenderWindows_GetClientDataServerController, METH_VARARGS,
   "V.GetClientDataServerController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetClientDataServerController(\n    )\n\n"},
  {"SetRenderOneViewAtATime", PyvtkPVSynchronizedRenderWindows_SetRenderOneViewAtATime, METH_VARARGS,
   "V.SetRenderOneViewAtATime(bool)\nC++: virtual void SetRenderOneViewAtATime(bool _arg)\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {"GetRenderOneViewAtATime", PyvtkPVSynchronizedRenderWindows_GetRenderOneViewAtATime, METH_VARARGS,
   "V.GetRenderOneViewAtATime() -> bool\nC++: virtual bool GetRenderOneViewAtATime()\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {"RenderOneViewAtATimeOn", PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOn, METH_VARARGS,
   "V.RenderOneViewAtATimeOn()\nC++: virtual void RenderOneViewAtATimeOn()\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {"RenderOneViewAtATimeOff", PyvtkPVSynchronizedRenderWindows_RenderOneViewAtATimeOff, METH_VARARGS,
   "V.RenderOneViewAtATimeOff()\nC++: virtual void RenderOneViewAtATimeOff()\n\nBy default, this class uses the same render window for all views\non the server processes and then arranges the renderers by\nadjusting their viewports. However, this does not work well when\ndoing image capture with magnification. In those cases, you can\nforce this class to simply render the active view as the sole\nview in the window on the server side by setting this flag to\ntrue.\n"},
  {"BeginRender", PyvtkPVSynchronizedRenderWindows_BeginRender, METH_VARARGS,
   "V.BeginRender(int)\nC++: void BeginRender(unsigned int id)\n\nCalled before starting render. This is needed in batch mode since\nall views share the same render window.\n"},
  {"GetIsInCave", PyvtkPVSynchronizedRenderWindows_GetIsInCave, METH_VARARGS,
   "V.GetIsInCave() -> bool\nC++: bool GetIsInCave()\n\nReturns true when in Cave mode.\n"},
  {"GetTileDisplayParameters", PyvtkPVSynchronizedRenderWindows_GetTileDisplayParameters, METH_VARARGS,
   "V.GetTileDisplayParameters([int, int], [int, int]) -> bool\nC++: bool GetTileDisplayParameters(int tile_dims[2],\n    int tile_mullions[2])\n\nThis method should only be called on RENDER_SERVER or BATCH\nprocesses. Returns true if in tile display mode and fills up\ntile_dims with the tile dimensions.\n"},
  {"GetIsInTileDisplay", PyvtkPVSynchronizedRenderWindows_GetIsInTileDisplay, METH_VARARGS,
   "V.GetIsInTileDisplay() -> bool\nC++: bool GetIsInTileDisplay()\n\nReturns true if in tile display mode.\n"},
  {"GetZbufferDataAtPoint", PyvtkPVSynchronizedRenderWindows_GetZbufferDataAtPoint, METH_VARARGS,
   "V.GetZbufferDataAtPoint(int, int, int) -> float\nC++: double GetZbufferDataAtPoint(int x, int y, unsigned int id)\n\nReturns the z-buffer value at the given location. id is the view\nid used in AddRenderWindow()/AddRenderer() etc.\n\note CallOnClientOnly\n"},
  {"GetMode", PyvtkPVSynchronizedRenderWindows_GetMode, METH_VARARGS,
   "V.GetMode() -> ModeEnum\nC++: ModeEnum GetMode()\n\nStreaming uses this class as a conduit for messaging. Need mode\nto use it correctly.\n"},
  {"GetSession", PyvtkPVSynchronizedRenderWindows_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkPVSession\nC++: vtkPVSession *GetSession()\n\nProvides access to the session.\n"},
  {"SetUseGenericOpenGLRenderWindow", PyvtkPVSynchronizedRenderWindows_SetUseGenericOpenGLRenderWindow, METH_VARARGS,
   "V.SetUseGenericOpenGLRenderWindow(bool)\nC++: static void SetUseGenericOpenGLRenderWindow(bool val)\n\nUse this to indicate that the process should use\nvtkGenericOpenGLRenderWindow rather than vtkRenderWindow in\nNewRenderWindow.\n"},
  {"GetUseGenericOpenGLRenderWindow", PyvtkPVSynchronizedRenderWindows_GetUseGenericOpenGLRenderWindow, METH_VARARGS,
   "V.GetUseGenericOpenGLRenderWindow() -> bool\nC++: static bool GetUseGenericOpenGLRenderWindow()\n\nUse this to indicate that the process should use\nvtkGenericOpenGLRenderWindow rather than vtkRenderWindow in\nNewRenderWindow.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSynchronizedRenderWindows_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVSynchronizedRenderWindows", // tp_name
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
  PyvtkPVSynchronizedRenderWindows_Doc, // tp_doc
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

PyObject *PyvtkPVSynchronizedRenderWindows_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSynchronizedRenderWindows_Type, PyvtkPVSynchronizedRenderWindows_Methods,
    "vtkPVSynchronizedRenderWindows",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVSynchronizedRenderWindows_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVSynchronizedRenderWindows_StandardOperations_Type);
  PyvtkPVSynchronizedRenderWindows_StandardOperations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVSynchronizedRenderWindows_StandardOperations_Type);

  o = (PyObject *)&PyvtkPVSynchronizedRenderWindows_StandardOperations_Type;
  if (PyDict_SetItemString(d, "StandardOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPVSynchronizedRenderWindows_ModeEnum_Type);
  PyvtkPVSynchronizedRenderWindows_ModeEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVSynchronizedRenderWindows_ModeEnum_Type);

  o = (PyObject *)&PyvtkPVSynchronizedRenderWindows_ModeEnum_Type;
  if (PyDict_SetItemString(d, "ModeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPVSynchronizedRenderWindows::StandardOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MAX_OP", vtkPVSynchronizedRenderWindows::MAX_OP },
        { "MIN_OP", vtkPVSynchronizedRenderWindows::MIN_OP },
        { "SUM_OP", vtkPVSynchronizedRenderWindows::SUM_OP },
      };

    o = PyvtkPVSynchronizedRenderWindows_StandardOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SYNC_MULTI_RENDER_WINDOW_TAG", vtkPVSynchronizedRenderWindows::SYNC_MULTI_RENDER_WINDOW_TAG },
        { "GET_ZBUFFER_VALUE_TAG", vtkPVSynchronizedRenderWindows::GET_ZBUFFER_VALUE_TAG },
        { "SYNC_TILE_DISPLAY_PARAMATERS", vtkPVSynchronizedRenderWindows::SYNC_TILE_DISPLAY_PARAMATERS },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkPVSynchronizedRenderWindows::ModeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "INVALID", vtkPVSynchronizedRenderWindows::INVALID },
        { "BUILTIN", vtkPVSynchronizedRenderWindows::BUILTIN },
        { "CLIENT", vtkPVSynchronizedRenderWindows::CLIENT },
        { "RENDER_SERVER", vtkPVSynchronizedRenderWindows::RENDER_SERVER },
        { "DATA_SERVER", vtkPVSynchronizedRenderWindows::DATA_SERVER },
        { "BATCH", vtkPVSynchronizedRenderWindows::BATCH },
      };

    o = PyvtkPVSynchronizedRenderWindows_ModeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVSynchronizedRenderWindows(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSynchronizedRenderWindows_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSynchronizedRenderWindows", o) != 0)
  {
    Py_DECREF(o);
  }

}

