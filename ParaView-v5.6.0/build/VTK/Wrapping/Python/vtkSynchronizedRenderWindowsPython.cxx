// python wrapper for vtkSynchronizedRenderWindows
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
#include "vtkSynchronizedRenderWindows.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSynchronizedRenderWindows(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSynchronizedRenderWindows_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSynchronizedRenderWindows_Doc =
  "vtkSynchronizedRenderWindows - synchronizes render windows across\nprocesses.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSynchronizedRenderWindows is used to synchronize render windows\n"
  "across processes for parallel rendering.\n\n";


static PyObject *
PyvtkSynchronizedRenderWindows_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSynchronizedRenderWindows::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedRenderWindows::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSynchronizedRenderWindows *tempr = vtkSynchronizedRenderWindows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedRenderWindows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedRenderWindows::NewInstance());

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
PyvtkSynchronizedRenderWindows_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderWindows::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSynchronizedRenderWindows::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetParallelController(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderWindows::SetParallelController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetParallelController() :
      op->vtkSynchronizedRenderWindows::GetParallelController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdentifier(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderWindows::SetIdentifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetIdentifier() :
      op->vtkSynchronizedRenderWindows::GetIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelRendering(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderWindows::SetParallelRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetParallelRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetParallelRendering() :
      op->vtkSynchronizedRenderWindows::GetParallelRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_ParallelRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelRenderingOn();
    }
    else
    {
      op->vtkSynchronizedRenderWindows::ParallelRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_ParallelRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelRenderingOff();
    }
    else
    {
      op->vtkSynchronizedRenderWindows::ParallelRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

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
      op->vtkSynchronizedRenderWindows::SetRenderEventPropagation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetRenderEventPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEventPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEventPropagation() :
      op->vtkSynchronizedRenderWindows::GetRenderEventPropagation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_RenderEventPropagationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderEventPropagationOn();
    }
    else
    {
      op->vtkSynchronizedRenderWindows::RenderEventPropagationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_RenderEventPropagationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderEventPropagationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderEventPropagationOff();
    }
    else
    {
      op->vtkSynchronizedRenderWindows::RenderEventPropagationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_AbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortRender();
    }
    else
    {
      op->vtkSynchronizedRenderWindows::AbortRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_SetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootProcessId(temp0);
    }
    else
    {
      op->vtkSynchronizedRenderWindows::SetRootProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedRenderWindows_GetRootProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedRenderWindows *op = static_cast<vtkSynchronizedRenderWindows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRootProcessId() :
      op->vtkSynchronizedRenderWindows::GetRootProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSynchronizedRenderWindows_Methods[] = {
  {"IsTypeOf", PyvtkSynchronizedRenderWindows_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSynchronizedRenderWindows_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSynchronizedRenderWindows_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSynchronizedRenderWindows\nC++: static vtkSynchronizedRenderWindows *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSynchronizedRenderWindows_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSynchronizedRenderWindows\nC++: vtkSynchronizedRenderWindows *NewInstance()\n\n"},
  {"SetRenderWindow", PyvtkSynchronizedRenderWindows_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *)\n\nSet the render window to be synchronized by this\nvtkSynchronizedRenderWindows instance. A\nvtkSynchronizedRenderWindows can be used to synchronize exactly 1\nvtkRenderWindow on each process.\n"},
  {"GetRenderWindow", PyvtkSynchronizedRenderWindows_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nSet the render window to be synchronized by this\nvtkSynchronizedRenderWindows instance. A\nvtkSynchronizedRenderWindows can be used to synchronize exactly 1\nvtkRenderWindow on each process.\n"},
  {"SetParallelController", PyvtkSynchronizedRenderWindows_SetParallelController, METH_VARARGS,
   "V.SetParallelController(vtkMultiProcessController)\nC++: void SetParallelController(vtkMultiProcessController *)\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {"GetParallelController", PyvtkSynchronizedRenderWindows_GetParallelController, METH_VARARGS,
   "V.GetParallelController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetParallelController()\n\nSet the parallel message communicator. This is used to\ncommunicate among processes.\n"},
  {"SetIdentifier", PyvtkSynchronizedRenderWindows_SetIdentifier, METH_VARARGS,
   "V.SetIdentifier(int)\nC++: void SetIdentifier(unsigned int id)\n\nIt's acceptable to have multiple instances on\nvtkSynchronizedRenderWindows on each processes to synchronize\ndifferent render windows. In that case there's no way to each of\nthe vtkSynchronizedRenderWindows instance to know how they\ncorrespond across processes. To enable that identification, a\nvtkSynchronizedRenderWindows can be assigned a unique id. All\nvtkSynchronizedRenderWindows across different processes that have\nthe same id are \"linked\" together for synchronization. It's\ncritical that the id is set before any rendering happens.\n"},
  {"GetIdentifier", PyvtkSynchronizedRenderWindows_GetIdentifier, METH_VARARGS,
   "V.GetIdentifier() -> int\nC++: virtual unsigned int GetIdentifier()\n\nIt's acceptable to have multiple instances on\nvtkSynchronizedRenderWindows on each processes to synchronize\ndifferent render windows. In that case there's no way to each of\nthe vtkSynchronizedRenderWindows instance to know how they\ncorrespond across processes. To enable that identification, a\nvtkSynchronizedRenderWindows can be assigned a unique id. All\nvtkSynchronizedRenderWindows across different processes that have\nthe same id are \"linked\" together for synchronization. It's\ncritical that the id is set before any rendering happens.\n"},
  {"SetParallelRendering", PyvtkSynchronizedRenderWindows_SetParallelRendering, METH_VARARGS,
   "V.SetParallelRendering(bool)\nC++: virtual void SetParallelRendering(bool _arg)\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {"GetParallelRendering", PyvtkSynchronizedRenderWindows_GetParallelRendering, METH_VARARGS,
   "V.GetParallelRendering() -> bool\nC++: virtual bool GetParallelRendering()\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {"ParallelRenderingOn", PyvtkSynchronizedRenderWindows_ParallelRenderingOn, METH_VARARGS,
   "V.ParallelRenderingOn()\nC++: virtual void ParallelRenderingOn()\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {"ParallelRenderingOff", PyvtkSynchronizedRenderWindows_ParallelRenderingOff, METH_VARARGS,
   "V.ParallelRenderingOff()\nC++: virtual void ParallelRenderingOff()\n\nEnable/Disable parallel rendering. Unless ParallelRendering is\nON, no synchronization of vtkRenderWindow::Render() calls between\nprocesses happens. ON by default.\n"},
  {"SetRenderEventPropagation", PyvtkSynchronizedRenderWindows_SetRenderEventPropagation, METH_VARARGS,
   "V.SetRenderEventPropagation(bool)\nC++: virtual void SetRenderEventPropagation(bool _arg)\n\n"},
  {"GetRenderEventPropagation", PyvtkSynchronizedRenderWindows_GetRenderEventPropagation, METH_VARARGS,
   "V.GetRenderEventPropagation() -> bool\nC++: virtual bool GetRenderEventPropagation()\n\n"},
  {"RenderEventPropagationOn", PyvtkSynchronizedRenderWindows_RenderEventPropagationOn, METH_VARARGS,
   "V.RenderEventPropagationOn()\nC++: virtual void RenderEventPropagationOn()\n\n"},
  {"RenderEventPropagationOff", PyvtkSynchronizedRenderWindows_RenderEventPropagationOff, METH_VARARGS,
   "V.RenderEventPropagationOff()\nC++: virtual void RenderEventPropagationOff()\n\n"},
  {"AbortRender", PyvtkSynchronizedRenderWindows_AbortRender, METH_VARARGS,
   "V.AbortRender()\nC++: virtual void AbortRender()\n\nThis method call be called while a render is in progress to abort\nthe rendering. It should be called on the root node (or client).\n"},
  {"SetRootProcessId", PyvtkSynchronizedRenderWindows_SetRootProcessId, METH_VARARGS,
   "V.SetRootProcessId(int)\nC++: virtual void SetRootProcessId(int _arg)\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {"GetRootProcessId", PyvtkSynchronizedRenderWindows_GetRootProcessId, METH_VARARGS,
   "V.GetRootProcessId() -> int\nC++: virtual int GetRootProcessId()\n\nGet/Set the root-process id. This is required when the\nParallelController is a vtkSocketController. Set to 0 by default\n(which will not work when using a vtkSocketController but will\nwork for vtkMPIController).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSynchronizedRenderWindows_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkSynchronizedRenderWindows", // tp_name
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
  PyvtkSynchronizedRenderWindows_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSynchronizedRenderWindows_StaticNew()
{
  return vtkSynchronizedRenderWindows::New();
}

PyObject *PyvtkSynchronizedRenderWindows_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSynchronizedRenderWindows_Type, PyvtkSynchronizedRenderWindows_Methods,
    "vtkSynchronizedRenderWindows",
 &PyvtkSynchronizedRenderWindows_StaticNew);

  PyTypeObject *pytype = &PyvtkSynchronizedRenderWindows_Type;

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

  o = PyInt_FromLong(vtkSynchronizedRenderWindows::SYNC_RENDER_TAG);
  if (o)
  {
    PyDict_SetItemString(d, "SYNC_RENDER_TAG", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSynchronizedRenderWindows(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSynchronizedRenderWindows_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSynchronizedRenderWindows", o) != 0)
  {
    Py_DECREF(o);
  }

}

