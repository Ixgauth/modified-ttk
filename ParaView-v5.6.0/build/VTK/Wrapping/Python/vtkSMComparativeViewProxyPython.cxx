// python wrapper for vtkSMComparativeViewProxy
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
#include "vtkSMComparativeViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMComparativeViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMComparativeViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMViewProxy_ClassNew
#endif

static const char *PyvtkSMComparativeViewProxy_Doc =
  "vtkSMComparativeViewProxy - view for comparative visualization/\nfilm-strips.\n\n"
  "Superclass: vtkSMViewProxy\n\n"
  "vtkSMComparativeViewProxy is the view used to generate/view\n"
  "comparative visualizations/film-strips. vtkSMComparativeViewProxy\n"
  "works together with vtkPVComparativeView -- the vtk-object for which\n"
  "this represents the proxy. vtkPVComparativeView is a client-side VTK\n"
  "object which literally uses the view and representation proxies to\n"
  "simulate the comparative view. Refer to vtkPVComparativeView for\n"
  "details.\n\n";


static PyObject *
PyvtkSMComparativeViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMComparativeViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMComparativeViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMComparativeViewProxy *tempr = vtkSMComparativeViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMComparativeViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMComparativeViewProxy::NewInstance());

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
PyvtkSMComparativeViewProxy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkSMComparativeViewProxy::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetViews(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViews");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetViews(temp0);
    }
    else
    {
      op->vtkSMComparativeViewProxy::GetViews(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRootView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetRootView() :
      op->vtkSMComparativeViewProxy::GetRootView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->MarkDirty(temp0);
    }
    else
    {
      op->vtkSMComparativeViewProxy::MarkDirty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMComparativeViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMComparativeViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMComparativeViewProxy::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

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
      op->vtkSMComparativeViewProxy::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMComparativeViewProxy_MakeRenderWindowInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindowInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMComparativeViewProxy *op = static_cast<vtkSMComparativeViewProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->MakeRenderWindowInteractor(temp0) :
      op->vtkSMComparativeViewProxy::MakeRenderWindowInteractor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMComparativeViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMComparativeViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMComparativeViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMComparativeViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMComparativeViewProxy\nC++: static vtkSMComparativeViewProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMComparativeViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMComparativeViewProxy\nC++: vtkSMComparativeViewProxy *NewInstance()\n\n"},
  {"Update", PyvtkSMComparativeViewProxy_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nUpdates the data pipelines for all visible representations.\n"},
  {"GetViews", PyvtkSMComparativeViewProxy_GetViews, METH_VARARGS,
   "V.GetViews(vtkCollection)\nC++: void GetViews(vtkCollection *collection)\n\nGet all the internal views. The views should only be used to be\nlaid out by the GUI. It's not recommended to directly change the\nproperties of the views.\n"},
  {"GetRootView", PyvtkSMComparativeViewProxy_GetRootView, METH_VARARGS,
   "V.GetRootView() -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetRootView()\n\nReturns the root view proxy.\n"},
  {"MarkDirty", PyvtkSMComparativeViewProxy_MarkDirty, METH_VARARGS,
   "V.MarkDirty(vtkSMProxy)\nC++: void MarkDirty(vtkSMProxy *modifiedProxy) override;\n\nDirty means this algorithm will execute during next update. This\nall marks all consumers as dirty.\n"},
  {"GetRepresentationType", PyvtkSMComparativeViewProxy_GetRepresentationType, METH_VARARGS,
   "V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: const char *GetRepresentationType(vtkSMSourceProxy *producer,\n     int outputPort) override;\n\nOverridden to forward the call to the internal root view proxy.\n"},
  {"GetRenderWindow", PyvtkSMComparativeViewProxy_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow() override;\n\nReturns the render-window used by the root view, if any.\n"},
  {"GetInteractor", PyvtkSMComparativeViewProxy_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor() override;\n\nReturns the interactor. Note, that views may not use\nvtkRenderWindow at all in which case they will not have any\ninteractor and will return NULL. Default implementation returns\nNULL.\n"},
  {"SetupInteractor", PyvtkSMComparativeViewProxy_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *iren)\n    override;\n\nTo avoid misuse of this method for comparative views, this method\nwill raise an error. Client code should set up interactor for\neach of the internal views explicitly.\n"},
  {"MakeRenderWindowInteractor", PyvtkSMComparativeViewProxy_MakeRenderWindowInteractor, METH_VARARGS,
   "V.MakeRenderWindowInteractor(bool) -> bool\nC++: bool MakeRenderWindowInteractor(bool quiet=false) override;\n\nOverridden to call MakeRenderWindowInteractor() on each of the\ninternal views.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMComparativeViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMComparativeViewProxy", // tp_name
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
  PyvtkSMComparativeViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMComparativeViewProxy_StaticNew()
{
  return vtkSMComparativeViewProxy::New();
}

PyObject *PyvtkSMComparativeViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMComparativeViewProxy_Type, PyvtkSMComparativeViewProxy_Methods,
    "vtkSMComparativeViewProxy",
 &PyvtkSMComparativeViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMComparativeViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMViewProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMComparativeViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMComparativeViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMComparativeViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

