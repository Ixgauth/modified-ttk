// python wrapper for vtkPVTrackballZoom
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
#include "vtkPVTrackballZoom.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTrackballZoom(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTrackballZoom_ClassNew(); }

#ifndef DECLARED_PyvtkCameraManipulator_ClassNew
extern "C" { PyObject *PyvtkCameraManipulator_ClassNew(); }
#define DECLARED_PyvtkCameraManipulator_ClassNew
#endif

static const char *PyvtkPVTrackballZoom_Doc =
  "vtkPVTrackballZoom - Zooms camera with vertical mouse movement.\n\n"
  "Superclass: vtkCameraManipulator\n\n"
  "vtkPVTrackballZoom allows the user to interactively manipulate the\n"
  "camera, the viewpoint of the scene. Moving the mouse down zooms in.\n"
  "Up zooms out.\n\n"
  "When zooming in Perpective projection, this manipulator by default,\n"
  "dollys (rather than zooms) i.e. moves the camera further (or farther)\n"
  "in the view direction. This is default behavior. You can change that\n"
  "to use zoom instead i.e. change view angle on camera, by setting\n"
  "UseDollyForPerspectiveProjection to off.\n\n";


static PyObject *
PyvtkPVTrackballZoom_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTrackballZoom::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrackballZoom::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTrackballZoom *tempr = vtkPVTrackballZoom::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTrackballZoom *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrackballZoom::NewInstance());

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
PyvtkPVTrackballZoom_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = nullptr;
  vtkRenderWindowInteractor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVTrackballZoom::OnMouseMove(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = nullptr;
  vtkRenderWindowInteractor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnButtonDown(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVTrackballZoom::OnButtonDown(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *temp2 = nullptr;
  vtkRenderWindowInteractor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->OnButtonUp(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVTrackballZoom::OnButtonUp(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_SetUseDollyForPerspectiveProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDollyForPerspectiveProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDollyForPerspectiveProjection(temp0);
    }
    else
    {
      op->vtkPVTrackballZoom::SetUseDollyForPerspectiveProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_GetUseDollyForPerspectiveProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDollyForPerspectiveProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDollyForPerspectiveProjection() :
      op->vtkPVTrackballZoom::GetUseDollyForPerspectiveProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_UseDollyForPerspectiveProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDollyForPerspectiveProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDollyForPerspectiveProjectionOn();
    }
    else
    {
      op->vtkPVTrackballZoom::UseDollyForPerspectiveProjectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballZoom_UseDollyForPerspectiveProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDollyForPerspectiveProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballZoom *op = static_cast<vtkPVTrackballZoom *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDollyForPerspectiveProjectionOff();
    }
    else
    {
      op->vtkPVTrackballZoom::UseDollyForPerspectiveProjectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTrackballZoom_Methods[] = {
  {"IsTypeOf", PyvtkPVTrackballZoom_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTrackballZoom_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTrackballZoom_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTrackballZoom\nC++: static vtkPVTrackballZoom *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTrackballZoom_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTrackballZoom\nC++: vtkPVTrackballZoom *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkPVTrackballZoom_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonDown", PyvtkPVTrackballZoom_OnButtonDown, METH_VARARGS,
   "V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonUp", PyvtkPVTrackballZoom_OnButtonUp, METH_VARARGS,
   "V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"SetUseDollyForPerspectiveProjection", PyvtkPVTrackballZoom_SetUseDollyForPerspectiveProjection, METH_VARARGS,
   "V.SetUseDollyForPerspectiveProjection(bool)\nC++: virtual void SetUseDollyForPerspectiveProjection(bool _arg)\n\nSet this to false (true by default) to not dolly in case of\nperspective projection and use zoom i.e. change view angle,\ninstead.\n"},
  {"GetUseDollyForPerspectiveProjection", PyvtkPVTrackballZoom_GetUseDollyForPerspectiveProjection, METH_VARARGS,
   "V.GetUseDollyForPerspectiveProjection() -> bool\nC++: virtual bool GetUseDollyForPerspectiveProjection()\n\n"},
  {"UseDollyForPerspectiveProjectionOn", PyvtkPVTrackballZoom_UseDollyForPerspectiveProjectionOn, METH_VARARGS,
   "V.UseDollyForPerspectiveProjectionOn()\nC++: virtual void UseDollyForPerspectiveProjectionOn()\n\n"},
  {"UseDollyForPerspectiveProjectionOff", PyvtkPVTrackballZoom_UseDollyForPerspectiveProjectionOff, METH_VARARGS,
   "V.UseDollyForPerspectiveProjectionOff()\nC++: virtual void UseDollyForPerspectiveProjectionOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTrackballZoom_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVTrackballZoom", // tp_name
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
  PyvtkPVTrackballZoom_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTrackballZoom_StaticNew()
{
  return vtkPVTrackballZoom::New();
}

PyObject *PyvtkPVTrackballZoom_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTrackballZoom_Type, PyvtkPVTrackballZoom_Methods,
    "vtkPVTrackballZoom",
 &PyvtkPVTrackballZoom_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTrackballZoom_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCameraManipulator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVTrackballZoom(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTrackballZoom_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTrackballZoom", o) != 0)
  {
    Py_DECREF(o);
  }

}

