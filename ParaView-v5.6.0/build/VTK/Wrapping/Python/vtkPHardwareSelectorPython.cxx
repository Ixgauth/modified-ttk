// python wrapper for vtkPHardwareSelector
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
#include "vtkPHardwareSelector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPHardwareSelector(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPHardwareSelector_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLHardwareSelector_ClassNew
extern "C" { PyObject *PyvtkOpenGLHardwareSelector_ClassNew(); }
#define DECLARED_PyvtkOpenGLHardwareSelector_ClassNew
#endif

static const char *PyvtkPHardwareSelector_Doc =
  "vtkPHardwareSelector - vtkHardwareSelector useful for parallel\nrendering.\n\n"
  "Superclass: vtkOpenGLHardwareSelector\n\n"
  "vtkPHardwareSelector is a vtkHardwareSelector that is parallel aware.\n"
  "It relies on the fact that the application is going to use some other\n"
  "mechanism to ensure that renders are synchronized among windows on\n"
  "all processes. The synchronization happens from the root node. When\n"
  "the root node renders, all processes render. Only\n"
  "vtkPHardwareSelector instance on the root node triggers the renders.\n"
  "All other processes, simply listen to the StartEvent fired and\n"
  "beginning of the render to ensure that vtkHardwareSelector's\n"
  "CurrentPass is updated appropriately.\n\n";


static PyObject *
PyvtkPHardwareSelector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPHardwareSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPHardwareSelector *tempr = vtkPHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPHardwareSelector::NewInstance());

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
PyvtkPHardwareSelector_SetProcessIsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIsRoot(temp0);
    }
    else
    {
      op->vtkPHardwareSelector::SetProcessIsRoot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_GetProcessIsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessIsRoot() :
      op->vtkPHardwareSelector::GetProcessIsRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_ProcessIsRootOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsRootOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessIsRootOn();
    }
    else
    {
      op->vtkPHardwareSelector::ProcessIsRootOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_ProcessIsRootOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessIsRootOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessIsRootOff();
    }
    else
    {
      op->vtkPHardwareSelector::ProcessIsRootOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPHardwareSelector_CaptureBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPHardwareSelector *op = static_cast<vtkPHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CaptureBuffers() :
      op->vtkPHardwareSelector::CaptureBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPHardwareSelector_Methods[] = {
  {"IsTypeOf", PyvtkPHardwareSelector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPHardwareSelector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPHardwareSelector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPHardwareSelector\nC++: static vtkPHardwareSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPHardwareSelector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPHardwareSelector\nC++: vtkPHardwareSelector *NewInstance()\n\n"},
  {"SetProcessIsRoot", PyvtkPHardwareSelector_SetProcessIsRoot, METH_VARARGS,
   "V.SetProcessIsRoot(bool)\nC++: virtual void SetProcessIsRoot(bool _arg)\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {"GetProcessIsRoot", PyvtkPHardwareSelector_GetProcessIsRoot, METH_VARARGS,
   "V.GetProcessIsRoot() -> bool\nC++: virtual bool GetProcessIsRoot()\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {"ProcessIsRootOn", PyvtkPHardwareSelector_ProcessIsRootOn, METH_VARARGS,
   "V.ProcessIsRootOn()\nC++: virtual void ProcessIsRootOn()\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {"ProcessIsRootOff", PyvtkPHardwareSelector_ProcessIsRootOff, METH_VARARGS,
   "V.ProcessIsRootOff()\nC++: virtual void ProcessIsRootOff()\n\nSet/Get the is the root process. The root processes is the only\nprocesses which has the composited result and hence the only\nprocesses that capture buffers and builds selected list ids.\n"},
  {"CaptureBuffers", PyvtkPHardwareSelector_CaptureBuffers, METH_VARARGS,
   "V.CaptureBuffers() -> bool\nC++: bool CaptureBuffers() override;\n\nOverridden to only allow the superclass implementation on the\nroot node. On all other processes, the updating the internal\nstate of the vtkHardwareSelector as the capturing of buffers\nprogresses is done as a slave to the master render.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPHardwareSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkPHardwareSelector", // tp_name
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
  PyvtkPHardwareSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPHardwareSelector_StaticNew()
{
  return vtkPHardwareSelector::New();
}

PyObject *PyvtkPHardwareSelector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPHardwareSelector_Type, PyvtkPHardwareSelector_Methods,
    "vtkPHardwareSelector",
 &PyvtkPHardwareSelector_StaticNew);

  PyTypeObject *pytype = &PyvtkPHardwareSelector_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLHardwareSelector_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPHardwareSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPHardwareSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPHardwareSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

