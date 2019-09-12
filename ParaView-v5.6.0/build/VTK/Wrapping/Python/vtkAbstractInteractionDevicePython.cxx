// python wrapper for vtkAbstractInteractionDevice
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
#include "vtkAbstractInteractionDevice.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractInteractionDevice(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractInteractionDevice_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractInteractionDevice_Doc =
  "vtkAbstractInteractionDevice - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkAbstractInteractionDevice_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractInteractionDevice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractInteractionDevice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractInteractionDevice *tempr = vtkAbstractInteractionDevice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractInteractionDevice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractInteractionDevice::NewInstance());

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
PyvtkAbstractInteractionDevice_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Start();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ProcessEvents();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_SetRenderWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  vtkRenderWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWidget"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWidget(temp0);
    }
    else
    {
      op->vtkAbstractInteractionDevice::SetRenderWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_GetRenderWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWidget *tempr = (ap.IsBound() ?
      op->GetRenderWidget() :
      op->vtkAbstractInteractionDevice::GetRenderWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_SetRenderDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  vtkAbstractRenderDevice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractRenderDevice"))
  {
    if (ap.IsBound())
    {
      op->SetRenderDevice(temp0);
    }
    else
    {
      op->vtkAbstractInteractionDevice::SetRenderDevice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_GetRenderDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractRenderDevice *tempr = (ap.IsBound() ?
      op->GetRenderDevice() :
      op->vtkAbstractInteractionDevice::GetRenderDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractInteractionDevice_Methods[] = {
  {"IsTypeOf", PyvtkAbstractInteractionDevice_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractInteractionDevice_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractInteractionDevice_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractInteractionDevice\nC++: static vtkAbstractInteractionDevice *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractInteractionDevice_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractInteractionDevice\nC++: vtkAbstractInteractionDevice *NewInstance()\n\n"},
  {"Initialize", PyvtkAbstractInteractionDevice_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nInitialize the interaction device.\n"},
  {"Start", PyvtkAbstractInteractionDevice_Start, METH_VARARGS,
   "V.Start()\nC++: virtual void Start()\n\nStart the event loop.\n"},
  {"ProcessEvents", PyvtkAbstractInteractionDevice_ProcessEvents, METH_VARARGS,
   "V.ProcessEvents()\nC++: virtual void ProcessEvents()\n\nProcess any pending events, this can be used to process OS level\nevents without running a full event loop.\n"},
  {"SetRenderWidget", PyvtkAbstractInteractionDevice_SetRenderWidget, METH_VARARGS,
   "V.SetRenderWidget(vtkRenderWidget)\nC++: void SetRenderWidget(vtkRenderWidget *widget)\n\n"},
  {"GetRenderWidget", PyvtkAbstractInteractionDevice_GetRenderWidget, METH_VARARGS,
   "V.GetRenderWidget() -> vtkRenderWidget\nC++: vtkRenderWidget *GetRenderWidget()\n\n"},
  {"SetRenderDevice", PyvtkAbstractInteractionDevice_SetRenderDevice, METH_VARARGS,
   "V.SetRenderDevice(vtkAbstractRenderDevice)\nC++: void SetRenderDevice(vtkAbstractRenderDevice *device)\n\n"},
  {"GetRenderDevice", PyvtkAbstractInteractionDevice_GetRenderDevice, METH_VARARGS,
   "V.GetRenderDevice() -> vtkAbstractRenderDevice\nC++: vtkAbstractRenderDevice *GetRenderDevice()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractInteractionDevice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractInteractionDevice", // tp_name
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
  PyvtkAbstractInteractionDevice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAbstractInteractionDevice_StaticNew()
{
  return vtkAbstractInteractionDevice::New();
}

PyObject *PyvtkAbstractInteractionDevice_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractInteractionDevice_Type, PyvtkAbstractInteractionDevice_Methods,
    "vtkAbstractInteractionDevice",
 &PyvtkAbstractInteractionDevice_StaticNew);

  PyTypeObject *pytype = &PyvtkAbstractInteractionDevice_Type;

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

void PyVTKAddFile_vtkAbstractInteractionDevice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractInteractionDevice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractInteractionDevice", o) != 0)
  {
    Py_DECREF(o);
  }

}

