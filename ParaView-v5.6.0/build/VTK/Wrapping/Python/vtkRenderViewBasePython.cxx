// python wrapper for vtkRenderViewBase
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
#include "vtkRenderViewBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderViewBase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderViewBase_ClassNew(); }

#ifndef DECLARED_PyvtkView_ClassNew
extern "C" { PyObject *PyvtkView_ClassNew(); }
#define DECLARED_PyvtkView_ClassNew
#endif

static const char *PyvtkRenderViewBase_Doc =
  "vtkRenderViewBase - A base view containing a renderer.\n\n"
  "Superclass: vtkView\n\n"
  "vtkRenderViewBase is a view which contains a vtkRenderer.  You may\n"
  "add vtkActors directly to the renderer.\n\n"
  "This class is also the parent class for any more specialized view\n"
  "which uses a renderer.\n\n";


static PyObject *
PyvtkRenderViewBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderViewBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderViewBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderViewBase *tempr = vtkRenderViewBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderViewBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderViewBase::NewInstance());

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
PyvtkRenderViewBase_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkRenderViewBase::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkRenderViewBase::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkRenderViewBase::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

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
      op->vtkRenderViewBase::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkRenderViewBase::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkRenderViewBase::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderViewBase::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCamera();
    }
    else
    {
      op->vtkRenderViewBase::ResetCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderViewBase_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCameraClippingRange();
    }
    else
    {
      op->vtkRenderViewBase::ResetCameraClippingRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderViewBase_Methods[] = {
  {"IsTypeOf", PyvtkRenderViewBase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderViewBase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderViewBase_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderViewBase\nC++: static vtkRenderViewBase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderViewBase_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderViewBase\nC++: vtkRenderViewBase *NewInstance()\n\n"},
  {"GetRenderer", PyvtkRenderViewBase_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGets the renderer for this view.\n"},
  {"SetRenderer", PyvtkRenderViewBase_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\n"},
  {"GetRenderWindow", PyvtkRenderViewBase_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nGet a handle to the render window.\n"},
  {"SetRenderWindow", PyvtkRenderViewBase_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *win)\n\nSet the render window for this view. Note that this requires\nspecial handling in order to do correctly - see the notes in the\ndetailed description of vtkRenderViewBase.\n"},
  {"GetInteractor", PyvtkRenderViewBase_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nThe render window interactor. Note that this requires special\nhandling in order to do correctly - see the notes in the detailed\ndescription of vtkRenderViewBase.\n"},
  {"SetInteractor", PyvtkRenderViewBase_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *)\n\nThe render window interactor. Note that this requires special\nhandling in order to do correctly - see the notes in the detailed\ndescription of vtkRenderViewBase.\n"},
  {"Render", PyvtkRenderViewBase_Render, METH_VARARGS,
   "V.Render()\nC++: virtual void Render()\n\nUpdates the representations, then calls Render() on the render\nwindow associated with this view.\n"},
  {"ResetCamera", PyvtkRenderViewBase_ResetCamera, METH_VARARGS,
   "V.ResetCamera()\nC++: virtual void ResetCamera()\n\nUpdates the representations, then calls ResetCamera() on the\nrenderer associated with this view.\n"},
  {"ResetCameraClippingRange", PyvtkRenderViewBase_ResetCameraClippingRange, METH_VARARGS,
   "V.ResetCameraClippingRange()\nC++: virtual void ResetCameraClippingRange()\n\nUpdates the representations, then calls\nResetCameraClippingRange() on the renderer associated with this\nview.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderViewBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkViewsCorePython.vtkRenderViewBase", // tp_name
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
  PyvtkRenderViewBase_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderViewBase_StaticNew()
{
  return vtkRenderViewBase::New();
}

PyObject *PyvtkRenderViewBase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderViewBase_Type, PyvtkRenderViewBase_Methods,
    "vtkRenderViewBase",
 &PyvtkRenderViewBase_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderViewBase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderViewBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderViewBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderViewBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

