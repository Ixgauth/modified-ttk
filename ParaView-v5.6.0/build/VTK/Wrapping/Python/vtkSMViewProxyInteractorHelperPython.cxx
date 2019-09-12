// python wrapper for vtkSMViewProxyInteractorHelper
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
#include "vtkSMViewProxyInteractorHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMViewProxyInteractorHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMViewProxyInteractorHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMViewProxyInteractorHelper_Doc =
  "vtkSMViewProxyInteractorHelper - helper class that make it easier to\nhook vtkRenderWindowInteractor and vtkSMViewProxy.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSMViewProxyInteractorHelper is a helper class designed to make it\n"
  "easier to hook up vtkRenderWindowInteractor to call methods on a\n"
  "vtkSMViewProxy (or subclass). It's primarily designed to work with\n"
  "vtkSMRenderViewProxy (and subclasses), but it should work with other\n"
  "types of views too.\n\n"
  "To use this helper, the view typically creates a instance for itself\n"
  "as register itself (using\n"
  "vtkSMViewProxyInteractorHelper::SetViewProxy) and then calls\n"
  "vtkSMViewProxyInteractorHelper::SetupInteractor(). This method will\n"
  "initialize the interactor (potentially changing some ivars on the\n"
  "interactor to avoid automatic rendering, using\n"
  "vtkRenderWindowInteractor::EnableRenderOff(), etc.) and setup event\n"
  "observer to monitor interaction.\n\n"
  "vtkSMViewProxyInteractorHelper only using\n"
  "vtkSMViewProxy::StillRender() and vtkSMViewProxy::InteractiveRender()\n"
  "APIs directly. However several properties can be optionally present\n"
  "on the view proxy to dictate this class' behaviour. These are as\n"
  "follows:\n\n"
  "\\li NonInteractiveRenderDelay :- when present provides time in\n"
  "    seconds to\n"
  "delay the StillRender() call after user interaction has ended i.e.\n"
  "vtkRenderWindowInteractor fires the vtkCommand::EndInteractionEvent.\n"
  "If missing, or less than 0.01, the view will immediately render.\n\n"
  "\\li EnableRenderOnInteraction :- when present provides a flag whether\n"
  "the interactor\n"
  "should trigger the render calls (either StillRender or\n"
  "InteractiveRender) as a consequence of interaction. If missing, we\n"
  "treat EnableRender as ON.\n\n";


static PyObject *
PyvtkSMViewProxyInteractorHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewProxyInteractorHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewProxyInteractorHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMViewProxyInteractorHelper *tempr = vtkSMViewProxyInteractorHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxyInteractorHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewProxyInteractorHelper::NewInstance());

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
PyvtkSMViewProxyInteractorHelper_SetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->SetViewProxy(temp0);
    }
    else
    {
      op->vtkSMViewProxyInteractorHelper::SetViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_GetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetViewProxy() :
      op->vtkSMViewProxyInteractorHelper::GetViewProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkSMViewProxyInteractorHelper::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMViewProxyInteractorHelper::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxyInteractorHelper_CleanupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxyInteractorHelper *op = static_cast<vtkSMViewProxyInteractorHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanupInteractor();
    }
    else
    {
      op->vtkSMViewProxyInteractorHelper::CleanupInteractor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMViewProxyInteractorHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMViewProxyInteractorHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMViewProxyInteractorHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMViewProxyInteractorHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMViewProxyInteractorHelper\nC++: static vtkSMViewProxyInteractorHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMViewProxyInteractorHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMViewProxyInteractorHelper\nC++: vtkSMViewProxyInteractorHelper *NewInstance()\n\n"},
  {"SetViewProxy", PyvtkSMViewProxyInteractorHelper_SetViewProxy, METH_VARARGS,
   "V.SetViewProxy(vtkSMViewProxy)\nC++: void SetViewProxy(vtkSMViewProxy *proxy)\n\nSet the view proxy. This is a weak reference i.e. the view\nproxy's reference count will be unchanged by this call.\n"},
  {"GetViewProxy", PyvtkSMViewProxyInteractorHelper_GetViewProxy, METH_VARARGS,
   "V.GetViewProxy() -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetViewProxy()\n\nSet the view proxy. This is a weak reference i.e. the view\nproxy's reference count will be unchanged by this call.\n"},
  {"SetupInteractor", PyvtkSMViewProxyInteractorHelper_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *iren)\n\nSet the interactor to \"help\" the view with. This is a weak\nreference i.e. the interactor's reference count will be unchanged\nby this call.\n"},
  {"GetInteractor", PyvtkSMViewProxyInteractorHelper_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nSet the interactor to \"help\" the view with. This is a weak\nreference i.e. the interactor's reference count will be unchanged\nby this call.\n"},
  {"CleanupInteractor", PyvtkSMViewProxyInteractorHelper_CleanupInteractor, METH_VARARGS,
   "V.CleanupInteractor()\nC++: void CleanupInteractor()\n\nSet the interactor to \"help\" the view with. This is a weak\nreference i.e. the interactor's reference count will be unchanged\nby this call.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMViewProxyInteractorHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMViewProxyInteractorHelper", // tp_name
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
  PyvtkSMViewProxyInteractorHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMViewProxyInteractorHelper_StaticNew()
{
  return vtkSMViewProxyInteractorHelper::New();
}

PyObject *PyvtkSMViewProxyInteractorHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMViewProxyInteractorHelper_Type, PyvtkSMViewProxyInteractorHelper_Methods,
    "vtkSMViewProxyInteractorHelper",
 &PyvtkSMViewProxyInteractorHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMViewProxyInteractorHelper_Type;

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

void PyVTKAddFile_vtkSMViewProxyInteractorHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMViewProxyInteractorHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMViewProxyInteractorHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

