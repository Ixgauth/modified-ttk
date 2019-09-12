// python wrapper for vtkSMContextViewProxy
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
#include "vtkSMContextViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMContextViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMContextViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMViewProxy_ClassNew
#endif

static const char *PyvtkSMContextViewProxy_Doc =
  "vtkSMContextViewProxy - abstract base class for all Chart Views.\n\n"
  "Superclass: vtkSMViewProxy\n\n"
  "vtkSMContextViewProxy is an abstract base class for all\n"
  "vtkContextView subclasses.\n\n";


static PyObject *
PyvtkSMContextViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMContextViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMContextViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMContextViewProxy *tempr = vtkSMContextViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMContextViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMContextViewProxy::NewInstance());

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
PyvtkSMContextViewProxy_GetContextView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextView *tempr = (ap.IsBound() ?
      op->GetContextView() :
      op->vtkSMContextViewProxy::GetContextView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkSMContextViewProxy::GetContextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMContextViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

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
      op->vtkSMContextViewProxy::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMContextViewProxy::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_ResetDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetDisplay();
    }
    else
    {
      op->vtkSMContextViewProxy::ResetDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_CanDisplayData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanDisplayData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanDisplayData(temp0, temp1) :
      op->vtkSMContextViewProxy::CanDisplayData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMContextViewProxy_GetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMContextViewProxy *op = static_cast<vtkSMContextViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetCurrentSelection() :
      op->vtkSMContextViewProxy::GetCurrentSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMContextViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMContextViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMContextViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMContextViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMContextViewProxy\nC++: static vtkSMContextViewProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMContextViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMContextViewProxy\nC++: vtkSMContextViewProxy *NewInstance()\n\n"},
  {"GetContextView", PyvtkSMContextViewProxy_GetContextView, METH_VARARGS,
   "V.GetContextView() -> vtkContextView\nC++: vtkContextView *GetContextView()\n\nProvides access to the vtk chart view.\n"},
  {"GetContextItem", PyvtkSMContextViewProxy_GetContextItem, METH_VARARGS,
   "V.GetContextItem() -> vtkAbstractContextItem\nC++: virtual vtkAbstractContextItem *GetContextItem()\n\nProvides access to the vtk chart.\n"},
  {"GetRenderWindow", PyvtkSMContextViewProxy_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow() override;\n\nReturn the render window from which offscreen rendering and\ninteractor can be accessed\n"},
  {"SetupInteractor", PyvtkSMContextViewProxy_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: void SetupInteractor(vtkRenderWindowInteractor *iren)\n    override;\n\nA client process need to set the interactor to enable\ninteractivity. Use this method to set the interactor and\ninitialize it as needed by the RenderView. This include changing\nthe interactor style as well as overriding VTK rendering to use\nthe Proxy/ViewProxy API instead.\n"},
  {"GetInteractor", PyvtkSMContextViewProxy_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor() override;\n\nReturns the interactor.\n"},
  {"ResetDisplay", PyvtkSMContextViewProxy_ResetDisplay, METH_VARARGS,
   "V.ResetDisplay()\nC++: virtual void ResetDisplay()\n\nResets the zoom level to 100%\n"},
  {"CanDisplayData", PyvtkSMContextViewProxy_CanDisplayData, METH_VARARGS,
   "V.CanDisplayData(vtkSMSourceProxy, int) -> bool\nC++: bool CanDisplayData(vtkSMSourceProxy *producer,\n    int outputPort) override;\n\nOverridden to report to applications that producers producing\nnon-table datasets are only viewable if they have the \"Plottable\"\nhint. This avoid applications from inadvertently showing large\ndata in charts. CreateDefaultRepresentation() will still work\nwithout regard for this Plottable hint.\n"},
  {"GetCurrentSelection", PyvtkSMContextViewProxy_GetCurrentSelection, METH_VARARGS,
   "V.GetCurrentSelection() -> vtkSelection\nC++: vtkSelection *GetCurrentSelection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMContextViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMContextViewProxy", // tp_name
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
  PyvtkSMContextViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMContextViewProxy_StaticNew()
{
  return vtkSMContextViewProxy::New();
}

PyObject *PyvtkSMContextViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMContextViewProxy_Type, PyvtkSMContextViewProxy_Methods,
    "vtkSMContextViewProxy",
 &PyvtkSMContextViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMContextViewProxy_Type;

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

void PyVTKAddFile_vtkSMContextViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMContextViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMContextViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

